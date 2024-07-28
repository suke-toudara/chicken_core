// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov10_msg:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
#define YOLOV10_MSG__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "yolov10_msg/msg/detail/pose2_d__struct.h"
// Member 'size'
#include "yolov10_msg/msg/detail/vector2__struct.h"

/// Struct defined in msg/BoundingBox2D in the package yolov10_msg.
/**
  * 2D position and orientation of the bounding box center
 */
typedef struct yolov10_msg__msg__BoundingBox2D
{
  yolov10_msg__msg__Pose2D center;
  /// total size of the bounding box, in pixels, surrounding the object's center
  yolov10_msg__msg__Vector2 size;
} yolov10_msg__msg__BoundingBox2D;

// Struct for a sequence of yolov10_msg__msg__BoundingBox2D.
typedef struct yolov10_msg__msg__BoundingBox2D__Sequence
{
  yolov10_msg__msg__BoundingBox2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov10_msg__msg__BoundingBox2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV10_MSG__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
