// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robomaster_msgs:msg/GimbalCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robomaster_msgs/msg/detail/gimbal_command__struct.h"
#include "robomaster_msgs/msg/detail/gimbal_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robomaster_msgs__msg__gimbal_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robomaster_msgs.msg._gimbal_command.GimbalCommand", full_classname_dest, 49) == 0);
  }
  robomaster_msgs__msg__GimbalCommand * ros_message = _ros_message;
  {  // yaw_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robomaster_msgs__msg__gimbal_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GimbalCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robomaster_msgs.msg._gimbal_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GimbalCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robomaster_msgs__msg__GimbalCommand * ros_message = (robomaster_msgs__msg__GimbalCommand *)raw_ros_message;
  {  // yaw_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
