// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/ServoRawState.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__STRUCT_H_

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

/// Struct defined in msg/ServoRawState in the package robomaster_msgs.
/**
  * Raw state from the servos on ports {0, 1, 2, 3}
 */
typedef struct robomaster_msgs__msg__ServoRawState
{
  /// header with the time stamp of the update
  std_msgs__msg__Header header;
  /// whenever a servo in connected to a port
  bool valid[4];
  /// the angle of the servos (1024 corresponds to 180 degrees)
  int32_t value[4];
  /// the speed of the servos (1024 corresponds to about 36 degrees per seconds)
  int32_t speed[4];
} robomaster_msgs__msg__ServoRawState;

// Struct for a sequence of robomaster_msgs__msg__ServoRawState.
typedef struct robomaster_msgs__msg__ServoRawState__Sequence
{
  robomaster_msgs__msg__ServoRawState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__ServoRawState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__STRUCT_H_
