// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/ArmorHit.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__ARMOR_HIT__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__ARMOR_HIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BOTTOM_BACK'.
/**
  * sensor location: on back of the chassis
 */
enum
{
  robomaster_msgs__msg__ArmorHit__BOTTOM_BACK = 1
};

/// Constant 'BOTTOM_FRONT'.
/**
  * sensor location: on front of the chassis
 */
enum
{
  robomaster_msgs__msg__ArmorHit__BOTTOM_FRONT = 2
};

/// Constant 'BOTTOM_LEFT'.
/**
  * sensor location: on left of the chassis
 */
enum
{
  robomaster_msgs__msg__ArmorHit__BOTTOM_LEFT = 4
};

/// Constant 'BOTTOM_RIGHT'.
/**
  * sensor location: on right of the chassis
 */
enum
{
  robomaster_msgs__msg__ArmorHit__BOTTOM_RIGHT = 8
};

/// Constant 'TOP_LEFT'.
/**
  * sensor location: on left of the gimbal
 */
enum
{
  robomaster_msgs__msg__ArmorHit__TOP_LEFT = 16
};

/// Constant 'TOP_RIGHT'.
/**
  * sensor location: on right of the gimbal
 */
enum
{
  robomaster_msgs__msg__ArmorHit__TOP_RIGHT = 32
};

/// Constant 'COLLISION'.
/**
  * type: detected by a microphone
 */
enum
{
  robomaster_msgs__msg__ArmorHit__COLLISION = 0
};

/// Constant 'IR'.
/**
  * type: detected by the IR sensor
 */
enum
{
  robomaster_msgs__msg__ArmorHit__IR = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ArmorHit in the package robomaster_msgs.
/**
  * A hit event detected by one of the sensors placed behind the LEDs.
  * The Robomaster detects two kind of hits: collision using microphones,
  * and infrared beams using infrared receivers.
 */
typedef struct robomaster_msgs__msg__ArmorHit
{
  /// header with the time stamp of the hit
  std_msgs__msg__Header header;
  /// type of hit; one of ``COLLISION`` or ``IR``
  uint8_t type;
  /// a bit mask for which sensors have detected the hit
  uint8_t location;
  /// the hit impact strength as measured by the sensor microphone.
  /// Only applies to events of ``COLLISION`` type
  uint16_t level;
} robomaster_msgs__msg__ArmorHit;

// Struct for a sequence of robomaster_msgs__msg__ArmorHit.
typedef struct robomaster_msgs__msg__ArmorHit__Sequence
{
  robomaster_msgs__msg__ArmorHit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__ArmorHit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__ARMOR_HIT__STRUCT_H_
