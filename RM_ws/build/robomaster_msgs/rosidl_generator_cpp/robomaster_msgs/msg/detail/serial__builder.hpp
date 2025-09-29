// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/Serial.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERIAL__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/serial__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_Serial_data
{
public:
  explicit Init_Serial_data(::robomaster_msgs::msg::Serial & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::Serial data(::robomaster_msgs::msg::Serial::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::Serial msg_;
};

class Init_Serial_header
{
public:
  Init_Serial_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Serial_data header(::robomaster_msgs::msg::Serial::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Serial_data(msg_);
  }

private:
  ::robomaster_msgs::msg::Serial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::Serial>()
{
  return robomaster_msgs::msg::builder::Init_Serial_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERIAL__BUILDER_HPP_
