// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interface:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#include "my_robot_interface/srv/detail/compute_rectangle_area__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interface
const rosidl_type_hash_t *
my_robot_interface__srv__ComputeRectangleArea__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0xb3, 0xa4, 0xe8, 0x36, 0xfc, 0xf0, 0x0d,
      0xba, 0x8e, 0x76, 0xbc, 0x47, 0x11, 0xb1, 0x56,
      0x3f, 0x77, 0xda, 0x93, 0xcd, 0x54, 0x99, 0x4d,
      0x8d, 0xf8, 0xed, 0x4a, 0x3d, 0xdc, 0x7b, 0xb9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interface
const rosidl_type_hash_t *
my_robot_interface__srv__ComputeRectangleArea_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0xfe, 0x9e, 0xa0, 0xa9, 0x8f, 0x41, 0x6f,
      0x10, 0x47, 0x69, 0xa1, 0xbb, 0x68, 0xb9, 0x8e,
      0xc6, 0x2c, 0xbb, 0x57, 0x86, 0xb9, 0x6b, 0xcf,
      0xbd, 0xdc, 0x6c, 0xf1, 0xbd, 0x97, 0xf9, 0x02,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interface
const rosidl_type_hash_t *
my_robot_interface__srv__ComputeRectangleArea_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x6f, 0xdb, 0x08, 0xfe, 0xfb, 0x6c, 0x8a,
      0x79, 0xc6, 0xab, 0xf1, 0x3e, 0xdf, 0x4a, 0xb8,
      0xa4, 0x66, 0xce, 0x88, 0x79, 0x5b, 0x35, 0xf7,
      0x6e, 0x15, 0xab, 0x0c, 0x8b, 0x87, 0x84, 0x9b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interface
const rosidl_type_hash_t *
my_robot_interface__srv__ComputeRectangleArea_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x2f, 0xab, 0xf3, 0xaf, 0x1c, 0xc7, 0x86,
      0xe4, 0x00, 0xda, 0xde, 0x10, 0x8f, 0xff, 0xae,
      0x6b, 0x50, 0xd5, 0xeb, 0xcb, 0xdf, 0xfb, 0x50,
      0x36, 0xbc, 0xb7, 0xd1, 0x81, 0x8e, 0xe1, 0x1a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char my_robot_interface__srv__ComputeRectangleArea__TYPE_NAME[] = "my_robot_interface/srv/ComputeRectangleArea";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char my_robot_interface__srv__ComputeRectangleArea_Event__TYPE_NAME[] = "my_robot_interface/srv/ComputeRectangleArea_Event";
static char my_robot_interface__srv__ComputeRectangleArea_Request__TYPE_NAME[] = "my_robot_interface/srv/ComputeRectangleArea_Request";
static char my_robot_interface__srv__ComputeRectangleArea_Response__TYPE_NAME[] = "my_robot_interface/srv/ComputeRectangleArea_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char my_robot_interface__srv__ComputeRectangleArea__FIELD_NAME__request_message[] = "request_message";
static char my_robot_interface__srv__ComputeRectangleArea__FIELD_NAME__response_message[] = "response_message";
static char my_robot_interface__srv__ComputeRectangleArea__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field my_robot_interface__srv__ComputeRectangleArea__FIELDS[] = {
  {
    {my_robot_interface__srv__ComputeRectangleArea__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_robot_interface__srv__ComputeRectangleArea_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__srv__ComputeRectangleArea__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_robot_interface__srv__ComputeRectangleArea_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__srv__ComputeRectangleArea__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_robot_interface__srv__ComputeRectangleArea_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_robot_interface__srv__ComputeRectangleArea__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__srv__ComputeRectangleArea_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__srv__ComputeRectangleArea_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__srv__ComputeRectangleArea_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interface__srv__ComputeRectangleArea__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interface__srv__ComputeRectangleArea__TYPE_NAME, 43, 43},
      {my_robot_interface__srv__ComputeRectangleArea__FIELDS, 3, 3},
    },
    {my_robot_interface__srv__ComputeRectangleArea__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_robot_interface__srv__ComputeRectangleArea_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_robot_interface__srv__ComputeRectangleArea_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = my_robot_interface__srv__ComputeRectangleArea_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_robot_interface__srv__ComputeRectangleArea_Request__FIELD_NAME__length[] = "length";
static char my_robot_interface__srv__ComputeRectangleArea_Request__FIELD_NAME__width[] = "width";

static rosidl_runtime_c__type_description__Field my_robot_interface__srv__ComputeRectangleArea_Request__FIELDS[] = {
  {
    {my_robot_interface__srv__ComputeRectangleArea_Request__FIELD_NAME__length, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__srv__ComputeRectangleArea_Request__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interface__srv__ComputeRectangleArea_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interface__srv__ComputeRectangleArea_Request__TYPE_NAME, 51, 51},
      {my_robot_interface__srv__ComputeRectangleArea_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_robot_interface__srv__ComputeRectangleArea_Response__FIELD_NAME__area[] = "area";

static rosidl_runtime_c__type_description__Field my_robot_interface__srv__ComputeRectangleArea_Response__FIELDS[] = {
  {
    {my_robot_interface__srv__ComputeRectangleArea_Response__FIELD_NAME__area, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interface__srv__ComputeRectangleArea_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interface__srv__ComputeRectangleArea_Response__TYPE_NAME, 52, 52},
      {my_robot_interface__srv__ComputeRectangleArea_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_robot_interface__srv__ComputeRectangleArea_Event__FIELD_NAME__info[] = "info";
static char my_robot_interface__srv__ComputeRectangleArea_Event__FIELD_NAME__request[] = "request";
static char my_robot_interface__srv__ComputeRectangleArea_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field my_robot_interface__srv__ComputeRectangleArea_Event__FIELDS[] = {
  {
    {my_robot_interface__srv__ComputeRectangleArea_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__srv__ComputeRectangleArea_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_robot_interface__srv__ComputeRectangleArea_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__srv__ComputeRectangleArea_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_robot_interface__srv__ComputeRectangleArea_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_robot_interface__srv__ComputeRectangleArea_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__srv__ComputeRectangleArea_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {my_robot_interface__srv__ComputeRectangleArea_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interface__srv__ComputeRectangleArea_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interface__srv__ComputeRectangleArea_Event__TYPE_NAME, 49, 49},
      {my_robot_interface__srv__ComputeRectangleArea_Event__FIELDS, 3, 3},
    },
    {my_robot_interface__srv__ComputeRectangleArea_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_robot_interface__srv__ComputeRectangleArea_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_robot_interface__srv__ComputeRectangleArea_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 length\n"
  "float64 width\n"
  "---\n"
  "float64 area";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interface__srv__ComputeRectangleArea__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interface__srv__ComputeRectangleArea__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interface__srv__ComputeRectangleArea_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interface__srv__ComputeRectangleArea_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interface__srv__ComputeRectangleArea_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interface__srv__ComputeRectangleArea_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interface__srv__ComputeRectangleArea_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interface__srv__ComputeRectangleArea_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interface__srv__ComputeRectangleArea__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interface__srv__ComputeRectangleArea__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_robot_interface__srv__ComputeRectangleArea_Event__get_individual_type_description_source(NULL);
    sources[3] = *my_robot_interface__srv__ComputeRectangleArea_Request__get_individual_type_description_source(NULL);
    sources[4] = *my_robot_interface__srv__ComputeRectangleArea_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interface__srv__ComputeRectangleArea_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interface__srv__ComputeRectangleArea_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interface__srv__ComputeRectangleArea_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interface__srv__ComputeRectangleArea_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interface__srv__ComputeRectangleArea_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interface__srv__ComputeRectangleArea_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_robot_interface__srv__ComputeRectangleArea_Request__get_individual_type_description_source(NULL);
    sources[3] = *my_robot_interface__srv__ComputeRectangleArea_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
