// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomaster_msgs:msg/ServoRawState.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/servo_raw_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
robomaster_msgs__msg__ServoRawState__init(robomaster_msgs__msg__ServoRawState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robomaster_msgs__msg__ServoRawState__fini(msg);
    return false;
  }
  // valid
  // value
  // speed
  return true;
}

void
robomaster_msgs__msg__ServoRawState__fini(robomaster_msgs__msg__ServoRawState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // valid
  // value
  // speed
}

bool
robomaster_msgs__msg__ServoRawState__are_equal(const robomaster_msgs__msg__ServoRawState * lhs, const robomaster_msgs__msg__ServoRawState * rhs)
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
  // valid
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->valid[i] != rhs->valid[i]) {
      return false;
    }
  }
  // value
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->value[i] != rhs->value[i]) {
      return false;
    }
  }
  // speed
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->speed[i] != rhs->speed[i]) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__msg__ServoRawState__copy(
  const robomaster_msgs__msg__ServoRawState * input,
  robomaster_msgs__msg__ServoRawState * output)
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
  // valid
  for (size_t i = 0; i < 4; ++i) {
    output->valid[i] = input->valid[i];
  }
  // value
  for (size_t i = 0; i < 4; ++i) {
    output->value[i] = input->value[i];
  }
  // speed
  for (size_t i = 0; i < 4; ++i) {
    output->speed[i] = input->speed[i];
  }
  return true;
}

robomaster_msgs__msg__ServoRawState *
robomaster_msgs__msg__ServoRawState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__ServoRawState * msg = (robomaster_msgs__msg__ServoRawState *)allocator.allocate(sizeof(robomaster_msgs__msg__ServoRawState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__msg__ServoRawState));
  bool success = robomaster_msgs__msg__ServoRawState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__msg__ServoRawState__destroy(robomaster_msgs__msg__ServoRawState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__msg__ServoRawState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__msg__ServoRawState__Sequence__init(robomaster_msgs__msg__ServoRawState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__ServoRawState * data = NULL;

  if (size) {
    data = (robomaster_msgs__msg__ServoRawState *)allocator.zero_allocate(size, sizeof(robomaster_msgs__msg__ServoRawState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__msg__ServoRawState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__msg__ServoRawState__fini(&data[i - 1]);
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
robomaster_msgs__msg__ServoRawState__Sequence__fini(robomaster_msgs__msg__ServoRawState__Sequence * array)
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
      robomaster_msgs__msg__ServoRawState__fini(&array->data[i]);
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

robomaster_msgs__msg__ServoRawState__Sequence *
robomaster_msgs__msg__ServoRawState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__ServoRawState__Sequence * array = (robomaster_msgs__msg__ServoRawState__Sequence *)allocator.allocate(sizeof(robomaster_msgs__msg__ServoRawState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__msg__ServoRawState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__msg__ServoRawState__Sequence__destroy(robomaster_msgs__msg__ServoRawState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__msg__ServoRawState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__msg__ServoRawState__Sequence__are_equal(const robomaster_msgs__msg__ServoRawState__Sequence * lhs, const robomaster_msgs__msg__ServoRawState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__msg__ServoRawState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__msg__ServoRawState__Sequence__copy(
  const robomaster_msgs__msg__ServoRawState__Sequence * input,
  robomaster_msgs__msg__ServoRawState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__msg__ServoRawState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__msg__ServoRawState * data =
      (robomaster_msgs__msg__ServoRawState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__msg__ServoRawState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__msg__ServoRawState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__msg__ServoRawState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
