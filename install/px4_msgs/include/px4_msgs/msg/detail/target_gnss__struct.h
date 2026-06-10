// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TargetGnss.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TARGET_GNSS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TARGET_GNSS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TargetGnss in the package px4_msgs.
typedef struct px4_msgs__msg__TargetGnss
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  double latitude_deg;
  double longitude_deg;
  float altitude_msl_m;
  float eph;
  float epv;
  bool abs_pos_updated;
  float vel_n_m_s;
  float vel_e_m_s;
  float vel_d_m_s;
  float s_acc_m_s;
  bool vel_ned_updated;
} px4_msgs__msg__TargetGnss;

// Struct for a sequence of px4_msgs__msg__TargetGnss.
typedef struct px4_msgs__msg__TargetGnss__Sequence
{
  px4_msgs__msg__TargetGnss * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TargetGnss__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TARGET_GNSS__STRUCT_H_
