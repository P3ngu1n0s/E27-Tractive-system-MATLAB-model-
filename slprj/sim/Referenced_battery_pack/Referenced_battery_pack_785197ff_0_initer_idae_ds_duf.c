/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Referenced_battery_pack/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Referenced_battery_pack_785197ff_0_initer_idae_ds_sys_struct.h"
#include "Referenced_battery_pack_785197ff_0_initer_idae_ds_duf.h"
#include "Referenced_battery_pack_785197ff_0_initer_idae_ds.h"
#include "Referenced_battery_pack_785197ff_0_initer_idae_ds_externals.h"
#include "Referenced_battery_pack_785197ff_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Referenced_battery_pack_785197ff_0_initer_idae_ds_duf(const
  NeDynamicSystem *LC, const NeDynamicSystemInput *t1230, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[10] = { 0.1, 0.188889, 0.277778, 0.366667, 0.455556,
    0.544444, 0.633333, 0.722222, 0.811111, 0.9 };

  static real_T _cg_const_2[4] = { 303.15, 305.65, 308.15, 311.15 };

  ETTSf3049b48 t11;
  ETTSf3049b48 t110;
  ETTSf3049b48 t125;
  ETTSf3049b48 t13;
  ETTSf3049b48 t132;
  ETTSf3049b48 t133;
  ETTSf3049b48 t135;
  ETTSf3049b48 t137;
  ETTSf3049b48 t18;
  ETTSf3049b48 t50;
  ETTSf3049b48 t55;
  ETTSf3049b48 t62;
  ETTSf3049b48 t71;
  ETTSf3049b48 t78;
  ETTSf3049b48 t80;
  real_T nonscalar1[10];
  real_T nonscalar2[4];
  real_T t414[1];
  real_T t985[1];
  real_T Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based34_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based20_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based44_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based53_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based13_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based1_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based23_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based4_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based16_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based23_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based51_stateOfCharge;
  real_T intrm_sf_mf_103;
  real_T intrm_sf_mf_104;
  real_T intrm_sf_mf_11;
  real_T intrm_sf_mf_112;
  real_T intrm_sf_mf_113;
  real_T intrm_sf_mf_119;
  real_T intrm_sf_mf_126;
  real_T intrm_sf_mf_127;
  real_T intrm_sf_mf_13;
  real_T intrm_sf_mf_135;
  real_T intrm_sf_mf_138;
  real_T intrm_sf_mf_145;
  real_T intrm_sf_mf_15;
  real_T intrm_sf_mf_150;
  real_T intrm_sf_mf_153;
  real_T intrm_sf_mf_206;
  real_T intrm_sf_mf_209;
  real_T intrm_sf_mf_215;
  real_T intrm_sf_mf_216;
  real_T intrm_sf_mf_225;
  real_T intrm_sf_mf_226;
  real_T intrm_sf_mf_227;
  real_T intrm_sf_mf_228;
  real_T intrm_sf_mf_232;
  real_T intrm_sf_mf_236;
  real_T intrm_sf_mf_237;
  real_T intrm_sf_mf_238;
  real_T intrm_sf_mf_242;
  real_T intrm_sf_mf_250;
  real_T intrm_sf_mf_251;
  real_T intrm_sf_mf_259;
  real_T intrm_sf_mf_262;
  real_T intrm_sf_mf_33;
  real_T intrm_sf_mf_4;
  real_T intrm_sf_mf_46;
  real_T intrm_sf_mf_47;
  real_T intrm_sf_mf_57;
  real_T intrm_sf_mf_6;
  real_T intrm_sf_mf_64;
  real_T intrm_sf_mf_67;
  real_T intrm_sf_mf_69;
  real_T intrm_sf_mf_7;
  real_T intrm_sf_mf_71;
  real_T intrm_sf_mf_79;
  real_T intrm_sf_mf_80;
  real_T intrm_sf_mf_86;
  real_T zc_int0;
  real_T zc_int111;
  real_T zc_int114;
  real_T zc_int171;
  real_T zc_int177;
  real_T zc_int18;
  real_T zc_int192;
  real_T zc_int249;
  real_T zc_int258;
  real_T zc_int273;
  real_T zc_int276;
  real_T zc_int279;
  real_T zc_int282;
  real_T zc_int3;
  real_T zc_int306;
  real_T zc_int348;
  real_T zc_int354;
  real_T zc_int357;
  real_T zc_int360;
  real_T zc_int369;
  real_T zc_int375;
  real_T zc_int378;
  real_T zc_int414;
  real_T zc_int426;
  real_T zc_int444;
  real_T zc_int480;
  real_T zc_int537;
  real_T zc_int54;
  real_T zc_int540;
  real_T zc_int576;
  real_T zc_int585;
  real_T zc_int6;
  real_T zc_int612;
  real_T zc_int615;
  real_T zc_int618;
  real_T zc_int642;
  real_T zc_int69;
  real_T zc_int693;
  real_T zc_int708;
  real_T zc_int72;
  real_T zc_int726;
  real_T zc_int744;
  real_T zc_int750;
  real_T zc_int771;
  real_T zc_int777;
  real_T zc_int780;
  real_T zc_int783;
  real_T zc_int786;
  real_T zc_int81;
  real_T zc_int816;
  real_T zc_int99;
  size_t t142[1];
  size_t t143[1];
  size_t t145[1];
  t414[0UL] = t1230->mX.mX[0UL] * 5.5555555555555558E-5;
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
  t142[0] = 10UL;
  t143[0] = 1UL;
  tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL],
    &t135.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  t414[0] = 298.15;
  t145[0] = 4UL;
  tlu2_linear_nearest_prelookup(&t50.mField0[0UL], &t50.mField1[0UL],
    &t50.mField2[0UL], &nonscalar2[0UL], &t414[0UL], &t145[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t135.mField0[0UL], &t135.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int480 = t985[0UL];
  t414[0UL] = t1230->mX.mX[12UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL],
    &t135.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t135.mField0[0UL], &t135.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int306 = t985[0UL];
  t414[0UL] = t1230->mX.mX[24UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL],
    &t135.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t135.mField0[0UL], &t135.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int69 = t985[0UL];
  t414[0UL] = t1230->mX.mX[36UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int780 = t985[0UL];
  t414[0UL] = t1230->mX.mX[48UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_4 = t985[0UL];
  t414[0UL] = t1230->mX.mX[68UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_6 = t985[0UL];
  t414[0UL] = t1230->mX.mX[79UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_7 = t985[0UL];
  t414[0UL] = t1230->mX.mX[90UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[118UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_11 = t985[0UL];
  t414[0UL] = t1230->mX.mX[128UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int360 = t985[0UL];
  t414[0UL] = t1230->mX.mX[140UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_13 = t985[0UL];
  t414[0UL] = t1230->mX.mX[152UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int426 = t985[0UL];
  t414[0UL] = t1230->mX.mX[162UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_15 = t985[0UL];
  t414[0UL] = t1230->mX.mX[190UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int6 = t985[0UL];
  t414[0UL] = t1230->mX.mX[237UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int72 = t985[0UL];
  t414[0UL] = t1230->mX.mX[249UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[270UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int81 = t985[0UL];
  t414[0UL] = t1230->mX.mX[280UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based34_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[308UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[337UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_33 = t985[0UL];
  t414[0UL] = t1230->mX.mX[356UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int642 = t985[0UL];
  t414[0UL] = t1230->mX.mX[368UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int726 = t985[0UL];
  t414[0UL] = t1230->mX.mX[380UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[390UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[418UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[465UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_46 = t985[0UL];
  t414[0UL] = t1230->mX.mX[476UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_47 = t985[0UL];
  t414[0UL] = t1230->mX.mX[487UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[560UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int171 = t985[0UL];
  t414[0UL] = t1230->mX.mX[572UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_57 = t985[0UL];
  t414[0UL] = t1230->mX.mX[584UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int177 = t985[0UL];
  t414[0UL] = t1230->mX.mX[596UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int18 = t985[0UL];
  t414[0UL] = t1230->mX.mX[608UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[628UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[639UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int192 = t985[0UL];
  t414[0UL] = t1230->mX.mX[650UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_64 = t985[0UL];
  t414[0UL] = t1230->mX.mX[678UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL],
    &t135.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t135.mField0[0UL], &t135.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_67 = t985[0UL];
  t414[0UL] = t1230->mX.mX[688UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t13.mField0[0UL], &t13.mField1[0UL],
    &t13.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t13.mField0[0UL], &t13.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_One1_Battery_Table_Based20_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[700UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t13.mField0[0UL], &t13.mField1[0UL],
    &t13.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t13.mField0[0UL], &t13.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_69 = t985[0UL];
  t414[0UL] = t1230->mX.mX[712UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[722UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t125.mField0[0UL], &t125.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_71 = t985[0UL];
  t414[0UL] = t1230->mX.mX[750UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[797UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_79 = t985[0UL];
  t414[0UL] = t1230->mX.mX[809UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_80 = t985[0UL];
  t414[0UL] = t1230->mX.mX[830UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int249 = t985[0UL];
  t414[0UL] = t1230->mX.mX[840UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int258 = t985[0UL];
  t414[0UL] = t1230->mX.mX[868UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_86 = t985[0UL];
  t414[0UL] = t1230->mX.mX[897UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int273 = t985[0UL];
  t414[0UL] = t1230->mX.mX[916UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int276 = t985[0UL];
  t414[0UL] = t1230->mX.mX[928UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int279 = t985[0UL];
  t414[0UL] = t1230->mX.mX[940UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int282 = t985[0UL];
  t414[0UL] = t1230->mX.mX[950UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t125.mField0[0UL], &t125.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_One1_Battery_Table_Based44_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[978UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int3 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1025UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1036UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_103 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1048UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t125.mField0[0UL], &t125.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_104 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1121UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t125.mField0[0UL], &t125.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_112 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1133UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_113 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1145UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1157UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int348 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1169UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t71.mField0[0UL], &t71.mField1[0UL],
    &t71.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t71.mField0[0UL], &t71.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int354 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1189UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int357 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1200UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_119 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1211UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int369 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1239UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1249UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t125.mField0[0UL], &t125.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int375 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1261UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t13.mField0[0UL], &t13.mField1[0UL],
    &t13.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t13.mField0[0UL], &t13.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int378 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1273UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_126 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1283UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_127 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1311UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1358UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL],
    &t135.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t135.mField0[0UL], &t135.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_135 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1370UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int414 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1391UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_138 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1401UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1429UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1458UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_145 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1477UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int444 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1489UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1501UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t125.mField0[0UL], &t125.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1511UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_150 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1539UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_153 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1586UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1597UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int54 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1609UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t13.mField0[0UL], &t13.mField1[0UL],
    &t13.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t13.mField0[0UL], &t13.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based53_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1682UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based1_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1694UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int99 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1706UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1718UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1730UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based13_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1750UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1761UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1772UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int537 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1800UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int540 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1810UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1822UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1834UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1844UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based23_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1872UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1919UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int576 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1931UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1952UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int585 = t985[0UL];
  t414[0UL] = t1230->mX.mX[1962UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[1990UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[2019UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based4_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[2038UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int612 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2050UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int615 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2062UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int618 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2072UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_206 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2100UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_209 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2147UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[2157UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_215 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2168UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_216 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2241UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_four_Battery_Table_Based1_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[2253UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_225 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2265UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_226 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2277UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_227 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2289UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_228 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2309UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int693 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2320UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_four_Battery_Table_Based16_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[2331UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_232 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2359UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int708 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2369UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_236 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2381UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_237 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2393UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_238 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2403UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_four_Battery_Table_Based23_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[2431UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_242 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2478UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int744 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2490UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int750 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2511UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_250 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2521UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL],
    &t135.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t135.mField0[0UL], &t135.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_251 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2549UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int771 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2578UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int777 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2597UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_259 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2609UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int783 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2621UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int786 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2631UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  intrm_sf_mf_262 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2659UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  zc_int111 = t985[0UL];
  t414[0UL] = t1230->mX.mX[2706UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  Accumalator_Module_four_Battery_Table_Based51_stateOfCharge = t985[0UL];
  t414[0UL] = t1230->mX.mX[2716UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL],
    &t135.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t985[0UL], &t135.mField0[0UL], &t135.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  t414[0UL] = t1230->mX.mX[2727UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL],
    &t135.mField2[0UL], &nonscalar1[0UL], &t414[0UL], &t142[0UL], &t143[0UL]);
  tlu2_2d_linear_nearest_value(&t414[0UL], &t135.mField0[0UL], &t135.mField2[0UL],
    &t50.mField0[0UL], &t50.mField2[0UL], ((const _NeDynamicSystem*)(LC))
    ->mField1, &t142[0UL], &t145[0UL], &t143[0UL]);
  if (t1230->mM.mX[1UL] != 0) {
    zc_int0 = 8.200000000000002E-8;
  } else {
    zc_int0 = zc_int480;
  }

  if (t1230->mM.mX[2458UL] != 0) {
    zc_int480 = 8.200000000000002E-8;
  } else {
    zc_int480 = Accumalator_Module_Three1_Battery_Table_Based53_stateOfCharge;
  }

  if (t1230->mM.mX[2625UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based53_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based53_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based1_stateOfCharge;
  }

  if (t1230->mM.mX[2627UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based1_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based1_stateOfCharge = zc_int99;
  }

  if (t1230->mM.mX[2994UL] != 0) {
    zc_int99 = 8.200000000000002E-8;
  } else {
    zc_int99 = intrm_sf_mf_33;
  }

  if (t1230->mM.mX[2630UL] != 0) {
    intrm_sf_mf_33 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_33 = Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  }

  if (t1230->mM.mX[2632UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  }

  if (t1230->mM.mX[2634UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based13_stateOfCharge;
  }

  if (t1230->mM.mX[2638UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based13_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based13_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  }

  if (t1230->mM.mX[2641UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  }

  if (t1230->mM.mX[2643UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge = zc_int537;
  }

  if (t1230->mM.mX[2649UL] != 0) {
    zc_int537 = 8.200000000000002E-8;
  } else {
    zc_int537 = zc_int540;
  }

  if (t1230->mM.mX[2652UL] != 0) {
    zc_int540 = 8.200000000000002E-8;
  } else {
    zc_int540 = Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  }

  if (t1230->mM.mX[2654UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  }

  if (t1230->mM.mX[2656UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge;
  }

  if (t1230->mM.mX[2658UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based23_stateOfCharge;
  }

  if (t1230->mM.mX[2665UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based23_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based23_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge;
  }

  if (t1230->mM.mX[2676UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge = zc_int576;
  }

  if (t1230->mM.mX[2678UL] != 0) {
    zc_int576 = 8.200000000000002E-8;
  } else {
    zc_int576 = Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  }

  if (t1230->mM.mX[2682UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge = zc_int585;
  }

  if (t1230->mM.mX[2685UL] != 0) {
    zc_int585 = 8.200000000000002E-8;
  } else {
    zc_int585 = Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge;
  }

  if (t1230->mM.mX[2691UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  }

  if (t1230->mM.mX[2699UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based4_stateOfCharge;
  }

  if (t1230->mM.mX[2703UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based4_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based4_stateOfCharge = zc_int612;
  }

  if (t1230->mM.mX[2705UL] != 0) {
    zc_int612 = 8.200000000000002E-8;
  } else {
    zc_int612 = zc_int615;
  }

  if (t1230->mM.mX[2708UL] != 0) {
    zc_int615 = 8.200000000000002E-8;
  } else {
    zc_int615 = zc_int618;
  }

  if (t1230->mM.mX[2710UL] != 0) {
    zc_int618 = 8.200000000000002E-8;
  } else {
    zc_int618 = intrm_sf_mf_206;
  }

  if (t1230->mM.mX[2716UL] != 0) {
    intrm_sf_mf_206 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_206 = intrm_sf_mf_209;
  }

  if (t1230->mM.mX[3039UL] != 0) {
    intrm_sf_mf_209 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_209 = zc_int642;
  }

  if (t1230->mM.mX[2727UL] != 0) {
    zc_int642 = 8.200000000000002E-8;
  } else {
    zc_int642 = Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  }

  if (t1230->mM.mX[2730UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge = intrm_sf_mf_215;
  }

  if (t1230->mM.mX[2732UL] != 0) {
    intrm_sf_mf_215 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_215 = intrm_sf_mf_216;
  }

  if (t1230->mM.mX[2749UL] != 0) {
    intrm_sf_mf_216 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_216 = Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  }

  if (t1230->mM.mX[2752UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based1_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based1_stateOfCharge = intrm_sf_mf_225;
  }

  if (t1230->mM.mX[2754UL] != 0) {
    intrm_sf_mf_225 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_225 = intrm_sf_mf_226;
  }

  if (t1230->mM.mX[2756UL] != 0) {
    intrm_sf_mf_226 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_226 = intrm_sf_mf_227;
  }

  if (t1230->mM.mX[2758UL] != 0) {
    intrm_sf_mf_227 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_227 = intrm_sf_mf_228;
  }

  if (t1230->mM.mX[2763UL] != 0) {
    intrm_sf_mf_228 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_228 = zc_int693;
  }

  if (t1230->mM.mX[2765UL] != 0) {
    zc_int693 = 8.200000000000002E-8;
  } else {
    zc_int693 = Accumalator_Module_four_Battery_Table_Based16_stateOfCharge;
  }

  if (t1230->mM.mX[2767UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based16_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based16_stateOfCharge =
      intrm_sf_mf_232;
  }

  if (t1230->mM.mX[2774UL] != 0) {
    intrm_sf_mf_232 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_232 = zc_int708;
  }

  if (t1230->mM.mX[2776UL] != 0) {
    zc_int708 = 8.200000000000002E-8;
  } else {
    zc_int708 = intrm_sf_mf_236;
  }

  if (t1230->mM.mX[2778UL] != 0) {
    intrm_sf_mf_236 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_236 = intrm_sf_mf_237;
  }

  if (t1230->mM.mX[2780UL] != 0) {
    intrm_sf_mf_237 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_237 = intrm_sf_mf_238;
  }

  if (t1230->mM.mX[2782UL] != 0) {
    intrm_sf_mf_238 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_238 =
      Accumalator_Module_four_Battery_Table_Based23_stateOfCharge;
  }

  if (t1230->mM.mX[3061UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based23_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based23_stateOfCharge = zc_int726;
  }

  if (t1230->mM.mX[2789UL] != 0) {
    zc_int726 = 8.200000000000002E-8;
  } else {
    zc_int726 = intrm_sf_mf_242;
  }

  if (t1230->mM.mX[2800UL] != 0) {
    intrm_sf_mf_242 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_242 = zc_int744;
  }

  if (t1230->mM.mX[2802UL] != 0) {
    zc_int744 = 8.200000000000002E-8;
  } else {
    zc_int744 = zc_int750;
  }

  if (t1230->mM.mX[2808UL] != 0) {
    zc_int750 = 8.200000000000002E-8;
  } else {
    zc_int750 = intrm_sf_mf_250;
  }

  if (t1230->mM.mX[2810UL] != 0) {
    intrm_sf_mf_250 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_250 = intrm_sf_mf_251;
  }

  if (t1230->mM.mX[2816UL] != 0) {
    intrm_sf_mf_251 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_251 = zc_int771;
  }

  if (t1230->mM.mX[2823UL] != 0) {
    zc_int771 = 8.200000000000002E-8;
  } else {
    zc_int771 = zc_int777;
  }

  if (t1230->mM.mX[2827UL] != 0) {
    zc_int777 = 8.200000000000002E-8;
  } else {
    zc_int777 = intrm_sf_mf_259;
  }

  if (t1230->mM.mX[3027UL] != 0) {
    intrm_sf_mf_259 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_259 = zc_int780;
  }

  if (t1230->mM.mX[2830UL] != 0) {
    zc_int780 = 8.200000000000002E-8;
  } else {
    zc_int780 = zc_int783;
  }

  if (t1230->mM.mX[2832UL] != 0) {
    zc_int783 = 8.200000000000002E-8;
  } else {
    zc_int783 = zc_int786;
  }

  if (t1230->mM.mX[2834UL] != 0) {
    zc_int786 = 8.200000000000002E-8;
  } else {
    zc_int786 = intrm_sf_mf_262;
  }

  if (t1230->mM.mX[2841UL] != 0) {
    intrm_sf_mf_262 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_262 = zc_int111;
  }

  if (t1230->mM.mX[3083UL] != 0) {
    zc_int111 = 8.200000000000002E-8;
  } else {
    zc_int111 = Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge;
  }

  if (t1230->mM.mX[2852UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge =
      Accumalator_Module_four_Battery_Table_Based51_stateOfCharge;
  }

  if (t1230->mM.mX[2854UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based51_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based51_stateOfCharge = t985[0UL];
  }

  if (t1230->mM.mX[2856UL] != 0) {
    zc_int816 = 8.200000000000002E-8;
  } else {
    zc_int816 = t414[0UL];
  }

  if (t1230->mM.mX[3105UL] != 0) {
    zc_int114 = 8.200000000000002E-8;
  } else {
    zc_int114 = Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  }

  if (t1230->mM.mX[3249UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge = intrm_sf_mf_4;
  }

  if (t1230->mM.mX[3172UL] != 0) {
    intrm_sf_mf_4 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_4 = Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  }

  if (t1230->mM.mX[3283UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge =
      intrm_sf_mf_46;
  }

  if (t1230->mM.mX[3305UL] != 0) {
    intrm_sf_mf_46 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_46 = intrm_sf_mf_47;
  }

  if (t1230->mM.mX[3327UL] != 0) {
    intrm_sf_mf_47 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_47 =
      Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge;
  }

  if (t1230->mM.mX[147UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge = zc_int171;
  }

  if (t1230->mM.mX[169UL] != 0) {
    zc_int171 = 8.200000000000002E-8;
  } else {
    zc_int171 = intrm_sf_mf_57;
  }

  if (t1230->mM.mX[191UL] != 0) {
    intrm_sf_mf_57 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_57 = zc_int177;
  }

  if (t1230->mM.mX[213UL] != 0) {
    zc_int177 = 8.200000000000002E-8;
  } else {
    zc_int177 = zc_int18;
  }

  if (t1230->mM.mX[335UL] != 0) {
    zc_int18 = 8.200000000000002E-8;
  } else {
    zc_int18 = intrm_sf_mf_6;
  }

  if (t1230->mM.mX[236UL] != 0) {
    intrm_sf_mf_6 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_6 = Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge;
  }

  if (t1230->mM.mX[280UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge =
      Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge;
  }

  if (t1230->mM.mX[302UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge = zc_int192;
  }

  if (t1230->mM.mX[324UL] != 0) {
    zc_int192 = 8.200000000000002E-8;
  } else {
    zc_int192 = intrm_sf_mf_64;
  }

  if (t1230->mM.mX[391UL] != 0) {
    intrm_sf_mf_64 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_64 = intrm_sf_mf_67;
  }

  if (t1230->mM.mX[413UL] != 0) {
    intrm_sf_mf_67 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_67 = Accumalator_Module_One1_Battery_Table_Based20_stateOfCharge;
  }

  if (t1230->mM.mX[435UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based20_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based20_stateOfCharge = intrm_sf_mf_69;
  }

  if (t1230->mM.mX[557UL] != 0) {
    intrm_sf_mf_69 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_69 = intrm_sf_mf_7;
  }

  if (t1230->mM.mX[458UL] != 0) {
    intrm_sf_mf_7 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_7 = Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge;
  }

  if (t1230->mM.mX[480UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge = intrm_sf_mf_71;
  }

  if (t1230->mM.mX[546UL] != 0) {
    intrm_sf_mf_71 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_71 = Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  }

  if (t1230->mM.mX[657UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge = intrm_sf_mf_79;
  }

  if (t1230->mM.mX[779UL] != 0) {
    intrm_sf_mf_79 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_79 =
      Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  }

  if (t1230->mM.mX[680UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge =
      intrm_sf_mf_80;
  }

  if (t1230->mM.mX[724UL] != 0) {
    intrm_sf_mf_80 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_80 = zc_int249;
  }

  if (t1230->mM.mX[746UL] != 0) {
    zc_int249 = 8.200000000000002E-8;
  } else {
    zc_int249 = zc_int258;
  }

  if (t1230->mM.mX[813UL] != 0) {
    zc_int258 = 8.200000000000002E-8;
  } else {
    zc_int258 = intrm_sf_mf_86;
  }

  if (t1230->mM.mX[879UL] != 0) {
    intrm_sf_mf_86 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_86 = zc_int273;
  }

  if (t1230->mM.mX[924UL] != 0) {
    zc_int273 = 8.200000000000002E-8;
  } else {
    zc_int273 = zc_int276;
  }

  if (t1230->mM.mX[946UL] != 0) {
    zc_int276 = 8.200000000000002E-8;
  } else {
    zc_int276 = zc_int279;
  }

  if (t1230->mM.mX[968UL] != 0) {
    zc_int279 = 8.200000000000002E-8;
  } else {
    zc_int279 = zc_int282;
  }

  if (t1230->mM.mX[990UL] != 0) {
    zc_int282 = 8.200000000000002E-8;
  } else {
    zc_int282 = Accumalator_Module_One1_Battery_Table_Based44_stateOfCharge;
  }

  if (t1230->mM.mX[1057UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based44_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based44_stateOfCharge = zc_int3;
  }

  if (t1230->mM.mX[2223UL] != 0) {
    zc_int3 = 8.200000000000002E-8;
  } else {
    zc_int3 = zc_int306;
  }

  if (t1230->mM.mX[1169UL] != 0) {
    zc_int306 = 8.200000000000002E-8;
  } else {
    zc_int306 = Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  }

  if (t1230->mM.mX[1191UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge =
      intrm_sf_mf_103;
  }

  if (t1230->mM.mX[1213UL] != 0) {
    intrm_sf_mf_103 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_103 = intrm_sf_mf_104;
  }

  if (t1230->mM.mX[1446UL] != 0) {
    intrm_sf_mf_104 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_104 = intrm_sf_mf_11;
  }

  if (t1230->mM.mX[1391UL] != 0) {
    intrm_sf_mf_11 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_11 = intrm_sf_mf_112;
  }

  if (t1230->mM.mX[1413UL] != 0) {
    intrm_sf_mf_112 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_112 = intrm_sf_mf_113;
  }

  if (t1230->mM.mX[1435UL] != 0) {
    intrm_sf_mf_113 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_113 =
      Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  }

  if (t1230->mM.mX[1458UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge = zc_int348;
  }

  if (t1230->mM.mX[1480UL] != 0) {
    zc_int348 = 8.200000000000002E-8;
  } else {
    zc_int348 = zc_int354;
  }

  if (t1230->mM.mX[1524UL] != 0) {
    zc_int354 = 8.200000000000002E-8;
  } else {
    zc_int354 = zc_int357;
  }

  if (t1230->mM.mX[1546UL] != 0) {
    zc_int357 = 8.200000000000002E-8;
  } else {
    zc_int357 = intrm_sf_mf_119;
  }

  if (t1230->mM.mX[1668UL] != 0) {
    intrm_sf_mf_119 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_119 = zc_int360;
  }

  if (t1230->mM.mX[1569UL] != 0) {
    zc_int360 = 8.200000000000002E-8;
  } else {
    zc_int360 = zc_int369;
  }

  if (t1230->mM.mX[1635UL] != 0) {
    zc_int369 = 8.200000000000002E-8;
  } else {
    zc_int369 = Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  }

  if (t1230->mM.mX[1657UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge = zc_int375;
  }

  if (t1230->mM.mX[1680UL] != 0) {
    zc_int375 = 8.200000000000002E-8;
  } else {
    zc_int375 = zc_int378;
  }

  if (t1230->mM.mX[1702UL] != 0) {
    zc_int378 = 8.200000000000002E-8;
  } else {
    zc_int378 = intrm_sf_mf_126;
  }

  if (t1230->mM.mX[1724UL] != 0) {
    intrm_sf_mf_126 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_126 = intrm_sf_mf_127;
  }

  if (t1230->mM.mX[1890UL] != 0) {
    intrm_sf_mf_127 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_127 = intrm_sf_mf_13;
  }

  if (t1230->mM.mX[1791UL] != 0) {
    intrm_sf_mf_13 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_13 =
      Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge;
  }

  if (t1230->mM.mX[1902UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge =
      intrm_sf_mf_135;
  }

  if (t1230->mM.mX[1924UL] != 0) {
    intrm_sf_mf_135 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_135 = zc_int414;
  }

  if (t1230->mM.mX[1968UL] != 0) {
    zc_int414 = 8.200000000000002E-8;
  } else {
    zc_int414 = intrm_sf_mf_138;
  }

  if (t1230->mM.mX[1990UL] != 0) {
    intrm_sf_mf_138 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_138 =
      Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge;
  }

  if (t1230->mM.mX[2112UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge = zc_int426;
  }

  if (t1230->mM.mX[2057UL] != 0) {
    zc_int426 = 8.200000000000002E-8;
  } else {
    zc_int426 = Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge;
  }

  if (t1230->mM.mX[2124UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge =
      intrm_sf_mf_145;
  }

  if (t1230->mM.mX[2168UL] != 0) {
    intrm_sf_mf_145 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_145 = zc_int444;
  }

  if (t1230->mM.mX[2190UL] != 0) {
    zc_int444 = 8.200000000000002E-8;
  } else {
    zc_int444 = Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  }

  if (t1230->mM.mX[2212UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge =
      Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge;
  }

  if (t1230->mM.mX[2335UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge =
      intrm_sf_mf_15;
  }

  if (t1230->mM.mX[2236UL] != 0) {
    intrm_sf_mf_15 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_15 = intrm_sf_mf_150;
  }

  if (t1230->mM.mX[2302UL] != 0) {
    intrm_sf_mf_150 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_150 = intrm_sf_mf_153;
  }

  if (t1230->mM.mX[2413UL] != 0) {
    intrm_sf_mf_153 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_153 =
      Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  }

  if (t1230->mM.mX[2435UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge = zc_int54;
  }

  if (t1230->mM.mX[2661UL] != 0) {
    zc_int54 = 8.200000000000002E-8;
  } else {
    zc_int54 = zc_int6;
  }

  if (t1230->mM.mX[2805UL] != 0) {
    zc_int6 = 8.200000000000002E-8;
  } else {
    zc_int6 = zc_int69;
  }

  if (t1230->mM.mX[2772UL] != 0) {
    zc_int69 = 8.200000000000002E-8;
  } else {
    zc_int69 = zc_int72;
  }

  if (t1230->mM.mX[2794UL] != 0) {
    zc_int72 = 8.200000000000002E-8;
  } else {
    zc_int72 = Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge;
  }

  if (t1230->mM.mX[2839UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge = zc_int81;
  }

  if (t1230->mM.mX[2861UL] != 0) {
    zc_int81 = 8.200000000000002E-8;
  } else {
    zc_int81 = Accumalator_Module_Five1_Battery_Table_Based34_stateOfCharge;
  }

  if (t1230->mM.mX[2928UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based34_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based34_stateOfCharge =
      Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge;
  }

  out->mDUF.mX[0UL] = (real_T)(-t1230->mX.mX[1UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[1UL] = (real_T)(-t1230->mX.mX[13UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[2UL] = (real_T)(-t1230->mX.mX[25UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[3UL] = (real_T)(-t1230->mX.mX[37UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[4UL] = (real_T)(-t1230->mX.mX[49UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[5UL] = (real_T)(-t1230->mX.mX[69UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[6UL] = (real_T)(-t1230->mX.mX[80UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[7UL] = (real_T)(-t1230->mX.mX[91UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[8UL] = (real_T)(-t1230->mX.mX[119UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[9UL] = (real_T)(-t1230->mX.mX[129UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[10UL] = (real_T)(-t1230->mX.mX[141UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[11UL] = (real_T)(-t1230->mX.mX[153UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[12UL] = (real_T)(-t1230->mX.mX[163UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[13UL] = (real_T)(-t1230->mX.mX[191UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[14UL] = (real_T)(-t1230->mX.mX[238UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[15UL] = (real_T)(-t1230->mX.mX[250UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[16UL] = (real_T)(-t1230->mX.mX[271UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[17UL] = (real_T)(-t1230->mX.mX[281UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[18UL] = (real_T)(-t1230->mX.mX[309UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[19UL] = (real_T)(-t1230->mX.mX[338UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[20UL] = (real_T)(-t1230->mX.mX[357UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[21UL] = (real_T)(-t1230->mX.mX[369UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[22UL] = (real_T)(-t1230->mX.mX[381UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[23UL] = (real_T)(-t1230->mX.mX[391UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[24UL] = (real_T)(-t1230->mX.mX[419UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[25UL] = (real_T)(-t1230->mX.mX[466UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[26UL] = (real_T)(-t1230->mX.mX[477UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[27UL] = (real_T)(-t1230->mX.mX[488UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[28UL] = (real_T)(-t1230->mX.mX[561UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[29UL] = (real_T)(-t1230->mX.mX[573UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[30UL] = (real_T)(-t1230->mX.mX[585UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[31UL] = (real_T)(-t1230->mX.mX[597UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[32UL] = (real_T)(-t1230->mX.mX[609UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[33UL] = (real_T)(-t1230->mX.mX[629UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[34UL] = (real_T)(-t1230->mX.mX[640UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[35UL] = (real_T)(-t1230->mX.mX[651UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[36UL] = (real_T)(-t1230->mX.mX[679UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[37UL] = (real_T)(-t1230->mX.mX[689UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[38UL] = (real_T)(-t1230->mX.mX[701UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[39UL] = (real_T)(-t1230->mX.mX[713UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[40UL] = (real_T)(-t1230->mX.mX[723UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[41UL] = (real_T)(-t1230->mX.mX[751UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[42UL] = (real_T)(-t1230->mX.mX[798UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[43UL] = (real_T)(-t1230->mX.mX[810UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[44UL] = (real_T)(-t1230->mX.mX[831UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[45UL] = (real_T)(-t1230->mX.mX[841UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[46UL] = (real_T)(-t1230->mX.mX[869UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[47UL] = (real_T)(-t1230->mX.mX[898UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[48UL] = (real_T)(-t1230->mX.mX[917UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[49UL] = (real_T)(-t1230->mX.mX[929UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[50UL] = (real_T)(-t1230->mX.mX[941UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[51UL] = (real_T)(-t1230->mX.mX[951UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[52UL] = (real_T)(-t1230->mX.mX[979UL] - t1230->mU.mX[0UL] < 0.0) /
    18000.0;
  out->mDUF.mX[53UL] = (real_T)(-t1230->mX.mX[1026UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[54UL] = (real_T)(-t1230->mX.mX[1037UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[55UL] = (real_T)(-t1230->mX.mX[1049UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[56UL] = (real_T)(-t1230->mX.mX[1122UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[57UL] = (real_T)(-t1230->mX.mX[1134UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[58UL] = (real_T)(-t1230->mX.mX[1146UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[59UL] = (real_T)(-t1230->mX.mX[1158UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[60UL] = (real_T)(-t1230->mX.mX[1170UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[61UL] = (real_T)(-t1230->mX.mX[1190UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[62UL] = (real_T)(-t1230->mX.mX[1201UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[63UL] = (real_T)(-t1230->mX.mX[1212UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[64UL] = (real_T)(-t1230->mX.mX[1240UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[65UL] = (real_T)(-t1230->mX.mX[1250UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[66UL] = (real_T)(-t1230->mX.mX[1262UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[67UL] = (real_T)(-t1230->mX.mX[1274UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[68UL] = (real_T)(-t1230->mX.mX[1284UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[69UL] = (real_T)(-t1230->mX.mX[1312UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[70UL] = (real_T)(-t1230->mX.mX[1359UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[71UL] = (real_T)(-t1230->mX.mX[1371UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[72UL] = (real_T)(-t1230->mX.mX[1392UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[73UL] = (real_T)(-t1230->mX.mX[1402UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[74UL] = (real_T)(-t1230->mX.mX[1430UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[75UL] = (real_T)(-t1230->mX.mX[1459UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[76UL] = (real_T)(-t1230->mX.mX[1478UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[77UL] = (real_T)(-t1230->mX.mX[1490UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[78UL] = (real_T)(-t1230->mX.mX[1502UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[79UL] = (real_T)(-t1230->mX.mX[1512UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[80UL] = (real_T)(-t1230->mX.mX[1540UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[81UL] = (real_T)(-t1230->mX.mX[1587UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[82UL] = (real_T)(-t1230->mX.mX[1598UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[83UL] = (real_T)(-t1230->mX.mX[1610UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[84UL] = (real_T)(-t1230->mX.mX[1683UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[85UL] = (real_T)(-t1230->mX.mX[1695UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[86UL] = (real_T)(-t1230->mX.mX[1707UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[87UL] = (real_T)(-t1230->mX.mX[1719UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[88UL] = (real_T)(-t1230->mX.mX[1731UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[89UL] = (real_T)(-t1230->mX.mX[1751UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[90UL] = (real_T)(-t1230->mX.mX[1762UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[91UL] = (real_T)(-t1230->mX.mX[1773UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[92UL] = (real_T)(-t1230->mX.mX[1801UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[93UL] = (real_T)(-t1230->mX.mX[1811UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[94UL] = (real_T)(-t1230->mX.mX[1823UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[95UL] = (real_T)(-t1230->mX.mX[1835UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[96UL] = (real_T)(-t1230->mX.mX[1845UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[97UL] = (real_T)(-t1230->mX.mX[1873UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[98UL] = (real_T)(-t1230->mX.mX[1920UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[99UL] = (real_T)(-t1230->mX.mX[1932UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[100UL] = (real_T)(-t1230->mX.mX[1953UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[101UL] = (real_T)(-t1230->mX.mX[1963UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[102UL] = (real_T)(-t1230->mX.mX[1991UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[103UL] = (real_T)(-t1230->mX.mX[2020UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[104UL] = (real_T)(-t1230->mX.mX[2039UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[105UL] = (real_T)(-t1230->mX.mX[2051UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[106UL] = (real_T)(-t1230->mX.mX[2063UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[107UL] = (real_T)(-t1230->mX.mX[2073UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[108UL] = (real_T)(-t1230->mX.mX[2101UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[109UL] = (real_T)(-t1230->mX.mX[2148UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[110UL] = (real_T)(-t1230->mX.mX[2158UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[111UL] = (real_T)(-t1230->mX.mX[2169UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[112UL] = (real_T)(-t1230->mX.mX[2242UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[113UL] = (real_T)(-t1230->mX.mX[2254UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[114UL] = (real_T)(-t1230->mX.mX[2266UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[115UL] = (real_T)(-t1230->mX.mX[2278UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[116UL] = (real_T)(-t1230->mX.mX[2290UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[117UL] = (real_T)(-t1230->mX.mX[2310UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[118UL] = (real_T)(-t1230->mX.mX[2321UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[119UL] = (real_T)(-t1230->mX.mX[2332UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[120UL] = (real_T)(-t1230->mX.mX[2360UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[121UL] = (real_T)(-t1230->mX.mX[2370UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[122UL] = (real_T)(-t1230->mX.mX[2382UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[123UL] = (real_T)(-t1230->mX.mX[2394UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[124UL] = (real_T)(-t1230->mX.mX[2404UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[125UL] = (real_T)(-t1230->mX.mX[2432UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[126UL] = (real_T)(-t1230->mX.mX[2479UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[127UL] = (real_T)(-t1230->mX.mX[2491UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[128UL] = (real_T)(-t1230->mX.mX[2512UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[129UL] = (real_T)(-t1230->mX.mX[2522UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[130UL] = (real_T)(-t1230->mX.mX[2550UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[131UL] = (real_T)(-t1230->mX.mX[2579UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[132UL] = (real_T)(-t1230->mX.mX[2598UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[133UL] = (real_T)(-t1230->mX.mX[2610UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[134UL] = (real_T)(-t1230->mX.mX[2622UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[135UL] = (real_T)(-t1230->mX.mX[2632UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[136UL] = (real_T)(-t1230->mX.mX[2660UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[137UL] = (real_T)(-t1230->mX.mX[2707UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[138UL] = (real_T)(-t1230->mX.mX[2717UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[139UL] = (real_T)(-t1230->mX.mX[2728UL] - t1230->mU.mX[0UL] < 0.0)
    / 18000.0;
  out->mDUF.mX[140UL] = zc_int0;
  out->mDUF.mX[141UL] = zc_int3;
  out->mDUF.mX[142UL] = zc_int6;
  out->mDUF.mX[143UL] = intrm_sf_mf_259;
  out->mDUF.mX[144UL] =
    Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  out->mDUF.mX[145UL] = zc_int18;
  out->mDUF.mX[146UL] = intrm_sf_mf_69;
  out->mDUF.mX[147UL] = intrm_sf_mf_79;
  out->mDUF.mX[148UL] = intrm_sf_mf_104;
  out->mDUF.mX[149UL] = intrm_sf_mf_119;
  out->mDUF.mX[150UL] = intrm_sf_mf_127;
  out->mDUF.mX[151UL] =
    Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge;
  out->mDUF.mX[152UL] =
    Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge;
  out->mDUF.mX[153UL] = zc_int54;
  out->mDUF.mX[154UL] = zc_int69;
  out->mDUF.mX[155UL] = zc_int72;
  out->mDUF.mX[156UL] =
    Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge;
  out->mDUF.mX[157UL] = zc_int81;
  out->mDUF.mX[158UL] =
    Accumalator_Module_Five1_Battery_Table_Based34_stateOfCharge;
  out->mDUF.mX[159UL] = zc_int99;
  out->mDUF.mX[160UL] = intrm_sf_mf_209;
  out->mDUF.mX[161UL] =
    Accumalator_Module_four_Battery_Table_Based23_stateOfCharge;
  out->mDUF.mX[162UL] = zc_int111;
  out->mDUF.mX[163UL] = zc_int114;
  out->mDUF.mX[164UL] = intrm_sf_mf_4;
  out->mDUF.mX[165UL] =
    Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  out->mDUF.mX[166UL] = intrm_sf_mf_46;
  out->mDUF.mX[167UL] = intrm_sf_mf_47;
  out->mDUF.mX[168UL] =
    Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge;
  out->mDUF.mX[169UL] = zc_int171;
  out->mDUF.mX[170UL] = intrm_sf_mf_57;
  out->mDUF.mX[171UL] = zc_int177;
  out->mDUF.mX[172UL] = intrm_sf_mf_6;
  out->mDUF.mX[173UL] =
    Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge;
  out->mDUF.mX[174UL] =
    Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge;
  out->mDUF.mX[175UL] = zc_int192;
  out->mDUF.mX[176UL] = intrm_sf_mf_64;
  out->mDUF.mX[177UL] = intrm_sf_mf_67;
  out->mDUF.mX[178UL] =
    Accumalator_Module_One1_Battery_Table_Based20_stateOfCharge;
  out->mDUF.mX[179UL] = intrm_sf_mf_7;
  out->mDUF.mX[180UL] =
    Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge;
  out->mDUF.mX[181UL] = intrm_sf_mf_71;
  out->mDUF.mX[182UL] =
    Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  out->mDUF.mX[183UL] =
    Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  out->mDUF.mX[184UL] = intrm_sf_mf_80;
  out->mDUF.mX[185UL] = zc_int249;
  out->mDUF.mX[186UL] = zc_int258;
  out->mDUF.mX[187UL] = intrm_sf_mf_86;
  out->mDUF.mX[188UL] = zc_int273;
  out->mDUF.mX[189UL] = zc_int276;
  out->mDUF.mX[190UL] = zc_int279;
  out->mDUF.mX[191UL] = zc_int282;
  out->mDUF.mX[192UL] =
    Accumalator_Module_One1_Battery_Table_Based44_stateOfCharge;
  out->mDUF.mX[193UL] = zc_int306;
  out->mDUF.mX[194UL] =
    Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  out->mDUF.mX[195UL] = intrm_sf_mf_103;
  out->mDUF.mX[196UL] = intrm_sf_mf_11;
  out->mDUF.mX[197UL] = intrm_sf_mf_112;
  out->mDUF.mX[198UL] = intrm_sf_mf_113;
  out->mDUF.mX[199UL] =
    Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  out->mDUF.mX[200UL] = zc_int348;
  out->mDUF.mX[201UL] = zc_int354;
  out->mDUF.mX[202UL] = zc_int357;
  out->mDUF.mX[203UL] = zc_int360;
  out->mDUF.mX[204UL] = zc_int369;
  out->mDUF.mX[205UL] =
    Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  out->mDUF.mX[206UL] = zc_int375;
  out->mDUF.mX[207UL] = zc_int378;
  out->mDUF.mX[208UL] = intrm_sf_mf_126;
  out->mDUF.mX[209UL] = intrm_sf_mf_13;
  out->mDUF.mX[210UL] =
    Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge;
  out->mDUF.mX[211UL] = intrm_sf_mf_135;
  out->mDUF.mX[212UL] = zc_int414;
  out->mDUF.mX[213UL] = intrm_sf_mf_138;
  out->mDUF.mX[214UL] = zc_int426;
  out->mDUF.mX[215UL] =
    Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge;
  out->mDUF.mX[216UL] = intrm_sf_mf_145;
  out->mDUF.mX[217UL] = zc_int444;
  out->mDUF.mX[218UL] =
    Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  out->mDUF.mX[219UL] = intrm_sf_mf_15;
  out->mDUF.mX[220UL] = intrm_sf_mf_150;
  out->mDUF.mX[221UL] = intrm_sf_mf_153;
  out->mDUF.mX[222UL] =
    Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  out->mDUF.mX[223UL] = zc_int480;
  out->mDUF.mX[224UL] =
    Accumalator_Module_Three1_Battery_Table_Based53_stateOfCharge;
  out->mDUF.mX[225UL] =
    Accumalator_Module_Two_Battery_Table_Based1_stateOfCharge;
  out->mDUF.mX[226UL] = intrm_sf_mf_33;
  out->mDUF.mX[227UL] =
    Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  out->mDUF.mX[228UL] =
    Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  out->mDUF.mX[229UL] =
    Accumalator_Module_Two_Battery_Table_Based13_stateOfCharge;
  out->mDUF.mX[230UL] =
    Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  out->mDUF.mX[231UL] =
    Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  out->mDUF.mX[232UL] = zc_int537;
  out->mDUF.mX[233UL] = zc_int540;
  out->mDUF.mX[234UL] =
    Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  out->mDUF.mX[235UL] =
    Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  out->mDUF.mX[236UL] =
    Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge;
  out->mDUF.mX[237UL] =
    Accumalator_Module_Two_Battery_Table_Based23_stateOfCharge;
  out->mDUF.mX[238UL] =
    Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge;
  out->mDUF.mX[239UL] = zc_int576;
  out->mDUF.mX[240UL] =
    Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  out->mDUF.mX[241UL] = zc_int585;
  out->mDUF.mX[242UL] =
    Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge;
  out->mDUF.mX[243UL] =
    Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  out->mDUF.mX[244UL] =
    Accumalator_Module_Two_Battery_Table_Based4_stateOfCharge;
  out->mDUF.mX[245UL] = zc_int612;
  out->mDUF.mX[246UL] = zc_int615;
  out->mDUF.mX[247UL] = zc_int618;
  out->mDUF.mX[248UL] = intrm_sf_mf_206;
  out->mDUF.mX[249UL] = zc_int642;
  out->mDUF.mX[250UL] =
    Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  out->mDUF.mX[251UL] = intrm_sf_mf_215;
  out->mDUF.mX[252UL] = intrm_sf_mf_216;
  out->mDUF.mX[253UL] =
    Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  out->mDUF.mX[254UL] = intrm_sf_mf_225;
  out->mDUF.mX[255UL] = intrm_sf_mf_226;
  out->mDUF.mX[256UL] = intrm_sf_mf_227;
  out->mDUF.mX[257UL] = intrm_sf_mf_228;
  out->mDUF.mX[258UL] = zc_int693;
  out->mDUF.mX[259UL] =
    Accumalator_Module_four_Battery_Table_Based16_stateOfCharge;
  out->mDUF.mX[260UL] = intrm_sf_mf_232;
  out->mDUF.mX[261UL] = zc_int708;
  out->mDUF.mX[262UL] = intrm_sf_mf_236;
  out->mDUF.mX[263UL] = intrm_sf_mf_237;
  out->mDUF.mX[264UL] = intrm_sf_mf_238;
  out->mDUF.mX[265UL] = zc_int726;
  out->mDUF.mX[266UL] = intrm_sf_mf_242;
  out->mDUF.mX[267UL] = zc_int744;
  out->mDUF.mX[268UL] = zc_int750;
  out->mDUF.mX[269UL] = intrm_sf_mf_250;
  out->mDUF.mX[270UL] = intrm_sf_mf_251;
  out->mDUF.mX[271UL] = zc_int771;
  out->mDUF.mX[272UL] = zc_int777;
  out->mDUF.mX[273UL] = zc_int780;
  out->mDUF.mX[274UL] = zc_int783;
  out->mDUF.mX[275UL] = zc_int786;
  out->mDUF.mX[276UL] = intrm_sf_mf_262;
  out->mDUF.mX[277UL] =
    Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge;
  out->mDUF.mX[278UL] =
    Accumalator_Module_four_Battery_Table_Based51_stateOfCharge;
  out->mDUF.mX[279UL] = zc_int816;
  (void)LC;
  (void)out;
  return 0;
}
