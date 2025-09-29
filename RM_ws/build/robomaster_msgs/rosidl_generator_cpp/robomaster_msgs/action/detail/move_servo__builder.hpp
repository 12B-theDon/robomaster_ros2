// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:action/MoveServo.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_SERVO__BUILDER_HPP_
#define ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_SERVO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/action/detail/move_servo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveServo_Goal_angle
{
public:
  explicit Init_MoveServo_Goal_angle(::robomaster_msgs::action::MoveServo_Goal & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::MoveServo_Goal angle(::robomaster_msgs::action::MoveServo_Goal::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_Goal msg_;
};

class Init_MoveServo_Goal_index
{
public:
  Init_MoveServo_Goal_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveServo_Goal_angle index(::robomaster_msgs::action::MoveServo_Goal::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_MoveServo_Goal_angle(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveServo_Goal>()
{
  return robomaster_msgs::action::builder::Init_MoveServo_Goal_index();
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
auto build<::robomaster_msgs::action::MoveServo_Result>()
{
  return ::robomaster_msgs::action::MoveServo_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveServo_Feedback_progress
{
public:
  Init_MoveServo_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::action::MoveServo_Feedback progress(::robomaster_msgs::action::MoveServo_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveServo_Feedback>()
{
  return robomaster_msgs::action::builder::Init_MoveServo_Feedback_progress();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveServo_SendGoal_Request_goal
{
public:
  explicit Init_MoveServo_SendGoal_Request_goal(::robomaster_msgs::action::MoveServo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::MoveServo_SendGoal_Request goal(::robomaster_msgs::action::MoveServo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_SendGoal_Request msg_;
};

class Init_MoveServo_SendGoal_Request_goal_id
{
public:
  Init_MoveServo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveServo_SendGoal_Request_goal goal_id(::robomaster_msgs::action::MoveServo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveServo_SendGoal_Request_goal(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveServo_SendGoal_Request>()
{
  return robomaster_msgs::action::builder::Init_MoveServo_SendGoal_Request_goal_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveServo_SendGoal_Response_stamp
{
public:
  explicit Init_MoveServo_SendGoal_Response_stamp(::robomaster_msgs::action::MoveServo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::MoveServo_SendGoal_Response stamp(::robomaster_msgs::action::MoveServo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_SendGoal_Response msg_;
};

class Init_MoveServo_SendGoal_Response_accepted
{
public:
  Init_MoveServo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveServo_SendGoal_Response_stamp accepted(::robomaster_msgs::action::MoveServo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveServo_SendGoal_Response_stamp(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveServo_SendGoal_Response>()
{
  return robomaster_msgs::action::builder::Init_MoveServo_SendGoal_Response_accepted();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveServo_GetResult_Request_goal_id
{
public:
  Init_MoveServo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::action::MoveServo_GetResult_Request goal_id(::robomaster_msgs::action::MoveServo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveServo_GetResult_Request>()
{
  return robomaster_msgs::action::builder::Init_MoveServo_GetResult_Request_goal_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveServo_GetResult_Response_result
{
public:
  explicit Init_MoveServo_GetResult_Response_result(::robomaster_msgs::action::MoveServo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::MoveServo_GetResult_Response result(::robomaster_msgs::action::MoveServo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_GetResult_Response msg_;
};

class Init_MoveServo_GetResult_Response_status
{
public:
  Init_MoveServo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveServo_GetResult_Response_result status(::robomaster_msgs::action::MoveServo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveServo_GetResult_Response_result(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveServo_GetResult_Response>()
{
  return robomaster_msgs::action::builder::Init_MoveServo_GetResult_Response_status();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveServo_FeedbackMessage_feedback
{
public:
  explicit Init_MoveServo_FeedbackMessage_feedback(::robomaster_msgs::action::MoveServo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::MoveServo_FeedbackMessage feedback(::robomaster_msgs::action::MoveServo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_FeedbackMessage msg_;
};

class Init_MoveServo_FeedbackMessage_goal_id
{
public:
  Init_MoveServo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveServo_FeedbackMessage_feedback goal_id(::robomaster_msgs::action::MoveServo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveServo_FeedbackMessage_feedback(msg_);
  }

private:
  ::robomaster_msgs::action::MoveServo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveServo_FeedbackMessage>()
{
  return robomaster_msgs::action::builder::Init_MoveServo_FeedbackMessage_goal_id();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_SERVO__BUILDER_HPP_
