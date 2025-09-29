// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/CameraConfig.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__CAMERA_CONFIG__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__CAMERA_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/camera_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraConfig_zoom
{
public:
  Init_CameraConfig_zoom()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::msg::CameraConfig zoom(::robomaster_msgs::msg::CameraConfig::_zoom_type arg)
  {
    msg_.zoom = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::CameraConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::CameraConfig>()
{
  return robomaster_msgs::msg::builder::Init_CameraConfig_zoom();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__CAMERA_CONFIG__BUILDER_HPP_
