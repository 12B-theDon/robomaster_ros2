// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/BlasterLED.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__BLASTER_LED__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__BLASTER_LED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__BlasterLED __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__BlasterLED __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlasterLED_
{
  using Type = BlasterLED_<ContainerAllocator>;

  explicit BlasterLED_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness = 0.0f;
    }
  }

  explicit BlasterLED_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness = 0.0f;
    }
  }

  // field types and members
  using _brightness_type =
    float;
  _brightness_type brightness;

  // setters for named parameter idiom
  Type & set__brightness(
    const float & _arg)
  {
    this->brightness = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::BlasterLED_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::BlasterLED_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::BlasterLED_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::BlasterLED_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::BlasterLED_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::BlasterLED_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::BlasterLED_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::BlasterLED_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::BlasterLED_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::BlasterLED_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__BlasterLED
    std::shared_ptr<robomaster_msgs::msg::BlasterLED_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__BlasterLED
    std::shared_ptr<robomaster_msgs::msg::BlasterLED_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlasterLED_ & other) const
  {
    if (this->brightness != other.brightness) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlasterLED_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlasterLED_

// alias to use template instance with default allocator
using BlasterLED =
  robomaster_msgs::msg::BlasterLED_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__BLASTER_LED__STRUCT_HPP_
