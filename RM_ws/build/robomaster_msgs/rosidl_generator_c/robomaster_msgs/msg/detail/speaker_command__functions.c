// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomaster_msgs:msg/SpeakerCommand.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/speaker_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `file`
#include "rosidl_runtime_c/string_functions.h"

bool
robomaster_msgs__msg__SpeakerCommand__init(robomaster_msgs__msg__SpeakerCommand * msg)
{
  if (!msg) {
    return false;
  }
  // sound_id
  msg->sound_id = 1l;
  // times
  msg->times = 1;
  // control
  // file
  if (!rosidl_runtime_c__String__init(&msg->file)) {
    robomaster_msgs__msg__SpeakerCommand__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->file, "");
    if (!success) {
      goto abort_init_0;
    }
  }
  return true;
abort_init_0:
  return false;
}

void
robomaster_msgs__msg__SpeakerCommand__fini(robomaster_msgs__msg__SpeakerCommand * msg)
{
  if (!msg) {
    return;
  }
  // sound_id
  // times
  // control
  // file
  rosidl_runtime_c__String__fini(&msg->file);
}

bool
robomaster_msgs__msg__SpeakerCommand__are_equal(const robomaster_msgs__msg__SpeakerCommand * lhs, const robomaster_msgs__msg__SpeakerCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sound_id
  if (lhs->sound_id != rhs->sound_id) {
    return false;
  }
  // times
  if (lhs->times != rhs->times) {
    return false;
  }
  // control
  if (lhs->control != rhs->control) {
    return false;
  }
  // file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file), &(rhs->file)))
  {
    return false;
  }
  return true;
}

bool
robomaster_msgs__msg__SpeakerCommand__copy(
  const robomaster_msgs__msg__SpeakerCommand * input,
  robomaster_msgs__msg__SpeakerCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // sound_id
  output->sound_id = input->sound_id;
  // times
  output->times = input->times;
  // control
  output->control = input->control;
  // file
  if (!rosidl_runtime_c__String__copy(
      &(input->file), &(output->file)))
  {
    return false;
  }
  return true;
}

robomaster_msgs__msg__SpeakerCommand *
robomaster_msgs__msg__SpeakerCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__SpeakerCommand * msg = (robomaster_msgs__msg__SpeakerCommand *)allocator.allocate(sizeof(robomaster_msgs__msg__SpeakerCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__msg__SpeakerCommand));
  bool success = robomaster_msgs__msg__SpeakerCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__msg__SpeakerCommand__destroy(robomaster_msgs__msg__SpeakerCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__msg__SpeakerCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__msg__SpeakerCommand__Sequence__init(robomaster_msgs__msg__SpeakerCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__SpeakerCommand * data = NULL;

  if (size) {
    data = (robomaster_msgs__msg__SpeakerCommand *)allocator.zero_allocate(size, sizeof(robomaster_msgs__msg__SpeakerCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__msg__SpeakerCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__msg__SpeakerCommand__fini(&data[i - 1]);
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
robomaster_msgs__msg__SpeakerCommand__Sequence__fini(robomaster_msgs__msg__SpeakerCommand__Sequence * array)
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
      robomaster_msgs__msg__SpeakerCommand__fini(&array->data[i]);
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

robomaster_msgs__msg__SpeakerCommand__Sequence *
robomaster_msgs__msg__SpeakerCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__SpeakerCommand__Sequence * array = (robomaster_msgs__msg__SpeakerCommand__Sequence *)allocator.allocate(sizeof(robomaster_msgs__msg__SpeakerCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__msg__SpeakerCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__msg__SpeakerCommand__Sequence__destroy(robomaster_msgs__msg__SpeakerCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__msg__SpeakerCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__msg__SpeakerCommand__Sequence__are_equal(const robomaster_msgs__msg__SpeakerCommand__Sequence * lhs, const robomaster_msgs__msg__SpeakerCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__msg__SpeakerCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__msg__SpeakerCommand__Sequence__copy(
  const robomaster_msgs__msg__SpeakerCommand__Sequence * input,
  robomaster_msgs__msg__SpeakerCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__msg__SpeakerCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__msg__SpeakerCommand * data =
      (robomaster_msgs__msg__SpeakerCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__msg__SpeakerCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__msg__SpeakerCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__msg__SpeakerCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
