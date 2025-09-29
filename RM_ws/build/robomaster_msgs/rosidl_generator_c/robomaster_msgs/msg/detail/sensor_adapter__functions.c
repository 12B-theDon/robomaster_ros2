// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomaster_msgs:msg/SensorAdapter.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/sensor_adapter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
robomaster_msgs__msg__SensorAdapter__init(robomaster_msgs__msg__SensorAdapter * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robomaster_msgs__msg__SensorAdapter__fini(msg);
    return false;
  }
  // io
  // adc
  // port
  msg->port[0] = 1;
  msg->port[1] = 2;
  msg->port[2] = 1;
  msg->port[3] = 2;
  msg->port[4] = 1;
  msg->port[5] = 2;
  msg->port[6] = 1;
  msg->port[7] = 2;
  msg->port[8] = 1;
  msg->port[9] = 2;
  msg->port[10] = 1;
  msg->port[11] = 2;
  // id
  msg->id[0] = 1;
  msg->id[1] = 1;
  msg->id[2] = 2;
  msg->id[3] = 2;
  msg->id[4] = 3;
  msg->id[5] = 3;
  msg->id[6] = 4;
  msg->id[7] = 4;
  msg->id[8] = 5;
  msg->id[9] = 5;
  msg->id[10] = 6;
  msg->id[11] = 6;
  return true;
}

void
robomaster_msgs__msg__SensorAdapter__fini(robomaster_msgs__msg__SensorAdapter * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // io
  // adc
  // port
  // id
}

bool
robomaster_msgs__msg__SensorAdapter__are_equal(const robomaster_msgs__msg__SensorAdapter * lhs, const robomaster_msgs__msg__SensorAdapter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // io
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->io[i] != rhs->io[i]) {
      return false;
    }
  }
  // adc
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->adc[i] != rhs->adc[i]) {
      return false;
    }
  }
  // port
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->port[i] != rhs->port[i]) {
      return false;
    }
  }
  // id
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->id[i] != rhs->id[i]) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__msg__SensorAdapter__copy(
  const robomaster_msgs__msg__SensorAdapter * input,
  robomaster_msgs__msg__SensorAdapter * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // io
  for (size_t i = 0; i < 12; ++i) {
    output->io[i] = input->io[i];
  }
  // adc
  for (size_t i = 0; i < 12; ++i) {
    output->adc[i] = input->adc[i];
  }
  // port
  for (size_t i = 0; i < 12; ++i) {
    output->port[i] = input->port[i];
  }
  // id
  for (size_t i = 0; i < 12; ++i) {
    output->id[i] = input->id[i];
  }
  return true;
}

robomaster_msgs__msg__SensorAdapter *
robomaster_msgs__msg__SensorAdapter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__SensorAdapter * msg = (robomaster_msgs__msg__SensorAdapter *)allocator.allocate(sizeof(robomaster_msgs__msg__SensorAdapter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__msg__SensorAdapter));
  bool success = robomaster_msgs__msg__SensorAdapter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__msg__SensorAdapter__destroy(robomaster_msgs__msg__SensorAdapter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__msg__SensorAdapter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__msg__SensorAdapter__Sequence__init(robomaster_msgs__msg__SensorAdapter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__SensorAdapter * data = NULL;

  if (size) {
    data = (robomaster_msgs__msg__SensorAdapter *)allocator.zero_allocate(size, sizeof(robomaster_msgs__msg__SensorAdapter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__msg__SensorAdapter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__msg__SensorAdapter__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robomaster_msgs__msg__SensorAdapter__Sequence__fini(robomaster_msgs__msg__SensorAdapter__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robomaster_msgs__msg__SensorAdapter__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robomaster_msgs__msg__SensorAdapter__Sequence *
robomaster_msgs__msg__SensorAdapter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__SensorAdapter__Sequence * array = (robomaster_msgs__msg__SensorAdapter__Sequence *)allocator.allocate(sizeof(robomaster_msgs__msg__SensorAdapter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__msg__SensorAdapter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__msg__SensorAdapter__Sequence__destroy(robomaster_msgs__msg__SensorAdapter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__msg__SensorAdapter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__msg__SensorAdapter__Sequence__are_equal(const robomaster_msgs__msg__SensorAdapter__Sequence * lhs, const robomaster_msgs__msg__SensorAdapter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__msg__SensorAdapter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__msg__SensorAdapter__Sequence__copy(
  const robomaster_msgs__msg__SensorAdapter__Sequence * input,
  robomaster_msgs__msg__SensorAdapter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__msg__SensorAdapter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__msg__SensorAdapter * data =
      (robomaster_msgs__msg__SensorAdapter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__msg__SensorAdapter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__msg__SensorAdapter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__msg__SensorAdapter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
