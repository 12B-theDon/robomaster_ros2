// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomaster_msgs:msg/DetectedRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_ROBOT__TRAITS_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomaster_msgs/msg/detail/detected_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'roi'
#include "robomaster_msgs/msg/detail/region_of_interest__traits.hpp"

namespace robomaster_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectedRobot & msg,
  std::ostream & out)
{
  out << "{";
  // member: roi
  {
    out << "roi: ";
    to_flow_style_yaml(msg.roi, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectedRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_block_style_yaml(msg.roi, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectedRobot & msg, bool use_flow_style = false)
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
  const robomaster_msgs::msg::DetectedRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::msg::DetectedRobot & msg)
{
  return robomaster_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::msg::DetectedRobot>()
{
  return "robomaster_msgs::msg::DetectedRobot";
}

template<>
inline const char * name<robomaster_msgs::msg::DetectedRobot>()
{
  return "robomaster_msgs/msg/DetectedRobot";
}

template<>
struct has_fixed_size<robomaster_msgs::msg::DetectedRobot>
  : std::integral_constant<bool, has_fixed_size<robomaster_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<robomaster_msgs::msg::DetectedRobot>
  : std::integral_constant<bool, has_bounded_size<robomaster_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<robomaster_msgs::msg::DetectedRobot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_ROBOT__TRAITS_HPP_
