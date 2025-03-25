// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lbr_fri_idl:msg/LBRWrenchCommand.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_IDL__MSG__DETAIL__LBR_WRENCH_COMMAND__STRUCT_H_
#define LBR_FRI_IDL__MSG__DETAIL__LBR_WRENCH_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LBRWrenchCommand in the package lbr_fri_idl.
/**
  * Wrench command for the Fast Robot Interface (FRI).
  * Requires joint position and wrench overlay.
  * Refer to KUKA::FRI::LBRCommand in friLBRCommand.h for documentation.
  *
  *  * joint_position [rad]
  *  * wrench [N/Nm]
 */
typedef struct lbr_fri_idl__msg__LBRWrenchCommand
{
  double joint_position[7];
  double wrench[6];
} lbr_fri_idl__msg__LBRWrenchCommand;

// Struct for a sequence of lbr_fri_idl__msg__LBRWrenchCommand.
typedef struct lbr_fri_idl__msg__LBRWrenchCommand__Sequence
{
  lbr_fri_idl__msg__LBRWrenchCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lbr_fri_idl__msg__LBRWrenchCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LBR_FRI_IDL__MSG__DETAIL__LBR_WRENCH_COMMAND__STRUCT_H_
