// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:action/RecenterGimbal.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__RECENTER_GIMBAL__BUILDER_HPP_
#define ROBOMASTER_MSGS__ACTION__DETAIL__RECENTER_GIMBAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/action/detail/recenter_gimbal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_RecenterGimbal_Goal_pitch_speed
{
public:
  explicit Init_RecenterGimbal_Goal_pitch_speed(::robomaster_msgs::action::RecenterGimbal_Goal & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::RecenterGimbal_Goal pitch_speed(::robomaster_msgs::action::RecenterGimbal_Goal::_pitch_speed_type arg)
  {
    msg_.pitch_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_Goal msg_;
};

class Init_RecenterGimbal_Goal_yaw_speed
{
public:
  Init_RecenterGimbal_Goal_yaw_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecenterGimbal_Goal_pitch_speed yaw_speed(::robomaster_msgs::action::RecenterGimbal_Goal::_yaw_speed_type arg)
  {
    msg_.yaw_speed = std::move(arg);
    return Init_RecenterGimbal_Goal_pitch_speed(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::RecenterGimbal_Goal>()
{
  return robomaster_msgs::action::builder::Init_RecenterGimbal_Goal_yaw_speed();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::RecenterGimbal_Result>()
{
  return ::robomaster_msgs::action::RecenterGimbal_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_RecenterGimbal_Feedback_progress
{
public:
  Init_RecenterGimbal_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::action::RecenterGimbal_Feedback progress(::robomaster_msgs::action::RecenterGimbal_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::RecenterGimbal_Feedback>()
{
  return robomaster_msgs::action::builder::Init_RecenterGimbal_Feedback_progress();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_RecenterGimbal_SendGoal_Request_goal
{
public:
  explicit Init_RecenterGimbal_SendGoal_Request_goal(::robomaster_msgs::action::RecenterGimbal_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::RecenterGimbal_SendGoal_Request goal(::robomaster_msgs::action::RecenterGimbal_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_SendGoal_Request msg_;
};

class Init_RecenterGimbal_SendGoal_Request_goal_id
{
public:
  Init_RecenterGimbal_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecenterGimbal_SendGoal_Request_goal goal_id(::robomaster_msgs::action::RecenterGimbal_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RecenterGimbal_SendGoal_Request_goal(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::RecenterGimbal_SendGoal_Request>()
{
  return robomaster_msgs::action::builder::Init_RecenterGimbal_SendGoal_Request_goal_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_RecenterGimbal_SendGoal_Response_stamp
{
public:
  explicit Init_RecenterGimbal_SendGoal_Response_stamp(::robomaster_msgs::action::RecenterGimbal_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::RecenterGimbal_SendGoal_Response stamp(::robomaster_msgs::action::RecenterGimbal_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_SendGoal_Response msg_;
};

class Init_RecenterGimbal_SendGoal_Response_accepted
{
public:
  Init_RecenterGimbal_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecenterGimbal_SendGoal_Response_stamp accepted(::robomaster_msgs::action::RecenterGimbal_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RecenterGimbal_SendGoal_Response_stamp(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::RecenterGimbal_SendGoal_Response>()
{
  return robomaster_msgs::action::builder::Init_RecenterGimbal_SendGoal_Response_accepted();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_RecenterGimbal_GetResult_Request_goal_id
{
public:
  Init_RecenterGimbal_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::action::RecenterGimbal_GetResult_Request goal_id(::robomaster_msgs::action::RecenterGimbal_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::RecenterGimbal_GetResult_Request>()
{
  return robomaster_msgs::action::builder::Init_RecenterGimbal_GetResult_Request_goal_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_RecenterGimbal_GetResult_Response_result
{
public:
  explicit Init_RecenterGimbal_GetResult_Response_result(::robomaster_msgs::action::RecenterGimbal_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::RecenterGimbal_GetResult_Response result(::robomaster_msgs::action::RecenterGimbal_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_GetResult_Response msg_;
};

class Init_RecenterGimbal_GetResult_Response_status
{
public:
  Init_RecenterGimbal_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecenterGimbal_GetResult_Response_result status(::robomaster_msgs::action::RecenterGimbal_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RecenterGimbal_GetResult_Response_result(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::RecenterGimbal_GetResult_Response>()
{
  return robomaster_msgs::action::builder::Init_RecenterGimbal_GetResult_Response_status();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_RecenterGimbal_FeedbackMessage_feedback
{
public:
  explicit Init_RecenterGimbal_FeedbackMessage_feedback(::robomaster_msgs::action::RecenterGimbal_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::RecenterGimbal_FeedbackMessage feedback(::robomaster_msgs::action::RecenterGimbal_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_FeedbackMessage msg_;
};

class Init_RecenterGimbal_FeedbackMessage_goal_id
{
public:
  Init_RecenterGimbal_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecenterGimbal_FeedbackMessage_feedback goal_id(::robomaster_msgs::action::RecenterGimbal_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RecenterGimbal_FeedbackMessage_feedback(msg_);
  }

private:
  ::robomaster_msgs::action::RecenterGimbal_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::RecenterGimbal_FeedbackMessage>()
{
  return robomaster_msgs::action::builder::Init_RecenterGimbal_FeedbackMessage_goal_id();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__RECENTER_GIMBAL__BUILDER_HPP_
