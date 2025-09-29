// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/LEDEffect.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__STRUCT_H_

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
  * mask: chassis rear LED
 */
enum
{
  robomaster_msgs__msg__LEDEffect__BOTTOM_BACK = 1
};

/// Constant 'BOTTOM_FRONT'.
/**
  * mask: chassis front LED
 */
enum
{
  robomaster_msgs__msg__LEDEffect__BOTTOM_FRONT = 2
};

/// Constant 'BOTTOM_LEFT'.
/**
  * mask: chassis left LED
 */
enum
{
  robomaster_msgs__msg__LEDEffect__BOTTOM_LEFT = 4
};

/// Constant 'BOTTOM_RIGHT'.
/**
  * mask: chassis right LED
 */
enum
{
  robomaster_msgs__msg__LEDEffect__BOTTOM_RIGHT = 8
};

/// Constant 'BOTTOM'.
/**
  * mask: all chassis LEDs
 */
enum
{
  robomaster_msgs__msg__LEDEffect__BOTTOM = 15
};

/// Constant 'TOP_LEFT'.
/**
  * mask: gimbal left LED
 */
enum
{
  robomaster_msgs__msg__LEDEffect__TOP_LEFT = 16
};

/// Constant 'TOP_RIGHT'.
/**
  * mask: gimbal right LED
 */
enum
{
  robomaster_msgs__msg__LEDEffect__TOP_RIGHT = 32
};

/// Constant 'TOP'.
/**
  * mask: all gimbal LEDs
 */
enum
{
  robomaster_msgs__msg__LEDEffect__TOP = 48
};

/// Constant 'ALL'.
/**
  * mask: all LEDs
 */
enum
{
  robomaster_msgs__msg__LEDEffect__ALL = 63
};

/// Constant 'OFF'.
/**
  * effect: switch off LED
 */
enum
{
  robomaster_msgs__msg__LEDEffect__OFF = 0
};

/// Constant 'ON'.
/**
  * effect: switch LED to solid color
 */
enum
{
  robomaster_msgs__msg__LEDEffect__ON = 1
};

/// Constant 'BREATH'.
/**
  * effect: breath
 */
enum
{
  robomaster_msgs__msg__LEDEffect__BREATH = 2
};

/// Constant 'FLASH'.
/**
  * effect: flash LED
 */
enum
{
  robomaster_msgs__msg__LEDEffect__FLASH = 3
};

/// Constant 'SCROLLING'.
/**
  * effect: scrolling
 */
enum
{
  robomaster_msgs__msg__LEDEffect__SCROLLING = 4
};

/// Constant 'PULSE'.
/**
  * effect: pulse LED
 */
enum
{
  robomaster_msgs__msg__LEDEffect__PULSE = 5
};

// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in msg/LEDEffect in the package robomaster_msgs.
/**
  * Control commands for all LEDs
 */
typedef struct robomaster_msgs__msg__LEDEffect
{
  /// bitmask mask to select which LEDs to control
  uint8_t mask;
  /// bitmask to select which portions of the gimbal LED to control.
  /// The 7 sub LEDs are enumerate clockwise
  uint8_t submask;
  /// One of the effect enums
  uint8_t effect;
  /// The desired LED color (not relevant for ``effect=OFF``)
  std_msgs__msg__ColorRGBA color;
  /// On interval duration, only relevant for effects ``PULSE`` and ``FLASH``.
  float t1;
  /// Off interval duration, only relevant for effects ``PULSE`` and ``FLASH``.
  float t2;
} robomaster_msgs__msg__LEDEffect;

// Struct for a sequence of robomaster_msgs__msg__LEDEffect.
typedef struct robomaster_msgs__msg__LEDEffect__Sequence
{
  robomaster_msgs__msg__LEDEffect * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__LEDEffect__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__STRUCT_H_
