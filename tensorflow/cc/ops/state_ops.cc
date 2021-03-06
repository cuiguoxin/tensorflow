// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/state_ops.h"

namespace tensorflow {
namespace ops {

Assign::Assign(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input ref,
               ::tensorflow::ops::Input value, const Assign::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Assign");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Assign")
                     .Input(_ref)
                     .Input(_value)
                     .Attr("validate_shape", attrs.validate_shape_)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output_ref = Output(ret, 0);
}

Assign::Assign(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input ref,
               ::tensorflow::ops::Input value)
  : Assign(scope, ref, value, Assign::Attrs()) {}

AssignAdd::AssignAdd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     ref, ::tensorflow::ops::Input value, const
                     AssignAdd::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("AssignAdd");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "AssignAdd")
                     .Input(_ref)
                     .Input(_value)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output_ref = Output(ret, 0);
}

AssignAdd::AssignAdd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     ref, ::tensorflow::ops::Input value)
  : AssignAdd(scope, ref, value, AssignAdd::Attrs()) {}

AssignSub::AssignSub(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     ref, ::tensorflow::ops::Input value, const
                     AssignSub::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("AssignSub");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "AssignSub")
                     .Input(_ref)
                     .Input(_value)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output_ref = Output(ret, 0);
}

AssignSub::AssignSub(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     ref, ::tensorflow::ops::Input value)
  : AssignSub(scope, ref, value, AssignSub::Attrs()) {}

CountUpTo::CountUpTo(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     ref, int64 limit) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("CountUpTo");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "CountUpTo")
                     .Input(_ref)
                     .Attr("limit", limit)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

DestroyTemporaryVariable::DestroyTemporaryVariable(const ::tensorflow::Scope&
                                                   scope,
                                                   ::tensorflow::ops::Input
                                                   ref, StringPiece var_name) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DestroyTemporaryVariable");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DestroyTemporaryVariable")
                     .Input(_ref)
                     .Attr("var_name", var_name)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->value = Output(ret, 0);
}

IsVariableInitialized::IsVariableInitialized(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input ref) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("IsVariableInitialized");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "IsVariableInitialized")
                     .Input(_ref)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->is_initialized = Output(ret, 0);
}

ScatterAdd::ScatterAdd(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input ref, ::tensorflow::ops::Input
                       indices, ::tensorflow::ops::Input updates, const
                       ScatterAdd::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _updates = ::tensorflow::ops::AsNodeOut(scope, updates);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ScatterAdd");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ScatterAdd")
                     .Input(_ref)
                     .Input(_indices)
                     .Input(_updates)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output_ref = Output(ret, 0);
}

ScatterAdd::ScatterAdd(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input ref, ::tensorflow::ops::Input
                       indices, ::tensorflow::ops::Input updates)
  : ScatterAdd(scope, ref, indices, updates, ScatterAdd::Attrs()) {}

ScatterDiv::ScatterDiv(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input ref, ::tensorflow::ops::Input
                       indices, ::tensorflow::ops::Input updates, const
                       ScatterDiv::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _updates = ::tensorflow::ops::AsNodeOut(scope, updates);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ScatterDiv");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ScatterDiv")
                     .Input(_ref)
                     .Input(_indices)
                     .Input(_updates)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output_ref = Output(ret, 0);
}

ScatterDiv::ScatterDiv(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input ref, ::tensorflow::ops::Input
                       indices, ::tensorflow::ops::Input updates)
  : ScatterDiv(scope, ref, indices, updates, ScatterDiv::Attrs()) {}

ScatterMul::ScatterMul(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input ref, ::tensorflow::ops::Input
                       indices, ::tensorflow::ops::Input updates, const
                       ScatterMul::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _updates = ::tensorflow::ops::AsNodeOut(scope, updates);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ScatterMul");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ScatterMul")
                     .Input(_ref)
                     .Input(_indices)
                     .Input(_updates)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output_ref = Output(ret, 0);
}

ScatterMul::ScatterMul(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input ref, ::tensorflow::ops::Input
                       indices, ::tensorflow::ops::Input updates)
  : ScatterMul(scope, ref, indices, updates, ScatterMul::Attrs()) {}

ScatterSub::ScatterSub(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input ref, ::tensorflow::ops::Input
                       indices, ::tensorflow::ops::Input updates, const
                       ScatterSub::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _updates = ::tensorflow::ops::AsNodeOut(scope, updates);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ScatterSub");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ScatterSub")
                     .Input(_ref)
                     .Input(_indices)
                     .Input(_updates)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output_ref = Output(ret, 0);
}

ScatterSub::ScatterSub(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input ref, ::tensorflow::ops::Input
                       indices, ::tensorflow::ops::Input updates)
  : ScatterSub(scope, ref, indices, updates, ScatterSub::Attrs()) {}

ScatterUpdate::ScatterUpdate(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input ref,
                             ::tensorflow::ops::Input indices,
                             ::tensorflow::ops::Input updates, const
                             ScatterUpdate::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _updates = ::tensorflow::ops::AsNodeOut(scope, updates);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ScatterUpdate");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ScatterUpdate")
                     .Input(_ref)
                     .Input(_indices)
                     .Input(_updates)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output_ref = Output(ret, 0);
}

ScatterUpdate::ScatterUpdate(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input ref,
                             ::tensorflow::ops::Input indices,
                             ::tensorflow::ops::Input updates)
  : ScatterUpdate(scope, ref, indices, updates, ScatterUpdate::Attrs()) {}

TemporaryVariable::TemporaryVariable(const ::tensorflow::Scope& scope,
                                     TensorShape shape, DataType dtype, const
                                     TemporaryVariable::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TemporaryVariable");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TemporaryVariable")
                     .Attr("shape", shape)
                     .Attr("dtype", dtype)
                     .Attr("var_name", attrs.var_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->ref = Output(ret, 0);
}

TemporaryVariable::TemporaryVariable(const ::tensorflow::Scope& scope,
                                     TensorShape shape, DataType dtype)
  : TemporaryVariable(scope, shape, dtype, TemporaryVariable::Attrs()) {}

Variable::Variable(const ::tensorflow::Scope& scope, TensorShape shape,
                   DataType dtype, const Variable::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Variable");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Variable")
                     .Attr("shape", shape)
                     .Attr("dtype", dtype)
                     .Attr("container", attrs.container_)
                     .Attr("shared_name", attrs.shared_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->ref = Output(ret, 0);
}

Variable::Variable(const ::tensorflow::Scope& scope, TensorShape shape,
                   DataType dtype)
  : Variable(scope, shape, dtype, Variable::Attrs()) {}

}  // namespace ops
}  // namespace tensorflow
