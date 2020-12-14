# generated from rosidl_generator_py/resource/_idl.py.em
# with input from action_package:action/Circumnavigate.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'ending_point'
# Member 'goal_point'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Circumnavigate_Goal(type):
    """Metaclass of message 'Circumnavigate_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__circumnavigate__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__circumnavigate__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__circumnavigate__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__circumnavigate__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__circumnavigate__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Circumnavigate_Goal(metaclass=Metaclass_Circumnavigate_Goal):
    """Message class 'Circumnavigate_Goal'."""

    __slots__ = [
        '_ending_point',
        '_goal_point',
    ]

    _fields_and_field_types = {
        'ending_point': 'sequence<float>',
        'goal_point': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ending_point = array.array('f', kwargs.get('ending_point', []))
        self.goal_point = array.array('f', kwargs.get('goal_point', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ending_point != other.ending_point:
            return False
        if self.goal_point != other.goal_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ending_point(self):
        """Message field 'ending_point'."""
        return self._ending_point

    @ending_point.setter
    def ending_point(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ending_point' array.array() must have the type code of 'f'"
            self._ending_point = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'ending_point' field must be a set or sequence and each value of type 'float'"
        self._ending_point = array.array('f', value)

    @property
    def goal_point(self):
        """Message field 'goal_point'."""
        return self._goal_point

    @goal_point.setter
    def goal_point(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'goal_point' array.array() must have the type code of 'f'"
            self._goal_point = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'goal_point' field must be a set or sequence and each value of type 'float'"
        self._goal_point = array.array('f', value)


# Import statements for member types

# Member 'closest_point'
# Member 'current_point'
# already imported above
# import array

# already imported above
# import rosidl_parser.definition


class Metaclass_Circumnavigate_Result(type):
    """Metaclass of message 'Circumnavigate_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__circumnavigate__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__circumnavigate__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__circumnavigate__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__circumnavigate__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__circumnavigate__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Circumnavigate_Result(metaclass=Metaclass_Circumnavigate_Result):
    """Message class 'Circumnavigate_Result'."""

    __slots__ = [
        '_closest_point',
        '_current_point',
    ]

    _fields_and_field_types = {
        'closest_point': 'sequence<float>',
        'current_point': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.closest_point = array.array('f', kwargs.get('closest_point', []))
        self.current_point = array.array('f', kwargs.get('current_point', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.closest_point != other.closest_point:
            return False
        if self.current_point != other.current_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def closest_point(self):
        """Message field 'closest_point'."""
        return self._closest_point

    @closest_point.setter
    def closest_point(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'closest_point' array.array() must have the type code of 'f'"
            self._closest_point = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'closest_point' field must be a set or sequence and each value of type 'float'"
        self._closest_point = array.array('f', value)

    @property
    def current_point(self):
        """Message field 'current_point'."""
        return self._current_point

    @current_point.setter
    def current_point(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'current_point' array.array() must have the type code of 'f'"
            self._current_point = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'current_point' field must be a set or sequence and each value of type 'float'"
        self._current_point = array.array('f', value)


# Import statements for member types

# Member 'current_loc'
# already imported above
# import array

# already imported above
# import rosidl_parser.definition


class Metaclass_Circumnavigate_Feedback(type):
    """Metaclass of message 'Circumnavigate_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__circumnavigate__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__circumnavigate__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__circumnavigate__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__circumnavigate__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__circumnavigate__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Circumnavigate_Feedback(metaclass=Metaclass_Circumnavigate_Feedback):
    """Message class 'Circumnavigate_Feedback'."""

    __slots__ = [
        '_current_loc',
    ]

    _fields_and_field_types = {
        'current_loc': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_loc = array.array('f', kwargs.get('current_loc', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.current_loc != other.current_loc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def current_loc(self):
        """Message field 'current_loc'."""
        return self._current_loc

    @current_loc.setter
    def current_loc(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'current_loc' array.array() must have the type code of 'f'"
            self._current_loc = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'current_loc' field must be a set or sequence and each value of type 'float'"
        self._current_loc = array.array('f', value)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Circumnavigate_SendGoal_Request(type):
    """Metaclass of message 'Circumnavigate_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__circumnavigate__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__circumnavigate__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__circumnavigate__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__circumnavigate__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__circumnavigate__send_goal__request

            from action_package.action import Circumnavigate
            if Circumnavigate.Goal.__class__._TYPE_SUPPORT is None:
                Circumnavigate.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Circumnavigate_SendGoal_Request(metaclass=Metaclass_Circumnavigate_SendGoal_Request):
    """Message class 'Circumnavigate_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'action_package/Circumnavigate_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['action_package', 'action'], 'Circumnavigate_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from action_package.action._circumnavigate import Circumnavigate_Goal
        self.goal = kwargs.get('goal', Circumnavigate_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from action_package.action._circumnavigate import Circumnavigate_Goal
            assert \
                isinstance(value, Circumnavigate_Goal), \
                "The 'goal' field must be a sub message of type 'Circumnavigate_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Circumnavigate_SendGoal_Response(type):
    """Metaclass of message 'Circumnavigate_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__circumnavigate__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__circumnavigate__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__circumnavigate__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__circumnavigate__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__circumnavigate__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Circumnavigate_SendGoal_Response(metaclass=Metaclass_Circumnavigate_SendGoal_Response):
    """Message class 'Circumnavigate_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_Circumnavigate_SendGoal(type):
    """Metaclass of service 'Circumnavigate_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__circumnavigate__send_goal

            from action_package.action import _circumnavigate
            if _circumnavigate.Metaclass_Circumnavigate_SendGoal_Request._TYPE_SUPPORT is None:
                _circumnavigate.Metaclass_Circumnavigate_SendGoal_Request.__import_type_support__()
            if _circumnavigate.Metaclass_Circumnavigate_SendGoal_Response._TYPE_SUPPORT is None:
                _circumnavigate.Metaclass_Circumnavigate_SendGoal_Response.__import_type_support__()


class Circumnavigate_SendGoal(metaclass=Metaclass_Circumnavigate_SendGoal):
    from action_package.action._circumnavigate import Circumnavigate_SendGoal_Request as Request
    from action_package.action._circumnavigate import Circumnavigate_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Circumnavigate_GetResult_Request(type):
    """Metaclass of message 'Circumnavigate_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__circumnavigate__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__circumnavigate__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__circumnavigate__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__circumnavigate__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__circumnavigate__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Circumnavigate_GetResult_Request(metaclass=Metaclass_Circumnavigate_GetResult_Request):
    """Message class 'Circumnavigate_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Circumnavigate_GetResult_Response(type):
    """Metaclass of message 'Circumnavigate_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__circumnavigate__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__circumnavigate__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__circumnavigate__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__circumnavigate__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__circumnavigate__get_result__response

            from action_package.action import Circumnavigate
            if Circumnavigate.Result.__class__._TYPE_SUPPORT is None:
                Circumnavigate.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Circumnavigate_GetResult_Response(metaclass=Metaclass_Circumnavigate_GetResult_Response):
    """Message class 'Circumnavigate_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'action_package/Circumnavigate_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['action_package', 'action'], 'Circumnavigate_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from action_package.action._circumnavigate import Circumnavigate_Result
        self.result = kwargs.get('result', Circumnavigate_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from action_package.action._circumnavigate import Circumnavigate_Result
            assert \
                isinstance(value, Circumnavigate_Result), \
                "The 'result' field must be a sub message of type 'Circumnavigate_Result'"
        self._result = value


class Metaclass_Circumnavigate_GetResult(type):
    """Metaclass of service 'Circumnavigate_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__circumnavigate__get_result

            from action_package.action import _circumnavigate
            if _circumnavigate.Metaclass_Circumnavigate_GetResult_Request._TYPE_SUPPORT is None:
                _circumnavigate.Metaclass_Circumnavigate_GetResult_Request.__import_type_support__()
            if _circumnavigate.Metaclass_Circumnavigate_GetResult_Response._TYPE_SUPPORT is None:
                _circumnavigate.Metaclass_Circumnavigate_GetResult_Response.__import_type_support__()


class Circumnavigate_GetResult(metaclass=Metaclass_Circumnavigate_GetResult):
    from action_package.action._circumnavigate import Circumnavigate_GetResult_Request as Request
    from action_package.action._circumnavigate import Circumnavigate_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Circumnavigate_FeedbackMessage(type):
    """Metaclass of message 'Circumnavigate_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__circumnavigate__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__circumnavigate__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__circumnavigate__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__circumnavigate__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__circumnavigate__feedback_message

            from action_package.action import Circumnavigate
            if Circumnavigate.Feedback.__class__._TYPE_SUPPORT is None:
                Circumnavigate.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Circumnavigate_FeedbackMessage(metaclass=Metaclass_Circumnavigate_FeedbackMessage):
    """Message class 'Circumnavigate_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'action_package/Circumnavigate_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['action_package', 'action'], 'Circumnavigate_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from action_package.action._circumnavigate import Circumnavigate_Feedback
        self.feedback = kwargs.get('feedback', Circumnavigate_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from action_package.action._circumnavigate import Circumnavigate_Feedback
            assert \
                isinstance(value, Circumnavigate_Feedback), \
                "The 'feedback' field must be a sub message of type 'Circumnavigate_Feedback'"
        self._feedback = value


class Metaclass_Circumnavigate(type):
    """Metaclass of action 'Circumnavigate'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_package.action.Circumnavigate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__circumnavigate

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from action_package.action import _circumnavigate
            if _circumnavigate.Metaclass_Circumnavigate_SendGoal._TYPE_SUPPORT is None:
                _circumnavigate.Metaclass_Circumnavigate_SendGoal.__import_type_support__()
            if _circumnavigate.Metaclass_Circumnavigate_GetResult._TYPE_SUPPORT is None:
                _circumnavigate.Metaclass_Circumnavigate_GetResult.__import_type_support__()
            if _circumnavigate.Metaclass_Circumnavigate_FeedbackMessage._TYPE_SUPPORT is None:
                _circumnavigate.Metaclass_Circumnavigate_FeedbackMessage.__import_type_support__()


class Circumnavigate(metaclass=Metaclass_Circumnavigate):

    # The goal message defined in the action definition.
    from action_package.action._circumnavigate import Circumnavigate_Goal as Goal
    # The result message defined in the action definition.
    from action_package.action._circumnavigate import Circumnavigate_Result as Result
    # The feedback message defined in the action definition.
    from action_package.action._circumnavigate import Circumnavigate_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from action_package.action._circumnavigate import Circumnavigate_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from action_package.action._circumnavigate import Circumnavigate_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from action_package.action._circumnavigate import Circumnavigate_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
