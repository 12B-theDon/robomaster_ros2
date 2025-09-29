// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomaster_msgs:msg/GimbalCommand.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/gimbal_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robomaster_msgs__msg__GimbalCommand__init(robomaster_msgs__msg__GimbalCommand * msg)
{
  if (!msg) {
    return false;
  }
  // yaw_speed
  msg->yaw_speed = 0.0f;
  // pitch_speed
  msg->pitch_speed = 0.0f;
  return true;
}

void
robomaster_msgs__msg__GimbalCommand__fini(robomaster_msgs__msg__GimbalCommand * msg)
{
  if (!msg) {
    return;
  }
  // yaw_speed
  // pitch_speed
}

bool
robomaster_msgs__msg__GimbalCommand__are_equal(const robomaster_msgs__msg__GimbalCommand * lhs, const robomaster_msgs__msg__GimbalCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw_speed
  if (lhs->yaw_speed != rhs->yaw_speed) {
    return false;
  }
  // pitch_speed
  if (lhs->pitch_speed != rhs->pitch_speed) {
    return false;
  }
  return true;
}

bool
robomaster_msgs__msg__GimbalCommand__copy(
  const robomaster_msgs__msg__GimbalCommand * input,
  robomaster_msgs__msg__GimbalCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw_speed
  output->yaw_speed = input->yaw_speed;
  // pitch_speed
  output->pitch_speed = input->pitch_speed;
  return true;
}

robomaster_msgs__msg__GimbalCommand *
robomaster_msgs__msg__GimbalCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__GimbalCommand * msg = (robomaster_msgs__msg__GimbalCommand *)allocator.allocate(sizeof(robomaster_msgs__msg__GimbalCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__msg__GimbalCommand));
  bool success = robomaster_msgs__msg__GimbalCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__msg__GimbalCommand__destroy(robomaster_msgs__msg__GimbalCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__msg__GimbalCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__msg__GimbalCommand__Sequence__init(robomaster_msgs__msg__GimbalCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__GimbalCommand * data = NULL;

  if (size) {
    data = (robomaster_msgs__msg__GimbalCommand *)allocator.zero_allocate(size, sizeof(robomaster_msgs__msg__GimbalCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__msg__GimbalCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__msg__GimbalCommand__fini(&data[i - 1]);
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
robomaster_msgs__msg__GimbalCommand__Sequence__fini(robomaster_msgs__msg__GimbalCommand__Sequence * array)
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
      robomaster_msgs__msg__GimbalCommand__fini(&array->data[i]);
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

robomaster_msgs__msg__GimbalCommand__Sequence *
robomaster_msgs__msg__GimbalCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__GimbalCommand__Sequence * array = (robomaster_msgs__msg__GimbalCommand__Sequence *)allocator.allocate(sizeof(robomaster_msgs__msg__GimbalCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__msg__GimbalCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__msg__GimbalCommand__Sequence__destroy(robomaster_msgs__msg__GimbalCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__msg__GimbalCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__msg__GimbalCommand__Sequence__are_equal(const robomaster_msgs__msg__GimbalCommand__Sequence * lhs, const robomaster_msgs__msg__GimbalCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__msg__GimbalCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__msg__GimbalCommand__Sequence__copy(
  const robomaster_msgs__msg__GimbalCommand__Sequence * input,
  robomaster_msgs__msg__GimbalCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__msg__GimbalCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__msg__GimbalCommand * data =
      (robomaster_msgs__msg__GimbalCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__msg__GimbalCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__msg__GimbalCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__msg__GimbalCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
