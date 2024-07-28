// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov10_msg:msg/Mask.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__MASK__STRUCT_H_
#define YOLOV10_MSG__MSG__DETAIL__MASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "yolov10_msg/msg/detail/point2_d__struct.h"

/// Struct defined in msg/Mask in the package yolov10_msg.
/**
  * segmentation mask for one instance
 */
typedef struct yolov10_msg__msg__Mask
{
  /// size of the original image
  int32_t height;
  int32_t width;
  /// mask data represeted by the points of the border of the mask
  yolov10_msg__msg__Point2D__Sequence data;
} yolov10_msg__msg__Mask;

// Struct for a sequence of yolov10_msg__msg__Mask.
typedef struct yolov10_msg__msg__Mask__Sequence
{
  yolov10_msg__msg__Mask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov10_msg__msg__Mask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV10_MSG__MSG__DETAIL__MASK__STRUCT_H_
