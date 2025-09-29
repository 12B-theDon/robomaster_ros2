// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/ArmorHit.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__ARMOR_HIT__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__ARMOR_HIT__STRUCT_HPP_

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
# define DEPRECATED__robomaster_msgs__msg__ArmorHit __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__ArmorHit __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmorHit_
{
  using Type = ArmorHit_<ContainerAllocator>;

  explicit ArmorHit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->location = 0;
      this->level = 0;
    }
  }

  explicit ArmorHit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->location = 0;
      this->level = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _type_type =
    uint8_t;
  _type_type type;
  using _location_type =
    uint8_t;
  _location_type location;
  using _level_type =
    uint16_t;
  _level_type level;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__location(
    const uint8_t & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__level(
    const uint16_t & _arg)
  {
    this->level = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BOTTOM_BACK =
    1u;
  static constexpr uint8_t BOTTOM_FRONT =
    2u;
  static constexpr uint8_t BOTTOM_LEFT =
    4u;
  static constexpr uint8_t BOTTOM_RIGHT =
    8u;
  static constexpr uint8_t TOP_LEFT =
    16u;
  static constexpr uint8_t TOP_RIGHT =
    32u;
  static constexpr uint8_t COLLISION =
    0u;
  static constexpr uint8_t IR =
    1u;

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::ArmorHit_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::ArmorHit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::ArmorHit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::ArmorHit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::ArmorHit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::ArmorHit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::ArmorHit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::ArmorHit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::ArmorHit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::ArmorHit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__ArmorHit
    std::shared_ptr<robomaster_msgs::msg::ArmorHit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__ArmorHit
    std::shared_ptr<robomaster_msgs::msg::ArmorHit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmorHit_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmorHit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmorHit_

// alias to use template instance with default allocator
using ArmorHit =
  robomaster_msgs::msg::ArmorHit_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmorHit_<ContainerAllocator>::BOTTOM_BACK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmorHit_<ContainerAllocator>::BOTTOM_FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmorHit_<ContainerAllocator>::BOTTOM_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmorHit_<ContainerAllocator>::BOTTOM_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmorHit_<ContainerAllocator>::TOP_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmorHit_<ContainerAllocator>::TOP_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmorHit_<ContainerAllocator>::COLLISION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ArmorHit_<ContainerAllocator>::IR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__ARMOR_HIT__STRUCT_HPP_
