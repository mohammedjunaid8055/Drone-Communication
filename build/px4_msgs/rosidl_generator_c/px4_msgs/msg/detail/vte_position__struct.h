// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VtePosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_POSITION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VTE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VtePosition in the package px4_msgs.
typedef struct px4_msgs__msg__VtePosition
{
  uint64_t timestamp;
  bool rel_pos_valid;
  bool rel_vel_valid;
  float rel_pos[3];
  float vel_uav[3];
  float vel_target[3];
  float bias[3];
  float acc_target[3];
  float cov_rel_pos[3];
  float cov_vel_uav[3];
  float cov_bias[3];
  float cov_vel_target[3];
  float cov_acc_target[3];
} px4_msgs__msg__VtePosition;

// Struct for a sequence of px4_msgs__msg__VtePosition.
typedef struct px4_msgs__msg__VtePosition__Sequence
{
  px4_msgs__msg__VtePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VtePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VTE_POSITION__STRUCT_H_
