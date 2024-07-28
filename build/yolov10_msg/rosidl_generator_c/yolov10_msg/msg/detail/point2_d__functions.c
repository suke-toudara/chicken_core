// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolov10_msg:msg/Point2D.idl
// generated code does not contain a copyright notice
#include "yolov10_msg/msg/detail/point2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yolov10_msg__msg__Point2D__init(yolov10_msg__msg__Point2D * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
yolov10_msg__msg__Point2D__fini(yolov10_msg__msg__Point2D * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
yolov10_msg__msg__Point2D__are_equal(const yolov10_msg__msg__Point2D * lhs, const yolov10_msg__msg__Point2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
yolov10_msg__msg__Point2D__copy(
  const yolov10_msg__msg__Point2D * input,
  yolov10_msg__msg__Point2D * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

yolov10_msg__msg__Point2D *
yolov10_msg__msg__Point2D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov10_msg__msg__Point2D * msg = (yolov10_msg__msg__Point2D *)allocator.allocate(sizeof(yolov10_msg__msg__Point2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolov10_msg__msg__Point2D));
  bool success = yolov10_msg__msg__Point2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolov10_msg__msg__Point2D__destroy(yolov10_msg__msg__Point2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolov10_msg__msg__Point2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolov10_msg__msg__Point2D__Sequence__init(yolov10_msg__msg__Point2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov10_msg__msg__Point2D * data = NULL;

  if (size) {
    data = (yolov10_msg__msg__Point2D *)allocator.zero_allocate(size, sizeof(yolov10_msg__msg__Point2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolov10_msg__msg__Point2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolov10_msg__msg__Point2D__fini(&data[i - 1]);
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
yolov10_msg__msg__Point2D__Sequence__fini(yolov10_msg__msg__Point2D__Sequence * array)
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
      yolov10_msg__msg__Point2D__fini(&array->data[i]);
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

yolov10_msg__msg__Point2D__Sequence *
yolov10_msg__msg__Point2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov10_msg__msg__Point2D__Sequence * array = (yolov10_msg__msg__Point2D__Sequence *)allocator.allocate(sizeof(yolov10_msg__msg__Point2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolov10_msg__msg__Point2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolov10_msg__msg__Point2D__Sequence__destroy(yolov10_msg__msg__Point2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolov10_msg__msg__Point2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolov10_msg__msg__Point2D__Sequence__are_equal(const yolov10_msg__msg__Point2D__Sequence * lhs, const yolov10_msg__msg__Point2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolov10_msg__msg__Point2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolov10_msg__msg__Point2D__Sequence__copy(
  const yolov10_msg__msg__Point2D__Sequence * input,
  yolov10_msg__msg__Point2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolov10_msg__msg__Point2D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolov10_msg__msg__Point2D * data =
      (yolov10_msg__msg__Point2D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolov10_msg__msg__Point2D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolov10_msg__msg__Point2D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolov10_msg__msg__Point2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
