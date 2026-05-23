/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Tractive_System_model/Solver Configuration1'.
 */

#include "nesl_rtw_partitioning.h"
#include "Tractive_System_model_2f85d999_0_slc_281_sys_struct.h"
#include "Tractive_System_model_2f85d999_0_slc_281mode.h"
#include "Tractive_System_model_2f85d999_0_slc_281.h"
#include "Tractive_System_model_2f85d999_0_slc_281_externals.h"
#include "Tractive_System_model_2f85d999_0_slc_281_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Tractive_System_model_2f85d999_0_slc_281mode(const SwitchedLinearClump
  *sys, const NeDynamicSystemInput *t7, SlcMethodOutput *out)
{
  real_T Three_phase_inverter_IGBT_AH_ideal_switch_v;
  real_T Three_phase_inverter_IGBT_BH_ideal_switch_v;
  real_T Three_phase_inverter_IGBT_CH_ideal_switch_v;
  boolean_T t0;
  boolean_T t1;
  boolean_T t2;
  boolean_T t3;
  boolean_T t4;
  boolean_T t5;
  Three_phase_inverter_IGBT_AH_ideal_switch_v = ((((((((t7->mX.mX[2UL] * -0.01 +
    t7->mX.mX[3UL] * -0.01) - t7->mX.mX[1967UL]) + t7->mX.mX[729UL] * 0.01) +
    t7->mX.mX[730UL] * -0.01) + t7->mX.mX[731UL] * 0.01) + t7->mX.mX[732UL] *
    -0.01) + t7->mX.mX[733UL] * 0.01) + t7->mX.mX[734UL] * -0.01) + t7->mX.mX
    [728UL];
  Three_phase_inverter_IGBT_BH_ideal_switch_v = ((((((((t7->mX.mX[2UL] * -0.01 +
    t7->mX.mX[3UL] * -0.01) + t7->mX.mX[729UL] * 0.01) + t7->mX.mX[730UL] *
    -0.01) - t7->mX.mX[1969UL]) + t7->mX.mX[731UL] * 0.01) + t7->mX.mX[732UL] *
    -0.01) + t7->mX.mX[733UL] * 0.01) + t7->mX.mX[734UL] * -0.01) + t7->mX.mX
    [728UL];
  Three_phase_inverter_IGBT_CH_ideal_switch_v = ((((((((t7->mX.mX[2UL] * -0.01 +
    t7->mX.mX[3UL] * -0.01) - t7->mX.mX[1970UL]) + t7->mX.mX[729UL] * 0.01) +
    t7->mX.mX[730UL] * -0.01) + t7->mX.mX[731UL] * 0.01) + t7->mX.mX[732UL] *
    -0.01) + t7->mX.mX[733UL] * 0.01) + t7->mX.mX[734UL] * -0.01) + t7->mX.mX
    [728UL];
  if (Three_phase_inverter_IGBT_AH_ideal_switch_v > 0.8) {
    t0 = (t7->mU.mX[2UL] > 0.5);
  } else {
    t0 = false;
  }

  if (t7->mX.mX[1967UL] > 0.8) {
    t1 = (t7->mU.mX[3UL] > 0.5);
  } else {
    t1 = false;
  }

  if (Three_phase_inverter_IGBT_BH_ideal_switch_v > 0.8) {
    t2 = (t7->mU.mX[0UL] > 0.5);
  } else {
    t2 = false;
  }

  if (t7->mX.mX[1969UL] > 0.8) {
    t3 = (t7->mU.mX[4UL] > 0.5);
  } else {
    t3 = false;
  }

  if (Three_phase_inverter_IGBT_CH_ideal_switch_v > 0.8) {
    t4 = (t7->mU.mX[5UL] > 0.5);
  } else {
    t4 = false;
  }

  if (t7->mX.mX[1970UL] > 0.8) {
    t5 = (t7->mU.mX[1UL] > 0.5);
  } else {
    t5 = false;
  }

  out->mMODE.mX[0UL] = (int32_T)((-t7->mX.mX[1UL] + t7->mX.mX[2UL]) + t7->mX.mX
    [3UL] < 0.0);
  out->mMODE.mX[1UL] = (int32_T)((-t7->mX.mX[12UL] + t7->mX.mX[2UL]) + t7->
    mX.mX[3UL] < 0.0);
  out->mMODE.mX[2UL] = (int32_T)((-t7->mX.mX[21UL] + t7->mX.mX[2UL]) + t7->
    mX.mX[3UL] < 0.0);
  out->mMODE.mX[3UL] = (int32_T)((-t7->mX.mX[30UL] + t7->mX.mX[2UL]) + t7->
    mX.mX[3UL] < 0.0);
  out->mMODE.mX[4UL] = (int32_T)((-t7->mX.mX[39UL] + t7->mX.mX[2UL]) + t7->
    mX.mX[3UL] < 0.0);
  out->mMODE.mX[5UL] = (int32_T)(t7->mX.mX[21UL] < 0.0);
  out->mMODE.mX[6UL] = (int32_T)((-t7->mX.mX[53UL] + t7->mX.mX[2UL]) + t7->
    mX.mX[3UL] < 0.0);
  out->mMODE.mX[7UL] = (int32_T)((-t7->mX.mX[61UL] + t7->mX.mX[2UL]) + t7->
    mX.mX[3UL] < 0.0);
  out->mMODE.mX[8UL] = (int32_T)((-t7->mX.mX[69UL] + t7->mX.mX[2UL]) + t7->
    mX.mX[3UL] < 0.0);
  out->mMODE.mX[9UL] = (int32_T)(t7->mX.mX[12UL] < 0.0);
  out->mMODE.mX[10UL] = (int32_T)(t7->mX.mX[61UL] < 0.0);
  out->mMODE.mX[11UL] = (int32_T)((-t7->mX.mX[88UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[12UL] = (int32_T)((-t7->mX.mX[95UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[13UL] = (int32_T)((-t7->mX.mX[104UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[14UL] = (int32_T)((-t7->mX.mX[113UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[15UL] = (int32_T)((-t7->mX.mX[120UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[16UL] = (int32_T)(t7->mX.mX[120UL] < 0.0);
  out->mMODE.mX[17UL] = (int32_T)(t7->mX.mX[95UL] < 0.0);
  out->mMODE.mX[18UL] = (int32_T)((-t7->mX.mX[139UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[19UL] = (int32_T)(t7->mX.mX[104UL] < 0.0);
  out->mMODE.mX[20UL] = (int32_T)(t7->mX.mX[113UL] < 0.0);
  out->mMODE.mX[21UL] = (int32_T)(t7->mX.mX[139UL] < 0.0);
  out->mMODE.mX[22UL] = (int32_T)(t7->mX.mX[88UL] < 0.0);
  out->mMODE.mX[23UL] = (int32_T)((-t7->mX.mX[171UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[24UL] = (int32_T)((-t7->mX.mX[180UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[25UL] = (int32_T)(t7->mX.mX[1UL] < 0.0);
  out->mMODE.mX[26UL] = (int32_T)((-t7->mX.mX[195UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[27UL] = (int32_T)((-t7->mX.mX[202UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[28UL] = (int32_T)(t7->mX.mX[202UL] < 0.0);
  out->mMODE.mX[29UL] = (int32_T)(t7->mX.mX[171UL] < 0.0);
  out->mMODE.mX[30UL] = (int32_T)((-t7->mX.mX[221UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[31UL] = (int32_T)(t7->mX.mX[180UL] < 0.0);
  out->mMODE.mX[32UL] = (int32_T)(t7->mX.mX[195UL] < 0.0);
  out->mMODE.mX[33UL] = (int32_T)((-t7->mX.mX[241UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[34UL] = (int32_T)(t7->mX.mX[221UL] < 0.0);
  out->mMODE.mX[35UL] = (int32_T)((-t7->mX.mX[254UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[36UL] = (int32_T)((-t7->mX.mX[263UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[37UL] = (int32_T)((-t7->mX.mX[272UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[38UL] = (int32_T)((-t7->mX.mX[279UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[39UL] = (int32_T)(t7->mX.mX[279UL] < 0.0);
  out->mMODE.mX[40UL] = (int32_T)(t7->mX.mX[254UL] < 0.0);
  out->mMODE.mX[41UL] = (int32_T)((-t7->mX.mX[298UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[42UL] = (int32_T)(t7->mX.mX[263UL] < 0.0);
  out->mMODE.mX[43UL] = (int32_T)(t7->mX.mX[272UL] < 0.0);
  out->mMODE.mX[44UL] = (int32_T)(t7->mX.mX[30UL] < 0.0);
  out->mMODE.mX[45UL] = (int32_T)(t7->mX.mX[298UL] < 0.0);
  out->mMODE.mX[46UL] = (int32_T)((-t7->mX.mX[330UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[47UL] = (int32_T)((-t7->mX.mX[338UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[48UL] = (int32_T)((-t7->mX.mX[346UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[49UL] = (int32_T)(t7->mX.mX[330UL] < 0.0);
  out->mMODE.mX[50UL] = (int32_T)(t7->mX.mX[338UL] < 0.0);
  out->mMODE.mX[51UL] = (int32_T)(t7->mX.mX[346UL] < 0.0);
  out->mMODE.mX[52UL] = (int32_T)(t7->mX.mX[39UL] < 0.0);
  out->mMODE.mX[53UL] = (int32_T)(t7->mX.mX[241UL] < 0.0);
  out->mMODE.mX[54UL] = (int32_T)(t7->mX.mX[53UL] < 0.0);
  out->mMODE.mX[55UL] = (int32_T)(t7->mX.mX[69UL] < 0.0);
  out->mMODE.mX[56UL] = (int32_T)((-t7->mX.mX[395UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[57UL] = (int32_T)((-t7->mX.mX[404UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[58UL] = (int32_T)((-t7->mX.mX[413UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[59UL] = (int32_T)((-t7->mX.mX[422UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[60UL] = (int32_T)((-t7->mX.mX[431UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[61UL] = (int32_T)(t7->mX.mX[413UL] < 0.0);
  out->mMODE.mX[62UL] = (int32_T)((-t7->mX.mX[445UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[63UL] = (int32_T)((-t7->mX.mX[453UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[64UL] = (int32_T)((-t7->mX.mX[461UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[65UL] = (int32_T)(t7->mX.mX[404UL] < 0.0);
  out->mMODE.mX[66UL] = (int32_T)(t7->mX.mX[453UL] < 0.0);
  out->mMODE.mX[67UL] = (int32_T)((-t7->mX.mX[480UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[68UL] = (int32_T)((-t7->mX.mX[487UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[69UL] = (int32_T)((-t7->mX.mX[496UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[70UL] = (int32_T)((-t7->mX.mX[505UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[71UL] = (int32_T)((-t7->mX.mX[512UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[72UL] = (int32_T)(t7->mX.mX[512UL] < 0.0);
  out->mMODE.mX[73UL] = (int32_T)(t7->mX.mX[487UL] < 0.0);
  out->mMODE.mX[74UL] = (int32_T)((-t7->mX.mX[531UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[75UL] = (int32_T)(t7->mX.mX[496UL] < 0.0);
  out->mMODE.mX[76UL] = (int32_T)(t7->mX.mX[505UL] < 0.0);
  out->mMODE.mX[77UL] = (int32_T)(t7->mX.mX[531UL] < 0.0);
  out->mMODE.mX[78UL] = (int32_T)(t7->mX.mX[480UL] < 0.0);
  out->mMODE.mX[79UL] = (int32_T)((-t7->mX.mX[563UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[80UL] = (int32_T)((-t7->mX.mX[572UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[81UL] = (int32_T)(t7->mX.mX[395UL] < 0.0);
  out->mMODE.mX[82UL] = (int32_T)((-t7->mX.mX[587UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[83UL] = (int32_T)((-t7->mX.mX[594UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[84UL] = (int32_T)(t7->mX.mX[594UL] < 0.0);
  out->mMODE.mX[85UL] = (int32_T)(t7->mX.mX[563UL] < 0.0);
  out->mMODE.mX[86UL] = (int32_T)((-t7->mX.mX[613UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[87UL] = (int32_T)(t7->mX.mX[572UL] < 0.0);
  out->mMODE.mX[88UL] = (int32_T)(t7->mX.mX[587UL] < 0.0);
  out->mMODE.mX[89UL] = (int32_T)((-t7->mX.mX[633UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[90UL] = (int32_T)(t7->mX.mX[613UL] < 0.0);
  out->mMODE.mX[91UL] = (int32_T)((-t7->mX.mX[646UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[92UL] = (int32_T)((-t7->mX.mX[655UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[93UL] = (int32_T)((-t7->mX.mX[664UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[94UL] = (int32_T)((-t7->mX.mX[671UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[95UL] = (int32_T)(t7->mX.mX[671UL] < 0.0);
  out->mMODE.mX[96UL] = (int32_T)(t7->mX.mX[646UL] < 0.0);
  out->mMODE.mX[97UL] = (int32_T)((-t7->mX.mX[690UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[98UL] = (int32_T)(t7->mX.mX[655UL] < 0.0);
  out->mMODE.mX[99UL] = (int32_T)(t7->mX.mX[664UL] < 0.0);
  out->mMODE.mX[100UL] = (int32_T)(t7->mX.mX[422UL] < 0.0);
  out->mMODE.mX[101UL] = (int32_T)(t7->mX.mX[690UL] < 0.0);
  out->mMODE.mX[102UL] = (int32_T)((-t7->mX.mX[722UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[103UL] = (int32_T)((-t7->mX.mX[736UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[104UL] = (int32_T)((-t7->mX.mX[745UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[105UL] = (int32_T)(t7->mX.mX[722UL] < 0.0);
  out->mMODE.mX[106UL] = (int32_T)(t7->mX.mX[736UL] < 0.0);
  out->mMODE.mX[107UL] = (int32_T)(t7->mX.mX[745UL] < 0.0);
  out->mMODE.mX[108UL] = (int32_T)(t7->mX.mX[431UL] < 0.0);
  out->mMODE.mX[109UL] = (int32_T)(t7->mX.mX[633UL] < 0.0);
  out->mMODE.mX[110UL] = (int32_T)(t7->mX.mX[445UL] < 0.0);
  out->mMODE.mX[111UL] = (int32_T)(t7->mX.mX[461UL] < 0.0);
  out->mMODE.mX[112UL] = (int32_T)((-t7->mX.mX[794UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[113UL] = (int32_T)((-t7->mX.mX[803UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[114UL] = (int32_T)((-t7->mX.mX[812UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[115UL] = (int32_T)((-t7->mX.mX[821UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[116UL] = (int32_T)((-t7->mX.mX[830UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[117UL] = (int32_T)(t7->mX.mX[812UL] < 0.0);
  out->mMODE.mX[118UL] = (int32_T)((-t7->mX.mX[844UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[119UL] = (int32_T)((-t7->mX.mX[852UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[120UL] = (int32_T)((-t7->mX.mX[860UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[121UL] = (int32_T)(t7->mX.mX[803UL] < 0.0);
  out->mMODE.mX[122UL] = (int32_T)(t7->mX.mX[852UL] < 0.0);
  out->mMODE.mX[123UL] = (int32_T)((-t7->mX.mX[879UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[124UL] = (int32_T)((-t7->mX.mX[886UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[125UL] = (int32_T)((-t7->mX.mX[895UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[126UL] = (int32_T)((-t7->mX.mX[904UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[127UL] = (int32_T)((-t7->mX.mX[911UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[128UL] = (int32_T)(t7->mX.mX[911UL] < 0.0);
  out->mMODE.mX[129UL] = (int32_T)(t7->mX.mX[886UL] < 0.0);
  out->mMODE.mX[130UL] = (int32_T)((-t7->mX.mX[930UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[131UL] = (int32_T)(t7->mX.mX[895UL] < 0.0);
  out->mMODE.mX[132UL] = (int32_T)(t7->mX.mX[904UL] < 0.0);
  out->mMODE.mX[133UL] = (int32_T)(t7->mX.mX[930UL] < 0.0);
  out->mMODE.mX[134UL] = (int32_T)(t7->mX.mX[879UL] < 0.0);
  out->mMODE.mX[135UL] = (int32_T)((-t7->mX.mX[962UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[136UL] = (int32_T)((-t7->mX.mX[971UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[137UL] = (int32_T)(t7->mX.mX[794UL] < 0.0);
  out->mMODE.mX[138UL] = (int32_T)((-t7->mX.mX[986UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[139UL] = (int32_T)((-t7->mX.mX[993UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[140UL] = (int32_T)(t7->mX.mX[993UL] < 0.0);
  out->mMODE.mX[141UL] = (int32_T)(t7->mX.mX[962UL] < 0.0);
  out->mMODE.mX[142UL] = (int32_T)((-t7->mX.mX[1012UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[143UL] = (int32_T)(t7->mX.mX[971UL] < 0.0);
  out->mMODE.mX[144UL] = (int32_T)(t7->mX.mX[986UL] < 0.0);
  out->mMODE.mX[145UL] = (int32_T)((-t7->mX.mX[1032UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[146UL] = (int32_T)(t7->mX.mX[1012UL] < 0.0);
  out->mMODE.mX[147UL] = (int32_T)((-t7->mX.mX[1045UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[148UL] = (int32_T)((-t7->mX.mX[1054UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[149UL] = (int32_T)((-t7->mX.mX[1063UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[150UL] = (int32_T)((-t7->mX.mX[1070UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[151UL] = (int32_T)(t7->mX.mX[1070UL] < 0.0);
  out->mMODE.mX[152UL] = (int32_T)(t7->mX.mX[1045UL] < 0.0);
  out->mMODE.mX[153UL] = (int32_T)((-t7->mX.mX[1089UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[154UL] = (int32_T)(t7->mX.mX[1054UL] < 0.0);
  out->mMODE.mX[155UL] = (int32_T)(t7->mX.mX[1063UL] < 0.0);
  out->mMODE.mX[156UL] = (int32_T)(t7->mX.mX[821UL] < 0.0);
  out->mMODE.mX[157UL] = (int32_T)(t7->mX.mX[1089UL] < 0.0);
  out->mMODE.mX[158UL] = (int32_T)((-t7->mX.mX[1121UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[159UL] = (int32_T)((-t7->mX.mX[1129UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[160UL] = (int32_T)((-t7->mX.mX[1138UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[161UL] = (int32_T)(t7->mX.mX[1121UL] < 0.0);
  out->mMODE.mX[162UL] = (int32_T)(t7->mX.mX[1129UL] < 0.0);
  out->mMODE.mX[163UL] = (int32_T)(t7->mX.mX[1138UL] < 0.0);
  out->mMODE.mX[164UL] = (int32_T)(t7->mX.mX[830UL] < 0.0);
  out->mMODE.mX[165UL] = (int32_T)(t7->mX.mX[1032UL] < 0.0);
  out->mMODE.mX[166UL] = (int32_T)(t7->mX.mX[844UL] < 0.0);
  out->mMODE.mX[167UL] = (int32_T)(t7->mX.mX[860UL] < 0.0);
  out->mMODE.mX[168UL] = (int32_T)((-t7->mX.mX[1187UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[169UL] = (int32_T)((-t7->mX.mX[1196UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[170UL] = (int32_T)((-t7->mX.mX[1205UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[171UL] = (int32_T)((-t7->mX.mX[1214UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[172UL] = (int32_T)((-t7->mX.mX[1223UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[173UL] = (int32_T)(t7->mX.mX[1205UL] < 0.0);
  out->mMODE.mX[174UL] = (int32_T)((-t7->mX.mX[1237UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[175UL] = (int32_T)((-t7->mX.mX[1245UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[176UL] = (int32_T)((-t7->mX.mX[1253UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[177UL] = (int32_T)(t7->mX.mX[1196UL] < 0.0);
  out->mMODE.mX[178UL] = (int32_T)(t7->mX.mX[1245UL] < 0.0);
  out->mMODE.mX[179UL] = (int32_T)((-t7->mX.mX[1272UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[180UL] = (int32_T)((-t7->mX.mX[1279UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[181UL] = (int32_T)((-t7->mX.mX[1288UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[182UL] = (int32_T)((-t7->mX.mX[1297UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[183UL] = (int32_T)((-t7->mX.mX[1304UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[184UL] = (int32_T)(t7->mX.mX[1304UL] < 0.0);
  out->mMODE.mX[185UL] = (int32_T)(t7->mX.mX[1279UL] < 0.0);
  out->mMODE.mX[186UL] = (int32_T)((-t7->mX.mX[1323UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[187UL] = (int32_T)(t7->mX.mX[1288UL] < 0.0);
  out->mMODE.mX[188UL] = (int32_T)(t7->mX.mX[1297UL] < 0.0);
  out->mMODE.mX[189UL] = (int32_T)(t7->mX.mX[1323UL] < 0.0);
  out->mMODE.mX[190UL] = (int32_T)(t7->mX.mX[1272UL] < 0.0);
  out->mMODE.mX[191UL] = (int32_T)((-t7->mX.mX[1355UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[192UL] = (int32_T)((-t7->mX.mX[1364UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[193UL] = (int32_T)(t7->mX.mX[1187UL] < 0.0);
  out->mMODE.mX[194UL] = (int32_T)((-t7->mX.mX[1379UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[195UL] = (int32_T)((-t7->mX.mX[1386UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[196UL] = (int32_T)(t7->mX.mX[1386UL] < 0.0);
  out->mMODE.mX[197UL] = (int32_T)(t7->mX.mX[1355UL] < 0.0);
  out->mMODE.mX[198UL] = (int32_T)(t7->mX.mX[2UL] < 0.0);
  out->mMODE.mX[199UL] = (int32_T)(t7->mX.mX[1364UL] < 0.0);
  out->mMODE.mX[200UL] = (int32_T)(t7->mX.mX[1379UL] < 0.0);
  out->mMODE.mX[201UL] = (int32_T)((-t7->mX.mX[1424UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[202UL] = (int32_T)(t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[203UL] = (int32_T)((-t7->mX.mX[1437UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[204UL] = (int32_T)((-t7->mX.mX[1446UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[205UL] = (int32_T)((-t7->mX.mX[1455UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[206UL] = (int32_T)((-t7->mX.mX[1462UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[207UL] = (int32_T)(t7->mX.mX[1462UL] < 0.0);
  out->mMODE.mX[208UL] = (int32_T)(t7->mX.mX[1437UL] < 0.0);
  out->mMODE.mX[209UL] = (int32_T)((-t7->mX.mX[1481UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[210UL] = (int32_T)(t7->mX.mX[1446UL] < 0.0);
  out->mMODE.mX[211UL] = (int32_T)(t7->mX.mX[1455UL] < 0.0);
  out->mMODE.mX[212UL] = (int32_T)(t7->mX.mX[1214UL] < 0.0);
  out->mMODE.mX[213UL] = (int32_T)(t7->mX.mX[1481UL] < 0.0);
  out->mMODE.mX[214UL] = (int32_T)((-t7->mX.mX[1513UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[215UL] = (int32_T)((-t7->mX.mX[1520UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[216UL] = (int32_T)((-t7->mX.mX[1528UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[217UL] = (int32_T)(t7->mX.mX[1513UL] < 0.0);
  out->mMODE.mX[218UL] = (int32_T)(t7->mX.mX[1520UL] < 0.0);
  out->mMODE.mX[219UL] = (int32_T)(t7->mX.mX[1528UL] < 0.0);
  out->mMODE.mX[220UL] = (int32_T)(t7->mX.mX[1223UL] < 0.0);
  out->mMODE.mX[221UL] = (int32_T)(t7->mX.mX[1424UL] < 0.0);
  out->mMODE.mX[222UL] = (int32_T)(t7->mX.mX[1237UL] < 0.0);
  out->mMODE.mX[223UL] = (int32_T)(t7->mX.mX[1253UL] < 0.0);
  out->mMODE.mX[224UL] = (int32_T)((-t7->mX.mX[1577UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[225UL] = (int32_T)((-t7->mX.mX[1586UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[226UL] = (int32_T)((-t7->mX.mX[1595UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[227UL] = (int32_T)((-t7->mX.mX[1604UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[228UL] = (int32_T)((-t7->mX.mX[1613UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[229UL] = (int32_T)(t7->mX.mX[1595UL] < 0.0);
  out->mMODE.mX[230UL] = (int32_T)((-t7->mX.mX[1627UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[231UL] = (int32_T)((-t7->mX.mX[1635UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[232UL] = (int32_T)((-t7->mX.mX[1643UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[233UL] = (int32_T)(t7->mX.mX[1586UL] < 0.0);
  out->mMODE.mX[234UL] = (int32_T)(t7->mX.mX[1635UL] < 0.0);
  out->mMODE.mX[235UL] = (int32_T)((-t7->mX.mX[1662UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[236UL] = (int32_T)((-t7->mX.mX[1669UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[237UL] = (int32_T)((-t7->mX.mX[1678UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[238UL] = (int32_T)((-t7->mX.mX[1687UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[239UL] = (int32_T)((-t7->mX.mX[1694UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[240UL] = (int32_T)(t7->mX.mX[1694UL] < 0.0);
  out->mMODE.mX[241UL] = (int32_T)(t7->mX.mX[1669UL] < 0.0);
  out->mMODE.mX[242UL] = (int32_T)((-t7->mX.mX[1713UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[243UL] = (int32_T)(t7->mX.mX[1678UL] < 0.0);
  out->mMODE.mX[244UL] = (int32_T)(t7->mX.mX[1687UL] < 0.0);
  out->mMODE.mX[245UL] = (int32_T)(t7->mX.mX[1713UL] < 0.0);
  out->mMODE.mX[246UL] = (int32_T)(t7->mX.mX[1662UL] < 0.0);
  out->mMODE.mX[247UL] = (int32_T)((-t7->mX.mX[1745UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[248UL] = (int32_T)((-t7->mX.mX[1754UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[249UL] = (int32_T)(t7->mX.mX[1577UL] < 0.0);
  out->mMODE.mX[250UL] = (int32_T)((-t7->mX.mX[1769UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[251UL] = (int32_T)((-t7->mX.mX[1776UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[252UL] = (int32_T)(t7->mX.mX[1776UL] < 0.0);
  out->mMODE.mX[253UL] = (int32_T)(t7->mX.mX[1745UL] < 0.0);
  out->mMODE.mX[254UL] = (int32_T)((-t7->mX.mX[1795UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[255UL] = (int32_T)(t7->mX.mX[1754UL] < 0.0);
  out->mMODE.mX[256UL] = (int32_T)(t7->mX.mX[1769UL] < 0.0);
  out->mMODE.mX[257UL] = (int32_T)((-t7->mX.mX[1815UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[258UL] = (int32_T)(t7->mX.mX[1795UL] < 0.0);
  out->mMODE.mX[259UL] = (int32_T)((-t7->mX.mX[1828UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[260UL] = (int32_T)((-t7->mX.mX[1837UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[261UL] = (int32_T)((-t7->mX.mX[1846UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[262UL] = (int32_T)((-t7->mX.mX[1853UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[263UL] = (int32_T)(t7->mX.mX[1853UL] < 0.0);
  out->mMODE.mX[264UL] = (int32_T)(t7->mX.mX[1828UL] < 0.0);
  out->mMODE.mX[265UL] = (int32_T)((-t7->mX.mX[1872UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[266UL] = (int32_T)(t7->mX.mX[1837UL] < 0.0);
  out->mMODE.mX[267UL] = (int32_T)(t7->mX.mX[1846UL] < 0.0);
  out->mMODE.mX[268UL] = (int32_T)(t7->mX.mX[1604UL] < 0.0);
  out->mMODE.mX[269UL] = (int32_T)(t7->mX.mX[1872UL] < 0.0);
  out->mMODE.mX[270UL] = (int32_T)((-t7->mX.mX[1904UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[271UL] = (int32_T)((-t7->mX.mX[1911UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[272UL] = (int32_T)((-t7->mX.mX[1919UL] + t7->mX.mX[2UL]) +
    t7->mX.mX[3UL] < 0.0);
  out->mMODE.mX[273UL] = (int32_T)(t7->mX.mX[1904UL] < 0.0);
  out->mMODE.mX[274UL] = (int32_T)(t7->mX.mX[1911UL] < 0.0);
  out->mMODE.mX[275UL] = (int32_T)(t7->mX.mX[1919UL] < 0.0);
  out->mMODE.mX[276UL] = (int32_T)(t7->mX.mX[1613UL] < 0.0);
  out->mMODE.mX[277UL] = (int32_T)(t7->mX.mX[1815UL] < 0.0);
  out->mMODE.mX[278UL] = (int32_T)(t7->mX.mX[1627UL] < 0.0);
  out->mMODE.mX[279UL] = (int32_T)(t7->mX.mX[1643UL] < 0.0);
  out->mMODE.mX[280UL] = (int32_T)(t7->mX.mX[1976UL] < 0.0);
  out->mMODE.mX[281UL] = (int32_T)t0;
  out->mMODE.mX[282UL] = (int32_T)(t7->mX.mX[1978UL] < 0.0);
  out->mMODE.mX[283UL] = (int32_T)t1;
  out->mMODE.mX[284UL] = (int32_T)(t7->mX.mX[1979UL] < 0.0);
  out->mMODE.mX[285UL] = (int32_T)t2;
  out->mMODE.mX[286UL] = (int32_T)(t7->mX.mX[1981UL] < 0.0);
  out->mMODE.mX[287UL] = (int32_T)t3;
  out->mMODE.mX[288UL] = (int32_T)(t7->mX.mX[1982UL] < 0.0);
  out->mMODE.mX[289UL] = (int32_T)t4;
  out->mMODE.mX[290UL] = (int32_T)(t7->mX.mX[1984UL] < 0.0);
  out->mMODE.mX[291UL] = (int32_T)t5;
  out->mMODE.mX[292UL] = (int32_T)(Three_phase_inverter_IGBT_AH_ideal_switch_v -
    0.8 <= t7->mU.mX[2UL] - 0.5);
  out->mMODE.mX[293UL] = (int32_T)(t7->mX.mX[1967UL] - 0.8 <= t7->mU.mX[3UL] -
    0.5);
  out->mMODE.mX[294UL] = (int32_T)(Three_phase_inverter_IGBT_BH_ideal_switch_v -
    0.8 <= t7->mU.mX[0UL] - 0.5);
  out->mMODE.mX[295UL] = (int32_T)(t7->mX.mX[1969UL] - 0.8 <= t7->mU.mX[4UL] -
    0.5);
  out->mMODE.mX[296UL] = (int32_T)(Three_phase_inverter_IGBT_CH_ideal_switch_v -
    0.8 <= t7->mU.mX[5UL] - 0.5);
  out->mMODE.mX[297UL] = (int32_T)(t7->mX.mX[1970UL] - 0.8 <= t7->mU.mX[1UL] -
    0.5);
  (void)sys;
  (void)out;
  return 0;
}
