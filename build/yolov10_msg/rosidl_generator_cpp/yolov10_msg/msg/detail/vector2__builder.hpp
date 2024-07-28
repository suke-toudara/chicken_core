// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov10_msg:msg/Vector2.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__VECTOR2__BUILDER_HPP_
#define YOLOV10_MSG__MSG__DETAIL__VECTOR2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov10_msg/msg/detail/vector2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov10_msg
{

namespace msg
{

namespace builder
{

class Init_Vector2_y
{
public:
  explicit Init_Vector2_y(::yolov10_msg::msg::Vector2 & msg)
  : msg_(msg)
  {}
  ::yolov10_msg::msg::Vector2 y(::yolov10_msg::msg::Vector2::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov10_msg::msg::Vector2 msg_;
};

class Init_Vector2_x
{
public:
  Init_Vector2_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector2_y x(::yolov10_msg::msg::Vector2::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector2_y(msg_);
  }

private:
  ::yolov10_msg::msg::Vector2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov10_msg::msg::Vector2>()
{
  return yolov10_msg::msg::builder::Init_Vector2_x();
}

}  // namespace yolov10_msg

#endif  // YOLOV10_MSG__MSG__DETAIL__VECTOR2__BUILDER_HPP_
