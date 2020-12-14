// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_package:action/StraightToPoint.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PACKAGE__ACTION__DETAIL__STRAIGHT_TO_POINT__BUILDER_HPP_
#define ACTION_PACKAGE__ACTION__DETAIL__STRAIGHT_TO_POINT__BUILDER_HPP_

#include "action_package/action/detail/straight_to_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace action_package
{

namespace action
{

namespace builder
{

class Init_StraightToPoint_Goal_dest
{
public:
  Init_StraightToPoint_Goal_dest()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_package::action::StraightToPoint_Goal dest(::action_package::action::StraightToPoint_Goal::_dest_type arg)
  {
    msg_.dest = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::StraightToPoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::StraightToPoint_Goal>()
{
  return action_package::action::builder::Init_StraightToPoint_Goal_dest();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_StraightToPoint_Result_final
{
public:
  Init_StraightToPoint_Result_final()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_package::action::StraightToPoint_Result final(::action_package::action::StraightToPoint_Result::_final_type arg)
  {
    msg_.final = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::StraightToPoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::StraightToPoint_Result>()
{
  return action_package::action::builder::Init_StraightToPoint_Result_final();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_StraightToPoint_Feedback_current_location
{
public:
  Init_StraightToPoint_Feedback_current_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_package::action::StraightToPoint_Feedback current_location(::action_package::action::StraightToPoint_Feedback::_current_location_type arg)
  {
    msg_.current_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::StraightToPoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::StraightToPoint_Feedback>()
{
  return action_package::action::builder::Init_StraightToPoint_Feedback_current_location();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_StraightToPoint_SendGoal_Request_goal
{
public:
  explicit Init_StraightToPoint_SendGoal_Request_goal(::action_package::action::StraightToPoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_package::action::StraightToPoint_SendGoal_Request goal(::action_package::action::StraightToPoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::StraightToPoint_SendGoal_Request msg_;
};

class Init_StraightToPoint_SendGoal_Request_goal_id
{
public:
  Init_StraightToPoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StraightToPoint_SendGoal_Request_goal goal_id(::action_package::action::StraightToPoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_StraightToPoint_SendGoal_Request_goal(msg_);
  }

private:
  ::action_package::action::StraightToPoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::StraightToPoint_SendGoal_Request>()
{
  return action_package::action::builder::Init_StraightToPoint_SendGoal_Request_goal_id();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_StraightToPoint_SendGoal_Response_stamp
{
public:
  explicit Init_StraightToPoint_SendGoal_Response_stamp(::action_package::action::StraightToPoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_package::action::StraightToPoint_SendGoal_Response stamp(::action_package::action::StraightToPoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::StraightToPoint_SendGoal_Response msg_;
};

class Init_StraightToPoint_SendGoal_Response_accepted
{
public:
  Init_StraightToPoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StraightToPoint_SendGoal_Response_stamp accepted(::action_package::action::StraightToPoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_StraightToPoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_package::action::StraightToPoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::StraightToPoint_SendGoal_Response>()
{
  return action_package::action::builder::Init_StraightToPoint_SendGoal_Response_accepted();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_StraightToPoint_GetResult_Request_goal_id
{
public:
  Init_StraightToPoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_package::action::StraightToPoint_GetResult_Request goal_id(::action_package::action::StraightToPoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::StraightToPoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::StraightToPoint_GetResult_Request>()
{
  return action_package::action::builder::Init_StraightToPoint_GetResult_Request_goal_id();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_StraightToPoint_GetResult_Response_result
{
public:
  explicit Init_StraightToPoint_GetResult_Response_result(::action_package::action::StraightToPoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_package::action::StraightToPoint_GetResult_Response result(::action_package::action::StraightToPoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::StraightToPoint_GetResult_Response msg_;
};

class Init_StraightToPoint_GetResult_Response_status
{
public:
  Init_StraightToPoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StraightToPoint_GetResult_Response_result status(::action_package::action::StraightToPoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StraightToPoint_GetResult_Response_result(msg_);
  }

private:
  ::action_package::action::StraightToPoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::StraightToPoint_GetResult_Response>()
{
  return action_package::action::builder::Init_StraightToPoint_GetResult_Response_status();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_StraightToPoint_FeedbackMessage_feedback
{
public:
  explicit Init_StraightToPoint_FeedbackMessage_feedback(::action_package::action::StraightToPoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_package::action::StraightToPoint_FeedbackMessage feedback(::action_package::action::StraightToPoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::StraightToPoint_FeedbackMessage msg_;
};

class Init_StraightToPoint_FeedbackMessage_goal_id
{
public:
  Init_StraightToPoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StraightToPoint_FeedbackMessage_feedback goal_id(::action_package::action::StraightToPoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_StraightToPoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_package::action::StraightToPoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::StraightToPoint_FeedbackMessage>()
{
  return action_package::action::builder::Init_StraightToPoint_FeedbackMessage_goal_id();
}

}  // namespace action_package

#endif  // ACTION_PACKAGE__ACTION__DETAIL__STRAIGHT_TO_POINT__BUILDER_HPP_
