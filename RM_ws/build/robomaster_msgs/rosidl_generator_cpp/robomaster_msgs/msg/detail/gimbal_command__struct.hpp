// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/GimbalCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__GimbalCommand __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__GimbalCommand __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbalCommand_
{
  using Type = GimbalCommand_<ContainerAllocator>;

  explicit GimbalCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->yaw_speed = 0.0f;
      this->pitch_speed = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->yaw_speed = 0.0f;
      this->pitch_speed = 0.0f;
    }
  }

  explicit GimbalCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->yaw_speed = 0.0f;
      this->pitch_speed = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->yaw_speed = 0.0f;
      this->pitch_speed = 0.0f;
    }
  }

  // field types and members
  using _yaw_speed_type =
    float;
  _yaw_speed_type yaw_speed;
  using _pitch_speed_type =
    float;
  _pitch_speed_type pitch_speed;

  // setters for named parameter idiom
  Type & set__yaw_speed(
    const float & _arg)
  {
    this->yaw_speed = _arg;
    return *this;
  }
  Type & set__pitch_speed(
    const float & _arg)
  {
    this->pitch_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::GimbalCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::GimbalCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::GimbalCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::GimbalCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::GimbalCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::GimbalCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::GimbalCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::GimbalCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::GimbalCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::GimbalCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__GimbalCommand
    std::shared_ptr<robomaster_msgs::msg::GimbalCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__GimbalCommand
    std::shared_ptr<robomaster_msgs::msg::GimbalCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbalCommand_ & other) const
  {
    if (this->yaw_speed != other.yaw_speed) {
      return false;
    }
    if (this->pitch_speed != other.pitch_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const GimbalCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbalCommand_

// alias to use template instance with default allocator
using GimbalCommand =
  robomaster_msgs::msg::GimbalCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__GIMBAL_COMMAND__STRUCT_HPP_
