// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov10_msg:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__KEY_POINT2_D_ARRAY__BUILDER_HPP_
#define YOLOV10_MSG__MSG__DETAIL__KEY_POINT2_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov10_msg/msg/detail/key_point2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov10_msg
{

namespace msg
{

namespace builder
{

class Init_KeyPoint2DArray_data
{
public:
  Init_KeyPoint2DArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yolov10_msg::msg::KeyPoint2DArray data(::yolov10_msg::msg::KeyPoint2DArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov10_msg::msg::KeyPoint2DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov10_msg::msg::KeyPoint2DArray>()
{
  return yolov10_msg::msg::builder::Init_KeyPoint2DArray_data();
}

}  // namespace yolov10_msg

#endif  // YOLOV10_MSG__MSG__DETAIL__KEY_POINT2_D_ARRAY__BUILDER_HPP_
