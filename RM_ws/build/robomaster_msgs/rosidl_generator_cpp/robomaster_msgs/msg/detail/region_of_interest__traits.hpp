// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomaster_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__REGION_OF_INTEREST__TRAITS_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__REGION_OF_INTEREST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomaster_msgs/msg/detail/region_of_interest__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robomaster_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RegionOfInterest & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_offset
  {
    out << "x_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.x_offset, out);
    out << ", ";
  }

  // member: y_offset
  {
    out << "y_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.y_offset, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RegionOfInterest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.x_offset, out);
    out << "\n";
  }

  // member: y_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.y_offset, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RegionOfInterest & msg, bool use_flow_style = false)
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
  const robomaster_msgs::msg::RegionOfInterest & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::msg::RegionOfInterest & msg)
{
  return robomaster_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::msg::RegionOfInterest>()
{
  return "robomaster_msgs::msg::RegionOfInterest";
}

template<>
inline const char * name<robomaster_msgs::msg::RegionOfInterest>()
{
  return "robomaster_msgs/msg/RegionOfInterest";
}

template<>
struct has_fixed_size<robomaster_msgs::msg::RegionOfInterest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robomaster_msgs::msg::RegionOfInterest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robomaster_msgs::msg::RegionOfInterest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__REGION_OF_INTEREST__TRAITS_HPP_
