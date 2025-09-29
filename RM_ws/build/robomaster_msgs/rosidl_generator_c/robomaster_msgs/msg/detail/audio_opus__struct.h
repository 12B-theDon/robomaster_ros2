// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/AudioOpus.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_OPUS__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_OPUS__STRUCT_H_

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
// Member 'buffer'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AudioOpus in the package robomaster_msgs.
/**
  * Encapsulate a packet from an OPUS encoded audio stream
 */
typedef struct robomaster_msgs__msg__AudioOpus
{
  /// header with the time stamp and origin of the packet
  std_msgs__msg__Header header;
  /// sequential number of the packet
  uint64_t seq;
  /// Opus data
  rosidl_runtime_c__uint8__Sequence buffer;
} robomaster_msgs__msg__AudioOpus;

// Struct for a sequence of robomaster_msgs__msg__AudioOpus.
typedef struct robomaster_msgs__msg__AudioOpus__Sequence
{
  robomaster_msgs__msg__AudioOpus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__AudioOpus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_OPUS__STRUCT_H_
