// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lbr_fri_idl:msg/LBRTorqueCommand.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_IDL__MSG__DETAIL__LBR_TORQUE_COMMAND__STRUCT_HPP_
#define LBR_FRI_IDL__MSG__DETAIL__LBR_TORQUE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lbr_fri_idl__msg__LBRTorqueCommand __attribute__((deprecated))
#else
# define DEPRECATED__lbr_fri_idl__msg__LBRTorqueCommand __declspec(deprecated)
#endif

namespace lbr_fri_idl
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LBRTorqueCommand_
{
  using Type = LBRTorqueCommand_<ContainerAllocator>;

  explicit LBRTorqueCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_position.begin(), this->joint_position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->torque.begin(), this->torque.end(), 0.0);
    }
  }

  explicit LBRTorqueCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_position(_alloc),
    torque(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_position.begin(), this->joint_position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->torque.begin(), this->torque.end(), 0.0);
    }
  }

  // field types and members
  using _joint_position_type =
    std::array<double, 7>;
  _joint_position_type joint_position;
  using _torque_type =
    std::array<double, 7>;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__joint_position(
    const std::array<double, 7> & _arg)
  {
    this->joint_position = _arg;
    return *this;
  }
  Type & set__torque(
    const std::array<double, 7> & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lbr_fri_idl__msg__LBRTorqueCommand
    std::shared_ptr<lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lbr_fri_idl__msg__LBRTorqueCommand
    std::shared_ptr<lbr_fri_idl::msg::LBRTorqueCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LBRTorqueCommand_ & other) const
  {
    if (this->joint_position != other.joint_position) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const LBRTorqueCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LBRTorqueCommand_

// alias to use template instance with default allocator
using LBRTorqueCommand =
  lbr_fri_idl::msg::LBRTorqueCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lbr_fri_idl

#endif  // LBR_FRI_IDL__MSG__DETAIL__LBR_TORQUE_COMMAND__STRUCT_HPP_
