// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov10_msg:msg/DetectionArray.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__DETECTION_ARRAY__STRUCT_H_
#define YOLOV10_MSG__MSG__DETAIL__DETECTION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detections'
#include "yolov10_msg/msg/detail/detection__struct.h"

/// Struct defined in msg/DetectionArray in the package yolov10_msg.
/**
  * represents all yolov10 detections in one frame
 */
typedef struct yolov10_msg__msg__DetectionArray
{
  std_msgs__msg__Header header;
  yolov10_msg__msg__Detection__Sequence detections;
} yolov10_msg__msg__DetectionArray;

// Struct for a sequence of yolov10_msg__msg__DetectionArray.
typedef struct yolov10_msg__msg__DetectionArray__Sequence
{
  yolov10_msg__msg__DetectionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov10_msg__msg__DetectionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV10_MSG__MSG__DETAIL__DETECTION_ARRAY__STRUCT_H_
