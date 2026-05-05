/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Referenced_battery_pack/Solver Configuration'.
 */

#include "nesl_rtw_partitioning.h"
#include "Referenced_battery_pack_785197ff_0_slc_269fx.h"
#include "Referenced_battery_pack_785197ff_0_slc_269jnl.h"
#include "ssc_ml_fun.h"
#include "Referenced_battery_pack_785197ff_0_slc_269_external_struct.h"
#include "Referenced_battery_pack_785197ff_0_slc_269_externals.h"

static int32_T slc_mode(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
static int32_T slc_xnplus1(const SwitchedLinearClump *ds, const
  NeDynamicSystemInput *in, SlcMethodOutput *out);
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
  Referenced_battery_pack_785197ff_0_slc_269jnl(ds, in, out);
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
  Referenced_battery_pack_785197ff_0_slc_269fx(ds, in, out);
  partitioning_slc_scale_vector_method(ds, out);
  return 0;
}

SwitchedLinearClump *Referenced_battery_pack_785197ff_0_slc_269(PmAllocator
  *allocator)
{
  static NeDynamicSystemInputSizes sizes = { { 0U, 6U, 1U, 1U, 0U, 15U, 0U, 0U,
      0U, 0U, 0U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, } };

  static PmSizeVector selector_Q = { 0U, NULL };

  static size_t selector_M_[6] = { 166U, 167U, 3690U, 3701U, 3712U, 3723U };

  static PmSizeVector selector_M = { 6U, selector_M_ };

  static size_t selector_T_[1] = { 0U };

  static PmSizeVector selector_T = { 1U, selector_T_ };

  static size_t selector_U_[1] = { 0U };

  static PmSizeVector selector_U = { 1U, selector_U_ };

  static PmSizeVector selector_V = { 0U, NULL };

  static size_t selector_X_[15] = { 241U, 251U, 280U, 281U, 283U, 284U, 285U,
    286U, 287U, 290U, 292U, 293U, 294U, 295U, 296U };

  static PmSizeVector selector_X = { 15U, selector_X_ };

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

  static PmSizeVector selector_P_R = { 0U, NULL };

  static PmSizeVector selector_DP_L = { 0U, NULL };

  static PmSizeVector selector_DP_I = { 0U, NULL };

  static PmSizeVector selector_DP_J = { 0U, NULL };

  static PmSizeVector selector_DP_R = { 0U, NULL };

  static int32_T state_indices_[2] = { 1, 3 };

  static PmIntVector state_indices = { 2U, state_indices_ };

  static int32_T state_indices_out_[2] = { 1, 1 };

  static PmIntVector state_indices_out = { 2U, state_indices_out_ };

  static int32_T mode_indices_[2] = { 0, 1 };

  static PmIntVector mode_indices = { 2U, mode_indices_ };

  static int32_T m_ref_indices_[4] = { 2, 3, 4, 5 };

  static PmIntVector m_ref_indices = { 4U, m_ref_indices_ };

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
  slc.mMCONNnz = 0U;
  slc.mMPARNnz = 0U;
  slc.mMNLNnz = 0U;
  slc.mJCONNnz = 2U;
  slc.mJPARNnz = 0U;
  slc.mJNLNnz = 2U;
  slc.mNEqs = 2U;
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
  slc.mModeCardinality = PARTITIONING_NONLINEAR;
  slc.mQRefIndices = &q_ref_indices;
  slc.mDoRuntimeScaling = TRUE;
  partitioning_slc_perform_compilation_setup(&slc);
  return &slc;
}

static int32_T slc_f (const SwitchedLinearClump *sys, const NeDynamicSystemInput
                      *t1, SlcMethodOutput *out)
{
  (void)t1;
  out->mF.mX[0] = 0.0;
  out->mF.mX[1] = 0.0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_mcon (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  (void)out;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_mcon_p (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  out->mMCON_P.mNumCol = 2UL;
  out->mMCON_P.mNumRow = 2UL;
  out->mMCON_P.mJc[0] = 0;
  out->mMCON_P.mJc[1] = 0;
  out->mMCON_P.mJc[2] = 0;
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
  out->mMPAR_P.mNumCol = 2UL;
  out->mMPAR_P.mNumRow = 2UL;
  out->mMPAR_P.mJc[0] = 0;
  out->mMPAR_P.mJc[1] = 0;
  out->mMPAR_P.mJc[2] = 0;
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
  out->mMNL_P.mNumCol = 2UL;
  out->mMNL_P.mNumRow = 2UL;
  out->mMNL_P.mJc[0] = 0;
  out->mMNL_P.mJc[1] = 0;
  out->mMNL_P.mJc[2] = 0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_jcon (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  out->mJCON.mX[0UL] = 1.0;
  out->mJCON.mX[1UL] = 1.0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_jcon_p (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  static int32_T _cg_const_1[3] = { 0, 2, 2 };

  (void)t1;
  out->mJCON_P.mNumCol = 2UL;
  out->mJCON_P.mNumRow = 2UL;
  out->mJCON_P.mJc[0] = _cg_const_1[0];
  out->mJCON_P.mJc[1] = _cg_const_1[1];
  out->mJCON_P.mJc[2] = _cg_const_1[2];
  out->mJCON_P.mIr[0] = 0;
  out->mJCON_P.mIr[1] = 1;
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
  out->mJPAR_P.mNumCol = 2UL;
  out->mJPAR_P.mNumRow = 2UL;
  out->mJPAR_P.mJc[0] = 0;
  out->mJPAR_P.mJc[1] = 0;
  out->mJPAR_P.mJc[2] = 0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_jnl_p (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  static int32_T _cg_const_1[3] = { 0, 0, 2 };

  (void)t1;
  out->mJNL_P.mNumCol = 2UL;
  out->mJNL_P.mNumRow = 2UL;
  out->mJNL_P.mJc[0] = _cg_const_1[0];
  out->mJNL_P.mJc[1] = _cg_const_1[1];
  out->mJNL_P.mJc[2] = _cg_const_1[2];
  out->mJNL_P.mIr[0] = 0;
  out->mJNL_P.mIr[1] = 1;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_xnplus1 (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  (void)t1;
  out->mXNPLUS1.mX[0] = 0.0;
  out->mXNPLUS1.mX[1] = 0.0;
  (void)sys;
  (void)out;
  return 0;
}

static int32_T slc_mode (const SwitchedLinearClump *sys, const
  NeDynamicSystemInput *t1, SlcMethodOutput *out)
{
  out->mMODE.mX[0UL] = (int32_T)(-t1->mX.mX[3UL] - t1->mU.mX[0UL] < 0.0);
  out->mMODE.mX[1UL] = (int32_T)(t1->mX.mX[3UL] < 0.0);
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
  (void)sys;
  (void)out;
  return 0;
}
