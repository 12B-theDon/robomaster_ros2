// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/WheelSpeeds.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__WHEEL_SPEEDS__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__WHEEL_SPEEDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__WheelSpeeds __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__WheelSpeeds __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelSpeeds_
{
  using Type = WheelSpeeds_<ContainerAllocator>;

  explicit WheelSpeeds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0.0f;
      this->front_right = 0.0f;
      this->rear_left = 0.0f;
      this->rear_right = 0.0f;
    }
  }

  explicit WheelSpeeds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0.0f;
      this->front_right = 0.0f;
      this->rear_left = 0.0f;
      this->rear_right = 0.0f;
    }
  }

  // field types and members
  using _front_left_type =
    float;
  _front_left_type front_left;
  using _front_right_type =
    float;
  _front_right_type front_right;
  using _rear_left_type =
    float;
  _rear_left_type rear_left;
  using _rear_right_type =
    float;
  _rear_right_type rear_right;

  // setters for named parameter idiom
  Type & set__front_left(
    const float & _arg)
  {
    this->front_left = _arg;
    return *this;
  }
  Type & set__front_right(
    const float & _arg)
  {
    this->front_right = _arg;
    return *this;
  }
  Type & set__rear_left(
    const float & _arg)
  {
    this->rear_left = _arg;
    return *this;
  }
  Type & set__rear_right(
    const float & _arg)
  {
    this->rear_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__WheelSpeeds
    std::shared_ptr<robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__WheelSpeeds
    std::shared_ptr<robomaster_msgs::msg::WheelSpeeds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelSpeeds_ & other) const
  {
    if (this->front_left != other.front_left) {
      return false;
    }
    if (this->front_right != other.front_right) {
      return false;
    }
    if (this->rear_left != other.rear_left) {
      return false;
    }
    if (this->rear_right != other.rear_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelSpeeds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelSpeeds_

// alias to use template instance with default allocator
using WheelSpeeds =
  robomaster_msgs::msg::WheelSpeeds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__WHEEL_SPEEDS__STRUCT_HPP_
