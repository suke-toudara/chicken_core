// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov10_msg:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_
#define YOLOV10_MSG__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_

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
#include "yolov10_msg/msg/detail/key_point2_d__struct.h"

/// Struct defined in msg/KeyPoint2DArray in the package yolov10_msg.
/**
  * represents all the keypoints for human pose estimation
 */
typedef struct yolov10_msg__msg__KeyPoint2DArray
{
  yolov10_msg__msg__KeyPoint2D__Sequence data;
} yolov10_msg__msg__KeyPoint2DArray;

// Struct for a sequence of yolov10_msg__msg__KeyPoint2DArray.
typedef struct yolov10_msg__msg__KeyPoint2DArray__Sequence
{
  yolov10_msg__msg__KeyPoint2DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov10_msg__msg__KeyPoint2DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV10_MSG__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_
