// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from robomaster_msgs:action/MoveGimbal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGimbal_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGimbal_Goal_type_support_ids_t;

static const _MoveGimbal_Goal_type_support_ids_t _MoveGimbal_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGimbal_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGimbal_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGimbal_Goal_type_support_symbol_names_t _MoveGimbal_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, action, MoveGimbal_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, action, MoveGimbal_Goal)),
  }
};

typedef struct _MoveGimbal_Goal_type_support_data_t
{
  void * data[2];
} _MoveGimbal_Goal_type_support_data_t;

static _MoveGimbal_Goal_type_support_data_t _MoveGimbal_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGimbal_Goal_message_typesupport_map = {
  2,
  "robomaster_msgs",
  &_MoveGimbal_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGimbal_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGimbal_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGimbal_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGimbal_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_Goal>()
{
  return &::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal_Goal)() {
  return get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGimbal_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGimbal_Result_type_support_ids_t;

static const _MoveGimbal_Result_type_support_ids_t _MoveGimbal_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGimbal_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGimbal_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGimbal_Result_type_support_symbol_names_t _MoveGimbal_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, action, MoveGimbal_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, action, MoveGimbal_Result)),
  }
};

typedef struct _MoveGimbal_Result_type_support_data_t
{
  void * data[2];
} _MoveGimbal_Result_type_support_data_t;

static _MoveGimbal_Result_type_support_data_t _MoveGimbal_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGimbal_Result_message_typesupport_map = {
  2,
  "robomaster_msgs",
  &_MoveGimbal_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGimbal_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGimbal_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGimbal_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGimbal_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_Result>()
{
  return &::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal_Result)() {
  return get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGimbal_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGimbal_Feedback_type_support_ids_t;

static const _MoveGimbal_Feedback_type_support_ids_t _MoveGimbal_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGimbal_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGimbal_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGimbal_Feedback_type_support_symbol_names_t _MoveGimbal_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, action, MoveGimbal_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, action, MoveGimbal_Feedback)),
  }
};

typedef struct _MoveGimbal_Feedback_type_support_data_t
{
  void * data[2];
} _MoveGimbal_Feedback_type_support_data_t;

static _MoveGimbal_Feedback_type_support_data_t _MoveGimbal_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGimbal_Feedback_message_typesupport_map = {
  2,
  "robomaster_msgs",
  &_MoveGimbal_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGimbal_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGimbal_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGimbal_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGimbal_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_Feedback>()
{
  return &::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal_Feedback)() {
  return get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGimbal_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGimbal_SendGoal_Request_type_support_ids_t;

static const _MoveGimbal_SendGoal_Request_type_support_ids_t _MoveGimbal_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGimbal_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGimbal_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGimbal_SendGoal_Request_type_support_symbol_names_t _MoveGimbal_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, action, MoveGimbal_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, action, MoveGimbal_SendGoal_Request)),
  }
};

typedef struct _MoveGimbal_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveGimbal_SendGoal_Request_type_support_data_t;

static _MoveGimbal_SendGoal_Request_type_support_data_t _MoveGimbal_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGimbal_SendGoal_Request_message_typesupport_map = {
  2,
  "robomaster_msgs",
  &_MoveGimbal_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGimbal_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGimbal_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGimbal_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGimbal_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_SendGoal_Request>()
{
  return &::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal_SendGoal_Request)() {
  return get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGimbal_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGimbal_SendGoal_Response_type_support_ids_t;

static const _MoveGimbal_SendGoal_Response_type_support_ids_t _MoveGimbal_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGimbal_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGimbal_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGimbal_SendGoal_Response_type_support_symbol_names_t _MoveGimbal_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, action, MoveGimbal_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, action, MoveGimbal_SendGoal_Response)),
  }
};

typedef struct _MoveGimbal_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveGimbal_SendGoal_Response_type_support_data_t;

static _MoveGimbal_SendGoal_Response_type_support_data_t _MoveGimbal_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGimbal_SendGoal_Response_message_typesupport_map = {
  2,
  "robomaster_msgs",
  &_MoveGimbal_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGimbal_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGimbal_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGimbal_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGimbal_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_SendGoal_Response>()
{
  return &::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal_SendGoal_Response)() {
  return get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGimbal_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGimbal_SendGoal_type_support_ids_t;

static const _MoveGimbal_SendGoal_type_support_ids_t _MoveGimbal_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGimbal_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGimbal_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGimbal_SendGoal_type_support_symbol_names_t _MoveGimbal_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, action, MoveGimbal_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, action, MoveGimbal_SendGoal)),
  }
};

typedef struct _MoveGimbal_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveGimbal_SendGoal_type_support_data_t;

static _MoveGimbal_SendGoal_type_support_data_t _MoveGimbal_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGimbal_SendGoal_service_typesupport_map = {
  2,
  "robomaster_msgs",
  &_MoveGimbal_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveGimbal_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveGimbal_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveGimbal_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGimbal_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robomaster_msgs::action::MoveGimbal_SendGoal>()
{
  return &::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robomaster_msgs::action::MoveGimbal_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGimbal_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGimbal_GetResult_Request_type_support_ids_t;

static const _MoveGimbal_GetResult_Request_type_support_ids_t _MoveGimbal_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGimbal_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGimbal_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGimbal_GetResult_Request_type_support_symbol_names_t _MoveGimbal_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, action, MoveGimbal_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, action, MoveGimbal_GetResult_Request)),
  }
};

typedef struct _MoveGimbal_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveGimbal_GetResult_Request_type_support_data_t;

static _MoveGimbal_GetResult_Request_type_support_data_t _MoveGimbal_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGimbal_GetResult_Request_message_typesupport_map = {
  2,
  "robomaster_msgs",
  &_MoveGimbal_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGimbal_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGimbal_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGimbal_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGimbal_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_GetResult_Request>()
{
  return &::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal_GetResult_Request)() {
  return get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGimbal_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGimbal_GetResult_Response_type_support_ids_t;

static const _MoveGimbal_GetResult_Response_type_support_ids_t _MoveGimbal_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGimbal_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGimbal_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGimbal_GetResult_Response_type_support_symbol_names_t _MoveGimbal_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, action, MoveGimbal_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, action, MoveGimbal_GetResult_Response)),
  }
};

typedef struct _MoveGimbal_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveGimbal_GetResult_Response_type_support_data_t;

static _MoveGimbal_GetResult_Response_type_support_data_t _MoveGimbal_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGimbal_GetResult_Response_message_typesupport_map = {
  2,
  "robomaster_msgs",
  &_MoveGimbal_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGimbal_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGimbal_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGimbal_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGimbal_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_GetResult_Response>()
{
  return &::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal_GetResult_Response)() {
  return get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGimbal_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGimbal_GetResult_type_support_ids_t;

static const _MoveGimbal_GetResult_type_support_ids_t _MoveGimbal_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGimbal_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGimbal_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGimbal_GetResult_type_support_symbol_names_t _MoveGimbal_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, action, MoveGimbal_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, action, MoveGimbal_GetResult)),
  }
};

typedef struct _MoveGimbal_GetResult_type_support_data_t
{
  void * data[2];
} _MoveGimbal_GetResult_type_support_data_t;

static _MoveGimbal_GetResult_type_support_data_t _MoveGimbal_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGimbal_GetResult_service_typesupport_map = {
  2,
  "robomaster_msgs",
  &_MoveGimbal_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveGimbal_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveGimbal_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveGimbal_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGimbal_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robomaster_msgs::action::MoveGimbal_GetResult>()
{
  return &::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robomaster_msgs::action::MoveGimbal_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveGimbal_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveGimbal_FeedbackMessage_type_support_ids_t;

static const _MoveGimbal_FeedbackMessage_type_support_ids_t _MoveGimbal_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveGimbal_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveGimbal_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveGimbal_FeedbackMessage_type_support_symbol_names_t _MoveGimbal_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robomaster_msgs, action, MoveGimbal_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, action, MoveGimbal_FeedbackMessage)),
  }
};

typedef struct _MoveGimbal_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveGimbal_FeedbackMessage_type_support_data_t;

static _MoveGimbal_FeedbackMessage_type_support_data_t _MoveGimbal_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveGimbal_FeedbackMessage_message_typesupport_map = {
  2,
  "robomaster_msgs",
  &_MoveGimbal_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveGimbal_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveGimbal_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveGimbal_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveGimbal_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_FeedbackMessage>()
{
  return &::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal_FeedbackMessage)() {
  return get_message_type_support_handle<robomaster_msgs::action::MoveGimbal_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "robomaster_msgs/action/detail/move_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace robomaster_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MoveGimbal_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robomaster_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<robomaster_msgs::action::MoveGimbal>()
{
  using ::robomaster_msgs::action::rosidl_typesupport_cpp::MoveGimbal_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MoveGimbal_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::robomaster_msgs::action::MoveGimbal::Impl::SendGoalService>();
  MoveGimbal_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::robomaster_msgs::action::MoveGimbal::Impl::GetResultService>();
  MoveGimbal_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::robomaster_msgs::action::MoveGimbal::Impl::CancelGoalService>();
  MoveGimbal_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::robomaster_msgs::action::MoveGimbal::Impl::FeedbackMessage>();
  MoveGimbal_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::robomaster_msgs::action::MoveGimbal::Impl::GoalStatusMessage>();
  return &MoveGimbal_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, robomaster_msgs, action, MoveGimbal)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<robomaster_msgs::action::MoveGimbal>();
}

#ifdef __cplusplus
}
#endif
