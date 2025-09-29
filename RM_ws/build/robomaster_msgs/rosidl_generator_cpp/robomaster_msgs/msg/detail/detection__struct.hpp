// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_

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
// Member 'people'
#include "robomaster_msgs/msg/detail/detected_person__struct.hpp"
// Member 'robots'
#include "robomaster_msgs/msg/detail/detected_robot__struct.hpp"
// Member 'gestures'
#include "robomaster_msgs/msg/detail/detected_gesture__struct.hpp"
// Member 'lines'
#include "robomaster_msgs/msg/detail/detected_line__struct.hpp"
// Member 'markers'
#include "robomaster_msgs/msg/detail/detected_marker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__msg__Detection __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _people_type =
    std::vector<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator>>>;
  _people_type people;
  using _robots_type =
    std::vector<robomaster_msgs::msg::DetectedRobot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robomaster_msgs::msg::DetectedRobot_<ContainerAllocator>>>;
  _robots_type robots;
  using _gestures_type =
    std::vector<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator>>>;
  _gestures_type gestures;
  using _lines_type =
    std::vector<robomaster_msgs::msg::DetectedLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robomaster_msgs::msg::DetectedLine_<ContainerAllocator>>>;
  _lines_type lines;
  using _markers_type =
    std::vector<robomaster_msgs::msg::DetectedMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robomaster_msgs::msg::DetectedMarker_<ContainerAllocator>>>;
  _markers_type markers;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__people(
    const std::vector<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robomaster_msgs::msg::DetectedPerson_<ContainerAllocator>>> & _arg)
  {
    this->people = _arg;
    return *this;
  }
  Type & set__robots(
    const std::vector<robomaster_msgs::msg::DetectedRobot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robomaster_msgs::msg::DetectedRobot_<ContainerAllocator>>> & _arg)
  {
    this->robots = _arg;
    return *this;
  }
  Type & set__gestures(
    const std::vector<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robomaster_msgs::msg::DetectedGesture_<ContainerAllocator>>> & _arg)
  {
    this->gestures = _arg;
    return *this;
  }
  Type & set__lines(
    const std::vector<robomaster_msgs::msg::DetectedLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robomaster_msgs::msg::DetectedLine_<ContainerAllocator>>> & _arg)
  {
    this->lines = _arg;
    return *this;
  }
  Type & set__markers(
    const std::vector<robomaster_msgs::msg::DetectedMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robomaster_msgs::msg::DetectedMarker_<ContainerAllocator>>> & _arg)
  {
    this->markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__msg__Detection
    std::shared_ptr<robomaster_msgs::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__msg__Detection
    std::shared_ptr<robomaster_msgs::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->people != other.people) {
      return false;
    }
    if (this->robots != other.robots) {
      return false;
    }
    if (this->gestures != other.gestures) {
      return false;
    }
    if (this->lines != other.lines) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  robomaster_msgs::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_
