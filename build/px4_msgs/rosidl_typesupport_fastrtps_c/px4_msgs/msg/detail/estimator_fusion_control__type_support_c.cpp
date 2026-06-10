// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorFusionControl.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_fusion_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_fusion_control__struct.h"
#include "px4_msgs/msg/detail/estimator_fusion_control__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _EstimatorFusionControl__ros_msg_type = px4_msgs__msg__EstimatorFusionControl;

static bool _EstimatorFusionControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorFusionControl__ros_msg_type * ros_message = static_cast<const _EstimatorFusionControl__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: gps_intended
  {
    size_t size = 2;
    auto array_ptr = ros_message->gps_intended;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: of_intended
  {
    cdr << (ros_message->of_intended ? true : false);
  }

  // Field name: ev_intended
  {
    cdr << (ros_message->ev_intended ? true : false);
  }

  // Field name: agp_intended
  {
    size_t size = 4;
    auto array_ptr = ros_message->agp_intended;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: baro_intended
  {
    cdr << (ros_message->baro_intended ? true : false);
  }

  // Field name: rng_intended
  {
    cdr << (ros_message->rng_intended ? true : false);
  }

  // Field name: mag_intended
  {
    cdr << (ros_message->mag_intended ? true : false);
  }

  // Field name: aspd_intended
  {
    cdr << (ros_message->aspd_intended ? true : false);
  }

  // Field name: rngbcn_intended
  {
    cdr << (ros_message->rngbcn_intended ? true : false);
  }

  // Field name: gps_active
  {
    size_t size = 2;
    auto array_ptr = ros_message->gps_active;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: of_active
  {
    cdr << (ros_message->of_active ? true : false);
  }

  // Field name: ev_active
  {
    cdr << (ros_message->ev_active ? true : false);
  }

  // Field name: agp_active
  {
    size_t size = 4;
    auto array_ptr = ros_message->agp_active;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: baro_active
  {
    cdr << (ros_message->baro_active ? true : false);
  }

  // Field name: rng_active
  {
    cdr << (ros_message->rng_active ? true : false);
  }

  // Field name: mag_active
  {
    cdr << (ros_message->mag_active ? true : false);
  }

  // Field name: aspd_active
  {
    cdr << (ros_message->aspd_active ? true : false);
  }

  // Field name: rngbcn_active
  {
    cdr << (ros_message->rngbcn_active ? true : false);
  }

  return true;
}

static bool _EstimatorFusionControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorFusionControl__ros_msg_type * ros_message = static_cast<_EstimatorFusionControl__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: gps_intended
  {
    size_t size = 2;
    auto array_ptr = ros_message->gps_intended;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: of_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->of_intended = tmp ? true : false;
  }

  // Field name: ev_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ev_intended = tmp ? true : false;
  }

  // Field name: agp_intended
  {
    size_t size = 4;
    auto array_ptr = ros_message->agp_intended;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: baro_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->baro_intended = tmp ? true : false;
  }

  // Field name: rng_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rng_intended = tmp ? true : false;
  }

  // Field name: mag_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mag_intended = tmp ? true : false;
  }

  // Field name: aspd_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aspd_intended = tmp ? true : false;
  }

  // Field name: rngbcn_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rngbcn_intended = tmp ? true : false;
  }

  // Field name: gps_active
  {
    size_t size = 2;
    auto array_ptr = ros_message->gps_active;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: of_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->of_active = tmp ? true : false;
  }

  // Field name: ev_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ev_active = tmp ? true : false;
  }

  // Field name: agp_active
  {
    size_t size = 4;
    auto array_ptr = ros_message->agp_active;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: baro_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->baro_active = tmp ? true : false;
  }

  // Field name: rng_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rng_active = tmp ? true : false;
  }

  // Field name: mag_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mag_active = tmp ? true : false;
  }

  // Field name: aspd_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aspd_active = tmp ? true : false;
  }

  // Field name: rngbcn_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rngbcn_active = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorFusionControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorFusionControl__ros_msg_type * ros_message = static_cast<const _EstimatorFusionControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_intended
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->gps_intended;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name of_intended
  {
    size_t item_size = sizeof(ros_message->of_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ev_intended
  {
    size_t item_size = sizeof(ros_message->ev_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name agp_intended
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->agp_intended;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_intended
  {
    size_t item_size = sizeof(ros_message->baro_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rng_intended
  {
    size_t item_size = sizeof(ros_message->rng_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_intended
  {
    size_t item_size = sizeof(ros_message->mag_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aspd_intended
  {
    size_t item_size = sizeof(ros_message->aspd_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rngbcn_intended
  {
    size_t item_size = sizeof(ros_message->rngbcn_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_active
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->gps_active;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name of_active
  {
    size_t item_size = sizeof(ros_message->of_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ev_active
  {
    size_t item_size = sizeof(ros_message->ev_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name agp_active
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->agp_active;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_active
  {
    size_t item_size = sizeof(ros_message->baro_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rng_active
  {
    size_t item_size = sizeof(ros_message->rng_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_active
  {
    size_t item_size = sizeof(ros_message->mag_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aspd_active
  {
    size_t item_size = sizeof(ros_message->aspd_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rngbcn_active
  {
    size_t item_size = sizeof(ros_message->rngbcn_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorFusionControl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorFusionControl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorFusionControl(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gps_intended
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: of_intended
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ev_intended
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: agp_intended
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: baro_intended
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rng_intended
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_intended
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aspd_intended
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rngbcn_intended
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_active
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: of_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ev_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: agp_active
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: baro_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rng_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aspd_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rngbcn_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EstimatorFusionControl__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__EstimatorFusionControl(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EstimatorFusionControl = {
  "px4_msgs::msg",
  "EstimatorFusionControl",
  _EstimatorFusionControl__cdr_serialize,
  _EstimatorFusionControl__cdr_deserialize,
  _EstimatorFusionControl__get_serialized_size,
  _EstimatorFusionControl__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorFusionControl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorFusionControl,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorFusionControl)() {
  return &_EstimatorFusionControl__type_support;
}

#if defined(__cplusplus)
}
#endif
