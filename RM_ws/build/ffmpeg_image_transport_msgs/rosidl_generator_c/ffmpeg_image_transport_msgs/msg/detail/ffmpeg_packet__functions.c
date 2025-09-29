// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ffmpeg_image_transport_msgs:msg/FFMPEGPacket.idl
// generated code does not contain a copyright notice
#include "ffmpeg_image_transport_msgs/msg/detail/ffmpeg_packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `encoding`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__init(ffmpeg_image_transport_msgs__msg__FFMPEGPacket * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini(msg);
    return false;
  }
  // width
  // height
  // encoding
  if (!rosidl_runtime_c__String__init(&msg->encoding)) {
    ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini(msg);
    return false;
  }
  // pts
  // flags
  // is_bigendian
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini(msg);
    return false;
  }
  return true;
}

void
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini(ffmpeg_image_transport_msgs__msg__FFMPEGPacket * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // width
  // height
  // encoding
  rosidl_runtime_c__String__fini(&msg->encoding);
  // pts
  // flags
  // is_bigendian
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__are_equal(const ffmpeg_image_transport_msgs__msg__FFMPEGPacket * lhs, const ffmpeg_image_transport_msgs__msg__FFMPEGPacket * rhs)
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
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // encoding
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->encoding), &(rhs->encoding)))
  {
    return false;
  }
  // pts
  if (lhs->pts != rhs->pts) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // is_bigendian
  if (lhs->is_bigendian != rhs->is_bigendian) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__copy(
  const ffmpeg_image_transport_msgs__msg__FFMPEGPacket * input,
  ffmpeg_image_transport_msgs__msg__FFMPEGPacket * output)
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
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // encoding
  if (!rosidl_runtime_c__String__copy(
      &(input->encoding), &(output->encoding)))
  {
    return false;
  }
  // pts
  output->pts = input->pts;
  // flags
  output->flags = input->flags;
  // is_bigendian
  output->is_bigendian = input->is_bigendian;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

ffmpeg_image_transport_msgs__msg__FFMPEGPacket *
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ffmpeg_image_transport_msgs__msg__FFMPEGPacket * msg = (ffmpeg_image_transport_msgs__msg__FFMPEGPacket *)allocator.allocate(sizeof(ffmpeg_image_transport_msgs__msg__FFMPEGPacket), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ffmpeg_image_transport_msgs__msg__FFMPEGPacket));
  bool success = ffmpeg_image_transport_msgs__msg__FFMPEGPacket__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__destroy(ffmpeg_image_transport_msgs__msg__FFMPEGPacket * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__init(ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ffmpeg_image_transport_msgs__msg__FFMPEGPacket * data = NULL;

  if (size) {
    data = (ffmpeg_image_transport_msgs__msg__FFMPEGPacket *)allocator.zero_allocate(size, sizeof(ffmpeg_image_transport_msgs__msg__FFMPEGPacket), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ffmpeg_image_transport_msgs__msg__FFMPEGPacket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini(&data[i - 1]);
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
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__fini(ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * array)
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
      ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini(&array->data[i]);
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

ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence *
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * array = (ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence *)allocator.allocate(sizeof(ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__destroy(ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__are_equal(const ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * lhs, const ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ffmpeg_image_transport_msgs__msg__FFMPEGPacket__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence__copy(
  const ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * input,
  ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ffmpeg_image_transport_msgs__msg__FFMPEGPacket);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ffmpeg_image_transport_msgs__msg__FFMPEGPacket * data =
      (ffmpeg_image_transport_msgs__msg__FFMPEGPacket *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ffmpeg_image_transport_msgs__msg__FFMPEGPacket__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ffmpeg_image_transport_msgs__msg__FFMPEGPacket__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ffmpeg_image_transport_msgs__msg__FFMPEGPacket__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
