// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VteAidSource3d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_IDLE'.
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_IDLE = 0
};

/// Constant 'STATUS_FUSED_CURRENT'.
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_FUSED_CURRENT = 1
};

/// Constant 'STATUS_FUSED_OOSM'.
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_FUSED_OOSM = 2
};

/// Constant 'STATUS_REJECT_NIS'.
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_NIS = 3
};

/// Constant 'STATUS_REJECT_COV'.
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_COV = 4
};

/// Constant 'STATUS_REJECT_TOO_OLD'.
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_TOO_OLD = 5
};

/// Constant 'STATUS_REJECT_TOO_NEW'.
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_TOO_NEW = 6
};

/// Constant 'STATUS_REJECT_STALE'.
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_STALE = 7
};

/// Constant 'STATUS_REJECT_EMPTY'.
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_EMPTY = 8
};

// Struct defined in msg/VteAidSource3d in the package px4_msgs.
typedef struct px4_msgs__msg__VteAidSource3d
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  uint64_t time_last_predict;
  float observation[3];
  float observation_variance[3];
  float innovation[3];
  float innovation_variance[3];
  float test_ratio[3];
  uint8_t fusion_status[3];
  float time_since_meas_ms;
  uint8_t history_steps;
} px4_msgs__msg__VteAidSource3d;

// Struct for a sequence of px4_msgs__msg__VteAidSource3d.
typedef struct px4_msgs__msg__VteAidSource3d__Sequence
{
  px4_msgs__msg__VteAidSource3d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VteAidSource3d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__STRUCT_H_
