// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/SensorAdapter.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SENSOR_ADAPTER__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__SENSOR_ADAPTER__STRUCT_HPP_

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
# define DEPRECATED__robomaster_msgs__msg__SensorAdapter __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__SensorAdapter __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorAdapter_
{
  using Type = SensorAdapter_<ContainerAllocator>;

  explicit SensorAdapter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->port[0] = 1;
      this->port[1] = 2;
      this->port[2] = 1;
      this->port[3] = 2;
      this->port[4] = 1;
      this->port[5] = 2;
      this->port[6] = 1;
      this->port[7] = 2;
      this->port[8] = 1;
      this->port[9] = 2;
      this->port[10] = 1;
      this->port[11] = 2;
      this->id[0] = 1;
      this->id[1] = 1;
      this->id[2] = 2;
      this->id[3] = 2;
      this->id[4] = 3;
      this->id[5] = 3;
      this->id[6] = 4;
      this->id[7] = 4;
      this->id[8] = 5;
      this->id[9] = 5;
      this->id[10] = 6;
      this->id[11] = 6;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->io.begin(), this->io.end(), 0);
      std::fill<typename std::array<int16_t, 12>::iterator, int16_t>(this->adc.begin(), this->adc.end(), 0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->port.begin(), this->port.end(), 0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->id.begin(), this->id.end(), 0);
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->io.begin(), this->io.end(), 0);
      std::fill<typename std::array<int16_t, 12>::iterator, int16_t>(this->adc.begin(), this->adc.end(), 0);
    }
  }

  explicit SensorAdapter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    io(_alloc),
    adc(_alloc),
    port(_alloc),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->port[0] = 1;
      this->port[1] = 2;
      this->port[2] = 1;
      this->port[3] = 2;
      this->port[4] = 1;
      this->port[5] = 2;
      this->port[6] = 1;
      this->port[7] = 2;
      this->port[8] = 1;
      this->port[9] = 2;
      this->port[10] = 1;
      this->port[11] = 2;
      this->id[0] = 1;
      this->id[1] = 1;
      this->id[2] = 2;
      this->id[3] = 2;
      this->id[4] = 3;
      this->id[5] = 3;
      this->id[6] = 4;
      this->id[7] = 4;
      this->id[8] = 5;
      this->id[9] = 5;
      this->id[10] = 6;
      this->id[11] = 6;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->io.begin(), this->io.end(), 0);
      std::fill<typename std::array<int16_t, 12>::iterator, int16_t>(this->adc.begin(), this->adc.end(), 0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->port.begin(), this->port.end(), 0);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->id.begin(), this->id.end(), 0);
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->io.begin(), this->io.end(), 0);
      std::fill<typename std::array<int16_t, 12>::iterator, int16_t>(this->adc.begin(), this->adc.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _io_type =
    std::array<uint8_t, 12>;
  _io_type io;
  using _adc_type =
    std::array<int16_t, 12>;
  _adc_type adc;
  using _port_type =
    std::array<uint8_t, 12>;
  _port_type port;
  using _id_type =
    std::array<uint8_t, 12>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__io(
    const std::array<uint8_t, 12> & _arg)
  {
    this->io = _arg;
    return *this;
  }
  Type & set__adc(
    const std::array<int16_t, 12> & _arg)
  {
    this->adc = _arg;
    return *this;
  }
  Type & set__port(
    const std::array<uint8_t, 12> & _arg)
  {
    this->port = _arg;
    return *this;
  }
  Type & set__id(
    const std::array<uint8_t, 12> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::SensorAdapter_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::SensorAdapter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::SensorAdapter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::SensorAdapter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::SensorAdapter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::SensorAdapter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::SensorAdapter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::SensorAdapter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::SensorAdapter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::SensorAdapter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__SensorAdapter
    std::shared_ptr<robomaster_msgs::msg::SensorAdapter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__SensorAdapter
    std::shared_ptr<robomaster_msgs::msg::SensorAdapter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorAdapter_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->io != other.io) {
      return false;
    }
    if (this->adc != other.adc) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorAdapter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorAdapter_

// alias to use template instance with default allocator
using SensorAdapter =
  robomaster_msgs::msg::SensorAdapter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SENSOR_ADAPTER__STRUCT_HPP_
