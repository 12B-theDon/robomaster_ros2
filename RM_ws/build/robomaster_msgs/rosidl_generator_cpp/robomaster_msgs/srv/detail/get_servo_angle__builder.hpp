// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:srv/GetServoAngle.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__BUILDER_HPP_
#define ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/srv/detail/get_servo_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace srv
{

namespace builder
{

class Init_GetServoAngle_Request_index
{
public:
  Init_GetServoAngle_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::srv::GetServoAngle_Request index(::robomaster_msgs::srv::GetServoAngle_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::srv::GetServoAngle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::srv::GetServoAngle_Request>()
{
  return robomaster_msgs::srv::builder::Init_GetServoAngle_Request_index();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace srv
{

namespace builder
{

class Init_GetServoAngle_Response_angle
{
public:
  Init_GetServoAngle_Response_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::srv::GetServoAngle_Response angle(::robomaster_msgs::srv::GetServoAngle_Response::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::srv::GetServoAngle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::srv::GetServoAngle_Response>()
{
  return robomaster_msgs::srv::builder::Init_GetServoAngle_Response_angle();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__BUILDER_HPP_
