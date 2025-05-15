#include "rclcpp/rclcpp.hpp"

class MyNode: public rclcpp::Node
{
public:
    MyNode() : Node("my_node")
    {
        RCLCPP_INFO(this->get_logger(), "Hi");
        timer_ = this->create_wall_timer(std::chrono::seconds(1),
            std::bind(&MyNode::timer_callback, this));
    }
private:
    void timer_callback()
    {
        RCLCPP_INFO(this->get_logger(), "Hi");

    }
    rclcpp::TimerBase::SharedPtr timer_;

};




int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
