// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robomaster_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robomaster_msgs/msg/detail/detection__struct.hpp"
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

void Detection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robomaster_msgs::msg::Detection(_init);
}

void Detection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robomaster_msgs::msg::Detection *>(message_memory);
  typed_message->~Detection();
}

size_t size_function__Detection__people(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robomaster_msgs::msg::DetectedPerson> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__people(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robomaster_msgs::msg::DetectedPerson> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__people(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robomaster_msgs::msg::DetectedPerson> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__people(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robomaster_msgs::msg::DetectedPerson *>(
    get_const_function__Detection__people(untyped_member, index));
  auto & value = *reinterpret_cast<robomaster_msgs::msg::DetectedPerson *>(untyped_value);
  value = item;
}

void assign_function__Detection__people(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robomaster_msgs::msg::DetectedPerson *>(
    get_function__Detection__people(untyped_member, index));
  const auto & value = *reinterpret_cast<const robomaster_msgs::msg::DetectedPerson *>(untyped_value);
  item = value;
}

void resize_function__Detection__people(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robomaster_msgs::msg::DetectedPerson> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__robots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robomaster_msgs::msg::DetectedRobot> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__robots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robomaster_msgs::msg::DetectedRobot> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__robots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robomaster_msgs::msg::DetectedRobot> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robomaster_msgs::msg::DetectedRobot *>(
    get_const_function__Detection__robots(untyped_member, index));
  auto & value = *reinterpret_cast<robomaster_msgs::msg::DetectedRobot *>(untyped_value);
  value = item;
}

void assign_function__Detection__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robomaster_msgs::msg::DetectedRobot *>(
    get_function__Detection__robots(untyped_member, index));
  const auto & value = *reinterpret_cast<const robomaster_msgs::msg::DetectedRobot *>(untyped_value);
  item = value;
}

void resize_function__Detection__robots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robomaster_msgs::msg::DetectedRobot> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__gestures(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robomaster_msgs::msg::DetectedGesture> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__gestures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robomaster_msgs::msg::DetectedGesture> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__gestures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robomaster_msgs::msg::DetectedGesture> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__gestures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robomaster_msgs::msg::DetectedGesture *>(
    get_const_function__Detection__gestures(untyped_member, index));
  auto & value = *reinterpret_cast<robomaster_msgs::msg::DetectedGesture *>(untyped_value);
  value = item;
}

void assign_function__Detection__gestures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robomaster_msgs::msg::DetectedGesture *>(
    get_function__Detection__gestures(untyped_member, index));
  const auto & value = *reinterpret_cast<const robomaster_msgs::msg::DetectedGesture *>(untyped_value);
  item = value;
}

void resize_function__Detection__gestures(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robomaster_msgs::msg::DetectedGesture> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robomaster_msgs::msg::DetectedLine> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robomaster_msgs::msg::DetectedLine> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robomaster_msgs::msg::DetectedLine> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robomaster_msgs::msg::DetectedLine *>(
    get_const_function__Detection__lines(untyped_member, index));
  auto & value = *reinterpret_cast<robomaster_msgs::msg::DetectedLine *>(untyped_value);
  value = item;
}

void assign_function__Detection__lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robomaster_msgs::msg::DetectedLine *>(
    get_function__Detection__lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const robomaster_msgs::msg::DetectedLine *>(untyped_value);
  item = value;
}

void resize_function__Detection__lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robomaster_msgs::msg::DetectedLine> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__markers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robomaster_msgs::msg::DetectedMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__markers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robomaster_msgs::msg::DetectedMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__markers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robomaster_msgs::msg::DetectedMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robomaster_msgs::msg::DetectedMarker *>(
    get_const_function__Detection__markers(untyped_member, index));
  auto & value = *reinterpret_cast<robomaster_msgs::msg::DetectedMarker *>(untyped_value);
  value = item;
}

void assign_function__Detection__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robomaster_msgs::msg::DetectedMarker *>(
    get_function__Detection__markers(untyped_member, index));
  const auto & value = *reinterpret_cast<const robomaster_msgs::msg::DetectedMarker *>(untyped_value);
  item = value;
}

void resize_function__Detection__markers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robomaster_msgs::msg::DetectedMarker> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Detection_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::Detection, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "people",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robomaster_msgs::msg::DetectedPerson>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::Detection, people),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__people,  // size() function pointer
    get_const_function__Detection__people,  // get_const(index) function pointer
    get_function__Detection__people,  // get(index) function pointer
    fetch_function__Detection__people,  // fetch(index, &value) function pointer
    assign_function__Detection__people,  // assign(index, value) function pointer
    resize_function__Detection__people  // resize(index) function pointer
  },
  {
    "robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robomaster_msgs::msg::DetectedRobot>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::Detection, robots),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__robots,  // size() function pointer
    get_const_function__Detection__robots,  // get_const(index) function pointer
    get_function__Detection__robots,  // get(index) function pointer
    fetch_function__Detection__robots,  // fetch(index, &value) function pointer
    assign_function__Detection__robots,  // assign(index, value) function pointer
    resize_function__Detection__robots  // resize(index) function pointer
  },
  {
    "gestures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robomaster_msgs::msg::DetectedGesture>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::Detection, gestures),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__gestures,  // size() function pointer
    get_const_function__Detection__gestures,  // get_const(index) function pointer
    get_function__Detection__gestures,  // get(index) function pointer
    fetch_function__Detection__gestures,  // fetch(index, &value) function pointer
    assign_function__Detection__gestures,  // assign(index, value) function pointer
    resize_function__Detection__gestures  // resize(index) function pointer
  },
  {
    "lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robomaster_msgs::msg::DetectedLine>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::Detection, lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__lines,  // size() function pointer
    get_const_function__Detection__lines,  // get_const(index) function pointer
    get_function__Detection__lines,  // get(index) function pointer
    fetch_function__Detection__lines,  // fetch(index, &value) function pointer
    assign_function__Detection__lines,  // assign(index, value) function pointer
    resize_function__Detection__lines  // resize(index) function pointer
  },
  {
    "markers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robomaster_msgs::msg::DetectedMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::Detection, markers),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__markers,  // size() function pointer
    get_const_function__Detection__markers,  // get_const(index) function pointer
    get_function__Detection__markers,  // get(index) function pointer
    fetch_function__Detection__markers,  // fetch(index, &value) function pointer
    assign_function__Detection__markers,  // assign(index, value) function pointer
    resize_function__Detection__markers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Detection_message_members = {
  "robomaster_msgs::msg",  // message namespace
  "Detection",  // message name
  6,  // number of fields
  sizeof(robomaster_msgs::msg::Detection),
  Detection_message_member_array,  // message members
  Detection_init_function,  // function to initialize message memory (memory has to be allocated)
  Detection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Detection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Detection_message_members,
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
get_message_type_support_handle<robomaster_msgs::msg::Detection>()
{
  return &::robomaster_msgs::msg::rosidl_typesupport_introspection_cpp::Detection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, msg, Detection)() {
  return &::robomaster_msgs::msg::rosidl_typesupport_introspection_cpp::Detection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
