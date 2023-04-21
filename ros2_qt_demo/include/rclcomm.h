#ifndef RCLCOMM_H
#define RCLCOMM_H
#include <QObject>
#include <QThread>
#include <iostream>
// 1.包含头文件；
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
class RclComm : public QThread
{
    Q_OBJECT
public:
    RclComm(); // 初始化节点
    // 处理订阅到的消息
    void recv_callback(const std_msgs::msg::String &msg);
    // spin
    void sping();

    void _pub_msgs(QString str);

private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr _pubp;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr _subp;
    std::shared_ptr<rclcpp::Node> _node;
signals:
    void emitTopicData(QString);
};
#endif // RCLCOMM_H