// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomaster_msgs:msg/GimbalCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__TRAITS_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomaster_msgs/msg/detail/gimbal_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robomaster_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GimbalCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: yaw_speed
  {
    out << "yaw_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_speed, out);
    out << ", ";
  }

  // member: pitch_speed
  {
    out << "pitch_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GimbalCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_speed, out);
    out << "\n";
  }

  // member: pitch_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GimbalCommand & msg, bool use_flow_style = false)
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
  const robomaster_msgs::msg::GimbalCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::msg::GimbalCommand & msg)
{
  return robomaster_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::msg::GimbalCommand>()
{
  return "robomaster_msgs::msg::GimbalCommand";
}

template<>
inline const char * name<robomaster_msgs::msg::GimbalCommand>()
{
  return "robomaster_msgs/msg/GimbalCommand";
}

template<>
struct has_fixed_size<robomaster_msgs::msg::GimbalCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robomaster_msgs::msg::GimbalCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robomaster_msgs::msg::GimbalCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__TRAITS_HPP_
