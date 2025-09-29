// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/PWM.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__PWM__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__PWM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PWM in the package robomaster_msgs.
/**
  * Commands to control the 6 PWM interfaces
 */
typedef struct robomaster_msgs__msg__PWM
{
  /// Fraction of duty cycle in [0, 1]. Negative value signal to ignore the interface.
  float fraction_of_duty_cycle[6];
} robomaster_msgs__msg__PWM;

// Struct for a sequence of robomaster_msgs__msg__PWM.
typedef struct robomaster_msgs__msg__PWM__Sequence
{
  robomaster_msgs__msg__PWM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__PWM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__PWM__STRUCT_H_
