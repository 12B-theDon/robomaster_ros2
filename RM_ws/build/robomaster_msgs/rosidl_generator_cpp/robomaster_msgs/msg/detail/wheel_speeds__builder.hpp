// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/WheelSpeeds.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__WHEEL_SPEEDS__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__WHEEL_SPEEDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/wheel_speeds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelSpeeds_rear_right
{
public:
  explicit Init_WheelSpeeds_rear_right(::robomaster_msgs::msg::WheelSpeeds & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::WheelSpeeds rear_right(::robomaster_msgs::msg::WheelSpeeds::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::WheelSpeeds msg_;
};

class Init_WheelSpeeds_rear_left
{
public:
  explicit Init_WheelSpeeds_rear_left(::robomaster_msgs::msg::WheelSpeeds & msg)
  : msg_(msg)
  {}
  Init_WheelSpeeds_rear_right rear_left(::robomaster_msgs::msg::WheelSpeeds::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_WheelSpeeds_rear_right(msg_);
  }

private:
  ::robomaster_msgs::msg::WheelSpeeds msg_;
};

class Init_WheelSpeeds_front_right
{
public:
  explicit Init_WheelSpeeds_front_right(::robomaster_msgs::msg::WheelSpeeds & msg)
  : msg_(msg)
  {}
  Init_WheelSpeeds_rear_left front_right(::robomaster_msgs::msg::WheelSpeeds::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_WheelSpeeds_rear_left(msg_);
  }

private:
  ::robomaster_msgs::msg::WheelSpeeds msg_;
};

class Init_WheelSpeeds_front_left
{
public:
  Init_WheelSpeeds_front_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelSpeeds_front_right front_left(::robomaster_msgs::msg::WheelSpeeds::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_WheelSpeeds_front_right(msg_);
  }

private:
  ::robomaster_msgs::msg::WheelSpeeds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::WheelSpeeds>()
{
  return robomaster_msgs::msg::builder::Init_WheelSpeeds_front_left();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__WHEEL_SPEEDS__BUILDER_HPP_
