// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_package:action/Circumnavigate.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PACKAGE__ACTION__DETAIL__CIRCUMNAVIGATE__STRUCT_H_
#define ACTION_PACKAGE__ACTION__DETAIL__CIRCUMNAVIGATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ending_point'
// Member 'goal_point'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Circumnavigate in the package action_package.
typedef struct action_package__action__Circumnavigate_Goal
{
  rosidl_runtime_c__float__Sequence ending_point;
  rosidl_runtime_c__float__Sequence goal_point;
} action_package__action__Circumnavigate_Goal;

// Struct for a sequence of action_package__action__Circumnavigate_Goal.
typedef struct action_package__action__Circumnavigate_Goal__Sequence
{
  action_package__action__Circumnavigate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__Circumnavigate_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'closest_point'
// Member 'current_point'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Circumnavigate in the package action_package.
typedef struct action_package__action__Circumnavigate_Result
{
  rosidl_runtime_c__float__Sequence closest_point;
  rosidl_runtime_c__float__Sequence current_point;
} action_package__action__Circumnavigate_Result;

// Struct for a sequence of action_package__action__Circumnavigate_Result.
typedef struct action_package__action__Circumnavigate_Result__Sequence
{
  action_package__action__Circumnavigate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__Circumnavigate_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_loc'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Circumnavigate in the package action_package.
typedef struct action_package__action__Circumnavigate_Feedback
{
  rosidl_runtime_c__float__Sequence current_loc;
} action_package__action__Circumnavigate_Feedback;

// Struct for a sequence of action_package__action__Circumnavigate_Feedback.
typedef struct action_package__action__Circumnavigate_Feedback__Sequence
{
  action_package__action__Circumnavigate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__Circumnavigate_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "action_package/action/detail/circumnavigate__struct.h"

// Struct defined in action/Circumnavigate in the package action_package.
typedef struct action_package__action__Circumnavigate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_package__action__Circumnavigate_Goal goal;
} action_package__action__Circumnavigate_SendGoal_Request;

// Struct for a sequence of action_package__action__Circumnavigate_SendGoal_Request.
typedef struct action_package__action__Circumnavigate_SendGoal_Request__Sequence
{
  action_package__action__Circumnavigate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__Circumnavigate_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Circumnavigate in the package action_package.
typedef struct action_package__action__Circumnavigate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} action_package__action__Circumnavigate_SendGoal_Response;

// Struct for a sequence of action_package__action__Circumnavigate_SendGoal_Response.
typedef struct action_package__action__Circumnavigate_SendGoal_Response__Sequence
{
  action_package__action__Circumnavigate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__Circumnavigate_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Circumnavigate in the package action_package.
typedef struct action_package__action__Circumnavigate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} action_package__action__Circumnavigate_GetResult_Request;

// Struct for a sequence of action_package__action__Circumnavigate_GetResult_Request.
typedef struct action_package__action__Circumnavigate_GetResult_Request__Sequence
{
  action_package__action__Circumnavigate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__Circumnavigate_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "action_package/action/detail/circumnavigate__struct.h"

// Struct defined in action/Circumnavigate in the package action_package.
typedef struct action_package__action__Circumnavigate_GetResult_Response
{
  int8_t status;
  action_package__action__Circumnavigate_Result result;
} action_package__action__Circumnavigate_GetResult_Response;

// Struct for a sequence of action_package__action__Circumnavigate_GetResult_Response.
typedef struct action_package__action__Circumnavigate_GetResult_Response__Sequence
{
  action_package__action__Circumnavigate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__Circumnavigate_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "action_package/action/detail/circumnavigate__struct.h"

// Struct defined in action/Circumnavigate in the package action_package.
typedef struct action_package__action__Circumnavigate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_package__action__Circumnavigate_Feedback feedback;
} action_package__action__Circumnavigate_FeedbackMessage;

// Struct for a sequence of action_package__action__Circumnavigate_FeedbackMessage.
typedef struct action_package__action__Circumnavigate_FeedbackMessage__Sequence
{
  action_package__action__Circumnavigate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__Circumnavigate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_PACKAGE__ACTION__DETAIL__CIRCUMNAVIGATE__STRUCT_H_
