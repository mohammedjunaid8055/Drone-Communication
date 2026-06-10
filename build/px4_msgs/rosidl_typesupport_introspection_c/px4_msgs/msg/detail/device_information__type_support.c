// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/DeviceInformation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/device_information__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/device_information__functions.h"
#include "px4_msgs/msg/detail/device_information__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__DeviceInformation__init(message_memory);
}

void DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_fini_function(void * message_memory)
{
  px4_msgs__msg__DeviceInformation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__DeviceInformation, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__DeviceInformation, device_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    80,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__DeviceInformation, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__DeviceInformation, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "firmware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    24,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__DeviceInformation, firmware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hardware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    24,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__DeviceInformation, hardware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    33,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__DeviceInformation, serial_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_message_members = {
  "px4_msgs__msg",  // message namespace
  "DeviceInformation",  // message name
  7,  // number of fields
  sizeof(px4_msgs__msg__DeviceInformation),
  DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_message_member_array,  // message members
  DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_init_function,  // function to initialize message memory (memory has to be allocated)
  DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_message_type_support_handle = {
  0,
  &DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, DeviceInformation)() {
  if (!DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_message_type_support_handle.typesupport_identifier) {
    DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DeviceInformation__rosidl_typesupport_introspection_c__DeviceInformation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
