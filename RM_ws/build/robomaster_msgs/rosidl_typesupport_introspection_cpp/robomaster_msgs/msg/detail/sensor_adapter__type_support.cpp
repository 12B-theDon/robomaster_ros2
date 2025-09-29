// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robomaster_msgs:msg/SensorAdapter.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robomaster_msgs/msg/detail/sensor_adapter__struct.hpp"
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

void SensorAdapter_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robomaster_msgs::msg::SensorAdapter(_init);
}

void SensorAdapter_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robomaster_msgs::msg::SensorAdapter *>(message_memory);
  typed_message->~SensorAdapter();
}

size_t size_function__SensorAdapter__io(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__SensorAdapter__io(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorAdapter__io(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorAdapter__io(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorAdapter__io(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorAdapter__io(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorAdapter__io(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorAdapter__adc(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__SensorAdapter__adc(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorAdapter__adc(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorAdapter__adc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__SensorAdapter__adc(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__SensorAdapter__adc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__SensorAdapter__adc(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorAdapter__port(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__SensorAdapter__port(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorAdapter__port(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorAdapter__port(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorAdapter__port(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorAdapter__port(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorAdapter__port(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorAdapter__id(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__SensorAdapter__id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorAdapter__id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorAdapter__id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorAdapter__id(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorAdapter__id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorAdapter__id(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorAdapter_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::SensorAdapter, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "io",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::SensorAdapter, io),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorAdapter__io,  // size() function pointer
    get_const_function__SensorAdapter__io,  // get_const(index) function pointer
    get_function__SensorAdapter__io,  // get(index) function pointer
    fetch_function__SensorAdapter__io,  // fetch(index, &value) function pointer
    assign_function__SensorAdapter__io,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "adc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::SensorAdapter, adc),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorAdapter__adc,  // size() function pointer
    get_const_function__SensorAdapter__adc,  // get_const(index) function pointer
    get_function__SensorAdapter__adc,  // get(index) function pointer
    fetch_function__SensorAdapter__adc,  // fetch(index, &value) function pointer
    assign_function__SensorAdapter__adc,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "port",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::SensorAdapter, port),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorAdapter__port,  // size() function pointer
    get_const_function__SensorAdapter__port,  // get_const(index) function pointer
    get_function__SensorAdapter__port,  // get(index) function pointer
    fetch_function__SensorAdapter__port,  // fetch(index, &value) function pointer
    assign_function__SensorAdapter__port,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::SensorAdapter, id),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorAdapter__id,  // size() function pointer
    get_const_function__SensorAdapter__id,  // get_const(index) function pointer
    get_function__SensorAdapter__id,  // get(index) function pointer
    fetch_function__SensorAdapter__id,  // fetch(index, &value) function pointer
    assign_function__SensorAdapter__id,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorAdapter_message_members = {
  "robomaster_msgs::msg",  // message namespace
  "SensorAdapter",  // message name
  5,  // number of fields
  sizeof(robomaster_msgs::msg::SensorAdapter),
  SensorAdapter_message_member_array,  // message members
  SensorAdapter_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorAdapter_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorAdapter_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorAdapter_message_members,
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
get_message_type_support_handle<robomaster_msgs::msg::SensorAdapter>()
{
  return &::robomaster_msgs::msg::rosidl_typesupport_introspection_cpp::SensorAdapter_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, msg, SensorAdapter)() {
  return &::robomaster_msgs::msg::rosidl_typesupport_introspection_cpp::SensorAdapter_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
