/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Tractive_System_model/Solver Configuration1'.
 */

#include "nesl_rtw_partitioning.h"
#include "Tractive_System_model_2f85d999_0_slc_146_sys_struct.h"
#include "Tractive_System_model_2f85d999_0_slc_146f.h"
#include "Tractive_System_model_2f85d999_0_slc_146.h"
#include "Tractive_System_model_2f85d999_0_slc_146_externals.h"
#include "Tractive_System_model_2f85d999_0_slc_146_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Tractive_System_model_2f85d999_0_slc_146f(const SwitchedLinearClump *sys,
  const NeDynamicSystemInput *t40, SlcMethodOutput *out)
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
  real_T nonscalar11[80];
  real_T nonscalar12[40];
  real_T nonscalar1[10];
  real_T nonscalar2[4];
  real_T t7[1];
  real_T Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  real_T t2;
  size_t t20[1];
  size_t t6[1];
  size_t t8[1];
  size_t t22;
  size_t t24;
  size_t t26;
  t7[0UL] = t40->mX.mX[0UL] * 5.5555555555555558E-5;
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
  nonscalar12[0] = _cg_const_3[0];
  nonscalar12[1] = _cg_const_3[1];
  nonscalar12[2] = _cg_const_3[2];
  nonscalar12[3] = _cg_const_3[3];
  nonscalar12[4] = _cg_const_3[4];
  nonscalar12[5] = _cg_const_3[5];
  nonscalar12[6] = _cg_const_3[6];
  nonscalar12[7] = _cg_const_3[7];
  nonscalar12[8] = _cg_const_3[8];
  nonscalar12[9] = _cg_const_3[9];
  nonscalar12[10] = _cg_const_3[10];
  nonscalar12[11] = _cg_const_3[11];
  nonscalar12[12] = _cg_const_3[12];
  nonscalar12[13] = _cg_const_3[13];
  nonscalar12[14] = _cg_const_3[14];
  nonscalar12[15] = _cg_const_3[15];
  nonscalar12[16] = _cg_const_3[16];
  nonscalar12[17] = _cg_const_3[17];
  nonscalar12[18] = _cg_const_3[18];
  nonscalar12[19] = _cg_const_3[19];
  nonscalar12[20] = _cg_const_3[20];
  nonscalar12[21] = _cg_const_3[21];
  nonscalar12[22] = _cg_const_3[22];
  nonscalar12[23] = _cg_const_3[23];
  nonscalar12[24] = _cg_const_3[24];
  nonscalar12[25] = _cg_const_3[25];
  nonscalar12[26] = _cg_const_3[26];
  nonscalar12[27] = _cg_const_3[27];
  nonscalar12[28] = _cg_const_3[28];
  nonscalar12[29] = _cg_const_3[29];
  nonscalar12[30] = _cg_const_3[30];
  nonscalar12[31] = _cg_const_3[31];
  nonscalar12[32] = _cg_const_3[32];
  nonscalar12[33] = _cg_const_3[33];
  nonscalar12[34] = _cg_const_3[34];
  nonscalar12[35] = _cg_const_3[35];
  nonscalar12[36] = _cg_const_3[36];
  nonscalar12[37] = _cg_const_3[37];
  nonscalar12[38] = _cg_const_3[38];
  nonscalar12[39] = _cg_const_3[39];
  t20[0] = 10UL;
  t6[0] = 1UL;
  tlu2_linear_nearest_prelookup(&t1.mField0[0UL], &t1.mField1[0UL], &t1.mField2
    [0UL], &nonscalar1[0UL], &t7[0UL], &t20[0UL], &t6[0UL]);
  t7[0] = 298.15;
  t8[0] = 4UL;
  tlu2_linear_nearest_prelookup(&t0.mField0[0UL], &t0.mField1[0UL], &t0.mField2
    [0UL], &nonscalar2[0UL], &t7[0UL], &t8[0UL], &t6[0UL]);
  tlu2_2d_linear_nearest_value(&t7[0UL], &t1.mField0[0UL], &t1.mField2[0UL],
    &t0.mField0[0UL], &t0.mField2[0UL], &nonscalar12[0UL], &t20[0UL], &t8[0UL],
    &t6[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge = t7[0UL];
  nonscalar12[0] = _cg_const_8[0];
  nonscalar12[1] = _cg_const_8[1];
  nonscalar12[2] = _cg_const_8[2];
  nonscalar12[3] = _cg_const_8[3];
  nonscalar12[4] = _cg_const_8[4];
  nonscalar12[5] = _cg_const_8[5];
  nonscalar12[6] = _cg_const_8[6];
  nonscalar12[7] = _cg_const_8[7];
  nonscalar12[8] = _cg_const_8[8];
  nonscalar12[9] = _cg_const_8[9];
  nonscalar12[10] = _cg_const_8[10];
  nonscalar12[11] = _cg_const_8[11];
  nonscalar12[12] = _cg_const_8[12];
  nonscalar12[13] = _cg_const_8[13];
  nonscalar12[14] = _cg_const_8[14];
  nonscalar12[15] = _cg_const_8[15];
  nonscalar12[16] = _cg_const_8[16];
  nonscalar12[17] = _cg_const_8[17];
  nonscalar12[18] = _cg_const_8[18];
  nonscalar12[19] = _cg_const_8[19];
  nonscalar12[20] = _cg_const_8[20];
  nonscalar12[21] = _cg_const_8[21];
  nonscalar12[22] = _cg_const_8[22];
  nonscalar12[23] = _cg_const_8[23];
  nonscalar12[24] = _cg_const_8[24];
  nonscalar12[25] = _cg_const_8[25];
  nonscalar12[26] = _cg_const_8[26];
  nonscalar12[27] = _cg_const_8[27];
  nonscalar12[28] = _cg_const_8[28];
  nonscalar12[29] = _cg_const_8[29];
  nonscalar12[30] = _cg_const_8[30];
  nonscalar12[31] = _cg_const_8[31];
  nonscalar12[32] = _cg_const_8[32];
  nonscalar12[33] = _cg_const_8[33];
  nonscalar12[34] = _cg_const_8[34];
  nonscalar12[35] = _cg_const_8[35];
  nonscalar12[36] = _cg_const_8[36];
  nonscalar12[37] = _cg_const_8[37];
  nonscalar12[38] = _cg_const_8[38];
  nonscalar12[39] = _cg_const_8[39];
  tlu2_2d_linear_nearest_value(&t7[0UL], &t1.mField0[0UL], &t1.mField2[0UL],
    &t0.mField0[0UL], &t0.mField2[0UL], &nonscalar12[0UL], &t20[0UL], &t8[0UL],
    &t6[0UL]);
  nonscalar11[0] = _cg_const_9[0];
  nonscalar11[1] = _cg_const_9[1];
  nonscalar11[2] = _cg_const_9[2];
  nonscalar11[3] = _cg_const_9[3];
  nonscalar11[4] = _cg_const_9[4];
  nonscalar11[5] = _cg_const_9[5];
  nonscalar11[6] = _cg_const_9[6];
  nonscalar11[7] = _cg_const_9[7];
  nonscalar11[8] = _cg_const_9[8];
  nonscalar11[9] = _cg_const_9[9];
  nonscalar11[10] = _cg_const_9[10];
  nonscalar11[11] = _cg_const_9[11];
  nonscalar11[12] = _cg_const_9[12];
  nonscalar11[13] = _cg_const_9[13];
  nonscalar11[14] = _cg_const_9[14];
  nonscalar11[15] = _cg_const_9[15];
  nonscalar11[16] = _cg_const_9[16];
  nonscalar11[17] = _cg_const_9[17];
  nonscalar11[18] = _cg_const_9[18];
  nonscalar11[19] = _cg_const_9[19];
  nonscalar11[20] = _cg_const_9[20];
  nonscalar11[21] = _cg_const_9[21];
  nonscalar11[22] = _cg_const_9[22];
  nonscalar11[23] = _cg_const_9[23];
  nonscalar11[24] = _cg_const_9[24];
  nonscalar11[25] = _cg_const_9[25];
  nonscalar11[26] = _cg_const_9[26];
  nonscalar11[27] = _cg_const_9[27];
  nonscalar11[28] = _cg_const_9[28];
  nonscalar11[29] = _cg_const_9[29];
  nonscalar11[30] = _cg_const_9[30];
  nonscalar11[31] = _cg_const_9[31];
  nonscalar11[32] = _cg_const_9[32];
  nonscalar11[33] = _cg_const_9[33];
  nonscalar11[34] = _cg_const_9[34];
  nonscalar11[35] = _cg_const_9[35];
  nonscalar11[36] = _cg_const_9[36];
  nonscalar11[37] = _cg_const_9[37];
  nonscalar11[38] = _cg_const_9[38];
  nonscalar11[39] = _cg_const_9[39];
  nonscalar11[40] = _cg_const_9[40];
  nonscalar11[41] = _cg_const_9[41];
  nonscalar11[42] = _cg_const_9[42];
  nonscalar11[43] = _cg_const_9[43];
  nonscalar11[44] = _cg_const_9[44];
  nonscalar11[45] = _cg_const_9[45];
  nonscalar11[46] = _cg_const_9[46];
  nonscalar11[47] = _cg_const_9[47];
  nonscalar11[48] = _cg_const_9[48];
  nonscalar11[49] = _cg_const_9[49];
  nonscalar11[50] = _cg_const_9[50];
  nonscalar11[51] = _cg_const_9[51];
  nonscalar11[52] = _cg_const_9[52];
  nonscalar11[53] = _cg_const_9[53];
  nonscalar11[54] = _cg_const_9[54];
  nonscalar11[55] = _cg_const_9[55];
  nonscalar11[56] = _cg_const_9[56];
  nonscalar11[57] = _cg_const_9[57];
  nonscalar11[58] = _cg_const_9[58];
  nonscalar11[59] = _cg_const_9[59];
  nonscalar11[60] = _cg_const_9[60];
  nonscalar11[61] = _cg_const_9[61];
  nonscalar11[62] = _cg_const_9[62];
  nonscalar11[63] = _cg_const_9[63];
  nonscalar11[64] = _cg_const_9[64];
  nonscalar11[65] = _cg_const_9[65];
  nonscalar11[66] = _cg_const_9[66];
  nonscalar11[67] = _cg_const_9[67];
  nonscalar11[68] = _cg_const_9[68];
  nonscalar11[69] = _cg_const_9[69];
  nonscalar11[70] = _cg_const_9[70];
  nonscalar11[71] = _cg_const_9[71];
  nonscalar11[72] = _cg_const_9[72];
  nonscalar11[73] = _cg_const_9[73];
  nonscalar11[74] = _cg_const_9[74];
  nonscalar11[75] = _cg_const_9[75];
  nonscalar11[76] = _cg_const_9[76];
  nonscalar11[77] = _cg_const_9[77];
  nonscalar11[78] = _cg_const_9[78];
  nonscalar11[79] = _cg_const_9[79];
  if (t40->mM.mX[0UL] != 0) {
    t20[0UL] = 0UL;
    for (t24 = 0UL; t24 < 80UL; t24++) {
      t22 = t24 / 80UL;
      t26 = (t24 - t24 % 80UL) + t20[t22 > 0UL ? 0UL : t22];
      if (nonscalar11[t24] * 1.0E-5 < nonscalar11[t26 > 79UL ? 79UL : t26] *
          1.0E-5) {
        t20[t22 > 0UL ? 0UL : t22] = t24 % 80UL;
      }
    }

    t2 = nonscalar11[t20[0UL] > 79UL ? 79UL : t20[0UL]] * 1.0E-5;
  } else {
    t2 = Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge = 1.0 / (t2 ==
    0.0 ? 1.0E-16 : t2);
  if (t40->mM.mX[1UL] != 0) {
    t20[0UL] = 0UL;
    for (t24 = 0UL; t24 < 80UL; t24++) {
      t22 = t24 / 80UL;
      t26 = (t24 - t24 % 80UL) + t20[t22 > 0UL ? 0UL : t22];
      if (nonscalar11[t24] * 1.0E-5 < nonscalar11[t26 > 79UL ? 79UL : t26] *
          1.0E-5) {
        t20[t22 > 0UL ? 0UL : t22] = t24 % 80UL;
      }
    }

    t2 = nonscalar11[t20[0UL] > 79UL ? 79UL : t20[0UL]] * 1.0E-5;
  } else {
    t2 = t7[0UL];
  }

  out->mF.mX[0UL] =
    -Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  out->mF.mX[1UL] = -(1.0 / (t2 == 0.0 ? 1.0E-16 : t2));
  (void)sys;
  (void)out;
  return 0;
}
