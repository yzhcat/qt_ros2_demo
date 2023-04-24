#include "rclcomm.h"
#include <string>

RclComm::RclComm()
{
    // 初始化 ROS2 客户端；
    rclcpp::init(0, NULL);
    // 创建节点对象指针；
    this->_node = rclcpp::Node::make_shared("ros2_qt_pub"); // 节点名称
    _pub_is_ok = 0;
}
void RclComm::_set_pub(std::string topic_name)
{
    // 创建发布者
    this->_pubp =
        this->_node->create_publisher<geometry_msgs::msg::Twist>(topic_name, 10);
    _pub_is_ok = 1;
}
void RclComm::_pub_msgs(int udlr)
{
    /* ros2 topic pub --once /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear:{x: 2.0,y: 0.0,z: 0.0},angular:{x: 0.0,y: 0.0,z: 1.8}}" */
    geometry_msgs::msg::Twist twist;
    switch (udlr)
    {
    case 0: // 前
        twist.linear.x = 1.0;
        break;
    case 1: // 后
        twist.linear.x = -1.0;
        break;
    case 2: // 左
        twist.angular.z = 1.8;
        break;
    case 3: // 右
        twist.angular.z = -1.8;
        break;
    case 5: // 左前
        twist.linear.x = 1.0;
        twist.angular.z = 1.8;
        break;
    case 6: // 右前
        twist.linear.x = 1.0;
        twist.angular.z = -1.8;
        break;
    case 7: // 左后
        twist.linear.x = -1.0;
        twist.angular.z = 1.8;
        break;
    case 8: // 右后
        twist.linear.x = -1.0;
        twist.angular.z = -1.8;
        break;

    default:
        twist.linear.x = 0;
        twist.angular.z = 0;
        break;
    }
    this->_pubp->publish(twist);
}