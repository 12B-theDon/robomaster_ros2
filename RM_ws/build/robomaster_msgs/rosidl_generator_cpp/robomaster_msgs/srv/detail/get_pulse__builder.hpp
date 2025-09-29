// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:srv/GetPulse.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__SRV__DETAIL__GET_PULSE__BUILDER_HPP_
#define ROBOMASTER_MSGS__SRV__DETAIL__GET_PULSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/srv/detail/get_pulse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPulse_Request_port
{
public:
  explicit Init_GetPulse_Request_port(::robomaster_msgs::srv::GetPulse_Request & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::srv::GetPulse_Request port(::robomaster_msgs::srv::GetPulse_Request::_port_type arg)
  {
    msg_.port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::srv::GetPulse_Request msg_;
};

class Init_GetPulse_Request_id
{
public:
  Init_GetPulse_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPulse_Request_port id(::robomaster_msgs::srv::GetPulse_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_GetPulse_Request_port(msg_);
  }

private:
  ::robomaster_msgs::srv::GetPulse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::srv::GetPulse_Request>()
{
  return robomaster_msgs::srv::builder::Init_GetPulse_Request_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPulse_Response_time_ms
{
public:
  explicit Init_GetPulse_Response_time_ms(::robomaster_msgs::srv::GetPulse_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::srv::GetPulse_Response time_ms(::robomaster_msgs::srv::GetPulse_Response::_time_ms_type arg)
  {
    msg_.time_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::srv::GetPulse_Response msg_;
};

class Init_GetPulse_Response_valid
{
public:
  Init_GetPulse_Response_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPulse_Response_time_ms valid(::robomaster_msgs::srv::GetPulse_Response::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_GetPulse_Response_time_ms(msg_);
  }

private:
  ::robomaster_msgs::srv::GetPulse_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::srv::GetPulse_Response>()
{
  return robomaster_msgs::srv::builder::Init_GetPulse_Response_valid();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__SRV__DETAIL__GET_PULSE__BUILDER_HPP_
