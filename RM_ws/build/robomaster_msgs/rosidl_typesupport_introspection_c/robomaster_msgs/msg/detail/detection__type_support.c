// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robomaster_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robomaster_msgs/msg/detail/detection__rosidl_typesupport_introspection_c.h"
#include "robomaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robomaster_msgs/msg/detail/detection__functions.h"
#include "robomaster_msgs/msg/detail/detection__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `people`
#include "robomaster_msgs/msg/detected_person.h"
// Member `people`
#include "robomaster_msgs/msg/detail/detected_person__rosidl_typesupport_introspection_c.h"
// Member `robots`
#include "robomaster_msgs/msg/detected_robot.h"
// Member `robots`
#include "robomaster_msgs/msg/detail/detected_robot__rosidl_typesupport_introspection_c.h"
// Member `gestures`
#include "robomaster_msgs/msg/detected_gesture.h"
// Member `gestures`
#include "robomaster_msgs/msg/detail/detected_gesture__rosidl_typesupport_introspection_c.h"
// Member `lines`
#include "robomaster_msgs/msg/detected_line.h"
// Member `lines`
#include "robomaster_msgs/msg/detail/detected_line__rosidl_typesupport_introspection_c.h"
// Member `markers`
#include "robomaster_msgs/msg/detected_marker.h"
// Member `markers`
#include "robomaster_msgs/msg/detail/detected_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robomaster_msgs__msg__Detection__init(message_memory);
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function(void * message_memory)
{
  robomaster_msgs__msg__Detection__fini(message_memory);
}

size_t robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__people(
  const void * untyped_member)
{
  const robomaster_msgs__msg__DetectedPerson__Sequence * member =
    (const robomaster_msgs__msg__DetectedPerson__Sequence *)(untyped_member);
  return member->size;
}

const void * robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__people(
  const void * untyped_member, size_t index)
{
  const robomaster_msgs__msg__DetectedPerson__Sequence * member =
    (const robomaster_msgs__msg__DetectedPerson__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__people(
  void * untyped_member, size_t index)
{
  robomaster_msgs__msg__DetectedPerson__Sequence * member =
    (robomaster_msgs__msg__DetectedPerson__Sequence *)(untyped_member);
  return &member->data[index];
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__people(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robomaster_msgs__msg__DetectedPerson * item =
    ((const robomaster_msgs__msg__DetectedPerson *)
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__people(untyped_member, index));
  robomaster_msgs__msg__DetectedPerson * value =
    (robomaster_msgs__msg__DetectedPerson *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__people(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robomaster_msgs__msg__DetectedPerson * item =
    ((robomaster_msgs__msg__DetectedPerson *)
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__people(untyped_member, index));
  const robomaster_msgs__msg__DetectedPerson * value =
    (const robomaster_msgs__msg__DetectedPerson *)(untyped_value);
  *item = *value;
}

bool robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__people(
  void * untyped_member, size_t size)
{
  robomaster_msgs__msg__DetectedPerson__Sequence * member =
    (robomaster_msgs__msg__DetectedPerson__Sequence *)(untyped_member);
  robomaster_msgs__msg__DetectedPerson__Sequence__fini(member);
  return robomaster_msgs__msg__DetectedPerson__Sequence__init(member, size);
}

size_t robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__robots(
  const void * untyped_member)
{
  const robomaster_msgs__msg__DetectedRobot__Sequence * member =
    (const robomaster_msgs__msg__DetectedRobot__Sequence *)(untyped_member);
  return member->size;
}

const void * robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__robots(
  const void * untyped_member, size_t index)
{
  const robomaster_msgs__msg__DetectedRobot__Sequence * member =
    (const robomaster_msgs__msg__DetectedRobot__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__robots(
  void * untyped_member, size_t index)
{
  robomaster_msgs__msg__DetectedRobot__Sequence * member =
    (robomaster_msgs__msg__DetectedRobot__Sequence *)(untyped_member);
  return &member->data[index];
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robomaster_msgs__msg__DetectedRobot * item =
    ((const robomaster_msgs__msg__DetectedRobot *)
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__robots(untyped_member, index));
  robomaster_msgs__msg__DetectedRobot * value =
    (robomaster_msgs__msg__DetectedRobot *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robomaster_msgs__msg__DetectedRobot * item =
    ((robomaster_msgs__msg__DetectedRobot *)
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__robots(untyped_member, index));
  const robomaster_msgs__msg__DetectedRobot * value =
    (const robomaster_msgs__msg__DetectedRobot *)(untyped_value);
  *item = *value;
}

bool robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__robots(
  void * untyped_member, size_t size)
{
  robomaster_msgs__msg__DetectedRobot__Sequence * member =
    (robomaster_msgs__msg__DetectedRobot__Sequence *)(untyped_member);
  robomaster_msgs__msg__DetectedRobot__Sequence__fini(member);
  return robomaster_msgs__msg__DetectedRobot__Sequence__init(member, size);
}

size_t robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__gestures(
  const void * untyped_member)
{
  const robomaster_msgs__msg__DetectedGesture__Sequence * member =
    (const robomaster_msgs__msg__DetectedGesture__Sequence *)(untyped_member);
  return member->size;
}

const void * robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__gestures(
  const void * untyped_member, size_t index)
{
  const robomaster_msgs__msg__DetectedGesture__Sequence * member =
    (const robomaster_msgs__msg__DetectedGesture__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__gestures(
  void * untyped_member, size_t index)
{
  robomaster_msgs__msg__DetectedGesture__Sequence * member =
    (robomaster_msgs__msg__DetectedGesture__Sequence *)(untyped_member);
  return &member->data[index];
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__gestures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robomaster_msgs__msg__DetectedGesture * item =
    ((const robomaster_msgs__msg__DetectedGesture *)
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__gestures(untyped_member, index));
  robomaster_msgs__msg__DetectedGesture * value =
    (robomaster_msgs__msg__DetectedGesture *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__gestures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robomaster_msgs__msg__DetectedGesture * item =
    ((robomaster_msgs__msg__DetectedGesture *)
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__gestures(untyped_member, index));
  const robomaster_msgs__msg__DetectedGesture * value =
    (const robomaster_msgs__msg__DetectedGesture *)(untyped_value);
  *item = *value;
}

bool robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__gestures(
  void * untyped_member, size_t size)
{
  robomaster_msgs__msg__DetectedGesture__Sequence * member =
    (robomaster_msgs__msg__DetectedGesture__Sequence *)(untyped_member);
  robomaster_msgs__msg__DetectedGesture__Sequence__fini(member);
  return robomaster_msgs__msg__DetectedGesture__Sequence__init(member, size);
}

size_t robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__lines(
  const void * untyped_member)
{
  const robomaster_msgs__msg__DetectedLine__Sequence * member =
    (const robomaster_msgs__msg__DetectedLine__Sequence *)(untyped_member);
  return member->size;
}

const void * robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__lines(
  const void * untyped_member, size_t index)
{
  const robomaster_msgs__msg__DetectedLine__Sequence * member =
    (const robomaster_msgs__msg__DetectedLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__lines(
  void * untyped_member, size_t index)
{
  robomaster_msgs__msg__DetectedLine__Sequence * member =
    (robomaster_msgs__msg__DetectedLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robomaster_msgs__msg__DetectedLine * item =
    ((const robomaster_msgs__msg__DetectedLine *)
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__lines(untyped_member, index));
  robomaster_msgs__msg__DetectedLine * value =
    (robomaster_msgs__msg__DetectedLine *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robomaster_msgs__msg__DetectedLine * item =
    ((robomaster_msgs__msg__DetectedLine *)
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__lines(untyped_member, index));
  const robomaster_msgs__msg__DetectedLine * value =
    (const robomaster_msgs__msg__DetectedLine *)(untyped_value);
  *item = *value;
}

bool robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__lines(
  void * untyped_member, size_t size)
{
  robomaster_msgs__msg__DetectedLine__Sequence * member =
    (robomaster_msgs__msg__DetectedLine__Sequence *)(untyped_member);
  robomaster_msgs__msg__DetectedLine__Sequence__fini(member);
  return robomaster_msgs__msg__DetectedLine__Sequence__init(member, size);
}

size_t robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__markers(
  const void * untyped_member)
{
  const robomaster_msgs__msg__DetectedMarker__Sequence * member =
    (const robomaster_msgs__msg__DetectedMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__markers(
  const void * untyped_member, size_t index)
{
  const robomaster_msgs__msg__DetectedMarker__Sequence * member =
    (const robomaster_msgs__msg__DetectedMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__markers(
  void * untyped_member, size_t index)
{
  robomaster_msgs__msg__DetectedMarker__Sequence * member =
    (robomaster_msgs__msg__DetectedMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robomaster_msgs__msg__DetectedMarker * item =
    ((const robomaster_msgs__msg__DetectedMarker *)
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__markers(untyped_member, index));
  robomaster_msgs__msg__DetectedMarker * value =
    (robomaster_msgs__msg__DetectedMarker *)(untyped_value);
  *value = *item;
}

void robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robomaster_msgs__msg__DetectedMarker * item =
    ((robomaster_msgs__msg__DetectedMarker *)
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__markers(untyped_member, index));
  const robomaster_msgs__msg__DetectedMarker * value =
    (const robomaster_msgs__msg__DetectedMarker *)(untyped_value);
  *item = *value;
}

bool robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__markers(
  void * untyped_member, size_t size)
{
  robomaster_msgs__msg__DetectedMarker__Sequence * member =
    (robomaster_msgs__msg__DetectedMarker__Sequence *)(untyped_member);
  robomaster_msgs__msg__DetectedMarker__Sequence__fini(member);
  return robomaster_msgs__msg__DetectedMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__Detection, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "people",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__Detection, people),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__people,  // size() function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__people,  // get_const(index) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__people,  // get(index) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__people,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__people,  // assign(index, value) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__people  // resize(index) function pointer
  },
  {
    "robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__Detection, robots),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__robots,  // size() function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__robots,  // get_const(index) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__robots,  // get(index) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__robots,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__robots,  // assign(index, value) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__robots  // resize(index) function pointer
  },
  {
    "gestures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__Detection, gestures),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__gestures,  // size() function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__gestures,  // get_const(index) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__gestures,  // get(index) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__gestures,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__gestures,  // assign(index, value) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__gestures  // resize(index) function pointer
  },
  {
    "lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__Detection, lines),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__lines,  // size() function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__lines,  // get_const(index) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__lines,  // get(index) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__lines,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__lines,  // assign(index, value) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__lines  // resize(index) function pointer
  },
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__msg__Detection, markers),  // bytes offset in struct
    NULL,  // default value
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__markers,  // size() function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__markers,  // get_const(index) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__markers,  // get(index) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__markers,  // fetch(index, &value) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__markers,  // assign(index, value) function pointer
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members = {
  "robomaster_msgs__msg",  // message namespace
  "Detection",  // message name
  6,  // number of fields
  sizeof(robomaster_msgs__msg__Detection),
  robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array,  // message members
  robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function,  // function to initialize message memory (memory has to be allocated)
  robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle = {
  0,
  &robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robomaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, Detection)() {
  robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, DetectedPerson)();
  robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, DetectedRobot)();
  robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, DetectedGesture)();
  robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, DetectedLine)();
  robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, msg, DetectedMarker)();
  if (!robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier) {
    robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robomaster_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
