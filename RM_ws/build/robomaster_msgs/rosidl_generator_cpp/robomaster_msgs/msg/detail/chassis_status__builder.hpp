// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/chassis_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_ChassisStatus_hill
{
public:
  explicit Init_ChassisStatus_hill(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::ChassisStatus hill(::robomaster_msgs::msg::ChassisStatus::_hill_type arg)
  {
    msg_.hill = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_roll_over
{
public:
  explicit Init_ChassisStatus_roll_over(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_hill roll_over(::robomaster_msgs::msg::ChassisStatus::_roll_over_type arg)
  {
    msg_.roll_over = std::move(arg);
    return Init_ChassisStatus_hill(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_impact_z
{
public:
  explicit Init_ChassisStatus_impact_z(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_roll_over impact_z(::robomaster_msgs::msg::ChassisStatus::_impact_z_type arg)
  {
    msg_.impact_z = std::move(arg);
    return Init_ChassisStatus_roll_over(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_impact_y
{
public:
  explicit Init_ChassisStatus_impact_y(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_impact_z impact_y(::robomaster_msgs::msg::ChassisStatus::_impact_y_type arg)
  {
    msg_.impact_y = std::move(arg);
    return Init_ChassisStatus_impact_z(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_impact_x
{
public:
  explicit Init_ChassisStatus_impact_x(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_impact_y impact_x(::robomaster_msgs::msg::ChassisStatus::_impact_x_type arg)
  {
    msg_.impact_x = std::move(arg);
    return Init_ChassisStatus_impact_y(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_slip
{
public:
  explicit Init_ChassisStatus_slip(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_impact_x slip(::robomaster_msgs::msg::ChassisStatus::_slip_type arg)
  {
    msg_.slip = std::move(arg);
    return Init_ChassisStatus_impact_x(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_is_pick_up
{
public:
  explicit Init_ChassisStatus_is_pick_up(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_slip is_pick_up(::robomaster_msgs::msg::ChassisStatus::_is_pick_up_type arg)
  {
    msg_.is_pick_up = std::move(arg);
    return Init_ChassisStatus_slip(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_on_slope
{
public:
  explicit Init_ChassisStatus_on_slope(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_is_pick_up on_slope(::robomaster_msgs::msg::ChassisStatus::_on_slope_type arg)
  {
    msg_.on_slope = std::move(arg);
    return Init_ChassisStatus_is_pick_up(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_down_hill
{
public:
  explicit Init_ChassisStatus_down_hill(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_on_slope down_hill(::robomaster_msgs::msg::ChassisStatus::_down_hill_type arg)
  {
    msg_.down_hill = std::move(arg);
    return Init_ChassisStatus_on_slope(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_up_hill
{
public:
  explicit Init_ChassisStatus_up_hill(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_down_hill up_hill(::robomaster_msgs::msg::ChassisStatus::_up_hill_type arg)
  {
    msg_.up_hill = std::move(arg);
    return Init_ChassisStatus_down_hill(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_is_static
{
public:
  explicit Init_ChassisStatus_is_static(::robomaster_msgs::msg::ChassisStatus & msg)
  : msg_(msg)
  {}
  Init_ChassisStatus_up_hill is_static(::robomaster_msgs::msg::ChassisStatus::_is_static_type arg)
  {
    msg_.is_static = std::move(arg);
    return Init_ChassisStatus_up_hill(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

class Init_ChassisStatus_header
{
public:
  Init_ChassisStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChassisStatus_is_static header(::robomaster_msgs::msg::ChassisStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ChassisStatus_is_static(msg_);
  }

private:
  ::robomaster_msgs::msg::ChassisStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::ChassisStatus>()
{
  return robomaster_msgs::msg::builder::Init_ChassisStatus_header();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__CHASSIS_STATUS__BUILDER_HPP_
