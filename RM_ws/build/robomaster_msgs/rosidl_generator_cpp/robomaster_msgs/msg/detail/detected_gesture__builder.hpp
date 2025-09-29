// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/DetectedGesture.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_GESTURE__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_GESTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/detected_gesture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedGesture_kind
{
public:
  explicit Init_DetectedGesture_kind(::robomaster_msgs::msg::DetectedGesture & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::DetectedGesture kind(::robomaster_msgs::msg::DetectedGesture::_kind_type arg)
  {
    msg_.kind = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::DetectedGesture msg_;
};

class Init_DetectedGesture_roi
{
public:
  Init_DetectedGesture_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedGesture_kind roi(::robomaster_msgs::msg::DetectedGesture::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_DetectedGesture_kind(msg_);
  }

private:
  ::robomaster_msgs::msg::DetectedGesture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::DetectedGesture>()
{
  return robomaster_msgs::msg::builder::Init_DetectedGesture_roi();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_GESTURE__BUILDER_HPP_
