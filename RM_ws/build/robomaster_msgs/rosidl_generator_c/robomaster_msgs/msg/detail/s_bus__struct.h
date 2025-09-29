// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/SBus.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__S_BUS__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__S_BUS__STRUCT_H_

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

/// Struct defined in msg/SBus in the package robomaster_msgs.
/**
  * Values recevied by the SBUS interface
 */
typedef struct robomaster_msgs__msg__SBus
{
  /// header with the time stamp of the update
  std_msgs__msg__Header header;
  /// values received by the 16 channels
  int16_t channels[16];
} robomaster_msgs__msg__SBus;

// Struct for a sequence of robomaster_msgs__msg__SBus.
typedef struct robomaster_msgs__msg__SBus__Sequence
{
  robomaster_msgs__msg__SBus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__SBus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__S_BUS__STRUCT_H_
