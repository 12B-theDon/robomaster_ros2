// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperState_state
{
public:
  explicit Init_GripperState_state(::robomaster_msgs::msg::GripperState & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::GripperState state(::robomaster_msgs::msg::GripperState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::GripperState msg_;
};

class Init_GripperState_header
{
public:
  Init_GripperState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperState_state header(::robomaster_msgs::msg::GripperState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GripperState_state(msg_);
  }

private:
  ::robomaster_msgs::msg::GripperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::GripperState>()
{
  return robomaster_msgs::msg::builder::Init_GripperState_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
