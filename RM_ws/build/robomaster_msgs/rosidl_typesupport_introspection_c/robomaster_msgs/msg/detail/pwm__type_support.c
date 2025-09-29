// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robomaster_msgs:msg/PWM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robomaster_msgs/msg/detail/pwm__rosidl_typesupport_introspection_c.h"
#include "robomaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robomaster_msgs/msg/detail/pwm__functions.h"
#include "robomaster_msgs/msg/detail/pwm__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robomaster_msgs__msg__PWM__init(message_memory);
}

void robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_fini_function(void * message_memory)
{
  robomaster_msgs__msg__PWM__fini(message_memory);
}

size_t robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__size_function__PWM__fraction_of_duty_cycle(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__get_const_function__PWM__fraction_of_duty_cycle(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__get_function__PWM__fraction_of_duty_cycle(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__fetch_function__PWM__fraction_of_duty_cycle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__get_const_function__PWM__fraction_of_duty_cycle(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__assign_function__PWM__fraction_of_duty_cycle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__get_function__PWM__fraction_of_duty_cycle(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_message_member_array[1] = {
  {
    "fraction_of_duty_cycle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__PWM, fraction_of_duty_cycle),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__size_function__PWM__fraction_of_duty_cycle,  // size() function pointer
    robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__get_const_function__PWM__fraction_of_duty_cycle,  // get_const(index) function pointer
    robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__get_function__PWM__fraction_of_duty_cycle,  // get(index) function pointer
    robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__fetch_function__PWM__fraction_of_duty_cycle,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__assign_function__PWM__fraction_of_duty_cycle,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_message_members = {
  "robomaster_msgs__msg",  // message namespace
  "PWM",  // message name
  1,  // number of fields
  sizeof(robomaster_msgs__msg__PWM),
  robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_message_member_array,  // message members
  robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_init_function,  // function to initialize message memory (memory has to be allocated)
  robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_message_type_support_handle = {
  0,
  &robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robomaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, PWM)() {
  if (!robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_message_type_support_handle.typesupport_identifier) {
    robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robomaster_msgs__msg__PWM__rosidl_typesupport_introspection_c__PWM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
