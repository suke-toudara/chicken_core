// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov10_msg:msg/KeyPoint2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__KEY_POINT2_D__STRUCT_H_
#define YOLOV10_MSG__MSG__DETAIL__KEY_POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "yolov10_msg/msg/detail/point2_d__struct.h"

/// Struct defined in msg/KeyPoint2D in the package yolov10_msg.
/**
  * one keypoint for human pose estimation
 */
typedef struct yolov10_msg__msg__KeyPoint2D
{
  /// id of the keypoint
  int32_t id;
  /// 2D point in pixels
  yolov10_msg__msg__Point2D point;
  /// conf of the keypoint
  double score;
} yolov10_msg__msg__KeyPoint2D;

// Struct for a sequence of yolov10_msg__msg__KeyPoint2D.
typedef struct yolov10_msg__msg__KeyPoint2D__Sequence
{
  yolov10_msg__msg__KeyPoint2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov10_msg__msg__KeyPoint2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV10_MSG__MSG__DETAIL__KEY_POINT2_D__STRUCT_H_
