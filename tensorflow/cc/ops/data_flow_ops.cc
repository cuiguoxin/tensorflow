// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/data_flow_ops.h"

namespace tensorflow {
namespace ops {

Barrier::Barrier(const ::tensorflow::Scope& scope, const DataTypeSlice&
                 component_types, const Barrier::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Barrier");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Barrier")
                     .Attr("component_types", component_types)
                     .Attr("shapes", attrs.shapes_)
                     .Attr("capacity", attrs.capacity_)
                     .Attr("container", attrs.container_)
                     .Attr("shared_name", attrs.shared_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->handle = Output(ret, 0);
}

Barrier::Barrier(const ::tensorflow::Scope& scope, const DataTypeSlice&
                 component_types)
  : Barrier(scope, component_types, Barrier::Attrs()) {}

BarrierClose::BarrierClose(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input handle, const
                           BarrierClose::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BarrierClose");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BarrierClose")
                     .Input(_handle)
                     .Attr("cancel_pending_enqueues", attrs.cancel_pending_enqueues_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

BarrierClose::BarrierClose(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input handle)
  : BarrierClose(scope, handle, BarrierClose::Attrs()) {}

BarrierIncompleteSize::BarrierIncompleteSize(const ::tensorflow::Scope& scope,
                                             ::tensorflow::ops::Input handle) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BarrierIncompleteSize");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BarrierIncompleteSize")
                     .Input(_handle)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->size = Output(ret, 0);
}

BarrierInsertMany::BarrierInsertMany(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input handle,
                                     ::tensorflow::ops::Input keys,
                                     ::tensorflow::ops::Input values, int64
                                     component_index) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _keys = ::tensorflow::ops::AsNodeOut(scope, keys);
  if (!scope.ok()) return;
  auto _values = ::tensorflow::ops::AsNodeOut(scope, values);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BarrierInsertMany");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BarrierInsertMany")
                     .Input(_handle)
                     .Input(_keys)
                     .Input(_values)
                     .Attr("component_index", component_index)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

BarrierReadySize::BarrierReadySize(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BarrierReadySize");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BarrierReadySize")
                     .Input(_handle)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->size = Output(ret, 0);
}

BarrierTakeMany::BarrierTakeMany(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input handle,
                                 ::tensorflow::ops::Input num_elements, const
                                 DataTypeSlice& component_types, const
                                 BarrierTakeMany::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _num_elements = ::tensorflow::ops::AsNodeOut(scope, num_elements);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("BarrierTakeMany");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "BarrierTakeMany")
                     .Input(_handle)
                     .Input(_num_elements)
                     .Attr("component_types", component_types)
                     .Attr("allow_small_batch", attrs.allow_small_batch_)
                     .Attr("wait_for_incomplete", attrs.wait_for_incomplete_)
                     .Attr("timeout_ms", attrs.timeout_ms_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->indices = Output(ret, _outputs_range["indices"].first);
  this->keys = Output(ret, _outputs_range["keys"].first);
  for (int64 i = _outputs_range["values"].first; i < _outputs_range["values"].second; ++i)
    this->values.push_back(Output(ret, i));
}

BarrierTakeMany::BarrierTakeMany(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input handle,
                                 ::tensorflow::ops::Input num_elements, const
                                 DataTypeSlice& component_types)
  : BarrierTakeMany(scope, handle, num_elements, component_types, BarrierTakeMany::Attrs()) {}

DeleteSessionTensor::DeleteSessionTensor(const ::tensorflow::Scope& scope,
                                         ::tensorflow::ops::Input handle) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DeleteSessionTensor");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DeleteSessionTensor")
                     .Input(_handle)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

DynamicPartition::DynamicPartition(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input data,
                                   ::tensorflow::ops::Input partitions, int64
                                   num_partitions) {
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOut(scope, data);
  if (!scope.ok()) return;
  auto _partitions = ::tensorflow::ops::AsNodeOut(scope, partitions);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DynamicPartition");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DynamicPartition")
                     .Input(_data)
                     .Input(_partitions)
                     .Attr("num_partitions", num_partitions)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->outputs.push_back(Output(ret, i));
}

DynamicStitch::DynamicStitch(const ::tensorflow::Scope& scope,
                             ::tensorflow::ops::InputList indices,
                             ::tensorflow::ops::InputList data) {
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOutList(scope, indices);
  if (!scope.ok()) return;
  auto _data = ::tensorflow::ops::AsNodeOutList(scope, data);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("DynamicStitch");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "DynamicStitch")
                     .Input(_indices)
                     .Input(_data)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->merged = Output(ret, 0);
}

FIFOQueue::FIFOQueue(const ::tensorflow::Scope& scope, const DataTypeSlice&
                     component_types, const FIFOQueue::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("FIFOQueue");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "FIFOQueue")
                     .Attr("component_types", component_types)
                     .Attr("shapes", attrs.shapes_)
                     .Attr("capacity", attrs.capacity_)
                     .Attr("container", attrs.container_)
                     .Attr("shared_name", attrs.shared_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->handle = Output(ret, 0);
}

FIFOQueue::FIFOQueue(const ::tensorflow::Scope& scope, const DataTypeSlice&
                     component_types)
  : FIFOQueue(scope, component_types, FIFOQueue::Attrs()) {}

GetSessionHandle::GetSessionHandle(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input value) {
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("GetSessionHandle");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "GetSessionHandle")
                     .Input(_value)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->handle = Output(ret, 0);
}

GetSessionTensor::GetSessionTensor(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle, DataType
                                   dtype) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("GetSessionTensor");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "GetSessionTensor")
                     .Input(_handle)
                     .Attr("dtype", dtype)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->value = Output(ret, 0);
}

HashTable::HashTable(const ::tensorflow::Scope& scope, DataType key_dtype,
                     DataType value_dtype, const HashTable::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("HashTable");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "HashTable")
                     .Attr("container", attrs.container_)
                     .Attr("shared_name", attrs.shared_name_)
                     .Attr("use_node_name_sharing", attrs.use_node_name_sharing_)
                     .Attr("key_dtype", key_dtype)
                     .Attr("value_dtype", value_dtype)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->table_handle = Output(ret, 0);
}

HashTable::HashTable(const ::tensorflow::Scope& scope, DataType key_dtype,
                     DataType value_dtype)
  : HashTable(scope, key_dtype, value_dtype, HashTable::Attrs()) {}

InitializeTable::InitializeTable(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input table_handle,
                                 ::tensorflow::ops::Input keys,
                                 ::tensorflow::ops::Input values) {
  if (!scope.ok()) return;
  auto _table_handle = ::tensorflow::ops::AsNodeOut(scope, table_handle);
  if (!scope.ok()) return;
  auto _keys = ::tensorflow::ops::AsNodeOut(scope, keys);
  if (!scope.ok()) return;
  auto _values = ::tensorflow::ops::AsNodeOut(scope, values);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("InitializeTable");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "InitializeTable")
                     .Input(_table_handle)
                     .Input(_keys)
                     .Input(_values)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

InitializeTableFromTextFile::InitializeTableFromTextFile(const
                                                         ::tensorflow::Scope&
                                                         scope,
                                                         ::tensorflow::ops::Input
                                                         table_handle,
                                                         ::tensorflow::ops::Input
                                                         filename, int64
                                                         key_index, int64
                                                         value_index, const
                                                         InitializeTableFromTextFile::Attrs&
                                                         attrs) {
  if (!scope.ok()) return;
  auto _table_handle = ::tensorflow::ops::AsNodeOut(scope, table_handle);
  if (!scope.ok()) return;
  auto _filename = ::tensorflow::ops::AsNodeOut(scope, filename);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("InitializeTableFromTextFile");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "InitializeTableFromTextFile")
                     .Input(_table_handle)
                     .Input(_filename)
                     .Attr("key_index", key_index)
                     .Attr("value_index", value_index)
                     .Attr("vocab_size", attrs.vocab_size_)
                     .Attr("delimiter", attrs.delimiter_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

InitializeTableFromTextFile::InitializeTableFromTextFile(const
                                                         ::tensorflow::Scope&
                                                         scope,
                                                         ::tensorflow::ops::Input
                                                         table_handle,
                                                         ::tensorflow::ops::Input
                                                         filename, int64
                                                         key_index, int64
                                                         value_index)
  : InitializeTableFromTextFile(scope, table_handle, filename, key_index, value_index, InitializeTableFromTextFile::Attrs()) {}

LookupTableExport::LookupTableExport(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input table_handle,
                                     DataType Tkeys, DataType Tvalues) {
  if (!scope.ok()) return;
  auto _table_handle = ::tensorflow::ops::AsNodeOut(scope, table_handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LookupTableExport");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LookupTableExport")
                     .Input(_table_handle)
                     .Attr("Tkeys", Tkeys)
                     .Attr("Tvalues", Tvalues)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->keys = Output(ret, _outputs_range["keys"].first);
  this->values = Output(ret, _outputs_range["values"].first);
}

LookupTableFind::LookupTableFind(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input table_handle,
                                 ::tensorflow::ops::Input keys,
                                 ::tensorflow::ops::Input default_value) {
  if (!scope.ok()) return;
  auto _table_handle = ::tensorflow::ops::AsNodeOut(scope, table_handle);
  if (!scope.ok()) return;
  auto _keys = ::tensorflow::ops::AsNodeOut(scope, keys);
  if (!scope.ok()) return;
  auto _default_value = ::tensorflow::ops::AsNodeOut(scope, default_value);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LookupTableFind");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LookupTableFind")
                     .Input(_table_handle)
                     .Input(_keys)
                     .Input(_default_value)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->values = Output(ret, 0);
}

LookupTableImport::LookupTableImport(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input table_handle,
                                     ::tensorflow::ops::Input keys,
                                     ::tensorflow::ops::Input values) {
  if (!scope.ok()) return;
  auto _table_handle = ::tensorflow::ops::AsNodeOut(scope, table_handle);
  if (!scope.ok()) return;
  auto _keys = ::tensorflow::ops::AsNodeOut(scope, keys);
  if (!scope.ok()) return;
  auto _values = ::tensorflow::ops::AsNodeOut(scope, values);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LookupTableImport");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LookupTableImport")
                     .Input(_table_handle)
                     .Input(_keys)
                     .Input(_values)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

LookupTableInsert::LookupTableInsert(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input table_handle,
                                     ::tensorflow::ops::Input keys,
                                     ::tensorflow::ops::Input values) {
  if (!scope.ok()) return;
  auto _table_handle = ::tensorflow::ops::AsNodeOut(scope, table_handle);
  if (!scope.ok()) return;
  auto _keys = ::tensorflow::ops::AsNodeOut(scope, keys);
  if (!scope.ok()) return;
  auto _values = ::tensorflow::ops::AsNodeOut(scope, values);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LookupTableInsert");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LookupTableInsert")
                     .Input(_table_handle)
                     .Input(_keys)
                     .Input(_values)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

LookupTableSize::LookupTableSize(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input table_handle) {
  if (!scope.ok()) return;
  auto _table_handle = ::tensorflow::ops::AsNodeOut(scope, table_handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("LookupTableSize");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "LookupTableSize")
                     .Input(_table_handle)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->size = Output(ret, 0);
}

MutableHashTable::MutableHashTable(const ::tensorflow::Scope& scope, DataType
                                   key_dtype, DataType value_dtype, const
                                   MutableHashTable::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MutableHashTable");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MutableHashTable")
                     .Attr("container", attrs.container_)
                     .Attr("shared_name", attrs.shared_name_)
                     .Attr("use_node_name_sharing", attrs.use_node_name_sharing_)
                     .Attr("key_dtype", key_dtype)
                     .Attr("value_dtype", value_dtype)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->table_handle = Output(ret, 0);
}

MutableHashTable::MutableHashTable(const ::tensorflow::Scope& scope, DataType
                                   key_dtype, DataType value_dtype)
  : MutableHashTable(scope, key_dtype, value_dtype, MutableHashTable::Attrs()) {}

MutableHashTableOfTensors::MutableHashTableOfTensors(const ::tensorflow::Scope&
                                                     scope, DataType key_dtype,
                                                     DataType value_dtype,
                                                     const
                                                     MutableHashTableOfTensors::Attrs&
                                                     attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("MutableHashTableOfTensors");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "MutableHashTableOfTensors")
                     .Attr("container", attrs.container_)
                     .Attr("shared_name", attrs.shared_name_)
                     .Attr("use_node_name_sharing", attrs.use_node_name_sharing_)
                     .Attr("key_dtype", key_dtype)
                     .Attr("value_dtype", value_dtype)
                     .Attr("value_shape", attrs.value_shape_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->table_handle = Output(ret, 0);
}

MutableHashTableOfTensors::MutableHashTableOfTensors(const ::tensorflow::Scope&
                                                     scope, DataType key_dtype,
                                                     DataType value_dtype)
  : MutableHashTableOfTensors(scope, key_dtype, value_dtype, MutableHashTableOfTensors::Attrs()) {}

PaddingFIFOQueue::PaddingFIFOQueue(const ::tensorflow::Scope& scope, const
                                   DataTypeSlice& component_types, const
                                   PaddingFIFOQueue::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("PaddingFIFOQueue");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "PaddingFIFOQueue")
                     .Attr("component_types", component_types)
                     .Attr("shapes", attrs.shapes_)
                     .Attr("capacity", attrs.capacity_)
                     .Attr("container", attrs.container_)
                     .Attr("shared_name", attrs.shared_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->handle = Output(ret, 0);
}

PaddingFIFOQueue::PaddingFIFOQueue(const ::tensorflow::Scope& scope, const
                                   DataTypeSlice& component_types)
  : PaddingFIFOQueue(scope, component_types, PaddingFIFOQueue::Attrs()) {}

PriorityQueue::PriorityQueue(const ::tensorflow::Scope& scope, const
                             gtl::ArraySlice<TensorShape>& shapes, const
                             PriorityQueue::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("PriorityQueue");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "PriorityQueue")
                     .Attr("component_types", attrs.component_types_)
                     .Attr("shapes", shapes)
                     .Attr("capacity", attrs.capacity_)
                     .Attr("container", attrs.container_)
                     .Attr("shared_name", attrs.shared_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->handle = Output(ret, 0);
}

PriorityQueue::PriorityQueue(const ::tensorflow::Scope& scope, const
                             gtl::ArraySlice<TensorShape>& shapes)
  : PriorityQueue(scope, shapes, PriorityQueue::Attrs()) {}

QueueClose::QueueClose(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input handle, const
                       QueueClose::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("QueueClose");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "QueueClose")
                     .Input(_handle)
                     .Attr("cancel_pending_enqueues", attrs.cancel_pending_enqueues_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

QueueClose::QueueClose(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input handle)
  : QueueClose(scope, handle, QueueClose::Attrs()) {}

QueueDequeue::QueueDequeue(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input handle, const
                           DataTypeSlice& component_types, const
                           QueueDequeue::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("QueueDequeue");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "QueueDequeue")
                     .Input(_handle)
                     .Attr("component_types", component_types)
                     .Attr("timeout_ms", attrs.timeout_ms_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->components.push_back(Output(ret, i));
}

QueueDequeue::QueueDequeue(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input handle, const
                           DataTypeSlice& component_types)
  : QueueDequeue(scope, handle, component_types, QueueDequeue::Attrs()) {}

QueueDequeueMany::QueueDequeueMany(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle,
                                   ::tensorflow::ops::Input n, const
                                   DataTypeSlice& component_types, const
                                   QueueDequeueMany::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _n = ::tensorflow::ops::AsNodeOut(scope, n);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("QueueDequeueMany");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "QueueDequeueMany")
                     .Input(_handle)
                     .Input(_n)
                     .Attr("component_types", component_types)
                     .Attr("timeout_ms", attrs.timeout_ms_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->components.push_back(Output(ret, i));
}

QueueDequeueMany::QueueDequeueMany(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle,
                                   ::tensorflow::ops::Input n, const
                                   DataTypeSlice& component_types)
  : QueueDequeueMany(scope, handle, n, component_types, QueueDequeueMany::Attrs()) {}

QueueDequeueUpTo::QueueDequeueUpTo(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle,
                                   ::tensorflow::ops::Input n, const
                                   DataTypeSlice& component_types, const
                                   QueueDequeueUpTo::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _n = ::tensorflow::ops::AsNodeOut(scope, n);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("QueueDequeueUpTo");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "QueueDequeueUpTo")
                     .Input(_handle)
                     .Input(_n)
                     .Attr("component_types", component_types)
                     .Attr("timeout_ms", attrs.timeout_ms_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->components.push_back(Output(ret, i));
}

QueueDequeueUpTo::QueueDequeueUpTo(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle,
                                   ::tensorflow::ops::Input n, const
                                   DataTypeSlice& component_types)
  : QueueDequeueUpTo(scope, handle, n, component_types, QueueDequeueUpTo::Attrs()) {}

QueueEnqueue::QueueEnqueue(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input handle,
                           ::tensorflow::ops::InputList components, const
                           QueueEnqueue::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _components = ::tensorflow::ops::AsNodeOutList(scope, components);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("QueueEnqueue");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "QueueEnqueue")
                     .Input(_handle)
                     .Input(_components)
                     .Attr("timeout_ms", attrs.timeout_ms_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

QueueEnqueue::QueueEnqueue(const ::tensorflow::Scope& scope,
                           ::tensorflow::ops::Input handle,
                           ::tensorflow::ops::InputList components)
  : QueueEnqueue(scope, handle, components, QueueEnqueue::Attrs()) {}

QueueEnqueueMany::QueueEnqueueMany(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle,
                                   ::tensorflow::ops::InputList components,
                                   const QueueEnqueueMany::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _components = ::tensorflow::ops::AsNodeOutList(scope, components);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("QueueEnqueueMany");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "QueueEnqueueMany")
                     .Input(_handle)
                     .Input(_components)
                     .Attr("timeout_ms", attrs.timeout_ms_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

QueueEnqueueMany::QueueEnqueueMany(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle,
                                   ::tensorflow::ops::InputList components)
  : QueueEnqueueMany(scope, handle, components, QueueEnqueueMany::Attrs()) {}

QueueSize::QueueSize(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     handle) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("QueueSize");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "QueueSize")
                     .Input(_handle)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->size = Output(ret, 0);
}

RandomShuffleQueue::RandomShuffleQueue(const ::tensorflow::Scope& scope, const
                                       DataTypeSlice& component_types, const
                                       RandomShuffleQueue::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("RandomShuffleQueue");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "RandomShuffleQueue")
                     .Attr("component_types", component_types)
                     .Attr("shapes", attrs.shapes_)
                     .Attr("capacity", attrs.capacity_)
                     .Attr("min_after_dequeue", attrs.min_after_dequeue_)
                     .Attr("seed", attrs.seed_)
                     .Attr("seed2", attrs.seed2_)
                     .Attr("container", attrs.container_)
                     .Attr("shared_name", attrs.shared_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->handle = Output(ret, 0);
}

RandomShuffleQueue::RandomShuffleQueue(const ::tensorflow::Scope& scope, const
                                       DataTypeSlice& component_types)
  : RandomShuffleQueue(scope, component_types, RandomShuffleQueue::Attrs()) {}

Stack::Stack(const ::tensorflow::Scope& scope, DataType elem_type, const
             Stack::Attrs& attrs) {
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("Stack");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "Stack")
                     .Attr("elem_type", elem_type)
                     .Attr("stack_name", attrs.stack_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->handle = Output(ret, 0);
}

Stack::Stack(const ::tensorflow::Scope& scope, DataType elem_type)
  : Stack(scope, elem_type, Stack::Attrs()) {}

StackClose::StackClose(const ::tensorflow::Scope& scope,
                       ::tensorflow::ops::Input handle) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("StackClose");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "StackClose")
                     .Input(_handle)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

StackPop::StackPop(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                   handle, DataType elem_type) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("StackPop");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "StackPop")
                     .Input(_handle)
                     .Attr("elem_type", elem_type)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->elem = Output(ret, 0);
}

StackPush::StackPush(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     handle, ::tensorflow::ops::Input elem, const
                     StackPush::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _elem = ::tensorflow::ops::AsNodeOut(scope, elem);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("StackPush");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "StackPush")
                     .Input(_handle)
                     .Input(_elem)
                     .Attr("swap_memory", attrs.swap_memory_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->output = Output(ret, 0);
}

StackPush::StackPush(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     handle, ::tensorflow::ops::Input elem)
  : StackPush(scope, handle, elem, StackPush::Attrs()) {}

TensorArray::TensorArray(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input size, DataType dtype, const
                         TensorArray::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _size = ::tensorflow::ops::AsNodeOut(scope, size);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArray");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArray")
                     .Input(_size)
                     .Attr("dtype", dtype)
                     .Attr("dynamic_size", attrs.dynamic_size_)
                     .Attr("clear_after_read", attrs.clear_after_read_)
                     .Attr("tensor_array_name", attrs.tensor_array_name_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->handle = Output(ret, 0);
}

TensorArray::TensorArray(const ::tensorflow::Scope& scope,
                         ::tensorflow::ops::Input size, DataType dtype)
  : TensorArray(scope, size, dtype, TensorArray::Attrs()) {}

TensorArrayClose::TensorArrayClose(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArrayClose");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArrayClose")
                     .Input(_handle)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->operation = Operation(ret);
  return;
}

TensorArrayConcat::TensorArrayConcat(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input handle,
                                     ::tensorflow::ops::Input flow_in, DataType
                                     dtype, const TensorArrayConcat::Attrs&
                                     attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _flow_in = ::tensorflow::ops::AsNodeOut(scope, flow_in);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArrayConcat");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArrayConcat")
                     .Input(_handle)
                     .Input(_flow_in)
                     .Attr("dtype", dtype)
                     .Attr("element_shape_except0", attrs.element_shape_except0_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  ::tensorflow::NameRangeMap _outputs_range;
  ::tensorflow::Status _status_ = ::tensorflow::NameRangesForNode(ret->def(), ret->op_def(), nullptr, &_outputs_range);
  if (!_status_.ok()) {
    scope.UpdateStatus(_status_);
    return;
  }

  this->value = Output(ret, _outputs_range["value"].first);
  this->lengths = Output(ret, _outputs_range["lengths"].first);
}

TensorArrayConcat::TensorArrayConcat(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input handle,
                                     ::tensorflow::ops::Input flow_in, DataType
                                     dtype)
  : TensorArrayConcat(scope, handle, flow_in, dtype, TensorArrayConcat::Attrs()) {}

TensorArrayGather::TensorArrayGather(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input handle,
                                     ::tensorflow::ops::Input indices,
                                     ::tensorflow::ops::Input flow_in, DataType
                                     dtype, const TensorArrayGather::Attrs&
                                     attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _flow_in = ::tensorflow::ops::AsNodeOut(scope, flow_in);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArrayGather");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArrayGather")
                     .Input(_handle)
                     .Input(_indices)
                     .Input(_flow_in)
                     .Attr("dtype", dtype)
                     .Attr("element_shape", attrs.element_shape_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->value = Output(ret, 0);
}

TensorArrayGather::TensorArrayGather(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input handle,
                                     ::tensorflow::ops::Input indices,
                                     ::tensorflow::ops::Input flow_in, DataType
                                     dtype)
  : TensorArrayGather(scope, handle, indices, flow_in, dtype, TensorArrayGather::Attrs()) {}

TensorArrayGrad::TensorArrayGrad(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input handle,
                                 ::tensorflow::ops::Input flow_in, StringPiece
                                 source) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _flow_in = ::tensorflow::ops::AsNodeOut(scope, flow_in);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArrayGrad");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArrayGrad")
                     .Input(_handle)
                     .Input(_flow_in)
                     .Attr("source", source)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->grad_handle = Output(ret, 0);
}

TensorArrayPack::TensorArrayPack(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input handle,
                                 ::tensorflow::ops::Input flow_in, DataType
                                 dtype, const TensorArrayPack::Attrs& attrs) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _flow_in = ::tensorflow::ops::AsNodeOut(scope, flow_in);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArrayPack");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArrayPack")
                     .Input(_handle)
                     .Input(_flow_in)
                     .Attr("dtype", dtype)
                     .Attr("element_shape", attrs.element_shape_)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->value = Output(ret, 0);
}

TensorArrayPack::TensorArrayPack(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input handle,
                                 ::tensorflow::ops::Input flow_in, DataType
                                 dtype)
  : TensorArrayPack(scope, handle, flow_in, dtype, TensorArrayPack::Attrs()) {}

TensorArrayRead::TensorArrayRead(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input handle,
                                 ::tensorflow::ops::Input index,
                                 ::tensorflow::ops::Input flow_in, DataType
                                 dtype) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _index = ::tensorflow::ops::AsNodeOut(scope, index);
  if (!scope.ok()) return;
  auto _flow_in = ::tensorflow::ops::AsNodeOut(scope, flow_in);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArrayRead");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArrayRead")
                     .Input(_handle)
                     .Input(_index)
                     .Input(_flow_in)
                     .Attr("dtype", dtype)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->value = Output(ret, 0);
}

TensorArrayScatter::TensorArrayScatter(const ::tensorflow::Scope& scope,
                                       ::tensorflow::ops::Input handle,
                                       ::tensorflow::ops::Input indices,
                                       ::tensorflow::ops::Input value,
                                       ::tensorflow::ops::Input flow_in) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _indices = ::tensorflow::ops::AsNodeOut(scope, indices);
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  auto _flow_in = ::tensorflow::ops::AsNodeOut(scope, flow_in);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArrayScatter");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArrayScatter")
                     .Input(_handle)
                     .Input(_indices)
                     .Input(_value)
                     .Input(_flow_in)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->flow_out = Output(ret, 0);
}

TensorArraySize::TensorArraySize(const ::tensorflow::Scope& scope,
                                 ::tensorflow::ops::Input handle,
                                 ::tensorflow::ops::Input flow_in) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _flow_in = ::tensorflow::ops::AsNodeOut(scope, flow_in);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArraySize");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArraySize")
                     .Input(_handle)
                     .Input(_flow_in)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->size = Output(ret, 0);
}

TensorArraySplit::TensorArraySplit(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle,
                                   ::tensorflow::ops::Input value,
                                   ::tensorflow::ops::Input lengths,
                                   ::tensorflow::ops::Input flow_in) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  auto _lengths = ::tensorflow::ops::AsNodeOut(scope, lengths);
  if (!scope.ok()) return;
  auto _flow_in = ::tensorflow::ops::AsNodeOut(scope, flow_in);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArraySplit");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArraySplit")
                     .Input(_handle)
                     .Input(_value)
                     .Input(_lengths)
                     .Input(_flow_in)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->flow_out = Output(ret, 0);
}

TensorArrayUnpack::TensorArrayUnpack(const ::tensorflow::Scope& scope,
                                     ::tensorflow::ops::Input handle,
                                     ::tensorflow::ops::Input value,
                                     ::tensorflow::ops::Input flow_in) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  auto _flow_in = ::tensorflow::ops::AsNodeOut(scope, flow_in);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArrayUnpack");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArrayUnpack")
                     .Input(_handle)
                     .Input(_value)
                     .Input(_flow_in)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->flow_out = Output(ret, 0);
}

TensorArrayWrite::TensorArrayWrite(const ::tensorflow::Scope& scope,
                                   ::tensorflow::ops::Input handle,
                                   ::tensorflow::ops::Input index,
                                   ::tensorflow::ops::Input value,
                                   ::tensorflow::ops::Input flow_in) {
  if (!scope.ok()) return;
  auto _handle = ::tensorflow::ops::AsNodeOut(scope, handle);
  if (!scope.ok()) return;
  auto _index = ::tensorflow::ops::AsNodeOut(scope, index);
  if (!scope.ok()) return;
  auto _value = ::tensorflow::ops::AsNodeOut(scope, value);
  if (!scope.ok()) return;
  auto _flow_in = ::tensorflow::ops::AsNodeOut(scope, flow_in);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto  unique_name = scope.GetUniqueNameForOp("TensorArrayWrite");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "TensorArrayWrite")
                     .Input(_handle)
                     .Input(_index)
                     .Input(_value)
                     .Input(_flow_in)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  this->flow_out = Output(ret, 0);
}

}  // namespace ops
}  // namespace tensorflow
