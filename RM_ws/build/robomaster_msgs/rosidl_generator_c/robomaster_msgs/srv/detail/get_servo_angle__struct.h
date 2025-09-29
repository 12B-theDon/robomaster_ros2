// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:srv/GetServoAngle.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__STRUCT_H_
#define ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetServoAngle in the package robomaster_msgs.
typedef struct robomaster_msgs__srv__GetServoAngle_Request
{
  /// ID of the servo (between 0 and 2)
  uint8_t index;
} robomaster_msgs__srv__GetServoAngle_Request;

// Struct for a sequence of robomaster_msgs__srv__GetServoAngle_Request.
typedef struct robomaster_msgs__srv__GetServoAngle_Request__Sequence
{
  robomaster_msgs__srv__GetServoAngle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__srv__GetServoAngle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetServoAngle in the package robomaster_msgs.
typedef struct robomaster_msgs__srv__GetServoAngle_Response
{
  /// absolute angle in rad
  float angle;
} robomaster_msgs__srv__GetServoAngle_Response;

// Struct for a sequence of robomaster_msgs__srv__GetServoAngle_Response.
typedef struct robomaster_msgs__srv__GetServoAngle_Response__Sequence
{
  robomaster_msgs__srv__GetServoAngle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__srv__GetServoAngle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__STRUCT_H_
