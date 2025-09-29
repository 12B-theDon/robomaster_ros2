// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomaster_msgs:msg/LEDEffect.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/led_effect__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `color`
#include "std_msgs/msg/detail/color_rgba__functions.h"

bool
robomaster_msgs__msg__LEDEffect__init(robomaster_msgs__msg__LEDEffect * msg)
{
  if (!msg) {
    return false;
  }
  // mask
  msg->mask = 63;
  // submask
  msg->submask = 255;
  // effect
  msg->effect = 1;
  // color
  if (!std_msgs__msg__ColorRGBA__init(&msg->color)) {
    robomaster_msgs__msg__LEDEffect__fini(msg);
    return false;
  }
  // t1
  msg->t1 = 1.0f;
  // t2
  msg->t2 = 1.0f;
  return true;
}

void
robomaster_msgs__msg__LEDEffect__fini(robomaster_msgs__msg__LEDEffect * msg)
{
  if (!msg) {
    return;
  }
  // mask
  // submask
  // effect
  // color
  std_msgs__msg__ColorRGBA__fini(&msg->color);
  // t1
  // t2
}

bool
robomaster_msgs__msg__LEDEffect__are_equal(const robomaster_msgs__msg__LEDEffect * lhs, const robomaster_msgs__msg__LEDEffect * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mask
  if (lhs->mask != rhs->mask) {
    return false;
  }
  // submask
  if (lhs->submask != rhs->submask) {
    return false;
  }
  // effect
  if (lhs->effect != rhs->effect) {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // t1
  if (lhs->t1 != rhs->t1) {
    return false;
  }
  // t2
  if (lhs->t2 != rhs->t2) {
    return false;
  }
  return true;
}

bool
robomaster_msgs__msg__LEDEffect__copy(
  const robomaster_msgs__msg__LEDEffect * input,
  robomaster_msgs__msg__LEDEffect * output)
{
  if (!input || !output) {
    return false;
  }
  // mask
  output->mask = input->mask;
  // submask
  output->submask = input->submask;
  // effect
  output->effect = input->effect;
  // color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // t1
  output->t1 = input->t1;
  // t2
  output->t2 = input->t2;
  return true;
}

robomaster_msgs__msg__LEDEffect *
robomaster_msgs__msg__LEDEffect__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__LEDEffect * msg = (robomaster_msgs__msg__LEDEffect *)allocator.allocate(sizeof(robomaster_msgs__msg__LEDEffect), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__msg__LEDEffect));
  bool success = robomaster_msgs__msg__LEDEffect__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__msg__LEDEffect__destroy(robomaster_msgs__msg__LEDEffect * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__msg__LEDEffect__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__msg__LEDEffect__Sequence__init(robomaster_msgs__msg__LEDEffect__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__LEDEffect * data = NULL;

  if (size) {
    data = (robomaster_msgs__msg__LEDEffect *)allocator.zero_allocate(size, sizeof(robomaster_msgs__msg__LEDEffect), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__msg__LEDEffect__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__msg__LEDEffect__fini(&data[i - 1]);
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
robomaster_msgs__msg__LEDEffect__Sequence__fini(robomaster_msgs__msg__LEDEffect__Sequence * array)
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
      robomaster_msgs__msg__LEDEffect__fini(&array->data[i]);
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

robomaster_msgs__msg__LEDEffect__Sequence *
robomaster_msgs__msg__LEDEffect__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__LEDEffect__Sequence * array = (robomaster_msgs__msg__LEDEffect__Sequence *)allocator.allocate(sizeof(robomaster_msgs__msg__LEDEffect__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__msg__LEDEffect__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__msg__LEDEffect__Sequence__destroy(robomaster_msgs__msg__LEDEffect__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__msg__LEDEffect__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__msg__LEDEffect__Sequence__are_equal(const robomaster_msgs__msg__LEDEffect__Sequence * lhs, const robomaster_msgs__msg__LEDEffect__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__msg__LEDEffect__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__msg__LEDEffect__Sequence__copy(
  const robomaster_msgs__msg__LEDEffect__Sequence * input,
  robomaster_msgs__msg__LEDEffect__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__msg__LEDEffect);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__msg__LEDEffect * data =
      (robomaster_msgs__msg__LEDEffect *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__msg__LEDEffect__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__msg__LEDEffect__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__msg__LEDEffect__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
