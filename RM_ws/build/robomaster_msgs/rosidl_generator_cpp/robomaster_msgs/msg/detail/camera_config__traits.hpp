// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomaster_msgs:msg/CameraConfig.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__CAMERA_CONFIG__TRAITS_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__CAMERA_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomaster_msgs/msg/detail/camera_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robomaster_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: zoom
  {
    out << "zoom: ";
    rosidl_generator_traits::value_to_yaml(msg.zoom, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: zoom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zoom: ";
    rosidl_generator_traits::value_to_yaml(msg.zoom, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraConfig & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robomaster_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robomaster_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robomaster_msgs::msg::CameraConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::msg::CameraConfig & msg)
{
  return robomaster_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::msg::CameraConfig>()
{
  return "robomaster_msgs::msg::CameraConfig";
}

template<>
inline const char * name<robomaster_msgs::msg::CameraConfig>()
{
  return "robomaster_msgs/msg/CameraConfig";
}

template<>
struct has_fixed_size<robomaster_msgs::msg::CameraConfig>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robomaster_msgs::msg::CameraConfig>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robomaster_msgs::msg::CameraConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__CAMERA_CONFIG__TRAITS_HPP_
