// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/DetectedRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_ROBOT__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roi'
#include "robomaster_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/DetectedRobot in the package robomaster_msgs.
/**
  * Information about a robot detected using vision
 */
typedef struct robomaster_msgs__msg__DetectedRobot
{
  /// bounding box
  robomaster_msgs__msg__RegionOfInterest roi;
} robomaster_msgs__msg__DetectedRobot;

// Struct for a sequence of robomaster_msgs__msg__DetectedRobot.
typedef struct robomaster_msgs__msg__DetectedRobot__Sequence
{
  robomaster_msgs__msg__DetectedRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__DetectedRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_ROBOT__STRUCT_H_
