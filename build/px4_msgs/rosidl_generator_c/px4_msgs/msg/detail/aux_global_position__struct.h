// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/AuxGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
enum
{
  px4_msgs__msg__AuxGlobalPosition__MESSAGE_VERSION = 1ul
};

/// Constant 'SOURCE_UNKNOWN'.
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_UNKNOWN = 0
};

/// Constant 'SOURCE_GNSS'.
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_GNSS = 1
};

/// Constant 'SOURCE_VISION'.
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_VISION = 2
};

/// Constant 'SOURCE_PSEUDOLITES'.
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_PSEUDOLITES = 3
};

/// Constant 'SOURCE_TERRAIN'.
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_TERRAIN = 4
};

/// Constant 'SOURCE_MAGNETIC'.
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_MAGNETIC = 5
};

/// Constant 'SOURCE_ESTIMATOR'.
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_ESTIMATOR = 6
};

/// Constant 'SOURCE_LEO'.
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_LEO = 7
};

// Struct defined in msg/AuxGlobalPosition in the package px4_msgs.
typedef struct px4_msgs__msg__AuxGlobalPosition
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  uint8_t id;
  uint8_t source;
  double lat;
  double lon;
  float alt;
  float eph;
  float epv;
  uint8_t lat_lon_reset_counter;
} px4_msgs__msg__AuxGlobalPosition;

// Struct for a sequence of px4_msgs__msg__AuxGlobalPosition.
typedef struct px4_msgs__msg__AuxGlobalPosition__Sequence
{
  px4_msgs__msg__AuxGlobalPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__AuxGlobalPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__STRUCT_H_
