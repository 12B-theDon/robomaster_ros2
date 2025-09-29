// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/DetectedLine.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_LINE__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/detected_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedLine_curvature
{
public:
  explicit Init_DetectedLine_curvature(::robomaster_msgs::msg::DetectedLine & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::DetectedLine curvature(::robomaster_msgs::msg::DetectedLine::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::DetectedLine msg_;
};

class Init_DetectedLine_angle
{
public:
  explicit Init_DetectedLine_angle(::robomaster_msgs::msg::DetectedLine & msg)
  : msg_(msg)
  {}
  Init_DetectedLine_curvature angle(::robomaster_msgs::msg::DetectedLine::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_DetectedLine_curvature(msg_);
  }

private:
  ::robomaster_msgs::msg::DetectedLine msg_;
};

class Init_DetectedLine_y
{
public:
  explicit Init_DetectedLine_y(::robomaster_msgs::msg::DetectedLine & msg)
  : msg_(msg)
  {}
  Init_DetectedLine_angle y(::robomaster_msgs::msg::DetectedLine::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DetectedLine_angle(msg_);
  }

private:
  ::robomaster_msgs::msg::DetectedLine msg_;
};

class Init_DetectedLine_x
{
public:
  Init_DetectedLine_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedLine_y x(::robomaster_msgs::msg::DetectedLine::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DetectedLine_y(msg_);
  }

private:
  ::robomaster_msgs::msg::DetectedLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::DetectedLine>()
{
  return robomaster_msgs::msg::builder::Init_DetectedLine_x();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_LINE__BUILDER_HPP_
