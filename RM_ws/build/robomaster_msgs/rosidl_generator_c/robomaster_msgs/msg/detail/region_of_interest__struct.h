// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__REGION_OF_INTEREST__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__REGION_OF_INTEREST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RegionOfInterest in the package robomaster_msgs.
/**
  * A region of interest (ROS) in an image
  * All values are in [0, 1] and are relative to image width and height
 */
typedef struct robomaster_msgs__msg__RegionOfInterest
{
  /// horizontal position of the ROI center
  /// as fraction of the image width
  /// (0 if the ROI includes the left edge of the image)
  float x_offset;
  /// vertical position of the ROI center
  /// as fraction of the image height
  /// (0 if the ROI includes the top edge of the image)
  float y_offset;
  /// height of ROI
  float height;
  /// width of ROI
  float width;
} robomaster_msgs__msg__RegionOfInterest;

// Struct for a sequence of robomaster_msgs__msg__RegionOfInterest.
typedef struct robomaster_msgs__msg__RegionOfInterest__Sequence
{
  robomaster_msgs__msg__RegionOfInterest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__RegionOfInterest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__REGION_OF_INTEREST__STRUCT_H_
