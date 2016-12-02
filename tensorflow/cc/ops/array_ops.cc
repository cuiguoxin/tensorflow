// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/array_ops.h"

namespace tensorflow {
namespace ops {

BatchMatrixBandPart::BatchMatrixBandPart(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input input,
                                         ::tensorflow::ops::Input num_lower,
                                         ::tensorflow::ops::Input num_upper) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _num_lower = ::tensorflow::ops::AsNodeOut(scope, num_lower);
  if (!scope.ok()) return;
  auto _num_upper = ::tensorflow::ops::AsNodeOut(scope, num_upper);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchMatrixBandPart");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchMatrixBandPart")
                     .Input(_input)
                     .Input(_num_lower)
                     .Input(_num_upper)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->band = Output(ret, 0);
}

BatchMatrixDiag::BatchMatrixDiag(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input diagonal) {
  if (!scope.ok()) return;
  auto _diagonal = ::tensorflow::ops::AsNodeOut(scope, diagonal);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchMatrixDiag");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchMatrixDiag")
                     .Input(_diagonal)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchMatrixDiagPart::BatchMatrixDiagPart(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchMatrixDiagPart");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchMatrixDiagPart")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->diagonal = Output(ret, 0);
}

BatchMatrixSetDiag::BatchMatrixSetDiag(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input input,
                                       ::tensorflow::ops::Input diagonal) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _diagonal = ::tensorflow::ops::AsNodeOut(scope, diagonal);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchMatrixSetDiag");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchMatrixSetDiag")
                     .Input(_input)
                     .Input(_diagonal)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchToSpace::BatchToSpace(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input input,
                           ::tensorflow::ops::Input crops, int64 block_size) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _crops = ::tensorflow::ops::AsNodeOut(scope, crops);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchToSpace");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchToSpace")
                     .Input(_input)
                     .Input(_crops)
                     .Attr("block_size", block_size)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchToSpaceND::BatchToSpaceND(const ::tensorflow::Scope& scope,
                               ::tensorflow::ops::Input input,
                               ::tensorflow::ops::Input block_shape,
                               ::tensorflow::ops::Input crops) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _block_shape = ::tensorflow::ops::AsNodeOut(scope, block_shape);
  if (!scope.ok()) return;
  auto _crops = ::tensorflow::ops::AsNodeOut(scope, crops);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchToSpaceND");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchToSpaceND")
                     .Input(_input)
                     .Input(_block_shape)
                     .Input(_crops)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Bitcast::Bitcast(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 input, DataType type) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Bitcast");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Bitcast")
                     .Input(_input)
                     .Attr("type", type)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BroadcastGradientArgs::BroadcastGradientArgs(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input s0,
                                             ::tensorflow::ops::Input s1) {
  if (!scope.ok()) return;
  auto _s0 = ::tensorflow::ops::AsNodeOut(scope, s0);
  if (!scope.ok()) return;
  auto _s1 = ::tensorflow::ops::AsNodeOut(scope, s1);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BroadcastGradientArgs");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BroadcastGradientArgs")
                     .Input(_s0)
                     .Input(_s1)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->r0 = Output(ret, _outputs_range["r0"].first);
  this->r1 = Output(ret, _outputs_range["r1"].first);
}

CheckNumerics::CheckNumerics(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input tensor, StringPiece
                             message) {
  if (!scope.ok()) return;
  auto _tensor = ::tensorflow::ops::AsNodeOut(scope, tensor);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("CheckNumerics");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "CheckNumerics")
                     .Input(_tensor)
                     .Attr("message", message)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Concat::Concat(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               concat_dim, ::tensorflow::ops::InputList values) {
  if (!scope.ok()) return;
  auto _concat_dim = ::tensorflow::ops::AsNodeOut(scope, concat_dim);
  if (!scope.ok()) return;
  auto _values = ::tensorflow::ops::AsNodeOutList(scope, values);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Concat");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Concat")
                     .Input(_concat_dim)
                     .Input(_values)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

ConcatOffset::ConcatOffset(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input concat_dim,
                           ::tensorflow::ops::InputList shape) {
  if (!scope.ok()) return;
  auto _concat_dim = ::tensorflow::ops::AsNodeOut(scope, concat_dim);
  if (!scope.ok()) return;
  auto _shape = ::tensorflow::ops::AsNodeOutList(scope, shape);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ConcatOffset");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ConcatOffset")
                     .Input(_concat_dim)
                     .Input(_shape)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->offset.push_back(Output(ret, i));
}

Copy::Copy(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           const Copy::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Copy");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Copy")
                     .Input(_input)
                     .Attr("tensor_name", attrs.tensor_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Copy::Copy(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input)
  : Copy(scope, input, Copy::Attrs()) {}

CopyHost::CopyHost(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   input, const CopyHost::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("CopyHost");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "CopyHost")
                     .Input(_input)
                     .Attr("tensor_name", attrs.tensor_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

CopyHost::CopyHost(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   input)
  : CopyHost(scope, input, CopyHost::Attrs()) {}

DebugIdentity::DebugIdentity(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input input, const
                             DebugIdentity::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DebugIdentity");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DebugIdentity")
                     .Input(_input)
                     .Attr("tensor_name", attrs.tensor_name_)
                     .Attr("debug_urls", attrs.debug_urls_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

DebugIdentity::DebugIdentity(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input input)
  : DebugIdentity(scope, input, DebugIdentity::Attrs()) {}

DebugNanCount::DebugNanCount(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input input, const
                             DebugNanCount::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DebugNanCount");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DebugNanCount")
                     .Input(_input)
                     .Attr("tensor_name", attrs.tensor_name_)
                     .Attr("debug_urls", attrs.debug_urls_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

DebugNanCount::DebugNanCount(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input input)
  : DebugNanCount(scope, input, DebugNanCount::Attrs()) {}

DepthToSpace::DepthToSpace(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input input, int64 block_size) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DepthToSpace");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DepthToSpace")
                     .Input(_input)
                     .Attr("block_size", block_size)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Diag::Diag(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input diagonal) {
  if (!scope.ok()) return;
  auto _diagonal = ::tensorflow::ops::AsNodeOut(scope, diagonal);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Diag");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Diag")
                     .Input(_diagonal)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

DiagPart::DiagPart(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DiagPart");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DiagPart")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->diagonal = Output(ret, 0);
}

EditDistance::EditDistance(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input hypothesis_indices,
                           ::tensorflow::ops::Input hypothesis_values,
                           ::tensorflow::ops::Input hypothesis_shape,
                           ::tensorflow::ops::Input truth_indices,
                           ::tensorflow::ops::Input truth_values,
                           ::tensorflow::ops::Input truth_shape, const
                           EditDistance::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _hypothesis_indices = ::tensorflow::ops::AsNodeOut(scope, hypothesis_indices);
  if (!scope.ok()) return;
  auto _hypothesis_values = ::tensorflow::ops::AsNodeOut(scope, hypothesis_values);
  if (!scope.ok()) return;
  auto _hypothesis_shape = ::tensorflow::ops::AsNodeOut(scope, hypothesis_shape);
  if (!scope.ok()) return;
  auto _truth_indices = ::tensorflow::ops::AsNodeOut(scope, truth_indices);
  if (!scope.ok()) return;
  auto _truth_values = ::tensorflow::ops::AsNodeOut(scope, truth_values);
  if (!scope.ok()) return;
  auto _truth_shape = ::tensorflow::ops::AsNodeOut(scope, truth_shape);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("EditDistance");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "EditDistance")
                     .Input(_hypothesis_indices)
                     .Input(_hypothesis_values)
                     .Input(_hypothesis_shape)
                     .Input(_truth_indices)
                     .Input(_truth_values)
                     .Input(_truth_shape)
                     .Attr("normalize", attrs.normalize_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

EditDistance::EditDistance(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input hypothesis_indices,
                           ::tensorflow::ops::Input hypothesis_values,
                           ::tensorflow::ops::Input hypothesis_shape,
                           ::tensorflow::ops::Input truth_indices,
                           ::tensorflow::ops::Input truth_values,
                           ::tensorflow::ops::Input truth_shape)
  : EditDistance(scope, hypothesis_indices, hypothesis_values, hypothesis_shape, truth_indices, truth_values, truth_shape, EditDistance::Attrs()) {}

ExpandDims::ExpandDims(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input input, ::tensorflow::ops::Input
                       dim) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _dim = ::tensorflow::ops::AsNodeOut(scope, dim);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ExpandDims");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ExpandDims")
                     .Input(_input)
                     .Input(_dim)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

ExtractImagePatches::ExtractImagePatches(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input images, const
                                         gtl::ArraySlice<int>& ksizes, const
                                         gtl::ArraySlice<int>& strides, const
                                         gtl::ArraySlice<int>& rates,
                                         StringPiece padding) {
  if (!scope.ok()) return;
  auto _images = ::tensorflow::ops::AsNodeOut(scope, images);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ExtractImagePatches");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ExtractImagePatches")
                     .Input(_images)
                     .Attr("ksizes", ksizes)
                     .Attr("strides", strides)
                     .Attr("rates", rates)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->patches = Output(ret, 0);
}

Fill::Fill(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input dims,
           ::tensorflow::ops::Input value) {
  if (!scope.ok()) return;
  auto _dims = ::tensorflow::ops::AsNodeOut(scope, dims);
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Fill");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Fill")
                     .Input(_dims)
                     .Input(_value)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Gather::Gather(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               params, ::tensorflow::ops::Input indices, const Gather::Attrs&
               attrs) {
  if (!scope.ok()) return;
  auto _params = ::tensorflow::ops::AsNodeOut(scope, params);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Gather");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Gather")
                     .Input(_params)
                     .Input(_indices)
                     .Attr("validate_indices", attrs.validate_indices_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Gather::Gather(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               params, ::tensorflow::ops::Input indices)
  : Gather(scope, params, indices, Gather::Attrs()) {}

GatherNd::GatherNd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   params, ::tensorflow::ops::Input indices) {
  if (!scope.ok()) return;
  auto _params = ::tensorflow::ops::AsNodeOut(scope, params);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("GatherNd");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "GatherNd")
                     .Input(_params)
                     .Input(_indices)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Identity::Identity(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Identity");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Identity")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

ImmutableConst::ImmutableConst(const ::tensorflow::Scope& scope, DataType
                               dtype, TensorShape shape, StringPiece
                               memory_region_name) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ImmutableConst");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ImmutableConst")
                     .Attr("dtype", dtype)
                     .Attr("shape", shape)
                     .Attr("memory_region_name", memory_region_name)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->tensor = Output(ret, 0);
}

InvertPermutation::InvertPermutation(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("InvertPermutation");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "InvertPermutation")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

ListDiff::ListDiff(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   x, ::tensorflow::ops::Input y, const ListDiff::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ListDiff");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ListDiff")
                     .Input(_x)
                     .Input(_y)
                     .Attr("out_idx", attrs.out_idx_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->out = Output(ret, _outputs_range["out"].first);
  this->idx = Output(ret, _outputs_range["idx"].first);
}

ListDiff::ListDiff(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   x, ::tensorflow::ops::Input y)
  : ListDiff(scope, x, y, ListDiff::Attrs()) {}

MatrixBandPart::MatrixBandPart(const ::tensorflow::Scope& scope,
                               ::tensorflow::ops::Input input,
                               ::tensorflow::ops::Input num_lower,
                               ::tensorflow::ops::Input num_upper) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _num_lower = ::tensorflow::ops::AsNodeOut(scope, num_lower);
  if (!scope.ok()) return;
  auto _num_upper = ::tensorflow::ops::AsNodeOut(scope, num_upper);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MatrixBandPart");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MatrixBandPart")
                     .Input(_input)
                     .Input(_num_lower)
                     .Input(_num_upper)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->band = Output(ret, 0);
}

MatrixDiag::MatrixDiag(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input diagonal) {
  if (!scope.ok()) return;
  auto _diagonal = ::tensorflow::ops::AsNodeOut(scope, diagonal);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MatrixDiag");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MatrixDiag")
                     .Input(_diagonal)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MatrixDiagPart::MatrixDiagPart(const ::tensorflow::Scope& scope,
                               ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MatrixDiagPart");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MatrixDiagPart")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->diagonal = Output(ret, 0);
}

MatrixSetDiag::MatrixSetDiag(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input input,
                             ::tensorflow::ops::Input diagonal) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _diagonal = ::tensorflow::ops::AsNodeOut(scope, diagonal);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MatrixSetDiag");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MatrixSetDiag")
                     .Input(_input)
                     .Input(_diagonal)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MirrorPad::MirrorPad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     input, ::tensorflow::ops::Input paddings, StringPiece
                     mode) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _paddings = ::tensorflow::ops::AsNodeOut(scope, paddings);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MirrorPad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MirrorPad")
                     .Input(_input)
                     .Input(_paddings)
                     .Attr("mode", mode)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MirrorPadGrad::MirrorPadGrad(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input input,
                             ::tensorflow::ops::Input paddings, StringPiece
                             mode) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _paddings = ::tensorflow::ops::AsNodeOut(scope, paddings);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MirrorPadGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MirrorPadGrad")
                     .Input(_input)
                     .Input(_paddings)
                     .Attr("mode", mode)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

OneHot::OneHot(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               indices, ::tensorflow::ops::Input depth,
               ::tensorflow::ops::Input on_value, ::tensorflow::ops::Input
               off_value, const OneHot::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _depth = ::tensorflow::ops::AsNodeOut(scope, depth);
  if (!scope.ok()) return;
  auto _on_value = ::tensorflow::ops::AsNodeOut(scope, on_value);
  if (!scope.ok()) return;
  auto _off_value = ::tensorflow::ops::AsNodeOut(scope, off_value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("OneHot");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "OneHot")
                     .Input(_indices)
                     .Input(_depth)
                     .Input(_on_value)
                     .Input(_off_value)
                     .Attr("axis", attrs.axis_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

OneHot::OneHot(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               indices, ::tensorflow::ops::Input depth,
               ::tensorflow::ops::Input on_value, ::tensorflow::ops::Input
               off_value)
  : OneHot(scope, indices, depth, on_value, off_value, OneHot::Attrs()) {}

Pack::Pack(const ::tensorflow::Scope& scope, ::tensorflow::ops::InputList
           values, const Pack::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _values = ::tensorflow::ops::AsNodeOutList(scope, values);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Pack");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Pack")
                     .Input(_values)
                     .Attr("axis", attrs.axis_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Pack::Pack(const ::tensorflow::Scope& scope, ::tensorflow::ops::InputList
           values)
  : Pack(scope, values, Pack::Attrs()) {}

Pad::Pad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input paddings) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _paddings = ::tensorflow::ops::AsNodeOut(scope, paddings);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Pad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Pad")
                     .Input(_input)
                     .Input(_paddings)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Placeholder::Placeholder(const ::tensorflow::Scope& scope, DataType dtype,
                         const Placeholder::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Placeholder");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Placeholder")
                     .Attr("dtype", dtype)
                     .Attr("shape", attrs.shape_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Placeholder::Placeholder(const ::tensorflow::Scope& scope, DataType dtype)
  : Placeholder(scope, dtype, Placeholder::Attrs()) {}

PlaceholderWithDefault::PlaceholderWithDefault(const ::tensorflow::Scope&
                                               scope, ::tensorflow::ops::Input
                                               input, TensorShape shape) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("PlaceholderWithDefault");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "PlaceholderWithDefault")
                     .Input(_input)
                     .Attr("shape", shape)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

QuantizeAndDequantize::QuantizeAndDequantize(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input input,
                                             const
                                             QuantizeAndDequantize::Attrs&
                                             attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("QuantizeAndDequantize");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "QuantizeAndDequantize")
                     .Input(_input)
                     .Attr("signed_input", attrs.signed_input_)
                     .Attr("num_bits", attrs.num_bits_)
                     .Attr("range_given", attrs.range_given_)
                     .Attr("input_min", attrs.input_min_)
                     .Attr("input_max", attrs.input_max_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

QuantizeAndDequantize::QuantizeAndDequantize(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input input)
  : QuantizeAndDequantize(scope, input, QuantizeAndDequantize::Attrs()) {}

Rank::Rank(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Rank");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Rank")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

RefIdentity::RefIdentity(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("RefIdentity");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "RefIdentity")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Reshape::Reshape(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 tensor, ::tensorflow::ops::Input shape) {
  if (!scope.ok()) return;
  auto _tensor = ::tensorflow::ops::AsNodeOut(scope, tensor);
  if (!scope.ok()) return;
  auto _shape = ::tensorflow::ops::AsNodeOut(scope, shape);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Reshape");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Reshape")
                     .Input(_tensor)
                     .Input(_shape)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Reverse::Reverse(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 tensor, ::tensorflow::ops::Input dims) {
  if (!scope.ok()) return;
  auto _tensor = ::tensorflow::ops::AsNodeOut(scope, tensor);
  if (!scope.ok()) return;
  auto _dims = ::tensorflow::ops::AsNodeOut(scope, dims);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Reverse");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Reverse")
                     .Input(_tensor)
                     .Input(_dims)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

ReverseSequence::ReverseSequence(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input input,
                                 ::tensorflow::ops::Input seq_lengths, int64
                                 seq_dim, const ReverseSequence::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _seq_lengths = ::tensorflow::ops::AsNodeOut(scope, seq_lengths);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ReverseSequence");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ReverseSequence")
                     .Input(_input)
                     .Input(_seq_lengths)
                     .Attr("seq_dim", seq_dim)
                     .Attr("batch_dim", attrs.batch_dim_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

ReverseSequence::ReverseSequence(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input input,
                                 ::tensorflow::ops::Input seq_lengths, int64
                                 seq_dim)
  : ReverseSequence(scope, input, seq_lengths, seq_dim, ReverseSequence::Attrs()) {}

Shape::Shape(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
             const Shape::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Shape");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Shape")
                     .Input(_input)
                     .Attr("out_type", attrs.out_type_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Shape::Shape(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input)
  : Shape(scope, input, Shape::Attrs()) {}

ShapeN::ShapeN(const ::tensorflow::Scope& scope, ::tensorflow::ops::InputList
               input, const ShapeN::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOutList(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ShapeN");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ShapeN")
                     .Input(_input)
                     .Attr("out_type", attrs.out_type_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->output.push_back(Output(ret, i));
}

ShapeN::ShapeN(const ::tensorflow::Scope& scope, ::tensorflow::ops::InputList
               input)
  : ShapeN(scope, input, ShapeN::Attrs()) {}

Size::Size(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           const Size::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Size");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Size")
                     .Input(_input)
                     .Attr("out_type", attrs.out_type_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Size::Size(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input)
  : Size(scope, input, Size::Attrs()) {}

Slice::Slice(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
             ::tensorflow::ops::Input begin, ::tensorflow::ops::Input size) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _begin = ::tensorflow::ops::AsNodeOut(scope, begin);
  if (!scope.ok()) return;
  auto _size = ::tensorflow::ops::AsNodeOut(scope, size);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Slice");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Slice")
                     .Input(_input)
                     .Input(_begin)
                     .Input(_size)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SpaceToBatch::SpaceToBatch(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input input,
                           ::tensorflow::ops::Input paddings, int64 block_size) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _paddings = ::tensorflow::ops::AsNodeOut(scope, paddings);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SpaceToBatch");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SpaceToBatch")
                     .Input(_input)
                     .Input(_paddings)
                     .Attr("block_size", block_size)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SpaceToBatchND::SpaceToBatchND(const ::tensorflow::Scope& scope,
                               ::tensorflow::ops::Input input,
                               ::tensorflow::ops::Input block_shape,
                               ::tensorflow::ops::Input paddings) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _block_shape = ::tensorflow::ops::AsNodeOut(scope, block_shape);
  if (!scope.ok()) return;
  auto _paddings = ::tensorflow::ops::AsNodeOut(scope, paddings);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SpaceToBatchND");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SpaceToBatchND")
                     .Input(_input)
                     .Input(_block_shape)
                     .Input(_paddings)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SpaceToDepth::SpaceToDepth(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input input, int64 block_size) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SpaceToDepth");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SpaceToDepth")
                     .Input(_input)
                     .Attr("block_size", block_size)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Split::Split(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
             split_dim, ::tensorflow::ops::Input value, int64 num_split) {
  if (!scope.ok()) return;
  auto _split_dim = ::tensorflow::ops::AsNodeOut(scope, split_dim);
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Split");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Split")
                     .Input(_split_dim)
                     .Input(_value)
                     .Attr("num_split", num_split)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->output.push_back(Output(ret, i));
}

Squeeze::Squeeze(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 input, const Squeeze::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Squeeze");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Squeeze")
                     .Input(_input)
                     .Attr("squeeze_dims", attrs.squeeze_dims_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Squeeze::Squeeze(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 input)
  : Squeeze(scope, input, Squeeze::Attrs()) {}

StopGradient::StopGradient(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("StopGradient");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "StopGradient")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

StridedSlice::StridedSlice(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input input,
                           ::tensorflow::ops::Input begin,
                           ::tensorflow::ops::Input end,
                           ::tensorflow::ops::Input strides, const
                           StridedSlice::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _begin = ::tensorflow::ops::AsNodeOut(scope, begin);
  if (!scope.ok()) return;
  auto _end = ::tensorflow::ops::AsNodeOut(scope, end);
  if (!scope.ok()) return;
  auto _strides = ::tensorflow::ops::AsNodeOut(scope, strides);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("StridedSlice");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "StridedSlice")
                     .Input(_input)
                     .Input(_begin)
                     .Input(_end)
                     .Input(_strides)
                     .Attr("begin_mask", attrs.begin_mask_)
                     .Attr("end_mask", attrs.end_mask_)
                     .Attr("ellipsis_mask", attrs.ellipsis_mask_)
                     .Attr("new_axis_mask", attrs.new_axis_mask_)
                     .Attr("shrink_axis_mask", attrs.shrink_axis_mask_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

StridedSlice::StridedSlice(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input input,
                           ::tensorflow::ops::Input begin,
                           ::tensorflow::ops::Input end,
                           ::tensorflow::ops::Input strides)
  : StridedSlice(scope, input, begin, end, strides, StridedSlice::Attrs()) {}

StridedSliceAssign::StridedSliceAssign(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input ref,
                                       ::tensorflow::ops::Input begin,
                                       ::tensorflow::ops::Input end,
                                       ::tensorflow::ops::Input strides,
                                       ::tensorflow::ops::Input value, const
                                       StridedSliceAssign::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _ref = ::tensorflow::ops::AsNodeOut(scope, ref);
  if (!scope.ok()) return;
  auto _begin = ::tensorflow::ops::AsNodeOut(scope, begin);
  if (!scope.ok()) return;
  auto _end = ::tensorflow::ops::AsNodeOut(scope, end);
  if (!scope.ok()) return;
  auto _strides = ::tensorflow::ops::AsNodeOut(scope, strides);
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("StridedSliceAssign");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "StridedSliceAssign")
                     .Input(_ref)
                     .Input(_begin)
                     .Input(_end)
                     .Input(_strides)
                     .Input(_value)
                     .Attr("begin_mask", attrs.begin_mask_)
                     .Attr("end_mask", attrs.end_mask_)
                     .Attr("ellipsis_mask", attrs.ellipsis_mask_)
                     .Attr("new_axis_mask", attrs.new_axis_mask_)
                     .Attr("shrink_axis_mask", attrs.shrink_axis_mask_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output_ref = Output(ret, 0);
}

StridedSliceAssign::StridedSliceAssign(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input ref,
                                       ::tensorflow::ops::Input begin,
                                       ::tensorflow::ops::Input end,
                                       ::tensorflow::ops::Input strides,
                                       ::tensorflow::ops::Input value)
  : StridedSliceAssign(scope, ref, begin, end, strides, value, StridedSliceAssign::Attrs()) {}

StridedSliceGrad::StridedSliceGrad(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input shape,
                                   ::tensorflow::ops::Input begin,
                                   ::tensorflow::ops::Input end,
                                   ::tensorflow::ops::Input strides,
                                   ::tensorflow::ops::Input dy, const
                                   StridedSliceGrad::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _shape = ::tensorflow::ops::AsNodeOut(scope, shape);
  if (!scope.ok()) return;
  auto _begin = ::tensorflow::ops::AsNodeOut(scope, begin);
  if (!scope.ok()) return;
  auto _end = ::tensorflow::ops::AsNodeOut(scope, end);
  if (!scope.ok()) return;
  auto _strides = ::tensorflow::ops::AsNodeOut(scope, strides);
  if (!scope.ok()) return;
  auto _dy = ::tensorflow::ops::AsNodeOut(scope, dy);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("StridedSliceGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "StridedSliceGrad")
                     .Input(_shape)
                     .Input(_begin)
                     .Input(_end)
                     .Input(_strides)
                     .Input(_dy)
                     .Attr("begin_mask", attrs.begin_mask_)
                     .Attr("end_mask", attrs.end_mask_)
                     .Attr("ellipsis_mask", attrs.ellipsis_mask_)
                     .Attr("new_axis_mask", attrs.new_axis_mask_)
                     .Attr("shrink_axis_mask", attrs.shrink_axis_mask_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

StridedSliceGrad::StridedSliceGrad(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input shape,
                                   ::tensorflow::ops::Input begin,
                                   ::tensorflow::ops::Input end,
                                   ::tensorflow::ops::Input strides,
                                   ::tensorflow::ops::Input dy)
  : StridedSliceGrad(scope, shape, begin, end, strides, dy, StridedSliceGrad::Attrs()) {}

Tile::Tile(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           ::tensorflow::ops::Input multiples) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _multiples = ::tensorflow::ops::AsNodeOut(scope, multiples);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Tile");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Tile")
                     .Input(_input)
                     .Input(_multiples)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

TileGrad::TileGrad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   input, ::tensorflow::ops::Input multiples) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _multiples = ::tensorflow::ops::AsNodeOut(scope, multiples);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TileGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TileGrad")
                     .Input(_input)
                     .Input(_multiples)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Transpose::Transpose(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     x, ::tensorflow::ops::Input perm) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _perm = ::tensorflow::ops::AsNodeOut(scope, perm);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Transpose");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Transpose")
                     .Input(_x)
                     .Input(_perm)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Unique::Unique(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
               const Unique::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Unique");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Unique")
                     .Input(_x)
                     .Attr("out_idx", attrs.out_idx_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->y = Output(ret, _outputs_range["y"].first);
  this->idx = Output(ret, _outputs_range["idx"].first);
}

Unique::Unique(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x)
  : Unique(scope, x, Unique::Attrs()) {}

UniqueWithCounts::UniqueWithCounts(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input x, const
                                   UniqueWithCounts::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("UniqueWithCounts");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "UniqueWithCounts")
                     .Input(_x)
                     .Attr("out_idx", attrs.out_idx_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->y = Output(ret, _outputs_range["y"].first);
  this->idx = Output(ret, _outputs_range["idx"].first);
  this->count = Output(ret, _outputs_range["count"].first);
}

UniqueWithCounts::UniqueWithCounts(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input x)
  : UniqueWithCounts(scope, x, UniqueWithCounts::Attrs()) {}

Unpack::Unpack(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               value, int64 num, const Unpack::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Unpack");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Unpack")
                     .Input(_value)
                     .Attr("num", num)
                     .Attr("axis", attrs.axis_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->output.push_back(Output(ret, i));
}

Unpack::Unpack(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               value, int64 num)
  : Unpack(scope, value, num, Unpack::Attrs()) {}

Where::Where(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Where");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Where")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->index = Output(ret, 0);
}

ZerosLike::ZerosLike(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ZerosLike");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ZerosLike")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

}  // namespace ops
}  // namespace tensorflow
