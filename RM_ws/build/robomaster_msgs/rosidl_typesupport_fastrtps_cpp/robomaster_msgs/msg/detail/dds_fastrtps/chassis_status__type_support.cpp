// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robomaster_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/chassis_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robomaster_msgs/msg/detail/chassis_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace robomaster_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomaster_msgs
cdr_serialize(
  const robomaster_msgs::msg::ChassisStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: is_static
  cdr << (ros_message.is_static ? true : false);
  // Member: up_hill
  cdr << (ros_message.up_hill ? true : false);
  // Member: down_hill
  cdr << (ros_message.down_hill ? true : false);
  // Member: on_slope
  cdr << (ros_message.on_slope ? true : false);
  // Member: is_pick_up
  cdr << (ros_message.is_pick_up ? true : false);
  // Member: slip
  cdr << (ros_message.slip ? true : false);
  // Member: impact_x
  cdr << (ros_message.impact_x ? true : false);
  // Member: impact_y
  cdr << (ros_message.impact_y ? true : false);
  // Member: impact_z
  cdr << (ros_message.impact_z ? true : false);
  // Member: roll_over
  cdr << (ros_message.roll_over ? true : false);
  // Member: hill
  cdr << (ros_message.hill ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomaster_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robomaster_msgs::msg::ChassisStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: is_static
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_static = tmp ? true : false;
  }

  // Member: up_hill
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.up_hill = tmp ? true : false;
  }

  // Member: down_hill
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.down_hill = tmp ? true : false;
  }

  // Member: on_slope
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.on_slope = tmp ? true : false;
  }

  // Member: is_pick_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_pick_up = tmp ? true : false;
  }

  // Member: slip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.slip = tmp ? true : false;
  }

  // Member: impact_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.impact_x = tmp ? true : false;
  }

  // Member: impact_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.impact_y = tmp ? true : false;
  }

  // Member: impact_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.impact_z = tmp ? true : false;
  }

  // Member: roll_over
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.roll_over = tmp ? true : false;
  }

  // Member: hill
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.hill = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomaster_msgs
get_serialized_size(
  const robomaster_msgs::msg::ChassisStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: is_static
  {
    size_t item_size = sizeof(ros_message.is_static);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: up_hill
  {
    size_t item_size = sizeof(ros_message.up_hill);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: down_hill
  {
    size_t item_size = sizeof(ros_message.down_hill);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: on_slope
  {
    size_t item_size = sizeof(ros_message.on_slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_pick_up
  {
    size_t item_size = sizeof(ros_message.is_pick_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slip
  {
    size_t item_size = sizeof(ros_message.slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: impact_x
  {
    size_t item_size = sizeof(ros_message.impact_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: impact_y
  {
    size_t item_size = sizeof(ros_message.impact_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: impact_z
  {
    size_t item_size = sizeof(ros_message.impact_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_over
  {
    size_t item_size = sizeof(ros_message.roll_over);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hill
  {
    size_t item_size = sizeof(ros_message.hill);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomaster_msgs
max_serialized_size_ChassisStatus(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_static
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: up_hill
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: down_hill
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: on_slope
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_pick_up
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: slip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: impact_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: impact_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: impact_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: roll_over
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hill
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
    using DataType = robomaster_msgs::msg::ChassisStatus;
    is_plain =
      (
      offsetof(DataType, hill) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ChassisStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robomaster_msgs::msg::ChassisStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ChassisStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robomaster_msgs::msg::ChassisStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ChassisStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robomaster_msgs::msg::ChassisStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ChassisStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ChassisStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ChassisStatus__callbacks = {
  "robomaster_msgs::msg",
  "ChassisStatus",
  _ChassisStatus__cdr_serialize,
  _ChassisStatus__cdr_deserialize,
  _ChassisStatus__get_serialized_size,
  _ChassisStatus__max_serialized_size
};

static rosidl_message_type_support_t _ChassisStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ChassisStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robomaster_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robomaster_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::msg::ChassisStatus>()
{
  return &robomaster_msgs::msg::typesupport_fastrtps_cpp::_ChassisStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, msg, ChassisStatus)() {
  return &robomaster_msgs::msg::typesupport_fastrtps_cpp::_ChassisStatus__handle;
}

#ifdef __cplusplus
}
#endif
