// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/logging_ops.h"

namespace tensorflow {
namespace ops {

Assert::Assert(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               condition, ::tensorflow::ops::InputList data, const
               Assert::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _condition = ::tensorflow::ops::AsNodeOut(scope, condition);
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOutList(scope, data);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Assert");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Assert")
                     .Input(_condition)
                     .Input(_data)
                     .Attr("summarize", attrs.summarize_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

Assert::Assert(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
               condition, ::tensorflow::ops::InputList data)
  : Assert(scope, condition, data, Assert::Attrs()) {}

AudioSummary::AudioSummary(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input tag,
                           ::tensorflow::ops::Input tensor, float sample_rate,
                           const AudioSummary::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _tag = ::tensorflow::ops::AsNodeOut(scope, tag);
  if (!scope.ok()) return;
  auto _tensor = ::tensorflow::ops::AsNodeOut(scope, tensor);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("AudioSummary");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "AudioSummary")
                     .Input(_tag)
                     .Input(_tensor)
                     .Attr("sample_rate", sample_rate)
                     .Attr("max_outputs", attrs.max_outputs_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->summary = Output(ret, 0);
}

AudioSummary::AudioSummary(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input tag,
                           ::tensorflow::ops::Input tensor, float sample_rate)
  : AudioSummary(scope, tag, tensor, sample_rate, AudioSummary::Attrs()) {}

HistogramSummary::HistogramSummary(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input tag,
                                   ::tensorflow::ops::Input values) {
  if (!scope.ok()) return;
  auto _tag = ::tensorflow::ops::AsNodeOut(scope, tag);
  if (!scope.ok()) return;
  auto _values = ::tensorflow::ops::AsNodeOut(scope, values);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("HistogramSummary");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "HistogramSummary")
                     .Input(_tag)
                     .Input(_values)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->summary = Output(ret, 0);
}

ImageSummary::ImageSummary(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input tag,
                           ::tensorflow::ops::Input tensor, const
                           ImageSummary::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _tag = ::tensorflow::ops::AsNodeOut(scope, tag);
  if (!scope.ok()) return;
  auto _tensor = ::tensorflow::ops::AsNodeOut(scope, tensor);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ImageSummary");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ImageSummary")
                     .Input(_tag)
                     .Input(_tensor)
                     .Attr("max_images", attrs.max_images_)
                     .Attr("bad_color", attrs.bad_color_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->summary = Output(ret, 0);
}

ImageSummary::ImageSummary(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input tag,
                           ::tensorflow::ops::Input tensor)
  : ImageSummary(scope, tag, tensor, ImageSummary::Attrs()) {}

MergeSummary::MergeSummary(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::InputList inputs) {
  if (!scope.ok()) return;
  auto _inputs = ::tensorflow::ops::AsNodeOutList(scope, inputs);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MergeSummary");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MergeSummary")
                     .Input(_inputs)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->summary = Output(ret, 0);
}

Print::Print(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
             ::tensorflow::ops::InputList data, const Print::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _input = ::tensorflow::ops::AsNodeOut(scope, input);
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOutList(scope, data);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Print");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Print")
                     .Input(_input)
                     .Input(_data)
                     .Attr("message", attrs.message_)
                     .Attr("first_n", attrs.first_n_)
                     .Attr("summarize", attrs.summarize_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

Print::Print(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input input,
             ::tensorflow::ops::InputList data)
  : Print(scope, input, data, Print::Attrs()) {}

ScalarSummary::ScalarSummary(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input tags,
                             ::tensorflow::ops::Input values) {
  if (!scope.ok()) return;
  auto _tags = ::tensorflow::ops::AsNodeOut(scope, tags);
  if (!scope.ok()) return;
  auto _values = ::tensorflow::ops::AsNodeOut(scope, values);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("ScalarSummary");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "ScalarSummary")
                     .Input(_tags)
                     .Input(_values)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->summary = Output(ret, 0);
}

TensorSummary::TensorSummary(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input tensor, StringPiece
                             display_name, const TensorSummary::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _tensor = ::tensorflow::ops::AsNodeOut(scope, tensor);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorSummary");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorSummary")
                     .Input(_tensor)
                     .Attr("display_name", display_name)
                     .Attr("description", attrs.description_)
                     .Attr("labels", attrs.labels_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->summary = Output(ret, 0);
}

TensorSummary::TensorSummary(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::Input tensor, StringPiece
                             display_name)
  : TensorSummary(scope, tensor, display_name, TensorSummary::Attrs()) {}

}  // namespace ops
}  // namespace tensorflow
