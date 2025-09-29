// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ffmpeg_image_transport_msgs:msg/FFMPEGPacket.idl
// generated code does not contain a copyright notice

#ifndef FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__STRUCT_HPP_
#define FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__STRUCT_HPP_

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
# define DEPRECATED__ffmpeg_image_transport_msgs__msg__FFMPEGPacket __attribute__((deprecated))
#else
# define DEPRECATED__ffmpeg_image_transport_msgs__msg__FFMPEGPacket __declspec(deprecated)
#endif

namespace ffmpeg_image_transport_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FFMPEGPacket_
{
  using Type = FFMPEGPacket_<ContainerAllocator>;

  explicit FFMPEGPacket_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
      this->encoding = "";
      this->pts = 0ull;
      this->flags = 0;
      this->is_bigendian = false;
    }
  }

  explicit FFMPEGPacket_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    encoding(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
      this->encoding = "";
      this->pts = 0ull;
      this->flags = 0;
      this->is_bigendian = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;
  using _encoding_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _encoding_type encoding;
  using _pts_type =
    uint64_t;
  _pts_type pts;
  using _flags_type =
    uint8_t;
  _flags_type flags;
  using _is_bigendian_type =
    bool;
  _is_bigendian_type is_bigendian;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__encoding(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->encoding = _arg;
    return *this;
  }
  Type & set__pts(
    const uint64_t & _arg)
  {
    this->pts = _arg;
    return *this;
  }
  Type & set__flags(
    const uint8_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__is_bigendian(
    const bool & _arg)
  {
    this->is_bigendian = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator> *;
  using ConstRawPtr =
    const ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ffmpeg_image_transport_msgs__msg__FFMPEGPacket
    std::shared_ptr<ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ffmpeg_image_transport_msgs__msg__FFMPEGPacket
    std::shared_ptr<ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FFMPEGPacket_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->encoding != other.encoding) {
      return false;
    }
    if (this->pts != other.pts) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->is_bigendian != other.is_bigendian) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const FFMPEGPacket_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FFMPEGPacket_

// alias to use template instance with default allocator
using FFMPEGPacket =
  ffmpeg_image_transport_msgs::msg::FFMPEGPacket_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ffmpeg_image_transport_msgs

#endif  // FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__STRUCT_HPP_
