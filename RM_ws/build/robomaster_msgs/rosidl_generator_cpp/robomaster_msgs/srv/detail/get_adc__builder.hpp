// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:srv/GetADC.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__SRV__DETAIL__GET_ADC__BUILDER_HPP_
#define ROBOMASTER_MSGS__SRV__DETAIL__GET_ADC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/srv/detail/get_adc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace srv
{

namespace builder
{

class Init_GetADC_Request_port
{
public:
  explicit Init_GetADC_Request_port(::robomaster_msgs::srv::GetADC_Request & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::srv::GetADC_Request port(::robomaster_msgs::srv::GetADC_Request::_port_type arg)
  {
    msg_.port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::srv::GetADC_Request msg_;
};

class Init_GetADC_Request_id
{
public:
  Init_GetADC_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetADC_Request_port id(::robomaster_msgs::srv::GetADC_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_GetADC_Request_port(msg_);
  }

private:
  ::robomaster_msgs::srv::GetADC_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::srv::GetADC_Request>()
{
  return robomaster_msgs::srv::builder::Init_GetADC_Request_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace srv
{

namespace builder
{

class Init_GetADC_Response_value
{
public:
  explicit Init_GetADC_Response_value(::robomaster_msgs::srv::GetADC_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::srv::GetADC_Response value(::robomaster_msgs::srv::GetADC_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::srv::GetADC_Response msg_;
};

class Init_GetADC_Response_valid
{
public:
  Init_GetADC_Response_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetADC_Response_value valid(::robomaster_msgs::srv::GetADC_Response::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_GetADC_Response_value(msg_);
  }

private:
  ::robomaster_msgs::srv::GetADC_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::srv::GetADC_Response>()
{
  return robomaster_msgs::srv::builder::Init_GetADC_Response_valid();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__SRV__DETAIL__GET_ADC__BUILDER_HPP_
