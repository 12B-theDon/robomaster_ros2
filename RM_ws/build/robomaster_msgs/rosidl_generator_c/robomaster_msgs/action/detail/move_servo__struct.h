// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:action/MoveServo.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_SERVO__STRUCT_H_
#define ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_SERVO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveServo in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveServo_Goal
{
  /// ID of the servo (between 0 and 2)
  uint8_t index;
  /// absolute target angle in rad
  float angle;
} robomaster_msgs__action__MoveServo_Goal;

// Struct for a sequence of robomaster_msgs__action__MoveServo_Goal.
typedef struct robomaster_msgs__action__MoveServo_Goal__Sequence
{
  robomaster_msgs__action__MoveServo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveServo_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveServo in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveServo_Result
{
  uint8_t structure_needs_at_least_one_member;
} robomaster_msgs__action__MoveServo_Result;

// Struct for a sequence of robomaster_msgs__action__MoveServo_Result.
typedef struct robomaster_msgs__action__MoveServo_Result__Sequence
{
  robomaster_msgs__action__MoveServo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveServo_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveServo in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveServo_Feedback
{
  /// the relative progress towards goal from 0 to 1
  float progress;
} robomaster_msgs__action__MoveServo_Feedback;

// Struct for a sequence of robomaster_msgs__action__MoveServo_Feedback.
typedef struct robomaster_msgs__action__MoveServo_Feedback__Sequence
{
  robomaster_msgs__action__MoveServo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveServo_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robomaster_msgs/action/detail/move_servo__struct.h"

/// Struct defined in action/MoveServo in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveServo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robomaster_msgs__action__MoveServo_Goal goal;
} robomaster_msgs__action__MoveServo_SendGoal_Request;

// Struct for a sequence of robomaster_msgs__action__MoveServo_SendGoal_Request.
typedef struct robomaster_msgs__action__MoveServo_SendGoal_Request__Sequence
{
  robomaster_msgs__action__MoveServo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveServo_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveServo in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveServo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robomaster_msgs__action__MoveServo_SendGoal_Response;

// Struct for a sequence of robomaster_msgs__action__MoveServo_SendGoal_Response.
typedef struct robomaster_msgs__action__MoveServo_SendGoal_Response__Sequence
{
  robomaster_msgs__action__MoveServo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveServo_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveServo in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveServo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robomaster_msgs__action__MoveServo_GetResult_Request;

// Struct for a sequence of robomaster_msgs__action__MoveServo_GetResult_Request.
typedef struct robomaster_msgs__action__MoveServo_GetResult_Request__Sequence
{
  robomaster_msgs__action__MoveServo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveServo_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robomaster_msgs/action/detail/move_servo__struct.h"

/// Struct defined in action/MoveServo in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveServo_GetResult_Response
{
  int8_t status;
  robomaster_msgs__action__MoveServo_Result result;
} robomaster_msgs__action__MoveServo_GetResult_Response;

// Struct for a sequence of robomaster_msgs__action__MoveServo_GetResult_Response.
typedef struct robomaster_msgs__action__MoveServo_GetResult_Response__Sequence
{
  robomaster_msgs__action__MoveServo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveServo_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robomaster_msgs/action/detail/move_servo__struct.h"

/// Struct defined in action/MoveServo in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveServo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robomaster_msgs__action__MoveServo_Feedback feedback;
} robomaster_msgs__action__MoveServo_FeedbackMessage;

// Struct for a sequence of robomaster_msgs__action__MoveServo_FeedbackMessage.
typedef struct robomaster_msgs__action__MoveServo_FeedbackMessage__Sequence
{
  robomaster_msgs__action__MoveServo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveServo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_SERVO__STRUCT_H_
