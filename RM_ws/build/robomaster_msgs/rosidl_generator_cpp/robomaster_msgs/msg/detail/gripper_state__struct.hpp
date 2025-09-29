// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__GripperState __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__GripperState __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperState_
{
  using Type = GripperState_<ContainerAllocator>;

  explicit GripperState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit GripperState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PAUSE =
    0u;
  static constexpr uint8_t OPEN =
    1u;
  static constexpr uint8_t CLOSE =
    2u;

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::GripperState_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::GripperState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::GripperState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::GripperState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::GripperState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::GripperState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::GripperState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::GripperState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::GripperState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::GripperState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__GripperState
    std::shared_ptr<robomaster_msgs::msg::GripperState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__GripperState
    std::shared_ptr<robomaster_msgs::msg::GripperState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperState_

// alias to use template instance with default allocator
using GripperState =
  robomaster_msgs::msg::GripperState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GripperState_<ContainerAllocator>::PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GripperState_<ContainerAllocator>::OPEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GripperState_<ContainerAllocator>::CLOSE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_
