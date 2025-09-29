// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/AudioLevel.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_LEVEL__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_LEVEL__STRUCT_HPP_

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
# define DEPRECATED__robomaster_msgs__msg__AudioLevel __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__AudioLevel __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioLevel_
{
  using Type = AudioLevel_<ContainerAllocator>;

  explicit AudioLevel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0.0f;
    }
  }

  explicit AudioLevel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _level_type =
    float;
  _level_type level;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__level(
    const float & _arg)
  {
    this->level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::AudioLevel_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::AudioLevel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::AudioLevel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::AudioLevel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::AudioLevel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::AudioLevel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::AudioLevel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::AudioLevel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::AudioLevel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::AudioLevel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__AudioLevel
    std::shared_ptr<robomaster_msgs::msg::AudioLevel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__AudioLevel
    std::shared_ptr<robomaster_msgs::msg::AudioLevel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioLevel_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioLevel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioLevel_

// alias to use template instance with default allocator
using AudioLevel =
  robomaster_msgs::msg::AudioLevel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_LEVEL__STRUCT_HPP_
