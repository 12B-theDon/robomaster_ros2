// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/ServoCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__ServoCommand __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__ServoCommand __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoCommand_
{
  using Type = ServoCommand_<ContainerAllocator>;

  explicit ServoCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->enable = true;
      this->angular_speed = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->index = 0;
      this->enable = false;
      this->angular_speed = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
    }
  }

  explicit ServoCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->enable = true;
      this->angular_speed = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->index = 0;
      this->enable = false;
      this->angular_speed = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
    }
  }

  // field types and members
  using _index_type =
    uint8_t;
  _index_type index;
  using _enable_type =
    bool;
  _enable_type enable;
  using _angular_speed_type =
    float;
  _angular_speed_type angular_speed;

  // setters for named parameter idiom
  Type & set__index(
    const uint8_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__angular_speed(
    const float & _arg)
  {
    this->angular_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::ServoCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::ServoCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::ServoCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::ServoCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::ServoCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::ServoCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::ServoCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::ServoCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::ServoCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::ServoCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__ServoCommand
    std::shared_ptr<robomaster_msgs::msg::ServoCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__ServoCommand
    std::shared_ptr<robomaster_msgs::msg::ServoCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoCommand_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    if (this->angular_speed != other.angular_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoCommand_

// alias to use template instance with default allocator
using ServoCommand =
  robomaster_msgs::msg::ServoCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__STRUCT_HPP_
