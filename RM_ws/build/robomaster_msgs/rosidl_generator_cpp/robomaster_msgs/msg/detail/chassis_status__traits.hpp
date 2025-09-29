// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomaster_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__TRAITS_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomaster_msgs/msg/detail/chassis_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace robomaster_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChassisStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: is_static
  {
    out << "is_static: ";
    rosidl_generator_traits::value_to_yaml(msg.is_static, out);
    out << ", ";
  }

  // member: up_hill
  {
    out << "up_hill: ";
    rosidl_generator_traits::value_to_yaml(msg.up_hill, out);
    out << ", ";
  }

  // member: down_hill
  {
    out << "down_hill: ";
    rosidl_generator_traits::value_to_yaml(msg.down_hill, out);
    out << ", ";
  }

  // member: on_slope
  {
    out << "on_slope: ";
    rosidl_generator_traits::value_to_yaml(msg.on_slope, out);
    out << ", ";
  }

  // member: is_pick_up
  {
    out << "is_pick_up: ";
    rosidl_generator_traits::value_to_yaml(msg.is_pick_up, out);
    out << ", ";
  }

  // member: slip
  {
    out << "slip: ";
    rosidl_generator_traits::value_to_yaml(msg.slip, out);
    out << ", ";
  }

  // member: impact_x
  {
    out << "impact_x: ";
    rosidl_generator_traits::value_to_yaml(msg.impact_x, out);
    out << ", ";
  }

  // member: impact_y
  {
    out << "impact_y: ";
    rosidl_generator_traits::value_to_yaml(msg.impact_y, out);
    out << ", ";
  }

  // member: impact_z
  {
    out << "impact_z: ";
    rosidl_generator_traits::value_to_yaml(msg.impact_z, out);
    out << ", ";
  }

  // member: roll_over
  {
    out << "roll_over: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_over, out);
    out << ", ";
  }

  // member: hill
  {
    out << "hill: ";
    rosidl_generator_traits::value_to_yaml(msg.hill, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChassisStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: is_static
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_static: ";
    rosidl_generator_traits::value_to_yaml(msg.is_static, out);
    out << "\n";
  }

  // member: up_hill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "up_hill: ";
    rosidl_generator_traits::value_to_yaml(msg.up_hill, out);
    out << "\n";
  }

  // member: down_hill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "down_hill: ";
    rosidl_generator_traits::value_to_yaml(msg.down_hill, out);
    out << "\n";
  }

  // member: on_slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on_slope: ";
    rosidl_generator_traits::value_to_yaml(msg.on_slope, out);
    out << "\n";
  }

  // member: is_pick_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_pick_up: ";
    rosidl_generator_traits::value_to_yaml(msg.is_pick_up, out);
    out << "\n";
  }

  // member: slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slip: ";
    rosidl_generator_traits::value_to_yaml(msg.slip, out);
    out << "\n";
  }

  // member: impact_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impact_x: ";
    rosidl_generator_traits::value_to_yaml(msg.impact_x, out);
    out << "\n";
  }

  // member: impact_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impact_y: ";
    rosidl_generator_traits::value_to_yaml(msg.impact_y, out);
    out << "\n";
  }

  // member: impact_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impact_z: ";
    rosidl_generator_traits::value_to_yaml(msg.impact_z, out);
    out << "\n";
  }

  // member: roll_over
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_over: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_over, out);
    out << "\n";
  }

  // member: hill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hill: ";
    rosidl_generator_traits::value_to_yaml(msg.hill, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChassisStatus & msg, bool use_flow_style = false)
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
  const robomaster_msgs::msg::ChassisStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::msg::ChassisStatus & msg)
{
  return robomaster_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::msg::ChassisStatus>()
{
  return "robomaster_msgs::msg::ChassisStatus";
}

template<>
inline const char * name<robomaster_msgs::msg::ChassisStatus>()
{
  return "robomaster_msgs/msg/ChassisStatus";
}

template<>
struct has_fixed_size<robomaster_msgs::msg::ChassisStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<robomaster_msgs::msg::ChassisStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<robomaster_msgs::msg::ChassisStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__TRAITS_HPP_
