// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomaster_msgs:msg/Detection.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `people`
#include "robomaster_msgs/msg/detail/detected_person__functions.h"
// Member `robots`
#include "robomaster_msgs/msg/detail/detected_robot__functions.h"
// Member `gestures`
#include "robomaster_msgs/msg/detail/detected_gesture__functions.h"
// Member `lines`
#include "robomaster_msgs/msg/detail/detected_line__functions.h"
// Member `markers`
#include "robomaster_msgs/msg/detail/detected_marker__functions.h"

bool
robomaster_msgs__msg__Detection__init(robomaster_msgs__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robomaster_msgs__msg__Detection__fini(msg);
    return false;
  }
  // people
  if (!robomaster_msgs__msg__DetectedPerson__Sequence__init(&msg->people, 0)) {
    robomaster_msgs__msg__Detection__fini(msg);
    return false;
  }
  // robots
  if (!robomaster_msgs__msg__DetectedRobot__Sequence__init(&msg->robots, 0)) {
    robomaster_msgs__msg__Detection__fini(msg);
    return false;
  }
  // gestures
  if (!robomaster_msgs__msg__DetectedGesture__Sequence__init(&msg->gestures, 0)) {
    robomaster_msgs__msg__Detection__fini(msg);
    return false;
  }
  // lines
  if (!robomaster_msgs__msg__DetectedLine__Sequence__init(&msg->lines, 0)) {
    robomaster_msgs__msg__Detection__fini(msg);
    return false;
  }
  // markers
  if (!robomaster_msgs__msg__DetectedMarker__Sequence__init(&msg->markers, 0)) {
    robomaster_msgs__msg__Detection__fini(msg);
    return false;
  }
  return true;
}

void
robomaster_msgs__msg__Detection__fini(robomaster_msgs__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // people
  robomaster_msgs__msg__DetectedPerson__Sequence__fini(&msg->people);
  // robots
  robomaster_msgs__msg__DetectedRobot__Sequence__fini(&msg->robots);
  // gestures
  robomaster_msgs__msg__DetectedGesture__Sequence__fini(&msg->gestures);
  // lines
  robomaster_msgs__msg__DetectedLine__Sequence__fini(&msg->lines);
  // markers
  robomaster_msgs__msg__DetectedMarker__Sequence__fini(&msg->markers);
}

bool
robomaster_msgs__msg__Detection__are_equal(const robomaster_msgs__msg__Detection * lhs, const robomaster_msgs__msg__Detection * rhs)
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
  // people
  if (!robomaster_msgs__msg__DetectedPerson__Sequence__are_equal(
      &(lhs->people), &(rhs->people)))
  {
    return false;
  }
  // robots
  if (!robomaster_msgs__msg__DetectedRobot__Sequence__are_equal(
      &(lhs->robots), &(rhs->robots)))
  {
    return false;
  }
  // gestures
  if (!robomaster_msgs__msg__DetectedGesture__Sequence__are_equal(
      &(lhs->gestures), &(rhs->gestures)))
  {
    return false;
  }
  // lines
  if (!robomaster_msgs__msg__DetectedLine__Sequence__are_equal(
      &(lhs->lines), &(rhs->lines)))
  {
    return false;
  }
  // markers
  if (!robomaster_msgs__msg__DetectedMarker__Sequence__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  return true;
}

bool
robomaster_msgs__msg__Detection__copy(
  const robomaster_msgs__msg__Detection * input,
  robomaster_msgs__msg__Detection * output)
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
  // people
  if (!robomaster_msgs__msg__DetectedPerson__Sequence__copy(
      &(input->people), &(output->people)))
  {
    return false;
  }
  // robots
  if (!robomaster_msgs__msg__DetectedRobot__Sequence__copy(
      &(input->robots), &(output->robots)))
  {
    return false;
  }
  // gestures
  if (!robomaster_msgs__msg__DetectedGesture__Sequence__copy(
      &(input->gestures), &(output->gestures)))
  {
    return false;
  }
  // lines
  if (!robomaster_msgs__msg__DetectedLine__Sequence__copy(
      &(input->lines), &(output->lines)))
  {
    return false;
  }
  // markers
  if (!robomaster_msgs__msg__DetectedMarker__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  return true;
}

robomaster_msgs__msg__Detection *
robomaster_msgs__msg__Detection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__Detection * msg = (robomaster_msgs__msg__Detection *)allocator.allocate(sizeof(robomaster_msgs__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__msg__Detection));
  bool success = robomaster_msgs__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__msg__Detection__destroy(robomaster_msgs__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__msg__Detection__Sequence__init(robomaster_msgs__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__Detection * data = NULL;

  if (size) {
    data = (robomaster_msgs__msg__Detection *)allocator.zero_allocate(size, sizeof(robomaster_msgs__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__msg__Detection__fini(&data[i - 1]);
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
robomaster_msgs__msg__Detection__Sequence__fini(robomaster_msgs__msg__Detection__Sequence * array)
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
      robomaster_msgs__msg__Detection__fini(&array->data[i]);
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

robomaster_msgs__msg__Detection__Sequence *
robomaster_msgs__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__Detection__Sequence * array = (robomaster_msgs__msg__Detection__Sequence *)allocator.allocate(sizeof(robomaster_msgs__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__msg__Detection__Sequence__destroy(robomaster_msgs__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__msg__Detection__Sequence__are_equal(const robomaster_msgs__msg__Detection__Sequence * lhs, const robomaster_msgs__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__msg__Detection__Sequence__copy(
  const robomaster_msgs__msg__Detection__Sequence * input,
  robomaster_msgs__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__msg__Detection * data =
      (robomaster_msgs__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
