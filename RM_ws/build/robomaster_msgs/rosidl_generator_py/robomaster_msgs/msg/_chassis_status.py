# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robomaster_msgs:msg/ChassisStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChassisStatus(type):
    """Metaclass of message 'ChassisStatus'."""

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
                'robomaster_msgs.msg.ChassisStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__chassis_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__chassis_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__chassis_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__chassis_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__chassis_status

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


class ChassisStatus(metaclass=Metaclass_ChassisStatus):
    """Message class 'ChassisStatus'."""

    __slots__ = [
        '_header',
        '_is_static',
        '_up_hill',
        '_down_hill',
        '_on_slope',
        '_is_pick_up',
        '_slip',
        '_impact_x',
        '_impact_y',
        '_impact_z',
        '_roll_over',
        '_hill',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'is_static': 'boolean',
        'up_hill': 'boolean',
        'down_hill': 'boolean',
        'on_slope': 'boolean',
        'is_pick_up': 'boolean',
        'slip': 'boolean',
        'impact_x': 'boolean',
        'impact_y': 'boolean',
        'impact_z': 'boolean',
        'roll_over': 'boolean',
        'hill': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.is_static = kwargs.get('is_static', bool())
        self.up_hill = kwargs.get('up_hill', bool())
        self.down_hill = kwargs.get('down_hill', bool())
        self.on_slope = kwargs.get('on_slope', bool())
        self.is_pick_up = kwargs.get('is_pick_up', bool())
        self.slip = kwargs.get('slip', bool())
        self.impact_x = kwargs.get('impact_x', bool())
        self.impact_y = kwargs.get('impact_y', bool())
        self.impact_z = kwargs.get('impact_z', bool())
        self.roll_over = kwargs.get('roll_over', bool())
        self.hill = kwargs.get('hill', bool())

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
        if self.is_static != other.is_static:
            return False
        if self.up_hill != other.up_hill:
            return False
        if self.down_hill != other.down_hill:
            return False
        if self.on_slope != other.on_slope:
            return False
        if self.is_pick_up != other.is_pick_up:
            return False
        if self.slip != other.slip:
            return False
        if self.impact_x != other.impact_x:
            return False
        if self.impact_y != other.impact_y:
            return False
        if self.impact_z != other.impact_z:
            return False
        if self.roll_over != other.roll_over:
            return False
        if self.hill != other.hill:
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
    def is_static(self):
        """Message field 'is_static'."""
        return self._is_static

    @is_static.setter
    def is_static(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_static' field must be of type 'bool'"
        self._is_static = value

    @builtins.property
    def up_hill(self):
        """Message field 'up_hill'."""
        return self._up_hill

    @up_hill.setter
    def up_hill(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'up_hill' field must be of type 'bool'"
        self._up_hill = value

    @builtins.property
    def down_hill(self):
        """Message field 'down_hill'."""
        return self._down_hill

    @down_hill.setter
    def down_hill(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'down_hill' field must be of type 'bool'"
        self._down_hill = value

    @builtins.property
    def on_slope(self):
        """Message field 'on_slope'."""
        return self._on_slope

    @on_slope.setter
    def on_slope(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'on_slope' field must be of type 'bool'"
        self._on_slope = value

    @builtins.property
    def is_pick_up(self):
        """Message field 'is_pick_up'."""
        return self._is_pick_up

    @is_pick_up.setter
    def is_pick_up(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_pick_up' field must be of type 'bool'"
        self._is_pick_up = value

    @builtins.property
    def slip(self):
        """Message field 'slip'."""
        return self._slip

    @slip.setter
    def slip(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'slip' field must be of type 'bool'"
        self._slip = value

    @builtins.property
    def impact_x(self):
        """Message field 'impact_x'."""
        return self._impact_x

    @impact_x.setter
    def impact_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'impact_x' field must be of type 'bool'"
        self._impact_x = value

    @builtins.property
    def impact_y(self):
        """Message field 'impact_y'."""
        return self._impact_y

    @impact_y.setter
    def impact_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'impact_y' field must be of type 'bool'"
        self._impact_y = value

    @builtins.property
    def impact_z(self):
        """Message field 'impact_z'."""
        return self._impact_z

    @impact_z.setter
    def impact_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'impact_z' field must be of type 'bool'"
        self._impact_z = value

    @builtins.property
    def roll_over(self):
        """Message field 'roll_over'."""
        return self._roll_over

    @roll_over.setter
    def roll_over(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'roll_over' field must be of type 'bool'"
        self._roll_over = value

    @builtins.property
    def hill(self):
        """Message field 'hill'."""
        return self._hill

    @hill.setter
    def hill(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hill' field must be of type 'bool'"
        self._hill = value
