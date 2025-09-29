// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/DetectedMarker.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_MARKER__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_MARKER__STRUCT_H_

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
// Member 'kind'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DetectedMarker in the package robomaster_msgs.
/**
  * Information about a marker detected using vision
 */
typedef struct robomaster_msgs__msg__DetectedMarker
{
  /// bounding box
  robomaster_msgs__msg__RegionOfInterest roi;
  /// the name of the marker
  rosidl_runtime_c__String kind;
} robomaster_msgs__msg__DetectedMarker;

// Struct for a sequence of robomaster_msgs__msg__DetectedMarker.
typedef struct robomaster_msgs__msg__DetectedMarker__Sequence
{
  robomaster_msgs__msg__DetectedMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__DetectedMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_MARKER__STRUCT_H_
