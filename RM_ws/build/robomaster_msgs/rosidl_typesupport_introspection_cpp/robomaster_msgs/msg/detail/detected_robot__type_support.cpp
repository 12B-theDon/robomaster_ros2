// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robomaster_msgs:msg/DetectedRobot.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robomaster_msgs/msg/detail/detected_robot__struct.hpp"
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

void DetectedRobot_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robomaster_msgs::msg::DetectedRobot(_init);
}

void DetectedRobot_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robomaster_msgs::msg::DetectedRobot *>(message_memory);
  typed_message->~DetectedRobot();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectedRobot_message_member_array[1] = {
  {
    "roi",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robomaster_msgs::msg::RegionOfInterest>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::DetectedRobot, roi),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectedRobot_message_members = {
  "robomaster_msgs::msg",  // message namespace
  "DetectedRobot",  // message name
  1,  // number of fields
  sizeof(robomaster_msgs::msg::DetectedRobot),
  DetectedRobot_message_member_array,  // message members
  DetectedRobot_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectedRobot_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectedRobot_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectedRobot_message_members,
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
get_message_type_support_handle<robomaster_msgs::msg::DetectedRobot>()
{
  return &::robomaster_msgs::msg::rosidl_typesupport_introspection_cpp::DetectedRobot_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, msg, DetectedRobot)() {
  return &::robomaster_msgs::msg::rosidl_typesupport_introspection_cpp::DetectedRobot_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
