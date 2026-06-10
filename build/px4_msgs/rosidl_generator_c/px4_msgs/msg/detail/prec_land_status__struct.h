// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/PrecLandStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PREC_LAND_STATE_STOPPED'.
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_STOPPED = 0
};

/// Constant 'PREC_LAND_STATE_START'.
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_START = 1
};

/// Constant 'PREC_LAND_STATE_HORIZONTAL'.
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_HORIZONTAL = 2
};

/// Constant 'PREC_LAND_STATE_DESCEND'.
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_DESCEND = 3
};

/// Constant 'PREC_LAND_STATE_FINAL'.
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_FINAL = 4
};

/// Constant 'PREC_LAND_STATE_SEARCH'.
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_SEARCH = 5
};

/// Constant 'PREC_LAND_STATE_FALLBACK'.
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_FALLBACK = 6
};

/// Constant 'PREC_LAND_STATE_DONE'.
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_DONE = 7
};

// Struct defined in msg/PrecLandStatus in the package px4_msgs.
typedef struct px4_msgs__msg__PrecLandStatus
{
  uint64_t timestamp;
  uint8_t state;
} px4_msgs__msg__PrecLandStatus;

// Struct for a sequence of px4_msgs__msg__PrecLandStatus.
typedef struct px4_msgs__msg__PrecLandStatus__Sequence
{
  px4_msgs__msg__PrecLandStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__PrecLandStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__STRUCT_H_
