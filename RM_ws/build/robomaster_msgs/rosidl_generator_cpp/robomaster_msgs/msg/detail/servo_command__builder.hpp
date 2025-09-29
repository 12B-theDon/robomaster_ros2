// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/ServoCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/servo_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoCommand_angular_speed
{
public:
  explicit Init_ServoCommand_angular_speed(::robomaster_msgs::msg::ServoCommand & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::ServoCommand angular_speed(::robomaster_msgs::msg::ServoCommand::_angular_speed_type arg)
  {
    msg_.angular_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::ServoCommand msg_;
};

class Init_ServoCommand_enable
{
public:
  explicit Init_ServoCommand_enable(::robomaster_msgs::msg::ServoCommand & msg)
  : msg_(msg)
  {}
  Init_ServoCommand_angular_speed enable(::robomaster_msgs::msg::ServoCommand::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_ServoCommand_angular_speed(msg_);
  }

private:
  ::robomaster_msgs::msg::ServoCommand msg_;
};

class Init_ServoCommand_index
{
public:
  Init_ServoCommand_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoCommand_enable index(::robomaster_msgs::msg::ServoCommand::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_ServoCommand_enable(msg_);
  }

private:
  ::robomaster_msgs::msg::ServoCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::ServoCommand>()
{
  return robomaster_msgs::msg::builder::Init_ServoCommand_index();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__BUILDER_HPP_
