#include "rclcomm.h"
#include <string>
RclComm::RclComm()
{
    // 初始化 ROS2 客户端；
    rclcpp::init(0, NULL);
    // 创建节点对象指针；
    this->_node = rclcpp::Node::make_shared("ros2_qt_demo"); // 节点名称
    // 创建发布者
    this->_pubp =
        this->_node->create_publisher<std_msgs::msg::String>("chat_qt", 10);
    // 创建订阅者
    this->_subp =
        this->_node->create_subscription<std_msgs::msg::String>("chat_qt", 10, std::bind(&RclComm::recv_callback, this, std::placeholders::_1));
}

void RclComm::_pub_msgs(QString str)
{
    std_msgs::msg::String pub_msgs;
    pub_msgs.data = str.toStdString();
    this->_pubp->publish(pub_msgs);
}

void RclComm::recv_callback(const std_msgs::msg::String &msg)
{
    emit emitTopicData("pub send a msgs:" + QString::fromStdString(msg.data));
}

// spin
void RclComm::sping()
{
    rclcpp::spin_some(_node);
}