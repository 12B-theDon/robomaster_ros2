// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:srv/GetServoAngle.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__STRUCT_HPP_
#define ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__srv__GetServoAngle_Request __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__srv__GetServoAngle_Request __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetServoAngle_Request_
{
  using Type = GetServoAngle_Request_<ContainerAllocator>;

  explicit GetServoAngle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
    }
  }

  explicit GetServoAngle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
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

  // setters for named parameter idiom
  Type & set__index(
    const uint8_t & _arg)
  {
    this->index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__srv__GetServoAngle_Request
    std::shared_ptr<robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__srv__GetServoAngle_Request
    std::shared_ptr<robomaster_msgs::srv::GetServoAngle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetServoAngle_Request_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetServoAngle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetServoAngle_Request_

// alias to use template instance with default allocator
using GetServoAngle_Request =
  robomaster_msgs::srv::GetServoAngle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robomaster_msgs


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__srv__GetServoAngle_Response __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__srv__GetServoAngle_Response __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetServoAngle_Response_
{
  using Type = GetServoAngle_Response_<ContainerAllocator>;

  explicit GetServoAngle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
    }
  }

  explicit GetServoAngle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__srv__GetServoAngle_Response
    std::shared_ptr<robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__srv__GetServoAngle_Response
    std::shared_ptr<robomaster_msgs::srv::GetServoAngle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetServoAngle_Response_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetServoAngle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetServoAngle_Response_

// alias to use template instance with default allocator
using GetServoAngle_Response =
  robomaster_msgs::srv::GetServoAngle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robomaster_msgs

namespace robomaster_msgs
{

namespace srv
{

struct GetServoAngle
{
  using Request = robomaster_msgs::srv::GetServoAngle_Request;
  using Response = robomaster_msgs::srv::GetServoAngle_Response;
};

}  // namespace srv

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__SRV__DETAIL__GET_SERVO_ANGLE__STRUCT_HPP_
