# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VteAidSource3d.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'observation'
# Member 'observation_variance'
# Member 'innovation'
# Member 'innovation_variance'
# Member 'test_ratio'
# Member 'fusion_status'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VteAidSource3d(type):
    """Metaclass of message 'VteAidSource3d'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_IDLE': 0,
        'STATUS_FUSED_CURRENT': 1,
        'STATUS_FUSED_OOSM': 2,
        'STATUS_REJECT_NIS': 3,
        'STATUS_REJECT_COV': 4,
        'STATUS_REJECT_TOO_OLD': 5,
        'STATUS_REJECT_TOO_NEW': 6,
        'STATUS_REJECT_STALE': 7,
        'STATUS_REJECT_EMPTY': 8,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.VteAidSource3d')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vte_aid_source3d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vte_aid_source3d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vte_aid_source3d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vte_aid_source3d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vte_aid_source3d

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_IDLE': cls.__constants['STATUS_IDLE'],
            'STATUS_FUSED_CURRENT': cls.__constants['STATUS_FUSED_CURRENT'],
            'STATUS_FUSED_OOSM': cls.__constants['STATUS_FUSED_OOSM'],
            'STATUS_REJECT_NIS': cls.__constants['STATUS_REJECT_NIS'],
            'STATUS_REJECT_COV': cls.__constants['STATUS_REJECT_COV'],
            'STATUS_REJECT_TOO_OLD': cls.__constants['STATUS_REJECT_TOO_OLD'],
            'STATUS_REJECT_TOO_NEW': cls.__constants['STATUS_REJECT_TOO_NEW'],
            'STATUS_REJECT_STALE': cls.__constants['STATUS_REJECT_STALE'],
            'STATUS_REJECT_EMPTY': cls.__constants['STATUS_REJECT_EMPTY'],
        }

    @property
    def STATUS_IDLE(self):
        """Message constant 'STATUS_IDLE'."""
        return Metaclass_VteAidSource3d.__constants['STATUS_IDLE']

    @property
    def STATUS_FUSED_CURRENT(self):
        """Message constant 'STATUS_FUSED_CURRENT'."""
        return Metaclass_VteAidSource3d.__constants['STATUS_FUSED_CURRENT']

    @property
    def STATUS_FUSED_OOSM(self):
        """Message constant 'STATUS_FUSED_OOSM'."""
        return Metaclass_VteAidSource3d.__constants['STATUS_FUSED_OOSM']

    @property
    def STATUS_REJECT_NIS(self):
        """Message constant 'STATUS_REJECT_NIS'."""
        return Metaclass_VteAidSource3d.__constants['STATUS_REJECT_NIS']

    @property
    def STATUS_REJECT_COV(self):
        """Message constant 'STATUS_REJECT_COV'."""
        return Metaclass_VteAidSource3d.__constants['STATUS_REJECT_COV']

    @property
    def STATUS_REJECT_TOO_OLD(self):
        """Message constant 'STATUS_REJECT_TOO_OLD'."""
        return Metaclass_VteAidSource3d.__constants['STATUS_REJECT_TOO_OLD']

    @property
    def STATUS_REJECT_TOO_NEW(self):
        """Message constant 'STATUS_REJECT_TOO_NEW'."""
        return Metaclass_VteAidSource3d.__constants['STATUS_REJECT_TOO_NEW']

    @property
    def STATUS_REJECT_STALE(self):
        """Message constant 'STATUS_REJECT_STALE'."""
        return Metaclass_VteAidSource3d.__constants['STATUS_REJECT_STALE']

    @property
    def STATUS_REJECT_EMPTY(self):
        """Message constant 'STATUS_REJECT_EMPTY'."""
        return Metaclass_VteAidSource3d.__constants['STATUS_REJECT_EMPTY']


class VteAidSource3d(metaclass=Metaclass_VteAidSource3d):
    """
    Message class 'VteAidSource3d'.

    Constants:
      STATUS_IDLE
      STATUS_FUSED_CURRENT
      STATUS_FUSED_OOSM
      STATUS_REJECT_NIS
      STATUS_REJECT_COV
      STATUS_REJECT_TOO_OLD
      STATUS_REJECT_TOO_NEW
      STATUS_REJECT_STALE
      STATUS_REJECT_EMPTY
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_time_last_predict',
        '_observation',
        '_observation_variance',
        '_innovation',
        '_innovation_variance',
        '_test_ratio',
        '_fusion_status',
        '_time_since_meas_ms',
        '_history_steps',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'time_last_predict': 'uint64',
        'observation': 'float[3]',
        'observation_variance': 'float[3]',
        'innovation': 'float[3]',
        'innovation_variance': 'float[3]',
        'test_ratio': 'float[3]',
        'fusion_status': 'uint8[3]',
        'time_since_meas_ms': 'float',
        'history_steps': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.time_last_predict = kwargs.get('time_last_predict', int())
        if 'observation' not in kwargs:
            self.observation = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.observation = numpy.array(kwargs.get('observation'), dtype=numpy.float32)
            assert self.observation.shape == (3, )
        if 'observation_variance' not in kwargs:
            self.observation_variance = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.observation_variance = numpy.array(kwargs.get('observation_variance'), dtype=numpy.float32)
            assert self.observation_variance.shape == (3, )
        if 'innovation' not in kwargs:
            self.innovation = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.innovation = numpy.array(kwargs.get('innovation'), dtype=numpy.float32)
            assert self.innovation.shape == (3, )
        if 'innovation_variance' not in kwargs:
            self.innovation_variance = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.innovation_variance = numpy.array(kwargs.get('innovation_variance'), dtype=numpy.float32)
            assert self.innovation_variance.shape == (3, )
        if 'test_ratio' not in kwargs:
            self.test_ratio = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.test_ratio = numpy.array(kwargs.get('test_ratio'), dtype=numpy.float32)
            assert self.test_ratio.shape == (3, )
        if 'fusion_status' not in kwargs:
            self.fusion_status = numpy.zeros(3, dtype=numpy.uint8)
        else:
            self.fusion_status = numpy.array(kwargs.get('fusion_status'), dtype=numpy.uint8)
            assert self.fusion_status.shape == (3, )
        self.time_since_meas_ms = kwargs.get('time_since_meas_ms', float())
        self.history_steps = kwargs.get('history_steps', int())

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
        if self.timestamp != other.timestamp:
            return False
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if self.time_last_predict != other.time_last_predict:
            return False
        if all(self.observation != other.observation):
            return False
        if all(self.observation_variance != other.observation_variance):
            return False
        if all(self.innovation != other.innovation):
            return False
        if all(self.innovation_variance != other.innovation_variance):
            return False
        if all(self.test_ratio != other.test_ratio):
            return False
        if all(self.fusion_status != other.fusion_status):
            return False
        if self.time_since_meas_ms != other.time_since_meas_ms:
            return False
        if self.history_steps != other.history_steps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @property
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @property
    def time_last_predict(self):
        """Message field 'time_last_predict'."""
        return self._time_last_predict

    @time_last_predict.setter
    def time_last_predict(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_last_predict' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'time_last_predict' field must be an unsigned integer in [0, 18446744073709551615]"
        self._time_last_predict = value

    @property
    def observation(self):
        """Message field 'observation'."""
        return self._observation

    @observation.setter
    def observation(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'observation' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'observation' numpy.ndarray() must have a size of 3"
            self._observation = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'observation' field must be a set or sequence with length 3 and each value of type 'float'"
        self._observation = numpy.array(value, dtype=numpy.float32)

    @property
    def observation_variance(self):
        """Message field 'observation_variance'."""
        return self._observation_variance

    @observation_variance.setter
    def observation_variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'observation_variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'observation_variance' numpy.ndarray() must have a size of 3"
            self._observation_variance = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'observation_variance' field must be a set or sequence with length 3 and each value of type 'float'"
        self._observation_variance = numpy.array(value, dtype=numpy.float32)

    @property
    def innovation(self):
        """Message field 'innovation'."""
        return self._innovation

    @innovation.setter
    def innovation(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'innovation' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'innovation' numpy.ndarray() must have a size of 3"
            self._innovation = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'innovation' field must be a set or sequence with length 3 and each value of type 'float'"
        self._innovation = numpy.array(value, dtype=numpy.float32)

    @property
    def innovation_variance(self):
        """Message field 'innovation_variance'."""
        return self._innovation_variance

    @innovation_variance.setter
    def innovation_variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'innovation_variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'innovation_variance' numpy.ndarray() must have a size of 3"
            self._innovation_variance = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'innovation_variance' field must be a set or sequence with length 3 and each value of type 'float'"
        self._innovation_variance = numpy.array(value, dtype=numpy.float32)

    @property
    def test_ratio(self):
        """Message field 'test_ratio'."""
        return self._test_ratio

    @test_ratio.setter
    def test_ratio(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'test_ratio' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'test_ratio' numpy.ndarray() must have a size of 3"
            self._test_ratio = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'test_ratio' field must be a set or sequence with length 3 and each value of type 'float'"
        self._test_ratio = numpy.array(value, dtype=numpy.float32)

    @property
    def fusion_status(self):
        """Message field 'fusion_status'."""
        return self._fusion_status

    @fusion_status.setter
    def fusion_status(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'fusion_status' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 3, \
                "The 'fusion_status' numpy.ndarray() must have a size of 3"
            self._fusion_status = value
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'fusion_status' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._fusion_status = numpy.array(value, dtype=numpy.uint8)

    @property
    def time_since_meas_ms(self):
        """Message field 'time_since_meas_ms'."""
        return self._time_since_meas_ms

    @time_since_meas_ms.setter
    def time_since_meas_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_since_meas_ms' field must be of type 'float'"
        self._time_since_meas_ms = value

    @property
    def history_steps(self):
        """Message field 'history_steps'."""
        return self._history_steps

    @history_steps.setter
    def history_steps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'history_steps' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'history_steps' field must be an unsigned integer in [0, 255]"
        self._history_steps = value
