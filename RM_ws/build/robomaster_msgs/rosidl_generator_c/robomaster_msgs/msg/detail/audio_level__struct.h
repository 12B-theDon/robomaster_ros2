// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/AudioLevel.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_LEVEL__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_LEVEL__STRUCT_H_

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

/// Struct defined in msg/AudioLevel in the package robomaster_msgs.
/**
  * Sound level
  * .. note::
  *   Unlike ROS1, ROS2 has no ``audio_common_msgs``, so we define our own format
  *   for sound level in dBFS
 */
typedef struct robomaster_msgs__msg__AudioLevel
{
  /// the timestamp and frame of the microphone recording
  std_msgs__msg__Header header;
  /// sound level in dBFS
  float level;
} robomaster_msgs__msg__AudioLevel;

// Struct for a sequence of robomaster_msgs__msg__AudioLevel.
typedef struct robomaster_msgs__msg__AudioLevel__Sequence
{
  robomaster_msgs__msg__AudioLevel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__AudioLevel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_LEVEL__STRUCT_H_
