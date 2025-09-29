// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robomaster_msgs:msg/SpeakerCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robomaster_msgs/msg/detail/speaker_command__rosidl_typesupport_introspection_c.h"
#include "robomaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robomaster_msgs/msg/detail/speaker_command__functions.h"
#include "robomaster_msgs/msg/detail/speaker_command__struct.h"


// Include directives for member types
// Member `file`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robomaster_msgs__msg__SpeakerCommand__init(message_memory);
}

void robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_fini_function(void * message_memory)
{
  robomaster_msgs__msg__SpeakerCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_message_member_array[4] = {
  {
    "sound_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SpeakerCommand, sound_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SpeakerCommand, times),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SpeakerCommand, control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SpeakerCommand, file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_message_members = {
  "robomaster_msgs__msg",  // message namespace
  "SpeakerCommand",  // message name
  4,  // number of fields
  sizeof(robomaster_msgs__msg__SpeakerCommand),
  robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_message_member_array,  // message members
  robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_message_type_support_handle = {
  0,
  &robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robomaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, SpeakerCommand)() {
  if (!robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_message_type_support_handle.typesupport_identifier) {
    robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robomaster_msgs__msg__SpeakerCommand__rosidl_typesupport_introspection_c__SpeakerCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
