// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robomaster_msgs:msg/LEDEffect.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/led_effect__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robomaster_msgs/msg/detail/led_effect__struct.hpp"

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
  const std_msgs::msg::ColorRGBA &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::ColorRGBA &);
size_t get_serialized_size(
  const std_msgs::msg::ColorRGBA &,
  size_t current_alignment);
size_t
max_serialized_size_ColorRGBA(
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
  const robomaster_msgs::msg::LEDEffect & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mask
  cdr << ros_message.mask;
  // Member: submask
  cdr << ros_message.submask;
  // Member: effect
  cdr << ros_message.effect;
  // Member: color
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.color,
    cdr);
  // Member: t1
  cdr << ros_message.t1;
  // Member: t2
  cdr << ros_message.t2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomaster_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robomaster_msgs::msg::LEDEffect & ros_message)
{
  // Member: mask
  cdr >> ros_message.mask;

  // Member: submask
  cdr >> ros_message.submask;

  // Member: effect
  cdr >> ros_message.effect;

  // Member: color
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.color);

  // Member: t1
  cdr >> ros_message.t1;

  // Member: t2
  cdr >> ros_message.t2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomaster_msgs
get_serialized_size(
  const robomaster_msgs::msg::LEDEffect & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mask
  {
    size_t item_size = sizeof(ros_message.mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: submask
  {
    size_t item_size = sizeof(ros_message.submask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: effect
  {
    size_t item_size = sizeof(ros_message.effect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: color

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.color, current_alignment);
  // Member: t1
  {
    size_t item_size = sizeof(ros_message.t1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t2
  {
    size_t item_size = sizeof(ros_message.t2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robomaster_msgs
max_serialized_size_LEDEffect(
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


  // Member: mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: submask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: effect
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ColorRGBA(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: t1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t2
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
    using DataType = robomaster_msgs::msg::LEDEffect;
    is_plain =
      (
      offsetof(DataType, t2) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LEDEffect__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robomaster_msgs::msg::LEDEffect *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LEDEffect__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robomaster_msgs::msg::LEDEffect *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LEDEffect__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robomaster_msgs::msg::LEDEffect *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LEDEffect__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LEDEffect(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LEDEffect__callbacks = {
  "robomaster_msgs::msg",
  "LEDEffect",
  _LEDEffect__cdr_serialize,
  _LEDEffect__cdr_deserialize,
  _LEDEffect__get_serialized_size,
  _LEDEffect__max_serialized_size
};

static rosidl_message_type_support_t _LEDEffect__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LEDEffect__callbacks,
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
get_message_type_support_handle<robomaster_msgs::msg::LEDEffect>()
{
  return &robomaster_msgs::msg::typesupport_fastrtps_cpp::_LEDEffect__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, msg, LEDEffect)() {
  return &robomaster_msgs::msg::typesupport_fastrtps_cpp::_LEDEffect__handle;
}

#ifdef __cplusplus
}
#endif
