// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robomaster_msgs:msg/ChassisStatus.idl
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
#include "robomaster_msgs/msg/detail/chassis_status__struct.h"
#include "robomaster_msgs/msg/detail/chassis_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robomaster_msgs__msg__chassis_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("robomaster_msgs.msg._chassis_status.ChassisStatus", full_classname_dest, 49) == 0);
  }
  robomaster_msgs__msg__ChassisStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_static
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_static");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_static = (Py_True == field);
    Py_DECREF(field);
  }
  {  // up_hill
    PyObject * field = PyObject_GetAttrString(_pymsg, "up_hill");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->up_hill = (Py_True == field);
    Py_DECREF(field);
  }
  {  // down_hill
    PyObject * field = PyObject_GetAttrString(_pymsg, "down_hill");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->down_hill = (Py_True == field);
    Py_DECREF(field);
  }
  {  // on_slope
    PyObject * field = PyObject_GetAttrString(_pymsg, "on_slope");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->on_slope = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_pick_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_pick_up");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_pick_up = (Py_True == field);
    Py_DECREF(field);
  }
  {  // slip
    PyObject * field = PyObject_GetAttrString(_pymsg, "slip");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->slip = (Py_True == field);
    Py_DECREF(field);
  }
  {  // impact_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "impact_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->impact_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // impact_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "impact_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->impact_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // impact_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "impact_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->impact_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // roll_over
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_over");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->roll_over = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hill
    PyObject * field = PyObject_GetAttrString(_pymsg, "hill");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hill = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robomaster_msgs__msg__chassis_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChassisStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robomaster_msgs.msg._chassis_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChassisStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robomaster_msgs__msg__ChassisStatus * ros_message = (robomaster_msgs__msg__ChassisStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_static
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_static ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_static", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // up_hill
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->up_hill ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "up_hill", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // down_hill
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->down_hill ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "down_hill", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // on_slope
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->on_slope ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "on_slope", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_pick_up
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_pick_up ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_pick_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slip
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->slip ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // impact_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->impact_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "impact_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // impact_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->impact_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "impact_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // impact_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->impact_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "impact_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_over
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->roll_over ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_over", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hill
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hill ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hill", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
