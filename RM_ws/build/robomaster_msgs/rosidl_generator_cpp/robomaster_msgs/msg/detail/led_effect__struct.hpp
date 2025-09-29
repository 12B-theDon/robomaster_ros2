// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/LEDEffect.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__LEDEffect __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__LEDEffect __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LEDEffect_
{
  using Type = LEDEffect_<ContainerAllocator>;

  explicit LEDEffect_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->mask = 63;
      this->submask = 255;
      this->effect = 1;
      this->t1 = 1.0f;
      this->t2 = 1.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->mask = 0;
      this->submask = 0;
      this->effect = 0;
      this->t1 = 0.0f;
      this->t2 = 0.0f;
    }
  }

  explicit LEDEffect_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->mask = 63;
      this->submask = 255;
      this->effect = 1;
      this->t1 = 1.0f;
      this->t2 = 1.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->mask = 0;
      this->submask = 0;
      this->effect = 0;
      this->t1 = 0.0f;
      this->t2 = 0.0f;
    }
  }

  // field types and members
  using _mask_type =
    uint8_t;
  _mask_type mask;
  using _submask_type =
    uint8_t;
  _submask_type submask;
  using _effect_type =
    uint8_t;
  _effect_type effect;
  using _color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _color_type color;
  using _t1_type =
    float;
  _t1_type t1;
  using _t2_type =
    float;
  _t2_type t2;

  // setters for named parameter idiom
  Type & set__mask(
    const uint8_t & _arg)
  {
    this->mask = _arg;
    return *this;
  }
  Type & set__submask(
    const uint8_t & _arg)
  {
    this->submask = _arg;
    return *this;
  }
  Type & set__effect(
    const uint8_t & _arg)
  {
    this->effect = _arg;
    return *this;
  }
  Type & set__color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__t1(
    const float & _arg)
  {
    this->t1 = _arg;
    return *this;
  }
  Type & set__t2(
    const float & _arg)
  {
    this->t2 = _arg;
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
  static constexpr uint8_t BOTTOM =
    15u;
  static constexpr uint8_t TOP_LEFT =
    16u;
  static constexpr uint8_t TOP_RIGHT =
    32u;
  static constexpr uint8_t TOP =
    48u;
  static constexpr uint8_t ALL =
    63u;
  static constexpr uint8_t OFF =
    0u;
  static constexpr uint8_t ON =
    1u;
  static constexpr uint8_t BREATH =
    2u;
  static constexpr uint8_t FLASH =
    3u;
  static constexpr uint8_t SCROLLING =
    4u;
  static constexpr uint8_t PULSE =
    5u;

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::LEDEffect_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::LEDEffect_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::LEDEffect_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::LEDEffect_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::LEDEffect_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::LEDEffect_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::LEDEffect_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::LEDEffect_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::LEDEffect_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::LEDEffect_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__LEDEffect
    std::shared_ptr<robomaster_msgs::msg::LEDEffect_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__LEDEffect
    std::shared_ptr<robomaster_msgs::msg::LEDEffect_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LEDEffect_ & other) const
  {
    if (this->mask != other.mask) {
      return false;
    }
    if (this->submask != other.submask) {
      return false;
    }
    if (this->effect != other.effect) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->t1 != other.t1) {
      return false;
    }
    if (this->t2 != other.t2) {
      return false;
    }
    return true;
  }
  bool operator!=(const LEDEffect_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LEDEffect_

// alias to use template instance with default allocator
using LEDEffect =
  robomaster_msgs::msg::LEDEffect_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::BOTTOM_BACK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::BOTTOM_FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::BOTTOM_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::BOTTOM_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::BOTTOM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::TOP_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::TOP_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::TOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::BREATH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::FLASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::SCROLLING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDEffect_<ContainerAllocator>::PULSE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__STRUCT_HPP_
