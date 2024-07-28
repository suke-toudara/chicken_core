// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov10_msg:msg/DetectionArray.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__DETECTION_ARRAY__BUILDER_HPP_
#define YOLOV10_MSG__MSG__DETAIL__DETECTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov10_msg/msg/detail/detection_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov10_msg
{

namespace msg
{

namespace builder
{

class Init_DetectionArray_detections
{
public:
  explicit Init_DetectionArray_detections(::yolov10_msg::msg::DetectionArray & msg)
  : msg_(msg)
  {}
  ::yolov10_msg::msg::DetectionArray detections(::yolov10_msg::msg::DetectionArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov10_msg::msg::DetectionArray msg_;
};

class Init_DetectionArray_header
{
public:
  Init_DetectionArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionArray_detections header(::yolov10_msg::msg::DetectionArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectionArray_detections(msg_);
  }

private:
  ::yolov10_msg::msg::DetectionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov10_msg::msg::DetectionArray>()
{
  return yolov10_msg::msg::builder::Init_DetectionArray_header();
}

}  // namespace yolov10_msg

#endif  // YOLOV10_MSG__MSG__DETAIL__DETECTION_ARRAY__BUILDER_HPP_
