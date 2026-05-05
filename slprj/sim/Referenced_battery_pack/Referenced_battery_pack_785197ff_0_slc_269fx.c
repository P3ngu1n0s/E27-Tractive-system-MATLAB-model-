/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Referenced_battery_pack/Solver Configuration'.
 */

#include "nesl_rtw_partitioning.h"
#include "Referenced_battery_pack_785197ff_0_slc_269_sys_struct.h"
#include "Referenced_battery_pack_785197ff_0_slc_269fx.h"
#include "Referenced_battery_pack_785197ff_0_slc_269.h"
#include "Referenced_battery_pack_785197ff_0_slc_269_externals.h"
#include "Referenced_battery_pack_785197ff_0_slc_269_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Referenced_battery_pack_785197ff_0_slc_269fx(const SwitchedLinearClump
  *sys, const NeDynamicSystemInput *t42, SlcMethodOutput *out)
{
  static real_T _cg_const_1[40] = { 3.0263, 3.218033, 3.364889, 3.493933,
    3.610678, 3.733744, 3.85405, 3.950717, 4.040478, 4.0819, 3.0376, 3.2248,
    3.370311, 3.498533, 3.615311, 3.736956, 3.845633, 3.929256, 4.040056, 4.0821,
    3.0439, 3.227633, 3.3731, 3.5007, 3.616611, 3.737589, 3.8457, 3.9287,
    4.039133, 4.0826, 3.0283, 3.217989, 3.364589, 3.493767, 3.609467, 3.731156,
    3.8417, 3.925833, 4.036322, 4.0821 };

  static real_T _cg_const_8[40] = { 0.011867, 0.008993, 0.007674, 0.006911,
    0.006648, 0.006648, 0.006528, 0.006157, 0.005996, 0.0073, 0.0109, 0.006456,
    0.005381, 0.005078, 0.005, 0.005044, 0.005511, 0.006407, 0.006522, 0.005367,
    0.0102, 0.007978, 0.006793, 0.0062, 0.006033, 0.005441, 0.0051, 0.005707,
    0.005037, 0.005067, 0.0101, 0.007759, 0.006637, 0.006022, 0.005741, 0.005667,
    0.005311, 0.004911, 0.005859, 0.004733 };

  static real_T _cg_const_2[10] = { 0.1, 0.188889, 0.277778, 0.366667, 0.455556,
    0.544444, 0.633333, 0.722222, 0.811111, 0.9 };

  static real_T _cg_const_3[4] = { 303.15, 305.65, 308.15, 311.15 };

  ETTSf3049b48 t0;
  ETTSf3049b48 t1;
  ETTSf3049b48 t2;
  real_T nonscalar0[40];
  real_T nonscalar3[40];
  real_T nonscalar1[10];
  real_T nonscalar2[4];
  real_T t25[1];
  real_T t27[1];
  real_T Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based35_electricalModel_xVint;
  real_T zc_int81;
  real_T zc_int82;
  real_T zc_int84;
  size_t t4[1];
  size_t t5[1];
  size_t t7[1];
  size_t t32;
  size_t t34;
  size_t t36;
  Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_v = -t42->
    mX.mX[0UL] + t42->mX.mX[1UL];
  t27[0UL] = t42->mX.mX[2UL] * 5.5555555555555558E-5;
  nonscalar0[0] = _cg_const_1[0];
  nonscalar0[1] = _cg_const_1[1];
  nonscalar0[2] = _cg_const_1[2];
  nonscalar0[3] = _cg_const_1[3];
  nonscalar0[4] = _cg_const_1[4];
  nonscalar0[5] = _cg_const_1[5];
  nonscalar0[6] = _cg_const_1[6];
  nonscalar0[7] = _cg_const_1[7];
  nonscalar0[8] = _cg_const_1[8];
  nonscalar0[9] = _cg_const_1[9];
  nonscalar0[10] = _cg_const_1[10];
  nonscalar0[11] = _cg_const_1[11];
  nonscalar0[12] = _cg_const_1[12];
  nonscalar0[13] = _cg_const_1[13];
  nonscalar0[14] = _cg_const_1[14];
  nonscalar0[15] = _cg_const_1[15];
  nonscalar0[16] = _cg_const_1[16];
  nonscalar0[17] = _cg_const_1[17];
  nonscalar0[18] = _cg_const_1[18];
  nonscalar0[19] = _cg_const_1[19];
  nonscalar0[20] = _cg_const_1[20];
  nonscalar0[21] = _cg_const_1[21];
  nonscalar0[22] = _cg_const_1[22];
  nonscalar0[23] = _cg_const_1[23];
  nonscalar0[24] = _cg_const_1[24];
  nonscalar0[25] = _cg_const_1[25];
  nonscalar0[26] = _cg_const_1[26];
  nonscalar0[27] = _cg_const_1[27];
  nonscalar0[28] = _cg_const_1[28];
  nonscalar0[29] = _cg_const_1[29];
  nonscalar0[30] = _cg_const_1[30];
  nonscalar0[31] = _cg_const_1[31];
  nonscalar0[32] = _cg_const_1[32];
  nonscalar0[33] = _cg_const_1[33];
  nonscalar0[34] = _cg_const_1[34];
  nonscalar0[35] = _cg_const_1[35];
  nonscalar0[36] = _cg_const_1[36];
  nonscalar0[37] = _cg_const_1[37];
  nonscalar0[38] = _cg_const_1[38];
  nonscalar0[39] = _cg_const_1[39];
  nonscalar1[0] = _cg_const_2[0];
  nonscalar1[1] = _cg_const_2[1];
  nonscalar1[2] = _cg_const_2[2];
  nonscalar1[3] = _cg_const_2[3];
  nonscalar1[4] = _cg_const_2[4];
  nonscalar1[5] = _cg_const_2[5];
  nonscalar1[6] = _cg_const_2[6];
  nonscalar1[7] = _cg_const_2[7];
  nonscalar1[8] = _cg_const_2[8];
  nonscalar1[9] = _cg_const_2[9];
  nonscalar2[0] = _cg_const_3[0];
  nonscalar2[1] = _cg_const_3[1];
  nonscalar2[2] = _cg_const_3[2];
  nonscalar2[3] = _cg_const_3[3];
  t4[0] = 10UL;
  t5[0] = 1UL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0UL], &t0.mField1[0UL], &t0.mField2
    [0UL], &nonscalar1[0UL], &t27[0UL], &t4[0UL], &t5[0UL]);
  t27[0] = 298.15;
  t7[0] = 4UL;
  tlu2_linear_nearest_prelookup(&t1.mField0[0UL], &t1.mField1[0UL], &t1.mField2
    [0UL], &nonscalar2[0UL], &t27[0UL], &t7[0UL], &t5[0UL]);
  tlu2_2d_linear_nearest_value(&t25[0UL], &t0.mField0[0UL], &t0.mField2[0UL],
    &t1.mField0[0UL], &t1.mField2[0UL], &nonscalar0[0UL], &t4[0UL], &t7[0UL],
    &t5[0UL]);
  t27[0UL] = t42->mX.mX[9UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t2.mField0[0UL], &t2.mField1[0UL], &t2.mField2
    [0UL], &nonscalar1[0UL], &t27[0UL], &t4[0UL], &t5[0UL]);
  tlu2_2d_linear_nearest_value(&t27[0UL], &t2.mField0[0UL], &t2.mField2[0UL],
    &t1.mField0[0UL], &t1.mField2[0UL], &nonscalar0[0UL], &t4[0UL], &t7[0UL],
    &t5[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based35_electricalModel_xVint = t27[0UL];
  nonscalar3[0] = _cg_const_8[0];
  nonscalar3[1] = _cg_const_8[1];
  nonscalar3[2] = _cg_const_8[2];
  nonscalar3[3] = _cg_const_8[3];
  nonscalar3[4] = _cg_const_8[4];
  nonscalar3[5] = _cg_const_8[5];
  nonscalar3[6] = _cg_const_8[6];
  nonscalar3[7] = _cg_const_8[7];
  nonscalar3[8] = _cg_const_8[8];
  nonscalar3[9] = _cg_const_8[9];
  nonscalar3[10] = _cg_const_8[10];
  nonscalar3[11] = _cg_const_8[11];
  nonscalar3[12] = _cg_const_8[12];
  nonscalar3[13] = _cg_const_8[13];
  nonscalar3[14] = _cg_const_8[14];
  nonscalar3[15] = _cg_const_8[15];
  nonscalar3[16] = _cg_const_8[16];
  nonscalar3[17] = _cg_const_8[17];
  nonscalar3[18] = _cg_const_8[18];
  nonscalar3[19] = _cg_const_8[19];
  nonscalar3[20] = _cg_const_8[20];
  nonscalar3[21] = _cg_const_8[21];
  nonscalar3[22] = _cg_const_8[22];
  nonscalar3[23] = _cg_const_8[23];
  nonscalar3[24] = _cg_const_8[24];
  nonscalar3[25] = _cg_const_8[25];
  nonscalar3[26] = _cg_const_8[26];
  nonscalar3[27] = _cg_const_8[27];
  nonscalar3[28] = _cg_const_8[28];
  nonscalar3[29] = _cg_const_8[29];
  nonscalar3[30] = _cg_const_8[30];
  nonscalar3[31] = _cg_const_8[31];
  nonscalar3[32] = _cg_const_8[32];
  nonscalar3[33] = _cg_const_8[33];
  nonscalar3[34] = _cg_const_8[34];
  nonscalar3[35] = _cg_const_8[35];
  nonscalar3[36] = _cg_const_8[36];
  nonscalar3[37] = _cg_const_8[37];
  nonscalar3[38] = _cg_const_8[38];
  nonscalar3[39] = _cg_const_8[39];
  tlu2_2d_linear_nearest_value(&t27[0UL], &t0.mField0[0UL], &t0.mField2[0UL],
    &t1.mField0[0UL], &t1.mField2[0UL], &nonscalar3[0UL], &t4[0UL], &t7[0UL],
    &t5[0UL]);
  zc_int82 = t27[0UL];
  tlu2_2d_linear_nearest_value(&t27[0UL], &t2.mField0[0UL], &t2.mField2[0UL],
    &t1.mField0[0UL], &t1.mField2[0UL], &nonscalar3[0UL], &t4[0UL], &t7[0UL],
    &t5[0UL]);
  if (t42->mM.mX[3UL] != 0) {
    zc_int81 = 8.200000000000002E-8;
  } else {
    zc_int81 = zc_int82;
  }

  if (t42->mM.mX[2UL] != 0) {
    t4[0UL] = 0UL;
    for (t34 = 0UL; t34 < 40UL; t34++) {
      t32 = t34 / 40UL;
      t36 = (t34 - t34 % 40UL) + t4[t32 > 0UL ? 0UL : t32];
      if (nonscalar0[t34] * 1.0E-5 < nonscalar0[t36 > 39UL ? 39UL : t36] *
          1.0E-5) {
        t4[t32 > 0UL ? 0UL : t32] = t34 % 40UL;
      }
    }

    zc_int82 = nonscalar0[t4[0UL] > 39UL ? 39UL : t4[0UL]] * 1.0E-5;
  } else {
    zc_int82 = t25[0UL];
  }

  if (t42->mM.mX[5UL] != 0) {
    zc_int84 = 8.200000000000002E-8;
  } else {
    zc_int84 = t27[0UL];
  }

  if (t42->mM.mX[4UL] != 0) {
    t4[0UL] = 0UL;
    for (t34 = 0UL; t34 < 40UL; t34++) {
      t32 = t34 / 40UL;
      t36 = (t34 - t34 % 40UL) + t4[t32 > 0UL ? 0UL : t32];
      if (nonscalar0[t34] * 1.0E-5 < nonscalar0[t36 > 39UL ? 39UL : t36] *
          1.0E-5) {
        t4[t32 > 0UL ? 0UL : t32] = t34 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based35_electricalModel_xVint =
      nonscalar0[t4[0UL] > 39UL ? 39UL : t4[0UL]] * 1.0E-5;
  }

  out->mFX.mX[0UL] =
    Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_v -
    (((((((-t42->mX.mX[3UL] - t42->mU.mX[0UL]) * zc_int81 + t42->mX.mX[4UL]) +
         t42->mX.mX[5UL]) + t42->mX.mX[6UL]) + t42->mX.mX[7UL]) + t42->mX.mX[8UL])
     + zc_int82);
  out->mFX.mX[1UL] =
    Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_v -
    ((((((t42->mX.mX[3UL] * zc_int84 + t42->mX.mX[10UL]) + t42->mX.mX[11UL]) +
        t42->mX.mX[12UL]) + t42->mX.mX[13UL]) + t42->mX.mX[14UL]) +
     Accumalator_Module_Five1_Battery_Table_Based35_electricalModel_xVint);
  (void)sys;
  (void)out;
  return 0;
}
