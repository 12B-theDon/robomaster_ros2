# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robomaster_msgs:msg/SpeakerCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeakerCommand(type):
    """Metaclass of message 'SpeakerCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONTROL_STOP': 0,
        'CONTROL_PLAY': 1,
        'CONTROL_ADD': 2,
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
                'robomaster_msgs.msg.SpeakerCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__speaker_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__speaker_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__speaker_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__speaker_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__speaker_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONTROL_STOP': cls.__constants['CONTROL_STOP'],
            'CONTROL_PLAY': cls.__constants['CONTROL_PLAY'],
            'CONTROL_ADD': cls.__constants['CONTROL_ADD'],
            'SOUND_ID__DEFAULT': 1,
            'TIMES__DEFAULT': 1,
            'FILE__DEFAULT': '',
        }

    @property
    def CONTROL_STOP(self):
        """Message constant 'CONTROL_STOP'."""
        return Metaclass_SpeakerCommand.__constants['CONTROL_STOP']

    @property
    def CONTROL_PLAY(self):
        """Message constant 'CONTROL_PLAY'."""
        return Metaclass_SpeakerCommand.__constants['CONTROL_PLAY']

    @property
    def CONTROL_ADD(self):
        """Message constant 'CONTROL_ADD'."""
        return Metaclass_SpeakerCommand.__constants['CONTROL_ADD']

    @property
    def SOUND_ID__DEFAULT(cls):
        """Return default value for message field 'sound_id'."""
        return 1

    @property
    def TIMES__DEFAULT(cls):
        """Return default value for message field 'times'."""
        return 1

    @property
    def FILE__DEFAULT(cls):
        """Return default value for message field 'file'."""
        return ''


class SpeakerCommand(metaclass=Metaclass_SpeakerCommand):
    """
    Message class 'SpeakerCommand'.

    Constants:
      CONTROL_STOP
      CONTROL_PLAY
      CONTROL_ADD
    """

    __slots__ = [
        '_sound_id',
        '_times',
        '_control',
        '_file',
    ]

    _fields_and_field_types = {
        'sound_id': 'int32',
        'times': 'uint8',
        'control': 'uint8',
        'file': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sound_id = kwargs.get(
            'sound_id', SpeakerCommand.SOUND_ID__DEFAULT)
        self.times = kwargs.get(
            'times', SpeakerCommand.TIMES__DEFAULT)
        self.control = kwargs.get('control', int())
        self.file = kwargs.get(
            'file', SpeakerCommand.FILE__DEFAULT)

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
        if self.sound_id != other.sound_id:
            return False
        if self.times != other.times:
            return False
        if self.control != other.control:
            return False
        if self.file != other.file:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sound_id(self):
        """Message field 'sound_id'."""
        return self._sound_id

    @sound_id.setter
    def sound_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sound_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sound_id' field must be an integer in [-2147483648, 2147483647]"
        self._sound_id = value

    @builtins.property
    def times(self):
        """Message field 'times'."""
        return self._times

    @times.setter
    def times(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'times' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'times' field must be an unsigned integer in [0, 255]"
        self._times = value

    @builtins.property
    def control(self):
        """Message field 'control'."""
        return self._control

    @control.setter
    def control(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'control' field must be an unsigned integer in [0, 255]"
        self._control = value

    @builtins.property
    def file(self):
        """Message field 'file'."""
        return self._file

    @file.setter
    def file(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'file' field must be of type 'str'"
        self._file = value
