// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomaster_msgs:msg/WheelSpeeds.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/wheel_speeds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robomaster_msgs__msg__WheelSpeeds__init(robomaster_msgs__msg__WheelSpeeds * msg)
{
  if (!msg) {
    return false;
  }
  // front_left
  // front_right
  // rear_left
  // rear_right
  return true;
}

void
robomaster_msgs__msg__WheelSpeeds__fini(robomaster_msgs__msg__WheelSpeeds * msg)
{
  if (!msg) {
    return;
  }
  // front_left
  // front_right
  // rear_left
  // rear_right
}

bool
robomaster_msgs__msg__WheelSpeeds__are_equal(const robomaster_msgs__msg__WheelSpeeds * lhs, const robomaster_msgs__msg__WheelSpeeds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front_left
  if (lhs->front_left != rhs->front_left) {
    return false;
  }
  // front_right
  if (lhs->front_right != rhs->front_right) {
    return false;
  }
  // rear_left
  if (lhs->rear_left != rhs->rear_left) {
    return false;
  }
  // rear_right
  if (lhs->rear_right != rhs->rear_right) {
    return false;
  }
  return true;
}

bool
robomaster_msgs__msg__WheelSpeeds__copy(
  const robomaster_msgs__msg__WheelSpeeds * input,
  robomaster_msgs__msg__WheelSpeeds * output)
{
  if (!input || !output) {
    return false;
  }
  // front_left
  output->front_left = input->front_left;
  // front_right
  output->front_right = input->front_right;
  // rear_left
  output->rear_left = input->rear_left;
  // rear_right
  output->rear_right = input->rear_right;
  return true;
}

robomaster_msgs__msg__WheelSpeeds *
robomaster_msgs__msg__WheelSpeeds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__WheelSpeeds * msg = (robomaster_msgs__msg__WheelSpeeds *)allocator.allocate(sizeof(robomaster_msgs__msg__WheelSpeeds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__msg__WheelSpeeds));
  bool success = robomaster_msgs__msg__WheelSpeeds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__msg__WheelSpeeds__destroy(robomaster_msgs__msg__WheelSpeeds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__msg__WheelSpeeds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__msg__WheelSpeeds__Sequence__init(robomaster_msgs__msg__WheelSpeeds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__WheelSpeeds * data = NULL;

  if (size) {
    data = (robomaster_msgs__msg__WheelSpeeds *)allocator.zero_allocate(size, sizeof(robomaster_msgs__msg__WheelSpeeds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__msg__WheelSpeeds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__msg__WheelSpeeds__fini(&data[i - 1]);
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
robomaster_msgs__msg__WheelSpeeds__Sequence__fini(robomaster_msgs__msg__WheelSpeeds__Sequence * array)
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
      robomaster_msgs__msg__WheelSpeeds__fini(&array->data[i]);
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

robomaster_msgs__msg__WheelSpeeds__Sequence *
robomaster_msgs__msg__WheelSpeeds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__WheelSpeeds__Sequence * array = (robomaster_msgs__msg__WheelSpeeds__Sequence *)allocator.allocate(sizeof(robomaster_msgs__msg__WheelSpeeds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__msg__WheelSpeeds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__msg__WheelSpeeds__Sequence__destroy(robomaster_msgs__msg__WheelSpeeds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__msg__WheelSpeeds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__msg__WheelSpeeds__Sequence__are_equal(const robomaster_msgs__msg__WheelSpeeds__Sequence * lhs, const robomaster_msgs__msg__WheelSpeeds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__msg__WheelSpeeds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__msg__WheelSpeeds__Sequence__copy(
  const robomaster_msgs__msg__WheelSpeeds__Sequence * input,
  robomaster_msgs__msg__WheelSpeeds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__msg__WheelSpeeds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__msg__WheelSpeeds * data =
      (robomaster_msgs__msg__WheelSpeeds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__msg__WheelSpeeds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__msg__WheelSpeeds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__msg__WheelSpeeds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
