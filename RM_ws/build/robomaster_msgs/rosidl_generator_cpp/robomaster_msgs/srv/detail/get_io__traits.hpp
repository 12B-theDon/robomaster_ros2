// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomaster_msgs:srv/GetIO.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__SRV__DETAIL__GET_IO__TRAITS_HPP_
#define ROBOMASTER_MSGS__SRV__DETAIL__GET_IO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomaster_msgs/srv/detail/get_io__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robomaster_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetIO_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: port
  {
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIO_Request & msg, bool use_flow_style = false)
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
  const robomaster_msgs::srv::GetIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::srv::GetIO_Request & msg)
{
  return robomaster_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::srv::GetIO_Request>()
{
  return "robomaster_msgs::srv::GetIO_Request";
}

template<>
inline const char * name<robomaster_msgs::srv::GetIO_Request>()
{
  return "robomaster_msgs/srv/GetIO_Request";
}

template<>
struct has_fixed_size<robomaster_msgs::srv::GetIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robomaster_msgs::srv::GetIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robomaster_msgs::srv::GetIO_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robomaster_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetIO_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIO_Response & msg, bool use_flow_style = false)
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
  const robomaster_msgs::srv::GetIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::srv::GetIO_Response & msg)
{
  return robomaster_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::srv::GetIO_Response>()
{
  return "robomaster_msgs::srv::GetIO_Response";
}

template<>
inline const char * name<robomaster_msgs::srv::GetIO_Response>()
{
  return "robomaster_msgs/srv/GetIO_Response";
}

template<>
struct has_fixed_size<robomaster_msgs::srv::GetIO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robomaster_msgs::srv::GetIO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robomaster_msgs::srv::GetIO_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robomaster_msgs::srv::GetIO>()
{
  return "robomaster_msgs::srv::GetIO";
}

template<>
inline const char * name<robomaster_msgs::srv::GetIO>()
{
  return "robomaster_msgs/srv/GetIO";
}

template<>
struct has_fixed_size<robomaster_msgs::srv::GetIO>
  : std::integral_constant<
    bool,
    has_fixed_size<robomaster_msgs::srv::GetIO_Request>::value &&
    has_fixed_size<robomaster_msgs::srv::GetIO_Response>::value
  >
{
};

template<>
struct has_bounded_size<robomaster_msgs::srv::GetIO>
  : std::integral_constant<
    bool,
    has_bounded_size<robomaster_msgs::srv::GetIO_Request>::value &&
    has_bounded_size<robomaster_msgs::srv::GetIO_Response>::value
  >
{
};

template<>
struct is_service<robomaster_msgs::srv::GetIO>
  : std::true_type
{
};

template<>
struct is_service_request<robomaster_msgs::srv::GetIO_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robomaster_msgs::srv::GetIO_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOMASTER_MSGS__SRV__DETAIL__GET_IO__TRAITS_HPP_
