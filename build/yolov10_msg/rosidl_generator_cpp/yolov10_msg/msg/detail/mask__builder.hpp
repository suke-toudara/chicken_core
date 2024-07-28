// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov10_msg:msg/Mask.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__MASK__BUILDER_HPP_
#define YOLOV10_MSG__MSG__DETAIL__MASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov10_msg/msg/detail/mask__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov10_msg
{

namespace msg
{

namespace builder
{

class Init_Mask_data
{
public:
  explicit Init_Mask_data(::yolov10_msg::msg::Mask & msg)
  : msg_(msg)
  {}
  ::yolov10_msg::msg::Mask data(::yolov10_msg::msg::Mask::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov10_msg::msg::Mask msg_;
};

class Init_Mask_width
{
public:
  explicit Init_Mask_width(::yolov10_msg::msg::Mask & msg)
  : msg_(msg)
  {}
  Init_Mask_data width(::yolov10_msg::msg::Mask::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Mask_data(msg_);
  }

private:
  ::yolov10_msg::msg::Mask msg_;
};

class Init_Mask_height
{
public:
  Init_Mask_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mask_width height(::yolov10_msg::msg::Mask::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Mask_width(msg_);
  }

private:
  ::yolov10_msg::msg::Mask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov10_msg::msg::Mask>()
{
  return yolov10_msg::msg::builder::Init_Mask_height();
}

}  // namespace yolov10_msg

#endif  // YOLOV10_MSG__MSG__DETAIL__MASK__BUILDER_HPP_
