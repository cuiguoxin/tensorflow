// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/training_ops.h"

namespace tensorflow {
namespace ops {

ApplyAdadelta::ApplyAdadelta(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input var,
                             ::tensorflow::ops::Input accum,
                             ::tensorflow::ops::Input accum_update,
                             ::tensorflow::ops::Input lr,
                             ::tensorflow::ops::Input rho,
                             ::tensorflow::ops::Input epsilon,
                             ::tensorflow::ops::Input grad, const
                             ApplyAdadelta::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _accum = ::tensorflow::ops::AsNodeOut(scope, accum);
  if (!scope.ok()) return;
  auto _accum_update = ::tensorflow::ops::AsNodeOut(scope, accum_update);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _rho = ::tensorflow::ops::AsNodeOut(scope, rho);
  if (!scope.ok()) return;
  auto _epsilon = ::tensorflow::ops::AsNodeOut(scope, epsilon);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ApplyAdadelta");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ApplyAdadelta")
                     .Input(_var)
                     .Input(_accum)
                     .Input(_accum_update)
                     .Input(_lr)
                     .Input(_rho)
                     .Input(_epsilon)
                     .Input(_grad)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

ApplyAdadelta::ApplyAdadelta(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input var,
                             ::tensorflow::ops::Input accum,
                             ::tensorflow::ops::Input accum_update,
                             ::tensorflow::ops::Input lr,
                             ::tensorflow::ops::Input rho,
                             ::tensorflow::ops::Input epsilon,
                             ::tensorflow::ops::Input grad)
  : ApplyAdadelta(scope, var, accum, accum_update, lr, rho, epsilon, grad, ApplyAdadelta::Attrs()) {}

ApplyAdagrad::ApplyAdagrad(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input var,
                           ::tensorflow::ops::Input accum,
                           ::tensorflow::ops::Input lr,
                           ::tensorflow::ops::Input grad, const
                           ApplyAdagrad::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _accum = ::tensorflow::ops::AsNodeOut(scope, accum);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ApplyAdagrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ApplyAdagrad")
                     .Input(_var)
                     .Input(_accum)
                     .Input(_lr)
                     .Input(_grad)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

ApplyAdagrad::ApplyAdagrad(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input var,
                           ::tensorflow::ops::Input accum,
                           ::tensorflow::ops::Input lr,
                           ::tensorflow::ops::Input grad)
  : ApplyAdagrad(scope, var, accum, lr, grad, ApplyAdagrad::Attrs()) {}

ApplyAdagradDA::ApplyAdagradDA(const ::tensorflow::Scope& scope,
                               ::tensorflow::ops::Input var,
                               ::tensorflow::ops::Input gradient_accumulator,
                               ::tensorflow::ops::Input
                               gradient_squared_accumulator,
                               ::tensorflow::ops::Input grad,
                               ::tensorflow::ops::Input lr,
                               ::tensorflow::ops::Input l1,
                               ::tensorflow::ops::Input l2,
                               ::tensorflow::ops::Input global_step, const
                               ApplyAdagradDA::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _gradient_accumulator = ::tensorflow::ops::AsNodeOut(scope, gradient_accumulator);
  if (!scope.ok()) return;
  auto _gradient_squared_accumulator = ::tensorflow::ops::AsNodeOut(scope, gradient_squared_accumulator);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _l1 = ::tensorflow::ops::AsNodeOut(scope, l1);
  if (!scope.ok()) return;
  auto _l2 = ::tensorflow::ops::AsNodeOut(scope, l2);
  if (!scope.ok()) return;
  auto _global_step = ::tensorflow::ops::AsNodeOut(scope, global_step);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ApplyAdagradDA");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ApplyAdagradDA")
                     .Input(_var)
                     .Input(_gradient_accumulator)
                     .Input(_gradient_squared_accumulator)
                     .Input(_grad)
                     .Input(_lr)
                     .Input(_l1)
                     .Input(_l2)
                     .Input(_global_step)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

ApplyAdagradDA::ApplyAdagradDA(const ::tensorflow::Scope& scope,
                               ::tensorflow::ops::Input var,
                               ::tensorflow::ops::Input gradient_accumulator,
                               ::tensorflow::ops::Input
                               gradient_squared_accumulator,
                               ::tensorflow::ops::Input grad,
                               ::tensorflow::ops::Input lr,
                               ::tensorflow::ops::Input l1,
                               ::tensorflow::ops::Input l2,
                               ::tensorflow::ops::Input global_step)
  : ApplyAdagradDA(scope, var, gradient_accumulator, gradient_squared_accumulator, grad, lr, l1, l2, global_step, ApplyAdagradDA::Attrs()) {}

ApplyAdam::ApplyAdam(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     var, ::tensorflow::ops::Input m, ::tensorflow::ops::Input
                     v, ::tensorflow::ops::Input beta1_power,
                     ::tensorflow::ops::Input beta2_power,
                     ::tensorflow::ops::Input lr, ::tensorflow::ops::Input
                     beta1, ::tensorflow::ops::Input beta2,
                     ::tensorflow::ops::Input epsilon, ::tensorflow::ops::Input
                     grad, const ApplyAdam::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _m = ::tensorflow::ops::AsNodeOut(scope, m);
  if (!scope.ok()) return;
  auto _v = ::tensorflow::ops::AsNodeOut(scope, v);
  if (!scope.ok()) return;
  auto _beta1_power = ::tensorflow::ops::AsNodeOut(scope, beta1_power);
  if (!scope.ok()) return;
  auto _beta2_power = ::tensorflow::ops::AsNodeOut(scope, beta2_power);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _beta1 = ::tensorflow::ops::AsNodeOut(scope, beta1);
  if (!scope.ok()) return;
  auto _beta2 = ::tensorflow::ops::AsNodeOut(scope, beta2);
  if (!scope.ok()) return;
  auto _epsilon = ::tensorflow::ops::AsNodeOut(scope, epsilon);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ApplyAdam");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ApplyAdam")
                     .Input(_var)
                     .Input(_m)
                     .Input(_v)
                     .Input(_beta1_power)
                     .Input(_beta2_power)
                     .Input(_lr)
                     .Input(_beta1)
                     .Input(_beta2)
                     .Input(_epsilon)
                     .Input(_grad)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

ApplyAdam::ApplyAdam(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     var, ::tensorflow::ops::Input m, ::tensorflow::ops::Input
                     v, ::tensorflow::ops::Input beta1_power,
                     ::tensorflow::ops::Input beta2_power,
                     ::tensorflow::ops::Input lr, ::tensorflow::ops::Input
                     beta1, ::tensorflow::ops::Input beta2,
                     ::tensorflow::ops::Input epsilon, ::tensorflow::ops::Input
                     grad)
  : ApplyAdam(scope, var, m, v, beta1_power, beta2_power, lr, beta1, beta2, epsilon, grad, ApplyAdam::Attrs()) {}

ApplyFtrl::ApplyFtrl(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     var, ::tensorflow::ops::Input accum,
                     ::tensorflow::ops::Input linear, ::tensorflow::ops::Input
                     grad, ::tensorflow::ops::Input lr,
                     ::tensorflow::ops::Input l1, ::tensorflow::ops::Input l2,
                     ::tensorflow::ops::Input lr_power, const ApplyFtrl::Attrs&
                     attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _accum = ::tensorflow::ops::AsNodeOut(scope, accum);
  if (!scope.ok()) return;
  auto _linear = ::tensorflow::ops::AsNodeOut(scope, linear);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _l1 = ::tensorflow::ops::AsNodeOut(scope, l1);
  if (!scope.ok()) return;
  auto _l2 = ::tensorflow::ops::AsNodeOut(scope, l2);
  if (!scope.ok()) return;
  auto _lr_power = ::tensorflow::ops::AsNodeOut(scope, lr_power);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ApplyFtrl");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ApplyFtrl")
                     .Input(_var)
                     .Input(_accum)
                     .Input(_linear)
                     .Input(_grad)
                     .Input(_lr)
                     .Input(_l1)
                     .Input(_l2)
                     .Input(_lr_power)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

ApplyFtrl::ApplyFtrl(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     var, ::tensorflow::ops::Input accum,
                     ::tensorflow::ops::Input linear, ::tensorflow::ops::Input
                     grad, ::tensorflow::ops::Input lr,
                     ::tensorflow::ops::Input l1, ::tensorflow::ops::Input l2,
                     ::tensorflow::ops::Input lr_power)
  : ApplyFtrl(scope, var, accum, linear, grad, lr, l1, l2, lr_power, ApplyFtrl::Attrs()) {}

ApplyGradientDescent::ApplyGradientDescent(const ::tensorflow::Scope& scope,
                                           ::tensorflow::ops::Input var,
                                           ::tensorflow::ops::Input alpha,
                                           ::tensorflow::ops::Input delta,
                                           const ApplyGradientDescent::Attrs&
                                           attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _alpha = ::tensorflow::ops::AsNodeOut(scope, alpha);
  if (!scope.ok()) return;
  auto _delta = ::tensorflow::ops::AsNodeOut(scope, delta);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ApplyGradientDescent");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ApplyGradientDescent")
                     .Input(_var)
                     .Input(_alpha)
                     .Input(_delta)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

ApplyGradientDescent::ApplyGradientDescent(const ::tensorflow::Scope& scope,
                                           ::tensorflow::ops::Input var,
                                           ::tensorflow::ops::Input alpha,
                                           ::tensorflow::ops::Input delta)
  : ApplyGradientDescent(scope, var, alpha, delta, ApplyGradientDescent::Attrs()) {}

ApplyMomentum::ApplyMomentum(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input var,
                             ::tensorflow::ops::Input accum,
                             ::tensorflow::ops::Input lr,
                             ::tensorflow::ops::Input grad,
                             ::tensorflow::ops::Input momentum, const
                             ApplyMomentum::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _accum = ::tensorflow::ops::AsNodeOut(scope, accum);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _momentum = ::tensorflow::ops::AsNodeOut(scope, momentum);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ApplyMomentum");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ApplyMomentum")
                     .Input(_var)
                     .Input(_accum)
                     .Input(_lr)
                     .Input(_grad)
                     .Input(_momentum)
                     .Attr("use_locking", attrs.use_locking_)
                     .Attr("use_nesterov", attrs.use_nesterov_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

ApplyMomentum::ApplyMomentum(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input var,
                             ::tensorflow::ops::Input accum,
                             ::tensorflow::ops::Input lr,
                             ::tensorflow::ops::Input grad,
                             ::tensorflow::ops::Input momentum)
  : ApplyMomentum(scope, var, accum, lr, grad, momentum, ApplyMomentum::Attrs()) {}

ApplyProximalAdagrad::ApplyProximalAdagrad(const ::tensorflow::Scope& scope,
                                           ::tensorflow::ops::Input var,
                                           ::tensorflow::ops::Input accum,
                                           ::tensorflow::ops::Input lr,
                                           ::tensorflow::ops::Input l1,
                                           ::tensorflow::ops::Input l2,
                                           ::tensorflow::ops::Input grad, const
                                           ApplyProximalAdagrad::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _accum = ::tensorflow::ops::AsNodeOut(scope, accum);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _l1 = ::tensorflow::ops::AsNodeOut(scope, l1);
  if (!scope.ok()) return;
  auto _l2 = ::tensorflow::ops::AsNodeOut(scope, l2);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ApplyProximalAdagrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ApplyProximalAdagrad")
                     .Input(_var)
                     .Input(_accum)
                     .Input(_lr)
                     .Input(_l1)
                     .Input(_l2)
                     .Input(_grad)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

ApplyProximalAdagrad::ApplyProximalAdagrad(const ::tensorflow::Scope& scope,
                                           ::tensorflow::ops::Input var,
                                           ::tensorflow::ops::Input accum,
                                           ::tensorflow::ops::Input lr,
                                           ::tensorflow::ops::Input l1,
                                           ::tensorflow::ops::Input l2,
                                           ::tensorflow::ops::Input grad)
  : ApplyProximalAdagrad(scope, var, accum, lr, l1, l2, grad, ApplyProximalAdagrad::Attrs()) {}

ApplyProximalGradientDescent::ApplyProximalGradientDescent(const
                                                           ::tensorflow::Scope&
                                                           scope,
                                                           ::tensorflow::ops::Input
                                                           var,
                                                           ::tensorflow::ops::Input
                                                           alpha,
                                                           ::tensorflow::ops::Input
                                                           l1,
                                                           ::tensorflow::ops::Input
                                                           l2,
                                                           ::tensorflow::ops::Input
                                                           delta, const
                                                           ApplyProximalGradientDescent::Attrs&
                                                           attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _alpha = ::tensorflow::ops::AsNodeOut(scope, alpha);
  if (!scope.ok()) return;
  auto _l1 = ::tensorflow::ops::AsNodeOut(scope, l1);
  if (!scope.ok()) return;
  auto _l2 = ::tensorflow::ops::AsNodeOut(scope, l2);
  if (!scope.ok()) return;
  auto _delta = ::tensorflow::ops::AsNodeOut(scope, delta);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ApplyProximalGradientDescent");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ApplyProximalGradientDescent")
                     .Input(_var)
                     .Input(_alpha)
                     .Input(_l1)
                     .Input(_l2)
                     .Input(_delta)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

ApplyProximalGradientDescent::ApplyProximalGradientDescent(const
                                                           ::tensorflow::Scope&
                                                           scope,
                                                           ::tensorflow::ops::Input
                                                           var,
                                                           ::tensorflow::ops::Input
                                                           alpha,
                                                           ::tensorflow::ops::Input
                                                           l1,
                                                           ::tensorflow::ops::Input
                                                           l2,
                                                           ::tensorflow::ops::Input
                                                           delta)
  : ApplyProximalGradientDescent(scope, var, alpha, l1, l2, delta, ApplyProximalGradientDescent::Attrs()) {}

ApplyRMSProp::ApplyRMSProp(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input var,
                           ::tensorflow::ops::Input ms,
                           ::tensorflow::ops::Input mom,
                           ::tensorflow::ops::Input lr,
                           ::tensorflow::ops::Input rho,
                           ::tensorflow::ops::Input momentum,
                           ::tensorflow::ops::Input epsilon,
                           ::tensorflow::ops::Input grad, const
                           ApplyRMSProp::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _ms = ::tensorflow::ops::AsNodeOut(scope, ms);
  if (!scope.ok()) return;
  auto _mom = ::tensorflow::ops::AsNodeOut(scope, mom);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _rho = ::tensorflow::ops::AsNodeOut(scope, rho);
  if (!scope.ok()) return;
  auto _momentum = ::tensorflow::ops::AsNodeOut(scope, momentum);
  if (!scope.ok()) return;
  auto _epsilon = ::tensorflow::ops::AsNodeOut(scope, epsilon);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ApplyRMSProp");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ApplyRMSProp")
                     .Input(_var)
                     .Input(_ms)
                     .Input(_mom)
                     .Input(_lr)
                     .Input(_rho)
                     .Input(_momentum)
                     .Input(_epsilon)
                     .Input(_grad)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

ApplyRMSProp::ApplyRMSProp(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input var,
                           ::tensorflow::ops::Input ms,
                           ::tensorflow::ops::Input mom,
                           ::tensorflow::ops::Input lr,
                           ::tensorflow::ops::Input rho,
                           ::tensorflow::ops::Input momentum,
                           ::tensorflow::ops::Input epsilon,
                           ::tensorflow::ops::Input grad)
  : ApplyRMSProp(scope, var, ms, mom, lr, rho, momentum, epsilon, grad, ApplyRMSProp::Attrs()) {}

SparseApplyAdadelta::SparseApplyAdadelta(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input var,
                                         ::tensorflow::ops::Input accum,
                                         ::tensorflow::ops::Input accum_update,
                                         ::tensorflow::ops::Input lr,
                                         ::tensorflow::ops::Input rho,
                                         ::tensorflow::ops::Input epsilon,
                                         ::tensorflow::ops::Input grad,
                                         ::tensorflow::ops::Input indices,
                                         const SparseApplyAdadelta::Attrs&
                                         attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _accum = ::tensorflow::ops::AsNodeOut(scope, accum);
  if (!scope.ok()) return;
  auto _accum_update = ::tensorflow::ops::AsNodeOut(scope, accum_update);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _rho = ::tensorflow::ops::AsNodeOut(scope, rho);
  if (!scope.ok()) return;
  auto _epsilon = ::tensorflow::ops::AsNodeOut(scope, epsilon);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseApplyAdadelta");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseApplyAdadelta")
                     .Input(_var)
                     .Input(_accum)
                     .Input(_accum_update)
                     .Input(_lr)
                     .Input(_rho)
                     .Input(_epsilon)
                     .Input(_grad)
                     .Input(_indices)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

SparseApplyAdadelta::SparseApplyAdadelta(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input var,
                                         ::tensorflow::ops::Input accum,
                                         ::tensorflow::ops::Input accum_update,
                                         ::tensorflow::ops::Input lr,
                                         ::tensorflow::ops::Input rho,
                                         ::tensorflow::ops::Input epsilon,
                                         ::tensorflow::ops::Input grad,
                                         ::tensorflow::ops::Input indices)
  : SparseApplyAdadelta(scope, var, accum, accum_update, lr, rho, epsilon, grad, indices, SparseApplyAdadelta::Attrs()) {}

SparseApplyAdagrad::SparseApplyAdagrad(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input var,
                                       ::tensorflow::ops::Input accum,
                                       ::tensorflow::ops::Input lr,
                                       ::tensorflow::ops::Input grad,
                                       ::tensorflow::ops::Input indices, const
                                       SparseApplyAdagrad::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _accum = ::tensorflow::ops::AsNodeOut(scope, accum);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseApplyAdagrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseApplyAdagrad")
                     .Input(_var)
                     .Input(_accum)
                     .Input(_lr)
                     .Input(_grad)
                     .Input(_indices)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

SparseApplyAdagrad::SparseApplyAdagrad(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input var,
                                       ::tensorflow::ops::Input accum,
                                       ::tensorflow::ops::Input lr,
                                       ::tensorflow::ops::Input grad,
                                       ::tensorflow::ops::Input indices)
  : SparseApplyAdagrad(scope, var, accum, lr, grad, indices, SparseApplyAdagrad::Attrs()) {}

SparseApplyAdagradDA::SparseApplyAdagradDA(const ::tensorflow::Scope& scope,
                                           ::tensorflow::ops::Input var,
                                           ::tensorflow::ops::Input
                                           gradient_accumulator,
                                           ::tensorflow::ops::Input
                                           gradient_squared_accumulator,
                                           ::tensorflow::ops::Input grad,
                                           ::tensorflow::ops::Input indices,
                                           ::tensorflow::ops::Input lr,
                                           ::tensorflow::ops::Input l1,
                                           ::tensorflow::ops::Input l2,
                                           ::tensorflow::ops::Input
                                           global_step, const
                                           SparseApplyAdagradDA::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _gradient_accumulator = ::tensorflow::ops::AsNodeOut(scope, gradient_accumulator);
  if (!scope.ok()) return;
  auto _gradient_squared_accumulator = ::tensorflow::ops::AsNodeOut(scope, gradient_squared_accumulator);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _l1 = ::tensorflow::ops::AsNodeOut(scope, l1);
  if (!scope.ok()) return;
  auto _l2 = ::tensorflow::ops::AsNodeOut(scope, l2);
  if (!scope.ok()) return;
  auto _global_step = ::tensorflow::ops::AsNodeOut(scope, global_step);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseApplyAdagradDA");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseApplyAdagradDA")
                     .Input(_var)
                     .Input(_gradient_accumulator)
                     .Input(_gradient_squared_accumulator)
                     .Input(_grad)
                     .Input(_indices)
                     .Input(_lr)
                     .Input(_l1)
                     .Input(_l2)
                     .Input(_global_step)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

SparseApplyAdagradDA::SparseApplyAdagradDA(const ::tensorflow::Scope& scope,
                                           ::tensorflow::ops::Input var,
                                           ::tensorflow::ops::Input
                                           gradient_accumulator,
                                           ::tensorflow::ops::Input
                                           gradient_squared_accumulator,
                                           ::tensorflow::ops::Input grad,
                                           ::tensorflow::ops::Input indices,
                                           ::tensorflow::ops::Input lr,
                                           ::tensorflow::ops::Input l1,
                                           ::tensorflow::ops::Input l2,
                                           ::tensorflow::ops::Input
                                           global_step)
  : SparseApplyAdagradDA(scope, var, gradient_accumulator, gradient_squared_accumulator, grad, indices, lr, l1, l2, global_step, SparseApplyAdagradDA::Attrs()) {}

SparseApplyFtrl::SparseApplyFtrl(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input var,
                                 ::tensorflow::ops::Input accum,
                                 ::tensorflow::ops::Input linear,
                                 ::tensorflow::ops::Input grad,
                                 ::tensorflow::ops::Input indices,
                                 ::tensorflow::ops::Input lr,
                                 ::tensorflow::ops::Input l1,
                                 ::tensorflow::ops::Input l2,
                                 ::tensorflow::ops::Input lr_power, const
                                 SparseApplyFtrl::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _accum = ::tensorflow::ops::AsNodeOut(scope, accum);
  if (!scope.ok()) return;
  auto _linear = ::tensorflow::ops::AsNodeOut(scope, linear);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _l1 = ::tensorflow::ops::AsNodeOut(scope, l1);
  if (!scope.ok()) return;
  auto _l2 = ::tensorflow::ops::AsNodeOut(scope, l2);
  if (!scope.ok()) return;
  auto _lr_power = ::tensorflow::ops::AsNodeOut(scope, lr_power);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseApplyFtrl");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseApplyFtrl")
                     .Input(_var)
                     .Input(_accum)
                     .Input(_linear)
                     .Input(_grad)
                     .Input(_indices)
                     .Input(_lr)
                     .Input(_l1)
                     .Input(_l2)
                     .Input(_lr_power)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

SparseApplyFtrl::SparseApplyFtrl(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input var,
                                 ::tensorflow::ops::Input accum,
                                 ::tensorflow::ops::Input linear,
                                 ::tensorflow::ops::Input grad,
                                 ::tensorflow::ops::Input indices,
                                 ::tensorflow::ops::Input lr,
                                 ::tensorflow::ops::Input l1,
                                 ::tensorflow::ops::Input l2,
                                 ::tensorflow::ops::Input lr_power)
  : SparseApplyFtrl(scope, var, accum, linear, grad, indices, lr, l1, l2, lr_power, SparseApplyFtrl::Attrs()) {}

SparseApplyMomentum::SparseApplyMomentum(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input var,
                                         ::tensorflow::ops::Input accum,
                                         ::tensorflow::ops::Input lr,
                                         ::tensorflow::ops::Input grad,
                                         ::tensorflow::ops::Input indices,
                                         ::tensorflow::ops::Input momentum,
                                         const SparseApplyMomentum::Attrs&
                                         attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _accum = ::tensorflow::ops::AsNodeOut(scope, accum);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _momentum = ::tensorflow::ops::AsNodeOut(scope, momentum);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseApplyMomentum");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseApplyMomentum")
                     .Input(_var)
                     .Input(_accum)
                     .Input(_lr)
                     .Input(_grad)
                     .Input(_indices)
                     .Input(_momentum)
                     .Attr("use_locking", attrs.use_locking_)
                     .Attr("use_nesterov", attrs.use_nesterov_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

SparseApplyMomentum::SparseApplyMomentum(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input var,
                                         ::tensorflow::ops::Input accum,
                                         ::tensorflow::ops::Input lr,
                                         ::tensorflow::ops::Input grad,
                                         ::tensorflow::ops::Input indices,
                                         ::tensorflow::ops::Input momentum)
  : SparseApplyMomentum(scope, var, accum, lr, grad, indices, momentum, SparseApplyMomentum::Attrs()) {}

SparseApplyProximalAdagrad::SparseApplyProximalAdagrad(const
                                                       ::tensorflow::Scope&
                                                       scope,
                                                       ::tensorflow::ops::Input
                                                       var,
                                                       ::tensorflow::ops::Input
                                                       accum,
                                                       ::tensorflow::ops::Input
                                                       lr,
                                                       ::tensorflow::ops::Input
                                                       l1,
                                                       ::tensorflow::ops::Input
                                                       l2,
                                                       ::tensorflow::ops::Input
                                                       grad,
                                                       ::tensorflow::ops::Input
                                                       indices, const
                                                       SparseApplyProximalAdagrad::Attrs&
                                                       attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _accum = ::tensorflow::ops::AsNodeOut(scope, accum);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _l1 = ::tensorflow::ops::AsNodeOut(scope, l1);
  if (!scope.ok()) return;
  auto _l2 = ::tensorflow::ops::AsNodeOut(scope, l2);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseApplyProximalAdagrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseApplyProximalAdagrad")
                     .Input(_var)
                     .Input(_accum)
                     .Input(_lr)
                     .Input(_l1)
                     .Input(_l2)
                     .Input(_grad)
                     .Input(_indices)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

SparseApplyProximalAdagrad::SparseApplyProximalAdagrad(const
                                                       ::tensorflow::Scope&
                                                       scope,
                                                       ::tensorflow::ops::Input
                                                       var,
                                                       ::tensorflow::ops::Input
                                                       accum,
                                                       ::tensorflow::ops::Input
                                                       lr,
                                                       ::tensorflow::ops::Input
                                                       l1,
                                                       ::tensorflow::ops::Input
                                                       l2,
                                                       ::tensorflow::ops::Input
                                                       grad,
                                                       ::tensorflow::ops::Input
                                                       indices)
  : SparseApplyProximalAdagrad(scope, var, accum, lr, l1, l2, grad, indices, SparseApplyProximalAdagrad::Attrs()) {}

SparseApplyProximalGradientDescent::SparseApplyProximalGradientDescent(const
                                                                       ::tensorflow::Scope&
                                                                       scope,
                                                                       ::tensorflow::ops::Input
                                                                       var,
                                                                       ::tensorflow::ops::Input
                                                                       alpha,
                                                                       ::tensorflow::ops::Input
                                                                       l1,
                                                                       ::tensorflow::ops::Input
                                                                       l2,
                                                                       ::tensorflow::ops::Input
                                                                       grad,
                                                                       ::tensorflow::ops::Input
                                                                       indices,
                                                                       const
                                                                       SparseApplyProximalGradientDescent::Attrs&
                                                                       attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _alpha = ::tensorflow::ops::AsNodeOut(scope, alpha);
  if (!scope.ok()) return;
  auto _l1 = ::tensorflow::ops::AsNodeOut(scope, l1);
  if (!scope.ok()) return;
  auto _l2 = ::tensorflow::ops::AsNodeOut(scope, l2);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseApplyProximalGradientDescent");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseApplyProximalGradientDescent")
                     .Input(_var)
                     .Input(_alpha)
                     .Input(_l1)
                     .Input(_l2)
                     .Input(_grad)
                     .Input(_indices)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

SparseApplyProximalGradientDescent::SparseApplyProximalGradientDescent(const
                                                                       ::tensorflow::Scope&
                                                                       scope,
                                                                       ::tensorflow::ops::Input
                                                                       var,
                                                                       ::tensorflow::ops::Input
                                                                       alpha,
                                                                       ::tensorflow::ops::Input
                                                                       l1,
                                                                       ::tensorflow::ops::Input
                                                                       l2,
                                                                       ::tensorflow::ops::Input
                                                                       grad,
                                                                       ::tensorflow::ops::Input
                                                                       indices)
  : SparseApplyProximalGradientDescent(scope, var, alpha, l1, l2, grad, indices, SparseApplyProximalGradientDescent::Attrs()) {}

SparseApplyRMSProp::SparseApplyRMSProp(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input var,
                                       ::tensorflow::ops::Input ms,
                                       ::tensorflow::ops::Input mom,
                                       ::tensorflow::ops::Input lr,
                                       ::tensorflow::ops::Input rho,
                                       ::tensorflow::ops::Input momentum,
                                       ::tensorflow::ops::Input epsilon,
                                       ::tensorflow::ops::Input grad,
                                       ::tensorflow::ops::Input indices, const
                                       SparseApplyRMSProp::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _var = ::tensorflow::ops::AsNodeOut(scope, var);
  if (!scope.ok()) return;
  auto _ms = ::tensorflow::ops::AsNodeOut(scope, ms);
  if (!scope.ok()) return;
  auto _mom = ::tensorflow::ops::AsNodeOut(scope, mom);
  if (!scope.ok()) return;
  auto _lr = ::tensorflow::ops::AsNodeOut(scope, lr);
  if (!scope.ok()) return;
  auto _rho = ::tensorflow::ops::AsNodeOut(scope, rho);
  if (!scope.ok()) return;
  auto _momentum = ::tensorflow::ops::AsNodeOut(scope, momentum);
  if (!scope.ok()) return;
  auto _epsilon = ::tensorflow::ops::AsNodeOut(scope, epsilon);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseApplyRMSProp");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseApplyRMSProp")
                     .Input(_var)
                     .Input(_ms)
                     .Input(_mom)
                     .Input(_lr)
                     .Input(_rho)
                     .Input(_momentum)
                     .Input(_epsilon)
                     .Input(_grad)
                     .Input(_indices)
                     .Attr("use_locking", attrs.use_locking_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

SparseApplyRMSProp::SparseApplyRMSProp(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input var,
                                       ::tensorflow::ops::Input ms,
                                       ::tensorflow::ops::Input mom,
                                       ::tensorflow::ops::Input lr,
                                       ::tensorflow::ops::Input rho,
                                       ::tensorflow::ops::Input momentum,
                                       ::tensorflow::ops::Input epsilon,
                                       ::tensorflow::ops::Input grad,
                                       ::tensorflow::ops::Input indices)
  : SparseApplyRMSProp(scope, var, ms, mom, lr, rho, momentum, epsilon, grad, indices, SparseApplyRMSProp::Attrs()) {}

}  // namespace ops
}  // namespace tensorflow
