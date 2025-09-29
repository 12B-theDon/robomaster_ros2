// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robomaster_msgs:msg/ServoRawState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robomaster_msgs/msg/detail/servo_raw_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robomaster_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ServoRawState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robomaster_msgs::msg::ServoRawState(_init);
}

void ServoRawState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robomaster_msgs::msg::ServoRawState *>(message_memory);
  typed_message->~ServoRawState();
}

size_t size_function__ServoRawState__valid(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__ServoRawState__valid(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoRawState__valid(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoRawState__valid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__ServoRawState__valid(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__ServoRawState__valid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__ServoRawState__valid(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__ServoRawState__value(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__ServoRawState__value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoRawState__value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoRawState__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__ServoRawState__value(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__ServoRawState__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__ServoRawState__value(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__ServoRawState__speed(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__ServoRawState__speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoRawState__speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoRawState__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__ServoRawState__speed(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__ServoRawState__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__ServoRawState__speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoRawState_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::ServoRawState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::ServoRawState, valid),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoRawState__valid,  // size() function pointer
    get_const_function__ServoRawState__valid,  // get_const(index) function pointer
    get_function__ServoRawState__valid,  // get(index) function pointer
    fetch_function__ServoRawState__valid,  // fetch(index, &value) function pointer
    assign_function__ServoRawState__valid,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::ServoRawState, value),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoRawState__value,  // size() function pointer
    get_const_function__ServoRawState__value,  // get_const(index) function pointer
    get_function__ServoRawState__value,  // get(index) function pointer
    fetch_function__ServoRawState__value,  // fetch(index, &value) function pointer
    assign_function__ServoRawState__value,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::ServoRawState, speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoRawState__speed,  // size() function pointer
    get_const_function__ServoRawState__speed,  // get_const(index) function pointer
    get_function__ServoRawState__speed,  // get(index) function pointer
    fetch_function__ServoRawState__speed,  // fetch(index, &value) function pointer
    assign_function__ServoRawState__speed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoRawState_message_members = {
  "robomaster_msgs::msg",  // message namespace
  "ServoRawState",  // message name
  4,  // number of fields
  sizeof(robomaster_msgs::msg::ServoRawState),
  ServoRawState_message_member_array,  // message members
  ServoRawState_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoRawState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoRawState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoRawState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robomaster_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::msg::ServoRawState>()
{
  return &::robomaster_msgs::msg::rosidl_typesupport_introspection_cpp::ServoRawState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, msg, ServoRawState)() {
  return &::robomaster_msgs::msg::rosidl_typesupport_introspection_cpp::ServoRawState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
