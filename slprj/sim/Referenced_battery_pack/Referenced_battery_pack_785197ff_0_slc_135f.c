/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Referenced_battery_pack/Solver Configuration'.
 */

#include "nesl_rtw_partitioning.h"
#include "Referenced_battery_pack_785197ff_0_slc_135_sys_struct.h"
#include "Referenced_battery_pack_785197ff_0_slc_135f.h"
#include "Referenced_battery_pack_785197ff_0_slc_135.h"
#include "Referenced_battery_pack_785197ff_0_slc_135_externals.h"
#include "Referenced_battery_pack_785197ff_0_slc_135_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Referenced_battery_pack_785197ff_0_slc_135f(const SwitchedLinearClump
  *sys, const NeDynamicSystemInput *t33, SlcMethodOutput *out)
{
  static real_T _cg_const_9[80] = { 0.007451, 0.003783, 0.002841, 0.003185,
    0.00379, 0.004015, 0.003791, 0.003416, 0.00328, 0.004816, 0.008294, 0.00363,
    0.00298, 0.002661, 0.003147, 0.003677, 0.004051, 0.004883, 0.005238,
    0.004218, 0.007745, 0.004415, 0.003698, 0.003493, 0.004204, 0.004233,
    0.003886, 0.004387, 0.003472, 0.003847, 0.007391, 0.004051, 0.003391,
    0.00379, 0.004229, 0.004481, 0.004189, 0.003743, 0.004883, 0.003891,
    0.040653, 0.026828, 0.019744, 0.012414, 0.007363, 0.005882, 0.006739,
    0.008222, 0.008985, 0.004704, 0.04799, 0.033189, 0.025225, 0.014827,
    0.008356, 0.007703, 0.007058, 0.004287, 0.007821, 0.003171, 0.046915,
    0.032279, 0.021211, 0.017004, 0.01135, 0.006532, 0.006772, 0.009601,
    0.008932, 0.002422, 0.044404, 0.030363, 0.019613, 0.016763, 0.010173,
    0.005526, 0.005603, 0.005034, 0.006662, 0.004036 };

  static real_T _cg_const_3[40] = { 0.007451, 0.003783, 0.002841, 0.003185,
    0.00379, 0.004015, 0.003791, 0.003416, 0.00328, 0.004816, 0.008294, 0.00363,
    0.00298, 0.002661, 0.003147, 0.003677, 0.004051, 0.004883, 0.005238,
    0.004218, 0.007745, 0.004415, 0.003698, 0.003493, 0.004204, 0.004233,
    0.003886, 0.004387, 0.003472, 0.003847, 0.007391, 0.004051, 0.003391,
    0.00379, 0.004229, 0.004481, 0.004189, 0.003743, 0.004883, 0.003891 };

  static real_T _cg_const_8[40] = { 0.040653, 0.026828, 0.019744, 0.012414,
    0.007363, 0.005882, 0.006739, 0.008222, 0.008985, 0.004704, 0.04799,
    0.033189, 0.025225, 0.014827, 0.008356, 0.007703, 0.007058, 0.004287,
    0.007821, 0.003171, 0.046915, 0.032279, 0.021211, 0.017004, 0.01135,
    0.006532, 0.006772, 0.009601, 0.008932, 0.002422, 0.044404, 0.030363,
    0.019613, 0.016763, 0.010173, 0.005526, 0.005603, 0.005034, 0.006662,
    0.004036 };

  static real_T _cg_const_1[10] = { 0.1, 0.188889, 0.277778, 0.366667, 0.455556,
    0.544444, 0.633333, 0.722222, 0.811111, 0.9 };

  static real_T _cg_const_2[4] = { 303.15, 305.65, 308.15, 311.15 };

  ETTSf3049b48 t0;
  ETTSf3049b48 t1;
  real_T nonscalar9[80];
  real_T nonscalar7[40];
  real_T nonscalar1[10];
  real_T nonscalar2[4];
  real_T t7[1];
  real_T t2;
  real_T zc_int1556;
  size_t t20[1];
  size_t t6[1];
  size_t t8[1];
  size_t t22;
  size_t t24;
  size_t t26;
  t7[0UL] = t33->mX.mX[0UL] * 5.5555555555555558E-5;
  nonscalar1[0] = _cg_const_1[0];
  nonscalar1[1] = _cg_const_1[1];
  nonscalar1[2] = _cg_const_1[2];
  nonscalar1[3] = _cg_const_1[3];
  nonscalar1[4] = _cg_const_1[4];
  nonscalar1[5] = _cg_const_1[5];
  nonscalar1[6] = _cg_const_1[6];
  nonscalar1[7] = _cg_const_1[7];
  nonscalar1[8] = _cg_const_1[8];
  nonscalar1[9] = _cg_const_1[9];
  nonscalar2[0] = _cg_const_2[0];
  nonscalar2[1] = _cg_const_2[1];
  nonscalar2[2] = _cg_const_2[2];
  nonscalar2[3] = _cg_const_2[3];
  nonscalar7[0] = _cg_const_3[0];
  nonscalar7[1] = _cg_const_3[1];
  nonscalar7[2] = _cg_const_3[2];
  nonscalar7[3] = _cg_const_3[3];
  nonscalar7[4] = _cg_const_3[4];
  nonscalar7[5] = _cg_const_3[5];
  nonscalar7[6] = _cg_const_3[6];
  nonscalar7[7] = _cg_const_3[7];
  nonscalar7[8] = _cg_const_3[8];
  nonscalar7[9] = _cg_const_3[9];
  nonscalar7[10] = _cg_const_3[10];
  nonscalar7[11] = _cg_const_3[11];
  nonscalar7[12] = _cg_const_3[12];
  nonscalar7[13] = _cg_const_3[13];
  nonscalar7[14] = _cg_const_3[14];
  nonscalar7[15] = _cg_const_3[15];
  nonscalar7[16] = _cg_const_3[16];
  nonscalar7[17] = _cg_const_3[17];
  nonscalar7[18] = _cg_const_3[18];
  nonscalar7[19] = _cg_const_3[19];
  nonscalar7[20] = _cg_const_3[20];
  nonscalar7[21] = _cg_const_3[21];
  nonscalar7[22] = _cg_const_3[22];
  nonscalar7[23] = _cg_const_3[23];
  nonscalar7[24] = _cg_const_3[24];
  nonscalar7[25] = _cg_const_3[25];
  nonscalar7[26] = _cg_const_3[26];
  nonscalar7[27] = _cg_const_3[27];
  nonscalar7[28] = _cg_const_3[28];
  nonscalar7[29] = _cg_const_3[29];
  nonscalar7[30] = _cg_const_3[30];
  nonscalar7[31] = _cg_const_3[31];
  nonscalar7[32] = _cg_const_3[32];
  nonscalar7[33] = _cg_const_3[33];
  nonscalar7[34] = _cg_const_3[34];
  nonscalar7[35] = _cg_const_3[35];
  nonscalar7[36] = _cg_const_3[36];
  nonscalar7[37] = _cg_const_3[37];
  nonscalar7[38] = _cg_const_3[38];
  nonscalar7[39] = _cg_const_3[39];
  t20[0] = 10UL;
  t6[0] = 1UL;
  tlu2_linear_nearest_prelookup(&t1.mField0[0UL], &t1.mField1[0UL], &t1.mField2
    [0UL], &nonscalar1[0UL], &t7[0UL], &t20[0UL], &t6[0UL]);
  t7[0] = 298.15;
  t8[0] = 4UL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0UL], &t0.mField1[0UL], &t0.mField2
    [0UL], &nonscalar2[0UL], &t7[0UL], &t8[0UL], &t6[0UL]);
  tlu2_2d_linear_nearest_value(&t7[0UL], &t1.mField0[0UL], &t1.mField2[0UL],
    &t0.mField0[0UL], &t0.mField2[0UL], &nonscalar7[0UL], &t20[0UL], &t8[0UL],
    &t6[0UL]);
  zc_int1556 = t7[0UL];
  nonscalar7[0] = _cg_const_8[0];
  nonscalar7[1] = _cg_const_8[1];
  nonscalar7[2] = _cg_const_8[2];
  nonscalar7[3] = _cg_const_8[3];
  nonscalar7[4] = _cg_const_8[4];
  nonscalar7[5] = _cg_const_8[5];
  nonscalar7[6] = _cg_const_8[6];
  nonscalar7[7] = _cg_const_8[7];
  nonscalar7[8] = _cg_const_8[8];
  nonscalar7[9] = _cg_const_8[9];
  nonscalar7[10] = _cg_const_8[10];
  nonscalar7[11] = _cg_const_8[11];
  nonscalar7[12] = _cg_const_8[12];
  nonscalar7[13] = _cg_const_8[13];
  nonscalar7[14] = _cg_const_8[14];
  nonscalar7[15] = _cg_const_8[15];
  nonscalar7[16] = _cg_const_8[16];
  nonscalar7[17] = _cg_const_8[17];
  nonscalar7[18] = _cg_const_8[18];
  nonscalar7[19] = _cg_const_8[19];
  nonscalar7[20] = _cg_const_8[20];
  nonscalar7[21] = _cg_const_8[21];
  nonscalar7[22] = _cg_const_8[22];
  nonscalar7[23] = _cg_const_8[23];
  nonscalar7[24] = _cg_const_8[24];
  nonscalar7[25] = _cg_const_8[25];
  nonscalar7[26] = _cg_const_8[26];
  nonscalar7[27] = _cg_const_8[27];
  nonscalar7[28] = _cg_const_8[28];
  nonscalar7[29] = _cg_const_8[29];
  nonscalar7[30] = _cg_const_8[30];
  nonscalar7[31] = _cg_const_8[31];
  nonscalar7[32] = _cg_const_8[32];
  nonscalar7[33] = _cg_const_8[33];
  nonscalar7[34] = _cg_const_8[34];
  nonscalar7[35] = _cg_const_8[35];
  nonscalar7[36] = _cg_const_8[36];
  nonscalar7[37] = _cg_const_8[37];
  nonscalar7[38] = _cg_const_8[38];
  nonscalar7[39] = _cg_const_8[39];
  tlu2_2d_linear_nearest_value(&t7[0UL], &t1.mField0[0UL], &t1.mField2[0UL],
    &t0.mField0[0UL], &t0.mField2[0UL], &nonscalar7[0UL], &t20[0UL], &t8[0UL],
    &t6[0UL]);
  nonscalar9[0] = _cg_const_9[0];
  nonscalar9[1] = _cg_const_9[1];
  nonscalar9[2] = _cg_const_9[2];
  nonscalar9[3] = _cg_const_9[3];
  nonscalar9[4] = _cg_const_9[4];
  nonscalar9[5] = _cg_const_9[5];
  nonscalar9[6] = _cg_const_9[6];
  nonscalar9[7] = _cg_const_9[7];
  nonscalar9[8] = _cg_const_9[8];
  nonscalar9[9] = _cg_const_9[9];
  nonscalar9[10] = _cg_const_9[10];
  nonscalar9[11] = _cg_const_9[11];
  nonscalar9[12] = _cg_const_9[12];
  nonscalar9[13] = _cg_const_9[13];
  nonscalar9[14] = _cg_const_9[14];
  nonscalar9[15] = _cg_const_9[15];
  nonscalar9[16] = _cg_const_9[16];
  nonscalar9[17] = _cg_const_9[17];
  nonscalar9[18] = _cg_const_9[18];
  nonscalar9[19] = _cg_const_9[19];
  nonscalar9[20] = _cg_const_9[20];
  nonscalar9[21] = _cg_const_9[21];
  nonscalar9[22] = _cg_const_9[22];
  nonscalar9[23] = _cg_const_9[23];
  nonscalar9[24] = _cg_const_9[24];
  nonscalar9[25] = _cg_const_9[25];
  nonscalar9[26] = _cg_const_9[26];
  nonscalar9[27] = _cg_const_9[27];
  nonscalar9[28] = _cg_const_9[28];
  nonscalar9[29] = _cg_const_9[29];
  nonscalar9[30] = _cg_const_9[30];
  nonscalar9[31] = _cg_const_9[31];
  nonscalar9[32] = _cg_const_9[32];
  nonscalar9[33] = _cg_const_9[33];
  nonscalar9[34] = _cg_const_9[34];
  nonscalar9[35] = _cg_const_9[35];
  nonscalar9[36] = _cg_const_9[36];
  nonscalar9[37] = _cg_const_9[37];
  nonscalar9[38] = _cg_const_9[38];
  nonscalar9[39] = _cg_const_9[39];
  nonscalar9[40] = _cg_const_9[40];
  nonscalar9[41] = _cg_const_9[41];
  nonscalar9[42] = _cg_const_9[42];
  nonscalar9[43] = _cg_const_9[43];
  nonscalar9[44] = _cg_const_9[44];
  nonscalar9[45] = _cg_const_9[45];
  nonscalar9[46] = _cg_const_9[46];
  nonscalar9[47] = _cg_const_9[47];
  nonscalar9[48] = _cg_const_9[48];
  nonscalar9[49] = _cg_const_9[49];
  nonscalar9[50] = _cg_const_9[50];
  nonscalar9[51] = _cg_const_9[51];
  nonscalar9[52] = _cg_const_9[52];
  nonscalar9[53] = _cg_const_9[53];
  nonscalar9[54] = _cg_const_9[54];
  nonscalar9[55] = _cg_const_9[55];
  nonscalar9[56] = _cg_const_9[56];
  nonscalar9[57] = _cg_const_9[57];
  nonscalar9[58] = _cg_const_9[58];
  nonscalar9[59] = _cg_const_9[59];
  nonscalar9[60] = _cg_const_9[60];
  nonscalar9[61] = _cg_const_9[61];
  nonscalar9[62] = _cg_const_9[62];
  nonscalar9[63] = _cg_const_9[63];
  nonscalar9[64] = _cg_const_9[64];
  nonscalar9[65] = _cg_const_9[65];
  nonscalar9[66] = _cg_const_9[66];
  nonscalar9[67] = _cg_const_9[67];
  nonscalar9[68] = _cg_const_9[68];
  nonscalar9[69] = _cg_const_9[69];
  nonscalar9[70] = _cg_const_9[70];
  nonscalar9[71] = _cg_const_9[71];
  nonscalar9[72] = _cg_const_9[72];
  nonscalar9[73] = _cg_const_9[73];
  nonscalar9[74] = _cg_const_9[74];
  nonscalar9[75] = _cg_const_9[75];
  nonscalar9[76] = _cg_const_9[76];
  nonscalar9[77] = _cg_const_9[77];
  nonscalar9[78] = _cg_const_9[78];
  nonscalar9[79] = _cg_const_9[79];
  if (t33->mM.mX[0UL] != 0) {
    t20[0UL] = 0UL;
    for (t24 = 0UL; t24 < 80UL; t24++) {
      t22 = t24 / 80UL;
      t26 = (t24 - t24 % 80UL) + t20[t22 > 0UL ? 0UL : t22];
      if (nonscalar9[t24] * 1.0E-5 < nonscalar9[t26 > 79UL ? 79UL : t26] *
          1.0E-5) {
        t20[t22 > 0UL ? 0UL : t22] = t24 % 80UL;
      }
    }

    t2 = nonscalar9[t20[0UL] > 79UL ? 79UL : t20[0UL]] * 1.0E-5;
  } else {
    t2 = zc_int1556;
  }

  zc_int1556 = 1.0 / (t2 == 0.0 ? 1.0E-16 : t2);
  if (t33->mM.mX[1UL] != 0) {
    t20[0UL] = 0UL;
    for (t24 = 0UL; t24 < 80UL; t24++) {
      t22 = t24 / 80UL;
      t26 = (t24 - t24 % 80UL) + t20[t22 > 0UL ? 0UL : t22];
      if (nonscalar9[t24] * 1.0E-5 < nonscalar9[t26 > 79UL ? 79UL : t26] *
          1.0E-5) {
        t20[t22 > 0UL ? 0UL : t22] = t24 % 80UL;
      }
    }

    t2 = nonscalar9[t20[0UL] > 79UL ? 79UL : t20[0UL]] * 1.0E-5;
  } else {
    t2 = t7[0UL];
  }

  out->mF.mX[0UL] = -zc_int1556;
  out->mF.mX[1UL] = -(1.0 / (t2 == 0.0 ? 1.0E-16 : t2));
  (void)sys;
  (void)out;
  return 0;
}
