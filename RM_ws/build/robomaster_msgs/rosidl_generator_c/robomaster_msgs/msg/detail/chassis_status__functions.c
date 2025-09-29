// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robomaster_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice
#include "robomaster_msgs/msg/detail/chassis_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
robomaster_msgs__msg__ChassisStatus__init(robomaster_msgs__msg__ChassisStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robomaster_msgs__msg__ChassisStatus__fini(msg);
    return false;
  }
  // is_static
  // up_hill
  // down_hill
  // on_slope
  // is_pick_up
  // slip
  // impact_x
  // impact_y
  // impact_z
  // roll_over
  // hill
  return true;
}

void
robomaster_msgs__msg__ChassisStatus__fini(robomaster_msgs__msg__ChassisStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // is_static
  // up_hill
  // down_hill
  // on_slope
  // is_pick_up
  // slip
  // impact_x
  // impact_y
  // impact_z
  // roll_over
  // hill
}

bool
robomaster_msgs__msg__ChassisStatus__are_equal(const robomaster_msgs__msg__ChassisStatus * lhs, const robomaster_msgs__msg__ChassisStatus * rhs)
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
  // is_static
  if (lhs->is_static != rhs->is_static) {
    return false;
  }
  // up_hill
  if (lhs->up_hill != rhs->up_hill) {
    return false;
  }
  // down_hill
  if (lhs->down_hill != rhs->down_hill) {
    return false;
  }
  // on_slope
  if (lhs->on_slope != rhs->on_slope) {
    return false;
  }
  // is_pick_up
  if (lhs->is_pick_up != rhs->is_pick_up) {
    return false;
  }
  // slip
  if (lhs->slip != rhs->slip) {
    return false;
  }
  // impact_x
  if (lhs->impact_x != rhs->impact_x) {
    return false;
  }
  // impact_y
  if (lhs->impact_y != rhs->impact_y) {
    return false;
  }
  // impact_z
  if (lhs->impact_z != rhs->impact_z) {
    return false;
  }
  // roll_over
  if (lhs->roll_over != rhs->roll_over) {
    return false;
  }
  // hill
  if (lhs->hill != rhs->hill) {
    return false;
  }
  return true;
}

bool
robomaster_msgs__msg__ChassisStatus__copy(
  const robomaster_msgs__msg__ChassisStatus * input,
  robomaster_msgs__msg__ChassisStatus * output)
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
  // is_static
  output->is_static = input->is_static;
  // up_hill
  output->up_hill = input->up_hill;
  // down_hill
  output->down_hill = input->down_hill;
  // on_slope
  output->on_slope = input->on_slope;
  // is_pick_up
  output->is_pick_up = input->is_pick_up;
  // slip
  output->slip = input->slip;
  // impact_x
  output->impact_x = input->impact_x;
  // impact_y
  output->impact_y = input->impact_y;
  // impact_z
  output->impact_z = input->impact_z;
  // roll_over
  output->roll_over = input->roll_over;
  // hill
  output->hill = input->hill;
  return true;
}

robomaster_msgs__msg__ChassisStatus *
robomaster_msgs__msg__ChassisStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__ChassisStatus * msg = (robomaster_msgs__msg__ChassisStatus *)allocator.allocate(sizeof(robomaster_msgs__msg__ChassisStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robomaster_msgs__msg__ChassisStatus));
  bool success = robomaster_msgs__msg__ChassisStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robomaster_msgs__msg__ChassisStatus__destroy(robomaster_msgs__msg__ChassisStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robomaster_msgs__msg__ChassisStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robomaster_msgs__msg__ChassisStatus__Sequence__init(robomaster_msgs__msg__ChassisStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__ChassisStatus * data = NULL;

  if (size) {
    data = (robomaster_msgs__msg__ChassisStatus *)allocator.zero_allocate(size, sizeof(robomaster_msgs__msg__ChassisStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robomaster_msgs__msg__ChassisStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robomaster_msgs__msg__ChassisStatus__fini(&data[i - 1]);
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
robomaster_msgs__msg__ChassisStatus__Sequence__fini(robomaster_msgs__msg__ChassisStatus__Sequence * array)
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
      robomaster_msgs__msg__ChassisStatus__fini(&array->data[i]);
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

robomaster_msgs__msg__ChassisStatus__Sequence *
robomaster_msgs__msg__ChassisStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robomaster_msgs__msg__ChassisStatus__Sequence * array = (robomaster_msgs__msg__ChassisStatus__Sequence *)allocator.allocate(sizeof(robomaster_msgs__msg__ChassisStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robomaster_msgs__msg__ChassisStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robomaster_msgs__msg__ChassisStatus__Sequence__destroy(robomaster_msgs__msg__ChassisStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robomaster_msgs__msg__ChassisStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robomaster_msgs__msg__ChassisStatus__Sequence__are_equal(const robomaster_msgs__msg__ChassisStatus__Sequence * lhs, const robomaster_msgs__msg__ChassisStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robomaster_msgs__msg__ChassisStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robomaster_msgs__msg__ChassisStatus__Sequence__copy(
  const robomaster_msgs__msg__ChassisStatus__Sequence * input,
  robomaster_msgs__msg__ChassisStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robomaster_msgs__msg__ChassisStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robomaster_msgs__msg__ChassisStatus * data =
      (robomaster_msgs__msg__ChassisStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robomaster_msgs__msg__ChassisStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robomaster_msgs__msg__ChassisStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robomaster_msgs__msg__ChassisStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
