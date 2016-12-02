// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/function_ops.h"

namespace tensorflow {
namespace ops {

_Arg::_Arg(const ::tensorflow::Scope& scope, DataType T, int64 index) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("_Arg");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "_Arg")
                     .Attr("T", T)
                     .Attr("index", index)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

_ArrayToList::_ArrayToList(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::InputList input, const
                           DataTypeSlice& out_types) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOutList(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("_ArrayToList");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "_ArrayToList")
                     .Input(_input)
                     .Attr("out_types", out_types)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->output.push_back(Output(ret, i));
}

_ListToArray::_ListToArray(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::InputList input, DataType T,
                           int64 N) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOutList(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("_ListToArray");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "_ListToArray")
                     .Input(_input)
                     .Attr("T", T)
                     .Attr("N", N)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->output.push_back(Output(ret, i));
}

_Retval::_Retval(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 input, int64 index) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("_Retval");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "_Retval")
                     .Input(_input)
                     .Attr("index", index)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

}  // namespace ops
}  // namespace tensorflow
