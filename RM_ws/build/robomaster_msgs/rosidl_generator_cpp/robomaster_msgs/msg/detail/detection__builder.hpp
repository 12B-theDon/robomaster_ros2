// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_Detection_markers
{
public:
  explicit Init_Detection_markers(::robomaster_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::Detection markers(::robomaster_msgs::msg::Detection::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::Detection msg_;
};

class Init_Detection_lines
{
public:
  explicit Init_Detection_lines(::robomaster_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_markers lines(::robomaster_msgs::msg::Detection::_lines_type arg)
  {
    msg_.lines = std::move(arg);
    return Init_Detection_markers(msg_);
  }

private:
  ::robomaster_msgs::msg::Detection msg_;
};

class Init_Detection_gestures
{
public:
  explicit Init_Detection_gestures(::robomaster_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_lines gestures(::robomaster_msgs::msg::Detection::_gestures_type arg)
  {
    msg_.gestures = std::move(arg);
    return Init_Detection_lines(msg_);
  }

private:
  ::robomaster_msgs::msg::Detection msg_;
};

class Init_Detection_robots
{
public:
  explicit Init_Detection_robots(::robomaster_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_gestures robots(::robomaster_msgs::msg::Detection::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return Init_Detection_gestures(msg_);
  }

private:
  ::robomaster_msgs::msg::Detection msg_;
};

class Init_Detection_people
{
public:
  explicit Init_Detection_people(::robomaster_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_robots people(::robomaster_msgs::msg::Detection::_people_type arg)
  {
    msg_.people = std::move(arg);
    return Init_Detection_robots(msg_);
  }

private:
  ::robomaster_msgs::msg::Detection msg_;
};

class Init_Detection_header
{
public:
  Init_Detection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_people header(::robomaster_msgs::msg::Detection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Detection_people(msg_);
  }

private:
  ::robomaster_msgs::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::Detection>()
{
  return robomaster_msgs::msg::builder::Init_Detection_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_
