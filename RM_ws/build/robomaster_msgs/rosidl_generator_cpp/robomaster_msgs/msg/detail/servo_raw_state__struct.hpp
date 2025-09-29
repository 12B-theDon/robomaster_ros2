// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/ServoRawState.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__STRUCT_HPP_

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
# define DEPRECATED__robomaster_msgs__msg__ServoRawState __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__ServoRawState __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoRawState_
{
  using Type = ServoRawState_<ContainerAllocator>;

  explicit ServoRawState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->valid.begin(), this->valid.end(), false);
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->value.begin(), this->value.end(), 0l);
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->speed.begin(), this->speed.end(), 0l);
    }
  }

  explicit ServoRawState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    valid(_alloc),
    value(_alloc),
    speed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->valid.begin(), this->valid.end(), false);
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->value.begin(), this->value.end(), 0l);
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->speed.begin(), this->speed.end(), 0l);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _valid_type =
    std::array<bool, 4>;
  _valid_type valid;
  using _value_type =
    std::array<int32_t, 4>;
  _value_type value;
  using _speed_type =
    std::array<int32_t, 4>;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__valid(
    const std::array<bool, 4> & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__value(
    const std::array<int32_t, 4> & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__speed(
    const std::array<int32_t, 4> & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::ServoRawState_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::ServoRawState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::ServoRawState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::ServoRawState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::ServoRawState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::ServoRawState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::ServoRawState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::ServoRawState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::ServoRawState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::ServoRawState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__ServoRawState
    std::shared_ptr<robomaster_msgs::msg::ServoRawState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__ServoRawState
    std::shared_ptr<robomaster_msgs::msg::ServoRawState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoRawState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoRawState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoRawState_

// alias to use template instance with default allocator
using ServoRawState =
  robomaster_msgs::msg::ServoRawState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERVO_RAW_STATE__STRUCT_HPP_
