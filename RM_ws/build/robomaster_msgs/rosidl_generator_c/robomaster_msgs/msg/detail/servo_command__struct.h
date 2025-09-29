// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/ServoCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ServoCommand in the package robomaster_msgs.
/**
  * Command to control a servo in speed
 */
typedef struct robomaster_msgs__msg__ServoCommand
{
  /// ID of the servo (between 0 and 2)
  uint8_t index;
  /// whenever to engage or disengage the servo
  bool enable;
  /// target angular speed in rad/m
  float angular_speed;
} robomaster_msgs__msg__ServoCommand;

// Struct for a sequence of robomaster_msgs__msg__ServoCommand.
typedef struct robomaster_msgs__msg__ServoCommand__Sequence
{
  robomaster_msgs__msg__ServoCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__ServoCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__STRUCT_H_
