// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interface:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#include "my_robot_interface/msg/detail/hardware_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interface
const rosidl_type_hash_t *
my_robot_interface__msg__HardwareStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0xfe, 0xd9, 0x3a, 0x13, 0xbb, 0xce, 0xda,
      0x62, 0x75, 0x60, 0x7c, 0xd4, 0xf8, 0x10, 0xb1,
      0x77, 0x1b, 0x32, 0x12, 0xce, 0x01, 0xb6, 0x5a,
      0x6d, 0x43, 0xe5, 0x76, 0x42, 0x05, 0x95, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interface__msg__HardwareStatus__TYPE_NAME[] = "my_robot_interface/msg/HardwareStatus";

// Define type names, field names, and default values
static char my_robot_interface__msg__HardwareStatus__FIELD_NAME__temperature[] = "temperature";
static char my_robot_interface__msg__HardwareStatus__FIELD_NAME__are_motors_ready[] = "are_motors_ready";
static char my_robot_interface__msg__HardwareStatus__FIELD_NAME__debug_message[] = "debug_message";

static rosidl_runtime_c__type_description__Field my_robot_interface__msg__HardwareStatus__FIELDS[] = {
  {
    {my_robot_interface__msg__HardwareStatus__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__msg__HardwareStatus__FIELD_NAME__are_motors_ready, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__msg__HardwareStatus__FIELD_NAME__debug_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interface__msg__HardwareStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interface__msg__HardwareStatus__TYPE_NAME, 37, 37},
      {my_robot_interface__msg__HardwareStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 temperature\n"
  "bool are_motors_ready\n"
  "string debug_message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interface__msg__HardwareStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interface__msg__HardwareStatus__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 63, 63},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interface__msg__HardwareStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interface__msg__HardwareStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
