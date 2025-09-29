// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/DetectedPerson.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_PERSON__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_PERSON__STRUCT_HPP_

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
# define DEPRECATED__robomaster_msgs__msg__DetectedPerson __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__DetectedPerson __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedPerson_
{
  using Type = DetectedPerson_<ContainerAllocator>;

  explicit DetectedPerson_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_init)
  {
    (void)_init;
  }

  explicit DetectedPerson_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _roi_type =
    robomaster_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;

  // setters for named parameter idiom
  Type & set__roi(
    const robomaster_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::DetectedPerson_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::DetectedPerson_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::DetectedPerson_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::DetectedPerson_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__DetectedPerson
    std::shared_ptr<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__DetectedPerson
    std::shared_ptr<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedPerson_ & other) const
  {
    if (this->roi != other.roi) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedPerson_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedPerson_

// alias to use template instance with default allocator
using DetectedPerson =
  robomaster_msgs::msg::DetectedPerson_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTED_PERSON__STRUCT_HPP_
