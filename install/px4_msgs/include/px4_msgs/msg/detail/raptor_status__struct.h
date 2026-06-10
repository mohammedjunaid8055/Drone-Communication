// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RaptorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__STRUCT_H_

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
  px4_msgs__msg__RaptorStatus__MESSAGE_VERSION = 0ul
};

/// Constant 'EXIT_REASON_NONE'.
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_NONE = 0
};

/// Constant 'EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE'.
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE = 1
};

/// Constant 'EXIT_REASON_NOT_ALL_OBSERVATIONS_SET'.
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_NOT_ALL_OBSERVATIONS_SET = 2
};

/// Constant 'EXIT_REASON_ANGULAR_VELOCITY_STALE'.
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_ANGULAR_VELOCITY_STALE = 3
};

/// Constant 'EXIT_REASON_LOCAL_POSITION_STALE'.
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_LOCAL_POSITION_STALE = 4
};

/// Constant 'EXIT_REASON_ATTITUDE_STALE'.
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_ATTITUDE_STALE = 5
};

/// Constant 'EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL'.
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL = 6
};

// Struct defined in msg/RaptorStatus in the package px4_msgs.
typedef struct px4_msgs__msg__RaptorStatus
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  bool subscription_update_angular_velocity;
  bool subscription_update_local_position;
  bool subscription_update_attitude;
  bool subscription_update_trajectory_setpoint;
  bool subscription_update_vehicle_status;
  uint8_t exit_reason;
  uint32_t timestamp_last_vehicle_angular_velocity;
  uint32_t timestamp_last_vehicle_local_position;
  uint32_t timestamp_last_vehicle_attitude;
  uint32_t timestamp_last_trajectory_setpoint;
  bool vehicle_angular_velocity_stale;
  bool vehicle_local_position_stale;
  bool vehicle_attitude_stale;
  bool trajectory_setpoint_stale;
  bool active;
  uint8_t substep;
  float control_interval;
  float trajectory_setpoint_dt_mean;
  float trajectory_setpoint_dt_max;
  float trajectory_setpoint_dt_max_since_activation;
  float internal_reference_position[3];
  float internal_reference_linear_velocity[3];
} px4_msgs__msg__RaptorStatus;

// Struct for a sequence of px4_msgs__msg__RaptorStatus.
typedef struct px4_msgs__msg__RaptorStatus__Sequence
{
  px4_msgs__msg__RaptorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RaptorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__STRUCT_H_
