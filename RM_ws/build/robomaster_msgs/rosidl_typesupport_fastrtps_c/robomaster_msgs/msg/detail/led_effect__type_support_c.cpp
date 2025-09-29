// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robomaster_msgs:msg/LEDEffect.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/led_effect__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robomaster_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robomaster_msgs/msg/detail/led_effect__struct.h"
#include "robomaster_msgs/msg/detail/led_effect__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/color_rgba__functions.h"  // color

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robomaster_msgs
size_t get_serialized_size_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robomaster_msgs
size_t max_serialized_size_std_msgs__msg__ColorRGBA(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robomaster_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA)();


using _LEDEffect__ros_msg_type = robomaster_msgs__msg__LEDEffect;

static bool _LEDEffect__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LEDEffect__ros_msg_type * ros_message = static_cast<const _LEDEffect__ros_msg_type *>(untyped_ros_message);
  // Field name: mask
  {
    cdr << ros_message->mask;
  }

  // Field name: submask
  {
    cdr << ros_message->submask;
  }

  // Field name: effect
  {
    cdr << ros_message->effect;
  }

  // Field name: color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->color, cdr))
    {
      return false;
    }
  }

  // Field name: t1
  {
    cdr << ros_message->t1;
  }

  // Field name: t2
  {
    cdr << ros_message->t2;
  }

  return true;
}

static bool _LEDEffect__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LEDEffect__ros_msg_type * ros_message = static_cast<_LEDEffect__ros_msg_type *>(untyped_ros_message);
  // Field name: mask
  {
    cdr >> ros_message->mask;
  }

  // Field name: submask
  {
    cdr >> ros_message->submask;
  }

  // Field name: effect
  {
    cdr >> ros_message->effect;
  }

  // Field name: color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->color))
    {
      return false;
    }
  }

  // Field name: t1
  {
    cdr >> ros_message->t1;
  }

  // Field name: t2
  {
    cdr >> ros_message->t2;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robomaster_msgs
size_t get_serialized_size_robomaster_msgs__msg__LEDEffect(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LEDEffect__ros_msg_type * ros_message = static_cast<const _LEDEffect__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mask
  {
    size_t item_size = sizeof(ros_message->mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name submask
  {
    size_t item_size = sizeof(ros_message->submask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name effect
  {
    size_t item_size = sizeof(ros_message->effect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name color

  current_alignment += get_serialized_size_std_msgs__msg__ColorRGBA(
    &(ros_message->color), current_alignment);
  // field.name t1
  {
    size_t item_size = sizeof(ros_message->t1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t2
  {
    size_t item_size = sizeof(ros_message->t2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LEDEffect__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robomaster_msgs__msg__LEDEffect(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robomaster_msgs
size_t max_serialized_size_robomaster_msgs__msg__LEDEffect(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: submask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: effect
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: t1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robomaster_msgs__msg__LEDEffect;
    is_plain =
      (
      offsetof(DataType, t2) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LEDEffect__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robomaster_msgs__msg__LEDEffect(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LEDEffect = {
  "robomaster_msgs::msg",
  "LEDEffect",
  _LEDEffect__cdr_serialize,
  _LEDEffect__cdr_deserialize,
  _LEDEffect__get_serialized_size,
  _LEDEffect__max_serialized_size
};

static rosidl_message_type_support_t _LEDEffect__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LEDEffect,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robomaster_msgs, msg, LEDEffect)() {
  return &_LEDEffect__type_support;
}

#if defined(__cplusplus)
}
#endif
