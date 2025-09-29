// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/SensorAdapter.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SENSOR_ADAPTER__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SENSOR_ADAPTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/sensor_adapter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorAdapter_id
{
public:
  explicit Init_SensorAdapter_id(::robomaster_msgs::msg::SensorAdapter & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::SensorAdapter id(::robomaster_msgs::msg::SensorAdapter::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::SensorAdapter msg_;
};

class Init_SensorAdapter_port
{
public:
  explicit Init_SensorAdapter_port(::robomaster_msgs::msg::SensorAdapter & msg)
  : msg_(msg)
  {}
  Init_SensorAdapter_id port(::robomaster_msgs::msg::SensorAdapter::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_SensorAdapter_id(msg_);
  }

private:
  ::robomaster_msgs::msg::SensorAdapter msg_;
};

class Init_SensorAdapter_adc
{
public:
  explicit Init_SensorAdapter_adc(::robomaster_msgs::msg::SensorAdapter & msg)
  : msg_(msg)
  {}
  Init_SensorAdapter_port adc(::robomaster_msgs::msg::SensorAdapter::_adc_type arg)
  {
    msg_.adc = std::move(arg);
    return Init_SensorAdapter_port(msg_);
  }

private:
  ::robomaster_msgs::msg::SensorAdapter msg_;
};

class Init_SensorAdapter_io
{
public:
  explicit Init_SensorAdapter_io(::robomaster_msgs::msg::SensorAdapter & msg)
  : msg_(msg)
  {}
  Init_SensorAdapter_adc io(::robomaster_msgs::msg::SensorAdapter::_io_type arg)
  {
    msg_.io = std::move(arg);
    return Init_SensorAdapter_adc(msg_);
  }

private:
  ::robomaster_msgs::msg::SensorAdapter msg_;
};

class Init_SensorAdapter_header
{
public:
  Init_SensorAdapter_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorAdapter_io header(::robomaster_msgs::msg::SensorAdapter::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorAdapter_io(msg_);
  }

private:
  ::robomaster_msgs::msg::SensorAdapter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::SensorAdapter>()
{
  return robomaster_msgs::msg::builder::Init_SensorAdapter_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SENSOR_ADAPTER__BUILDER_HPP_
