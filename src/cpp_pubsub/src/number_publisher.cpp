#include "example_interfaces/msg/int64.hpp"
#include "rclcpp/rclcpp.hpp"
#include <example_interfaces/msg/int64.hpp>
#include <functional>
#include <rclcpp/publisher.hpp>
#include <rclcpp/publisher_base.hpp>
#include <rclcpp/timer.hpp>

using namespace std::chrono_literals;


class MyNode: public rclcpp::Node
{
public:
    MyNode() : Node("number_publisher")
    {
        publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number_publisher", 10);        
        timer_ = this->create_wall_timer(0.5s, std::bind(&MyNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto msg = example_interfaces::msg::Int64();
        msg.data = 7;
        publisher_->publish(msg);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_;
};




int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
