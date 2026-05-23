/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Tractive_System_model/Solver Configuration1'.
 */

#include "nesl_rtw_partitioning.h"
#include "ssc_ml_fun.h"
#include "Tractive_System_model_2f85d999_0_slc_0_external_struct.h"
#include "Tractive_System_model_2f85d999_0_slc_0_externals.h"

static int32_T slc_mode(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_xnplus1(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_fx(const SwitchedLinearClump *ds, const NeDynamicSystemInput *
                      in, SlcMethodOutput *out);
static int32_T slc_jpar_p(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_jcon(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_slf(const SwitchedLinearClump *ds, const NeDynamicSystemInput
  *in, SlcMethodOutput *out);
static int32_T slc_f(const SwitchedLinearClump *ds, const NeDynamicSystemInput
                     *in, SlcMethodOutput *out);
static int32_T slc_jnl_p(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_mcon_p(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_mnl(const SwitchedLinearClump *ds, const NeDynamicSystemInput
  *in, SlcMethodOutput *out);
static int32_T slc_mpar(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_mpar_p(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_jnl(const SwitchedLinearClump *ds, const NeDynamicSystemInput
  *in, SlcMethodOutput *out);
static int32_T slc_jcon_p(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_mcon(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_jpar(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_mnl_p(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_jnl_scaled(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out)
{
  slc_jnl(ds, in, out);
  partitioning_slc_scale_matrix_method(ds, out, SLC_SCALED_MATRIX_METHOD_JNL);
  return 0;
}

static int32_T slc_jcon_scaled(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out)
{
  slc_jcon(ds, in, out);
  partitioning_slc_scale_matrix_method(ds, out, SLC_SCALED_MATRIX_METHOD_JCON);
  return 0;
}

static int32_T slc_jpar_scaled(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out)
{
  slc_jpar(ds, in, out);
  partitioning_slc_scale_matrix_method(ds, out, SLC_SCALED_MATRIX_METHOD_JPAR);
  return 0;
}

static int32_T slc_mnl_scaled(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out)
{
  slc_mnl(ds, in, out);
  partitioning_slc_scale_matrix_method(ds, out, SLC_SCALED_MATRIX_METHOD_MNL);
  return 0;
}

static int32_T slc_mpar_scaled(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out)
{
  slc_mpar(ds, in, out);
  partitioning_slc_scale_matrix_method(ds, out, SLC_SCALED_MATRIX_METHOD_MPAR);
  return 0;
}

static int32_T slc_mcon_scaled(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out)
{
  slc_mcon(ds, in, out);
  partitioning_slc_scale_matrix_method(ds, out, SLC_SCALED_MATRIX_METHOD_MCON);
  return 0;
}

static int32_T slc_f_scaled(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out)
{
  slc_f(ds, in, out);
  partitioning_slc_scale_vector_method(ds, out);
  return 0;
}

static int32_T slc_fx_scaled(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out)
{
  slc_fx(ds, in, out);
  partitioning_slc_scale_vector_method(ds, out);
  return 0;
}

SwitchedLinearClump *Tractive_System_model_2f85d999_0_slc_0(PmAllocator
  *allocator)
{
  static NeDynamicSystemInputSizes sizes = { { 0U, 0U, 1U, 0U, 0U, 7U, 0U, 0U,
      0U, 0U, 0U, 1U, 0U, 0U, 0U, 2U, 0U, 0U, 0U, 0U, } };

  static PmSizeVector selector_Q = { 0U, NULL };

  static PmSizeVector selector_M = { 0U, NULL };

  static size_t selector_T_[1] = { 0U };

  static PmSizeVector selector_T = { 1U, selector_T_ };

  static PmSizeVector selector_U = { 0U, NULL };

  static PmSizeVector selector_V = { 0U, NULL };

  static size_t selector_X_[7] = { 2807U, 2808U, 2809U, 2813U, 2817U, 2818U,
    2819U };

  static PmSizeVector selector_X = { 7U, selector_X_ };

  static PmSizeVector selector_D = { 0U, NULL };

  static PmSizeVector selector_E = { 0U, NULL };

  static PmSizeVector selector_CR = { 0U, NULL };

  static PmSizeVector selector_CI = { 0U, NULL };

  static PmSizeVector selector_W = { 0U, NULL };

  static size_t selector_S_[1] = { 0U };

  static PmSizeVector selector_S = { 1U, selector_S_ };

  static PmSizeVector selector_P_L = { 0U, NULL };

  static PmSizeVector selector_P_I = { 0U, NULL };

  static PmSizeVector selector_P_J = { 0U, NULL };

  static size_t selector_P_R_[2] = { 0U, 1U };

  static PmSizeVector selector_P_R = { 2U, selector_P_R_ };

  static PmSizeVector selector_DP_L = { 0U, NULL };

  static PmSizeVector selector_DP_I = { 0U, NULL };

  static PmSizeVector selector_DP_J = { 0U, NULL };

  static PmSizeVector selector_DP_R = { 0U, NULL };

  static int32_T state_indices_[5] = { 0, 1, 2, 3, 6 };

  static PmIntVector state_indices = { 5U, state_indices_ };

  static int32_T state_indices_out_[5] = { 1, 1, 1, 1, 1 };

  static PmIntVector state_indices_out = { 5U, state_indices_out_ };

  static PmIntVector mode_indices = { 0U, NULL };

  static PmIntVector m_ref_indices = { 0U, NULL };

  static PmIntVector q_ref_indices = { 0U, NULL };

  static SwitchedLinearClump slc;
  (void) allocator;
  slc.mMethods[SLC_METHOD_MNL_P] = slc_mnl_p;
  slc.mMethods[SLC_METHOD_JCON_P] = slc_jcon_p;
  slc.mMethods[SLC_METHOD_MPAR_P] = slc_mpar_p;
  slc.mMethods[SLC_METHOD_MCON_P] = slc_mcon_p;
  slc.mMethods[SLC_METHOD_JPAR_P] = slc_jpar_p;
  slc.mMethods[SLC_METHOD_SLF] = slc_slf;
  slc.mMethods[SLC_METHOD_MODE] = slc_mode;
  slc.mMethods[SLC_METHOD_JNL_P] = slc_jnl_p;
  slc.mMethods[SLC_METHOD_XNPLUS1] = slc_xnplus1;
  slc.mMethods[SLC_METHOD_JNL] = slc_jnl_scaled;
  slc.mMethods[SLC_METHOD_JCON] = slc_jcon_scaled;
  slc.mMethods[SLC_METHOD_JPAR] = slc_jpar_scaled;
  slc.mMethods[SLC_METHOD_MNL] = slc_mnl_scaled;
  slc.mMethods[SLC_METHOD_MPAR] = slc_mpar_scaled;
  slc.mMethods[SLC_METHOD_MCON] = slc_mcon_scaled;
  slc.mMethods[SLC_METHOD_F] = slc_f_scaled;
  slc.mMethods[SLC_METHOD_FX] = slc_fx_scaled;
  slc.mMCONNnz = 4U;
  slc.mMPARNnz = 0U;
  slc.mMNLNnz = 0U;
  slc.mJCONNnz = 5U;
  slc.mJPARNnz = 0U;
  slc.mJNLNnz = 0U;
  slc.mNEqs = 5U;
  slc.mSizes = sizes;
  slc.mSelectors[0] = &selector_Q;
  slc.mSelectors[1] = &selector_M;
  slc.mSelectors[2] = &selector_T;
  slc.mSelectors[3] = &selector_U;
  slc.mSelectors[4] = &selector_V;
  slc.mSelectors[5] = &selector_X;
  slc.mSelectors[6] = &selector_D;
  slc.mSelectors[7] = &selector_E;
  slc.mSelectors[8] = &selector_CR;
  slc.mSelectors[9] = &selector_CI;
  slc.mSelectors[10] = &selector_W;
  slc.mSelectors[11] = &selector_S;
  slc.mSelectors[12] = &selector_P_L;
  slc.mSelectors[13] = &selector_P_I;
  slc.mSelectors[14] = &selector_P_J;
  slc.mSelectors[15] = &selector_P_R;
  slc.mSelectors[16] = &selector_DP_L;
  slc.mSelectors[17] = &selector_DP_I;
  slc.mSelectors[18] = &selector_DP_J;
  slc.mSelectors[19] = &selector_DP_R;
  slc.mStateIndices = &state_indices;
  slc.mStateIndicesOut = &state_indices_out;
  slc.mModeIndices = &mode_indices;
  slc.mMRefIndices = &m_ref_indices;
  slc.mQRefIndices = &q_ref_indices;
  slc.mIsModeBoolean = TRUE;
  slc.mIsLti = FALSE;
  slc.mModeCardinality = PARTITIONING_FINITE;
  slc.mQRefIndices = &q_ref_indices;
  slc.mDoRuntimeScaling = TRUE;
  partitioning_slc_perform_compilation_setup(&slc);
  return &slc;
}

static int32_T slc_fx (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  out->mFX.mX[0UL] = t1->mX.mX[2UL];
  out->mFX.mX[1UL] = -t1->mX.mX[0UL];
  out->mFX.mX[2UL] = t1->mX.mX[2UL] / 1.0116;
  out->mFX.mX[3UL] = t1->mX.mX[0UL];
  out->mFX.mX[4UL] = -t1->mX.mX[0UL];
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_f (const SwitchedLinearClump *sys, const NeDynamicSystemInput
                      *t1, SlcMethodOutput *out)
{
  out->mF.mX[0UL] = -((t1->mX.mX[5UL] * (t1->mX.mX[4UL] * 0.000125 + 0.04) -
                       t1->mX.mX[4UL] * (t1->mX.mX[5UL] * 0.00013)) * 15.0);
  out->mF.mX[1UL] = 0.0;
  out->mF.mX[2UL] = 0.0;
  out->mF.mX[3UL] = 0.0;
  out->mF.mX[4UL] = 0.0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_mcon (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  static real_T _cg_const_1[4] = { -1.0, 1.0, -1.0, 1.0 };

  (void)t1;
  out->mMCON.mX[0] = _cg_const_1[0];
  out->mMCON.mX[1] = _cg_const_1[1];
  out->mMCON.mX[2] = _cg_const_1[2];
  out->mMCON.mX[3] = _cg_const_1[3];
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_mcon_p (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  static int32_T _cg_const_1[6] = { 0, 1, 2, 2, 3, 4 };

  static int32_T _cg_const_2[4] = { 2, 1, 3, 4 };

  (void)t1;
  out->mMCON_P.mNumCol = 5UL;
  out->mMCON_P.mNumRow = 5UL;
  out->mMCON_P.mJc[0] = _cg_const_1[0];
  out->mMCON_P.mJc[1] = _cg_const_1[1];
  out->mMCON_P.mJc[2] = _cg_const_1[2];
  out->mMCON_P.mJc[3] = _cg_const_1[3];
  out->mMCON_P.mJc[4] = _cg_const_1[4];
  out->mMCON_P.mJc[5] = _cg_const_1[5];
  out->mMCON_P.mIr[0] = _cg_const_2[0];
  out->mMCON_P.mIr[1] = _cg_const_2[1];
  out->mMCON_P.mIr[2] = _cg_const_2[2];
  out->mMCON_P.mIr[3] = _cg_const_2[3];
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_mpar (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  (void)out;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_mpar_p (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  out->mMPAR_P.mNumCol = 5UL;
  out->mMPAR_P.mNumRow = 5UL;
  out->mMPAR_P.mJc[0] = 0;
  out->mMPAR_P.mJc[1] = 0;
  out->mMPAR_P.mJc[2] = 0;
  out->mMPAR_P.mJc[3] = 0;
  out->mMPAR_P.mJc[4] = 0;
  out->mMPAR_P.mJc[5] = 0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_mnl (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  (void)out;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_mnl_p (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  out->mMNL_P.mNumCol = 5UL;
  out->mMNL_P.mNumRow = 5UL;
  out->mMNL_P.mJc[0] = 0;
  out->mMNL_P.mJc[1] = 0;
  out->mMNL_P.mJc[2] = 0;
  out->mMNL_P.mJc[3] = 0;
  out->mMNL_P.mJc[4] = 0;
  out->mMNL_P.mJc[5] = 0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_jcon (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t10, SlcMethodOutput *out)
{
  (void)t10;
  out->mJCON.mX[4UL] = 0.98853301700276786;
  out->mJCON.mX[0UL] = -1.0;
  out->mJCON.mX[1UL] = 1.0;
  out->mJCON.mX[2UL] = -1.0;
  out->mJCON.mX[3UL] = 1.0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_jcon_p (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  static int32_T _cg_const_1[6] = { 0, 3, 3, 5, 5, 5 };

  static int32_T _cg_const_2[5] = { 1, 3, 4, 0, 2 };

  (void)t1;
  out->mJCON_P.mNumCol = 5UL;
  out->mJCON_P.mNumRow = 5UL;
  out->mJCON_P.mJc[0] = _cg_const_1[0];
  out->mJCON_P.mJc[1] = _cg_const_1[1];
  out->mJCON_P.mJc[2] = _cg_const_1[2];
  out->mJCON_P.mJc[3] = _cg_const_1[3];
  out->mJCON_P.mJc[4] = _cg_const_1[4];
  out->mJCON_P.mJc[5] = _cg_const_1[5];
  out->mJCON_P.mIr[0] = _cg_const_2[0];
  out->mJCON_P.mIr[1] = _cg_const_2[1];
  out->mJCON_P.mIr[2] = _cg_const_2[2];
  out->mJCON_P.mIr[3] = _cg_const_2[3];
  out->mJCON_P.mIr[4] = _cg_const_2[4];
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_jpar (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  (void)out;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_jpar_p (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  out->mJPAR_P.mNumCol = 5UL;
  out->mJPAR_P.mNumRow = 5UL;
  out->mJPAR_P.mJc[0] = 0;
  out->mJPAR_P.mJc[1] = 0;
  out->mJPAR_P.mJc[2] = 0;
  out->mJPAR_P.mJc[3] = 0;
  out->mJPAR_P.mJc[4] = 0;
  out->mJPAR_P.mJc[5] = 0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_jnl (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  (void)out;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_jnl_p (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  out->mJNL_P.mNumCol = 5UL;
  out->mJNL_P.mNumRow = 5UL;
  out->mJNL_P.mJc[0] = 0;
  out->mJNL_P.mJc[1] = 0;
  out->mJNL_P.mJc[2] = 0;
  out->mJNL_P.mJc[3] = 0;
  out->mJNL_P.mJc[4] = 0;
  out->mJNL_P.mJc[5] = 0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_xnplus1 (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  (void)out;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_mode (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  (void)out;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_slf (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  out->mSLF.mX[0] = false;
  out->mSLF.mX[1] = false;
  out->mSLF.mX[2] = false;
  out->mSLF.mX[3] = false;
  out->mSLF.mX[4] = false;
  (void)sys;
  (void)out;
  return 0;
}
