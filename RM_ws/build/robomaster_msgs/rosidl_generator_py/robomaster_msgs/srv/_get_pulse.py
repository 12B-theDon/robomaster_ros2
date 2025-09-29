# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robomaster_msgs:srv/GetPulse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPulse_Request(type):
    """Metaclass of message 'GetPulse_Request'."""

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
                'robomaster_msgs.srv.GetPulse_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_pulse__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_pulse__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_pulse__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_pulse__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_pulse__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPulse_Request(metaclass=Metaclass_GetPulse_Request):
    """Message class 'GetPulse_Request'."""

    __slots__ = [
        '_id',
        '_port',
    ]

    _fields_and_field_types = {
        'id': 'uint8',
        'port': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.port = kwargs.get('port', int())

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
        if self.id != other.id:
            return False
        if self.port != other.port:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def port(self):
        """Message field 'port'."""
        return self._port

    @port.setter
    def port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'port' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'port' field must be an unsigned integer in [0, 255]"
        self._port = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPulse_Response(type):
    """Metaclass of message 'GetPulse_Response'."""

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
                'robomaster_msgs.srv.GetPulse_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_pulse__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_pulse__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_pulse__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_pulse__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_pulse__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPulse_Response(metaclass=Metaclass_GetPulse_Response):
    """Message class 'GetPulse_Response'."""

    __slots__ = [
        '_valid',
        '_time_ms',
    ]

    _fields_and_field_types = {
        'valid': 'boolean',
        'time_ms': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.valid = kwargs.get('valid', bool())
        self.time_ms = kwargs.get('time_ms', int())

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
        if self.valid != other.valid:
            return False
        if self.time_ms != other.time_ms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value

    @builtins.property
    def time_ms(self):
        """Message field 'time_ms'."""
        return self._time_ms

    @time_ms.setter
    def time_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_ms' field must be an unsigned integer in [0, 4294967295]"
        self._time_ms = value


class Metaclass_GetPulse(type):
    """Metaclass of service 'GetPulse'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robomaster_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robomaster_msgs.srv.GetPulse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_pulse

            from robomaster_msgs.srv import _get_pulse
            if _get_pulse.Metaclass_GetPulse_Request._TYPE_SUPPORT is None:
                _get_pulse.Metaclass_GetPulse_Request.__import_type_support__()
            if _get_pulse.Metaclass_GetPulse_Response._TYPE_SUPPORT is None:
                _get_pulse.Metaclass_GetPulse_Response.__import_type_support__()


class GetPulse(metaclass=Metaclass_GetPulse):
    from robomaster_msgs.srv._get_pulse import GetPulse_Request as Request
    from robomaster_msgs.srv._get_pulse import GetPulse_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
