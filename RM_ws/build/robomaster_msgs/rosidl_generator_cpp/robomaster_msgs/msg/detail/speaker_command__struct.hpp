// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/SpeakerCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__SpeakerCommand __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__SpeakerCommand __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeakerCommand_
{
  using Type = SpeakerCommand_<ContainerAllocator>;

  explicit SpeakerCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->sound_id = 1l;
      this->times = 1;
      this->file = "";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->sound_id = 0l;
      this->times = 0;
      this->control = 0;
      this->file = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control = 0;
    }
  }

  explicit SpeakerCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->sound_id = 1l;
      this->times = 1;
      this->file = "";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->sound_id = 0l;
      this->times = 0;
      this->control = 0;
      this->file = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control = 0;
    }
  }

  // field types and members
  using _sound_id_type =
    int32_t;
  _sound_id_type sound_id;
  using _times_type =
    uint8_t;
  _times_type times;
  using _control_type =
    uint8_t;
  _control_type control;
  using _file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_type file;

  // setters for named parameter idiom
  Type & set__sound_id(
    const int32_t & _arg)
  {
    this->sound_id = _arg;
    return *this;
  }
  Type & set__times(
    const uint8_t & _arg)
  {
    this->times = _arg;
    return *this;
  }
  Type & set__control(
    const uint8_t & _arg)
  {
    this->control = _arg;
    return *this;
  }
  Type & set__file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONTROL_STOP =
    0u;
  static constexpr uint8_t CONTROL_PLAY =
    1u;
  static constexpr uint8_t CONTROL_ADD =
    2u;

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__SpeakerCommand
    std::shared_ptr<robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__SpeakerCommand
    std::shared_ptr<robomaster_msgs::msg::SpeakerCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeakerCommand_ & other) const
  {
    if (this->sound_id != other.sound_id) {
      return false;
    }
    if (this->times != other.times) {
      return false;
    }
    if (this->control != other.control) {
      return false;
    }
    if (this->file != other.file) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeakerCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeakerCommand_

// alias to use template instance with default allocator
using SpeakerCommand =
  robomaster_msgs::msg::SpeakerCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeakerCommand_<ContainerAllocator>::CONTROL_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeakerCommand_<ContainerAllocator>::CONTROL_PLAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeakerCommand_<ContainerAllocator>::CONTROL_ADD;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SPEAKER_COMMAND__STRUCT_HPP_
