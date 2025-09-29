// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:action/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_ARM__BUILDER_HPP_
#define ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_ARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/action/detail/move_arm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveArm_Goal_relative
{
public:
  explicit Init_MoveArm_Goal_relative(::robomaster_msgs::action::MoveArm_Goal & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::MoveArm_Goal relative(::robomaster_msgs::action::MoveArm_Goal::_relative_type arg)
  {
    msg_.relative = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_Goal msg_;
};

class Init_MoveArm_Goal_z
{
public:
  explicit Init_MoveArm_Goal_z(::robomaster_msgs::action::MoveArm_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveArm_Goal_relative z(::robomaster_msgs::action::MoveArm_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MoveArm_Goal_relative(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_Goal msg_;
};

class Init_MoveArm_Goal_x
{
public:
  Init_MoveArm_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArm_Goal_z x(::robomaster_msgs::action::MoveArm_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveArm_Goal_z(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveArm_Goal>()
{
  return robomaster_msgs::action::builder::Init_MoveArm_Goal_x();
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
auto build<::robomaster_msgs::action::MoveArm_Result>()
{
  return ::robomaster_msgs::action::MoveArm_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveArm_Feedback_progress
{
public:
  Init_MoveArm_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::action::MoveArm_Feedback progress(::robomaster_msgs::action::MoveArm_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveArm_Feedback>()
{
  return robomaster_msgs::action::builder::Init_MoveArm_Feedback_progress();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveArm_SendGoal_Request_goal
{
public:
  explicit Init_MoveArm_SendGoal_Request_goal(::robomaster_msgs::action::MoveArm_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::MoveArm_SendGoal_Request goal(::robomaster_msgs::action::MoveArm_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_SendGoal_Request msg_;
};

class Init_MoveArm_SendGoal_Request_goal_id
{
public:
  Init_MoveArm_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArm_SendGoal_Request_goal goal_id(::robomaster_msgs::action::MoveArm_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveArm_SendGoal_Request_goal(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveArm_SendGoal_Request>()
{
  return robomaster_msgs::action::builder::Init_MoveArm_SendGoal_Request_goal_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveArm_SendGoal_Response_stamp
{
public:
  explicit Init_MoveArm_SendGoal_Response_stamp(::robomaster_msgs::action::MoveArm_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::MoveArm_SendGoal_Response stamp(::robomaster_msgs::action::MoveArm_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_SendGoal_Response msg_;
};

class Init_MoveArm_SendGoal_Response_accepted
{
public:
  Init_MoveArm_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArm_SendGoal_Response_stamp accepted(::robomaster_msgs::action::MoveArm_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveArm_SendGoal_Response_stamp(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveArm_SendGoal_Response>()
{
  return robomaster_msgs::action::builder::Init_MoveArm_SendGoal_Response_accepted();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveArm_GetResult_Request_goal_id
{
public:
  Init_MoveArm_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::action::MoveArm_GetResult_Request goal_id(::robomaster_msgs::action::MoveArm_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveArm_GetResult_Request>()
{
  return robomaster_msgs::action::builder::Init_MoveArm_GetResult_Request_goal_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveArm_GetResult_Response_result
{
public:
  explicit Init_MoveArm_GetResult_Response_result(::robomaster_msgs::action::MoveArm_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::MoveArm_GetResult_Response result(::robomaster_msgs::action::MoveArm_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_GetResult_Response msg_;
};

class Init_MoveArm_GetResult_Response_status
{
public:
  Init_MoveArm_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArm_GetResult_Response_result status(::robomaster_msgs::action::MoveArm_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveArm_GetResult_Response_result(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveArm_GetResult_Response>()
{
  return robomaster_msgs::action::builder::Init_MoveArm_GetResult_Response_status();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_MoveArm_FeedbackMessage_feedback
{
public:
  explicit Init_MoveArm_FeedbackMessage_feedback(::robomaster_msgs::action::MoveArm_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::MoveArm_FeedbackMessage feedback(::robomaster_msgs::action::MoveArm_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_FeedbackMessage msg_;
};

class Init_MoveArm_FeedbackMessage_goal_id
{
public:
  Init_MoveArm_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArm_FeedbackMessage_feedback goal_id(::robomaster_msgs::action::MoveArm_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveArm_FeedbackMessage_feedback(msg_);
  }

private:
  ::robomaster_msgs::action::MoveArm_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::MoveArm_FeedbackMessage>()
{
  return robomaster_msgs::action::builder::Init_MoveArm_FeedbackMessage_goal_id();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__MOVE_ARM__BUILDER_HPP_
