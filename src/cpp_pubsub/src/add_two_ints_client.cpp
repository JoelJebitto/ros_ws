#include "example_interfaces/srv/add_two_ints.hpp"
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

class AddTwoIntsClient : public rclcpp::Node {
public:
  AddTwoIntsClient() : Node("add_two_ints_client") {
    client_ = this->create_client<example_interfaces::srv::AddTwoInts>(
        "add_two_ints");
  }
  void callAddTwoInts(int a, int b) {
    while (!client_->wait_for_service(1s)) {
      RCLCPP_WARN(this->get_logger(), "waiting for server!!");
    }
    auto requent =
        std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
    requent->a = a;
    requent->b = b;

    client_->async_send_request(requent, std::bind(&AddTwoIntsClient::callbackCallAddtwoInts,this , std::placeholders::_1));
  }

private:
  void callbackCallAddtwoInts(
      rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedFuture
          future) {
    auto response = future.get();
    RCLCPP_INFO(this->get_logger(), "Sum: %d", (int)response->sum);
  }
  rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr client_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<AddTwoIntsClient>();
  node->callAddTwoInts(7,8);
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
