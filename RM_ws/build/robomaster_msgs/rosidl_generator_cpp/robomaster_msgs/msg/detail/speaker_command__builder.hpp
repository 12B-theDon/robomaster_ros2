// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/SpeakerCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/speaker_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeakerCommand_file
{
public:
  explicit Init_SpeakerCommand_file(::robomaster_msgs::msg::SpeakerCommand & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::SpeakerCommand file(::robomaster_msgs::msg::SpeakerCommand::_file_type arg)
  {
    msg_.file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::SpeakerCommand msg_;
};

class Init_SpeakerCommand_control
{
public:
  explicit Init_SpeakerCommand_control(::robomaster_msgs::msg::SpeakerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeakerCommand_file control(::robomaster_msgs::msg::SpeakerCommand::_control_type arg)
  {
    msg_.control = std::move(arg);
    return Init_SpeakerCommand_file(msg_);
  }

private:
  ::robomaster_msgs::msg::SpeakerCommand msg_;
};

class Init_SpeakerCommand_times
{
public:
  explicit Init_SpeakerCommand_times(::robomaster_msgs::msg::SpeakerCommand & msg)
  : msg_(msg)
  {}
  Init_SpeakerCommand_control times(::robomaster_msgs::msg::SpeakerCommand::_times_type arg)
  {
    msg_.times = std::move(arg);
    return Init_SpeakerCommand_control(msg_);
  }

private:
  ::robomaster_msgs::msg::SpeakerCommand msg_;
};

class Init_SpeakerCommand_sound_id
{
public:
  Init_SpeakerCommand_sound_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeakerCommand_times sound_id(::robomaster_msgs::msg::SpeakerCommand::_sound_id_type arg)
  {
    msg_.sound_id = std::move(arg);
    return Init_SpeakerCommand_times(msg_);
  }

private:
  ::robomaster_msgs::msg::SpeakerCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::SpeakerCommand>()
{
  return robomaster_msgs::msg::builder::Init_SpeakerCommand_sound_id();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__BUILDER_HPP_
