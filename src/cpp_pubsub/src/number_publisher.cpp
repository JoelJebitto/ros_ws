#include "example_interfaces/msg/int64.hpp"
#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <example_interfaces/msg/int64.hpp>
#include <functional>
#include <rclcpp/publisher.hpp>
#include <rclcpp/publisher_base.hpp>
#include <rclcpp/timer.hpp>

using namespace std::chrono_literals;

class MyNode : public rclcpp::Node {
public:
  MyNode() : Node("number_publisher") {
    this->declare_parameter("number", 2);
    this->declare_parameter("timer_period", 1.0);
    number_ = this->get_parameter("number").as_int();
    double timer_period_ = this->get_parameter("timer_period").as_double();
    publisher_ = this->create_publisher<example_interfaces::msg::Int64>(
        "number_publisher", 10);
    timer_ =
        this->create_wall_timer(std::chrono::duration<double>(timer_period_),
                                std::bind(&MyNode::timer_callback, this));
  }

private:
  void timer_callback() {
    auto msg = example_interfaces::msg::Int64();

    number_ = this->get_parameter("number").as_int();
    msg.data = number_;
    publisher_->publish(msg);
  }
  int number_;
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MyNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
