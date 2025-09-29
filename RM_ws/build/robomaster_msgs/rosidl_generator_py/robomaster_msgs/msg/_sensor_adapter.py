# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robomaster_msgs:msg/SensorAdapter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'io'
# Member 'adc'
# Member 'port'
# Member 'id'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorAdapter(type):
    """Metaclass of message 'SensorAdapter'."""

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
                'robomaster_msgs.msg.SensorAdapter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_adapter
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_adapter
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_adapter
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_adapter
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_adapter

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PORT__DEFAULT': numpy.array((1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, ), dtype=numpy.uint8),
            'ID__DEFAULT': numpy.array((1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, ), dtype=numpy.uint8),
        }

    @property
    def PORT__DEFAULT(cls):
        """Return default value for message field 'port'."""
        return numpy.array((1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, ), dtype=numpy.uint8)

    @property
    def ID__DEFAULT(cls):
        """Return default value for message field 'id'."""
        return numpy.array((1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, ), dtype=numpy.uint8)


class SensorAdapter(metaclass=Metaclass_SensorAdapter):
    """Message class 'SensorAdapter'."""

    __slots__ = [
        '_header',
        '_io',
        '_adc',
        '_port',
        '_id',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'io': 'uint8[12]',
        'adc': 'int16[12]',
        'port': 'uint8[12]',
        'id': 'uint8[12]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        if 'io' not in kwargs:
            self.io = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.io = numpy.array(kwargs.get('io'), dtype=numpy.uint8)
            assert self.io.shape == (12, )
        if 'adc' not in kwargs:
            self.adc = numpy.zeros(12, dtype=numpy.int16)
        else:
            self.adc = numpy.array(kwargs.get('adc'), dtype=numpy.int16)
            assert self.adc.shape == (12, )
        self.port = kwargs.get(
            'port', SensorAdapter.PORT__DEFAULT)
        self.id = kwargs.get(
            'id', SensorAdapter.ID__DEFAULT)

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
        if any(self.io != other.io):
            return False
        if any(self.adc != other.adc):
            return False
        if any(self.port != other.port):
            return False
        if any(self.id != other.id):
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
    def io(self):
        """Message field 'io'."""
        return self._io

    @io.setter
    def io(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'io' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'io' numpy.ndarray() must have a size of 12"
            self._io = value
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
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'io' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._io = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def adc(self):
        """Message field 'adc'."""
        return self._adc

    @adc.setter
    def adc(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'adc' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 12, \
                "The 'adc' numpy.ndarray() must have a size of 12"
            self._adc = value
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
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'adc' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-32768, 32767]"
        self._adc = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def port(self):
        """Message field 'port'."""
        return self._port

    @port.setter
    def port(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'port' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'port' numpy.ndarray() must have a size of 12"
            self._port = value
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
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'port' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._port = numpy.array(value, dtype=numpy.uint8)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'id' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'id' numpy.ndarray() must have a size of 12"
            self._id = value
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
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'id' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._id = numpy.array(value, dtype=numpy.uint8)
