// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomaster_msgs:msg/LEDEffect.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__TRAITS_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomaster_msgs/msg/detail/led_effect__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace robomaster_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LEDEffect & msg,
  std::ostream & out)
{
  out << "{";
  // member: mask
  {
    out << "mask: ";
    rosidl_generator_traits::value_to_yaml(msg.mask, out);
    out << ", ";
  }

  // member: submask
  {
    out << "submask: ";
    rosidl_generator_traits::value_to_yaml(msg.submask, out);
    out << ", ";
  }

  // member: effect
  {
    out << "effect: ";
    rosidl_generator_traits::value_to_yaml(msg.effect, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
    out << ", ";
  }

  // member: t1
  {
    out << "t1: ";
    rosidl_generator_traits::value_to_yaml(msg.t1, out);
    out << ", ";
  }

  // member: t2
  {
    out << "t2: ";
    rosidl_generator_traits::value_to_yaml(msg.t2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LEDEffect & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mask: ";
    rosidl_generator_traits::value_to_yaml(msg.mask, out);
    out << "\n";
  }

  // member: submask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "submask: ";
    rosidl_generator_traits::value_to_yaml(msg.submask, out);
    out << "\n";
  }

  // member: effect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effect: ";
    rosidl_generator_traits::value_to_yaml(msg.effect, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }

  // member: t1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t1: ";
    rosidl_generator_traits::value_to_yaml(msg.t1, out);
    out << "\n";
  }

  // member: t2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t2: ";
    rosidl_generator_traits::value_to_yaml(msg.t2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LEDEffect & msg, bool use_flow_style = false)
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
  const robomaster_msgs::msg::LEDEffect & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::msg::LEDEffect & msg)
{
  return robomaster_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::msg::LEDEffect>()
{
  return "robomaster_msgs::msg::LEDEffect";
}

template<>
inline const char * name<robomaster_msgs::msg::LEDEffect>()
{
  return "robomaster_msgs/msg/LEDEffect";
}

template<>
struct has_fixed_size<robomaster_msgs::msg::LEDEffect>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct has_bounded_size<robomaster_msgs::msg::LEDEffect>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct is_message<robomaster_msgs::msg::LEDEffect>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__TRAITS_HPP_
