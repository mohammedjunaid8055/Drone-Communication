// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEVICE_TYPE_GENERIC'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_GENERIC = 0
};

/// Constant 'DEVICE_TYPE_AIRSPEED'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_AIRSPEED = 1
};

/// Constant 'DEVICE_TYPE_ESC'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_ESC = 2
};

/// Constant 'DEVICE_TYPE_SERVO'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_SERVO = 3
};

/// Constant 'DEVICE_TYPE_GPS'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_GPS = 4
};

/// Constant 'DEVICE_TYPE_MAGNETOMETER'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_MAGNETOMETER = 5
};

/// Constant 'DEVICE_TYPE_PARACHUTE'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_PARACHUTE = 6
};

/// Constant 'DEVICE_TYPE_RANGEFINDER'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_RANGEFINDER = 7
};

/// Constant 'DEVICE_TYPE_WINCH'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_WINCH = 8
};

/// Constant 'DEVICE_TYPE_BAROMETER'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_BAROMETER = 9
};

/// Constant 'DEVICE_TYPE_OPTICAL_FLOW'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_OPTICAL_FLOW = 10
};

/// Constant 'DEVICE_TYPE_ACCELEROMETER'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_ACCELEROMETER = 11
};

/// Constant 'DEVICE_TYPE_GYROSCOPE'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_GYROSCOPE = 12
};

/// Constant 'DEVICE_TYPE_DIFFERENTIAL_PRESSURE'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_DIFFERENTIAL_PRESSURE = 13
};

/// Constant 'DEVICE_TYPE_BATTERY'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_BATTERY = 14
};

/// Constant 'DEVICE_TYPE_HYGROMETER'.
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_HYGROMETER = 15
};

// Struct defined in msg/DeviceInformation in the package px4_msgs.
typedef struct px4_msgs__msg__DeviceInformation
{
  uint64_t timestamp;
  uint8_t device_type;
  uint8_t name[80];
  uint32_t device_id;
  uint8_t firmware_version[24];
  uint8_t hardware_version[24];
  uint8_t serial_number[33];
} px4_msgs__msg__DeviceInformation;

// Struct for a sequence of px4_msgs__msg__DeviceInformation.
typedef struct px4_msgs__msg__DeviceInformation__Sequence
{
  px4_msgs__msg__DeviceInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DeviceInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__STRUCT_H_
