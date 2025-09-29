// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/SBus.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__S_BUS__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__S_BUS__STRUCT_HPP_

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
# define DEPRECATED__robomaster_msgs__msg__SBus __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__SBus __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SBus_
{
  using Type = SBus_<ContainerAllocator>;

  explicit SBus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 16>::iterator, int16_t>(this->channels.begin(), this->channels.end(), 0);
    }
  }

  explicit SBus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    channels(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 16>::iterator, int16_t>(this->channels.begin(), this->channels.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _channels_type =
    std::array<int16_t, 16>;
  _channels_type channels;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__channels(
    const std::array<int16_t, 16> & _arg)
  {
    this->channels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::SBus_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::SBus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::SBus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::SBus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::SBus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::SBus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::SBus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::SBus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::SBus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::SBus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__SBus
    std::shared_ptr<robomaster_msgs::msg::SBus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__SBus
    std::shared_ptr<robomaster_msgs::msg::SBus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SBus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    return true;
  }
  bool operator!=(const SBus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SBus_

// alias to use template instance with default allocator
using SBus =
  robomaster_msgs::msg::SBus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__S_BUS__STRUCT_HPP_
