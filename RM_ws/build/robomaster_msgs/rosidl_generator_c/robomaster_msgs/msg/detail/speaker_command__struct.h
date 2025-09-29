// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/SpeakerCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTROL_STOP'.
/**
  * Stop playing sound
 */
enum
{
  robomaster_msgs__msg__SpeakerCommand__CONTROL_STOP = 0
};

/// Constant 'CONTROL_PLAY'.
/**
  * Start playing sound after stopping currently played sounds
 */
enum
{
  robomaster_msgs__msg__SpeakerCommand__CONTROL_PLAY = 1
};

/// Constant 'CONTROL_ADD'.
/**
  * Start playing sound, without stopping currently played sounds
 */
enum
{
  robomaster_msgs__msg__SpeakerCommand__CONTROL_ADD = 2
};

// Include directives for member types
// Member 'file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SpeakerCommand in the package robomaster_msgs.
/**
  * An command to stop or play a predefined sound or an audio file from the speaker.
 */
typedef struct robomaster_msgs__msg__SpeakerCommand
{
  /// ID of the sound to play
  int32_t sound_id;
  /// how many times to play the same sound (0: infinite loop)
  uint8_t times;
  /// Control command: one of ``CONTROL_STOP``, ``CONTROL_PLAY``, ``CONTROL_ADD``
  uint8_t control;
  /// if not empry, the local file to be played.
  rosidl_runtime_c__String file;
} robomaster_msgs__msg__SpeakerCommand;

// Struct for a sequence of robomaster_msgs__msg__SpeakerCommand.
typedef struct robomaster_msgs__msg__SpeakerCommand__Sequence
{
  robomaster_msgs__msg__SpeakerCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__SpeakerCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__STRUCT_H_
