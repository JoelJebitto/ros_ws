#include "my_robot_interface/msg/hardware_status.hpp"
#include <functional>
#include <rclcpp/executors.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp/node.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/utilities.hpp>

using namespace std::chrono_literals;

class HardwareStatusPublisher : public rclcpp::Node {
public:
  HardwareStatusPublisher() : Node("hardware_status_publisher") {
    pub_ = this->create_publisher<my_robot_interface::msg::HardwareStatus>(
        "hardware_status_publisher", 10);
    timer_ = this->create_wall_timer(
        1s, std::bind(&HardwareStatusPublisher::publishHardwareStatus, this));
    RCLCPP_INFO(this->get_logger(), "Hardware Status publish has started");
  }

private:
  void publishHardwareStatus() {
    auto msg = my_robot_interface::msg::HardwareStatus();
    msg.are_motors_ready = true;
    msg.debug_message = "ready to go!!";
    msg.temperature = 57.8;
    pub_->publish(msg);
  }
  rclcpp::Publisher<my_robot_interface::msg::HardwareStatus>::SharedPtr pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);

  auto node = std::make_shared<HardwareStatusPublisher>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
