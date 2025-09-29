# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robomaster_msgs:msg/LEDEffect.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LEDEffect(type):
    """Metaclass of message 'LEDEffect'."""

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
        'BOTTOM': 15,
        'TOP_LEFT': 16,
        'TOP_RIGHT': 32,
        'TOP': 48,
        'ALL': 63,
        'OFF': 0,
        'ON': 1,
        'BREATH': 2,
        'FLASH': 3,
        'SCROLLING': 4,
        'PULSE': 5,
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
                'robomaster_msgs.msg.LEDEffect')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__led_effect
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__led_effect
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__led_effect
            cls._TYPE_SUPPORT = module.type_support_msg__msg__led_effect
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__led_effect

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

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
            'BOTTOM': cls.__constants['BOTTOM'],
            'TOP_LEFT': cls.__constants['TOP_LEFT'],
            'TOP_RIGHT': cls.__constants['TOP_RIGHT'],
            'TOP': cls.__constants['TOP'],
            'ALL': cls.__constants['ALL'],
            'OFF': cls.__constants['OFF'],
            'ON': cls.__constants['ON'],
            'BREATH': cls.__constants['BREATH'],
            'FLASH': cls.__constants['FLASH'],
            'SCROLLING': cls.__constants['SCROLLING'],
            'PULSE': cls.__constants['PULSE'],
            'MASK__DEFAULT': 63,
            'SUBMASK__DEFAULT': 255,
            'EFFECT__DEFAULT': 1,
            'T1__DEFAULT': 1.0,
            'T2__DEFAULT': 1.0,
        }

    @property
    def BOTTOM_BACK(self):
        """Message constant 'BOTTOM_BACK'."""
        return Metaclass_LEDEffect.__constants['BOTTOM_BACK']

    @property
    def BOTTOM_FRONT(self):
        """Message constant 'BOTTOM_FRONT'."""
        return Metaclass_LEDEffect.__constants['BOTTOM_FRONT']

    @property
    def BOTTOM_LEFT(self):
        """Message constant 'BOTTOM_LEFT'."""
        return Metaclass_LEDEffect.__constants['BOTTOM_LEFT']

    @property
    def BOTTOM_RIGHT(self):
        """Message constant 'BOTTOM_RIGHT'."""
        return Metaclass_LEDEffect.__constants['BOTTOM_RIGHT']

    @property
    def BOTTOM(self):
        """Message constant 'BOTTOM'."""
        return Metaclass_LEDEffect.__constants['BOTTOM']

    @property
    def TOP_LEFT(self):
        """Message constant 'TOP_LEFT'."""
        return Metaclass_LEDEffect.__constants['TOP_LEFT']

    @property
    def TOP_RIGHT(self):
        """Message constant 'TOP_RIGHT'."""
        return Metaclass_LEDEffect.__constants['TOP_RIGHT']

    @property
    def TOP(self):
        """Message constant 'TOP'."""
        return Metaclass_LEDEffect.__constants['TOP']

    @property
    def ALL(self):
        """Message constant 'ALL'."""
        return Metaclass_LEDEffect.__constants['ALL']

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_LEDEffect.__constants['OFF']

    @property
    def ON(self):
        """Message constant 'ON'."""
        return Metaclass_LEDEffect.__constants['ON']

    @property
    def BREATH(self):
        """Message constant 'BREATH'."""
        return Metaclass_LEDEffect.__constants['BREATH']

    @property
    def FLASH(self):
        """Message constant 'FLASH'."""
        return Metaclass_LEDEffect.__constants['FLASH']

    @property
    def SCROLLING(self):
        """Message constant 'SCROLLING'."""
        return Metaclass_LEDEffect.__constants['SCROLLING']

    @property
    def PULSE(self):
        """Message constant 'PULSE'."""
        return Metaclass_LEDEffect.__constants['PULSE']

    @property
    def MASK__DEFAULT(cls):
        """Return default value for message field 'mask'."""
        return 63

    @property
    def SUBMASK__DEFAULT(cls):
        """Return default value for message field 'submask'."""
        return 255

    @property
    def EFFECT__DEFAULT(cls):
        """Return default value for message field 'effect'."""
        return 1

    @property
    def T1__DEFAULT(cls):
        """Return default value for message field 't1'."""
        return 1.0

    @property
    def T2__DEFAULT(cls):
        """Return default value for message field 't2'."""
        return 1.0


class LEDEffect(metaclass=Metaclass_LEDEffect):
    """
    Message class 'LEDEffect'.

    Constants:
      BOTTOM_BACK
      BOTTOM_FRONT
      BOTTOM_LEFT
      BOTTOM_RIGHT
      BOTTOM
      TOP_LEFT
      TOP_RIGHT
      TOP
      ALL
      OFF
      ON
      BREATH
      FLASH
      SCROLLING
      PULSE
    """

    __slots__ = [
        '_mask',
        '_submask',
        '_effect',
        '_color',
        '_t1',
        '_t2',
    ]

    _fields_and_field_types = {
        'mask': 'uint8',
        'submask': 'uint8',
        'effect': 'uint8',
        'color': 'std_msgs/ColorRGBA',
        't1': 'float',
        't2': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mask = kwargs.get(
            'mask', LEDEffect.MASK__DEFAULT)
        self.submask = kwargs.get(
            'submask', LEDEffect.SUBMASK__DEFAULT)
        self.effect = kwargs.get(
            'effect', LEDEffect.EFFECT__DEFAULT)
        from std_msgs.msg import ColorRGBA
        self.color = kwargs.get('color', ColorRGBA())
        self.t1 = kwargs.get(
            't1', LEDEffect.T1__DEFAULT)
        self.t2 = kwargs.get(
            't2', LEDEffect.T2__DEFAULT)

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
        if self.mask != other.mask:
            return False
        if self.submask != other.submask:
            return False
        if self.effect != other.effect:
            return False
        if self.color != other.color:
            return False
        if self.t1 != other.t1:
            return False
        if self.t2 != other.t2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mask(self):
        """Message field 'mask'."""
        return self._mask

    @mask.setter
    def mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mask' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mask' field must be an unsigned integer in [0, 255]"
        self._mask = value

    @builtins.property
    def submask(self):
        """Message field 'submask'."""
        return self._submask

    @submask.setter
    def submask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'submask' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'submask' field must be an unsigned integer in [0, 255]"
        self._submask = value

    @builtins.property
    def effect(self):
        """Message field 'effect'."""
        return self._effect

    @effect.setter
    def effect(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'effect' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'effect' field must be an unsigned integer in [0, 255]"
        self._effect = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'color' field must be a sub message of type 'ColorRGBA'"
        self._color = value

    @builtins.property
    def t1(self):
        """Message field 't1'."""
        return self._t1

    @t1.setter
    def t1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 't1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._t1 = value

    @builtins.property
    def t2(self):
        """Message field 't2'."""
        return self._t2

    @t2.setter
    def t2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 't2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._t2 = value
