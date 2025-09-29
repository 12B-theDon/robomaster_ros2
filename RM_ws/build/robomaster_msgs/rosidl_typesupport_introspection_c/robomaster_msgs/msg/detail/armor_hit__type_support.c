// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robomaster_msgs:msg/ArmorHit.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robomaster_msgs/msg/detail/armor_hit__rosidl_typesupport_introspection_c.h"
#include "robomaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robomaster_msgs/msg/detail/armor_hit__functions.h"
#include "robomaster_msgs/msg/detail/armor_hit__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robomaster_msgs__msg__ArmorHit__init(message_memory);
}

void robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_fini_function(void * message_memory)
{
  robomaster_msgs__msg__ArmorHit__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__ArmorHit, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__ArmorHit, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__ArmorHit, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__ArmorHit, level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_message_members = {
  "robomaster_msgs__msg",  // message namespace
  "ArmorHit",  // message name
  4,  // number of fields
  sizeof(robomaster_msgs__msg__ArmorHit),
  robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_message_member_array,  // message members
  robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_init_function,  // function to initialize message memory (memory has to be allocated)
  robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_message_type_support_handle = {
  0,
  &robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robomaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, ArmorHit)() {
  robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_message_type_support_handle.typesupport_identifier) {
    robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robomaster_msgs__msg__ArmorHit__rosidl_typesupport_introspection_c__ArmorHit_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
