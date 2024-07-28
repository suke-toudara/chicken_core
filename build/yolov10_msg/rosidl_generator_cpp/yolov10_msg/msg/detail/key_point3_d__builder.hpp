// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov10_msg:msg/KeyPoint3D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__KEY_POINT3_D__BUILDER_HPP_
#define YOLOV10_MSG__MSG__DETAIL__KEY_POINT3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov10_msg/msg/detail/key_point3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov10_msg
{

namespace msg
{

namespace builder
{

class Init_KeyPoint3D_score
{
public:
  explicit Init_KeyPoint3D_score(::yolov10_msg::msg::KeyPoint3D & msg)
  : msg_(msg)
  {}
  ::yolov10_msg::msg::KeyPoint3D score(::yolov10_msg::msg::KeyPoint3D::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov10_msg::msg::KeyPoint3D msg_;
};

class Init_KeyPoint3D_point
{
public:
  explicit Init_KeyPoint3D_point(::yolov10_msg::msg::KeyPoint3D & msg)
  : msg_(msg)
  {}
  Init_KeyPoint3D_score point(::yolov10_msg::msg::KeyPoint3D::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_KeyPoint3D_score(msg_);
  }

private:
  ::yolov10_msg::msg::KeyPoint3D msg_;
};

class Init_KeyPoint3D_id
{
public:
  Init_KeyPoint3D_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint3D_point id(::yolov10_msg::msg::KeyPoint3D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_KeyPoint3D_point(msg_);
  }

private:
  ::yolov10_msg::msg::KeyPoint3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov10_msg::msg::KeyPoint3D>()
{
  return yolov10_msg::msg::builder::Init_KeyPoint3D_id();
}

}  // namespace yolov10_msg

#endif  // YOLOV10_MSG__MSG__DETAIL__KEY_POINT3_D__BUILDER_HPP_
