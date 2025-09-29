// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/ServoRawState.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/servo_raw_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoRawState_speed
{
public:
  explicit Init_ServoRawState_speed(::robomaster_msgs::msg::ServoRawState & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::ServoRawState speed(::robomaster_msgs::msg::ServoRawState::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::ServoRawState msg_;
};

class Init_ServoRawState_value
{
public:
  explicit Init_ServoRawState_value(::robomaster_msgs::msg::ServoRawState & msg)
  : msg_(msg)
  {}
  Init_ServoRawState_speed value(::robomaster_msgs::msg::ServoRawState::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_ServoRawState_speed(msg_);
  }

private:
  ::robomaster_msgs::msg::ServoRawState msg_;
};

class Init_ServoRawState_valid
{
public:
  explicit Init_ServoRawState_valid(::robomaster_msgs::msg::ServoRawState & msg)
  : msg_(msg)
  {}
  Init_ServoRawState_value valid(::robomaster_msgs::msg::ServoRawState::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_ServoRawState_value(msg_);
  }

private:
  ::robomaster_msgs::msg::ServoRawState msg_;
};

class Init_ServoRawState_header
{
public:
  Init_ServoRawState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoRawState_valid header(::robomaster_msgs::msg::ServoRawState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ServoRawState_valid(msg_);
  }

private:
  ::robomaster_msgs::msg::ServoRawState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::ServoRawState>()
{
  return robomaster_msgs::msg::builder::Init_ServoRawState_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__BUILDER_HPP_
