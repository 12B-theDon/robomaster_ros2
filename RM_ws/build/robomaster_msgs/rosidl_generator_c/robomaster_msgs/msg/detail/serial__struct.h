// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/Serial.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERIAL__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERIAL__STRUCT_H_

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

/// Struct defined in msg/Serial in the package robomaster_msgs.
/**
  * Encapsulates serial communication received or to be sent through UART
 */
typedef struct robomaster_msgs__msg__Serial
{
  /// header with the time stamp of the update
  std_msgs__msg__Header header;
  /// the payload
  rosidl_runtime_c__uint8__Sequence data;
} robomaster_msgs__msg__Serial;

// Struct for a sequence of robomaster_msgs__msg__Serial.
typedef struct robomaster_msgs__msg__Serial__Sequence
{
  robomaster_msgs__msg__Serial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__Serial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERIAL__STRUCT_H_
