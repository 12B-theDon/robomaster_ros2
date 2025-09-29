// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/AudioLevel.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_LEVEL__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_LEVEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/audio_level__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioLevel_level
{
public:
  explicit Init_AudioLevel_level(::robomaster_msgs::msg::AudioLevel & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::AudioLevel level(::robomaster_msgs::msg::AudioLevel::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::AudioLevel msg_;
};

class Init_AudioLevel_header
{
public:
  Init_AudioLevel_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioLevel_level header(::robomaster_msgs::msg::AudioLevel::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AudioLevel_level(msg_);
  }

private:
  ::robomaster_msgs::msg::AudioLevel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::AudioLevel>()
{
  return robomaster_msgs::msg::builder::Init_AudioLevel_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_LEVEL__BUILDER_HPP_
