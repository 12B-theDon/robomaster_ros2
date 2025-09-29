// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robomaster_msgs:msg/Detection.idl
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
#include "robomaster_msgs/msg/detail/detection__struct.h"
#include "robomaster_msgs/msg/detail/detection__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "robomaster_msgs/msg/detail/detected_gesture__functions.h"
#include "robomaster_msgs/msg/detail/detected_line__functions.h"
#include "robomaster_msgs/msg/detail/detected_marker__functions.h"
#include "robomaster_msgs/msg/detail/detected_person__functions.h"
#include "robomaster_msgs/msg/detail/detected_robot__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool robomaster_msgs__msg__detected_person__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robomaster_msgs__msg__detected_person__convert_to_py(void * raw_ros_message);
bool robomaster_msgs__msg__detected_robot__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robomaster_msgs__msg__detected_robot__convert_to_py(void * raw_ros_message);
bool robomaster_msgs__msg__detected_gesture__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robomaster_msgs__msg__detected_gesture__convert_to_py(void * raw_ros_message);
bool robomaster_msgs__msg__detected_line__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robomaster_msgs__msg__detected_line__convert_to_py(void * raw_ros_message);
bool robomaster_msgs__msg__detected_marker__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robomaster_msgs__msg__detected_marker__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robomaster_msgs__msg__detection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("robomaster_msgs.msg._detection.Detection", full_classname_dest, 40) == 0);
  }
  robomaster_msgs__msg__Detection * ros_message = _ros_message;
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
  {  // people
    PyObject * field = PyObject_GetAttrString(_pymsg, "people");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'people'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!robomaster_msgs__msg__DetectedPerson__Sequence__init(&(ros_message->people), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create robomaster_msgs__msg__DetectedPerson__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    robomaster_msgs__msg__DetectedPerson * dest = ros_message->people.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!robomaster_msgs__msg__detected_person__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'robots'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!robomaster_msgs__msg__DetectedRobot__Sequence__init(&(ros_message->robots), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create robomaster_msgs__msg__DetectedRobot__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    robomaster_msgs__msg__DetectedRobot * dest = ros_message->robots.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!robomaster_msgs__msg__detected_robot__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // gestures
    PyObject * field = PyObject_GetAttrString(_pymsg, "gestures");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'gestures'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!robomaster_msgs__msg__DetectedGesture__Sequence__init(&(ros_message->gestures), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create robomaster_msgs__msg__DetectedGesture__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    robomaster_msgs__msg__DetectedGesture * dest = ros_message->gestures.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!robomaster_msgs__msg__detected_gesture__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "lines");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lines'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!robomaster_msgs__msg__DetectedLine__Sequence__init(&(ros_message->lines), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create robomaster_msgs__msg__DetectedLine__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    robomaster_msgs__msg__DetectedLine * dest = ros_message->lines.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!robomaster_msgs__msg__detected_line__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // markers
    PyObject * field = PyObject_GetAttrString(_pymsg, "markers");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'markers'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!robomaster_msgs__msg__DetectedMarker__Sequence__init(&(ros_message->markers), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create robomaster_msgs__msg__DetectedMarker__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    robomaster_msgs__msg__DetectedMarker * dest = ros_message->markers.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!robomaster_msgs__msg__detected_marker__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robomaster_msgs__msg__detection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Detection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robomaster_msgs.msg._detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Detection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robomaster_msgs__msg__Detection * ros_message = (robomaster_msgs__msg__Detection *)raw_ros_message;
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
  {  // people
    PyObject * field = NULL;
    size_t size = ros_message->people.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    robomaster_msgs__msg__DetectedPerson * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->people.data[i]);
      PyObject * pyitem = robomaster_msgs__msg__detected_person__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "people", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots
    PyObject * field = NULL;
    size_t size = ros_message->robots.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    robomaster_msgs__msg__DetectedRobot * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->robots.data[i]);
      PyObject * pyitem = robomaster_msgs__msg__detected_robot__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gestures
    PyObject * field = NULL;
    size_t size = ros_message->gestures.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    robomaster_msgs__msg__DetectedGesture * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->gestures.data[i]);
      PyObject * pyitem = robomaster_msgs__msg__detected_gesture__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "gestures", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lines
    PyObject * field = NULL;
    size_t size = ros_message->lines.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    robomaster_msgs__msg__DetectedLine * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lines.data[i]);
      PyObject * pyitem = robomaster_msgs__msg__detected_line__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "lines", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // markers
    PyObject * field = NULL;
    size_t size = ros_message->markers.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    robomaster_msgs__msg__DetectedMarker * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->markers.data[i]);
      PyObject * pyitem = robomaster_msgs__msg__detected_marker__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "markers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
