// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robomaster_msgs:msg/ServoRawState.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__FUNCTIONS_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robomaster_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robomaster_msgs/msg/detail/servo_raw_state__struct.h"

/// Initialize msg/ServoRawState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomaster_msgs__msg__ServoRawState
 * )) before or use
 * robomaster_msgs__msg__ServoRawState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoRawState__init(robomaster_msgs__msg__ServoRawState * msg);

/// Finalize msg/ServoRawState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__msg__ServoRawState__fini(robomaster_msgs__msg__ServoRawState * msg);

/// Create msg/ServoRawState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomaster_msgs__msg__ServoRawState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__msg__ServoRawState *
robomaster_msgs__msg__ServoRawState__create();

/// Destroy msg/ServoRawState message.
/**
 * It calls
 * robomaster_msgs__msg__ServoRawState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__msg__ServoRawState__destroy(robomaster_msgs__msg__ServoRawState * msg);

/// Check for msg/ServoRawState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoRawState__are_equal(const robomaster_msgs__msg__ServoRawState * lhs, const robomaster_msgs__msg__ServoRawState * rhs);

/// Copy a msg/ServoRawState message.
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
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoRawState__copy(
  const robomaster_msgs__msg__ServoRawState * input,
  robomaster_msgs__msg__ServoRawState * output);

/// Initialize array of msg/ServoRawState messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomaster_msgs__msg__ServoRawState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoRawState__Sequence__init(robomaster_msgs__msg__ServoRawState__Sequence * array, size_t size);

/// Finalize array of msg/ServoRawState messages.
/**
 * It calls
 * robomaster_msgs__msg__ServoRawState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__msg__ServoRawState__Sequence__fini(robomaster_msgs__msg__ServoRawState__Sequence * array);

/// Create array of msg/ServoRawState messages.
/**
 * It allocates the memory for the array and calls
 * robomaster_msgs__msg__ServoRawState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__msg__ServoRawState__Sequence *
robomaster_msgs__msg__ServoRawState__Sequence__create(size_t size);

/// Destroy array of msg/ServoRawState messages.
/**
 * It calls
 * robomaster_msgs__msg__ServoRawState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__msg__ServoRawState__Sequence__destroy(robomaster_msgs__msg__ServoRawState__Sequence * array);

/// Check for msg/ServoRawState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoRawState__Sequence__are_equal(const robomaster_msgs__msg__ServoRawState__Sequence * lhs, const robomaster_msgs__msg__ServoRawState__Sequence * rhs);

/// Copy an array of msg/ServoRawState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoRawState__Sequence__copy(
  const robomaster_msgs__msg__ServoRawState__Sequence * input,
  robomaster_msgs__msg__ServoRawState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__FUNCTIONS_H_
