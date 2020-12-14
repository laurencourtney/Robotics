// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_package:action/Circumnavigate.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PACKAGE__ACTION__DETAIL__CIRCUMNAVIGATE__BUILDER_HPP_
#define ACTION_PACKAGE__ACTION__DETAIL__CIRCUMNAVIGATE__BUILDER_HPP_

#include "action_package/action/detail/circumnavigate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace action_package
{

namespace action
{

namespace builder
{

class Init_Circumnavigate_Goal_goal_point
{
public:
  explicit Init_Circumnavigate_Goal_goal_point(::action_package::action::Circumnavigate_Goal & msg)
  : msg_(msg)
  {}
  ::action_package::action::Circumnavigate_Goal goal_point(::action_package::action::Circumnavigate_Goal::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::Circumnavigate_Goal msg_;
};

class Init_Circumnavigate_Goal_ending_point
{
public:
  Init_Circumnavigate_Goal_ending_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circumnavigate_Goal_goal_point ending_point(::action_package::action::Circumnavigate_Goal::_ending_point_type arg)
  {
    msg_.ending_point = std::move(arg);
    return Init_Circumnavigate_Goal_goal_point(msg_);
  }

private:
  ::action_package::action::Circumnavigate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::Circumnavigate_Goal>()
{
  return action_package::action::builder::Init_Circumnavigate_Goal_ending_point();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_Circumnavigate_Result_current_point
{
public:
  explicit Init_Circumnavigate_Result_current_point(::action_package::action::Circumnavigate_Result & msg)
  : msg_(msg)
  {}
  ::action_package::action::Circumnavigate_Result current_point(::action_package::action::Circumnavigate_Result::_current_point_type arg)
  {
    msg_.current_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::Circumnavigate_Result msg_;
};

class Init_Circumnavigate_Result_closest_point
{
public:
  Init_Circumnavigate_Result_closest_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circumnavigate_Result_current_point closest_point(::action_package::action::Circumnavigate_Result::_closest_point_type arg)
  {
    msg_.closest_point = std::move(arg);
    return Init_Circumnavigate_Result_current_point(msg_);
  }

private:
  ::action_package::action::Circumnavigate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::Circumnavigate_Result>()
{
  return action_package::action::builder::Init_Circumnavigate_Result_closest_point();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_Circumnavigate_Feedback_current_loc
{
public:
  Init_Circumnavigate_Feedback_current_loc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_package::action::Circumnavigate_Feedback current_loc(::action_package::action::Circumnavigate_Feedback::_current_loc_type arg)
  {
    msg_.current_loc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::Circumnavigate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::Circumnavigate_Feedback>()
{
  return action_package::action::builder::Init_Circumnavigate_Feedback_current_loc();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_Circumnavigate_SendGoal_Request_goal
{
public:
  explicit Init_Circumnavigate_SendGoal_Request_goal(::action_package::action::Circumnavigate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_package::action::Circumnavigate_SendGoal_Request goal(::action_package::action::Circumnavigate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::Circumnavigate_SendGoal_Request msg_;
};

class Init_Circumnavigate_SendGoal_Request_goal_id
{
public:
  Init_Circumnavigate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circumnavigate_SendGoal_Request_goal goal_id(::action_package::action::Circumnavigate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Circumnavigate_SendGoal_Request_goal(msg_);
  }

private:
  ::action_package::action::Circumnavigate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::Circumnavigate_SendGoal_Request>()
{
  return action_package::action::builder::Init_Circumnavigate_SendGoal_Request_goal_id();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_Circumnavigate_SendGoal_Response_stamp
{
public:
  explicit Init_Circumnavigate_SendGoal_Response_stamp(::action_package::action::Circumnavigate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_package::action::Circumnavigate_SendGoal_Response stamp(::action_package::action::Circumnavigate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::Circumnavigate_SendGoal_Response msg_;
};

class Init_Circumnavigate_SendGoal_Response_accepted
{
public:
  Init_Circumnavigate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circumnavigate_SendGoal_Response_stamp accepted(::action_package::action::Circumnavigate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Circumnavigate_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_package::action::Circumnavigate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::Circumnavigate_SendGoal_Response>()
{
  return action_package::action::builder::Init_Circumnavigate_SendGoal_Response_accepted();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_Circumnavigate_GetResult_Request_goal_id
{
public:
  Init_Circumnavigate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_package::action::Circumnavigate_GetResult_Request goal_id(::action_package::action::Circumnavigate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::Circumnavigate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::Circumnavigate_GetResult_Request>()
{
  return action_package::action::builder::Init_Circumnavigate_GetResult_Request_goal_id();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_Circumnavigate_GetResult_Response_result
{
public:
  explicit Init_Circumnavigate_GetResult_Response_result(::action_package::action::Circumnavigate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_package::action::Circumnavigate_GetResult_Response result(::action_package::action::Circumnavigate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::Circumnavigate_GetResult_Response msg_;
};

class Init_Circumnavigate_GetResult_Response_status
{
public:
  Init_Circumnavigate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circumnavigate_GetResult_Response_result status(::action_package::action::Circumnavigate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Circumnavigate_GetResult_Response_result(msg_);
  }

private:
  ::action_package::action::Circumnavigate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::Circumnavigate_GetResult_Response>()
{
  return action_package::action::builder::Init_Circumnavigate_GetResult_Response_status();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_Circumnavigate_FeedbackMessage_feedback
{
public:
  explicit Init_Circumnavigate_FeedbackMessage_feedback(::action_package::action::Circumnavigate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_package::action::Circumnavigate_FeedbackMessage feedback(::action_package::action::Circumnavigate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::Circumnavigate_FeedbackMessage msg_;
};

class Init_Circumnavigate_FeedbackMessage_goal_id
{
public:
  Init_Circumnavigate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circumnavigate_FeedbackMessage_feedback goal_id(::action_package::action::Circumnavigate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Circumnavigate_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_package::action::Circumnavigate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::Circumnavigate_FeedbackMessage>()
{
  return action_package::action::builder::Init_Circumnavigate_FeedbackMessage_goal_id();
}

}  // namespace action_package

#endif  // ACTION_PACKAGE__ACTION__DETAIL__CIRCUMNAVIGATE__BUILDER_HPP_
