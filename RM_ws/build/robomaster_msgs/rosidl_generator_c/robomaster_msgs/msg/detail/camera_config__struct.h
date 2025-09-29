// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/CameraConfig.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__CAMERA_CONFIG__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__CAMERA_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CameraConfig in the package robomaster_msgs.
/**
  * Command to configure the camera
 */
typedef struct robomaster_msgs__msg__CameraConfig
{
  /// relative zoom
  float zoom;
} robomaster_msgs__msg__CameraConfig;

// Struct for a sequence of robomaster_msgs__msg__CameraConfig.
typedef struct robomaster_msgs__msg__CameraConfig__Sequence
{
  robomaster_msgs__msg__CameraConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__CameraConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__CAMERA_CONFIG__STRUCT_H_
