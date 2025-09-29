// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/LEDEffect.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/led_effect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_LEDEffect_t2
{
public:
  explicit Init_LEDEffect_t2(::robomaster_msgs::msg::LEDEffect & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::msg::LEDEffect t2(::robomaster_msgs::msg::LEDEffect::_t2_type arg)
  {
    msg_.t2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::LEDEffect msg_;
};

class Init_LEDEffect_t1
{
public:
  explicit Init_LEDEffect_t1(::robomaster_msgs::msg::LEDEffect & msg)
  : msg_(msg)
  {}
  Init_LEDEffect_t2 t1(::robomaster_msgs::msg::LEDEffect::_t1_type arg)
  {
    msg_.t1 = std::move(arg);
    return Init_LEDEffect_t2(msg_);
  }

private:
  ::robomaster_msgs::msg::LEDEffect msg_;
};

class Init_LEDEffect_color
{
public:
  explicit Init_LEDEffect_color(::robomaster_msgs::msg::LEDEffect & msg)
  : msg_(msg)
  {}
  Init_LEDEffect_t1 color(::robomaster_msgs::msg::LEDEffect::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_LEDEffect_t1(msg_);
  }

private:
  ::robomaster_msgs::msg::LEDEffect msg_;
};

class Init_LEDEffect_effect
{
public:
  explicit Init_LEDEffect_effect(::robomaster_msgs::msg::LEDEffect & msg)
  : msg_(msg)
  {}
  Init_LEDEffect_color effect(::robomaster_msgs::msg::LEDEffect::_effect_type arg)
  {
    msg_.effect = std::move(arg);
    return Init_LEDEffect_color(msg_);
  }

private:
  ::robomaster_msgs::msg::LEDEffect msg_;
};

class Init_LEDEffect_submask
{
public:
  explicit Init_LEDEffect_submask(::robomaster_msgs::msg::LEDEffect & msg)
  : msg_(msg)
  {}
  Init_LEDEffect_effect submask(::robomaster_msgs::msg::LEDEffect::_submask_type arg)
  {
    msg_.submask = std::move(arg);
    return Init_LEDEffect_effect(msg_);
  }

private:
  ::robomaster_msgs::msg::LEDEffect msg_;
};

class Init_LEDEffect_mask
{
public:
  Init_LEDEffect_mask()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LEDEffect_submask mask(::robomaster_msgs::msg::LEDEffect::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return Init_LEDEffect_submask(msg_);
  }

private:
  ::robomaster_msgs::msg::LEDEffect msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::LEDEffect>()
{
  return robomaster_msgs::msg::builder::Init_LEDEffect_mask();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__LED_EFFECT__BUILDER_HPP_
