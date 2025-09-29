// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomaster_msgs:action/PlaySound.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/action/detail/play_sound__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `file`
#include "rosidl_runtime_c/string_functions.h"

bool
robomaster_msgs__action__PlaySound_Goal__init(robomaster_msgs__action__PlaySound_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // sound_id
  msg->sound_id = 1l;
  // times
  msg->times = 1;
  // file
  if (!rosidl_runtime_c__String__init(&msg->file)) {
    robomaster_msgs__action__PlaySound_Goal__fini(msg);
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
robomaster_msgs__action__PlaySound_Goal__fini(robomaster_msgs__action__PlaySound_Goal * msg)
{
  if (!msg) {
    return;
  }
  // sound_id
  // times
  // file
  rosidl_runtime_c__String__fini(&msg->file);
}

bool
robomaster_msgs__action__PlaySound_Goal__are_equal(const robomaster_msgs__action__PlaySound_Goal * lhs, const robomaster_msgs__action__PlaySound_Goal * rhs)
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
  // file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file), &(rhs->file)))
  {
    return false;
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_Goal__copy(
  const robomaster_msgs__action__PlaySound_Goal * input,
  robomaster_msgs__action__PlaySound_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // sound_id
  output->sound_id = input->sound_id;
  // times
  output->times = input->times;
  // file
  if (!rosidl_runtime_c__String__copy(
      &(input->file), &(output->file)))
  {
    return false;
  }
  return true;
}

robomaster_msgs__action__PlaySound_Goal *
robomaster_msgs__action__PlaySound_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_Goal * msg = (robomaster_msgs__action__PlaySound_Goal *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__action__PlaySound_Goal));
  bool success = robomaster_msgs__action__PlaySound_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__action__PlaySound_Goal__destroy(robomaster_msgs__action__PlaySound_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__action__PlaySound_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__action__PlaySound_Goal__Sequence__init(robomaster_msgs__action__PlaySound_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_Goal * data = NULL;

  if (size) {
    data = (robomaster_msgs__action__PlaySound_Goal *)allocator.zero_allocate(size, sizeof(robomaster_msgs__action__PlaySound_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__action__PlaySound_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__action__PlaySound_Goal__fini(&data[i - 1]);
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
robomaster_msgs__action__PlaySound_Goal__Sequence__fini(robomaster_msgs__action__PlaySound_Goal__Sequence * array)
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
      robomaster_msgs__action__PlaySound_Goal__fini(&array->data[i]);
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

robomaster_msgs__action__PlaySound_Goal__Sequence *
robomaster_msgs__action__PlaySound_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_Goal__Sequence * array = (robomaster_msgs__action__PlaySound_Goal__Sequence *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__action__PlaySound_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__action__PlaySound_Goal__Sequence__destroy(robomaster_msgs__action__PlaySound_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__action__PlaySound_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__action__PlaySound_Goal__Sequence__are_equal(const robomaster_msgs__action__PlaySound_Goal__Sequence * lhs, const robomaster_msgs__action__PlaySound_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_Goal__Sequence__copy(
  const robomaster_msgs__action__PlaySound_Goal__Sequence * input,
  robomaster_msgs__action__PlaySound_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__action__PlaySound_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__action__PlaySound_Goal * data =
      (robomaster_msgs__action__PlaySound_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__action__PlaySound_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__action__PlaySound_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robomaster_msgs__action__PlaySound_Result__init(robomaster_msgs__action__PlaySound_Result * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
robomaster_msgs__action__PlaySound_Result__fini(robomaster_msgs__action__PlaySound_Result * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
robomaster_msgs__action__PlaySound_Result__are_equal(const robomaster_msgs__action__PlaySound_Result * lhs, const robomaster_msgs__action__PlaySound_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_Result__copy(
  const robomaster_msgs__action__PlaySound_Result * input,
  robomaster_msgs__action__PlaySound_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

robomaster_msgs__action__PlaySound_Result *
robomaster_msgs__action__PlaySound_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_Result * msg = (robomaster_msgs__action__PlaySound_Result *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__action__PlaySound_Result));
  bool success = robomaster_msgs__action__PlaySound_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__action__PlaySound_Result__destroy(robomaster_msgs__action__PlaySound_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__action__PlaySound_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__action__PlaySound_Result__Sequence__init(robomaster_msgs__action__PlaySound_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_Result * data = NULL;

  if (size) {
    data = (robomaster_msgs__action__PlaySound_Result *)allocator.zero_allocate(size, sizeof(robomaster_msgs__action__PlaySound_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__action__PlaySound_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__action__PlaySound_Result__fini(&data[i - 1]);
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
robomaster_msgs__action__PlaySound_Result__Sequence__fini(robomaster_msgs__action__PlaySound_Result__Sequence * array)
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
      robomaster_msgs__action__PlaySound_Result__fini(&array->data[i]);
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

robomaster_msgs__action__PlaySound_Result__Sequence *
robomaster_msgs__action__PlaySound_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_Result__Sequence * array = (robomaster_msgs__action__PlaySound_Result__Sequence *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__action__PlaySound_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__action__PlaySound_Result__Sequence__destroy(robomaster_msgs__action__PlaySound_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__action__PlaySound_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__action__PlaySound_Result__Sequence__are_equal(const robomaster_msgs__action__PlaySound_Result__Sequence * lhs, const robomaster_msgs__action__PlaySound_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_Result__Sequence__copy(
  const robomaster_msgs__action__PlaySound_Result__Sequence * input,
  robomaster_msgs__action__PlaySound_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__action__PlaySound_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__action__PlaySound_Result * data =
      (robomaster_msgs__action__PlaySound_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__action__PlaySound_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__action__PlaySound_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robomaster_msgs__action__PlaySound_Feedback__init(robomaster_msgs__action__PlaySound_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // progress
  return true;
}

void
robomaster_msgs__action__PlaySound_Feedback__fini(robomaster_msgs__action__PlaySound_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // time
  // progress
}

bool
robomaster_msgs__action__PlaySound_Feedback__are_equal(const robomaster_msgs__action__PlaySound_Feedback * lhs, const robomaster_msgs__action__PlaySound_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_Feedback__copy(
  const robomaster_msgs__action__PlaySound_Feedback * input,
  robomaster_msgs__action__PlaySound_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  // progress
  output->progress = input->progress;
  return true;
}

robomaster_msgs__action__PlaySound_Feedback *
robomaster_msgs__action__PlaySound_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_Feedback * msg = (robomaster_msgs__action__PlaySound_Feedback *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__action__PlaySound_Feedback));
  bool success = robomaster_msgs__action__PlaySound_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__action__PlaySound_Feedback__destroy(robomaster_msgs__action__PlaySound_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__action__PlaySound_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__action__PlaySound_Feedback__Sequence__init(robomaster_msgs__action__PlaySound_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_Feedback * data = NULL;

  if (size) {
    data = (robomaster_msgs__action__PlaySound_Feedback *)allocator.zero_allocate(size, sizeof(robomaster_msgs__action__PlaySound_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__action__PlaySound_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__action__PlaySound_Feedback__fini(&data[i - 1]);
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
robomaster_msgs__action__PlaySound_Feedback__Sequence__fini(robomaster_msgs__action__PlaySound_Feedback__Sequence * array)
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
      robomaster_msgs__action__PlaySound_Feedback__fini(&array->data[i]);
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

robomaster_msgs__action__PlaySound_Feedback__Sequence *
robomaster_msgs__action__PlaySound_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_Feedback__Sequence * array = (robomaster_msgs__action__PlaySound_Feedback__Sequence *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__action__PlaySound_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__action__PlaySound_Feedback__Sequence__destroy(robomaster_msgs__action__PlaySound_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__action__PlaySound_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__action__PlaySound_Feedback__Sequence__are_equal(const robomaster_msgs__action__PlaySound_Feedback__Sequence * lhs, const robomaster_msgs__action__PlaySound_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_Feedback__Sequence__copy(
  const robomaster_msgs__action__PlaySound_Feedback__Sequence * input,
  robomaster_msgs__action__PlaySound_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__action__PlaySound_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__action__PlaySound_Feedback * data =
      (robomaster_msgs__action__PlaySound_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__action__PlaySound_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__action__PlaySound_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "robomaster_msgs/action/detail/play_sound__functions.h"

bool
robomaster_msgs__action__PlaySound_SendGoal_Request__init(robomaster_msgs__action__PlaySound_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robomaster_msgs__action__PlaySound_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!robomaster_msgs__action__PlaySound_Goal__init(&msg->goal)) {
    robomaster_msgs__action__PlaySound_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
robomaster_msgs__action__PlaySound_SendGoal_Request__fini(robomaster_msgs__action__PlaySound_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  robomaster_msgs__action__PlaySound_Goal__fini(&msg->goal);
}

bool
robomaster_msgs__action__PlaySound_SendGoal_Request__are_equal(const robomaster_msgs__action__PlaySound_SendGoal_Request * lhs, const robomaster_msgs__action__PlaySound_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!robomaster_msgs__action__PlaySound_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_SendGoal_Request__copy(
  const robomaster_msgs__action__PlaySound_SendGoal_Request * input,
  robomaster_msgs__action__PlaySound_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!robomaster_msgs__action__PlaySound_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

robomaster_msgs__action__PlaySound_SendGoal_Request *
robomaster_msgs__action__PlaySound_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_SendGoal_Request * msg = (robomaster_msgs__action__PlaySound_SendGoal_Request *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__action__PlaySound_SendGoal_Request));
  bool success = robomaster_msgs__action__PlaySound_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__action__PlaySound_SendGoal_Request__destroy(robomaster_msgs__action__PlaySound_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__action__PlaySound_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence__init(robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_SendGoal_Request * data = NULL;

  if (size) {
    data = (robomaster_msgs__action__PlaySound_SendGoal_Request *)allocator.zero_allocate(size, sizeof(robomaster_msgs__action__PlaySound_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__action__PlaySound_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__action__PlaySound_SendGoal_Request__fini(&data[i - 1]);
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
robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence__fini(robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence * array)
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
      robomaster_msgs__action__PlaySound_SendGoal_Request__fini(&array->data[i]);
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

robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence *
robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence * array = (robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence__destroy(robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence__are_equal(const robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence * lhs, const robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence__copy(
  const robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence * input,
  robomaster_msgs__action__PlaySound_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__action__PlaySound_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__action__PlaySound_SendGoal_Request * data =
      (robomaster_msgs__action__PlaySound_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__action__PlaySound_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__action__PlaySound_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
robomaster_msgs__action__PlaySound_SendGoal_Response__init(robomaster_msgs__action__PlaySound_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    robomaster_msgs__action__PlaySound_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
robomaster_msgs__action__PlaySound_SendGoal_Response__fini(robomaster_msgs__action__PlaySound_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
robomaster_msgs__action__PlaySound_SendGoal_Response__are_equal(const robomaster_msgs__action__PlaySound_SendGoal_Response * lhs, const robomaster_msgs__action__PlaySound_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_SendGoal_Response__copy(
  const robomaster_msgs__action__PlaySound_SendGoal_Response * input,
  robomaster_msgs__action__PlaySound_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

robomaster_msgs__action__PlaySound_SendGoal_Response *
robomaster_msgs__action__PlaySound_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_SendGoal_Response * msg = (robomaster_msgs__action__PlaySound_SendGoal_Response *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__action__PlaySound_SendGoal_Response));
  bool success = robomaster_msgs__action__PlaySound_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__action__PlaySound_SendGoal_Response__destroy(robomaster_msgs__action__PlaySound_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__action__PlaySound_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence__init(robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_SendGoal_Response * data = NULL;

  if (size) {
    data = (robomaster_msgs__action__PlaySound_SendGoal_Response *)allocator.zero_allocate(size, sizeof(robomaster_msgs__action__PlaySound_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__action__PlaySound_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__action__PlaySound_SendGoal_Response__fini(&data[i - 1]);
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
robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence__fini(robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence * array)
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
      robomaster_msgs__action__PlaySound_SendGoal_Response__fini(&array->data[i]);
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

robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence *
robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence * array = (robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence__destroy(robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence__are_equal(const robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence * lhs, const robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence__copy(
  const robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence * input,
  robomaster_msgs__action__PlaySound_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__action__PlaySound_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__action__PlaySound_SendGoal_Response * data =
      (robomaster_msgs__action__PlaySound_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__action__PlaySound_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__action__PlaySound_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
robomaster_msgs__action__PlaySound_GetResult_Request__init(robomaster_msgs__action__PlaySound_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robomaster_msgs__action__PlaySound_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
robomaster_msgs__action__PlaySound_GetResult_Request__fini(robomaster_msgs__action__PlaySound_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
robomaster_msgs__action__PlaySound_GetResult_Request__are_equal(const robomaster_msgs__action__PlaySound_GetResult_Request * lhs, const robomaster_msgs__action__PlaySound_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_GetResult_Request__copy(
  const robomaster_msgs__action__PlaySound_GetResult_Request * input,
  robomaster_msgs__action__PlaySound_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

robomaster_msgs__action__PlaySound_GetResult_Request *
robomaster_msgs__action__PlaySound_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_GetResult_Request * msg = (robomaster_msgs__action__PlaySound_GetResult_Request *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__action__PlaySound_GetResult_Request));
  bool success = robomaster_msgs__action__PlaySound_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__action__PlaySound_GetResult_Request__destroy(robomaster_msgs__action__PlaySound_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__action__PlaySound_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__action__PlaySound_GetResult_Request__Sequence__init(robomaster_msgs__action__PlaySound_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_GetResult_Request * data = NULL;

  if (size) {
    data = (robomaster_msgs__action__PlaySound_GetResult_Request *)allocator.zero_allocate(size, sizeof(robomaster_msgs__action__PlaySound_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__action__PlaySound_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__action__PlaySound_GetResult_Request__fini(&data[i - 1]);
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
robomaster_msgs__action__PlaySound_GetResult_Request__Sequence__fini(robomaster_msgs__action__PlaySound_GetResult_Request__Sequence * array)
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
      robomaster_msgs__action__PlaySound_GetResult_Request__fini(&array->data[i]);
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

robomaster_msgs__action__PlaySound_GetResult_Request__Sequence *
robomaster_msgs__action__PlaySound_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_GetResult_Request__Sequence * array = (robomaster_msgs__action__PlaySound_GetResult_Request__Sequence *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__action__PlaySound_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__action__PlaySound_GetResult_Request__Sequence__destroy(robomaster_msgs__action__PlaySound_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__action__PlaySound_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__action__PlaySound_GetResult_Request__Sequence__are_equal(const robomaster_msgs__action__PlaySound_GetResult_Request__Sequence * lhs, const robomaster_msgs__action__PlaySound_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_GetResult_Request__Sequence__copy(
  const robomaster_msgs__action__PlaySound_GetResult_Request__Sequence * input,
  robomaster_msgs__action__PlaySound_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__action__PlaySound_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__action__PlaySound_GetResult_Request * data =
      (robomaster_msgs__action__PlaySound_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__action__PlaySound_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__action__PlaySound_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "robomaster_msgs/action/detail/play_sound__functions.h"

bool
robomaster_msgs__action__PlaySound_GetResult_Response__init(robomaster_msgs__action__PlaySound_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!robomaster_msgs__action__PlaySound_Result__init(&msg->result)) {
    robomaster_msgs__action__PlaySound_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
robomaster_msgs__action__PlaySound_GetResult_Response__fini(robomaster_msgs__action__PlaySound_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  robomaster_msgs__action__PlaySound_Result__fini(&msg->result);
}

bool
robomaster_msgs__action__PlaySound_GetResult_Response__are_equal(const robomaster_msgs__action__PlaySound_GetResult_Response * lhs, const robomaster_msgs__action__PlaySound_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!robomaster_msgs__action__PlaySound_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_GetResult_Response__copy(
  const robomaster_msgs__action__PlaySound_GetResult_Response * input,
  robomaster_msgs__action__PlaySound_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!robomaster_msgs__action__PlaySound_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

robomaster_msgs__action__PlaySound_GetResult_Response *
robomaster_msgs__action__PlaySound_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_GetResult_Response * msg = (robomaster_msgs__action__PlaySound_GetResult_Response *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__action__PlaySound_GetResult_Response));
  bool success = robomaster_msgs__action__PlaySound_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__action__PlaySound_GetResult_Response__destroy(robomaster_msgs__action__PlaySound_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__action__PlaySound_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__action__PlaySound_GetResult_Response__Sequence__init(robomaster_msgs__action__PlaySound_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_GetResult_Response * data = NULL;

  if (size) {
    data = (robomaster_msgs__action__PlaySound_GetResult_Response *)allocator.zero_allocate(size, sizeof(robomaster_msgs__action__PlaySound_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__action__PlaySound_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__action__PlaySound_GetResult_Response__fini(&data[i - 1]);
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
robomaster_msgs__action__PlaySound_GetResult_Response__Sequence__fini(robomaster_msgs__action__PlaySound_GetResult_Response__Sequence * array)
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
      robomaster_msgs__action__PlaySound_GetResult_Response__fini(&array->data[i]);
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

robomaster_msgs__action__PlaySound_GetResult_Response__Sequence *
robomaster_msgs__action__PlaySound_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_GetResult_Response__Sequence * array = (robomaster_msgs__action__PlaySound_GetResult_Response__Sequence *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__action__PlaySound_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__action__PlaySound_GetResult_Response__Sequence__destroy(robomaster_msgs__action__PlaySound_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__action__PlaySound_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__action__PlaySound_GetResult_Response__Sequence__are_equal(const robomaster_msgs__action__PlaySound_GetResult_Response__Sequence * lhs, const robomaster_msgs__action__PlaySound_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_GetResult_Response__Sequence__copy(
  const robomaster_msgs__action__PlaySound_GetResult_Response__Sequence * input,
  robomaster_msgs__action__PlaySound_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__action__PlaySound_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__action__PlaySound_GetResult_Response * data =
      (robomaster_msgs__action__PlaySound_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__action__PlaySound_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__action__PlaySound_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "robomaster_msgs/action/detail/play_sound__functions.h"

bool
robomaster_msgs__action__PlaySound_FeedbackMessage__init(robomaster_msgs__action__PlaySound_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robomaster_msgs__action__PlaySound_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!robomaster_msgs__action__PlaySound_Feedback__init(&msg->feedback)) {
    robomaster_msgs__action__PlaySound_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
robomaster_msgs__action__PlaySound_FeedbackMessage__fini(robomaster_msgs__action__PlaySound_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  robomaster_msgs__action__PlaySound_Feedback__fini(&msg->feedback);
}

bool
robomaster_msgs__action__PlaySound_FeedbackMessage__are_equal(const robomaster_msgs__action__PlaySound_FeedbackMessage * lhs, const robomaster_msgs__action__PlaySound_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!robomaster_msgs__action__PlaySound_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_FeedbackMessage__copy(
  const robomaster_msgs__action__PlaySound_FeedbackMessage * input,
  robomaster_msgs__action__PlaySound_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!robomaster_msgs__action__PlaySound_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

robomaster_msgs__action__PlaySound_FeedbackMessage *
robomaster_msgs__action__PlaySound_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_FeedbackMessage * msg = (robomaster_msgs__action__PlaySound_FeedbackMessage *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__action__PlaySound_FeedbackMessage));
  bool success = robomaster_msgs__action__PlaySound_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__action__PlaySound_FeedbackMessage__destroy(robomaster_msgs__action__PlaySound_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__action__PlaySound_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence__init(robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_FeedbackMessage * data = NULL;

  if (size) {
    data = (robomaster_msgs__action__PlaySound_FeedbackMessage *)allocator.zero_allocate(size, sizeof(robomaster_msgs__action__PlaySound_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__action__PlaySound_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__action__PlaySound_FeedbackMessage__fini(&data[i - 1]);
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
robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence__fini(robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence * array)
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
      robomaster_msgs__action__PlaySound_FeedbackMessage__fini(&array->data[i]);
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

robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence *
robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence * array = (robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence *)allocator.allocate(sizeof(robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence__destroy(robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence__are_equal(const robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence * lhs, const robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence__copy(
  const robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence * input,
  robomaster_msgs__action__PlaySound_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__action__PlaySound_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__action__PlaySound_FeedbackMessage * data =
      (robomaster_msgs__action__PlaySound_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__action__PlaySound_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__action__PlaySound_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__action__PlaySound_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
