// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/DetectedLine.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_LINE__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DetectedLine in the package robomaster_msgs.
/**
  * Information about a line detected in the camera frame
 */
typedef struct robomaster_msgs__msg__DetectedLine
{
  /// relative horizontal position of the line in the image (between 0 and 1)
  float x;
  /// relative vertical position of the line in the image (between 0 and 1)
  float y;
  /// slope
  float angle;
  /// curvature
  float curvature;
} robomaster_msgs__msg__DetectedLine;

// Struct for a sequence of robomaster_msgs__msg__DetectedLine.
typedef struct robomaster_msgs__msg__DetectedLine__Sequence
{
  robomaster_msgs__msg__DetectedLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__DetectedLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_LINE__STRUCT_H_
