// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/DetectedRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_ROBOT__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/detected_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedRobot_roi
{
public:
  Init_DetectedRobot_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::msg::DetectedRobot roi(::robomaster_msgs::msg::DetectedRobot::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::DetectedRobot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::DetectedRobot>()
{
  return robomaster_msgs::msg::builder::Init_DetectedRobot_roi();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_ROBOT__BUILDER_HPP_
