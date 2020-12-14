// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_package:action/StraightToPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"
#include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_package/action/detail/straight_to_point__functions.h"
#include "action_package/action/detail/straight_to_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_package__action__StraightToPoint_Goal__init(message_memory);
}

void StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_fini_function(void * message_memory)
{
  action_package__action__StraightToPoint_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_message_member_array[1] = {
  {
    "dest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_Goal, dest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_message_members = {
  "action_package__action",  // message namespace
  "StraightToPoint_Goal",  // message name
  1,  // number of fields
  sizeof(action_package__action__StraightToPoint_Goal),
  StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_message_member_array,  // message members
  StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_message_type_support_handle = {
  0,
  &StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_Goal)() {
  if (!StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_message_type_support_handle.typesupport_identifier) {
    StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StraightToPoint_Goal__rosidl_typesupport_introspection_c__StraightToPoint_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_package/action/detail/straight_to_point__functions.h"
// already included above
// #include "action_package/action/detail/straight_to_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_package__action__StraightToPoint_Result__init(message_memory);
}

void StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_fini_function(void * message_memory)
{
  action_package__action__StraightToPoint_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_message_member_array[1] = {
  {
    "final",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_Result, final),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_message_members = {
  "action_package__action",  // message namespace
  "StraightToPoint_Result",  // message name
  1,  // number of fields
  sizeof(action_package__action__StraightToPoint_Result),
  StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_message_member_array,  // message members
  StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_message_type_support_handle = {
  0,
  &StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_Result)() {
  if (!StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_message_type_support_handle.typesupport_identifier) {
    StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StraightToPoint_Result__rosidl_typesupport_introspection_c__StraightToPoint_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_package/action/detail/straight_to_point__functions.h"
// already included above
// #include "action_package/action/detail/straight_to_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_package__action__StraightToPoint_Feedback__init(message_memory);
}

void StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_fini_function(void * message_memory)
{
  action_package__action__StraightToPoint_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_message_member_array[1] = {
  {
    "current_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_Feedback, current_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_message_members = {
  "action_package__action",  // message namespace
  "StraightToPoint_Feedback",  // message name
  1,  // number of fields
  sizeof(action_package__action__StraightToPoint_Feedback),
  StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_message_member_array,  // message members
  StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_message_type_support_handle = {
  0,
  &StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_Feedback)() {
  if (!StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_message_type_support_handle.typesupport_identifier) {
    StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StraightToPoint_Feedback__rosidl_typesupport_introspection_c__StraightToPoint_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_package/action/detail/straight_to_point__functions.h"
// already included above
// #include "action_package/action/detail/straight_to_point__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "action_package/action/straight_to_point.h"
// Member `goal`
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_package__action__StraightToPoint_SendGoal_Request__init(message_memory);
}

void StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_fini_function(void * message_memory)
{
  action_package__action__StraightToPoint_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_members = {
  "action_package__action",  // message namespace
  "StraightToPoint_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(action_package__action__StraightToPoint_SendGoal_Request),
  StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_member_array,  // message members
  StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_type_support_handle = {
  0,
  &StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_SendGoal_Request)() {
  StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_Goal)();
  if (!StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StraightToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_package/action/detail/straight_to_point__functions.h"
// already included above
// #include "action_package/action/detail/straight_to_point__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_package__action__StraightToPoint_SendGoal_Response__init(message_memory);
}

void StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_fini_function(void * message_memory)
{
  action_package__action__StraightToPoint_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_message_members = {
  "action_package__action",  // message namespace
  "StraightToPoint_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(action_package__action__StraightToPoint_SendGoal_Response),
  StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_message_member_array,  // message members
  StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_message_type_support_handle = {
  0,
  &StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_SendGoal_Response)() {
  StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StraightToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_service_members = {
  "action_package__action",  // service namespace
  "StraightToPoint_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_service_type_support_handle = {
  0,
  &action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_SendGoal)() {
  if (!action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_service_type_support_handle.typesupport_identifier) {
    action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_SendGoal_Response)()->data;
  }

  return &action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_package/action/detail/straight_to_point__functions.h"
// already included above
// #include "action_package/action/detail/straight_to_point__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_package__action__StraightToPoint_GetResult_Request__init(message_memory);
}

void StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_fini_function(void * message_memory)
{
  action_package__action__StraightToPoint_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_message_members = {
  "action_package__action",  // message namespace
  "StraightToPoint_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(action_package__action__StraightToPoint_GetResult_Request),
  StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_message_member_array,  // message members
  StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_message_type_support_handle = {
  0,
  &StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_GetResult_Request)() {
  StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StraightToPoint_GetResult_Request__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_package/action/detail/straight_to_point__functions.h"
// already included above
// #include "action_package/action/detail/straight_to_point__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "action_package/action/straight_to_point.h"
// Member `result`
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_package__action__StraightToPoint_GetResult_Response__init(message_memory);
}

void StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_fini_function(void * message_memory)
{
  action_package__action__StraightToPoint_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_message_members = {
  "action_package__action",  // message namespace
  "StraightToPoint_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(action_package__action__StraightToPoint_GetResult_Response),
  StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_message_member_array,  // message members
  StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_message_type_support_handle = {
  0,
  &StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_GetResult_Response)() {
  StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_Result)();
  if (!StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StraightToPoint_GetResult_Response__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_service_members = {
  "action_package__action",  // service namespace
  "StraightToPoint_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_service_type_support_handle = {
  0,
  &action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_GetResult)() {
  if (!action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_service_type_support_handle.typesupport_identifier) {
    action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_GetResult_Response)()->data;
  }

  return &action_package__action__detail__straight_to_point__rosidl_typesupport_introspection_c__StraightToPoint_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_package/action/detail/straight_to_point__functions.h"
// already included above
// #include "action_package/action/detail/straight_to_point__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "action_package/action/straight_to_point.h"
// Member `feedback`
// already included above
// #include "action_package/action/detail/straight_to_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_package__action__StraightToPoint_FeedbackMessage__init(message_memory);
}

void StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_fini_function(void * message_memory)
{
  action_package__action__StraightToPoint_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__action__StraightToPoint_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_message_members = {
  "action_package__action",  // message namespace
  "StraightToPoint_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(action_package__action__StraightToPoint_FeedbackMessage),
  StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_message_member_array,  // message members
  StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_message_type_support_handle = {
  0,
  &StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_FeedbackMessage)() {
  StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, action, StraightToPoint_Feedback)();
  if (!StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StraightToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__StraightToPoint_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
