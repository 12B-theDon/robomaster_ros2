// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/BlasterLED.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__BLASTER_LED__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__BLASTER_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BlasterLED in the package robomaster_msgs.
/**
  * Command to control the blaster LED
 */
typedef struct robomaster_msgs__msg__BlasterLED
{
  /// relative intensity of the LED: 0.0: off, 1.0: full brightness
  float brightness;
} robomaster_msgs__msg__BlasterLED;

// Struct for a sequence of robomaster_msgs__msg__BlasterLED.
typedef struct robomaster_msgs__msg__BlasterLED__Sequence
{
  robomaster_msgs__msg__BlasterLED * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__BlasterLED__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__BLASTER_LED__STRUCT_H_
