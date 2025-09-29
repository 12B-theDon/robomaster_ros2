// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robomaster_msgs:msg/SensorAdapter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robomaster_msgs/msg/detail/sensor_adapter__rosidl_typesupport_introspection_c.h"
#include "robomaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robomaster_msgs/msg/detail/sensor_adapter__functions.h"
#include "robomaster_msgs/msg/detail/sensor_adapter__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robomaster_msgs__msg__SensorAdapter__init(message_memory);
}

void robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_fini_function(void * message_memory)
{
  robomaster_msgs__msg__SensorAdapter__fini(message_memory);
}

size_t robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__size_function__SensorAdapter__io(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__io(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__io(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__fetch_function__SensorAdapter__io(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__io(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__assign_function__SensorAdapter__io(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__io(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__size_function__SensorAdapter__adc(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__adc(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__adc(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__fetch_function__SensorAdapter__adc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__adc(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__assign_function__SensorAdapter__adc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__adc(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__size_function__SensorAdapter__port(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__port(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__port(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__fetch_function__SensorAdapter__port(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__port(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__assign_function__SensorAdapter__port(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__port(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__size_function__SensorAdapter__id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__id(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__id(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__fetch_function__SensorAdapter__id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__id(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__assign_function__SensorAdapter__id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__id(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SensorAdapter, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "io",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SensorAdapter, io),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__size_function__SensorAdapter__io,  // size() function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__io,  // get_const(index) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__io,  // get(index) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__fetch_function__SensorAdapter__io,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__assign_function__SensorAdapter__io,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "adc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SensorAdapter, adc),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__size_function__SensorAdapter__adc,  // size() function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__adc,  // get_const(index) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__adc,  // get(index) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__fetch_function__SensorAdapter__adc,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__assign_function__SensorAdapter__adc,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SensorAdapter, port),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__size_function__SensorAdapter__port,  // size() function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__port,  // get_const(index) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__port,  // get(index) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__fetch_function__SensorAdapter__port,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__assign_function__SensorAdapter__port,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__SensorAdapter, id),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__size_function__SensorAdapter__id,  // size() function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_const_function__SensorAdapter__id,  // get_const(index) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__get_function__SensorAdapter__id,  // get(index) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__fetch_function__SensorAdapter__id,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__assign_function__SensorAdapter__id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_message_members = {
  "robomaster_msgs__msg",  // message namespace
  "SensorAdapter",  // message name
  5,  // number of fields
  sizeof(robomaster_msgs__msg__SensorAdapter),
  robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_message_member_array,  // message members
  robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_init_function,  // function to initialize message memory (memory has to be allocated)
  robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_message_type_support_handle = {
  0,
  &robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robomaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, SensorAdapter)() {
  robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_message_type_support_handle.typesupport_identifier) {
    robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robomaster_msgs__msg__SensorAdapter__rosidl_typesupport_introspection_c__SensorAdapter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
