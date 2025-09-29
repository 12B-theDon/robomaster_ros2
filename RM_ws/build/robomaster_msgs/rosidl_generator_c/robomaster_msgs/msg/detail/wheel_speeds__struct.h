// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/WheelSpeeds.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__WHEEL_SPEEDS__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__WHEEL_SPEEDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WheelSpeeds in the package robomaster_msgs.
/**
  * A Command to set linear speeds for each wheel of the robot.
 */
typedef struct robomaster_msgs__msg__WheelSpeeds
{
  /// front left wheel tangential speed in m/s
  float front_left;
  /// front right wheel tangential speed in m/s
  float front_right;
  /// rear left wheel tangential speed in m/s
  float rear_left;
  /// rear right wheel tangential speed in m/s
  float rear_right;
} robomaster_msgs__msg__WheelSpeeds;

// Struct for a sequence of robomaster_msgs__msg__WheelSpeeds.
typedef struct robomaster_msgs__msg__WheelSpeeds__Sequence
{
  robomaster_msgs__msg__WheelSpeeds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__WheelSpeeds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__WHEEL_SPEEDS__STRUCT_H_
