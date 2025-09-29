# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robomaster_msgs:msg/Detection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Detection(type):
    """Metaclass of message 'Detection'."""

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
                'robomaster_msgs.msg.Detection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection

            from robomaster_msgs.msg import DetectedGesture
            if DetectedGesture.__class__._TYPE_SUPPORT is None:
                DetectedGesture.__class__.__import_type_support__()

            from robomaster_msgs.msg import DetectedLine
            if DetectedLine.__class__._TYPE_SUPPORT is None:
                DetectedLine.__class__.__import_type_support__()

            from robomaster_msgs.msg import DetectedMarker
            if DetectedMarker.__class__._TYPE_SUPPORT is None:
                DetectedMarker.__class__.__import_type_support__()

            from robomaster_msgs.msg import DetectedPerson
            if DetectedPerson.__class__._TYPE_SUPPORT is None:
                DetectedPerson.__class__.__import_type_support__()

            from robomaster_msgs.msg import DetectedRobot
            if DetectedRobot.__class__._TYPE_SUPPORT is None:
                DetectedRobot.__class__.__import_type_support__()

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


class Detection(metaclass=Metaclass_Detection):
    """Message class 'Detection'."""

    __slots__ = [
        '_header',
        '_people',
        '_robots',
        '_gestures',
        '_lines',
        '_markers',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'people': 'sequence<robomaster_msgs/DetectedPerson>',
        'robots': 'sequence<robomaster_msgs/DetectedRobot>',
        'gestures': 'sequence<robomaster_msgs/DetectedGesture>',
        'lines': 'sequence<robomaster_msgs/DetectedLine>',
        'markers': 'sequence<robomaster_msgs/DetectedMarker>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['robomaster_msgs', 'msg'], 'DetectedPerson')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['robomaster_msgs', 'msg'], 'DetectedRobot')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['robomaster_msgs', 'msg'], 'DetectedGesture')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['robomaster_msgs', 'msg'], 'DetectedLine')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['robomaster_msgs', 'msg'], 'DetectedMarker')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.people = kwargs.get('people', [])
        self.robots = kwargs.get('robots', [])
        self.gestures = kwargs.get('gestures', [])
        self.lines = kwargs.get('lines', [])
        self.markers = kwargs.get('markers', [])

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
        if self.people != other.people:
            return False
        if self.robots != other.robots:
            return False
        if self.gestures != other.gestures:
            return False
        if self.lines != other.lines:
            return False
        if self.markers != other.markers:
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
    def people(self):
        """Message field 'people'."""
        return self._people

    @people.setter
    def people(self, value):
        if __debug__:
            from robomaster_msgs.msg import DetectedPerson
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
                 all(isinstance(v, DetectedPerson) for v in value) and
                 True), \
                "The 'people' field must be a set or sequence and each value of type 'DetectedPerson'"
        self._people = value

    @builtins.property
    def robots(self):
        """Message field 'robots'."""
        return self._robots

    @robots.setter
    def robots(self, value):
        if __debug__:
            from robomaster_msgs.msg import DetectedRobot
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
                 all(isinstance(v, DetectedRobot) for v in value) and
                 True), \
                "The 'robots' field must be a set or sequence and each value of type 'DetectedRobot'"
        self._robots = value

    @builtins.property
    def gestures(self):
        """Message field 'gestures'."""
        return self._gestures

    @gestures.setter
    def gestures(self, value):
        if __debug__:
            from robomaster_msgs.msg import DetectedGesture
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
                 all(isinstance(v, DetectedGesture) for v in value) and
                 True), \
                "The 'gestures' field must be a set or sequence and each value of type 'DetectedGesture'"
        self._gestures = value

    @builtins.property
    def lines(self):
        """Message field 'lines'."""
        return self._lines

    @lines.setter
    def lines(self, value):
        if __debug__:
            from robomaster_msgs.msg import DetectedLine
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
                 all(isinstance(v, DetectedLine) for v in value) and
                 True), \
                "The 'lines' field must be a set or sequence and each value of type 'DetectedLine'"
        self._lines = value

    @builtins.property
    def markers(self):
        """Message field 'markers'."""
        return self._markers

    @markers.setter
    def markers(self, value):
        if __debug__:
            from robomaster_msgs.msg import DetectedMarker
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
                 all(isinstance(v, DetectedMarker) for v in value) and
                 True), \
                "The 'markers' field must be a set or sequence and each value of type 'DetectedMarker'"
        self._markers = value
