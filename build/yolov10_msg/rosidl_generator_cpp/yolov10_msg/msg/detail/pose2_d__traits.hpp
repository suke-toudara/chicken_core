// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolov10_msg:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__POSE2_D__TRAITS_HPP_
#define YOLOV10_MSG__MSG__DETAIL__POSE2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yolov10_msg/msg/detail/pose2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "yolov10_msg/msg/detail/point2_d__traits.hpp"

namespace yolov10_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pose2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pose2D & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace yolov10_msg

namespace rosidl_generator_traits
{

[[deprecated("use yolov10_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yolov10_msg::msg::Pose2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolov10_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolov10_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const yolov10_msg::msg::Pose2D & msg)
{
  return yolov10_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yolov10_msg::msg::Pose2D>()
{
  return "yolov10_msg::msg::Pose2D";
}

template<>
inline const char * name<yolov10_msg::msg::Pose2D>()
{
  return "yolov10_msg/msg/Pose2D";
}

template<>
struct has_fixed_size<yolov10_msg::msg::Pose2D>
  : std::integral_constant<bool, has_fixed_size<yolov10_msg::msg::Point2D>::value> {};

template<>
struct has_bounded_size<yolov10_msg::msg::Pose2D>
  : std::integral_constant<bool, has_bounded_size<yolov10_msg::msg::Point2D>::value> {};

template<>
struct is_message<yolov10_msg::msg::Pose2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLOV10_MSG__MSG__DETAIL__POSE2_D__TRAITS_HPP_
