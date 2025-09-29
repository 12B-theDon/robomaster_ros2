// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:action/PlaySound.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__PLAY_SOUND__BUILDER_HPP_
#define ROBOMASTER_MSGS__ACTION__DETAIL__PLAY_SOUND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/action/detail/play_sound__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_PlaySound_Goal_file
{
public:
  explicit Init_PlaySound_Goal_file(::robomaster_msgs::action::PlaySound_Goal & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::PlaySound_Goal file(::robomaster_msgs::action::PlaySound_Goal::_file_type arg)
  {
    msg_.file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_Goal msg_;
};

class Init_PlaySound_Goal_times
{
public:
  explicit Init_PlaySound_Goal_times(::robomaster_msgs::action::PlaySound_Goal & msg)
  : msg_(msg)
  {}
  Init_PlaySound_Goal_file times(::robomaster_msgs::action::PlaySound_Goal::_times_type arg)
  {
    msg_.times = std::move(arg);
    return Init_PlaySound_Goal_file(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_Goal msg_;
};

class Init_PlaySound_Goal_sound_id
{
public:
  Init_PlaySound_Goal_sound_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySound_Goal_times sound_id(::robomaster_msgs::action::PlaySound_Goal::_sound_id_type arg)
  {
    msg_.sound_id = std::move(arg);
    return Init_PlaySound_Goal_times(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::PlaySound_Goal>()
{
  return robomaster_msgs::action::builder::Init_PlaySound_Goal_sound_id();
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
auto build<::robomaster_msgs::action::PlaySound_Result>()
{
  return ::robomaster_msgs::action::PlaySound_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_PlaySound_Feedback_progress
{
public:
  explicit Init_PlaySound_Feedback_progress(::robomaster_msgs::action::PlaySound_Feedback & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::PlaySound_Feedback progress(::robomaster_msgs::action::PlaySound_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_Feedback msg_;
};

class Init_PlaySound_Feedback_time
{
public:
  Init_PlaySound_Feedback_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySound_Feedback_progress time(::robomaster_msgs::action::PlaySound_Feedback::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_PlaySound_Feedback_progress(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::PlaySound_Feedback>()
{
  return robomaster_msgs::action::builder::Init_PlaySound_Feedback_time();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_PlaySound_SendGoal_Request_goal
{
public:
  explicit Init_PlaySound_SendGoal_Request_goal(::robomaster_msgs::action::PlaySound_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::PlaySound_SendGoal_Request goal(::robomaster_msgs::action::PlaySound_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_SendGoal_Request msg_;
};

class Init_PlaySound_SendGoal_Request_goal_id
{
public:
  Init_PlaySound_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySound_SendGoal_Request_goal goal_id(::robomaster_msgs::action::PlaySound_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PlaySound_SendGoal_Request_goal(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::PlaySound_SendGoal_Request>()
{
  return robomaster_msgs::action::builder::Init_PlaySound_SendGoal_Request_goal_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_PlaySound_SendGoal_Response_stamp
{
public:
  explicit Init_PlaySound_SendGoal_Response_stamp(::robomaster_msgs::action::PlaySound_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::PlaySound_SendGoal_Response stamp(::robomaster_msgs::action::PlaySound_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_SendGoal_Response msg_;
};

class Init_PlaySound_SendGoal_Response_accepted
{
public:
  Init_PlaySound_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySound_SendGoal_Response_stamp accepted(::robomaster_msgs::action::PlaySound_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PlaySound_SendGoal_Response_stamp(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::PlaySound_SendGoal_Response>()
{
  return robomaster_msgs::action::builder::Init_PlaySound_SendGoal_Response_accepted();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_PlaySound_GetResult_Request_goal_id
{
public:
  Init_PlaySound_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::action::PlaySound_GetResult_Request goal_id(::robomaster_msgs::action::PlaySound_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::PlaySound_GetResult_Request>()
{
  return robomaster_msgs::action::builder::Init_PlaySound_GetResult_Request_goal_id();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_PlaySound_GetResult_Response_result
{
public:
  explicit Init_PlaySound_GetResult_Response_result(::robomaster_msgs::action::PlaySound_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::PlaySound_GetResult_Response result(::robomaster_msgs::action::PlaySound_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_GetResult_Response msg_;
};

class Init_PlaySound_GetResult_Response_status
{
public:
  Init_PlaySound_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySound_GetResult_Response_result status(::robomaster_msgs::action::PlaySound_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PlaySound_GetResult_Response_result(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::PlaySound_GetResult_Response>()
{
  return robomaster_msgs::action::builder::Init_PlaySound_GetResult_Response_status();
}

}  // namespace robomaster_msgs


namespace robomaster_msgs
{

namespace action
{

namespace builder
{

class Init_PlaySound_FeedbackMessage_feedback
{
public:
  explicit Init_PlaySound_FeedbackMessage_feedback(::robomaster_msgs::action::PlaySound_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robomaster_msgs::action::PlaySound_FeedbackMessage feedback(::robomaster_msgs::action::PlaySound_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_FeedbackMessage msg_;
};

class Init_PlaySound_FeedbackMessage_goal_id
{
public:
  Init_PlaySound_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySound_FeedbackMessage_feedback goal_id(::robomaster_msgs::action::PlaySound_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PlaySound_FeedbackMessage_feedback(msg_);
  }

private:
  ::robomaster_msgs::action::PlaySound_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::action::PlaySound_FeedbackMessage>()
{
  return robomaster_msgs::action::builder::Init_PlaySound_FeedbackMessage_goal_id();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__PLAY_SOUND__BUILDER_HPP_
