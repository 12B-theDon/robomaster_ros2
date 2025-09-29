// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:action/GripperControl.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_
#define ROBOMASTER_MSGS__ACTION__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/action/detail/gripper_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_GripperControl_Goal_power
{
public:
  explicit Init_GripperControl_Goal_power(::robomaster_msgs::action::GripperControl_Goal & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::GripperControl_Goal power(::robomaster_msgs::action::GripperControl_Goal::_power_type arg)
  {
    msg_.power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_Goal msg_;
};

class Init_GripperControl_Goal_target_state
{
public:
  Init_GripperControl_Goal_target_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_Goal_power target_state(::robomaster_msgs::action::GripperControl_Goal::_target_state_type arg)
  {
    msg_.target_state = std::move(arg);
    return Init_GripperControl_Goal_power(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::GripperControl_Goal>()
{
  return robomaster_msgs::action::builder::Init_GripperControl_Goal_target_state();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_GripperControl_Result_duration
{
public:
  Init_GripperControl_Result_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::action::GripperControl_Result duration(::robomaster_msgs::action::GripperControl_Result::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::GripperControl_Result>()
{
  return robomaster_msgs::action::builder::Init_GripperControl_Result_duration();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_GripperControl_Feedback_current_state
{
public:
  Init_GripperControl_Feedback_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::action::GripperControl_Feedback current_state(::robomaster_msgs::action::GripperControl_Feedback::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::GripperControl_Feedback>()
{
  return robomaster_msgs::action::builder::Init_GripperControl_Feedback_current_state();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_GripperControl_SendGoal_Request_goal
{
public:
  explicit Init_GripperControl_SendGoal_Request_goal(::robomaster_msgs::action::GripperControl_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::GripperControl_SendGoal_Request goal(::robomaster_msgs::action::GripperControl_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_SendGoal_Request msg_;
};

class Init_GripperControl_SendGoal_Request_goal_id
{
public:
  Init_GripperControl_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_SendGoal_Request_goal goal_id(::robomaster_msgs::action::GripperControl_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GripperControl_SendGoal_Request_goal(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::GripperControl_SendGoal_Request>()
{
  return robomaster_msgs::action::builder::Init_GripperControl_SendGoal_Request_goal_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_GripperControl_SendGoal_Response_stamp
{
public:
  explicit Init_GripperControl_SendGoal_Response_stamp(::robomaster_msgs::action::GripperControl_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::GripperControl_SendGoal_Response stamp(::robomaster_msgs::action::GripperControl_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_SendGoal_Response msg_;
};

class Init_GripperControl_SendGoal_Response_accepted
{
public:
  Init_GripperControl_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_SendGoal_Response_stamp accepted(::robomaster_msgs::action::GripperControl_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GripperControl_SendGoal_Response_stamp(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::GripperControl_SendGoal_Response>()
{
  return robomaster_msgs::action::builder::Init_GripperControl_SendGoal_Response_accepted();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_GripperControl_GetResult_Request_goal_id
{
public:
  Init_GripperControl_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::action::GripperControl_GetResult_Request goal_id(::robomaster_msgs::action::GripperControl_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::GripperControl_GetResult_Request>()
{
  return robomaster_msgs::action::builder::Init_GripperControl_GetResult_Request_goal_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_GripperControl_GetResult_Response_result
{
public:
  explicit Init_GripperControl_GetResult_Response_result(::robomaster_msgs::action::GripperControl_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::GripperControl_GetResult_Response result(::robomaster_msgs::action::GripperControl_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_GetResult_Response msg_;
};

class Init_GripperControl_GetResult_Response_status
{
public:
  Init_GripperControl_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_GetResult_Response_result status(::robomaster_msgs::action::GripperControl_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GripperControl_GetResult_Response_result(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::GripperControl_GetResult_Response>()
{
  return robomaster_msgs::action::builder::Init_GripperControl_GetResult_Response_status();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_GripperControl_FeedbackMessage_feedback
{
public:
  explicit Init_GripperControl_FeedbackMessage_feedback(::robomaster_msgs::action::GripperControl_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::GripperControl_FeedbackMessage feedback(::robomaster_msgs::action::GripperControl_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_FeedbackMessage msg_;
};

class Init_GripperControl_FeedbackMessage_goal_id
{
public:
  Init_GripperControl_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_FeedbackMessage_feedback goal_id(::robomaster_msgs::action::GripperControl_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GripperControl_FeedbackMessage_feedback(msg_);
  }

private:
  ::robomaster_msgs::action::GripperControl_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::GripperControl_FeedbackMessage>()
{
  return robomaster_msgs::action::builder::Init_GripperControl_FeedbackMessage_goal_id();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_
