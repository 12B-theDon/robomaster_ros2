// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/ArmorHit.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__ARMOR_HIT__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__ARMOR_HIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/armor_hit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmorHit_level
{
public:
  explicit Init_ArmorHit_level(::robomaster_msgs::msg::ArmorHit & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::ArmorHit level(::robomaster_msgs::msg::ArmorHit::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::ArmorHit msg_;
};

class Init_ArmorHit_location
{
public:
  explicit Init_ArmorHit_location(::robomaster_msgs::msg::ArmorHit & msg)
  : msg_(msg)
  {}
  Init_ArmorHit_level location(::robomaster_msgs::msg::ArmorHit::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_ArmorHit_level(msg_);
  }

private:
  ::robomaster_msgs::msg::ArmorHit msg_;
};

class Init_ArmorHit_type
{
public:
  explicit Init_ArmorHit_type(::robomaster_msgs::msg::ArmorHit & msg)
  : msg_(msg)
  {}
  Init_ArmorHit_location type(::robomaster_msgs::msg::ArmorHit::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ArmorHit_location(msg_);
  }

private:
  ::robomaster_msgs::msg::ArmorHit msg_;
};

class Init_ArmorHit_header
{
public:
  Init_ArmorHit_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmorHit_type header(::robomaster_msgs::msg::ArmorHit::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArmorHit_type(msg_);
  }

private:
  ::robomaster_msgs::msg::ArmorHit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::ArmorHit>()
{
  return robomaster_msgs::msg::builder::Init_ArmorHit_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__ARMOR_HIT__BUILDER_HPP_
