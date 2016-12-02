// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/math_ops.h"

namespace tensorflow {
namespace ops {

Abs::Abs(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Abs");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Abs")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Acos::Acos(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Acos");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Acos")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Add::Add(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
         ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Add");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Add")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

AddN::AddN(const ::tensorflow::Scope& scope, ::tensorflow::ops::InputList
           inputs) {
  if (!scope.ok()) return;
  auto _inputs = ::tensorflow::ops::AsNodeOutList(scope, inputs);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("AddN");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "AddN")
                     .Input(_inputs)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->sum = Output(ret, 0);
}

All::All(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input reduction_indices, const All::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _reduction_indices = ::tensorflow::ops::AsNodeOut(scope, reduction_indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("All");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "All")
                     .Input(_input)
                     .Input(_reduction_indices)
                     .Attr("keep_dims", attrs.keep_dims_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

All::All(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input reduction_indices)
  : All(scope, input, reduction_indices, All::Attrs()) {}

Any::Any(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input reduction_indices, const Any::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _reduction_indices = ::tensorflow::ops::AsNodeOut(scope, reduction_indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Any");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Any")
                     .Input(_input)
                     .Input(_reduction_indices)
                     .Attr("keep_dims", attrs.keep_dims_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Any::Any(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input reduction_indices)
  : Any(scope, input, reduction_indices, Any::Attrs()) {}

ArgMax::ArgMax(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               input, ::tensorflow::ops::Input dimension) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _dimension = ::tensorflow::ops::AsNodeOut(scope, dimension);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ArgMax");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ArgMax")
                     .Input(_input)
                     .Input(_dimension)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

ArgMin::ArgMin(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               input, ::tensorflow::ops::Input dimension) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _dimension = ::tensorflow::ops::AsNodeOut(scope, dimension);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ArgMin");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ArgMin")
                     .Input(_input)
                     .Input(_dimension)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Asin::Asin(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Asin");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Asin")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Atan::Atan(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Atan");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Atan")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

BatchFFT::BatchFFT(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchFFT");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchFFT")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchFFT2D::BatchFFT2D(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchFFT2D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchFFT2D")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchFFT3D::BatchFFT3D(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchFFT3D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchFFT3D")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchIFFT::BatchIFFT(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchIFFT");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchIFFT")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchIFFT2D::BatchIFFT2D(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchIFFT2D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchIFFT2D")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchIFFT3D::BatchIFFT3D(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchIFFT3D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchIFFT3D")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchMatMul::BatchMatMul(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input x, ::tensorflow::ops::Input
                         y, const BatchMatMul::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchMatMul");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchMatMul")
                     .Input(_x)
                     .Input(_y)
                     .Attr("adj_x", attrs.adj_x_)
                     .Attr("adj_y", attrs.adj_y_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BatchMatMul::BatchMatMul(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input x, ::tensorflow::ops::Input
                         y)
  : BatchMatMul(scope, x, y, BatchMatMul::Attrs()) {}

Betainc::Betainc(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input a,
                 ::tensorflow::ops::Input b, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _a = ::tensorflow::ops::AsNodeOut(scope, a);
  if (!scope.ok()) return;
  auto _b = ::tensorflow::ops::AsNodeOut(scope, b);
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Betainc");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Betainc")
                     .Input(_a)
                     .Input(_b)
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Cast::Cast(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
           DataType DstT) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Cast");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Cast")
                     .Input(_x)
                     .Attr("DstT", DstT)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Ceil::Ceil(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Ceil");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Ceil")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Complex::Complex(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 real, ::tensorflow::ops::Input imag, const Complex::Attrs&
                 attrs) {
  if (!scope.ok()) return;
  auto _real = ::tensorflow::ops::AsNodeOut(scope, real);
  if (!scope.ok()) return;
  auto _imag = ::tensorflow::ops::AsNodeOut(scope, imag);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Complex");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Complex")
                     .Input(_real)
                     .Input(_imag)
                     .Attr("Tout", attrs.Tout_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

Complex::Complex(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 real, ::tensorflow::ops::Input imag)
  : Complex(scope, real, imag, Complex::Attrs()) {}

ComplexAbs::ComplexAbs(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input x, const ComplexAbs::Attrs&
                       attrs) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ComplexAbs");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ComplexAbs")
                     .Input(_x)
                     .Attr("Tout", attrs.Tout_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

ComplexAbs::ComplexAbs(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input x)
  : ComplexAbs(scope, x, ComplexAbs::Attrs()) {}

Conj::Conj(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Conj");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Conj")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Cos::Cos(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Cos");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Cos")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Cross::Cross(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input a,
             ::tensorflow::ops::Input b) {
  if (!scope.ok()) return;
  auto _a = ::tensorflow::ops::AsNodeOut(scope, a);
  if (!scope.ok()) return;
  auto _b = ::tensorflow::ops::AsNodeOut(scope, b);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Cross");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Cross")
                     .Input(_a)
                     .Input(_b)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->product = Output(ret, 0);
}

Cumprod::Cumprod(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
                 ::tensorflow::ops::Input axis, const Cumprod::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _axis = ::tensorflow::ops::AsNodeOut(scope, axis);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Cumprod");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Cumprod")
                     .Input(_x)
                     .Input(_axis)
                     .Attr("exclusive", attrs.exclusive_)
                     .Attr("reverse", attrs.reverse_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

Cumprod::Cumprod(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
                 ::tensorflow::ops::Input axis)
  : Cumprod(scope, x, axis, Cumprod::Attrs()) {}

Cumsum::Cumsum(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
               ::tensorflow::ops::Input axis, const Cumsum::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _axis = ::tensorflow::ops::AsNodeOut(scope, axis);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Cumsum");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Cumsum")
                     .Input(_x)
                     .Input(_axis)
                     .Attr("exclusive", attrs.exclusive_)
                     .Attr("reverse", attrs.reverse_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->out = Output(ret, 0);
}

Cumsum::Cumsum(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
               ::tensorflow::ops::Input axis)
  : Cumsum(scope, x, axis, Cumsum::Attrs()) {}

Digamma::Digamma(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Digamma");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Digamma")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Div::Div(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
         ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Div");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Div")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Equal::Equal(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
             ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Equal");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Equal")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Erf::Erf(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Erf");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Erf")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Erfc::Erfc(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Erfc");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Erfc")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Exp::Exp(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Exp");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Exp")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

FFT::FFT(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("FFT");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "FFT")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

FFT2D::FFT2D(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("FFT2D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "FFT2D")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

FFT3D::FFT3D(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("FFT3D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "FFT3D")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Floor::Floor(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Floor");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Floor")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Greater::Greater(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
                 ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Greater");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Greater")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

GreaterEqual::GreaterEqual(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input x, ::tensorflow::ops::Input
                           y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("GreaterEqual");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "GreaterEqual")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

IFFT::IFFT(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("IFFT");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "IFFT")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

IFFT2D::IFFT2D(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("IFFT2D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "IFFT2D")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

IFFT3D::IFFT3D(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               input) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("IFFT3D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "IFFT3D")
                     .Input(_input)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Igamma::Igamma(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input a,
               ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _a = ::tensorflow::ops::AsNodeOut(scope, a);
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Igamma");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Igamma")
                     .Input(_a)
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Igammac::Igammac(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input a,
                 ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _a = ::tensorflow::ops::AsNodeOut(scope, a);
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Igammac");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Igammac")
                     .Input(_a)
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Imag::Imag(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           const Imag::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Imag");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Imag")
                     .Input(_input)
                     .Attr("Tout", attrs.Tout_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Imag::Imag(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input)
  : Imag(scope, input, Imag::Attrs()) {}

Inv::Inv(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Inv");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Inv")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

InvGrad::InvGrad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
                 ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("InvGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "InvGrad")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

IsFinite::IsFinite(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("IsFinite");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "IsFinite")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

IsInf::IsInf(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("IsInf");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "IsInf")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

IsNan::IsNan(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("IsNan");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "IsNan")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Less::Less(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
           ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Less");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Less")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

LessEqual::LessEqual(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     x, ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LessEqual");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LessEqual")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Lgamma::Lgamma(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Lgamma");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Lgamma")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

LinSpace::LinSpace(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   start, ::tensorflow::ops::Input stop,
                   ::tensorflow::ops::Input num) {
  if (!scope.ok()) return;
  auto _start = ::tensorflow::ops::AsNodeOut(scope, start);
  if (!scope.ok()) return;
  auto _stop = ::tensorflow::ops::AsNodeOut(scope, stop);
  if (!scope.ok()) return;
  auto _num = ::tensorflow::ops::AsNodeOut(scope, num);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LinSpace");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LinSpace")
                     .Input(_start)
                     .Input(_stop)
                     .Input(_num)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Log::Log(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Log");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Log")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

LogicalAnd::LogicalAnd(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input x, ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LogicalAnd");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LogicalAnd")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

LogicalNot::LogicalNot(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LogicalNot");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LogicalNot")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

LogicalOr::LogicalOr(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     x, ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LogicalOr");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LogicalOr")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

MatMul::MatMul(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input a,
               ::tensorflow::ops::Input b, const MatMul::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _a = ::tensorflow::ops::AsNodeOut(scope, a);
  if (!scope.ok()) return;
  auto _b = ::tensorflow::ops::AsNodeOut(scope, b);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MatMul");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MatMul")
                     .Input(_a)
                     .Input(_b)
                     .Attr("transpose_a", attrs.transpose_a_)
                     .Attr("transpose_b", attrs.transpose_b_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->product = Output(ret, 0);
}

MatMul::MatMul(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input a,
               ::tensorflow::ops::Input b)
  : MatMul(scope, a, b, MatMul::Attrs()) {}

Max::Max(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input reduction_indices, const Max::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _reduction_indices = ::tensorflow::ops::AsNodeOut(scope, reduction_indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Max");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Max")
                     .Input(_input)
                     .Input(_reduction_indices)
                     .Attr("keep_dims", attrs.keep_dims_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Max::Max(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input reduction_indices)
  : Max(scope, input, reduction_indices, Max::Attrs()) {}

Maximum::Maximum(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
                 ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Maximum");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Maximum")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Mean::Mean(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           ::tensorflow::ops::Input reduction_indices, const Mean::Attrs&
           attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _reduction_indices = ::tensorflow::ops::AsNodeOut(scope, reduction_indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Mean");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Mean")
                     .Input(_input)
                     .Input(_reduction_indices)
                     .Attr("keep_dims", attrs.keep_dims_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Mean::Mean(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           ::tensorflow::ops::Input reduction_indices)
  : Mean(scope, input, reduction_indices, Mean::Attrs()) {}

Min::Min(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input reduction_indices, const Min::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _reduction_indices = ::tensorflow::ops::AsNodeOut(scope, reduction_indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Min");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Min")
                     .Input(_input)
                     .Input(_reduction_indices)
                     .Attr("keep_dims", attrs.keep_dims_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Min::Min(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input reduction_indices)
  : Min(scope, input, reduction_indices, Min::Attrs()) {}

Minimum::Minimum(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
                 ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Minimum");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Minimum")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Mod::Mod(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
         ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Mod");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Mod")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Mul::Mul(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
         ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Mul");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Mul")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Neg::Neg(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Neg");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Neg")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

NotEqual::NotEqual(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   x, ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("NotEqual");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "NotEqual")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Polygamma::Polygamma(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     a, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _a = ::tensorflow::ops::AsNodeOut(scope, a);
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Polygamma");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Polygamma")
                     .Input(_a)
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Pow::Pow(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
         ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Pow");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Pow")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Prod::Prod(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           ::tensorflow::ops::Input reduction_indices, const Prod::Attrs&
           attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _reduction_indices = ::tensorflow::ops::AsNodeOut(scope, reduction_indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Prod");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Prod")
                     .Input(_input)
                     .Input(_reduction_indices)
                     .Attr("keep_dims", attrs.keep_dims_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Prod::Prod(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           ::tensorflow::ops::Input reduction_indices)
  : Prod(scope, input, reduction_indices, Prod::Attrs()) {}

Range::Range(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input start,
             ::tensorflow::ops::Input limit, ::tensorflow::ops::Input delta) {
  if (!scope.ok()) return;
  auto _start = ::tensorflow::ops::AsNodeOut(scope, start);
  if (!scope.ok()) return;
  auto _limit = ::tensorflow::ops::AsNodeOut(scope, limit);
  if (!scope.ok()) return;
  auto _delta = ::tensorflow::ops::AsNodeOut(scope, delta);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Range");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Range")
                     .Input(_start)
                     .Input(_limit)
                     .Input(_delta)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Real::Real(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           const Real::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Real");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Real")
                     .Input(_input)
                     .Attr("Tout", attrs.Tout_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Real::Real(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input)
  : Real(scope, input, Real::Attrs()) {}

Rsqrt::Rsqrt(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Rsqrt");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Rsqrt")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

RsqrtGrad::RsqrtGrad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     x, ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("RsqrtGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "RsqrtGrad")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

SegmentMax::SegmentMax(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input data, ::tensorflow::ops::Input
                       segment_ids) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SegmentMax");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SegmentMax")
                     .Input(_data)
                     .Input(_segment_ids)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SegmentMean::SegmentMean(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input data,
                         ::tensorflow::ops::Input segment_ids) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SegmentMean");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SegmentMean")
                     .Input(_data)
                     .Input(_segment_ids)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SegmentMin::SegmentMin(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input data, ::tensorflow::ops::Input
                       segment_ids) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SegmentMin");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SegmentMin")
                     .Input(_data)
                     .Input(_segment_ids)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SegmentProd::SegmentProd(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input data,
                         ::tensorflow::ops::Input segment_ids) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SegmentProd");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SegmentProd")
                     .Input(_data)
                     .Input(_segment_ids)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SegmentSum::SegmentSum(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input data, ::tensorflow::ops::Input
                       segment_ids) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SegmentSum");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SegmentSum")
                     .Input(_data)
                     .Input(_segment_ids)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Select::Select(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               condition, ::tensorflow::ops::Input t, ::tensorflow::ops::Input
               e) {
  if (!scope.ok()) return;
  auto _condition = ::tensorflow::ops::AsNodeOut(scope, condition);
  if (!scope.ok()) return;
  auto _t = ::tensorflow::ops::AsNodeOut(scope, t);
  if (!scope.ok()) return;
  auto _e = ::tensorflow::ops::AsNodeOut(scope, e);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Select");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Select")
                     .Input(_condition)
                     .Input(_t)
                     .Input(_e)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Sigmoid::Sigmoid(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Sigmoid");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Sigmoid")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

SigmoidGrad::SigmoidGrad(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input x, ::tensorflow::ops::Input
                         y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SigmoidGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SigmoidGrad")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Sign::Sign(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Sign");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Sign")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Sin::Sin(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Sin");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Sin")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

SparseMatMul::SparseMatMul(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input a, ::tensorflow::ops::Input
                           b, const SparseMatMul::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _a = ::tensorflow::ops::AsNodeOut(scope, a);
  if (!scope.ok()) return;
  auto _b = ::tensorflow::ops::AsNodeOut(scope, b);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseMatMul");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseMatMul")
                     .Input(_a)
                     .Input(_b)
                     .Attr("transpose_a", attrs.transpose_a_)
                     .Attr("transpose_b", attrs.transpose_b_)
                     .Attr("a_is_sparse", attrs.a_is_sparse_)
                     .Attr("b_is_sparse", attrs.b_is_sparse_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->product = Output(ret, 0);
}

SparseMatMul::SparseMatMul(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input a, ::tensorflow::ops::Input
                           b)
  : SparseMatMul(scope, a, b, SparseMatMul::Attrs()) {}

SparseSegmentMean::SparseSegmentMean(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input data,
                                     ::tensorflow::ops::Input indices,
                                     ::tensorflow::ops::Input segment_ids) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseSegmentMean");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseSegmentMean")
                     .Input(_data)
                     .Input(_indices)
                     .Input(_segment_ids)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SparseSegmentMeanGrad::SparseSegmentMeanGrad(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input grad,
                                             ::tensorflow::ops::Input indices,
                                             ::tensorflow::ops::Input
                                             segment_ids,
                                             ::tensorflow::ops::Input
                                             output_dim0) {
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  auto _output_dim0 = ::tensorflow::ops::AsNodeOut(scope, output_dim0);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseSegmentMeanGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseSegmentMeanGrad")
                     .Input(_grad)
                     .Input(_indices)
                     .Input(_segment_ids)
                     .Input(_output_dim0)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SparseSegmentSqrtN::SparseSegmentSqrtN(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input data,
                                       ::tensorflow::ops::Input indices,
                                       ::tensorflow::ops::Input segment_ids) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseSegmentSqrtN");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseSegmentSqrtN")
                     .Input(_data)
                     .Input(_indices)
                     .Input(_segment_ids)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SparseSegmentSqrtNGrad::SparseSegmentSqrtNGrad(const ::tensorflow::Scope&
                                               scope, ::tensorflow::ops::Input
                                               grad, ::tensorflow::ops::Input
                                               indices,
                                               ::tensorflow::ops::Input
                                               segment_ids,
                                               ::tensorflow::ops::Input
                                               output_dim0) {
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  auto _output_dim0 = ::tensorflow::ops::AsNodeOut(scope, output_dim0);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseSegmentSqrtNGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseSegmentSqrtNGrad")
                     .Input(_grad)
                     .Input(_indices)
                     .Input(_segment_ids)
                     .Input(_output_dim0)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

SparseSegmentSum::SparseSegmentSum(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input data,
                                   ::tensorflow::ops::Input indices,
                                   ::tensorflow::ops::Input segment_ids) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseSegmentSum");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseSegmentSum")
                     .Input(_data)
                     .Input(_indices)
                     .Input(_segment_ids)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Sqrt::Sqrt(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Sqrt");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Sqrt")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

SqrtGrad::SqrtGrad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   x, ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SqrtGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SqrtGrad")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Square::Square(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Square");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Square")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

SquaredDifference::SquaredDifference(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input x,
                                     ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SquaredDifference");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SquaredDifference")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Sub::Sub(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
         ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Sub");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Sub")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

Sum::Sum(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input reduction_indices, const Sum::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _reduction_indices = ::tensorflow::ops::AsNodeOut(scope, reduction_indices);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Sum");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Sum")
                     .Input(_input)
                     .Input(_reduction_indices)
                     .Attr("keep_dims", attrs.keep_dims_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Sum::Sum(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         ::tensorflow::ops::Input reduction_indices)
  : Sum(scope, input, reduction_indices, Sum::Attrs()) {}

Tan::Tan(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Tan");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Tan")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

Tanh::Tanh(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Tanh");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Tanh")
                     .Input(_x)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->y = Output(ret, 0);
}

TanhGrad::TanhGrad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   x, ::tensorflow::ops::Input y) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _y = ::tensorflow::ops::AsNodeOut(scope, y);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TanhGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TanhGrad")
                     .Input(_x)
                     .Input(_y)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

UnsortedSegmentSum::UnsortedSegmentSum(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input data,
                                       ::tensorflow::ops::Input segment_ids,
                                       ::tensorflow::ops::Input num_segments) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _segment_ids = ::tensorflow::ops::AsNodeOut(scope, segment_ids);
  if (!scope.ok()) return;
  auto _num_segments = ::tensorflow::ops::AsNodeOut(scope, num_segments);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("UnsortedSegmentSum");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "UnsortedSegmentSum")
                     .Input(_data)
                     .Input(_segment_ids)
                     .Input(_num_segments)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Zeta::Zeta(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input x,
           ::tensorflow::ops::Input q) {
  if (!scope.ok()) return;
  auto _x = ::tensorflow::ops::AsNodeOut(scope, x);
  if (!scope.ok()) return;
  auto _q = ::tensorflow::ops::AsNodeOut(scope, q);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Zeta");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Zeta")
                     .Input(_x)
                     .Input(_q)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->z = Output(ret, 0);
}

}  // namespace ops
}  // namespace tensorflow
