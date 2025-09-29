// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robomaster_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/chassis_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robomaster_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robomaster_msgs/msg/detail/chassis_status__struct.h"
#include "robomaster_msgs/msg/detail/chassis_status__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robomaster_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robomaster_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robomaster_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ChassisStatus__ros_msg_type = robomaster_msgs__msg__ChassisStatus;

static bool _ChassisStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChassisStatus__ros_msg_type * ros_message = static_cast<const _ChassisStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: is_static
  {
    cdr << (ros_message->is_static ? true : false);
  }

  // Field name: up_hill
  {
    cdr << (ros_message->up_hill ? true : false);
  }

  // Field name: down_hill
  {
    cdr << (ros_message->down_hill ? true : false);
  }

  // Field name: on_slope
  {
    cdr << (ros_message->on_slope ? true : false);
  }

  // Field name: is_pick_up
  {
    cdr << (ros_message->is_pick_up ? true : false);
  }

  // Field name: slip
  {
    cdr << (ros_message->slip ? true : false);
  }

  // Field name: impact_x
  {
    cdr << (ros_message->impact_x ? true : false);
  }

  // Field name: impact_y
  {
    cdr << (ros_message->impact_y ? true : false);
  }

  // Field name: impact_z
  {
    cdr << (ros_message->impact_z ? true : false);
  }

  // Field name: roll_over
  {
    cdr << (ros_message->roll_over ? true : false);
  }

  // Field name: hill
  {
    cdr << (ros_message->hill ? true : false);
  }

  return true;
}

static bool _ChassisStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChassisStatus__ros_msg_type * ros_message = static_cast<_ChassisStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: is_static
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_static = tmp ? true : false;
  }

  // Field name: up_hill
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->up_hill = tmp ? true : false;
  }

  // Field name: down_hill
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->down_hill = tmp ? true : false;
  }

  // Field name: on_slope
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->on_slope = tmp ? true : false;
  }

  // Field name: is_pick_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_pick_up = tmp ? true : false;
  }

  // Field name: slip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->slip = tmp ? true : false;
  }

  // Field name: impact_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->impact_x = tmp ? true : false;
  }

  // Field name: impact_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->impact_y = tmp ? true : false;
  }

  // Field name: impact_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->impact_z = tmp ? true : false;
  }

  // Field name: roll_over
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->roll_over = tmp ? true : false;
  }

  // Field name: hill
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hill = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robomaster_msgs
size_t get_serialized_size_robomaster_msgs__msg__ChassisStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChassisStatus__ros_msg_type * ros_message = static_cast<const _ChassisStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name is_static
  {
    size_t item_size = sizeof(ros_message->is_static);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name up_hill
  {
    size_t item_size = sizeof(ros_message->up_hill);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name down_hill
  {
    size_t item_size = sizeof(ros_message->down_hill);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name on_slope
  {
    size_t item_size = sizeof(ros_message->on_slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_pick_up
  {
    size_t item_size = sizeof(ros_message->is_pick_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slip
  {
    size_t item_size = sizeof(ros_message->slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name impact_x
  {
    size_t item_size = sizeof(ros_message->impact_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name impact_y
  {
    size_t item_size = sizeof(ros_message->impact_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name impact_z
  {
    size_t item_size = sizeof(ros_message->impact_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_over
  {
    size_t item_size = sizeof(ros_message->roll_over);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hill
  {
    size_t item_size = sizeof(ros_message->hill);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChassisStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robomaster_msgs__msg__ChassisStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robomaster_msgs
size_t max_serialized_size_robomaster_msgs__msg__ChassisStatus(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_static
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: up_hill
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: down_hill
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: on_slope
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_pick_up
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: slip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: impact_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: impact_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: impact_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: roll_over
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hill
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robomaster_msgs__msg__ChassisStatus;
    is_plain =
      (
      offsetof(DataType, hill) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChassisStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robomaster_msgs__msg__ChassisStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChassisStatus = {
  "robomaster_msgs::msg",
  "ChassisStatus",
  _ChassisStatus__cdr_serialize,
  _ChassisStatus__cdr_deserialize,
  _ChassisStatus__get_serialized_size,
  _ChassisStatus__max_serialized_size
};

static rosidl_message_type_support_t _ChassisStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChassisStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robomaster_msgs, msg, ChassisStatus)() {
  return &_ChassisStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
