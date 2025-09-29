// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ffmpeg_image_transport_msgs:msg/FFMPEGPacket.idl
// generated code does not contain a copyright notice

#ifndef FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__BUILDER_HPP_
#define FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ffmpeg_image_transport_msgs/msg/detail/ffmpeg_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ffmpeg_image_transport_msgs
{

namespace msg
{

namespace builder
{

class Init_FFMPEGPacket_data
{
public:
  explicit Init_FFMPEGPacket_data(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket & msg)
  : msg_(msg)
  {}
  ::ffmpeg_image_transport_msgs::msg::FFMPEGPacket data(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ffmpeg_image_transport_msgs::msg::FFMPEGPacket msg_;
};

class Init_FFMPEGPacket_is_bigendian
{
public:
  explicit Init_FFMPEGPacket_is_bigendian(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket & msg)
  : msg_(msg)
  {}
  Init_FFMPEGPacket_data is_bigendian(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket::_is_bigendian_type arg)
  {
    msg_.is_bigendian = std::move(arg);
    return Init_FFMPEGPacket_data(msg_);
  }

private:
  ::ffmpeg_image_transport_msgs::msg::FFMPEGPacket msg_;
};

class Init_FFMPEGPacket_flags
{
public:
  explicit Init_FFMPEGPacket_flags(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket & msg)
  : msg_(msg)
  {}
  Init_FFMPEGPacket_is_bigendian flags(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_FFMPEGPacket_is_bigendian(msg_);
  }

private:
  ::ffmpeg_image_transport_msgs::msg::FFMPEGPacket msg_;
};

class Init_FFMPEGPacket_pts
{
public:
  explicit Init_FFMPEGPacket_pts(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket & msg)
  : msg_(msg)
  {}
  Init_FFMPEGPacket_flags pts(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket::_pts_type arg)
  {
    msg_.pts = std::move(arg);
    return Init_FFMPEGPacket_flags(msg_);
  }

private:
  ::ffmpeg_image_transport_msgs::msg::FFMPEGPacket msg_;
};

class Init_FFMPEGPacket_encoding
{
public:
  explicit Init_FFMPEGPacket_encoding(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket & msg)
  : msg_(msg)
  {}
  Init_FFMPEGPacket_pts encoding(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_FFMPEGPacket_pts(msg_);
  }

private:
  ::ffmpeg_image_transport_msgs::msg::FFMPEGPacket msg_;
};

class Init_FFMPEGPacket_height
{
public:
  explicit Init_FFMPEGPacket_height(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket & msg)
  : msg_(msg)
  {}
  Init_FFMPEGPacket_encoding height(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_FFMPEGPacket_encoding(msg_);
  }

private:
  ::ffmpeg_image_transport_msgs::msg::FFMPEGPacket msg_;
};

class Init_FFMPEGPacket_width
{
public:
  explicit Init_FFMPEGPacket_width(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket & msg)
  : msg_(msg)
  {}
  Init_FFMPEGPacket_height width(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_FFMPEGPacket_height(msg_);
  }

private:
  ::ffmpeg_image_transport_msgs::msg::FFMPEGPacket msg_;
};

class Init_FFMPEGPacket_header
{
public:
  Init_FFMPEGPacket_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FFMPEGPacket_width header(::ffmpeg_image_transport_msgs::msg::FFMPEGPacket::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FFMPEGPacket_width(msg_);
  }

private:
  ::ffmpeg_image_transport_msgs::msg::FFMPEGPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ffmpeg_image_transport_msgs::msg::FFMPEGPacket>()
{
  return ffmpeg_image_transport_msgs::msg::builder::Init_FFMPEGPacket_header();
}

}  // namespace ffmpeg_image_transport_msgs

#endif  // FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__BUILDER_HPP_
