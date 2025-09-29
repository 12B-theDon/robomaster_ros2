// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/GimbalCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GimbalCommand in the package robomaster_msgs.
/**
  * Command to control the gripper in speed
 */
typedef struct robomaster_msgs__msg__GimbalCommand
{
  /// target yaw angular speed in rad/m
  float yaw_speed;
  /// target pitch angular speed in rad/m
  float pitch_speed;
} robomaster_msgs__msg__GimbalCommand;

// Struct for a sequence of robomaster_msgs__msg__GimbalCommand.
typedef struct robomaster_msgs__msg__GimbalCommand__Sequence
{
  robomaster_msgs__msg__GimbalCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__GimbalCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__STRUCT_H_
