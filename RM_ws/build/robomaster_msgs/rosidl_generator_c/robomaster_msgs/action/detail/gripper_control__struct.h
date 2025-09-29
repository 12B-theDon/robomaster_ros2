// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:action/GripperControl.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__GRIPPER_CONTROL__STRUCT_H_
#define ROBOMASTER_MSGS__ACTION__DETAIL__GRIPPER_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PAUSE'.
/**
  * the gripper state when manually stopped
 */
enum
{
  robomaster_msgs__action__GripperControl_Goal__PAUSE = 0
};

/// Constant 'OPEN'.
/**
  * the open gripper state
 */
enum
{
  robomaster_msgs__action__GripperControl_Goal__OPEN = 1
};

/// Constant 'CLOSE'.
/**
  * the closed gripper state
 */
enum
{
  robomaster_msgs__action__GripperControl_Goal__CLOSE = 2
};

/// Struct defined in action/GripperControl in the package robomaster_msgs.
typedef struct robomaster_msgs__action__GripperControl_Goal
{
  /// the target gripper state:
  /// one of ``PAUSE``, ``OPEN``, or ``CLOSE``
  uint8_t target_state;
  /// the relative amount of power in [0, 1]
  float power;
} robomaster_msgs__action__GripperControl_Goal;

// Struct for a sequence of robomaster_msgs__action__GripperControl_Goal.
typedef struct robomaster_msgs__action__GripperControl_Goal__Sequence
{
  robomaster_msgs__action__GripperControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__GripperControl_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/GripperControl in the package robomaster_msgs.
typedef struct robomaster_msgs__action__GripperControl_Result
{
  /// the duration of the action
  builtin_interfaces__msg__Duration duration;
} robomaster_msgs__action__GripperControl_Result;

// Struct for a sequence of robomaster_msgs__action__GripperControl_Result.
typedef struct robomaster_msgs__action__GripperControl_Result__Sequence
{
  robomaster_msgs__action__GripperControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__GripperControl_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GripperControl in the package robomaster_msgs.
typedef struct robomaster_msgs__action__GripperControl_Feedback
{
  /// the current gripper state:
  /// one of ``PAUSE``, ``OPEN``, or ``CLOSE``
  uint8_t current_state;
} robomaster_msgs__action__GripperControl_Feedback;

// Struct for a sequence of robomaster_msgs__action__GripperControl_Feedback.
typedef struct robomaster_msgs__action__GripperControl_Feedback__Sequence
{
  robomaster_msgs__action__GripperControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__GripperControl_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robomaster_msgs/action/detail/gripper_control__struct.h"

/// Struct defined in action/GripperControl in the package robomaster_msgs.
typedef struct robomaster_msgs__action__GripperControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robomaster_msgs__action__GripperControl_Goal goal;
} robomaster_msgs__action__GripperControl_SendGoal_Request;

// Struct for a sequence of robomaster_msgs__action__GripperControl_SendGoal_Request.
typedef struct robomaster_msgs__action__GripperControl_SendGoal_Request__Sequence
{
  robomaster_msgs__action__GripperControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__GripperControl_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GripperControl in the package robomaster_msgs.
typedef struct robomaster_msgs__action__GripperControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robomaster_msgs__action__GripperControl_SendGoal_Response;

// Struct for a sequence of robomaster_msgs__action__GripperControl_SendGoal_Response.
typedef struct robomaster_msgs__action__GripperControl_SendGoal_Response__Sequence
{
  robomaster_msgs__action__GripperControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__GripperControl_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GripperControl in the package robomaster_msgs.
typedef struct robomaster_msgs__action__GripperControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robomaster_msgs__action__GripperControl_GetResult_Request;

// Struct for a sequence of robomaster_msgs__action__GripperControl_GetResult_Request.
typedef struct robomaster_msgs__action__GripperControl_GetResult_Request__Sequence
{
  robomaster_msgs__action__GripperControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__GripperControl_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robomaster_msgs/action/detail/gripper_control__struct.h"

/// Struct defined in action/GripperControl in the package robomaster_msgs.
typedef struct robomaster_msgs__action__GripperControl_GetResult_Response
{
  int8_t status;
  robomaster_msgs__action__GripperControl_Result result;
} robomaster_msgs__action__GripperControl_GetResult_Response;

// Struct for a sequence of robomaster_msgs__action__GripperControl_GetResult_Response.
typedef struct robomaster_msgs__action__GripperControl_GetResult_Response__Sequence
{
  robomaster_msgs__action__GripperControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__GripperControl_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robomaster_msgs/action/detail/gripper_control__struct.h"

/// Struct defined in action/GripperControl in the package robomaster_msgs.
typedef struct robomaster_msgs__action__GripperControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robomaster_msgs__action__GripperControl_Feedback feedback;
} robomaster_msgs__action__GripperControl_FeedbackMessage;

// Struct for a sequence of robomaster_msgs__action__GripperControl_FeedbackMessage.
typedef struct robomaster_msgs__action__GripperControl_FeedbackMessage__Sequence
{
  robomaster_msgs__action__GripperControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__GripperControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__GRIPPER_CONTROL__STRUCT_H_
