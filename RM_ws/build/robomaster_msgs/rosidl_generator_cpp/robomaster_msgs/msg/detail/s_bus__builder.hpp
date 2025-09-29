// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/SBus.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__S_BUS__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__S_BUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/s_bus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_SBus_channels
{
public:
  explicit Init_SBus_channels(::robomaster_msgs::msg::SBus & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::SBus channels(::robomaster_msgs::msg::SBus::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::SBus msg_;
};

class Init_SBus_header
{
public:
  Init_SBus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SBus_channels header(::robomaster_msgs::msg::SBus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SBus_channels(msg_);
  }

private:
  ::robomaster_msgs::msg::SBus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::SBus>()
{
  return robomaster_msgs::msg::builder::Init_SBus_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__S_BUS__BUILDER_HPP_
