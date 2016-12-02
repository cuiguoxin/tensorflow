// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/control_flow_ops.h"

namespace tensorflow {
namespace ops {

Abort::Abort(const ::tensorflow::Scope& scope, const Abort::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Abort");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Abort")
                     .Attr("error_msg", attrs.error_msg_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

Abort::Abort(const ::tensorflow::Scope& scope)
  : Abort(scope, Abort::Attrs()) {}

ControlTrigger::ControlTrigger(const ::tensorflow::Scope& scope) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ControlTrigger");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ControlTrigger")
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

Enter::Enter(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input data,
             StringPiece frame_name, const Enter::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Enter");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Enter")
                     .Input(_data)
                     .Attr("frame_name", frame_name)
                     .Attr("is_constant", attrs.is_constant_)
                     .Attr("parallel_iterations", attrs.parallel_iterations_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Enter::Enter(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input data,
             StringPiece frame_name)
  : Enter(scope, data, frame_name, Enter::Attrs()) {}

Exit::Exit(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input data) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Exit");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Exit")
                     .Input(_data)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

LoopCond::LoopCond(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LoopCond");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LoopCond")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Merge::Merge(const ::tensorflow::Scope& scope, ::tensorflow::ops::InputList
             inputs) {
  if (!scope.ok()) return;
  auto _inputs = ::tensorflow::ops::AsNodeOutList(scope, inputs);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Merge");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Merge")
                     .Input(_inputs)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->output = Output(ret, _outputs_range["output"].first);
  this->value_index = Output(ret, _outputs_range["value_index"].first);
}

NextIteration::NextIteration(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input data) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("NextIteration");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "NextIteration")
                     .Input(_data)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

RefEnter::RefEnter(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   data, StringPiece frame_name, const RefEnter::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("RefEnter");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "RefEnter")
                     .Input(_data)
                     .Attr("frame_name", frame_name)
                     .Attr("is_constant", attrs.is_constant_)
                     .Attr("parallel_iterations", attrs.parallel_iterations_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

RefEnter::RefEnter(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   data, StringPiece frame_name)
  : RefEnter(scope, data, frame_name, RefEnter::Attrs()) {}

RefExit::RefExit(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 data) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("RefExit");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "RefExit")
                     .Input(_data)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

RefMerge::RefMerge(const ::tensorflow::Scope& scope,
                   ::tensorflow::ops::InputList inputs) {
  if (!scope.ok()) return;
  auto _inputs = ::tensorflow::ops::AsNodeOutList(scope, inputs);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("RefMerge");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "RefMerge")
                     .Input(_inputs)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->output = Output(ret, _outputs_range["output"].first);
  this->value_index = Output(ret, _outputs_range["value_index"].first);
}

RefNextIteration::RefNextIteration(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input data) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("RefNextIteration");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "RefNextIteration")
                     .Input(_data)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

RefSelect::RefSelect(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     index, ::tensorflow::ops::InputList inputs) {
  if (!scope.ok()) return;
  auto _index = ::tensorflow::ops::AsNodeOut(scope, index);
  if (!scope.ok()) return;
  auto _inputs = ::tensorflow::ops::AsNodeOutList(scope, inputs);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("RefSelect");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "RefSelect")
                     .Input(_index)
                     .Input(_inputs)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

RefSwitch::RefSwitch(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     data, ::tensorflow::ops::Input pred) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _pred = ::tensorflow::ops::AsNodeOut(scope, pred);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("RefSwitch");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "RefSwitch")
                     .Input(_data)
                     .Input(_pred)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->output_false = Output(ret, _outputs_range["output_false"].first);
  this->output_true = Output(ret, _outputs_range["output_true"].first);
}

Switch::Switch(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input data,
               ::tensorflow::ops::Input pred) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _pred = ::tensorflow::ops::AsNodeOut(scope, pred);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Switch");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Switch")
                     .Input(_data)
                     .Input(_pred)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->output_false = Output(ret, _outputs_range["output_false"].first);
  this->output_true = Output(ret, _outputs_range["output_true"].first);
}

}  // namespace ops
}  // namespace tensorflow
