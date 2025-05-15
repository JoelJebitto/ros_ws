#include "rclcpp/rclcpp.hpp"
#include <rclcpp/executors.hpp>
#include <rclcpp/utilities.hpp>
// #include "my"
class HardwareStatusPublisher : public rclcpp::Node {
public:
  HardwareStatusPublisher() : Node("hardware_status_publisher") {}

private:
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);

  auto node = std::make_shared<HardwareStatusPublisher>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
