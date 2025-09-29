// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/DetectedLine.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_LINE__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__DetectedLine __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__DetectedLine __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedLine_
{
  using Type = DetectedLine_<ContainerAllocator>;

  explicit DetectedLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->angle = 0.0f;
      this->curvature = 0.0f;
    }
  }

  explicit DetectedLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->angle = 0.0f;
      this->curvature = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _angle_type =
    float;
  _angle_type angle;
  using _curvature_type =
    float;
  _curvature_type curvature;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__curvature(
    const float & _arg)
  {
    this->curvature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::DetectedLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::DetectedLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::DetectedLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::DetectedLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::DetectedLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::DetectedLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::DetectedLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::DetectedLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::DetectedLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::DetectedLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__DetectedLine
    std::shared_ptr<robomaster_msgs::msg::DetectedLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__DetectedLine
    std::shared_ptr<robomaster_msgs::msg::DetectedLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedLine_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedLine_

// alias to use template instance with default allocator
using DetectedLine =
  robomaster_msgs::msg::DetectedLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_LINE__STRUCT_HPP_
