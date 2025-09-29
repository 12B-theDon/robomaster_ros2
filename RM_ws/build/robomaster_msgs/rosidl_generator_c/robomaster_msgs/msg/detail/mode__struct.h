// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__MODE__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FREE'.
/**
  * mode: gimbal and chassis are decoupled
 */
enum
{
  robomaster_msgs__msg__Mode__FREE = 0
};

/// Constant 'GIMBAL_LEAD'.
/**
  * mode: chassis follows gimbal movements
  * to maintain the same relative orientation
 */
enum
{
  robomaster_msgs__msg__Mode__GIMBAL_LEAD = 1
};

/// Constant 'CHASSIS_LEAD'.
/**
  * mode: gimbal follows gimbal movements
  * to maintain the same relative orientation
 */
enum
{
  robomaster_msgs__msg__Mode__CHASSIS_LEAD = 2
};

/// Struct defined in msg/Mode in the package robomaster_msgs.
/**
  * Coupling control model between gimbal and chassis.
 */
typedef struct robomaster_msgs__msg__Mode
{
  /// coupling mode, one of ``FREE``, ``GIMBAL_LEAD``, ``CHASSIS_LEAD``
  uint8_t mode;
} robomaster_msgs__msg__Mode;

// Struct for a sequence of robomaster_msgs__msg__Mode.
typedef struct robomaster_msgs__msg__Mode__Sequence
{
  robomaster_msgs__msg__Mode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__Mode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__MODE__STRUCT_H_
