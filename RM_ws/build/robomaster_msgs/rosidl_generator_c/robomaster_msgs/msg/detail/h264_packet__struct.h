// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/H264Packet.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__H264_PACKET__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__H264_PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/H264Packet in the package robomaster_msgs.
/**
  * Encapsulate a packet from a H264 encoded video stream
 */
typedef struct robomaster_msgs__msg__H264Packet
{
  /// header with the time stamp and origin of the packet
  std_msgs__msg__Header header;
  /// sequential number of the packet
  uint64_t seq;
  /// H264 data
  rosidl_runtime_c__uint8__Sequence data;
} robomaster_msgs__msg__H264Packet;

// Struct for a sequence of robomaster_msgs__msg__H264Packet.
typedef struct robomaster_msgs__msg__H264Packet__Sequence
{
  robomaster_msgs__msg__H264Packet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__H264Packet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__H264_PACKET__STRUCT_H_
