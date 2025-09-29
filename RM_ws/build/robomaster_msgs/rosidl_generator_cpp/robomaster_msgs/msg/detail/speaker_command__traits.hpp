// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robomaster_msgs:msg/SpeakerCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__TRAITS_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robomaster_msgs/msg/detail/speaker_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robomaster_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpeakerCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: sound_id
  {
    out << "sound_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_id, out);
    out << ", ";
  }

  // member: times
  {
    out << "times: ";
    rosidl_generator_traits::value_to_yaml(msg.times, out);
    out << ", ";
  }

  // member: control
  {
    out << "control: ";
    rosidl_generator_traits::value_to_yaml(msg.control, out);
    out << ", ";
  }

  // member: file
  {
    out << "file: ";
    rosidl_generator_traits::value_to_yaml(msg.file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeakerCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sound_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_id, out);
    out << "\n";
  }

  // member: times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "times: ";
    rosidl_generator_traits::value_to_yaml(msg.times, out);
    out << "\n";
  }

  // member: control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control: ";
    rosidl_generator_traits::value_to_yaml(msg.control, out);
    out << "\n";
  }

  // member: file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file: ";
    rosidl_generator_traits::value_to_yaml(msg.file, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeakerCommand & msg, bool use_flow_style = false)
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
  const robomaster_msgs::msg::SpeakerCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  robomaster_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robomaster_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robomaster_msgs::msg::SpeakerCommand & msg)
{
  return robomaster_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robomaster_msgs::msg::SpeakerCommand>()
{
  return "robomaster_msgs::msg::SpeakerCommand";
}

template<>
inline const char * name<robomaster_msgs::msg::SpeakerCommand>()
{
  return "robomaster_msgs/msg/SpeakerCommand";
}

template<>
struct has_fixed_size<robomaster_msgs::msg::SpeakerCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robomaster_msgs::msg::SpeakerCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robomaster_msgs::msg::SpeakerCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__TRAITS_HPP_
