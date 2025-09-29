// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/AudioOpus.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_OPUS__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_OPUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/audio_opus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioOpus_buffer
{
public:
  explicit Init_AudioOpus_buffer(::robomaster_msgs::msg::AudioOpus & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::AudioOpus buffer(::robomaster_msgs::msg::AudioOpus::_buffer_type arg)
  {
    msg_.buffer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::AudioOpus msg_;
};

class Init_AudioOpus_seq
{
public:
  explicit Init_AudioOpus_seq(::robomaster_msgs::msg::AudioOpus & msg)
  : msg_(msg)
  {}
  Init_AudioOpus_buffer seq(::robomaster_msgs::msg::AudioOpus::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_AudioOpus_buffer(msg_);
  }

private:
  ::robomaster_msgs::msg::AudioOpus msg_;
};

class Init_AudioOpus_header
{
public:
  Init_AudioOpus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioOpus_seq header(::robomaster_msgs::msg::AudioOpus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AudioOpus_seq(msg_);
  }

private:
  ::robomaster_msgs::msg::AudioOpus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::AudioOpus>()
{
  return robomaster_msgs::msg::builder::Init_AudioOpus_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_OPUS__BUILDER_HPP_
