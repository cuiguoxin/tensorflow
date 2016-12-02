// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/nn_ops.h"

namespace tensorflow {
namespace ops {

AvgPool::AvgPool(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 value, const gtl::ArraySlice<int>& ksize, const
                 gtl::ArraySlice<int>& strides, StringPiece padding, const
                 AvgPool::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("AvgPool");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "AvgPool")
                     .Input(_value)
                     .Attr("ksize", ksize)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
                     .Attr("data_format", attrs.data_format_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

AvgPool::AvgPool(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 value, const gtl::ArraySlice<int>& ksize, const
                 gtl::ArraySlice<int>& strides, StringPiece padding)
  : AvgPool(scope, value, ksize, strides, padding, AvgPool::Attrs()) {}

AvgPool3D::AvgPool3D(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     input, const gtl::ArraySlice<int>& ksize, const
                     gtl::ArraySlice<int>& strides, StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("AvgPool3D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "AvgPool3D")
                     .Input(_input)
                     .Attr("ksize", ksize)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

AvgPool3DGrad::AvgPool3DGrad(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input orig_input_shape,
                             ::tensorflow::ops::Input grad, const
                             gtl::ArraySlice<int>& ksize, const
                             gtl::ArraySlice<int>& strides, StringPiece
                             padding) {
  if (!scope.ok()) return;
  auto _orig_input_shape = ::tensorflow::ops::AsNodeOut(scope, orig_input_shape);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("AvgPool3DGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "AvgPool3DGrad")
                     .Input(_orig_input_shape)
                     .Input(_grad)
                     .Attr("ksize", ksize)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

AvgPoolGrad::AvgPoolGrad(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input orig_input_shape,
                         ::tensorflow::ops::Input grad, const
                         gtl::ArraySlice<int>& ksize, const
                         gtl::ArraySlice<int>& strides, StringPiece padding,
                         const AvgPoolGrad::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _orig_input_shape = ::tensorflow::ops::AsNodeOut(scope, orig_input_shape);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("AvgPoolGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "AvgPoolGrad")
                     .Input(_orig_input_shape)
                     .Input(_grad)
                     .Attr("ksize", ksize)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
                     .Attr("data_format", attrs.data_format_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

AvgPoolGrad::AvgPoolGrad(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input orig_input_shape,
                         ::tensorflow::ops::Input grad, const
                         gtl::ArraySlice<int>& ksize, const
                         gtl::ArraySlice<int>& strides, StringPiece padding)
  : AvgPoolGrad(scope, orig_input_shape, grad, ksize, strides, padding, AvgPoolGrad::Attrs()) {}

BatchNormWithGlobalNormalization::BatchNormWithGlobalNormalization(const
                                                                   ::tensorflow::Scope&
                                                                   scope,
                                                                   ::tensorflow::ops::Input
                                                                   t,
                                                                   ::tensorflow::ops::Input
                                                                   m,
                                                                   ::tensorflow::ops::Input
                                                                   v,
                                                                   ::tensorflow::ops::Input
                                                                   beta,
                                                                   ::tensorflow::ops::Input
                                                                   gamma, float
                                                                   variance_epsilon,
                                                                   bool
                                                                   scale_after_normalization) {
  if (!scope.ok()) return;
  auto _t = ::tensorflow::ops::AsNodeOut(scope, t);
  if (!scope.ok()) return;
  auto _m = ::tensorflow::ops::AsNodeOut(scope, m);
  if (!scope.ok()) return;
  auto _v = ::tensorflow::ops::AsNodeOut(scope, v);
  if (!scope.ok()) return;
  auto _beta = ::tensorflow::ops::AsNodeOut(scope, beta);
  if (!scope.ok()) return;
  auto _gamma = ::tensorflow::ops::AsNodeOut(scope, gamma);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchNormWithGlobalNormalization");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchNormWithGlobalNormalization")
                     .Input(_t)
                     .Input(_m)
                     .Input(_v)
                     .Input(_beta)
                     .Input(_gamma)
                     .Attr("variance_epsilon", variance_epsilon)
                     .Attr("scale_after_normalization", scale_after_normalization)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->result = Output(ret, 0);
}

BatchNormWithGlobalNormalizationGrad::BatchNormWithGlobalNormalizationGrad(const
                                                                           ::tensorflow::Scope&
                                                                           scope,
                                                                           ::tensorflow::ops::Input
                                                                           t,
                                                                           ::tensorflow::ops::Input
                                                                           m,
                                                                           ::tensorflow::ops::Input
                                                                           v,
                                                                           ::tensorflow::ops::Input
                                                                           gamma,
                                                                           ::tensorflow::ops::Input
                                                                           backprop,
                                                                           float
                                                                           variance_epsilon,
                                                                           bool
                                                                           scale_after_normalization) {
  if (!scope.ok()) return;
  auto _t = ::tensorflow::ops::AsNodeOut(scope, t);
  if (!scope.ok()) return;
  auto _m = ::tensorflow::ops::AsNodeOut(scope, m);
  if (!scope.ok()) return;
  auto _v = ::tensorflow::ops::AsNodeOut(scope, v);
  if (!scope.ok()) return;
  auto _gamma = ::tensorflow::ops::AsNodeOut(scope, gamma);
  if (!scope.ok()) return;
  auto _backprop = ::tensorflow::ops::AsNodeOut(scope, backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BatchNormWithGlobalNormalizationGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BatchNormWithGlobalNormalizationGrad")
                     .Input(_t)
                     .Input(_m)
                     .Input(_v)
                     .Input(_gamma)
                     .Input(_backprop)
                     .Attr("variance_epsilon", variance_epsilon)
                     .Attr("scale_after_normalization", scale_after_normalization)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->dx = Output(ret, _outputs_range["dx"].first);
  this->dm = Output(ret, _outputs_range["dm"].first);
  this->dv = Output(ret, _outputs_range["dv"].first);
  this->db = Output(ret, _outputs_range["db"].first);
  this->dg = Output(ret, _outputs_range["dg"].first);
}

BiasAdd::BiasAdd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 value, ::tensorflow::ops::Input bias, const BiasAdd::Attrs&
                 attrs) {
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  auto _bias = ::tensorflow::ops::AsNodeOut(scope, bias);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BiasAdd");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BiasAdd")
                     .Input(_value)
                     .Input(_bias)
                     .Attr("data_format", attrs.data_format_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BiasAdd::BiasAdd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 value, ::tensorflow::ops::Input bias)
  : BiasAdd(scope, value, bias, BiasAdd::Attrs()) {}

BiasAddGrad::BiasAddGrad(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input out_backprop, const
                         BiasAddGrad::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BiasAddGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BiasAddGrad")
                     .Input(_out_backprop)
                     .Attr("data_format", attrs.data_format_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

BiasAddGrad::BiasAddGrad(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input out_backprop)
  : BiasAddGrad(scope, out_backprop, BiasAddGrad::Attrs()) {}

BiasAddV1::BiasAddV1(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     value, ::tensorflow::ops::Input bias) {
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  auto _bias = ::tensorflow::ops::AsNodeOut(scope, bias);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BiasAddV1");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BiasAddV1")
                     .Input(_value)
                     .Input(_bias)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Conv2D::Conv2D(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               input, ::tensorflow::ops::Input filter, const
               gtl::ArraySlice<int>& strides, StringPiece padding, const
               Conv2D::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Conv2D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Conv2D")
                     .Input(_input)
                     .Input(_filter)
                     .Attr("strides", strides)
                     .Attr("use_cudnn_on_gpu", attrs.use_cudnn_on_gpu_)
                     .Attr("padding", padding)
                     .Attr("data_format", attrs.data_format_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Conv2D::Conv2D(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               input, ::tensorflow::ops::Input filter, const
               gtl::ArraySlice<int>& strides, StringPiece padding)
  : Conv2D(scope, input, filter, strides, padding, Conv2D::Attrs()) {}

Conv2DBackpropFilter::Conv2DBackpropFilter(const ::tensorflow::Scope& scope,
                                           ::tensorflow::ops::Input input,
                                           ::tensorflow::ops::Input
                                           filter_sizes,
                                           ::tensorflow::ops::Input
                                           out_backprop, const
                                           gtl::ArraySlice<int>& strides,
                                           StringPiece padding, const
                                           Conv2DBackpropFilter::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter_sizes = ::tensorflow::ops::AsNodeOut(scope, filter_sizes);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Conv2DBackpropFilter");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Conv2DBackpropFilter")
                     .Input(_input)
                     .Input(_filter_sizes)
                     .Input(_out_backprop)
                     .Attr("strides", strides)
                     .Attr("use_cudnn_on_gpu", attrs.use_cudnn_on_gpu_)
                     .Attr("padding", padding)
                     .Attr("data_format", attrs.data_format_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Conv2DBackpropFilter::Conv2DBackpropFilter(const ::tensorflow::Scope& scope,
                                           ::tensorflow::ops::Input input,
                                           ::tensorflow::ops::Input
                                           filter_sizes,
                                           ::tensorflow::ops::Input
                                           out_backprop, const
                                           gtl::ArraySlice<int>& strides,
                                           StringPiece padding)
  : Conv2DBackpropFilter(scope, input, filter_sizes, out_backprop, strides, padding, Conv2DBackpropFilter::Attrs()) {}

Conv2DBackpropInput::Conv2DBackpropInput(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input input_sizes,
                                         ::tensorflow::ops::Input filter,
                                         ::tensorflow::ops::Input out_backprop,
                                         const gtl::ArraySlice<int>& strides,
                                         StringPiece padding, const
                                         Conv2DBackpropInput::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input_sizes = ::tensorflow::ops::AsNodeOut(scope, input_sizes);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Conv2DBackpropInput");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Conv2DBackpropInput")
                     .Input(_input_sizes)
                     .Input(_filter)
                     .Input(_out_backprop)
                     .Attr("strides", strides)
                     .Attr("use_cudnn_on_gpu", attrs.use_cudnn_on_gpu_)
                     .Attr("padding", padding)
                     .Attr("data_format", attrs.data_format_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Conv2DBackpropInput::Conv2DBackpropInput(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input input_sizes,
                                         ::tensorflow::ops::Input filter,
                                         ::tensorflow::ops::Input out_backprop,
                                         const gtl::ArraySlice<int>& strides,
                                         StringPiece padding)
  : Conv2DBackpropInput(scope, input_sizes, filter, out_backprop, strides, padding, Conv2DBackpropInput::Attrs()) {}

Conv3D::Conv3D(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               input, ::tensorflow::ops::Input filter, const
               gtl::ArraySlice<int>& strides, StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Conv3D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Conv3D")
                     .Input(_input)
                     .Input(_filter)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Conv3DBackpropFilter::Conv3DBackpropFilter(const ::tensorflow::Scope& scope,
                                           ::tensorflow::ops::Input input,
                                           ::tensorflow::ops::Input filter,
                                           ::tensorflow::ops::Input
                                           out_backprop, const
                                           gtl::ArraySlice<int>& strides,
                                           StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Conv3DBackpropFilter");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Conv3DBackpropFilter")
                     .Input(_input)
                     .Input(_filter)
                     .Input(_out_backprop)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Conv3DBackpropFilterV2::Conv3DBackpropFilterV2(const ::tensorflow::Scope&
                                               scope, ::tensorflow::ops::Input
                                               input, ::tensorflow::ops::Input
                                               filter_sizes,
                                               ::tensorflow::ops::Input
                                               out_backprop, const
                                               gtl::ArraySlice<int>& strides,
                                               StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter_sizes = ::tensorflow::ops::AsNodeOut(scope, filter_sizes);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Conv3DBackpropFilterV2");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Conv3DBackpropFilterV2")
                     .Input(_input)
                     .Input(_filter_sizes)
                     .Input(_out_backprop)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Conv3DBackpropInput::Conv3DBackpropInput(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input input,
                                         ::tensorflow::ops::Input filter,
                                         ::tensorflow::ops::Input out_backprop,
                                         const gtl::ArraySlice<int>& strides,
                                         StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Conv3DBackpropInput");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Conv3DBackpropInput")
                     .Input(_input)
                     .Input(_filter)
                     .Input(_out_backprop)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Conv3DBackpropInputV2::Conv3DBackpropInputV2(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input
                                             input_sizes,
                                             ::tensorflow::ops::Input filter,
                                             ::tensorflow::ops::Input
                                             out_backprop, const
                                             gtl::ArraySlice<int>& strides,
                                             StringPiece padding) {
  if (!scope.ok()) return;
  auto _input_sizes = ::tensorflow::ops::AsNodeOut(scope, input_sizes);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Conv3DBackpropInputV2");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Conv3DBackpropInputV2")
                     .Input(_input_sizes)
                     .Input(_filter)
                     .Input(_out_backprop)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

DepthwiseConv2dNative::DepthwiseConv2dNative(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input input,
                                             ::tensorflow::ops::Input filter,
                                             const gtl::ArraySlice<int>&
                                             strides, StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DepthwiseConv2dNative");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DepthwiseConv2dNative")
                     .Input(_input)
                     .Input(_filter)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

DepthwiseConv2dNativeBackpropFilter::DepthwiseConv2dNativeBackpropFilter(const
                                                                         ::tensorflow::Scope&
                                                                         scope,
                                                                         ::tensorflow::ops::Input
                                                                         input,
                                                                         ::tensorflow::ops::Input
                                                                         filter_sizes,
                                                                         ::tensorflow::ops::Input
                                                                         out_backprop,
                                                                         const
                                                                         gtl::ArraySlice<int>&
                                                                         strides,
                                                                         StringPiece
                                                                         padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter_sizes = ::tensorflow::ops::AsNodeOut(scope, filter_sizes);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DepthwiseConv2dNativeBackpropFilter");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DepthwiseConv2dNativeBackpropFilter")
                     .Input(_input)
                     .Input(_filter_sizes)
                     .Input(_out_backprop)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

DepthwiseConv2dNativeBackpropInput::DepthwiseConv2dNativeBackpropInput(const
                                                                       ::tensorflow::Scope&
                                                                       scope,
                                                                       ::tensorflow::ops::Input
                                                                       input_sizes,
                                                                       ::tensorflow::ops::Input
                                                                       filter,
                                                                       ::tensorflow::ops::Input
                                                                       out_backprop,
                                                                       const
                                                                       gtl::ArraySlice<int>&
                                                                       strides,
                                                                       StringPiece
                                                                       padding) {
  if (!scope.ok()) return;
  auto _input_sizes = ::tensorflow::ops::AsNodeOut(scope, input_sizes);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DepthwiseConv2dNativeBackpropInput");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DepthwiseConv2dNativeBackpropInput")
                     .Input(_input_sizes)
                     .Input(_filter)
                     .Input(_out_backprop)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Dilation2D::Dilation2D(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input input, ::tensorflow::ops::Input
                       filter, const gtl::ArraySlice<int>& strides, const
                       gtl::ArraySlice<int>& rates, StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Dilation2D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Dilation2D")
                     .Input(_input)
                     .Input(_filter)
                     .Attr("strides", strides)
                     .Attr("rates", rates)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Dilation2DBackpropFilter::Dilation2DBackpropFilter(const ::tensorflow::Scope&
                                                   scope,
                                                   ::tensorflow::ops::Input
                                                   input,
                                                   ::tensorflow::ops::Input
                                                   filter,
                                                   ::tensorflow::ops::Input
                                                   out_backprop, const
                                                   gtl::ArraySlice<int>&
                                                   strides, const
                                                   gtl::ArraySlice<int>& rates,
                                                   StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Dilation2DBackpropFilter");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Dilation2DBackpropFilter")
                     .Input(_input)
                     .Input(_filter)
                     .Input(_out_backprop)
                     .Attr("strides", strides)
                     .Attr("rates", rates)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->filter_backprop = Output(ret, 0);
}

Dilation2DBackpropInput::Dilation2DBackpropInput(const ::tensorflow::Scope&
                                                 scope,
                                                 ::tensorflow::ops::Input
                                                 input,
                                                 ::tensorflow::ops::Input
                                                 filter,
                                                 ::tensorflow::ops::Input
                                                 out_backprop, const
                                                 gtl::ArraySlice<int>& strides,
                                                 const gtl::ArraySlice<int>&
                                                 rates, StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Dilation2DBackpropInput");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Dilation2DBackpropInput")
                     .Input(_input)
                     .Input(_filter)
                     .Input(_out_backprop)
                     .Attr("strides", strides)
                     .Attr("rates", rates)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->in_backprop = Output(ret, 0);
}

Elu::Elu(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input features) {
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Elu");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Elu")
                     .Input(_features)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->activations = Output(ret, 0);
}

EluGrad::EluGrad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 gradients, ::tensorflow::ops::Input outputs) {
  if (!scope.ok()) return;
  auto _gradients = ::tensorflow::ops::AsNodeOut(scope, gradients);
  if (!scope.ok()) return;
  auto _outputs = ::tensorflow::ops::AsNodeOut(scope, outputs);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("EluGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "EluGrad")
                     .Input(_gradients)
                     .Input(_outputs)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->backprops = Output(ret, 0);
}

FractionalAvgPool::FractionalAvgPool(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input value, const
                                     gtl::ArraySlice<float>& pooling_ratio,
                                     const FractionalAvgPool::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("FractionalAvgPool");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "FractionalAvgPool")
                     .Input(_value)
                     .Attr("pooling_ratio", pooling_ratio)
                     .Attr("pseudo_random", attrs.pseudo_random_)
                     .Attr("overlapping", attrs.overlapping_)
                     .Attr("deterministic", attrs.deterministic_)
                     .Attr("seed", attrs.seed_)
                     .Attr("seed2", attrs.seed2_)
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
  this->row_pooling_sequence = Output(ret, _outputs_range["row_pooling_sequence"].first);
  this->col_pooling_sequence = Output(ret, _outputs_range["col_pooling_sequence"].first);
}

FractionalAvgPool::FractionalAvgPool(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input value, const
                                     gtl::ArraySlice<float>& pooling_ratio)
  : FractionalAvgPool(scope, value, pooling_ratio, FractionalAvgPool::Attrs()) {}

FractionalAvgPoolGrad::FractionalAvgPoolGrad(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input
                                             orig_input_tensor_shape,
                                             ::tensorflow::ops::Input
                                             out_backprop,
                                             ::tensorflow::ops::Input
                                             row_pooling_sequence,
                                             ::tensorflow::ops::Input
                                             col_pooling_sequence, const
                                             FractionalAvgPoolGrad::Attrs&
                                             attrs) {
  if (!scope.ok()) return;
  auto _orig_input_tensor_shape = ::tensorflow::ops::AsNodeOut(scope, orig_input_tensor_shape);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  auto _row_pooling_sequence = ::tensorflow::ops::AsNodeOut(scope, row_pooling_sequence);
  if (!scope.ok()) return;
  auto _col_pooling_sequence = ::tensorflow::ops::AsNodeOut(scope, col_pooling_sequence);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("FractionalAvgPoolGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "FractionalAvgPoolGrad")
                     .Input(_orig_input_tensor_shape)
                     .Input(_out_backprop)
                     .Input(_row_pooling_sequence)
                     .Input(_col_pooling_sequence)
                     .Attr("overlapping", attrs.overlapping_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

FractionalAvgPoolGrad::FractionalAvgPoolGrad(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input
                                             orig_input_tensor_shape,
                                             ::tensorflow::ops::Input
                                             out_backprop,
                                             ::tensorflow::ops::Input
                                             row_pooling_sequence,
                                             ::tensorflow::ops::Input
                                             col_pooling_sequence)
  : FractionalAvgPoolGrad(scope, orig_input_tensor_shape, out_backprop, row_pooling_sequence, col_pooling_sequence, FractionalAvgPoolGrad::Attrs()) {}

FractionalMaxPool::FractionalMaxPool(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input value, const
                                     gtl::ArraySlice<float>& pooling_ratio,
                                     const FractionalMaxPool::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("FractionalMaxPool");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "FractionalMaxPool")
                     .Input(_value)
                     .Attr("pooling_ratio", pooling_ratio)
                     .Attr("pseudo_random", attrs.pseudo_random_)
                     .Attr("overlapping", attrs.overlapping_)
                     .Attr("deterministic", attrs.deterministic_)
                     .Attr("seed", attrs.seed_)
                     .Attr("seed2", attrs.seed2_)
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
  this->row_pooling_sequence = Output(ret, _outputs_range["row_pooling_sequence"].first);
  this->col_pooling_sequence = Output(ret, _outputs_range["col_pooling_sequence"].first);
}

FractionalMaxPool::FractionalMaxPool(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input value, const
                                     gtl::ArraySlice<float>& pooling_ratio)
  : FractionalMaxPool(scope, value, pooling_ratio, FractionalMaxPool::Attrs()) {}

FractionalMaxPoolGrad::FractionalMaxPoolGrad(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input
                                             orig_input,
                                             ::tensorflow::ops::Input
                                             orig_output,
                                             ::tensorflow::ops::Input
                                             out_backprop,
                                             ::tensorflow::ops::Input
                                             row_pooling_sequence,
                                             ::tensorflow::ops::Input
                                             col_pooling_sequence, const
                                             FractionalMaxPoolGrad::Attrs&
                                             attrs) {
  if (!scope.ok()) return;
  auto _orig_input = ::tensorflow::ops::AsNodeOut(scope, orig_input);
  if (!scope.ok()) return;
  auto _orig_output = ::tensorflow::ops::AsNodeOut(scope, orig_output);
  if (!scope.ok()) return;
  auto _out_backprop = ::tensorflow::ops::AsNodeOut(scope, out_backprop);
  if (!scope.ok()) return;
  auto _row_pooling_sequence = ::tensorflow::ops::AsNodeOut(scope, row_pooling_sequence);
  if (!scope.ok()) return;
  auto _col_pooling_sequence = ::tensorflow::ops::AsNodeOut(scope, col_pooling_sequence);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("FractionalMaxPoolGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "FractionalMaxPoolGrad")
                     .Input(_orig_input)
                     .Input(_orig_output)
                     .Input(_out_backprop)
                     .Input(_row_pooling_sequence)
                     .Input(_col_pooling_sequence)
                     .Attr("overlapping", attrs.overlapping_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

FractionalMaxPoolGrad::FractionalMaxPoolGrad(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input
                                             orig_input,
                                             ::tensorflow::ops::Input
                                             orig_output,
                                             ::tensorflow::ops::Input
                                             out_backprop,
                                             ::tensorflow::ops::Input
                                             row_pooling_sequence,
                                             ::tensorflow::ops::Input
                                             col_pooling_sequence)
  : FractionalMaxPoolGrad(scope, orig_input, orig_output, out_backprop, row_pooling_sequence, col_pooling_sequence, FractionalMaxPoolGrad::Attrs()) {}

FusedResizeAndPadConv2D::FusedResizeAndPadConv2D(const ::tensorflow::Scope&
                                                 scope,
                                                 ::tensorflow::ops::Input
                                                 input,
                                                 ::tensorflow::ops::Input size,
                                                 ::tensorflow::ops::Input
                                                 paddings,
                                                 ::tensorflow::ops::Input
                                                 filter, StringPiece mode,
                                                 const gtl::ArraySlice<int>&
                                                 strides, StringPiece padding,
                                                 const
                                                 FusedResizeAndPadConv2D::Attrs&
                                                 attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _size = ::tensorflow::ops::AsNodeOut(scope, size);
  if (!scope.ok()) return;
  auto _paddings = ::tensorflow::ops::AsNodeOut(scope, paddings);
  if (!scope.ok()) return;
  auto _filter = ::tensorflow::ops::AsNodeOut(scope, filter);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("FusedResizeAndPadConv2D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "FusedResizeAndPadConv2D")
                     .Input(_input)
                     .Input(_size)
                     .Input(_paddings)
                     .Input(_filter)
                     .Attr("resize_align_corners", attrs.resize_align_corners_)
                     .Attr("mode", mode)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

FusedResizeAndPadConv2D::FusedResizeAndPadConv2D(const ::tensorflow::Scope&
                                                 scope,
                                                 ::tensorflow::ops::Input
                                                 input,
                                                 ::tensorflow::ops::Input size,
                                                 ::tensorflow::ops::Input
                                                 paddings,
                                                 ::tensorflow::ops::Input
                                                 filter, StringPiece mode,
                                                 const gtl::ArraySlice<int>&
                                                 strides, StringPiece padding)
  : FusedResizeAndPadConv2D(scope, input, size, paddings, filter, mode, strides, padding, FusedResizeAndPadConv2D::Attrs()) {}

InTopK::InTopK(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               predictions, ::tensorflow::ops::Input targets, int64 k) {
  if (!scope.ok()) return;
  auto _predictions = ::tensorflow::ops::AsNodeOut(scope, predictions);
  if (!scope.ok()) return;
  auto _targets = ::tensorflow::ops::AsNodeOut(scope, targets);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("InTopK");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "InTopK")
                     .Input(_predictions)
                     .Input(_targets)
                     .Attr("k", k)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->precision = Output(ret, 0);
}

L2Loss::L2Loss(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input t) {
  if (!scope.ok()) return;
  auto _t = ::tensorflow::ops::AsNodeOut(scope, t);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("L2Loss");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "L2Loss")
                     .Input(_t)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

LRN::LRN(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
         const LRN::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LRN");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LRN")
                     .Input(_input)
                     .Attr("depth_radius", attrs.depth_radius_)
                     .Attr("bias", attrs.bias_)
                     .Attr("alpha", attrs.alpha_)
                     .Attr("beta", attrs.beta_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

LRN::LRN(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input)
  : LRN(scope, input, LRN::Attrs()) {}

LRNGrad::LRNGrad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 input_grads, ::tensorflow::ops::Input input_image,
                 ::tensorflow::ops::Input output_image, const LRNGrad::Attrs&
                 attrs) {
  if (!scope.ok()) return;
  auto _input_grads = ::tensorflow::ops::AsNodeOut(scope, input_grads);
  if (!scope.ok()) return;
  auto _input_image = ::tensorflow::ops::AsNodeOut(scope, input_image);
  if (!scope.ok()) return;
  auto _output_image = ::tensorflow::ops::AsNodeOut(scope, output_image);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LRNGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LRNGrad")
                     .Input(_input_grads)
                     .Input(_input_image)
                     .Input(_output_image)
                     .Attr("depth_radius", attrs.depth_radius_)
                     .Attr("bias", attrs.bias_)
                     .Attr("alpha", attrs.alpha_)
                     .Attr("beta", attrs.beta_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

LRNGrad::LRNGrad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 input_grads, ::tensorflow::ops::Input input_image,
                 ::tensorflow::ops::Input output_image)
  : LRNGrad(scope, input_grads, input_image, output_image, LRNGrad::Attrs()) {}

LogSoftmax::LogSoftmax(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input logits) {
  if (!scope.ok()) return;
  auto _logits = ::tensorflow::ops::AsNodeOut(scope, logits);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LogSoftmax");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LogSoftmax")
                     .Input(_logits)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->logsoftmax = Output(ret, 0);
}

MaxPool::MaxPool(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 input, const gtl::ArraySlice<int>& ksize, const
                 gtl::ArraySlice<int>& strides, StringPiece padding, const
                 MaxPool::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MaxPool");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MaxPool")
                     .Input(_input)
                     .Attr("ksize", ksize)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
                     .Attr("data_format", attrs.data_format_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MaxPool::MaxPool(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 input, const gtl::ArraySlice<int>& ksize, const
                 gtl::ArraySlice<int>& strides, StringPiece padding)
  : MaxPool(scope, input, ksize, strides, padding, MaxPool::Attrs()) {}

MaxPool3D::MaxPool3D(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     input, const gtl::ArraySlice<int>& ksize, const
                     gtl::ArraySlice<int>& strides, StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MaxPool3D");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MaxPool3D")
                     .Input(_input)
                     .Attr("ksize", ksize)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MaxPool3DGrad::MaxPool3DGrad(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input orig_input,
                             ::tensorflow::ops::Input orig_output,
                             ::tensorflow::ops::Input grad, const
                             gtl::ArraySlice<int>& ksize, const
                             gtl::ArraySlice<int>& strides, StringPiece
                             padding) {
  if (!scope.ok()) return;
  auto _orig_input = ::tensorflow::ops::AsNodeOut(scope, orig_input);
  if (!scope.ok()) return;
  auto _orig_output = ::tensorflow::ops::AsNodeOut(scope, orig_output);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MaxPool3DGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MaxPool3DGrad")
                     .Input(_orig_input)
                     .Input(_orig_output)
                     .Input(_grad)
                     .Attr("ksize", ksize)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MaxPoolGrad::MaxPoolGrad(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input orig_input,
                         ::tensorflow::ops::Input orig_output,
                         ::tensorflow::ops::Input grad, const
                         gtl::ArraySlice<int>& ksize, const
                         gtl::ArraySlice<int>& strides, StringPiece padding,
                         const MaxPoolGrad::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _orig_input = ::tensorflow::ops::AsNodeOut(scope, orig_input);
  if (!scope.ok()) return;
  auto _orig_output = ::tensorflow::ops::AsNodeOut(scope, orig_output);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MaxPoolGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MaxPoolGrad")
                     .Input(_orig_input)
                     .Input(_orig_output)
                     .Input(_grad)
                     .Attr("ksize", ksize)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
                     .Attr("data_format", attrs.data_format_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MaxPoolGrad::MaxPoolGrad(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input orig_input,
                         ::tensorflow::ops::Input orig_output,
                         ::tensorflow::ops::Input grad, const
                         gtl::ArraySlice<int>& ksize, const
                         gtl::ArraySlice<int>& strides, StringPiece padding)
  : MaxPoolGrad(scope, orig_input, orig_output, grad, ksize, strides, padding, MaxPoolGrad::Attrs()) {}

MaxPoolGradWithArgmax::MaxPoolGradWithArgmax(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input input,
                                             ::tensorflow::ops::Input grad,
                                             ::tensorflow::ops::Input argmax,
                                             const gtl::ArraySlice<int>& ksize,
                                             const gtl::ArraySlice<int>&
                                             strides, StringPiece padding) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _grad = ::tensorflow::ops::AsNodeOut(scope, grad);
  if (!scope.ok()) return;
  auto _argmax = ::tensorflow::ops::AsNodeOut(scope, argmax);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MaxPoolGradWithArgmax");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MaxPoolGradWithArgmax")
                     .Input(_input)
                     .Input(_grad)
                     .Input(_argmax)
                     .Attr("ksize", ksize)
                     .Attr("strides", strides)
                     .Attr("padding", padding)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

MaxPoolWithArgmax::MaxPoolWithArgmax(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input input, const
                                     gtl::ArraySlice<int>& ksize, const
                                     gtl::ArraySlice<int>& strides, StringPiece
                                     padding, const MaxPoolWithArgmax::Attrs&
                                     attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MaxPoolWithArgmax");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MaxPoolWithArgmax")
                     .Input(_input)
                     .Attr("ksize", ksize)
                     .Attr("strides", strides)
                     .Attr("Targmax", attrs.Targmax_)
                     .Attr("padding", padding)
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
  this->argmax = Output(ret, _outputs_range["argmax"].first);
}

MaxPoolWithArgmax::MaxPoolWithArgmax(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input input, const
                                     gtl::ArraySlice<int>& ksize, const
                                     gtl::ArraySlice<int>& strides, StringPiece
                                     padding)
  : MaxPoolWithArgmax(scope, input, ksize, strides, padding, MaxPoolWithArgmax::Attrs()) {}

Relu::Relu(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input features) {
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Relu");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Relu")
                     .Input(_features)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->activations = Output(ret, 0);
}

Relu6::Relu6(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
             features) {
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Relu6");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Relu6")
                     .Input(_features)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->activations = Output(ret, 0);
}

Relu6Grad::Relu6Grad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     gradients, ::tensorflow::ops::Input features) {
  if (!scope.ok()) return;
  auto _gradients = ::tensorflow::ops::AsNodeOut(scope, gradients);
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Relu6Grad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Relu6Grad")
                     .Input(_gradients)
                     .Input(_features)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->backprops = Output(ret, 0);
}

ReluGrad::ReluGrad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   gradients, ::tensorflow::ops::Input features) {
  if (!scope.ok()) return;
  auto _gradients = ::tensorflow::ops::AsNodeOut(scope, gradients);
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ReluGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ReluGrad")
                     .Input(_gradients)
                     .Input(_features)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->backprops = Output(ret, 0);
}

Softmax::Softmax(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                 logits) {
  if (!scope.ok()) return;
  auto _logits = ::tensorflow::ops::AsNodeOut(scope, logits);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Softmax");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Softmax")
                     .Input(_logits)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->softmax = Output(ret, 0);
}

SoftmaxCrossEntropyWithLogits::SoftmaxCrossEntropyWithLogits(const
                                                             ::tensorflow::Scope&
                                                             scope,
                                                             ::tensorflow::ops::Input
                                                             features,
                                                             ::tensorflow::ops::Input
                                                             labels) {
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  auto _labels = ::tensorflow::ops::AsNodeOut(scope, labels);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SoftmaxCrossEntropyWithLogits");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SoftmaxCrossEntropyWithLogits")
                     .Input(_features)
                     .Input(_labels)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->loss = Output(ret, _outputs_range["loss"].first);
  this->backprop = Output(ret, _outputs_range["backprop"].first);
}

Softplus::Softplus(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   features) {
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Softplus");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Softplus")
                     .Input(_features)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->activations = Output(ret, 0);
}

SoftplusGrad::SoftplusGrad(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input gradients,
                           ::tensorflow::ops::Input features) {
  if (!scope.ok()) return;
  auto _gradients = ::tensorflow::ops::AsNodeOut(scope, gradients);
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SoftplusGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SoftplusGrad")
                     .Input(_gradients)
                     .Input(_features)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->backprops = Output(ret, 0);
}

Softsign::Softsign(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   features) {
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Softsign");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Softsign")
                     .Input(_features)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->activations = Output(ret, 0);
}

SoftsignGrad::SoftsignGrad(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input gradients,
                           ::tensorflow::ops::Input features) {
  if (!scope.ok()) return;
  auto _gradients = ::tensorflow::ops::AsNodeOut(scope, gradients);
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SoftsignGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SoftsignGrad")
                     .Input(_gradients)
                     .Input(_features)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->backprops = Output(ret, 0);
}

SparseSoftmaxCrossEntropyWithLogits::SparseSoftmaxCrossEntropyWithLogits(const
                                                                         ::tensorflow::Scope&
                                                                         scope,
                                                                         ::tensorflow::ops::Input
                                                                         features,
                                                                         ::tensorflow::ops::Input
                                                                         labels) {
  if (!scope.ok()) return;
  auto _features = ::tensorflow::ops::AsNodeOut(scope, features);
  if (!scope.ok()) return;
  auto _labels = ::tensorflow::ops::AsNodeOut(scope, labels);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("SparseSoftmaxCrossEntropyWithLogits");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "SparseSoftmaxCrossEntropyWithLogits")
                     .Input(_features)
                     .Input(_labels)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->loss = Output(ret, _outputs_range["loss"].first);
  this->backprop = Output(ret, _outputs_range["backprop"].first);
}

TopK::TopK(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           int64 k, const TopK::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TopK");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TopK")
                     .Input(_input)
                     .Attr("k", k)
                     .Attr("sorted", attrs.sorted_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->values = Output(ret, _outputs_range["values"].first);
  this->indices = Output(ret, _outputs_range["indices"].first);
}

TopK::TopK(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
           int64 k)
  : TopK(scope, input, k, TopK::Attrs()) {}

TopKV2::TopKV2(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               input, ::tensorflow::ops::Input k, const TopKV2::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _k = ::tensorflow::ops::AsNodeOut(scope, k);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TopKV2");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TopKV2")
                     .Input(_input)
                     .Input(_k)
                     .Attr("sorted", attrs.sorted_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->values = Output(ret, _outputs_range["values"].first);
  this->indices = Output(ret, _outputs_range["indices"].first);
}

TopKV2::TopKV2(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               input, ::tensorflow::ops::Input k)
  : TopKV2(scope, input, k, TopKV2::Attrs()) {}

}  // namespace ops
}  // namespace tensorflow
