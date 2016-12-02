// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/linalg_ops.h"

namespace tensorflow {
namespace ops {

BatchCholesky::BatchCholesky(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchCholesky");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchCholesky")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchCholeskyGrad::BatchCholeskyGrad(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input l,
                                     ::tensorflow::ops::Input grad) {
  if (!scope.ok()) return;
  auto _l = ::tensorflow::ops::AsNodeOut(scope, l);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchCholeskyGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchCholeskyGrad")
                     .Input(_l)
                     .Input(_grad)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchMatrixDeterminant::BatchMatrixDeterminant(const ::tensorflow::Scope&
                                               scope, ::tensorflow::ops::Input
                                               input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchMatrixDeterminant");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchMatrixDeterminant")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchMatrixInverse::BatchMatrixInverse(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input input, const
                                       BatchMatrixInverse::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchMatrixInverse");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchMatrixInverse")
                     .Input(_input)
                     .Attr("adjoint", attrs.adjoint_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchMatrixInverse::BatchMatrixInverse(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input input)
  : BatchMatrixInverse(scope, input, BatchMatrixInverse::Attrs()) {}

BatchMatrixSolve::BatchMatrixSolve(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input matrix,
                                   ::tensorflow::ops::Input rhs, const
                                   BatchMatrixSolve::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _matrix = ::tensorflow::ops::AsNodeOut(scope, matrix);
  if (!scope.ok()) return;
  auto _rhs = ::tensorflow::ops::AsNodeOut(scope, rhs);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchMatrixSolve");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchMatrixSolve")
                     .Input(_matrix)
                     .Input(_rhs)
                     .Attr("adjoint", attrs.adjoint_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchMatrixSolve::BatchMatrixSolve(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input matrix,
                                   ::tensorflow::ops::Input rhs)
  : BatchMatrixSolve(scope, matrix, rhs, BatchMatrixSolve::Attrs()) {}

BatchMatrixSolveLs::BatchMatrixSolveLs(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input matrix,
                                       ::tensorflow::ops::Input rhs,
                                       ::tensorflow::ops::Input l2_regularizer,
                                       const BatchMatrixSolveLs::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _matrix = ::tensorflow::ops::AsNodeOut(scope, matrix);
  if (!scope.ok()) return;
  auto _rhs = ::tensorflow::ops::AsNodeOut(scope, rhs);
  if (!scope.ok()) return;
  auto _l2_regularizer = ::tensorflow::ops::AsNodeOut(scope, l2_regularizer);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchMatrixSolveLs");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchMatrixSolveLs")
                     .Input(_matrix)
                     .Input(_rhs)
                     .Input(_l2_regularizer)
                     .Attr("fast", attrs.fast_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchMatrixSolveLs::BatchMatrixSolveLs(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input matrix,
                                       ::tensorflow::ops::Input rhs,
                                       ::tensorflow::ops::Input l2_regularizer)
  : BatchMatrixSolveLs(scope, matrix, rhs, l2_regularizer, BatchMatrixSolveLs::Attrs()) {}

BatchMatrixTriangularSolve::BatchMatrixTriangularSolve(const
                                                       ::tensorflow::Scope&
                                                       scope,
                                                       ::tensorflow::ops::Input
                                                       matrix,
                                                       ::tensorflow::ops::Input
                                                       rhs, const
                                                       BatchMatrixTriangularSolve::Attrs&
                                                       attrs) {
  if (!scope.ok()) return;
  auto _matrix = ::tensorflow::ops::AsNodeOut(scope, matrix);
  if (!scope.ok()) return;
  auto _rhs = ::tensorflow::ops::AsNodeOut(scope, rhs);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchMatrixTriangularSolve");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchMatrixTriangularSolve")
                     .Input(_matrix)
                     .Input(_rhs)
                     .Attr("lower", attrs.lower_)
                     .Attr("adjoint", attrs.adjoint_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchMatrixTriangularSolve::BatchMatrixTriangularSolve(const
                                                       ::tensorflow::Scope&
                                                       scope,
                                                       ::tensorflow::ops::Input
                                                       matrix,
                                                       ::tensorflow::ops::Input
                                                       rhs)
  : BatchMatrixTriangularSolve(scope, matrix, rhs, BatchMatrixTriangularSolve::Attrs()) {}

BatchSelfAdjointEig::BatchSelfAdjointEig(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchSelfAdjointEig");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchSelfAdjointEig")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchSelfAdjointEigV2::BatchSelfAdjointEigV2(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input input,
                                             const
                                             BatchSelfAdjointEigV2::Attrs&
                                             attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchSelfAdjointEigV2");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchSelfAdjointEigV2")
                     .Input(_input)
                     .Attr("compute_v", attrs.compute_v_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->e = Output(ret, _outputs_range["e"].first);
  this->v = Output(ret, _outputs_range["v"].first);
}

BatchSelfAdjointEigV2::BatchSelfAdjointEigV2(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input input)
  : BatchSelfAdjointEigV2(scope, input, BatchSelfAdjointEigV2::Attrs()) {}

BatchSvd::BatchSvd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   input, const BatchSvd::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchSvd");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchSvd")
                     .Input(_input)
                     .Attr("compute_uv", attrs.compute_uv_)
                     .Attr("full_matrices", attrs.full_matrices_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->s = Output(ret, _outputs_range["s"].first);
  this->u = Output(ret, _outputs_range["u"].first);
  this->v = Output(ret, _outputs_range["v"].first);
}

BatchSvd::BatchSvd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   input)
  : BatchSvd(scope, input, BatchSvd::Attrs()) {}

Cholesky::Cholesky(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Cholesky");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Cholesky")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

CholeskyGrad::CholeskyGrad(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input l, ::tensorflow::ops::Input
                           grad) {
  if (!scope.ok()) return;
  auto _l = ::tensorflow::ops::AsNodeOut(scope, l);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("CholeskyGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "CholeskyGrad")
                     .Input(_l)
                     .Input(_grad)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MatrixDeterminant::MatrixDeterminant(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MatrixDeterminant");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MatrixDeterminant")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MatrixInverse::MatrixInverse(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input input, const
                             MatrixInverse::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MatrixInverse");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MatrixInverse")
                     .Input(_input)
                     .Attr("adjoint", attrs.adjoint_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MatrixInverse::MatrixInverse(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input input)
  : MatrixInverse(scope, input, MatrixInverse::Attrs()) {}

MatrixSolve::MatrixSolve(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input matrix,
                         ::tensorflow::ops::Input rhs, const
                         MatrixSolve::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _matrix = ::tensorflow::ops::AsNodeOut(scope, matrix);
  if (!scope.ok()) return;
  auto _rhs = ::tensorflow::ops::AsNodeOut(scope, rhs);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MatrixSolve");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MatrixSolve")
                     .Input(_matrix)
                     .Input(_rhs)
                     .Attr("adjoint", attrs.adjoint_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MatrixSolve::MatrixSolve(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input matrix,
                         ::tensorflow::ops::Input rhs)
  : MatrixSolve(scope, matrix, rhs, MatrixSolve::Attrs()) {}

MatrixSolveLs::MatrixSolveLs(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input matrix,
                             ::tensorflow::ops::Input rhs,
                             ::tensorflow::ops::Input l2_regularizer, const
                             MatrixSolveLs::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _matrix = ::tensorflow::ops::AsNodeOut(scope, matrix);
  if (!scope.ok()) return;
  auto _rhs = ::tensorflow::ops::AsNodeOut(scope, rhs);
  if (!scope.ok()) return;
  auto _l2_regularizer = ::tensorflow::ops::AsNodeOut(scope, l2_regularizer);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MatrixSolveLs");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MatrixSolveLs")
                     .Input(_matrix)
                     .Input(_rhs)
                     .Input(_l2_regularizer)
                     .Attr("fast", attrs.fast_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MatrixSolveLs::MatrixSolveLs(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input matrix,
                             ::tensorflow::ops::Input rhs,
                             ::tensorflow::ops::Input l2_regularizer)
  : MatrixSolveLs(scope, matrix, rhs, l2_regularizer, MatrixSolveLs::Attrs()) {}

MatrixTriangularSolve::MatrixTriangularSolve(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input matrix,
                                             ::tensorflow::ops::Input rhs,
                                             const
                                             MatrixTriangularSolve::Attrs&
                                             attrs) {
  if (!scope.ok()) return;
  auto _matrix = ::tensorflow::ops::AsNodeOut(scope, matrix);
  if (!scope.ok()) return;
  auto _rhs = ::tensorflow::ops::AsNodeOut(scope, rhs);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MatrixTriangularSolve");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MatrixTriangularSolve")
                     .Input(_matrix)
                     .Input(_rhs)
                     .Attr("lower", attrs.lower_)
                     .Attr("adjoint", attrs.adjoint_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MatrixTriangularSolve::MatrixTriangularSolve(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input matrix,
                                             ::tensorflow::ops::Input rhs)
  : MatrixTriangularSolve(scope, matrix, rhs, MatrixTriangularSolve::Attrs()) {}

SelfAdjointEig::SelfAdjointEig(const ::tensorflow::Scope& scope,
                               ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SelfAdjointEig");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SelfAdjointEig")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SelfAdjointEigV2::SelfAdjointEigV2(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input input, const
                                   SelfAdjointEigV2::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SelfAdjointEigV2");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SelfAdjointEigV2")
                     .Input(_input)
                     .Attr("compute_v", attrs.compute_v_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->e = Output(ret, _outputs_range["e"].first);
  this->v = Output(ret, _outputs_range["v"].first);
}

SelfAdjointEigV2::SelfAdjointEigV2(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input input)
  : SelfAdjointEigV2(scope, input, SelfAdjointEigV2::Attrs()) {}

Svd::Svd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         const Svd::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Svd");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Svd")
                     .Input(_input)
                     .Attr("compute_uv", attrs.compute_uv_)
                     .Attr("full_matrices", attrs.full_matrices_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->s = Output(ret, _outputs_range["s"].first);
  this->u = Output(ret, _outputs_range["u"].first);
  this->v = Output(ret, _outputs_range["v"].first);
}

Svd::Svd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input)
  : Svd(scope, input, Svd::Attrs()) {}

}  // namespace ops
}  // namespace tensorflow
