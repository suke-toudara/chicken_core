// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov10_msg:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__POINT2_D__STRUCT_H_
#define YOLOV10_MSG__MSG__DETAIL__POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point2D in the package yolov10_msg.
/**
  * 2D point in pixel coordinates
 */
typedef struct yolov10_msg__msg__Point2D
{
  double x;
  double y;
} yolov10_msg__msg__Point2D;

// Struct for a sequence of yolov10_msg__msg__Point2D.
typedef struct yolov10_msg__msg__Point2D__Sequence
{
  yolov10_msg__msg__Point2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov10_msg__msg__Point2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV10_MSG__MSG__DETAIL__POINT2_D__STRUCT_H_
