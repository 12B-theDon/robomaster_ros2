// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/PWM.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__PWM__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__PWM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/pwm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_PWM_fraction_of_duty_cycle
{
public:
  Init_PWM_fraction_of_duty_cycle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::msg::PWM fraction_of_duty_cycle(::robomaster_msgs::msg::PWM::_fraction_of_duty_cycle_type arg)
  {
    msg_.fraction_of_duty_cycle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::PWM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::PWM>()
{
  return robomaster_msgs::msg::builder::Init_PWM_fraction_of_duty_cycle();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__PWM__BUILDER_HPP_
