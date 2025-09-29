// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/H264Packet.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__H264_PACKET__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__H264_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/h264_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_H264Packet_data
{
public:
  explicit Init_H264Packet_data(::robomaster_msgs::msg::H264Packet & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::H264Packet data(::robomaster_msgs::msg::H264Packet::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::H264Packet msg_;
};

class Init_H264Packet_seq
{
public:
  explicit Init_H264Packet_seq(::robomaster_msgs::msg::H264Packet & msg)
  : msg_(msg)
  {}
  Init_H264Packet_data seq(::robomaster_msgs::msg::H264Packet::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_H264Packet_data(msg_);
  }

private:
  ::robomaster_msgs::msg::H264Packet msg_;
};

class Init_H264Packet_header
{
public:
  Init_H264Packet_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_H264Packet_seq header(::robomaster_msgs::msg::H264Packet::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_H264Packet_seq(msg_);
  }

private:
  ::robomaster_msgs::msg::H264Packet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::H264Packet>()
{
  return robomaster_msgs::msg::builder::Init_H264Packet_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__H264_PACKET__BUILDER_HPP_
