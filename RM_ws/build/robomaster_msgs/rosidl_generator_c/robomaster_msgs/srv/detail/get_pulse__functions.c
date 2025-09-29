// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomaster_msgs:srv/GetPulse.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/srv/detail/get_pulse__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
robomaster_msgs__srv__GetPulse_Request__init(robomaster_msgs__srv__GetPulse_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // port
  return true;
}

void
robomaster_msgs__srv__GetPulse_Request__fini(robomaster_msgs__srv__GetPulse_Request * msg)
{
  if (!msg) {
    return;
  }
  // id
  // port
}

bool
robomaster_msgs__srv__GetPulse_Request__are_equal(const robomaster_msgs__srv__GetPulse_Request * lhs, const robomaster_msgs__srv__GetPulse_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // port
  if (lhs->port != rhs->port) {
    return false;
  }
  return true;
}

bool
robomaster_msgs__srv__GetPulse_Request__copy(
  const robomaster_msgs__srv__GetPulse_Request * input,
  robomaster_msgs__srv__GetPulse_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // port
  output->port = input->port;
  return true;
}

robomaster_msgs__srv__GetPulse_Request *
robomaster_msgs__srv__GetPulse_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__srv__GetPulse_Request * msg = (robomaster_msgs__srv__GetPulse_Request *)allocator.allocate(sizeof(robomaster_msgs__srv__GetPulse_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__srv__GetPulse_Request));
  bool success = robomaster_msgs__srv__GetPulse_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__srv__GetPulse_Request__destroy(robomaster_msgs__srv__GetPulse_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__srv__GetPulse_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__srv__GetPulse_Request__Sequence__init(robomaster_msgs__srv__GetPulse_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__srv__GetPulse_Request * data = NULL;

  if (size) {
    data = (robomaster_msgs__srv__GetPulse_Request *)allocator.zero_allocate(size, sizeof(robomaster_msgs__srv__GetPulse_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__srv__GetPulse_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__srv__GetPulse_Request__fini(&data[i - 1]);
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
robomaster_msgs__srv__GetPulse_Request__Sequence__fini(robomaster_msgs__srv__GetPulse_Request__Sequence * array)
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
      robomaster_msgs__srv__GetPulse_Request__fini(&array->data[i]);
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

robomaster_msgs__srv__GetPulse_Request__Sequence *
robomaster_msgs__srv__GetPulse_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__srv__GetPulse_Request__Sequence * array = (robomaster_msgs__srv__GetPulse_Request__Sequence *)allocator.allocate(sizeof(robomaster_msgs__srv__GetPulse_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__srv__GetPulse_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__srv__GetPulse_Request__Sequence__destroy(robomaster_msgs__srv__GetPulse_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__srv__GetPulse_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__srv__GetPulse_Request__Sequence__are_equal(const robomaster_msgs__srv__GetPulse_Request__Sequence * lhs, const robomaster_msgs__srv__GetPulse_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__srv__GetPulse_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__srv__GetPulse_Request__Sequence__copy(
  const robomaster_msgs__srv__GetPulse_Request__Sequence * input,
  robomaster_msgs__srv__GetPulse_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__srv__GetPulse_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__srv__GetPulse_Request * data =
      (robomaster_msgs__srv__GetPulse_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__srv__GetPulse_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__srv__GetPulse_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__srv__GetPulse_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robomaster_msgs__srv__GetPulse_Response__init(robomaster_msgs__srv__GetPulse_Response * msg)
{
  if (!msg) {
    return false;
  }
  // valid
  // time_ms
  return true;
}

void
robomaster_msgs__srv__GetPulse_Response__fini(robomaster_msgs__srv__GetPulse_Response * msg)
{
  if (!msg) {
    return;
  }
  // valid
  // time_ms
}

bool
robomaster_msgs__srv__GetPulse_Response__are_equal(const robomaster_msgs__srv__GetPulse_Response * lhs, const robomaster_msgs__srv__GetPulse_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // time_ms
  if (lhs->time_ms != rhs->time_ms) {
    return false;
  }
  return true;
}

bool
robomaster_msgs__srv__GetPulse_Response__copy(
  const robomaster_msgs__srv__GetPulse_Response * input,
  robomaster_msgs__srv__GetPulse_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // valid
  output->valid = input->valid;
  // time_ms
  output->time_ms = input->time_ms;
  return true;
}

robomaster_msgs__srv__GetPulse_Response *
robomaster_msgs__srv__GetPulse_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__srv__GetPulse_Response * msg = (robomaster_msgs__srv__GetPulse_Response *)allocator.allocate(sizeof(robomaster_msgs__srv__GetPulse_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__srv__GetPulse_Response));
  bool success = robomaster_msgs__srv__GetPulse_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__srv__GetPulse_Response__destroy(robomaster_msgs__srv__GetPulse_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__srv__GetPulse_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__srv__GetPulse_Response__Sequence__init(robomaster_msgs__srv__GetPulse_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__srv__GetPulse_Response * data = NULL;

  if (size) {
    data = (robomaster_msgs__srv__GetPulse_Response *)allocator.zero_allocate(size, sizeof(robomaster_msgs__srv__GetPulse_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__srv__GetPulse_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__srv__GetPulse_Response__fini(&data[i - 1]);
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
robomaster_msgs__srv__GetPulse_Response__Sequence__fini(robomaster_msgs__srv__GetPulse_Response__Sequence * array)
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
      robomaster_msgs__srv__GetPulse_Response__fini(&array->data[i]);
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

robomaster_msgs__srv__GetPulse_Response__Sequence *
robomaster_msgs__srv__GetPulse_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__srv__GetPulse_Response__Sequence * array = (robomaster_msgs__srv__GetPulse_Response__Sequence *)allocator.allocate(sizeof(robomaster_msgs__srv__GetPulse_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__srv__GetPulse_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__srv__GetPulse_Response__Sequence__destroy(robomaster_msgs__srv__GetPulse_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__srv__GetPulse_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__srv__GetPulse_Response__Sequence__are_equal(const robomaster_msgs__srv__GetPulse_Response__Sequence * lhs, const robomaster_msgs__srv__GetPulse_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__srv__GetPulse_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__srv__GetPulse_Response__Sequence__copy(
  const robomaster_msgs__srv__GetPulse_Response__Sequence * input,
  robomaster_msgs__srv__GetPulse_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__srv__GetPulse_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__srv__GetPulse_Response * data =
      (robomaster_msgs__srv__GetPulse_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__srv__GetPulse_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__srv__GetPulse_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__srv__GetPulse_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
