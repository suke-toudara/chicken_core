// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from yolov10_msg:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__BOUNDING_BOX2_D__FUNCTIONS_H_
#define YOLOV10_MSG__MSG__DETAIL__BOUNDING_BOX2_D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "yolov10_msg/msg/rosidl_generator_c__visibility_control.h"

#include "yolov10_msg/msg/detail/bounding_box2_d__struct.h"

/// Initialize msg/BoundingBox2D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * yolov10_msg__msg__BoundingBox2D
 * )) before or use
 * yolov10_msg__msg__BoundingBox2D__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
bool
yolov10_msg__msg__BoundingBox2D__init(yolov10_msg__msg__BoundingBox2D * msg);

/// Finalize msg/BoundingBox2D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
void
yolov10_msg__msg__BoundingBox2D__fini(yolov10_msg__msg__BoundingBox2D * msg);

/// Create msg/BoundingBox2D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * yolov10_msg__msg__BoundingBox2D__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
yolov10_msg__msg__BoundingBox2D *
yolov10_msg__msg__BoundingBox2D__create();

/// Destroy msg/BoundingBox2D message.
/**
 * It calls
 * yolov10_msg__msg__BoundingBox2D__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
void
yolov10_msg__msg__BoundingBox2D__destroy(yolov10_msg__msg__BoundingBox2D * msg);

/// Check for msg/BoundingBox2D message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
bool
yolov10_msg__msg__BoundingBox2D__are_equal(const yolov10_msg__msg__BoundingBox2D * lhs, const yolov10_msg__msg__BoundingBox2D * rhs);

/// Copy a msg/BoundingBox2D message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
bool
yolov10_msg__msg__BoundingBox2D__copy(
  const yolov10_msg__msg__BoundingBox2D * input,
  yolov10_msg__msg__BoundingBox2D * output);

/// Initialize array of msg/BoundingBox2D messages.
/**
 * It allocates the memory for the number of elements and calls
 * yolov10_msg__msg__BoundingBox2D__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
bool
yolov10_msg__msg__BoundingBox2D__Sequence__init(yolov10_msg__msg__BoundingBox2D__Sequence * array, size_t size);

/// Finalize array of msg/BoundingBox2D messages.
/**
 * It calls
 * yolov10_msg__msg__BoundingBox2D__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
void
yolov10_msg__msg__BoundingBox2D__Sequence__fini(yolov10_msg__msg__BoundingBox2D__Sequence * array);

/// Create array of msg/BoundingBox2D messages.
/**
 * It allocates the memory for the array and calls
 * yolov10_msg__msg__BoundingBox2D__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
yolov10_msg__msg__BoundingBox2D__Sequence *
yolov10_msg__msg__BoundingBox2D__Sequence__create(size_t size);

/// Destroy array of msg/BoundingBox2D messages.
/**
 * It calls
 * yolov10_msg__msg__BoundingBox2D__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
void
yolov10_msg__msg__BoundingBox2D__Sequence__destroy(yolov10_msg__msg__BoundingBox2D__Sequence * array);

/// Check for msg/BoundingBox2D message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
bool
yolov10_msg__msg__BoundingBox2D__Sequence__are_equal(const yolov10_msg__msg__BoundingBox2D__Sequence * lhs, const yolov10_msg__msg__BoundingBox2D__Sequence * rhs);

/// Copy an array of msg/BoundingBox2D messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_yolov10_msg
bool
yolov10_msg__msg__BoundingBox2D__Sequence__copy(
  const yolov10_msg__msg__BoundingBox2D__Sequence * input,
  yolov10_msg__msg__BoundingBox2D__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YOLOV10_MSG__MSG__DETAIL__BOUNDING_BOX2_D__FUNCTIONS_H_
