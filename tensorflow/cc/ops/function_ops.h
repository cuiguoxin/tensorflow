// This file is MACHINE GENERATED! Do not edit.

#ifndef TENSORFLOW_CC_OPS_FUNCTION_OPS_H_
#define TENSORFLOW_CC_OPS_FUNCTION_OPS_H_

// This file is MACHINE GENERATED! Do not edit.

#include "tensorflow/cc/framework/ops.h"
#include "tensorflow/cc/framework/scope.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/framework/tensor_shape.h"
#include "tensorflow/core/framework/types.h"
#include "tensorflow/core/lib/gtl/array_slice.h"

namespace tensorflow {
namespace ops {

// A graph node which represents an argument to a function.
//
// Arguments:
// * scope: A Scope object
// * index:
//     This argument is the index-th argument of the function.
class _Arg {
 public:
  _Arg(const ::tensorflow::Scope& scope, DataType T, int64 index);
  operator ::tensorflow::ops::Output() const { return output; }
  operator ::tensorflow::ops::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  ::tensorflow::ops::Output output;
};

// Converts an array of tensors to a list of tensors.
//
// Arguments:
// * scope: A Scope object
class _ArrayToList {
 public:
  _ArrayToList(const ::tensorflow::Scope& scope, ::tensorflow::ops::InputList
             input, const DataTypeSlice& out_types);
  ::tensorflow::ops::Output operator[](size_t index) const { return output[index]; }


  ::tensorflow::ops::OutputList output;
};

// Converts a list of tensors to an array of tensors.
//
// Arguments:
// * scope: A Scope object
class _ListToArray {
 public:
  _ListToArray(const ::tensorflow::Scope& scope, ::tensorflow::ops::InputList
             input, DataType T, int64 N);
  ::tensorflow::ops::Output operator[](size_t index) const { return output[index]; }


  ::tensorflow::ops::OutputList output;
};

// A graph node which represents a return value of a function.
//
// Arguments:
// * scope: A Scope object
// * input: The return value.
// * index:
//     This return value is the index-th return value of the function.
class _Retval {
 public:
  _Retval(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input, int64
        index);
  operator ::tensorflow::ops::Operation() const { return operation; }

  Operation operation;
};

}  // namespace ops
}  // namespace tensorflow

#endif  // TENSORFLOW_CC_OPS_FUNCTION_OPS_H_
