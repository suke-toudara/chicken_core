// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov10_msg:msg/BoundingBox3D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__BOUNDING_BOX3_D__BUILDER_HPP_
#define YOLOV10_MSG__MSG__DETAIL__BOUNDING_BOX3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov10_msg/msg/detail/bounding_box3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov10_msg
{

namespace msg
{

namespace builder
{

class Init_BoundingBox3D_frame_id
{
public:
  explicit Init_BoundingBox3D_frame_id(::yolov10_msg::msg::BoundingBox3D & msg)
  : msg_(msg)
  {}
  ::yolov10_msg::msg::BoundingBox3D frame_id(::yolov10_msg::msg::BoundingBox3D::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov10_msg::msg::BoundingBox3D msg_;
};

class Init_BoundingBox3D_size
{
public:
  explicit Init_BoundingBox3D_size(::yolov10_msg::msg::BoundingBox3D & msg)
  : msg_(msg)
  {}
  Init_BoundingBox3D_frame_id size(::yolov10_msg::msg::BoundingBox3D::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_BoundingBox3D_frame_id(msg_);
  }

private:
  ::yolov10_msg::msg::BoundingBox3D msg_;
};

class Init_BoundingBox3D_center
{
public:
  Init_BoundingBox3D_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox3D_size center(::yolov10_msg::msg::BoundingBox3D::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_BoundingBox3D_size(msg_);
  }

private:
  ::yolov10_msg::msg::BoundingBox3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov10_msg::msg::BoundingBox3D>()
{
  return yolov10_msg::msg::builder::Init_BoundingBox3D_center();
}

}  // namespace yolov10_msg

#endif  // YOLOV10_MSG__MSG__DETAIL__BOUNDING_BOX3_D__BUILDER_HPP_
