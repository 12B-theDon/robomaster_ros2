// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/DetectedGesture.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_GESTURE__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_GESTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'roi'
#include "robomaster_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__DetectedGesture __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__DetectedGesture __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedGesture_
{
  using Type = DetectedGesture_<ContainerAllocator>;

  explicit DetectedGesture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kind = "";
    }
  }

  explicit DetectedGesture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_alloc, _init),
    kind(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kind = "";
    }
  }

  // field types and members
  using _roi_type =
    robomaster_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;
  using _kind_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _kind_type kind;

  // setters for named parameter idiom
  Type & set__roi(
    const robomaster_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }
  Type & set__kind(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->kind = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::DetectedGesture_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::DetectedGesture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::DetectedGesture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::DetectedGesture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__DetectedGesture
    std::shared_ptr<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__DetectedGesture
    std::shared_ptr<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedGesture_ & other) const
  {
    if (this->roi != other.roi) {
      return false;
    }
    if (this->kind != other.kind) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedGesture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedGesture_

// alias to use template instance with default allocator
using DetectedGesture =
  robomaster_msgs::msg::DetectedGesture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_GESTURE__STRUCT_HPP_
