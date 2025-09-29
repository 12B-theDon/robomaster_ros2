// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ffmpeg_image_transport_msgs:msg/FFMPEGPacket.idl
// generated code does not contain a copyright notice

#ifndef FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__FUNCTIONS_H_
#define FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ffmpeg_image_transport_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ffmpeg_image_transport_msgs/msg/detail/ffmpeg_packet__struct.h"

/// Initialize msg/FFMPEGPacket message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ffmpeg_image_transport_msgs__msg__FFMPEGPacket
 * )) before or use
 * ffmpeg_image_transport_msgs__msg__FFMPEGPacket__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__init(ffmpeg_image_transport_msgs__msg__FFMPEGPacket * msg);

/// Finalize msg/FFMPEGPacket message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
void
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini(ffmpeg_image_transport_msgs__msg__FFMPEGPacket * msg);

/// Create msg/FFMPEGPacket message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ffmpeg_image_transport_msgs__msg__FFMPEGPacket__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
ffmpeg_image_transport_msgs__msg__FFMPEGPacket *
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__create();

/// Destroy msg/FFMPEGPacket message.
/**
 * It calls
 * ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
void
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__destroy(ffmpeg_image_transport_msgs__msg__FFMPEGPacket * msg);

/// Check for msg/FFMPEGPacket message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__are_equal(const ffmpeg_image_transport_msgs__msg__FFMPEGPacket * lhs, const ffmpeg_image_transport_msgs__msg__FFMPEGPacket * rhs);

/// Copy a msg/FFMPEGPacket message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__copy(
  const ffmpeg_image_transport_msgs__msg__FFMPEGPacket * input,
  ffmpeg_image_transport_msgs__msg__FFMPEGPacket * output);

/// Initialize array of msg/FFMPEGPacket messages.
/**
 * It allocates the memory for the number of elements and calls
 * ffmpeg_image_transport_msgs__msg__FFMPEGPacket__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__init(ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * array, size_t size);

/// Finalize array of msg/FFMPEGPacket messages.
/**
 * It calls
 * ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
void
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__fini(ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * array);

/// Create array of msg/FFMPEGPacket messages.
/**
 * It allocates the memory for the array and calls
 * ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence *
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__create(size_t size);

/// Destroy array of msg/FFMPEGPacket messages.
/**
 * It calls
 * ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
void
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__destroy(ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * array);

/// Check for msg/FFMPEGPacket message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__are_equal(const ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * lhs, const ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * rhs);

/// Copy an array of msg/FFMPEGPacket messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ffmpeg_image_transport_msgs
bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__copy(
  const ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * input,
  ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__FUNCTIONS_H_
