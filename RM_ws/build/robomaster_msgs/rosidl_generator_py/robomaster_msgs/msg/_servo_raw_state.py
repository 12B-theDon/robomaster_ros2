# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robomaster_msgs:msg/ServoRawState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'value'
# Member 'speed'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServoRawState(type):
    """Metaclass of message 'ServoRawState'."""

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
            module = import_type_support('robomaster_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robomaster_msgs.msg.ServoRawState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__servo_raw_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__servo_raw_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__servo_raw_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__servo_raw_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__servo_raw_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServoRawState(metaclass=Metaclass_ServoRawState):
    """Message class 'ServoRawState'."""

    __slots__ = [
        '_header',
        '_valid',
        '_value',
        '_speed',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'valid': 'boolean[4]',
        'value': 'int32[4]',
        'speed': 'int32[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.valid = kwargs.get(
            'valid',
            [bool() for x in range(4)]
        )
        if 'value' not in kwargs:
            self.value = numpy.zeros(4, dtype=numpy.int32)
        else:
            self.value = numpy.array(kwargs.get('value'), dtype=numpy.int32)
            assert self.value.shape == (4, )
        if 'speed' not in kwargs:
            self.speed = numpy.zeros(4, dtype=numpy.int32)
        else:
            self.speed = numpy.array(kwargs.get('speed'), dtype=numpy.int32)
            assert self.speed.shape == (4, )

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
        if self.header != other.header:
            return False
        if self.valid != other.valid:
            return False
        if any(self.value != other.value):
            return False
        if any(self.speed != other.speed):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
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
                 len(value) == 4 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'valid' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._valid = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'value' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 4, \
                "The 'value' numpy.ndarray() must have a size of 4"
            self._value = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'value' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._value = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'speed' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 4, \
                "The 'speed' numpy.ndarray() must have a size of 4"
            self._speed = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'speed' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._speed = numpy.array(value, dtype=numpy.int32)
