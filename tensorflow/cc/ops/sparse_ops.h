// This file is MACHINE GENERATED! Do not edit.

#ifndef TENSORFLOW_CC_OPS_SPARSE_OPS_H_
#define TENSORFLOW_CC_OPS_SPARSE_OPS_H_

// This file is MACHINE GENERATED! Do not edit.

#include "tensorflow/cc/framework/ops.h"
#include "tensorflow/cc/framework/scope.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/framework/tensor_shape.h"
#include "tensorflow/core/framework/types.h"
#include "tensorflow/core/lib/gtl/array_slice.h"

namespace tensorflow {
namespace ops {

// Deserialize and concatenate `SparseTensors` from a serialized minibatch.
//
// The input `serialized_sparse` must be a string matrix of shape `[N x 3]` where
// `N` is the minibatch size and the rows correspond to packed outputs of
// `SerializeSparse`.  The ranks of the original `SparseTensor` objects
// must all match.  When the final `SparseTensor` is created, it has rank one
// higher than the ranks of the incoming `SparseTensor` objects
// (they have been concatenated along a new row dimension).
//
// The output `SparseTensor` object's shape values for all dimensions but the
// first are the max across the input `SparseTensor` objects' shape values
// for the corresponding dimensions.  Its first shape value is `N`, the minibatch
// size.
//
// The input `SparseTensor` objects' indices are assumed ordered in
// standard lexicographic order.  If this is not the case, after this
// step run `SparseReorder` to restore index ordering.
//
// For example, if the serialized input is a `[2 x 3]` matrix representing two
// original `SparseTensor` objects:
//
//     index = [ 0]
//             [10]
//             [20]
//     values = [1, 2, 3]
//     shape = [50]
//
// and
//
//     index = [ 2]
//             [10]
//     values = [4, 5]
//     shape = [30]
//
// then the final deserialized `SparseTensor` will be:
//
//     index = [0  0]
//             [0 10]
//             [0 20]
//             [1  2]
//             [1 10]
//     values = [1, 2, 3, 4, 5]
//     shape = [2 50]
//
// Arguments:
// * scope: A Scope object
// * serialized_sparse: 2-D, The `N` serialized `SparseTensor` objects.
// Must have 3 columns.
// * dtype:
//     The `dtype` of the serialized `SparseTensor` objects.
class DeserializeManySparse {
 public:
  DeserializeManySparse(const ::tensorflow::Scope& scope,
                      ::tensorflow::ops::Input serialized_sparse, DataType
                      dtype);

  ::tensorflow::ops::Output sparse_indices;
  ::tensorflow::ops::Output sparse_values;
  ::tensorflow::ops::Output sparse_shape;
};

// Serialize an `N`-minibatch `SparseTensor` into an `[N, 3]` string `Tensor`.
//
// The `SparseTensor` must have rank `R` greater than 1, and the first dimension
// is treated as the minibatch dimension.  Elements of the `SparseTensor`
// must be sorted in increasing order of this first dimension.  The serialized
// `SparseTensor` objects going into each row of `serialized_sparse` will have
// rank `R-1`.
//
// The minibatch size `N` is extracted from `sparse_shape[0]`.
//
// Arguments:
// * scope: A Scope object
// * sparse_indices: 2-D.  The `indices` of the minibatch `SparseTensor`.
// * sparse_values: 1-D.  The `values` of the minibatch `SparseTensor`.
// * sparse_shape: 1-D.  The `shape` of the minibatch `SparseTensor`.
class SerializeManySparse {
 public:
  SerializeManySparse(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                    sparse_indices, ::tensorflow::ops::Input sparse_values,
                    ::tensorflow::ops::Input sparse_shape);
  operator ::tensorflow::ops::Output() const { return serialized_sparse; }
  operator ::tensorflow::ops::Input() const { return serialized_sparse; }
  ::tensorflow::Node* node() const { return serialized_sparse.node(); }

  ::tensorflow::ops::Output serialized_sparse;
};

// Serialize a `SparseTensor` into a string 3-vector (1-D `Tensor`) object.
//
// Arguments:
// * scope: A Scope object
// * sparse_indices: 2-D.  The `indices` of the `SparseTensor`.
// * sparse_values: 1-D.  The `values` of the `SparseTensor`.
// * sparse_shape: 1-D.  The `shape` of the `SparseTensor`.
class SerializeSparse {
 public:
  SerializeSparse(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                sparse_indices, ::tensorflow::ops::Input sparse_values,
                ::tensorflow::ops::Input sparse_shape);
  operator ::tensorflow::ops::Output() const { return serialized_sparse; }
  operator ::tensorflow::ops::Input() const { return serialized_sparse; }
  ::tensorflow::Node* node() const { return serialized_sparse.node(); }

  ::tensorflow::ops::Output serialized_sparse;
};

// Adds two `SparseTensor` objects to produce another `SparseTensor`.
//
// The input `SparseTensor` objects' indices are assumed ordered in standard
// lexicographic order.  If this is not the case, before this step run
// `SparseReorder` to restore index ordering.
//
// By default, if two values sum to zero at some index, the output `SparseTensor`
// would still include that particular location in its index, storing a zero in the
// corresponding value slot.  To override this, callers can specify `thresh`,
// indicating that if the sum has a magnitude strictly smaller than `thresh`, its
// corresponding value and index would then not be included.  In particular,
// `thresh == 0` (default) means everything is kept and actual thresholding happens
// only for a positive value.
//
// In the following shapes, `nnz` is the count after taking `thresh` into account.
//
// Arguments:
// * scope: A Scope object
// * a_indices: 2-D.  The `indices` of the first `SparseTensor`, size `[nnz, ndims]` Matrix.
// * a_values: 1-D.  The `values` of the first `SparseTensor`, size `[nnz]` Vector.
// * a_shape: 1-D.  The `shape` of the first `SparseTensor`, size `[ndims]` Vector.
// * b_indices: 2-D.  The `indices` of the second `SparseTensor`, size `[nnz, ndims]` Matrix.
// * b_values: 1-D.  The `values` of the second `SparseTensor`, size `[nnz]` Vector.
// * b_shape: 1-D.  The `shape` of the second `SparseTensor`, size `[ndims]` Vector.
// * thresh: 0-D.  The magnitude threshold that determines if an output value/index
// pair takes space.
class SparseAdd {
 public:
  SparseAdd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input a_indices,
          ::tensorflow::ops::Input a_values, ::tensorflow::ops::Input a_shape,
          ::tensorflow::ops::Input b_indices, ::tensorflow::ops::Input
          b_values, ::tensorflow::ops::Input b_shape, ::tensorflow::ops::Input
          thresh);

  ::tensorflow::ops::Output sum_indices;
  ::tensorflow::ops::Output sum_values;
  ::tensorflow::ops::Output sum_shape;
};

// The gradient operator for the SparseAdd op.
//
// The SparseAdd op calculates A + B, where A, B, and the sum are all represented
// as `SparseTensor` objects.  This op takes in the upstream gradient w.r.t.
// non-empty values of the sum, and outputs the gradients w.r.t. the non-empty
// values of A and B.
//
// Arguments:
// * scope: A Scope object
// * backprop_val_grad: 1-D with shape `[nnz(sum)]`.  The gradient with respect to
// the non-empty values of the sum.
// * a_indices: 2-D.  The `indices` of the `SparseTensor` A, size `[nnz(A), ndims]`.
// * b_indices: 2-D.  The `indices` of the `SparseTensor` B, size `[nnz(B), ndims]`.
// * sum_indices: 2-D.  The `indices` of the sum `SparseTensor`, size
// `[nnz(sum), ndims]`.
class SparseAddGrad {
 public:
  SparseAddGrad(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
              backprop_val_grad, ::tensorflow::ops::Input a_indices,
              ::tensorflow::ops::Input b_indices, ::tensorflow::ops::Input
              sum_indices);

  ::tensorflow::ops::Output a_val_grad;
  ::tensorflow::ops::Output b_val_grad;
};

// Concatenates a list of `SparseTensor` along the specified dimension.
//
// Concatenation is with respect to the dense versions of these sparse tensors.
// It is assumed that each input is a `SparseTensor` whose elements are ordered
// along increasing dimension number.
//
// All inputs' shapes must match, except for the concat dimension.  The
// `indices`, `values`, and `shapes` lists must have the same length.
//
// The output shape is identical to the inputs', except along the concat
// dimension, where it is the sum of the inputs' sizes along that dimension.
//
// The output elements will be resorted to preserve the sort order along
// increasing dimension number.
//
// This op runs in `O(M log M)` time, where `M` is the total number of non-empty
// values across all inputs. This is due to the need for an internal sort in
// order to concatenate efficiently across an arbitrary dimension.
//
// For example, if `concat_dim = 1` and the inputs are
//
//     sp_inputs[0]: shape = [2, 3]
//     [0, 2]: "a"
//     [1, 0]: "b"
//     [1, 1]: "c"
//
//     sp_inputs[1]: shape = [2, 4]
//     [0, 1]: "d"
//     [0, 2]: "e"
//
// then the output will be
//
//     shape = [2, 7]
//     [0, 2]: "a"
//     [0, 4]: "d"
//     [0, 5]: "e"
//     [1, 0]: "b"
//     [1, 1]: "c"
//
// Graphically this is equivalent to doing
//
//     [    a] concat [  d e  ] = [    a   d e  ]
//     [b c  ]        [       ]   [b c          ]
//
// Arguments:
// * scope: A Scope object
// * indices: 2-D.  Indices of each input `SparseTensor`.
// * values: 1-D.  Non-empty values of each `SparseTensor`.
// * shapes: 1-D.  Shapes of each `SparseTensor`.
// * concat_dim:
//     Dimension to concatenate along. Must be in range [-rank, rank),
// where rank is the number of dimensions in each input `SparseTensor`.
class SparseConcat {
 public:
  SparseConcat(const ::tensorflow::Scope& scope, ::tensorflow::ops::InputList
             indices, ::tensorflow::ops::InputList values,
             ::tensorflow::ops::InputList shapes, int64 concat_dim);

  ::tensorflow::ops::Output output_indices;
  ::tensorflow::ops::Output output_values;
  ::tensorflow::ops::Output output_shape;
};

// Adds up a SparseTensor and a dense Tensor, using these special rules:
//
// (1) Broadcasts the dense side to have the same shape as the sparse side, if
//     eligible;
// (2) Then, only the dense values pointed to by the indices of the SparseTensor
//     participate in the cwise addition.
//
// By these rules, the result is a logical SparseTensor with exactly the same
// indices and shape, but possibly with different non-zero values.  The output of
// this Op is the resultant non-zero values.
//
// Arguments:
// * scope: A Scope object
// * sp_indices: 2-D.  `N x R` matrix with the indices of non-empty values in a
// SparseTensor, possibly not in canonical ordering.
// * sp_values: 1-D.  `N` non-empty values corresponding to `sp_indices`.
// * sp_shape: 1-D.  Shape of the input SparseTensor.
// * dense: `R`-D.  The dense Tensor operand.
class SparseDenseCwiseAdd {
 public:
  SparseDenseCwiseAdd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                    sp_indices, ::tensorflow::ops::Input sp_values,
                    ::tensorflow::ops::Input sp_shape, ::tensorflow::ops::Input
                    dense);
  operator ::tensorflow::ops::Output() const { return output; }
  operator ::tensorflow::ops::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  ::tensorflow::ops::Output output;
};

// Component-wise divides a SparseTensor by a dense Tensor.
//
// *Limitation*: this Op only broadcasts the dense side to the sparse side, but not
// the other direction.
//
// Arguments:
// * scope: A Scope object
// * sp_indices: 2-D.  `N x R` matrix with the indices of non-empty values in a
// SparseTensor, possibly not in canonical ordering.
// * sp_values: 1-D.  `N` non-empty values corresponding to `sp_indices`.
// * sp_shape: 1-D.  Shape of the input SparseTensor.
// * dense: `R`-D.  The dense Tensor operand.
class SparseDenseCwiseDiv {
 public:
  SparseDenseCwiseDiv(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                    sp_indices, ::tensorflow::ops::Input sp_values,
                    ::tensorflow::ops::Input sp_shape, ::tensorflow::ops::Input
                    dense);
  operator ::tensorflow::ops::Output() const { return output; }
  operator ::tensorflow::ops::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  ::tensorflow::ops::Output output;
};

// Component-wise multiplies a SparseTensor by a dense Tensor.
//
// The output locations corresponding to the implicitly zero elements in the sparse
// tensor will be zero (i.e., will not take up storage space), regardless of the
// contents of the dense tensor (even if it's +/-INF and that INF*0 == NaN).
//
// *Limitation*: this Op only broadcasts the dense side to the sparse side, but not
// the other direction.
//
// Arguments:
// * scope: A Scope object
// * sp_indices: 2-D.  `N x R` matrix with the indices of non-empty values in a
// SparseTensor, possibly not in canonical ordering.
// * sp_values: 1-D.  `N` non-empty values corresponding to `sp_indices`.
// * sp_shape: 1-D.  Shape of the input SparseTensor.
// * dense: `R`-D.  The dense Tensor operand.
class SparseDenseCwiseMul {
 public:
  SparseDenseCwiseMul(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                    sp_indices, ::tensorflow::ops::Input sp_values,
                    ::tensorflow::ops::Input sp_shape, ::tensorflow::ops::Input
                    dense);
  operator ::tensorflow::ops::Output() const { return output; }
  operator ::tensorflow::ops::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  ::tensorflow::ops::Output output;
};

// Computes the sum of elements across dimensions of a SparseTensor.
//
// This Op takes a SparseTensor and is the sparse counterpart to
// `tf.reduce_sum()`.  In particular, this Op also returns a dense `Tensor`
// instead of a sparse one.
//
// Reduces `sp_input` along the dimensions given in `reduction_axes`.  Unless
// `keep_dims` is true, the rank of the tensor is reduced by 1 for each entry in
// `reduction_axes`. If `keep_dims` is true, the reduced dimensions are retained
// with length 1.
//
// If `reduction_axes` has no entries, all dimensions are reduced, and a tensor
// with a single element is returned.  Additionally, the axes can be negative,
// which are interpreted according to the indexing rules in Python.
//
// Arguments:
// * scope: A Scope object
// * input_indices: 2-D.  `N x R` matrix with the indices of non-empty values in a
// SparseTensor, possibly not in canonical ordering.
// * input_values: 1-D.  `N` non-empty values corresponding to `input_indices`.
// * input_shape: 1-D.  Shape of the input SparseTensor.
// * reduction_axes: 1-D.  Length-`K` vector containing the reduction axes.
class SparseReduceSum {
 public:
  // Optional attribute setters for SparseReduceSum :
  //
  // KeepDims(bool): Defaults to false
  //     If true, retain reduced dimensions with length 1.
  struct Attrs {
    Attrs KeepDims(bool x) {
      Attrs ret = *this;
      ret.keep_dims_ = x;
      return ret;
    }

    bool keep_dims_ = false;
  };
  SparseReduceSum(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                input_indices, ::tensorflow::ops::Input input_values,
                ::tensorflow::ops::Input input_shape, ::tensorflow::ops::Input
                reduction_axes);
  SparseReduceSum(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                input_indices, ::tensorflow::ops::Input input_values,
                ::tensorflow::ops::Input input_shape, ::tensorflow::ops::Input
                reduction_axes, const SparseReduceSum::Attrs& attrs);
  operator ::tensorflow::ops::Output() const { return output; }
  operator ::tensorflow::ops::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs KeepDims(bool x) {
    return Attrs().KeepDims(x);
  }

  ::tensorflow::ops::Output output;
};

// Computes the sum of elements across dimensions of a SparseTensor.
//
// This Op takes a SparseTensor and is the sparse counterpart to
// `tf.reduce_sum()`.  In contrast to SparseReduceSum, this Op returns a
// SparseTensor.
//
// Reduces `sp_input` along the dimensions given in `reduction_axes`.  Unless
// `keep_dims` is true, the rank of the tensor is reduced by 1 for each entry in
// `reduction_axes`. If `keep_dims` is true, the reduced dimensions are retained
// with length 1.
//
// If `reduction_axes` has no entries, all dimensions are reduced, and a tensor
// with a single element is returned.  Additionally, the axes can be negative,
// which are interpreted according to the indexing rules in Python.
//
// Arguments:
// * scope: A Scope object
// * input_indices: 2-D.  `N x R` matrix with the indices of non-empty values in a
// SparseTensor, possibly not in canonical ordering.
// * input_values: 1-D.  `N` non-empty values corresponding to `input_indices`.
// * input_shape: 1-D.  Shape of the input SparseTensor.
// * reduction_axes: 1-D.  Length-`K` vector containing the reduction axes.
class SparseReduceSumSparse {
 public:
  // Optional attribute setters for SparseReduceSumSparse :
  //
  // KeepDims(bool): Defaults to false
  //     If true, retain reduced dimensions with length 1.
  struct Attrs {
    Attrs KeepDims(bool x) {
      Attrs ret = *this;
      ret.keep_dims_ = x;
      return ret;
    }

    bool keep_dims_ = false;
  };
  SparseReduceSumSparse(const ::tensorflow::Scope& scope,
                      ::tensorflow::ops::Input input_indices,
                      ::tensorflow::ops::Input input_values,
                      ::tensorflow::ops::Input input_shape,
                      ::tensorflow::ops::Input reduction_axes);
  SparseReduceSumSparse(const ::tensorflow::Scope& scope,
                      ::tensorflow::ops::Input input_indices,
                      ::tensorflow::ops::Input input_values,
                      ::tensorflow::ops::Input input_shape,
                      ::tensorflow::ops::Input reduction_axes, const
                      SparseReduceSumSparse::Attrs& attrs);

  static Attrs KeepDims(bool x) {
    return Attrs().KeepDims(x);
  }

  ::tensorflow::ops::Output output_indices;
  ::tensorflow::ops::Output output_values;
  ::tensorflow::ops::Output output_shape;
};

// Reorders a SparseTensor into the canonical, row-major ordering.
//
// Note that by convention, all sparse ops preserve the canonical ordering along
// increasing dimension number. The only time ordering can be violated is during
// manual manipulation of the indices and values vectors to add entries.
//
// Reordering does not affect the shape of the SparseTensor.
//
// If the tensor has rank `R` and `N` non-empty values, `input_indices` has
// shape `[N, R]`, input_values has length `N`, and input_shape has length `R`.
//
// Arguments:
// * scope: A Scope object
// * input_indices: 2-D.  `N x R` matrix with the indices of non-empty values in a
// SparseTensor, possibly not in canonical ordering.
// * input_values: 1-D.  `N` non-empty values corresponding to `input_indices`.
// * input_shape: 1-D.  Shape of the input SparseTensor.
class SparseReorder {
 public:
  SparseReorder(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
              input_indices, ::tensorflow::ops::Input input_values,
              ::tensorflow::ops::Input input_shape);

  ::tensorflow::ops::Output output_indices;
  ::tensorflow::ops::Output output_values;
};

// Reshapes a SparseTensor to represent values in a new dense shape.
//
// This operation has the same semantics as reshape on the represented dense
// tensor.  The `input_indices` are recomputed based on the requested `new_shape`.
//
// If one component of `new_shape` is the special value -1, the size of that
// dimension is computed so that the total dense size remains constant.  At
// most one component of `new_shape` can be -1.  The number of dense elements
// implied by `new_shape` must be the same as the number of dense elements
// originally implied by `input_shape`.
//
// Reshaping does not affect the order of values in the SparseTensor.
//
// If the input tensor has rank `R_in` and `N` non-empty values, and `new_shape`
// has length `R_out`, then `input_indices` has shape `[N, R_in]`,
// `input_shape` has length `R_in`, `output_indices` has shape `[N, R_out]`, and
// `output_shape` has length `R_out`.
//
// Arguments:
// * scope: A Scope object
// * input_indices: 2-D.  `N x R_in` matrix with the indices of non-empty values in a
// SparseTensor.
// * input_shape: 1-D.  `R_in` vector with the input SparseTensor's dense shape.
// * new_shape: 1-D.  `R_out` vector with the requested new dense shape.
class SparseReshape {
 public:
  SparseReshape(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
              input_indices, ::tensorflow::ops::Input input_shape,
              ::tensorflow::ops::Input new_shape);

  ::tensorflow::ops::Output output_indices;
  ::tensorflow::ops::Output output_shape;
};

// Applies softmax to a batched N-D `SparseTensor`.
//
// The inputs represent an N-D SparseTensor  with logical shape `[..., B, C]`
// (where `N >= 2`), and with indices sorted in the canonical lexicographic order.
//
// This op is equivalent to applying the normal `tf.nn.softmax()` to each innermost
// logical submatrix with shape `[B, C]`, but with the catch that *the implicitly
// zero elements do not participate*.  Specifically, the algorithm is equivalent
// to the following:
//
//   (1) Applies `tf.nn.softmax()` to a densified view of each innermost submatrix
//       with shape `[B, C]`, along the size-C dimension;
//   (2) Masks out the original implicitly-zero locations;
//   (3) Renormalizes the remaining elements.
//
// Hence, the `SparseTensor` result has exactly the same non-zero indices and
// shape.
//
// Arguments:
// * scope: A Scope object
// * sp_indices: 2-D.  `NNZ x R` matrix with the indices of non-empty values in a
// SparseTensor, in canonical ordering.
// * sp_values: 1-D.  `NNZ` non-empty values corresponding to `sp_indices`.
// * sp_shape: 1-D.  Shape of the input SparseTensor.
class SparseSoftmax {
 public:
  SparseSoftmax(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
              sp_indices, ::tensorflow::ops::Input sp_values,
              ::tensorflow::ops::Input sp_shape);
  operator ::tensorflow::ops::Output() const { return output; }
  operator ::tensorflow::ops::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  ::tensorflow::ops::Output output;
};

// Returns the element-wise max of two SparseTensors.
//
// Assumes the two SparseTensors have the same shape, i.e., no broadcasting.
//
// Arguments:
// * scope: A Scope object
// * a_indices: 2-D.  `N x R` matrix with the indices of non-empty values in a
// SparseTensor, in the canonical lexicographic ordering.
// * a_values: 1-D.  `N` non-empty values corresponding to `a_indices`.
// * a_shape: 1-D.  Shape of the input SparseTensor.
// * b_indices: counterpart to `a_indices` for the other operand.
// * b_values: counterpart to `a_values` for the other operand; must be of the same dtype.
// * b_shape: counterpart to `a_shape` for the other operand; the two shapes must be equal.
class SparseSparseMaximum {
 public:
  SparseSparseMaximum(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                    a_indices, ::tensorflow::ops::Input a_values,
                    ::tensorflow::ops::Input a_shape, ::tensorflow::ops::Input
                    b_indices, ::tensorflow::ops::Input b_values,
                    ::tensorflow::ops::Input b_shape);

  ::tensorflow::ops::Output output_indices;
  ::tensorflow::ops::Output output_values;
};

// Returns the element-wise min of two SparseTensors.
//
// Assumes the two SparseTensors have the same shape, i.e., no broadcasting.
//
// Arguments:
// * scope: A Scope object
// * a_indices: 2-D.  `N x R` matrix with the indices of non-empty values in a
// SparseTensor, in the canonical lexicographic ordering.
// * a_values: 1-D.  `N` non-empty values corresponding to `a_indices`.
// * a_shape: 1-D.  Shape of the input SparseTensor.
// * b_indices: counterpart to `a_indices` for the other operand.
// * b_values: counterpart to `a_values` for the other operand; must be of the same dtype.
// * b_shape: counterpart to `a_shape` for the other operand; the two shapes must be equal.
class SparseSparseMinimum {
 public:
  SparseSparseMinimum(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                    a_indices, ::tensorflow::ops::Input a_values,
                    ::tensorflow::ops::Input a_shape, ::tensorflow::ops::Input
                    b_indices, ::tensorflow::ops::Input b_values,
                    ::tensorflow::ops::Input b_shape);

  ::tensorflow::ops::Output output_indices;
  ::tensorflow::ops::Output output_values;
};

// Split a `SparseTensor` into `num_split` tensors along one dimension.
//
// If the `shape[split_dim]` is not an integer multiple of `num_split`. Slices
// `[0 : shape[split_dim] % num_split]` gets one extra dimension.
// For example, if `split_dim = 1` and `num_split = 2` and the input is
//
//     input_tensor = shape = [2, 7]
//     [    a   d e  ]
//     [b c          ]
//
// Graphically the output tensors are:
//
//     output_tensor[0] = shape = [2, 4]
//     [    a  ]
//     [b c    ]
//
//     output_tensor[1] = shape = [2, 3]
//     [ d e  ]
//     [      ]
//
// Arguments:
// * scope: A Scope object
// * split_dim: 0-D.  The dimension along which to split.  Must be in the range
// `[0, rank(shape))`.
// * indices: 2-D tensor represents the indices of the sparse tensor.
// * values: 1-D tensor represents the values of the sparse tensor.
// * shape: 1-D. tensor represents the shape of the sparse tensor.
// output indices: A list of 1-D tensors represents the indices of the output
// sparse tensors.
// * num_split:
//     The number of ways to split.
class SparseSplit {
 public:
  SparseSplit(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
            split_dim, ::tensorflow::ops::Input indices,
            ::tensorflow::ops::Input values, ::tensorflow::ops::Input shape,
            int64 num_split);

  ::tensorflow::ops::OutputList output_indices;
  ::tensorflow::ops::OutputList output_values;
  ::tensorflow::ops::OutputList output_shape;
};

// Adds up a `SparseTensor` and a dense `Tensor`, producing a dense `Tensor`.
//
// This Op does not require `a_indices` be sorted in standard lexicographic order.
//
// Arguments:
// * scope: A Scope object
// * a_indices: 2-D.  The `indices` of the `SparseTensor`, with shape `[nnz, ndims]`.
// * a_values: 1-D.  The `values` of the `SparseTensor`, with shape `[nnz]`.
// * a_shape: 1-D.  The `shape` of the `SparseTensor`, with shape `[ndims]`.
// * b: `ndims`-D Tensor.  With shape `a_shape`.
class SparseTensorDenseAdd {
 public:
  SparseTensorDenseAdd(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
                     a_indices, ::tensorflow::ops::Input a_values,
                     ::tensorflow::ops::Input a_shape, ::tensorflow::ops::Input
                     b);
  operator ::tensorflow::ops::Output() const { return output; }
  operator ::tensorflow::ops::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  ::tensorflow::ops::Output output;
};

// Multiply SparseTensor (of rank 2) "A" by dense matrix "B".
//
// No validity checking is performed on the indices of A.  However, the following
// input format is recommended for optimal behavior:
//
// if adjoint_a == false:
//   A should be sorted in lexicographically increasing order.  Use SparseReorder
//   if you're not sure.
// if adjoint_a == true:
//   A should be sorted in order of increasing dimension 1 (i.e., "column major"
//   order instead of "row major" order).
//
// Arguments:
// * scope: A Scope object
// * a_indices: 2-D.  The `indices` of the `SparseTensor`, size `[nnz, 2]` Matrix.
// * a_values: 1-D.  The `values` of the `SparseTensor`, size `[nnz]` Vector.
// * a_shape: 1-D.  The `shape` of the `SparseTensor`, size `[2]` Vector.
// * b: 2-D.  A dense Matrix.
class SparseTensorDenseMatMul {
 public:
  // Optional attribute setters for SparseTensorDenseMatMul :
  //
  // AdjointA(bool): Defaults to false
  //     Use the adjoint of A in the matrix multiply.  If A is complex, this
  // is transpose(conj(A)).  Otherwise it's transpose(A).
  // AdjointB(bool): Defaults to false
  //     Use the adjoint of B in the matrix multiply.  If B is complex, this
  // is transpose(conj(B)).  Otherwise it's transpose(B).
  struct Attrs {
    Attrs AdjointA(bool x) {
      Attrs ret = *this;
      ret.adjoint_a_ = x;
      return ret;
    }

    Attrs AdjointB(bool x) {
      Attrs ret = *this;
      ret.adjoint_b_ = x;
      return ret;
    }

    bool adjoint_a_ = false;
    bool adjoint_b_ = false;
  };
  SparseTensorDenseMatMul(const ::tensorflow::Scope& scope,
                        ::tensorflow::ops::Input a_indices,
                        ::tensorflow::ops::Input a_values,
                        ::tensorflow::ops::Input a_shape,
                        ::tensorflow::ops::Input b);
  SparseTensorDenseMatMul(const ::tensorflow::Scope& scope,
                        ::tensorflow::ops::Input a_indices,
                        ::tensorflow::ops::Input a_values,
                        ::tensorflow::ops::Input a_shape,
                        ::tensorflow::ops::Input b, const
                        SparseTensorDenseMatMul::Attrs& attrs);
  operator ::tensorflow::ops::Output() const { return product; }
  operator ::tensorflow::ops::Input() const { return product; }
  ::tensorflow::Node* node() const { return product.node(); }

  static Attrs AdjointA(bool x) {
    return Attrs().AdjointA(x);
  }
  static Attrs AdjointB(bool x) {
    return Attrs().AdjointB(x);
  }

  ::tensorflow::ops::Output product;
};

// Converts a sparse representation into a dense tensor.
//
// Builds an array `dense` with shape `output_shape` such that
//
// ```prettyprint
// # If sparse_indices is scalar
// dense[i] = (i == sparse_indices ? sparse_values : default_value)
//
// # If sparse_indices is a vector, then for each i
// dense[sparse_indices[i]] = sparse_values[i]
//
// # If sparse_indices is an n by d matrix, then for each i in [0, n)
// dense[sparse_indices[i][0], ..., sparse_indices[i][d-1]] = sparse_values[i]
// ```
//
// All other values in `dense` are set to `default_value`.  If `sparse_values` is a
// scalar, all sparse indices are set to this single value.
//
// Indices should be sorted in lexicographic order, and indices must not
// contain any repeats. If `validate_indices` is true, these properties
// are checked during execution.
//
// Arguments:
// * scope: A Scope object
// * sparse_indices: 0-D, 1-D, or 2-D.  `sparse_indices[i]` contains the complete
// index where `sparse_values[i]` will be placed.
// * output_shape: 1-D.  Shape of the dense output tensor.
// * sparse_values: 1-D.  Values corresponding to each row of `sparse_indices`,
// or a scalar value to be used for all sparse indices.
// * default_value: Scalar value to set for indices not specified in
// `sparse_indices`.
class SparseToDense {
 public:
  // Optional attribute setters for SparseToDense :
  //
  // ValidateIndices(bool): Defaults to true
  //     If true, indices are checked to make sure they are sorted in
  // lexicographic order and that there are no repeats.
  struct Attrs {
    Attrs ValidateIndices(bool x) {
      Attrs ret = *this;
      ret.validate_indices_ = x;
      return ret;
    }

    bool validate_indices_ = true;
  };
  SparseToDense(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
              sparse_indices, ::tensorflow::ops::Input output_shape,
              ::tensorflow::ops::Input sparse_values, ::tensorflow::ops::Input
              default_value);
  SparseToDense(const ::tensorflow::Scope& scope, ::tensorflow::ops::Input
              sparse_indices, ::tensorflow::ops::Input output_shape,
              ::tensorflow::ops::Input sparse_values, ::tensorflow::ops::Input
              default_value, const SparseToDense::Attrs& attrs);
  operator ::tensorflow::ops::Output() const { return dense; }
  operator ::tensorflow::ops::Input() const { return dense; }
  ::tensorflow::Node* node() const { return dense.node(); }

  static Attrs ValidateIndices(bool x) {
    return Attrs().ValidateIndices(x);
  }

  ::tensorflow::ops::Output dense;
};

}  // namespace ops
}  // namespace tensorflow

#endif  // TENSORFLOW_CC_OPS_SPARSE_OPS_H_
