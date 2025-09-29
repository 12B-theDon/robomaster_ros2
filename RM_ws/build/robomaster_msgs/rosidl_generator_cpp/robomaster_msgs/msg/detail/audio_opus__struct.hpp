// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/AudioOpus.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_OPUS__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_OPUS__STRUCT_HPP_

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
# define DEPRECATED__robomaster_msgs__msg__AudioOpus __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__AudioOpus __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioOpus_
{
  using Type = AudioOpus_<ContainerAllocator>;

  explicit AudioOpus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ull;
    }
  }

  explicit AudioOpus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _seq_type =
    uint64_t;
  _seq_type seq;
  using _buffer_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _buffer_type buffer;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__seq(
    const uint64_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__buffer(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->buffer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::AudioOpus_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::AudioOpus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::AudioOpus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::AudioOpus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::AudioOpus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::AudioOpus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::AudioOpus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::AudioOpus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::AudioOpus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::AudioOpus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__AudioOpus
    std::shared_ptr<robomaster_msgs::msg::AudioOpus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__AudioOpus
    std::shared_ptr<robomaster_msgs::msg::AudioOpus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioOpus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->buffer != other.buffer) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioOpus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioOpus_

// alias to use template instance with default allocator
using AudioOpus =
  robomaster_msgs::msg::AudioOpus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__AUDIO_OPUS__STRUCT_HPP_
