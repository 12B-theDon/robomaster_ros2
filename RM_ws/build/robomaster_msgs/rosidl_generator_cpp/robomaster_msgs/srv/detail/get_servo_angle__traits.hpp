// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomaster_msgs:srv/GetServoAngle.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__TRAITS_HPP_
#define ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomaster_msgs/srv/detail/get_servo_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robomaster_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetServoAngle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetServoAngle_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetServoAngle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robomaster_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robomaster_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robomaster_msgs::srv::GetServoAngle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::srv::GetServoAngle_Request & msg)
{
  return robomaster_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::srv::GetServoAngle_Request>()
{
  return "robomaster_msgs::srv::GetServoAngle_Request";
}

template<>
inline const char * name<robomaster_msgs::srv::GetServoAngle_Request>()
{
  return "robomaster_msgs/srv/GetServoAngle_Request";
}

template<>
struct has_fixed_size<robomaster_msgs::srv::GetServoAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robomaster_msgs::srv::GetServoAngle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robomaster_msgs::srv::GetServoAngle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robomaster_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetServoAngle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetServoAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetServoAngle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robomaster_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robomaster_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robomaster_msgs::srv::GetServoAngle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::srv::GetServoAngle_Response & msg)
{
  return robomaster_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::srv::GetServoAngle_Response>()
{
  return "robomaster_msgs::srv::GetServoAngle_Response";
}

template<>
inline const char * name<robomaster_msgs::srv::GetServoAngle_Response>()
{
  return "robomaster_msgs/srv/GetServoAngle_Response";
}

template<>
struct has_fixed_size<robomaster_msgs::srv::GetServoAngle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robomaster_msgs::srv::GetServoAngle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robomaster_msgs::srv::GetServoAngle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robomaster_msgs::srv::GetServoAngle>()
{
  return "robomaster_msgs::srv::GetServoAngle";
}

template<>
inline const char * name<robomaster_msgs::srv::GetServoAngle>()
{
  return "robomaster_msgs/srv/GetServoAngle";
}

template<>
struct has_fixed_size<robomaster_msgs::srv::GetServoAngle>
  : std::integral_constant<
    bool,
    has_fixed_size<robomaster_msgs::srv::GetServoAngle_Request>::value &&
    has_fixed_size<robomaster_msgs::srv::GetServoAngle_Response>::value
  >
{
};

template<>
struct has_bounded_size<robomaster_msgs::srv::GetServoAngle>
  : std::integral_constant<
    bool,
    has_bounded_size<robomaster_msgs::srv::GetServoAngle_Request>::value &&
    has_bounded_size<robomaster_msgs::srv::GetServoAngle_Response>::value
  >
{
};

template<>
struct is_service<robomaster_msgs::srv::GetServoAngle>
  : std::true_type
{
};

template<>
struct is_service_request<robomaster_msgs::srv::GetServoAngle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robomaster_msgs::srv::GetServoAngle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__TRAITS_HPP_
