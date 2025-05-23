#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
class AddTwoIntsServer(Node):
    def __init__(self):
        super().__init__("add_two_ints_server")
        self.server_ = self.create_service(AddTwoInts,"add_two_ints", self.callback_add_two_ints)
    
    def callback_add_two_ints(self, req:AddTwoInts.Request, res:AddTwoInts.Response):
        res.sum = req.a + req.b
        self.get_logger().info(str(res.sum)) 
        return res

def main():
    rclpy.init()
    node = AddTwoIntsServer()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main() 
