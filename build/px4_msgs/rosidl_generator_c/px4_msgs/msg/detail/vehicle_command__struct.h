// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleCommand.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__STRUCT_H_

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
  px4_msgs__msg__VehicleCommand__MESSAGE_VERSION = 0ul
};

/// Constant 'VEHICLE_CMD_CUSTOM_0'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CUSTOM_0 = 0
};

/// Constant 'VEHICLE_CMD_CUSTOM_1'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CUSTOM_1 = 1
};

/// Constant 'VEHICLE_CMD_CUSTOM_2'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CUSTOM_2 = 2
};

/// Constant 'VEHICLE_CMD_NAV_WAYPOINT'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_WAYPOINT = 16
};

/// Constant 'VEHICLE_CMD_NAV_LOITER_UNLIM'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_LOITER_UNLIM = 17
};

/// Constant 'VEHICLE_CMD_NAV_LOITER_TURNS'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_LOITER_TURNS = 18
};

/// Constant 'VEHICLE_CMD_NAV_LOITER_TIME'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_LOITER_TIME = 19
};

/// Constant 'VEHICLE_CMD_NAV_RETURN_TO_LAUNCH'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_RETURN_TO_LAUNCH = 20
};

/// Constant 'VEHICLE_CMD_NAV_LAND'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_LAND = 21
};

/// Constant 'VEHICLE_CMD_NAV_TAKEOFF'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_TAKEOFF = 22
};

/// Constant 'VEHICLE_CMD_NAV_PRECLAND'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_PRECLAND = 23
};

/// Constant 'VEHICLE_CMD_DO_ORBIT'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_ORBIT = 34
};

/// Constant 'VEHICLE_CMD_DO_FIGUREEIGHT'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_FIGUREEIGHT = 35
};

/// Constant 'VEHICLE_CMD_NAV_ROI'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_ROI = 80
};

/// Constant 'VEHICLE_CMD_NAV_PATHPLANNING'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_PATHPLANNING = 81
};

/// Constant 'VEHICLE_CMD_NAV_VTOL_TAKEOFF'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_VTOL_TAKEOFF = 84
};

/// Constant 'VEHICLE_CMD_NAV_VTOL_LAND'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_VTOL_LAND = 85
};

/// Constant 'VEHICLE_CMD_NAV_GUIDED_LIMITS'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_GUIDED_LIMITS = 90
};

/// Constant 'VEHICLE_CMD_NAV_GUIDED_MASTER'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_GUIDED_MASTER = 91
};

/// Constant 'VEHICLE_CMD_NAV_DELAY'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_DELAY = 93
};

/// Constant 'VEHICLE_CMD_NAV_LAST'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_LAST = 95
};

/// Constant 'VEHICLE_CMD_CONDITION_DELAY'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_DELAY = 112
};

/// Constant 'VEHICLE_CMD_CONDITION_CHANGE_ALT'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_CHANGE_ALT = 113
};

/// Constant 'VEHICLE_CMD_CONDITION_DISTANCE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_DISTANCE = 114
};

/// Constant 'VEHICLE_CMD_CONDITION_YAW'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_YAW = 115
};

/// Constant 'VEHICLE_CMD_CONDITION_LAST'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_LAST = 159
};

/// Constant 'VEHICLE_CMD_CONDITION_GATE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_GATE = 4501
};

/// Constant 'VEHICLE_CMD_DO_SET_MODE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_MODE = 176
};

/// Constant 'VEHICLE_CMD_DO_JUMP'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_JUMP = 177
};

/// Constant 'VEHICLE_CMD_DO_CHANGE_SPEED'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_CHANGE_SPEED = 178
};

/// Constant 'VEHICLE_CMD_DO_SET_HOME'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_HOME = 179
};

/// Constant 'VEHICLE_CMD_DO_SET_PARAMETER'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_PARAMETER = 180
};

/// Constant 'VEHICLE_CMD_DO_SET_RELAY'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_RELAY = 181
};

/// Constant 'VEHICLE_CMD_DO_REPEAT_RELAY'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_REPEAT_RELAY = 182
};

/// Constant 'VEHICLE_CMD_DO_REPEAT_SERVO'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_REPEAT_SERVO = 184
};

/// Constant 'VEHICLE_CMD_DO_FLIGHTTERMINATION'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_FLIGHTTERMINATION = 185
};

/// Constant 'VEHICLE_CMD_DO_CHANGE_ALTITUDE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_CHANGE_ALTITUDE = 186
};

/// Constant 'VEHICLE_CMD_DO_SET_ACTUATOR'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_ACTUATOR = 187
};

/// Constant 'VEHICLE_CMD_DO_LAND_START'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_LAND_START = 189
};

/// Constant 'VEHICLE_CMD_DO_GO_AROUND'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GO_AROUND = 191
};

/// Constant 'VEHICLE_CMD_DO_REPOSITION'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_REPOSITION = 192
};

/// Constant 'VEHICLE_CMD_DO_PAUSE_CONTINUE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_PAUSE_CONTINUE = 193
};

/// Constant 'VEHICLE_CMD_DO_SET_ROI_LOCATION'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_ROI_LOCATION = 195
};

/// Constant 'VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET = 196
};

/// Constant 'VEHICLE_CMD_DO_SET_ROI_NONE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_ROI_NONE = 197
};

/// Constant 'VEHICLE_CMD_DO_CONTROL_VIDEO'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_CONTROL_VIDEO = 200
};

/// Constant 'VEHICLE_CMD_DO_SET_ROI'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_ROI = 201
};

/// Constant 'VEHICLE_CMD_DO_DIGICAM_CONTROL'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_DIGICAM_CONTROL = 203
};

/// Constant 'VEHICLE_CMD_DO_MOUNT_CONFIGURE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_MOUNT_CONFIGURE = 204
};

/// Constant 'VEHICLE_CMD_DO_MOUNT_CONTROL'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_MOUNT_CONTROL = 205
};

/// Constant 'VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST = 206
};

/// Constant 'VEHICLE_CMD_DO_FENCE_ENABLE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_FENCE_ENABLE = 207
};

/// Constant 'VEHICLE_CMD_DO_PARACHUTE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_PARACHUTE = 208
};

/// Constant 'VEHICLE_CMD_DO_MOTOR_TEST'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_MOTOR_TEST = 209
};

/// Constant 'VEHICLE_CMD_DO_INVERTED_FLIGHT'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_INVERTED_FLIGHT = 210
};

/// Constant 'VEHICLE_CMD_DO_GRIPPER'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GRIPPER = 211
};

/// Constant 'VEHICLE_CMD_DO_AUTOTUNE_ENABLE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_AUTOTUNE_ENABLE = 212
};

/// Constant 'VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL = 214
};

/// Constant 'VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT = 220
};

/// Constant 'VEHICLE_CMD_DO_GUIDED_MASTER'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GUIDED_MASTER = 221
};

/// Constant 'VEHICLE_CMD_DO_GUIDED_LIMITS'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GUIDED_LIMITS = 222
};

/// Constant 'VEHICLE_CMD_DO_LAST'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_LAST = 240
};

/// Constant 'VEHICLE_CMD_PREFLIGHT_CALIBRATION'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PREFLIGHT_CALIBRATION = 241
};

/// Constant 'PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION'.
enum
{
  px4_msgs__msg__VehicleCommand__PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION = 3
};

/// Constant 'VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS = 242
};

/// Constant 'VEHICLE_CMD_PREFLIGHT_UAVCAN'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PREFLIGHT_UAVCAN = 243
};

/// Constant 'VEHICLE_CMD_PREFLIGHT_STORAGE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PREFLIGHT_STORAGE = 245
};

/// Constant 'VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN = 246
};

/// Constant 'VEHICLE_CMD_OBLIQUE_SURVEY'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_OBLIQUE_SURVEY = 260
};

/// Constant 'VEHICLE_CMD_DO_SET_STANDARD_MODE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_STANDARD_MODE = 262
};

/// Constant 'VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION = 283
};

/// Constant 'VEHICLE_CMD_MISSION_START'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_MISSION_START = 300
};

/// Constant 'VEHICLE_CMD_ACTUATOR_GROUP_TEST'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_ACTUATOR_GROUP_TEST = 309
};

/// Constant 'VEHICLE_CMD_ACTUATOR_TEST'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_ACTUATOR_TEST = 310
};

/// Constant 'VEHICLE_CMD_CONFIGURE_ACTUATOR'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONFIGURE_ACTUATOR = 311
};

/// Constant 'VEHICLE_CMD_ESC_REQUEST_EEPROM'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_ESC_REQUEST_EEPROM = 312
};

/// Constant 'VEHICLE_CMD_COMPONENT_ARM_DISARM'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_COMPONENT_ARM_DISARM = 400
};

/// Constant 'VEHICLE_CMD_RUN_PREARM_CHECKS'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_RUN_PREARM_CHECKS = 401
};

/// Constant 'VEHICLE_CMD_INJECT_FAILURE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_INJECT_FAILURE = 420
};

/// Constant 'VEHICLE_CMD_START_RX_PAIR'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_START_RX_PAIR = 500
};

/// Constant 'VEHICLE_CMD_REQUEST_MESSAGE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_REQUEST_MESSAGE = 512
};

/// Constant 'VEHICLE_CMD_REQUEST_CAMERA_INFORMATION'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_REQUEST_CAMERA_INFORMATION = 521
};

/// Constant 'VEHICLE_CMD_SET_CAMERA_MODE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_SET_CAMERA_MODE = 530
};

/// Constant 'VEHICLE_CMD_SET_CAMERA_ZOOM'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_SET_CAMERA_ZOOM = 531
};

/// Constant 'VEHICLE_CMD_SET_CAMERA_FOCUS'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_SET_CAMERA_FOCUS = 532
};

/// Constant 'VEHICLE_CMD_EXTERNAL_ATTITUDE_ESTIMATE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_EXTERNAL_ATTITUDE_ESTIMATE = 620
};

/// Constant 'VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW = 1000
};

/// Constant 'VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE = 1001
};

/// Constant 'VEHICLE_CMD_IMAGE_START_CAPTURE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_IMAGE_START_CAPTURE = 2000
};

/// Constant 'VEHICLE_CMD_DO_TRIGGER_CONTROL'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_TRIGGER_CONTROL = 2003
};

/// Constant 'VEHICLE_CMD_VIDEO_START_CAPTURE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_VIDEO_START_CAPTURE = 2500
};

/// Constant 'VEHICLE_CMD_VIDEO_STOP_CAPTURE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_VIDEO_STOP_CAPTURE = 2501
};

/// Constant 'VEHICLE_CMD_LOGGING_START'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_LOGGING_START = 2510
};

/// Constant 'VEHICLE_CMD_LOGGING_STOP'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_LOGGING_STOP = 2511
};

/// Constant 'VEHICLE_CMD_CONTROL_HIGH_LATENCY'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONTROL_HIGH_LATENCY = 2600
};

/// Constant 'VEHICLE_CMD_DO_VTOL_TRANSITION'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_VTOL_TRANSITION = 3000
};

/// Constant 'VEHICLE_CMD_DO_SET_SAFETY_SWITCH_STATE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_SAFETY_SWITCH_STATE = 5300
};

/// Constant 'VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST = 3001
};

/// Constant 'VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY = 30001
};

/// Constant 'VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY = 30002
};

/// Constant 'VEHICLE_CMD_FIXED_MAG_CAL_YAW'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_FIXED_MAG_CAL_YAW = 42006
};

/// Constant 'VEHICLE_CMD_DO_WINCH'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_WINCH = 42600
};

/// Constant 'VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE = 43003
};

/// Constant 'VEHICLE_CMD_EXTERNAL_WIND_ESTIMATE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_EXTERNAL_WIND_ESTIMATE = 43004
};

/// Constant 'VEHICLE_CMD_ESTIMATOR_SENSOR_ENABLE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_ESTIMATOR_SENSOR_ENABLE = 43006
};

/// Constant 'FUSION_SOURCE_GPS'.
enum
{
  px4_msgs__msg__VehicleCommand__FUSION_SOURCE_GPS = 0
};

/// Constant 'FUSION_SOURCE_OF'.
enum
{
  px4_msgs__msg__VehicleCommand__FUSION_SOURCE_OF = 1
};

/// Constant 'FUSION_SOURCE_EV'.
enum
{
  px4_msgs__msg__VehicleCommand__FUSION_SOURCE_EV = 2
};

/// Constant 'FUSION_SOURCE_AGP'.
enum
{
  px4_msgs__msg__VehicleCommand__FUSION_SOURCE_AGP = 3
};

/// Constant 'FUSION_SOURCE_BARO'.
enum
{
  px4_msgs__msg__VehicleCommand__FUSION_SOURCE_BARO = 4
};

/// Constant 'FUSION_SOURCE_RNG'.
enum
{
  px4_msgs__msg__VehicleCommand__FUSION_SOURCE_RNG = 5
};

/// Constant 'FUSION_SOURCE_MAG'.
enum
{
  px4_msgs__msg__VehicleCommand__FUSION_SOURCE_MAG = 6
};

/// Constant 'FUSION_SOURCE_ASPD'.
enum
{
  px4_msgs__msg__VehicleCommand__FUSION_SOURCE_ASPD = 7
};

/// Constant 'FUSION_SOURCE_RNGBCN'.
enum
{
  px4_msgs__msg__VehicleCommand__FUSION_SOURCE_RNGBCN = 8
};

/// Constant 'VEHICLE_CMD_PX4_INTERNAL_START'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PX4_INTERNAL_START = 65537ul
};

/// Constant 'VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN = 100000ul
};

/// Constant 'VEHICLE_CMD_SET_NAV_STATE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_SET_NAV_STATE = 100001ul
};

/// Constant 'VEHICLE_CMD_GUIDED_CHANGE_HEADING'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_GUIDED_CHANGE_HEADING = 43002
};

/// Constant 'VEHICLE_MOUNT_MODE_RETRACT'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_RETRACT = 0
};

/// Constant 'VEHICLE_MOUNT_MODE_NEUTRAL'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_NEUTRAL = 1
};

/// Constant 'VEHICLE_MOUNT_MODE_MAVLINK_TARGETING'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_MAVLINK_TARGETING = 2
};

/// Constant 'VEHICLE_MOUNT_MODE_RC_TARGETING'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_RC_TARGETING = 3
};

/// Constant 'VEHICLE_MOUNT_MODE_GPS_POINT'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_GPS_POINT = 4
};

/// Constant 'VEHICLE_MOUNT_MODE_ENUM_END'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_ENUM_END = 5
};

/// Constant 'VEHICLE_ROI_NONE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_NONE = 0
};

/// Constant 'VEHICLE_ROI_WPNEXT'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_WPNEXT = 1
};

/// Constant 'VEHICLE_ROI_WPINDEX'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_WPINDEX = 2
};

/// Constant 'VEHICLE_ROI_LOCATION'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_LOCATION = 3
};

/// Constant 'VEHICLE_ROI_TARGET'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_TARGET = 4
};

/// Constant 'VEHICLE_ROI_ENUM_END'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_ENUM_END = 5
};

/// Constant 'ACTUATOR_CONFIGURATION_NONE'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_CONFIGURATION_NONE = 0
};

/// Constant 'ACTUATOR_CONFIGURATION_BEEP'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_CONFIGURATION_BEEP = 1
};

/// Constant 'ACTUATOR_CONFIGURATION_3D_MODE_ON'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_CONFIGURATION_3D_MODE_ON = 2
};

/// Constant 'ACTUATOR_CONFIGURATION_3D_MODE_OFF'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_CONFIGURATION_3D_MODE_OFF = 3
};

/// Constant 'ACTUATOR_CONFIGURATION_SPIN_DIRECTION1'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_CONFIGURATION_SPIN_DIRECTION1 = 4
};

/// Constant 'ACTUATOR_CONFIGURATION_SPIN_DIRECTION2'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_CONFIGURATION_SPIN_DIRECTION2 = 5
};

/// Constant 'PARACHUTE_ACTION_DISABLE'.
enum
{
  px4_msgs__msg__VehicleCommand__PARACHUTE_ACTION_DISABLE = 0
};

/// Constant 'PARACHUTE_ACTION_ENABLE'.
enum
{
  px4_msgs__msg__VehicleCommand__PARACHUTE_ACTION_ENABLE = 1
};

/// Constant 'PARACHUTE_ACTION_RELEASE'.
enum
{
  px4_msgs__msg__VehicleCommand__PARACHUTE_ACTION_RELEASE = 2
};

/// Constant 'FAILURE_UNIT_SENSOR_GYRO'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_GYRO = 0
};

/// Constant 'FAILURE_UNIT_SENSOR_ACCEL'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_ACCEL = 1
};

/// Constant 'FAILURE_UNIT_SENSOR_MAG'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_MAG = 2
};

/// Constant 'FAILURE_UNIT_SENSOR_BARO'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_BARO = 3
};

/// Constant 'FAILURE_UNIT_SENSOR_GPS'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_GPS = 4
};

/// Constant 'FAILURE_UNIT_SENSOR_OPTICAL_FLOW'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_OPTICAL_FLOW = 5
};

/// Constant 'FAILURE_UNIT_SENSOR_VIO'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_VIO = 6
};

/// Constant 'FAILURE_UNIT_SENSOR_DISTANCE_SENSOR'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_DISTANCE_SENSOR = 7
};

/// Constant 'FAILURE_UNIT_SENSOR_AIRSPEED'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_AIRSPEED = 8
};

/// Constant 'FAILURE_UNIT_SYSTEM_BATTERY'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_BATTERY = 100
};

/// Constant 'FAILURE_UNIT_SYSTEM_MOTOR'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_MOTOR = 101
};

/// Constant 'FAILURE_UNIT_SYSTEM_SERVO'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_SERVO = 102
};

/// Constant 'FAILURE_UNIT_SYSTEM_AVOIDANCE'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_AVOIDANCE = 103
};

/// Constant 'FAILURE_UNIT_SYSTEM_RC_SIGNAL'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_RC_SIGNAL = 104
};

/// Constant 'FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL = 105
};

/// Constant 'FAILURE_TYPE_OK'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_OK = 0
};

/// Constant 'FAILURE_TYPE_OFF'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_OFF = 1
};

/// Constant 'FAILURE_TYPE_STUCK'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_STUCK = 2
};

/// Constant 'FAILURE_TYPE_GARBAGE'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_GARBAGE = 3
};

/// Constant 'FAILURE_TYPE_WRONG'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_WRONG = 4
};

/// Constant 'FAILURE_TYPE_SLOW'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_SLOW = 5
};

/// Constant 'FAILURE_TYPE_DELAYED'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_DELAYED = 6
};

/// Constant 'FAILURE_TYPE_INTERMITTENT'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_INTERMITTENT = 7
};

/// Constant 'SPEED_TYPE_AIRSPEED'.
enum
{
  px4_msgs__msg__VehicleCommand__SPEED_TYPE_AIRSPEED = 0
};

/// Constant 'SPEED_TYPE_GROUNDSPEED'.
enum
{
  px4_msgs__msg__VehicleCommand__SPEED_TYPE_GROUNDSPEED = 1
};

/// Constant 'SPEED_TYPE_CLIMB_SPEED'.
enum
{
  px4_msgs__msg__VehicleCommand__SPEED_TYPE_CLIMB_SPEED = 2
};

/// Constant 'SPEED_TYPE_DESCEND_SPEED'.
enum
{
  px4_msgs__msg__VehicleCommand__SPEED_TYPE_DESCEND_SPEED = 3
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER'.
enum
{
  px4_msgs__msg__VehicleCommand__ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER = 0
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING'.
enum
{
  px4_msgs__msg__VehicleCommand__ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING = 1
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_UNCONTROLLED'.
enum
{
  px4_msgs__msg__VehicleCommand__ORBIT_YAW_BEHAVIOUR_UNCONTROLLED = 2
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE'.
enum
{
  px4_msgs__msg__VehicleCommand__ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE = 3
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED'.
enum
{
  px4_msgs__msg__VehicleCommand__ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED = 4
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_UNCHANGED'.
enum
{
  px4_msgs__msg__VehicleCommand__ORBIT_YAW_BEHAVIOUR_UNCHANGED = 5
};

/// Constant 'RC_TYPE_SPEKTRUM'.
enum
{
  px4_msgs__msg__VehicleCommand__RC_TYPE_SPEKTRUM = 0
};

/// Constant 'RC_TYPE_CRSF'.
enum
{
  px4_msgs__msg__VehicleCommand__RC_TYPE_CRSF = 1
};

/// Constant 'RC_SUB_TYPE_SPEKTRUM_DSM2'.
enum
{
  px4_msgs__msg__VehicleCommand__RC_SUB_TYPE_SPEKTRUM_DSM2 = 0
};

/// Constant 'RC_SUB_TYPE_SPEKTRUM_DSMX'.
enum
{
  px4_msgs__msg__VehicleCommand__RC_SUB_TYPE_SPEKTRUM_DSMX = 1
};

/// Constant 'RC_SUB_TYPE_SPEKTRUM_DSMX8'.
enum
{
  px4_msgs__msg__VehicleCommand__RC_SUB_TYPE_SPEKTRUM_DSMX8 = 2
};

/// Constant 'ARMING_ACTION_DISARM'.
enum
{
  px4_msgs__msg__VehicleCommand__ARMING_ACTION_DISARM = 0
};

/// Constant 'ARMING_ACTION_ARM'.
enum
{
  px4_msgs__msg__VehicleCommand__ARMING_ACTION_ARM = 1
};

/// Constant 'GRIPPER_ACTION_RELEASE'.
enum
{
  px4_msgs__msg__VehicleCommand__GRIPPER_ACTION_RELEASE = 0
};

/// Constant 'GRIPPER_ACTION_GRAB'.
enum
{
  px4_msgs__msg__VehicleCommand__GRIPPER_ACTION_GRAB = 1
};

/// Constant 'SAFETY_OFF'.
enum
{
  px4_msgs__msg__VehicleCommand__SAFETY_OFF = 0
};

/// Constant 'SAFETY_ON'.
enum
{
  px4_msgs__msg__VehicleCommand__SAFETY_ON = 1
};

/// Constant 'ACTUATOR_TEST_GROUP_ROLL_TORQUE'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_TEST_GROUP_ROLL_TORQUE = 0
};

/// Constant 'ACTUATOR_TEST_GROUP_PITCH_TORQUE'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_TEST_GROUP_PITCH_TORQUE = 1
};

/// Constant 'ACTUATOR_TEST_GROUP_YAW_TORQUE'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_TEST_GROUP_YAW_TORQUE = 2
};

/// Constant 'ACTUATOR_TEST_GROUP_COLLECTIVE_TILT'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_TEST_GROUP_COLLECTIVE_TILT = 3
};

/// Constant 'ACTUATOR_TEST_GROUP_X_THRUST'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_TEST_GROUP_X_THRUST = 4
};

/// Constant 'ACTUATOR_TEST_GROUP_Y_THRUST'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_TEST_GROUP_Y_THRUST = 5
};

/// Constant 'ACTUATOR_TEST_GROUP_Z_THRUST'.
enum
{
  px4_msgs__msg__VehicleCommand__ACTUATOR_TEST_GROUP_Z_THRUST = 6
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__VehicleCommand__ORB_QUEUE_LENGTH = 8
};

/// Constant 'COMPONENT_MODE_EXECUTOR_START'.
enum
{
  px4_msgs__msg__VehicleCommand__COMPONENT_MODE_EXECUTOR_START = 1000
};

// Struct defined in msg/VehicleCommand in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleCommand
{
  uint64_t timestamp;
  float param1;
  float param2;
  float param3;
  float param4;
  double param5;
  double param6;
  float param7;
  uint32_t command;
  uint8_t target_system;
  uint8_t target_component;
  uint8_t source_system;
  uint16_t source_component;
  uint8_t confirmation;
  bool from_external;
} px4_msgs__msg__VehicleCommand;

// Struct for a sequence of px4_msgs__msg__VehicleCommand.
typedef struct px4_msgs__msg__VehicleCommand__Sequence
{
  px4_msgs__msg__VehicleCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__STRUCT_H_
