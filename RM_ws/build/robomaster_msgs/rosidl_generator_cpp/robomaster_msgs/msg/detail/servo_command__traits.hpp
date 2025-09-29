// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomaster_msgs:msg/ServoCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__TRAITS_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomaster_msgs/msg/detail/servo_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robomaster_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

  // member: angular_speed
  {
    out << "angular_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }

  // member: angular_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoCommand & msg, bool use_flow_style = false)
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
  const robomaster_msgs::msg::ServoCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::msg::ServoCommand & msg)
{
  return robomaster_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::msg::ServoCommand>()
{
  return "robomaster_msgs::msg::ServoCommand";
}

template<>
inline const char * name<robomaster_msgs::msg::ServoCommand>()
{
  return "robomaster_msgs/msg/ServoCommand";
}

template<>
struct has_fixed_size<robomaster_msgs::msg::ServoCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robomaster_msgs::msg::ServoCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robomaster_msgs::msg::ServoCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__TRAITS_HPP_
