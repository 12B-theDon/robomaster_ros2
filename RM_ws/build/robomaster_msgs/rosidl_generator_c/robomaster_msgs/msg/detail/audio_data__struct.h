// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_H_

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

/// Struct defined in msg/AudioData in the package robomaster_msgs.
/**
  * Raw audio samples
  * .. note::
  *   Unlike ROS1, ROS2 has no ``audio_common_msgs``, so for now we define our own format
  *   to publish the raw 16-bit 48Khz audio stream from the camera mono microphone
 */
typedef struct robomaster_msgs__msg__AudioData
{
  /// the timestamp and frame of the microphone recording
  std_msgs__msg__Header header;
  /// an array of 16-bit audio samples
  rosidl_runtime_c__int16__Sequence data;
} robomaster_msgs__msg__AudioData;

// Struct for a sequence of robomaster_msgs__msg__AudioData.
typedef struct robomaster_msgs__msg__AudioData__Sequence
{
  robomaster_msgs__msg__AudioData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__AudioData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_H_
