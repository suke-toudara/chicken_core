import onnxruntime as ort
import numpy as np

# ONNXモデルを読み込む
model_path = "/home/suke/chicken_core/src/perception/yolov10_ros/model/yolov10m.onnx"
session = ort.InferenceSession(model_path)

# # 入力データを準備する（例：ランダムな数値の配列）
# input_name = session.get_inputs()[0].name
# input_shape = session.get_inputs()[0].shape
# input_data = np.random.randn(*input_shape).astype(np.float32)

# # 推論を実行する
# output_name = session.get_outputs()[0].name
# outputs = session.run([output_name], {input_name: input_data})

# print(f"Input shape: {input_data.shape}")
# print(f"Output shape: {outputs[0].shape}")
# print(f"Output: {outputs[0]}")


