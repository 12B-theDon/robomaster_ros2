// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_H_

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

/// Struct defined in msg/ChassisStatus in the package robomaster_msgs.
/**
  * High-level chassis state provided by the robot through :py:meth:`robomaster.chassis.Chassis.sub_status`
  * TODO(Jerome): check
 */
typedef struct robomaster_msgs__msg__ChassisStatus
{
  /// header with the time stamp of the update
  std_msgs__msg__Header header;
  /// whenever the robot is still
  bool is_static;
  /// whenever the robot is facing uphill
  bool up_hill;
  /// whenever the robot is facing downhill
  bool down_hill;
  /// whenever the robot is on a lateral slope
  bool on_slope;
  /// whenever the robot has been picked up
  bool is_pick_up;
  /// whenever wheels are slipping
  bool slip;
  /// whenever the accelerometer has registered a collision longitudinally
  bool impact_x;
  /// whenever the accelerometer has registered a collision laterally
  bool impact_y;
  /// whenever the accelerometer has registered a collision vertically
  bool impact_z;
  /// whenever the robot is capsized
  bool roll_over;
  /// whenever the robot is facing uphill and is still.
  bool hill;
} robomaster_msgs__msg__ChassisStatus;

// Struct for a sequence of robomaster_msgs__msg__ChassisStatus.
typedef struct robomaster_msgs__msg__ChassisStatus__Sequence
{
  robomaster_msgs__msg__ChassisStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__ChassisStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_H_
