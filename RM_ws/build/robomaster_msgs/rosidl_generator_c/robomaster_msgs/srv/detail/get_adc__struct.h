// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:srv/GetADC.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__SRV__DETAIL__GET_ADC__STRUCT_H_
#define ROBOMASTER_MSGS__SRV__DETAIL__GET_ADC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetADC in the package robomaster_msgs.
typedef struct robomaster_msgs__srv__GetADC_Request
{
  /// 0 or 1: ID of one of two interfaces of a sensor adapter
  uint8_t id;
  /// 0, 1, 2, or 3: ID of one of the 4 sensor adapter that can be connected to the robot
  uint8_t port;
} robomaster_msgs__srv__GetADC_Request;

// Struct for a sequence of robomaster_msgs__srv__GetADC_Request.
typedef struct robomaster_msgs__srv__GetADC_Request__Sequence
{
  robomaster_msgs__srv__GetADC_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__srv__GetADC_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetADC in the package robomaster_msgs.
typedef struct robomaster_msgs__srv__GetADC_Response
{
  /// whenever the sensor adapter is enabled
  bool valid;
  /// the raw value read by the ADC
  uint16_t value;
} robomaster_msgs__srv__GetADC_Response;

// Struct for a sequence of robomaster_msgs__srv__GetADC_Response.
typedef struct robomaster_msgs__srv__GetADC_Response__Sequence
{
  robomaster_msgs__srv__GetADC_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__srv__GetADC_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__SRV__DETAIL__GET_ADC__STRUCT_H_
