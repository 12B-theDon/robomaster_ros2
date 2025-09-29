// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:action/Move.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__MOVE__STRUCT_H_
#define ROBOMASTER_MSGS__ACTION__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Move in the package robomaster_msgs.
typedef struct robomaster_msgs__action__Move_Goal
{
  /// target relative position
  /// (longitudinal component with positive towards front)
  float x;
  float y;
  /// target relative angle in rad
  float theta;
  /// maximal linear speed in m/s
  float linear_speed;
  /// maximal angular speed in rad/s (default is 30 deg/s)
  float angular_speed;
} robomaster_msgs__action__Move_Goal;

// Struct for a sequence of robomaster_msgs__action__Move_Goal.
typedef struct robomaster_msgs__action__Move_Goal__Sequence
{
  robomaster_msgs__action__Move_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__Move_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Move in the package robomaster_msgs.
typedef struct robomaster_msgs__action__Move_Result
{
  uint8_t structure_needs_at_least_one_member;
} robomaster_msgs__action__Move_Result;

// Struct for a sequence of robomaster_msgs__action__Move_Result.
typedef struct robomaster_msgs__action__Move_Result__Sequence
{
  robomaster_msgs__action__Move_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__Move_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Move in the package robomaster_msgs.
typedef struct robomaster_msgs__action__Move_Feedback
{
  /// the relative progress towards goal from 0 to 1
  float progress;
} robomaster_msgs__action__Move_Feedback;

// Struct for a sequence of robomaster_msgs__action__Move_Feedback.
typedef struct robomaster_msgs__action__Move_Feedback__Sequence
{
  robomaster_msgs__action__Move_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__Move_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robomaster_msgs/action/detail/move__struct.h"

/// Struct defined in action/Move in the package robomaster_msgs.
typedef struct robomaster_msgs__action__Move_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robomaster_msgs__action__Move_Goal goal;
} robomaster_msgs__action__Move_SendGoal_Request;

// Struct for a sequence of robomaster_msgs__action__Move_SendGoal_Request.
typedef struct robomaster_msgs__action__Move_SendGoal_Request__Sequence
{
  robomaster_msgs__action__Move_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__Move_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Move in the package robomaster_msgs.
typedef struct robomaster_msgs__action__Move_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robomaster_msgs__action__Move_SendGoal_Response;

// Struct for a sequence of robomaster_msgs__action__Move_SendGoal_Response.
typedef struct robomaster_msgs__action__Move_SendGoal_Response__Sequence
{
  robomaster_msgs__action__Move_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__Move_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Move in the package robomaster_msgs.
typedef struct robomaster_msgs__action__Move_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robomaster_msgs__action__Move_GetResult_Request;

// Struct for a sequence of robomaster_msgs__action__Move_GetResult_Request.
typedef struct robomaster_msgs__action__Move_GetResult_Request__Sequence
{
  robomaster_msgs__action__Move_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__Move_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robomaster_msgs/action/detail/move__struct.h"

/// Struct defined in action/Move in the package robomaster_msgs.
typedef struct robomaster_msgs__action__Move_GetResult_Response
{
  int8_t status;
  robomaster_msgs__action__Move_Result result;
} robomaster_msgs__action__Move_GetResult_Response;

// Struct for a sequence of robomaster_msgs__action__Move_GetResult_Response.
typedef struct robomaster_msgs__action__Move_GetResult_Response__Sequence
{
  robomaster_msgs__action__Move_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__Move_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robomaster_msgs/action/detail/move__struct.h"

/// Struct defined in action/Move in the package robomaster_msgs.
typedef struct robomaster_msgs__action__Move_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robomaster_msgs__action__Move_Feedback feedback;
} robomaster_msgs__action__Move_FeedbackMessage;

// Struct for a sequence of robomaster_msgs__action__Move_FeedbackMessage.
typedef struct robomaster_msgs__action__Move_FeedbackMessage__Sequence
{
  robomaster_msgs__action__Move_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__Move_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__MOVE__STRUCT_H_
