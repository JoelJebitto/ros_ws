#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class MyNode(Node):
    def __init__(self):
        super().__init__("my_first_node")
        self.subscriber_ = self.create_subscription(String,
                                                    "robot_news",
                                                    self.callback_robot_news,
                                                    10)

    def callback_robot_news(self,msg:String):
        self.get_logger().info(msg.data)
        
def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    # node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main() 
