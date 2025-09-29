// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/GimbalCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/gimbal_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalCommand_pitch_speed
{
public:
  explicit Init_GimbalCommand_pitch_speed(::robomaster_msgs::msg::GimbalCommand & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::GimbalCommand pitch_speed(::robomaster_msgs::msg::GimbalCommand::_pitch_speed_type arg)
  {
    msg_.pitch_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::GimbalCommand msg_;
};

class Init_GimbalCommand_yaw_speed
{
public:
  Init_GimbalCommand_yaw_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalCommand_pitch_speed yaw_speed(::robomaster_msgs::msg::GimbalCommand::_yaw_speed_type arg)
  {
    msg_.yaw_speed = std::move(arg);
    return Init_GimbalCommand_pitch_speed(msg_);
  }

private:
  ::robomaster_msgs::msg::GimbalCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::GimbalCommand>()
{
  return robomaster_msgs::msg::builder::Init_GimbalCommand_yaw_speed();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__BUILDER_HPP_
