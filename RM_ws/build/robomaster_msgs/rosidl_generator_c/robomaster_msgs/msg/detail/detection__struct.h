// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_

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
// Member 'people'
#include "robomaster_msgs/msg/detail/detected_person__struct.h"
// Member 'robots'
#include "robomaster_msgs/msg/detail/detected_robot__struct.h"
// Member 'gestures'
#include "robomaster_msgs/msg/detail/detected_gesture__struct.h"
// Member 'lines'
#include "robomaster_msgs/msg/detail/detected_line__struct.h"
// Member 'markers'
#include "robomaster_msgs/msg/detail/detected_marker__struct.h"

/// Struct defined in msg/Detection in the package robomaster_msgs.
/**
  * Summary of vision detections
 */
typedef struct robomaster_msgs__msg__Detection
{
  /// header with the time stamp of the update
  std_msgs__msg__Header header;
  /// A list of people detections
  robomaster_msgs__msg__DetectedPerson__Sequence people;
  /// A list of robots detections
  robomaster_msgs__msg__DetectedRobot__Sequence robots;
  /// A list of gestures detections
  robomaster_msgs__msg__DetectedGesture__Sequence gestures;
  /// A list of lines detections
  robomaster_msgs__msg__DetectedLine__Sequence lines;
  /// A list of markers detections
  robomaster_msgs__msg__DetectedMarker__Sequence markers;
} robomaster_msgs__msg__Detection;

// Struct for a sequence of robomaster_msgs__msg__Detection.
typedef struct robomaster_msgs__msg__Detection__Sequence
{
  robomaster_msgs__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_
