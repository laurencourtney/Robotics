// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from action_package:action/StraightToPoint.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PACKAGE__ACTION__DETAIL__STRAIGHT_TO_POINT__STRUCT_HPP_
#define ACTION_PACKAGE__ACTION__DETAIL__STRAIGHT_TO_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__action_package__action__StraightToPoint_Goal __attribute__((deprecated))
#else
# define DEPRECATED__action_package__action__StraightToPoint_Goal __declspec(deprecated)
#endif

namespace action_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StraightToPoint_Goal_
{
  using Type = StraightToPoint_Goal_<ContainerAllocator>;

  explicit StraightToPoint_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->dest.begin(), this->dest.end(), 0.0f);
    }
  }

  explicit StraightToPoint_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dest(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->dest.begin(), this->dest.end(), 0.0f);
    }
  }

  // field types and members
  using _dest_type =
    std::array<float, 3>;
  _dest_type dest;

  // setters for named parameter idiom
  Type & set__dest(
    const std::array<float, 3> & _arg)
  {
    this->dest = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_package::action::StraightToPoint_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_package::action::StraightToPoint_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_package__action__StraightToPoint_Goal
    std::shared_ptr<action_package::action::StraightToPoint_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_package__action__StraightToPoint_Goal
    std::shared_ptr<action_package::action::StraightToPoint_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StraightToPoint_Goal_ & other) const
  {
    if (this->dest != other.dest) {
      return false;
    }
    return true;
  }
  bool operator!=(const StraightToPoint_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StraightToPoint_Goal_

// alias to use template instance with default allocator
using StraightToPoint_Goal =
  action_package::action::StraightToPoint_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_package


#ifndef _WIN32
# define DEPRECATED__action_package__action__StraightToPoint_Result __attribute__((deprecated))
#else
# define DEPRECATED__action_package__action__StraightToPoint_Result __declspec(deprecated)
#endif

namespace action_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StraightToPoint_Result_
{
  using Type = StraightToPoint_Result_<ContainerAllocator>;

  explicit StraightToPoint_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->final.begin(), this->final.end(), 0.0f);
    }
  }

  explicit StraightToPoint_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : final(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->final.begin(), this->final.end(), 0.0f);
    }
  }

  // field types and members
  using _final_type =
    std::array<float, 3>;
  _final_type final;

  // setters for named parameter idiom
  Type & set__final(
    const std::array<float, 3> & _arg)
  {
    this->final = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_package::action::StraightToPoint_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_package::action::StraightToPoint_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_package__action__StraightToPoint_Result
    std::shared_ptr<action_package::action::StraightToPoint_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_package__action__StraightToPoint_Result
    std::shared_ptr<action_package::action::StraightToPoint_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StraightToPoint_Result_ & other) const
  {
    if (this->final != other.final) {
      return false;
    }
    return true;
  }
  bool operator!=(const StraightToPoint_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StraightToPoint_Result_

// alias to use template instance with default allocator
using StraightToPoint_Result =
  action_package::action::StraightToPoint_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_package


#ifndef _WIN32
# define DEPRECATED__action_package__action__StraightToPoint_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__action_package__action__StraightToPoint_Feedback __declspec(deprecated)
#endif

namespace action_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StraightToPoint_Feedback_
{
  using Type = StraightToPoint_Feedback_<ContainerAllocator>;

  explicit StraightToPoint_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->current_location.begin(), this->current_location.end(), 0.0f);
    }
  }

  explicit StraightToPoint_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->current_location.begin(), this->current_location.end(), 0.0f);
    }
  }

  // field types and members
  using _current_location_type =
    std::array<float, 3>;
  _current_location_type current_location;

  // setters for named parameter idiom
  Type & set__current_location(
    const std::array<float, 3> & _arg)
  {
    this->current_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_package::action::StraightToPoint_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_package::action::StraightToPoint_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_package__action__StraightToPoint_Feedback
    std::shared_ptr<action_package::action::StraightToPoint_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_package__action__StraightToPoint_Feedback
    std::shared_ptr<action_package::action::StraightToPoint_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StraightToPoint_Feedback_ & other) const
  {
    if (this->current_location != other.current_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const StraightToPoint_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StraightToPoint_Feedback_

// alias to use template instance with default allocator
using StraightToPoint_Feedback =
  action_package::action::StraightToPoint_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_package


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "action_package/action/detail/straight_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_package__action__StraightToPoint_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_package__action__StraightToPoint_SendGoal_Request __declspec(deprecated)
#endif

namespace action_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StraightToPoint_SendGoal_Request_
{
  using Type = StraightToPoint_SendGoal_Request_<ContainerAllocator>;

  explicit StraightToPoint_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit StraightToPoint_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    action_package::action::StraightToPoint_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const action_package::action::StraightToPoint_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_package__action__StraightToPoint_SendGoal_Request
    std::shared_ptr<action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_package__action__StraightToPoint_SendGoal_Request
    std::shared_ptr<action_package::action::StraightToPoint_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StraightToPoint_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const StraightToPoint_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StraightToPoint_SendGoal_Request_

// alias to use template instance with default allocator
using StraightToPoint_SendGoal_Request =
  action_package::action::StraightToPoint_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_package


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_package__action__StraightToPoint_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_package__action__StraightToPoint_SendGoal_Response __declspec(deprecated)
#endif

namespace action_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StraightToPoint_SendGoal_Response_
{
  using Type = StraightToPoint_SendGoal_Response_<ContainerAllocator>;

  explicit StraightToPoint_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit StraightToPoint_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_package__action__StraightToPoint_SendGoal_Response
    std::shared_ptr<action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_package__action__StraightToPoint_SendGoal_Response
    std::shared_ptr<action_package::action::StraightToPoint_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StraightToPoint_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const StraightToPoint_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StraightToPoint_SendGoal_Response_

// alias to use template instance with default allocator
using StraightToPoint_SendGoal_Response =
  action_package::action::StraightToPoint_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_package

namespace action_package
{

namespace action
{

struct StraightToPoint_SendGoal
{
  using Request = action_package::action::StraightToPoint_SendGoal_Request;
  using Response = action_package::action::StraightToPoint_SendGoal_Response;
};

}  // namespace action

}  // namespace action_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_package__action__StraightToPoint_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_package__action__StraightToPoint_GetResult_Request __declspec(deprecated)
#endif

namespace action_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StraightToPoint_GetResult_Request_
{
  using Type = StraightToPoint_GetResult_Request_<ContainerAllocator>;

  explicit StraightToPoint_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit StraightToPoint_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_package__action__StraightToPoint_GetResult_Request
    std::shared_ptr<action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_package__action__StraightToPoint_GetResult_Request
    std::shared_ptr<action_package::action::StraightToPoint_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StraightToPoint_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const StraightToPoint_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StraightToPoint_GetResult_Request_

// alias to use template instance with default allocator
using StraightToPoint_GetResult_Request =
  action_package::action::StraightToPoint_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_package


// Include directives for member types
// Member 'result'
// already included above
// #include "action_package/action/detail/straight_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_package__action__StraightToPoint_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_package__action__StraightToPoint_GetResult_Response __declspec(deprecated)
#endif

namespace action_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StraightToPoint_GetResult_Response_
{
  using Type = StraightToPoint_GetResult_Response_<ContainerAllocator>;

  explicit StraightToPoint_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit StraightToPoint_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    action_package::action::StraightToPoint_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const action_package::action::StraightToPoint_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_package__action__StraightToPoint_GetResult_Response
    std::shared_ptr<action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_package__action__StraightToPoint_GetResult_Response
    std::shared_ptr<action_package::action::StraightToPoint_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StraightToPoint_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const StraightToPoint_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StraightToPoint_GetResult_Response_

// alias to use template instance with default allocator
using StraightToPoint_GetResult_Response =
  action_package::action::StraightToPoint_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_package

namespace action_package
{

namespace action
{

struct StraightToPoint_GetResult
{
  using Request = action_package::action::StraightToPoint_GetResult_Request;
  using Response = action_package::action::StraightToPoint_GetResult_Response;
};

}  // namespace action

}  // namespace action_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "action_package/action/detail/straight_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_package__action__StraightToPoint_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__action_package__action__StraightToPoint_FeedbackMessage __declspec(deprecated)
#endif

namespace action_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StraightToPoint_FeedbackMessage_
{
  using Type = StraightToPoint_FeedbackMessage_<ContainerAllocator>;

  explicit StraightToPoint_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit StraightToPoint_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    action_package::action::StraightToPoint_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const action_package::action::StraightToPoint_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_package__action__StraightToPoint_FeedbackMessage
    std::shared_ptr<action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_package__action__StraightToPoint_FeedbackMessage
    std::shared_ptr<action_package::action::StraightToPoint_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StraightToPoint_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const StraightToPoint_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StraightToPoint_FeedbackMessage_

// alias to use template instance with default allocator
using StraightToPoint_FeedbackMessage =
  action_package::action::StraightToPoint_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_package

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace action_package
{

namespace action
{

struct StraightToPoint
{
  /// The goal message defined in the action definition.
  using Goal = action_package::action::StraightToPoint_Goal;
  /// The result message defined in the action definition.
  using Result = action_package::action::StraightToPoint_Result;
  /// The feedback message defined in the action definition.
  using Feedback = action_package::action::StraightToPoint_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = action_package::action::StraightToPoint_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = action_package::action::StraightToPoint_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = action_package::action::StraightToPoint_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct StraightToPoint StraightToPoint;

}  // namespace action

}  // namespace action_package

#endif  // ACTION_PACKAGE__ACTION__DETAIL__STRAIGHT_TO_POINT__STRUCT_HPP_
