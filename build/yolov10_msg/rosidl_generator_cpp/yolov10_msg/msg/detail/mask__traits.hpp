// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolov10_msg:msg/Mask.idl
// generated code does not contain a copyright notice

#ifndef YOLOV10_MSG__MSG__DETAIL__MASK__TRAITS_HPP_
#define YOLOV10_MSG__MSG__DETAIL__MASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yolov10_msg/msg/detail/mask__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "yolov10_msg/msg/detail/point2_d__traits.hpp"

namespace yolov10_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mask & msg,
  std::ostream & out)
{
  out << "{";
  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mask & msg, bool use_flow_style = false)
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
  const yolov10_msg::msg::Mask & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolov10_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolov10_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const yolov10_msg::msg::Mask & msg)
{
  return yolov10_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yolov10_msg::msg::Mask>()
{
  return "yolov10_msg::msg::Mask";
}

template<>
inline const char * name<yolov10_msg::msg::Mask>()
{
  return "yolov10_msg/msg/Mask";
}

template<>
struct has_fixed_size<yolov10_msg::msg::Mask>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yolov10_msg::msg::Mask>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yolov10_msg::msg::Mask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLOV10_MSG__MSG__DETAIL__MASK__TRAITS_HPP_
