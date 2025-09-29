// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/DetectedPerson.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_PERSON__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_PERSON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/detected_person__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedPerson_roi
{
public:
  Init_DetectedPerson_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::msg::DetectedPerson roi(::robomaster_msgs::msg::DetectedPerson::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::DetectedPerson msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::DetectedPerson>()
{
  return robomaster_msgs::msg::builder::Init_DetectedPerson_roi();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_PERSON__BUILDER_HPP_
