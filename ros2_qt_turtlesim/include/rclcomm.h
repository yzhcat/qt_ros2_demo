#ifndef RCLCOMM_H
#define RCLCOMM_H
#include <QObject>
#include <QThread>
#include <iostream>
// 1.包含头文件；
#include "rclcpp/rclcpp.hpp"
#include <geometry_msgs/msg/twist.hpp>
class RclComm : public QThread
{
    Q_OBJECT
public:
    RclComm(); // 初始化节点
    // 设置话题和pub
    void _set_pub(std::string topic_name);
    bool _pub_is_ok;
    // 发送消息
    void _pub_msgs(int udlr);

private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr _pubp;
    std::shared_ptr<rclcpp::Node> _node;
signals:
    // void emitTopicData(QString);
};
#endif // RCLCOMM_H