# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robomaster_msgs:msg/ArmorHit.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmorHit(type):
    """Metaclass of message 'ArmorHit'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BOTTOM_BACK': 1,
        'BOTTOM_FRONT': 2,
        'BOTTOM_LEFT': 4,
        'BOTTOM_RIGHT': 8,
        'TOP_LEFT': 16,
        'TOP_RIGHT': 32,
        'COLLISION': 0,
        'IR': 1,
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
                'robomaster_msgs.msg.ArmorHit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__armor_hit
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__armor_hit
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__armor_hit
            cls._TYPE_SUPPORT = module.type_support_msg__msg__armor_hit
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__armor_hit

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BOTTOM_BACK': cls.__constants['BOTTOM_BACK'],
            'BOTTOM_FRONT': cls.__constants['BOTTOM_FRONT'],
            'BOTTOM_LEFT': cls.__constants['BOTTOM_LEFT'],
            'BOTTOM_RIGHT': cls.__constants['BOTTOM_RIGHT'],
            'TOP_LEFT': cls.__constants['TOP_LEFT'],
            'TOP_RIGHT': cls.__constants['TOP_RIGHT'],
            'COLLISION': cls.__constants['COLLISION'],
            'IR': cls.__constants['IR'],
        }

    @property
    def BOTTOM_BACK(self):
        """Message constant 'BOTTOM_BACK'."""
        return Metaclass_ArmorHit.__constants['BOTTOM_BACK']

    @property
    def BOTTOM_FRONT(self):
        """Message constant 'BOTTOM_FRONT'."""
        return Metaclass_ArmorHit.__constants['BOTTOM_FRONT']

    @property
    def BOTTOM_LEFT(self):
        """Message constant 'BOTTOM_LEFT'."""
        return Metaclass_ArmorHit.__constants['BOTTOM_LEFT']

    @property
    def BOTTOM_RIGHT(self):
        """Message constant 'BOTTOM_RIGHT'."""
        return Metaclass_ArmorHit.__constants['BOTTOM_RIGHT']

    @property
    def TOP_LEFT(self):
        """Message constant 'TOP_LEFT'."""
        return Metaclass_ArmorHit.__constants['TOP_LEFT']

    @property
    def TOP_RIGHT(self):
        """Message constant 'TOP_RIGHT'."""
        return Metaclass_ArmorHit.__constants['TOP_RIGHT']

    @property
    def COLLISION(self):
        """Message constant 'COLLISION'."""
        return Metaclass_ArmorHit.__constants['COLLISION']

    @property
    def IR(self):
        """Message constant 'IR'."""
        return Metaclass_ArmorHit.__constants['IR']


class ArmorHit(metaclass=Metaclass_ArmorHit):
    """
    Message class 'ArmorHit'.

    Constants:
      BOTTOM_BACK
      BOTTOM_FRONT
      BOTTOM_LEFT
      BOTTOM_RIGHT
      TOP_LEFT
      TOP_RIGHT
      COLLISION
      IR
    """

    __slots__ = [
        '_header',
        '_type',
        '_location',
        '_level',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'type': 'uint8',
        'location': 'uint8',
        'level': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.type = kwargs.get('type', int())
        self.location = kwargs.get('location', int())
        self.level = kwargs.get('level', int())

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
        if self.type != other.type:
            return False
        if self.location != other.location:
            return False
        if self.level != other.level:
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

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'location' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'location' field must be an unsigned integer in [0, 255]"
        self._location = value

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'level' field must be an unsigned integer in [0, 65535]"
        self._level = value
