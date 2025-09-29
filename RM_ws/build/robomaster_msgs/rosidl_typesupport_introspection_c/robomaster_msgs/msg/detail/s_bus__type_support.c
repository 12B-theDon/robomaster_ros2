// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robomaster_msgs:msg/SBus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robomaster_msgs/msg/detail/s_bus__rosidl_typesupport_introspection_c.h"
#include "robomaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robomaster_msgs/msg/detail/s_bus__functions.h"
#include "robomaster_msgs/msg/detail/s_bus__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robomaster_msgs__msg__SBus__init(message_memory);
}

void robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_fini_function(void * message_memory)
{
  robomaster_msgs__msg__SBus__fini(message_memory);
}

size_t robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__size_function__SBus__channels(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__get_const_function__SBus__channels(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__get_function__SBus__channels(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__fetch_function__SBus__channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__get_const_function__SBus__channels(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__assign_function__SBus__channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__get_function__SBus__channels(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SBus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SBus, channels),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__size_function__SBus__channels,  // size() function pointer
    robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__get_const_function__SBus__channels,  // get_const(index) function pointer
    robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__get_function__SBus__channels,  // get(index) function pointer
    robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__fetch_function__SBus__channels,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__assign_function__SBus__channels,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_message_members = {
  "robomaster_msgs__msg",  // message namespace
  "SBus",  // message name
  2,  // number of fields
  sizeof(robomaster_msgs__msg__SBus),
  robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_message_member_array,  // message members
  robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_init_function,  // function to initialize message memory (memory has to be allocated)
  robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_message_type_support_handle = {
  0,
  &robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robomaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, SBus)() {
  robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_message_type_support_handle.typesupport_identifier) {
    robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robomaster_msgs__msg__SBus__rosidl_typesupport_introspection_c__SBus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
