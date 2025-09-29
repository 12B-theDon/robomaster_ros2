// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__REGION_OF_INTEREST__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__REGION_OF_INTEREST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/region_of_interest__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_RegionOfInterest_width
{
public:
  explicit Init_RegionOfInterest_width(::robomaster_msgs::msg::RegionOfInterest & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::RegionOfInterest width(::robomaster_msgs::msg::RegionOfInterest::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::RegionOfInterest msg_;
};

class Init_RegionOfInterest_height
{
public:
  explicit Init_RegionOfInterest_height(::robomaster_msgs::msg::RegionOfInterest & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterest_width height(::robomaster_msgs::msg::RegionOfInterest::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_RegionOfInterest_width(msg_);
  }

private:
  ::robomaster_msgs::msg::RegionOfInterest msg_;
};

class Init_RegionOfInterest_y_offset
{
public:
  explicit Init_RegionOfInterest_y_offset(::robomaster_msgs::msg::RegionOfInterest & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterest_height y_offset(::robomaster_msgs::msg::RegionOfInterest::_y_offset_type arg)
  {
    msg_.y_offset = std::move(arg);
    return Init_RegionOfInterest_height(msg_);
  }

private:
  ::robomaster_msgs::msg::RegionOfInterest msg_;
};

class Init_RegionOfInterest_x_offset
{
public:
  Init_RegionOfInterest_x_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegionOfInterest_y_offset x_offset(::robomaster_msgs::msg::RegionOfInterest::_x_offset_type arg)
  {
    msg_.x_offset = std::move(arg);
    return Init_RegionOfInterest_y_offset(msg_);
  }

private:
  ::robomaster_msgs::msg::RegionOfInterest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::RegionOfInterest>()
{
  return robomaster_msgs::msg::builder::Init_RegionOfInterest_x_offset();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__REGION_OF_INTEREST__BUILDER_HPP_
