// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RaptorInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__STRUCT_H_

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
  px4_msgs__msg__RaptorInput__MESSAGE_VERSION = 0ul
};

/// Constant 'ACTION_DIM'.
enum
{
  px4_msgs__msg__RaptorInput__ACTION_DIM = 4
};

// Struct defined in msg/RaptorInput in the package px4_msgs.
typedef struct px4_msgs__msg__RaptorInput
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  bool active;
  float position[3];
  float orientation[4];
  float linear_velocity[3];
  float angular_velocity[3];
  float previous_action[4];
} px4_msgs__msg__RaptorInput;

// Struct for a sequence of px4_msgs__msg__RaptorInput.
typedef struct px4_msgs__msg__RaptorInput__Sequence
{
  px4_msgs__msg__RaptorInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RaptorInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__STRUCT_H_
