// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/PWM.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__PWM__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__PWM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__PWM __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__PWM __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PWM_
{
  using Type = PWM_<ContainerAllocator>;

  explicit PWM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->fraction_of_duty_cycle.begin(), this->fraction_of_duty_cycle.end(), -1.0f);
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<float, 6>::iterator, float>(this->fraction_of_duty_cycle.begin(), this->fraction_of_duty_cycle.end(), 0.0f);
    }
  }

  explicit PWM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fraction_of_duty_cycle(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->fraction_of_duty_cycle.begin(), this->fraction_of_duty_cycle.end(), -1.0f);
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<float, 6>::iterator, float>(this->fraction_of_duty_cycle.begin(), this->fraction_of_duty_cycle.end(), 0.0f);
    }
  }

  // field types and members
  using _fraction_of_duty_cycle_type =
    std::array<float, 6>;
  _fraction_of_duty_cycle_type fraction_of_duty_cycle;

  // setters for named parameter idiom
  Type & set__fraction_of_duty_cycle(
    const std::array<float, 6> & _arg)
  {
    this->fraction_of_duty_cycle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::PWM_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::PWM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::PWM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::PWM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::PWM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::PWM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::PWM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::PWM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::PWM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::PWM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__PWM
    std::shared_ptr<robomaster_msgs::msg::PWM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__PWM
    std::shared_ptr<robomaster_msgs::msg::PWM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PWM_ & other) const
  {
    if (this->fraction_of_duty_cycle != other.fraction_of_duty_cycle) {
      return false;
    }
    return true;
  }
  bool operator!=(const PWM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PWM_

// alias to use template instance with default allocator
using PWM =
  robomaster_msgs::msg::PWM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__PWM__STRUCT_HPP_
