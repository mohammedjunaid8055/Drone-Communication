// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VteBiasInitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_BIAS_INIT_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VTE_BIAS_INIT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VteBiasInitStatus in the package px4_msgs.
typedef struct px4_msgs__msg__VteBiasInitStatus
{
  uint64_t timestamp;
  float raw_bias[3];
  float filtered_bias[3];
  float delta_norm;
} px4_msgs__msg__VteBiasInitStatus;

// Struct for a sequence of px4_msgs__msg__VteBiasInitStatus.
typedef struct px4_msgs__msg__VteBiasInitStatus__Sequence
{
  px4_msgs__msg__VteBiasInitStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VteBiasInitStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VTE_BIAS_INIT_STATUS__STRUCT_H_
