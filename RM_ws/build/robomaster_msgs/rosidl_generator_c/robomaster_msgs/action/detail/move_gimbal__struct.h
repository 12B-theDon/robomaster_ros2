// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:action/MoveGimbal.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_GIMBAL__STRUCT_H_
#define ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_GIMBAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FIXED'.
/**
  * Frame: gravity aligned, origin set at boot
  * (same frame as chassis odometry and imu)
 */
enum
{
  robomaster_msgs__action__MoveGimbal_Goal__FIXED = 0
};

/// Constant 'GIMBAL'.
/**
  * Frame: attached to gimbal, useful to send relative movements.
 */
enum
{
  robomaster_msgs__action__MoveGimbal_Goal__GIMBAL = 1
};

/// Constant 'CHASSIS_GIMBAL_PITCH'.
/**
  * Frame: yaw aligned to chassis, pitch as in GIMBAL
 */
enum
{
  robomaster_msgs__action__MoveGimbal_Goal__CHASSIS_GIMBAL_PITCH = 2
};

/// Constant 'CHASSIS_FIXED_PITCH'.
/**
  * Frame: yaw aligned to chassis, pitch as in FIXED
 */
enum
{
  robomaster_msgs__action__MoveGimbal_Goal__CHASSIS_FIXED_PITCH = 3
};

/// Struct defined in action/MoveGimbal in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveGimbal_Goal
{
  /// target yaw in rad
  float yaw;
  /// target pitch in rad
  float pitch;
  /// maximal yaw rotation speed in rad/s
  float yaw_speed;
  /// maximal pitch rotation speed in rad/s
  float pitch_speed;
  /// the frame in which target orientation is specified.
  /// One of ``FIXED``, ``GIMBAL``, ``CHASSIS_GIMBAL_PITCH``,
  /// or ``CHASSIS_FIXED_PITCH``
  uint8_t frame;
} robomaster_msgs__action__MoveGimbal_Goal;

// Struct for a sequence of robomaster_msgs__action__MoveGimbal_Goal.
typedef struct robomaster_msgs__action__MoveGimbal_Goal__Sequence
{
  robomaster_msgs__action__MoveGimbal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveGimbal_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveGimbal in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveGimbal_Result
{
  uint8_t structure_needs_at_least_one_member;
} robomaster_msgs__action__MoveGimbal_Result;

// Struct for a sequence of robomaster_msgs__action__MoveGimbal_Result.
typedef struct robomaster_msgs__action__MoveGimbal_Result__Sequence
{
  robomaster_msgs__action__MoveGimbal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveGimbal_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveGimbal in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveGimbal_Feedback
{
  /// the relative progress towards goal from 0 to 1
  float progress;
} robomaster_msgs__action__MoveGimbal_Feedback;

// Struct for a sequence of robomaster_msgs__action__MoveGimbal_Feedback.
typedef struct robomaster_msgs__action__MoveGimbal_Feedback__Sequence
{
  robomaster_msgs__action__MoveGimbal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveGimbal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robomaster_msgs/action/detail/move_gimbal__struct.h"

/// Struct defined in action/MoveGimbal in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveGimbal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robomaster_msgs__action__MoveGimbal_Goal goal;
} robomaster_msgs__action__MoveGimbal_SendGoal_Request;

// Struct for a sequence of robomaster_msgs__action__MoveGimbal_SendGoal_Request.
typedef struct robomaster_msgs__action__MoveGimbal_SendGoal_Request__Sequence
{
  robomaster_msgs__action__MoveGimbal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveGimbal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveGimbal in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveGimbal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robomaster_msgs__action__MoveGimbal_SendGoal_Response;

// Struct for a sequence of robomaster_msgs__action__MoveGimbal_SendGoal_Response.
typedef struct robomaster_msgs__action__MoveGimbal_SendGoal_Response__Sequence
{
  robomaster_msgs__action__MoveGimbal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveGimbal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveGimbal in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveGimbal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robomaster_msgs__action__MoveGimbal_GetResult_Request;

// Struct for a sequence of robomaster_msgs__action__MoveGimbal_GetResult_Request.
typedef struct robomaster_msgs__action__MoveGimbal_GetResult_Request__Sequence
{
  robomaster_msgs__action__MoveGimbal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveGimbal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.h"

/// Struct defined in action/MoveGimbal in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveGimbal_GetResult_Response
{
  int8_t status;
  robomaster_msgs__action__MoveGimbal_Result result;
} robomaster_msgs__action__MoveGimbal_GetResult_Response;

// Struct for a sequence of robomaster_msgs__action__MoveGimbal_GetResult_Response.
typedef struct robomaster_msgs__action__MoveGimbal_GetResult_Response__Sequence
{
  robomaster_msgs__action__MoveGimbal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveGimbal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.h"

/// Struct defined in action/MoveGimbal in the package robomaster_msgs.
typedef struct robomaster_msgs__action__MoveGimbal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robomaster_msgs__action__MoveGimbal_Feedback feedback;
} robomaster_msgs__action__MoveGimbal_FeedbackMessage;

// Struct for a sequence of robomaster_msgs__action__MoveGimbal_FeedbackMessage.
typedef struct robomaster_msgs__action__MoveGimbal_FeedbackMessage__Sequence
{
  robomaster_msgs__action__MoveGimbal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__action__MoveGimbal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_GIMBAL__STRUCT_H_
