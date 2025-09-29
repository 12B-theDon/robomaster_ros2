// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robomaster_msgs:msg/ServoRawState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robomaster_msgs/msg/detail/servo_raw_state__rosidl_typesupport_introspection_c.h"
#include "robomaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robomaster_msgs/msg/detail/servo_raw_state__functions.h"
#include "robomaster_msgs/msg/detail/servo_raw_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robomaster_msgs__msg__ServoRawState__init(message_memory);
}

void robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_fini_function(void * message_memory)
{
  robomaster_msgs__msg__ServoRawState__fini(message_memory);
}

size_t robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__size_function__ServoRawState__valid(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_const_function__ServoRawState__valid(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_function__ServoRawState__valid(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__fetch_function__ServoRawState__valid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_const_function__ServoRawState__valid(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__assign_function__ServoRawState__valid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_function__ServoRawState__valid(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__size_function__ServoRawState__value(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_const_function__ServoRawState__value(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_function__ServoRawState__value(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__fetch_function__ServoRawState__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_const_function__ServoRawState__value(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__assign_function__ServoRawState__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_function__ServoRawState__value(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

size_t robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__size_function__ServoRawState__speed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_const_function__ServoRawState__speed(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_function__ServoRawState__speed(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__fetch_function__ServoRawState__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_const_function__ServoRawState__speed(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__assign_function__ServoRawState__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_function__ServoRawState__speed(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__ServoRawState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__ServoRawState, valid),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__size_function__ServoRawState__valid,  // size() function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_const_function__ServoRawState__valid,  // get_const(index) function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_function__ServoRawState__valid,  // get(index) function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__fetch_function__ServoRawState__valid,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__assign_function__ServoRawState__valid,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__ServoRawState, value),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__size_function__ServoRawState__value,  // size() function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_const_function__ServoRawState__value,  // get_const(index) function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_function__ServoRawState__value,  // get(index) function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__fetch_function__ServoRawState__value,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__assign_function__ServoRawState__value,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__ServoRawState, speed),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__size_function__ServoRawState__speed,  // size() function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_const_function__ServoRawState__speed,  // get_const(index) function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__get_function__ServoRawState__speed,  // get(index) function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__fetch_function__ServoRawState__speed,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__assign_function__ServoRawState__speed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_message_members = {
  "robomaster_msgs__msg",  // message namespace
  "ServoRawState",  // message name
  4,  // number of fields
  sizeof(robomaster_msgs__msg__ServoRawState),
  robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_message_member_array,  // message members
  robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_init_function,  // function to initialize message memory (memory has to be allocated)
  robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_message_type_support_handle = {
  0,
  &robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robomaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, ServoRawState)() {
  robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_message_type_support_handle.typesupport_identifier) {
    robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robomaster_msgs__msg__ServoRawState__rosidl_typesupport_introspection_c__ServoRawState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
