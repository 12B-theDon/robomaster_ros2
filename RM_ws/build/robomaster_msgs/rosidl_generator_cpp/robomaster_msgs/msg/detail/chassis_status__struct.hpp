// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_HPP_

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
# define DEPRECATED__robomaster_msgs__msg__ChassisStatus __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__ChassisStatus __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChassisStatus_
{
  using Type = ChassisStatus_<ContainerAllocator>;

  explicit ChassisStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_static = false;
      this->up_hill = false;
      this->down_hill = false;
      this->on_slope = false;
      this->is_pick_up = false;
      this->slip = false;
      this->impact_x = false;
      this->impact_y = false;
      this->impact_z = false;
      this->roll_over = false;
      this->hill = false;
    }
  }

  explicit ChassisStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_static = false;
      this->up_hill = false;
      this->down_hill = false;
      this->on_slope = false;
      this->is_pick_up = false;
      this->slip = false;
      this->impact_x = false;
      this->impact_y = false;
      this->impact_z = false;
      this->roll_over = false;
      this->hill = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _is_static_type =
    bool;
  _is_static_type is_static;
  using _up_hill_type =
    bool;
  _up_hill_type up_hill;
  using _down_hill_type =
    bool;
  _down_hill_type down_hill;
  using _on_slope_type =
    bool;
  _on_slope_type on_slope;
  using _is_pick_up_type =
    bool;
  _is_pick_up_type is_pick_up;
  using _slip_type =
    bool;
  _slip_type slip;
  using _impact_x_type =
    bool;
  _impact_x_type impact_x;
  using _impact_y_type =
    bool;
  _impact_y_type impact_y;
  using _impact_z_type =
    bool;
  _impact_z_type impact_z;
  using _roll_over_type =
    bool;
  _roll_over_type roll_over;
  using _hill_type =
    bool;
  _hill_type hill;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__is_static(
    const bool & _arg)
  {
    this->is_static = _arg;
    return *this;
  }
  Type & set__up_hill(
    const bool & _arg)
  {
    this->up_hill = _arg;
    return *this;
  }
  Type & set__down_hill(
    const bool & _arg)
  {
    this->down_hill = _arg;
    return *this;
  }
  Type & set__on_slope(
    const bool & _arg)
  {
    this->on_slope = _arg;
    return *this;
  }
  Type & set__is_pick_up(
    const bool & _arg)
  {
    this->is_pick_up = _arg;
    return *this;
  }
  Type & set__slip(
    const bool & _arg)
  {
    this->slip = _arg;
    return *this;
  }
  Type & set__impact_x(
    const bool & _arg)
  {
    this->impact_x = _arg;
    return *this;
  }
  Type & set__impact_y(
    const bool & _arg)
  {
    this->impact_y = _arg;
    return *this;
  }
  Type & set__impact_z(
    const bool & _arg)
  {
    this->impact_z = _arg;
    return *this;
  }
  Type & set__roll_over(
    const bool & _arg)
  {
    this->roll_over = _arg;
    return *this;
  }
  Type & set__hill(
    const bool & _arg)
  {
    this->hill = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::ChassisStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::ChassisStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::ChassisStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::ChassisStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::ChassisStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::ChassisStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::ChassisStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::ChassisStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::ChassisStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::ChassisStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__ChassisStatus
    std::shared_ptr<robomaster_msgs::msg::ChassisStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__ChassisStatus
    std::shared_ptr<robomaster_msgs::msg::ChassisStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChassisStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->is_static != other.is_static) {
      return false;
    }
    if (this->up_hill != other.up_hill) {
      return false;
    }
    if (this->down_hill != other.down_hill) {
      return false;
    }
    if (this->on_slope != other.on_slope) {
      return false;
    }
    if (this->is_pick_up != other.is_pick_up) {
      return false;
    }
    if (this->slip != other.slip) {
      return false;
    }
    if (this->impact_x != other.impact_x) {
      return false;
    }
    if (this->impact_y != other.impact_y) {
      return false;
    }
    if (this->impact_z != other.impact_z) {
      return false;
    }
    if (this->roll_over != other.roll_over) {
      return false;
    }
    if (this->hill != other.hill) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChassisStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChassisStatus_

// alias to use template instance with default allocator
using ChassisStatus =
  robomaster_msgs::msg::ChassisStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__STRUCT_HPP_
