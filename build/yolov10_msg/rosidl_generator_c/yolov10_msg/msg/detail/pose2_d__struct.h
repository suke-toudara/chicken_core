// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov10_msg:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__POSE2_D__STRUCT_H_
#define YOLOV10_MSG__MSG__DETAIL__POSE2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "yolov10_msg/msg/detail/point2_d__struct.h"

/// Struct defined in msg/Pose2D in the package yolov10_msg.
/**
  * 2D position in pixel coordinates
 */
typedef struct yolov10_msg__msg__Pose2D
{
  yolov10_msg__msg__Point2D position;
  double theta;
} yolov10_msg__msg__Pose2D;

// Struct for a sequence of yolov10_msg__msg__Pose2D.
typedef struct yolov10_msg__msg__Pose2D__Sequence
{
  yolov10_msg__msg__Pose2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov10_msg__msg__Pose2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV10_MSG__MSG__DETAIL__POSE2_D__STRUCT_H_
