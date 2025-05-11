#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"
#include <rclcpp/logging.hpp>
#include <rclcpp/subscription.hpp>

class Phone: public rclcpp::Node
{
public:
    Phone() : Node("smartphone")
    {
        subscriber_ = this->create_subscription<example_interfaces::msg::String>("robot_news",10, std::bind(&Phone::callbackRobotNews, this, std::placeholders::_1));
    
    }
private:
    void callbackRobotNews(const example_interfaces::msg::String::SharedPtr msg){
        RCLCPP_INFO(this->get_logger(), "%s", msg->data.c_str());
    }
    rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_;
};




int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Phone>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
