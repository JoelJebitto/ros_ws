
#include "example_interfaces/msg/int64.hpp"
#include "rclcpp/rclcpp.hpp"
#include <rclcpp/logging.hpp>
#include <rclcpp/subscription.hpp>

using namespace std::chrono_literals;
class NumberCounter: public rclcpp::Node
{
public:
   NumberCounter() : Node("number_counter")
    {
        subscriber_ = this->create_subscription<example_interfaces::msg::Int64>("number_publisher",10, std::bind(&NumberCounter::callbackNumber, this, std::placeholders::_1));
    publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number_counter", 10);        

    }
private:

    void callbackNumber(const example_interfaces::msg::Int64::SharedPtr msg1){
        counter_ +=msg1->data;
        auto msg = example_interfaces::msg::Int64();
        msg.data = counter_;
        publisher_->publish(msg);

        // RCLCPP_INFO(this->get_logger(), "%ld", counter_);
    }
    rclcpp::Subscription<example_interfaces::msg::Int64>::SharedPtr subscriber_;
    long counter_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_;
};




int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberCounter>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
