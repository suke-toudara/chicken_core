import cv2
import random
import numpy as np
from typing import Tuple, List, Dict

import rclpy
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy
from rclpy.qos import QoSDurabilityPolicy
from rclpy.qos import QoSReliabilityPolicy
from rclpy.lifecycle import LifecycleNode
from rclpy.lifecycle import TransitionCallbackReturn
from rclpy.lifecycle import LifecycleState

from cv_bridge import CvBridge

import torch
from ultralytics import YOLO
from ultralytics.engine.results import Results
from ultralytics.engine.results import Boxes
from ultralytics.engine.results import Masks

from std_srvs.srv import SetBool
from sensor_msgs.msg import Image
import cv2

from yolov10_msg.msg import Point2D
from yolov10_msg.msg import BoundingBox2D
from yolov10_msg.msg import Mask
from yolov10_msg.msg import KeyPoint2D
from yolov10_msg.msg import KeyPoint2DArray
from yolov10_msg.msg import Detection
from yolov10_msg.msg import DetectionArray

class Yolov10Node(LifecycleNode):

    def __init__(self) -> None:
        super().__init__("tdetr_node")

        self._class_to_color = {}
        self.cv_bridge = CvBridge()
        self._dbg_pub = self.create_publisher(Image, "dbg_image", 10)

        # params
        self.declare_parameter("model", "yolov10m.pt")
        self.declare_parameter("device", "cuda:0")
        self.declare_parameter("threshold", 0.5)
        self.declare_parameter("enable", True)
        self.declare_parameter("image_reliability",QoSReliabilityPolicy.BEST_EFFORT)

    def on_configure(self, state: LifecycleState) -> TransitionCallbackReturn:
        self.get_logger().info(f"Configuring {self.get_name()}")
        self.model = self.get_parameter("model").get_parameter_value().string_value
        self.device = self.get_parameter("device").get_parameter_value().string_value
        self.threshold = self.get_parameter("threshold").get_parameter_value().double_value
        self.enable = self.get_parameter("enable").get_parameter_value().bool_value
        self.reliability = self.get_parameter("image_reliability").get_parameter_value().integer_value
        self.image_qos_profile = QoSProfile(
            reliability=self.reliability,
            history=QoSHistoryPolicy.KEEP_LAST,
            durability=QoSDurabilityPolicy.VOLATILE,
            depth=1
        )
        self._pub = self.create_lifecycle_publisher(DetectionArray, "detections", 10)
        self._srv = self.create_service(SetBool, "enable", self.enable_cb)
        self.cv_bridge = CvBridge()
        return TransitionCallbackReturn.SUCCESS
    
    def enable_cb(self, request, response):
        self.enable = request.data
        response.success = True
        return response
    
    def on_activate(self, state: LifecycleState) -> TransitionCallbackReturn:
        self.get_logger().info(f"Activating {self.get_name()}")
        
        self.yolo = YOLO(self.model)

        # subs
        self._sub = self.create_subscription(
            Image,
            "image_raw",
            self.image_cb,
            self.image_qos_profile
        )
        super().on_activate(state)
        return TransitionCallbackReturn.SUCCESS
    

    def on_deactivate(self, state: LifecycleState) -> TransitionCallbackReturn:
        self.get_logger().info(f"Deactivating {self.get_name()}")

        del self.yolo
        if "cuda" in self.device:
            self.get_logger().info("Clearing CUDA cache")
            torch.cuda.empty_cache()

        self.destroy_subscription(self._sub)
        self._sub = None
        super().on_deactivate(state)
        return TransitionCallbackReturn.SUCCESS
    
    def parse_hypothesis(self, results: Results) -> List[Dict]:

        hypothesis_list = []

        box_data: Boxes
        for box_data in results.boxes:
            hypothesis = {
                "class_id": int(box_data.cls),
                "class_name": self.yolo.names[int(box_data.cls)],
                "score": float(box_data.conf)
            }
            hypothesis_list.append(hypothesis)

        return hypothesis_list
    
    def parse_boxes(self, results: Results) -> List[BoundingBox2D]:

        boxes_list = []

        box_data: Boxes
        for box_data in results.boxes:

            msg = BoundingBox2D()

            # get boxes values
            box = box_data.xywh[0]
            msg.center.position.x = float(box[0])
            msg.center.position.y = float(box[1])
            msg.size.x = float(box[2])
            msg.size.y = float(box[3])

            # append msg
            boxes_list.append(msg)    
        return boxes_list
    
    def parse_masks(self, results: Results) -> List[Mask]:

        masks_list = []

        def create_point2d(x: float, y: float) -> Point2D:
            p = Point2D()
            p.x = x
            p.y = y
            return p

        mask: Masks
        for mask in results.masks:

            msg = Mask()

            msg.data = [create_point2d(float(ele[0]), float(ele[1]))
                        for ele in mask.xy[0].tolist()]
            msg.height = results.orig_img.shape[0]
            msg.width = results.orig_img.shape[1]

            masks_list.append(msg)

        return masks_list
          
    def draw_box(self, cv_image: np.array, detection: Detection, color: Tuple[int]) -> np.array:
        label = detection.class_name
        score = detection.score
        box_msg: BoundingBox2D = detection.bbox
        track_id = detection.id

        min_pt = (round(box_msg.center.position.x - box_msg.size.x / 2.0),
                  round(box_msg.center.position.y - box_msg.size.y / 2.0))
        max_pt = (round(box_msg.center.position.x + box_msg.size.x / 2.0),
                  round(box_msg.center.position.y + box_msg.size.y / 2.0))

        cv2.rectangle(cv_image, min_pt, max_pt, color, 2)

        label = "{} ({}) ({:.3f})".format(label, str(track_id), score)
        pos = (min_pt[0] + 5, min_pt[1] + 25)
        font = cv2.FONT_HERSHEY_SIMPLEX
        cv2.putText(cv_image, label, pos, font,1, color, 1, cv2.LINE_AA)

        return cv_image
    
    def draw_mask(self, cv_image: np.ndarray, detection: Detection, color: Tuple[int]) -> np.ndarray:

        mask_msg = detection.mask
        mask_array = np.array([[int(ele.x), int(ele.y)]
                              for ele in mask_msg.data])

        if mask_msg.data:
            layer = cv_image.copy()
            layer = cv2.fillPoly(layer, pts=[mask_array], color=color)
            cv2.addWeighted(cv_image, 0.4, layer, 0.6, 0, cv_image)
            cv_image = cv2.polylines(cv_image, [mask_array], isClosed=True,
                                     color=color, thickness=2, lineType=cv2.LINE_AA)
        return cv_image
    
    def image_cb(self, msg: Image) -> None:

        if self.enable:
            # convert image + predict
            cv_image = self.cv_bridge.imgmsg_to_cv2(msg)
            results = self.yolo.predict(
                source=cv_image,
                verbose=False,
                stream=False,
                conf=self.threshold,
                device=self.device
            )
            results: Results = results[0].cpu()

            if results.boxes:
                hypothesis = self.parse_hypothesis(results)
                boxes = self.parse_boxes(results)

            if results.masks:
                masks = self.parse_masks(results)

            # create detection msgs
            detections_msg = DetectionArray()

            for i in range(len(results)):

                aux_msg = Detection()
                if results.boxes:
                    aux_msg.class_id = hypothesis[i]["class_id"]
                    aux_msg.class_name = hypothesis[i]["class_name"]
                    aux_msg.score = hypothesis[i]["score"]
                    aux_msg.bbox = boxes[i]

                if results.masks:
                    aux_msg.mask = masks[i]

                detections_msg.detections.append(aux_msg)

            # publish detections
            detections_msg.header = msg.header
            self._pub.publish(detections_msg)
        
            detection: Detection
            for detection in detections_msg.detections:
                label = detection.class_name
                if label not in self._class_to_color:
                        r = random.randint(0, 255)
                        g = random.randint(0, 255)
                        b = random.randint(0, 255)
                        self._class_to_color[label] = (r, g, b)

                color = self._class_to_color[label]

                cv_image = self.draw_box(cv_image, detection, color)
                cv_image = self.draw_mask(cv_image, detection, color)
            cv2.imshow("result",cv2.cvtColor(cv_image, cv2.COLOR_RGB2BGR))
            cv2.waitKey(1)
            
            self._dbg_pub.publish(self.cv_bridge.cv2_to_imgmsg(cv_image,encoding=msg.encoding))
            del results
            del cv_image

def main():
    rclpy.init()
    node = Yolov10Node()
    node.trigger_configure()
    node.trigger_activate()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()