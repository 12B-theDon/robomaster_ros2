// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:srv/GetADC.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__SRV__DETAIL__GET_ADC__STRUCT_HPP_
#define ROBOMASTER_MSGS__SRV__DETAIL__GET_ADC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__srv__GetADC_Request __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__srv__GetADC_Request __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetADC_Request_
{
  using Type = GetADC_Request_<ContainerAllocator>;

  explicit GetADC_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->port = 0;
    }
  }

  explicit GetADC_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->port = 0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _port_type =
    uint8_t;
  _port_type port;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__port(
    const uint8_t & _arg)
  {
    this->port = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::srv::GetADC_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::srv::GetADC_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::srv::GetADC_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::srv::GetADC_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::srv::GetADC_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::srv::GetADC_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::srv::GetADC_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::srv::GetADC_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::srv::GetADC_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::srv::GetADC_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__srv__GetADC_Request
    std::shared_ptr<robomaster_msgs::srv::GetADC_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__srv__GetADC_Request
    std::shared_ptr<robomaster_msgs::srv::GetADC_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetADC_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetADC_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetADC_Request_

// alias to use template instance with default allocator
using GetADC_Request =
  robomaster_msgs::srv::GetADC_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robomaster_msgs


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__srv__GetADC_Response __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__srv__GetADC_Response __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetADC_Response_
{
  using Type = GetADC_Response_<ContainerAllocator>;

  explicit GetADC_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->value = 0;
    }
  }

  explicit GetADC_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->value = 0;
    }
  }

  // field types and members
  using _valid_type =
    bool;
  _valid_type valid;
  using _value_type =
    uint16_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__value(
    const uint16_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::srv::GetADC_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::srv::GetADC_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::srv::GetADC_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::srv::GetADC_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::srv::GetADC_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::srv::GetADC_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::srv::GetADC_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::srv::GetADC_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::srv::GetADC_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::srv::GetADC_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__srv__GetADC_Response
    std::shared_ptr<robomaster_msgs::srv::GetADC_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__srv__GetADC_Response
    std::shared_ptr<robomaster_msgs::srv::GetADC_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetADC_Response_ & other) const
  {
    if (this->valid != other.valid) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetADC_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetADC_Response_

// alias to use template instance with default allocator
using GetADC_Response =
  robomaster_msgs::srv::GetADC_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robomaster_msgs

namespace robomaster_msgs
{

namespace srv
{

struct GetADC
{
  using Request = robomaster_msgs::srv::GetADC_Request;
  using Response = robomaster_msgs::srv::GetADC_Response;
};

}  // namespace srv

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__SRV__DETAIL__GET_ADC__STRUCT_HPP_
