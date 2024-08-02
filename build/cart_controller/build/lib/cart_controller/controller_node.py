#!/usr/bin/env python
# -*- coding: utf-8 -*-
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
import serial
from time import time

"""
@autor yoshida keisuke 
-----------------------------------------
"""

class Cart_Controller(Node):
    def __init__(self,**args):
        super().__init__('cart_node')
        self.subscription = self.create_subscription(
            Twist,
            'cmd_vel',
            self.cmd_vel_callback,
            10
        )
        self.ser = serial.Serial('/dev/ttyUSB-arduino-cart', 115200) #timeout=1)
        time.sleep(2) #serial_port openに2秒ほどいるらしい

        self.create_timer(0.1, self.get_position)

    def cmd_vel_callback(self, msg):
        linear_x = msg.linear.x
        angular_z = msg.angular.z
        send_data = f"S{linear_x:.2f},{angular_z:.2f}E\n"        
        self.ser.write(send_data.encode(encoding='utf-8'))
        # self.get_logger().info(f'Sent: {send_data.strip()}')

    def get_position(self):
        response = self.ser.readline().decode().strip()
        if response.startswith("S") and response.endswith("E"):
            values = response[1:-1].split(',')
            if len(values) == 3:
                x, y, theta = map(float, values)
                
                odom = Odometry()
                odom.header.stamp = self.get_clock().now().to_msg()
                odom.header.frame_id = "odom"
                odom.child_frame_id = "base_link"
                
                odom.pose.pose.position.x = x
                odom.pose.pose.position.y = y
                odom.pose.pose.orientation.z = theta
                
                self.publisher.publish(odom)
                self.get_logger().info(f'Received position: x={x}, y={y}, theta={theta}')
            else:
                    self.get_logger().warn('Invalid position data received')
        else:
            self.get_logger().warn('Invalid response format')

def main():
    try:
        rclpy.init()
        node = Cart_Controller()
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("Ctrl+Cが入力されました")  
        print("プログラム終了") 
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
 
