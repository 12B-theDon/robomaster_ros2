// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/SensorAdapter.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SENSOR_ADAPTER__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__SENSOR_ADAPTER__STRUCT_H_

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

/// Struct defined in msg/SensorAdapter in the package robomaster_msgs.
/**
  * Summarizes the state of up to 6 sensor adapters (each with 2 interfaces)
 */
typedef struct robomaster_msgs__msg__SensorAdapter
{
  /// header with the time stamp of the update
  std_msgs__msg__Header header;
  /// input pin state (0 or 1)
  uint8_t io[12];
  /// adc state
  int16_t adc[12];
  /// interface intentifier
  uint8_t port[12];
  /// sensor adapter identifier
  uint8_t id[12];
} robomaster_msgs__msg__SensorAdapter;

// Struct for a sequence of robomaster_msgs__msg__SensorAdapter.
typedef struct robomaster_msgs__msg__SensorAdapter__Sequence
{
  robomaster_msgs__msg__SensorAdapter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__SensorAdapter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SENSOR_ADAPTER__STRUCT_H_
