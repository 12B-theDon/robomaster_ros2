// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ffmpeg_image_transport_msgs:msg/FFMPEGPacket.idl
// generated code does not contain a copyright notice

#ifndef FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ffmpeg_image_transport_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ffmpeg_image_transport_msgs/msg/detail/ffmpeg_packet__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ffmpeg_image_transport_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ffmpeg_image_transport_msgs
cdr_serialize(
  const ffmpeg_image_transport_msgs::msg::FFMPEGPacket & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ffmpeg_image_transport_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ffmpeg_image_transport_msgs::msg::FFMPEGPacket & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ffmpeg_image_transport_msgs
get_serialized_size(
  const ffmpeg_image_transport_msgs::msg::FFMPEGPacket & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ffmpeg_image_transport_msgs
max_serialized_size_FFMPEGPacket(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ffmpeg_image_transport_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ffmpeg_image_transport_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ffmpeg_image_transport_msgs, msg, FFMPEGPacket)();

#ifdef __cplusplus
}
#endif

#endif  // FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
