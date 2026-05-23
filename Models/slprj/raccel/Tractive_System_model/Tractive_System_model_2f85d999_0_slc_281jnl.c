/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Tractive_System_model/Solver Configuration1'.
 */

#include "nesl_rtw_partitioning.h"
#include "Tractive_System_model_2f85d999_0_slc_281_sys_struct.h"
#include "Tractive_System_model_2f85d999_0_slc_281jnl.h"
#include "Tractive_System_model_2f85d999_0_slc_281.h"
#include "Tractive_System_model_2f85d999_0_slc_281_externals.h"
#include "Tractive_System_model_2f85d999_0_slc_281_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Tractive_System_model_2f85d999_0_slc_281jnl(const SwitchedLinearClump
  *sys, const NeDynamicSystemInput *t2888, SlcMethodOutput *out)
{
  static real_T _cg_const_3[40] = { 0.011867, 0.008993, 0.007674, 0.006911,
    0.006648, 0.006648, 0.006528, 0.006157, 0.005996, 0.0073, 0.0109, 0.006456,
    0.005381, 0.005078, 0.005, 0.005044, 0.005511, 0.006407, 0.006522, 0.005367,
    0.0102, 0.007978, 0.006793, 0.0062, 0.006033, 0.005441, 0.0051, 0.005707,
    0.005037, 0.005067, 0.0101, 0.007759, 0.006637, 0.006022, 0.005741, 0.005667,
    0.005311, 0.004911, 0.005859, 0.004733 };

  static real_T _cg_const_1[10] = { 0.1, 0.188889, 0.277778, 0.366667, 0.455556,
    0.544444, 0.633333, 0.722222, 0.811111, 0.9 };

  static real_T _cg_const_2[4] = { 303.15, 305.65, 308.15, 311.15 };

  ETTSf3049b48 t11;
  ETTSf3049b48 t116;
  ETTSf3049b48 t140;
  ETTSf3049b48 t164;
  ETTSf3049b48 t18;
  ETTSf3049b48 t19;
  ETTSf3049b48 t204;
  ETTSf3049b48 t211;
  ETTSf3049b48 t217;
  ETTSf3049b48 t246;
  ETTSf3049b48 t254;
  ETTSf3049b48 t273;
  ETTSf3049b48 t34;
  ETTSf3049b48 t46;
  ETTSf3049b48 t47;
  ETTSf3049b48 t55;
  ETTSf3049b48 t59;
  ETTSf3049b48 t62;
  ETTSf3049b48 t75;
  real_T t2276[146];
  real_T t2277[146];
  real_T nonscalar3[40];
  real_T nonscalar1[10];
  real_T t2331[8];
  real_T t2333[8];
  real_T t2335[8];
  real_T t2332[7];
  real_T t2334[7];
  real_T t2336[7];
  real_T nonscalar2[4];
  real_T t2422[4];
  real_T t2423[4];
  real_T t2424[4];
  real_T t2158[1];
  real_T t476[1];
  real_T Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based29_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based50_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based48_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based19_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based29_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based32_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based58_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based6_stateOfCharge;
  real_T intrm_sf_mf_10;
  real_T intrm_sf_mf_100;
  real_T intrm_sf_mf_103;
  real_T intrm_sf_mf_108;
  real_T intrm_sf_mf_109;
  real_T intrm_sf_mf_110;
  real_T intrm_sf_mf_113;
  real_T intrm_sf_mf_116;
  real_T intrm_sf_mf_119;
  real_T intrm_sf_mf_121;
  real_T intrm_sf_mf_126;
  real_T intrm_sf_mf_127;
  real_T intrm_sf_mf_13;
  real_T intrm_sf_mf_133;
  real_T intrm_sf_mf_137;
  real_T intrm_sf_mf_138;
  real_T intrm_sf_mf_14;
  real_T intrm_sf_mf_143;
  real_T intrm_sf_mf_145;
  real_T intrm_sf_mf_146;
  real_T intrm_sf_mf_150;
  real_T intrm_sf_mf_154;
  real_T intrm_sf_mf_165;
  real_T intrm_sf_mf_166;
  real_T intrm_sf_mf_185;
  real_T intrm_sf_mf_188;
  real_T intrm_sf_mf_190;
  real_T intrm_sf_mf_193;
  real_T intrm_sf_mf_197;
  real_T intrm_sf_mf_199;
  real_T intrm_sf_mf_20;
  real_T intrm_sf_mf_200;
  real_T intrm_sf_mf_206;
  real_T intrm_sf_mf_207;
  real_T intrm_sf_mf_211;
  real_T intrm_sf_mf_213;
  real_T intrm_sf_mf_215;
  real_T intrm_sf_mf_217;
  real_T intrm_sf_mf_218;
  real_T intrm_sf_mf_225;
  real_T intrm_sf_mf_227;
  real_T intrm_sf_mf_228;
  real_T intrm_sf_mf_232;
  real_T intrm_sf_mf_236;
  real_T intrm_sf_mf_237;
  real_T intrm_sf_mf_240;
  real_T intrm_sf_mf_242;
  real_T intrm_sf_mf_244;
  real_T intrm_sf_mf_250;
  real_T intrm_sf_mf_258;
  real_T intrm_sf_mf_259;
  real_T intrm_sf_mf_263;
  real_T intrm_sf_mf_267;
  real_T intrm_sf_mf_268;
  real_T intrm_sf_mf_269;
  real_T intrm_sf_mf_273;
  real_T intrm_sf_mf_275;
  real_T intrm_sf_mf_28;
  real_T intrm_sf_mf_29;
  real_T intrm_sf_mf_33;
  real_T intrm_sf_mf_39;
  real_T intrm_sf_mf_4;
  real_T intrm_sf_mf_42;
  real_T intrm_sf_mf_44;
  real_T intrm_sf_mf_47;
  real_T intrm_sf_mf_5;
  real_T intrm_sf_mf_52;
  real_T intrm_sf_mf_55;
  real_T intrm_sf_mf_61;
  real_T intrm_sf_mf_64;
  real_T intrm_sf_mf_67;
  real_T intrm_sf_mf_69;
  real_T intrm_sf_mf_7;
  real_T intrm_sf_mf_73;
  real_T intrm_sf_mf_75;
  real_T intrm_sf_mf_79;
  real_T intrm_sf_mf_83;
  real_T intrm_sf_mf_86;
  real_T intrm_sf_mf_89;
  real_T intrm_sf_mf_95;
  real_T t2596;
  real_T t2603;
  real_T t2605;
  real_T t2609;
  real_T t2614;
  real_T t2621;
  real_T t2630;
  real_T t2636;
  real_T t2644;
  real_T t2646;
  real_T t2650;
  real_T t2654;
  real_T t2655;
  real_T t2658;
  real_T t2661;
  real_T t2662;
  real_T t2663;
  real_T t2669;
  real_T t2670;
  real_T t2675;
  real_T t2678;
  real_T t2679;
  real_T t2682;
  real_T t2683;
  real_T t2684;
  real_T t2687;
  real_T t2688;
  real_T t2695;
  real_T t2697;
  real_T t2701;
  real_T t2703;
  real_T t2706;
  real_T t2708;
  real_T t2725;
  real_T t2726;
  real_T t2735;
  real_T t2736;
  real_T t2749;
  real_T t2752;
  real_T t2755;
  real_T t2756;
  real_T t2764;
  real_T t2765;
  real_T t2766;
  real_T t2770;
  real_T t2773;
  real_T t2775;
  real_T t2778;
  real_T t2782;
  real_T t2784;
  real_T t2786;
  real_T t2792;
  real_T t2796;
  real_T t2797;
  real_T t2809;
  real_T t2817;
  real_T t2822;
  real_T t2826;
  real_T t2828;
  real_T t2829;
  real_T t2830;
  real_T t2831;
  real_T t2839;
  real_T t2840;
  real_T t2844;
  real_T t2845;
  real_T t2849;
  real_T t2850;
  real_T t2852;
  real_T t2853;
  real_T t2858;
  real_T t2859;
  real_T t2864;
  real_T t2867;
  real_T t2869;
  real_T t2875;
  real_T t2876;
  real_T zc_int102;
  real_T zc_int111;
  real_T zc_int123;
  real_T zc_int132;
  real_T zc_int147;
  real_T zc_int171;
  real_T zc_int177;
  real_T zc_int18;
  real_T zc_int192;
  real_T zc_int258;
  real_T zc_int273;
  real_T zc_int276;
  real_T zc_int279;
  real_T zc_int282;
  real_T zc_int30;
  real_T zc_int336;
  real_T zc_int348;
  real_T zc_int357;
  real_T zc_int360;
  real_T zc_int369;
  real_T zc_int378;
  real_T zc_int39;
  real_T zc_int393;
  real_T zc_int396;
  real_T zc_int426;
  real_T zc_int435;
  real_T zc_int444;
  real_T zc_int480;
  real_T zc_int483;
  real_T zc_int492;
  real_T zc_int504;
  real_T zc_int51;
  real_T zc_int519;
  real_T zc_int537;
  real_T zc_int54;
  real_T zc_int540;
  real_T zc_int552;
  real_T zc_int60;
  real_T zc_int606;
  real_T zc_int612;
  real_T zc_int615;
  real_T zc_int618;
  real_T zc_int651;
  real_T zc_int66;
  real_T zc_int666;
  real_T zc_int669;
  real_T zc_int69;
  real_T zc_int690;
  real_T zc_int708;
  real_T zc_int72;
  real_T zc_int726;
  real_T zc_int744;
  real_T zc_int765;
  real_T zc_int768;
  real_T zc_int771;
  real_T zc_int783;
  real_T zc_int786;
  real_T zc_int789;
  real_T zc_int801;
  real_T zc_int810;
  real_T zc_int816;
  real_T zc_int96;
  real_T zc_int99;
  size_t t312[1];
  size_t t313[1];
  size_t t315[1];
  size_t t2583;
  t476[0UL] = t2888->mX.mX[0UL] * 5.5555555555555558E-5;
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
  nonscalar3[0] = _cg_const_3[0];
  nonscalar3[1] = _cg_const_3[1];
  nonscalar3[2] = _cg_const_3[2];
  nonscalar3[3] = _cg_const_3[3];
  nonscalar3[4] = _cg_const_3[4];
  nonscalar3[5] = _cg_const_3[5];
  nonscalar3[6] = _cg_const_3[6];
  nonscalar3[7] = _cg_const_3[7];
  nonscalar3[8] = _cg_const_3[8];
  nonscalar3[9] = _cg_const_3[9];
  nonscalar3[10] = _cg_const_3[10];
  nonscalar3[11] = _cg_const_3[11];
  nonscalar3[12] = _cg_const_3[12];
  nonscalar3[13] = _cg_const_3[13];
  nonscalar3[14] = _cg_const_3[14];
  nonscalar3[15] = _cg_const_3[15];
  nonscalar3[16] = _cg_const_3[16];
  nonscalar3[17] = _cg_const_3[17];
  nonscalar3[18] = _cg_const_3[18];
  nonscalar3[19] = _cg_const_3[19];
  nonscalar3[20] = _cg_const_3[20];
  nonscalar3[21] = _cg_const_3[21];
  nonscalar3[22] = _cg_const_3[22];
  nonscalar3[23] = _cg_const_3[23];
  nonscalar3[24] = _cg_const_3[24];
  nonscalar3[25] = _cg_const_3[25];
  nonscalar3[26] = _cg_const_3[26];
  nonscalar3[27] = _cg_const_3[27];
  nonscalar3[28] = _cg_const_3[28];
  nonscalar3[29] = _cg_const_3[29];
  nonscalar3[30] = _cg_const_3[30];
  nonscalar3[31] = _cg_const_3[31];
  nonscalar3[32] = _cg_const_3[32];
  nonscalar3[33] = _cg_const_3[33];
  nonscalar3[34] = _cg_const_3[34];
  nonscalar3[35] = _cg_const_3[35];
  nonscalar3[36] = _cg_const_3[36];
  nonscalar3[37] = _cg_const_3[37];
  nonscalar3[38] = _cg_const_3[38];
  nonscalar3[39] = _cg_const_3[39];
  t312[0] = 10UL;
  t313[0] = 1UL;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  t476[0] = 298.15;
  t315[0] = 4UL;
  tlu2_linear_nearest_prelookup(&t246.mField0[0UL], &t246.mField1[0UL],
    &t246.mField2[0UL], &nonscalar2[0UL], &t476[0UL], &t315[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int102 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[11UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int30 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[81UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_10 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[709UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_100 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[715UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based50_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[721UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[735UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_103 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[744UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2701 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[751UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2703 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[757UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[763UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[769UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_108 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[775UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_109 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[87UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2661 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[781UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_110 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[787UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int336 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[793UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2708 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[802UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_113 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[811UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[820UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int348 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[829UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_116 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[837UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[843UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int357 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[851UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_119 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[94UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int360 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[859UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[866UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_121 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[872UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int369 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[878UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[885UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2726 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[894UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int378 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[903UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_126 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[910UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_127 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[917UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2725 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[923UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int39 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[103UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_13 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[929UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int393 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[937UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int396 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[943UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[949UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_133 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[955UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[961UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2736 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[970UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2706 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[979UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_137 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[985UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_138 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[992UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[112UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_14 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[999UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2735 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1005UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int426 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1011UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1019UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_143 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1025UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int435 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1031UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_145 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1038UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_146 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1044UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int444 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1053UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1062UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[119UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2752 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1069UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_150 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1076UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1082UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1088UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2749 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1096UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_154 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1102UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1108UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2755 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1114UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2756 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1120UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1128UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[126UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int480 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1137UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int483 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1144UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1150UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1156UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int492 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1162UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1168UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_165 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1174UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_166 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1180UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int504 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1186UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2764 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1195UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int51 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[132UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2766 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1204UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1213UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1222UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int519 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1230UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2773 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1236UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1244UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1252UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2765 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1259UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2775 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1265UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int537 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1271UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int54 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[138UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int540 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1278UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1287UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1296UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2786 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1303UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int552 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1310UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1316UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_185 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1322UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2782 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1330UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2784 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1336UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_188 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1342UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2614 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[146UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2778 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1348UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_190 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1354UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2792 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1363UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t254.mField0[0UL], &t254.mField1[0UL],
    &t254.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t254.mField0[0UL], &t254.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1372UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_193 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1378UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2796 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1385UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2797 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1392UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1398UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_197 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1404UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1411UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_199 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[20UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int60 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[152UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_20 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1417UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_200 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1423UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int606 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1430UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1436UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int612 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1445UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int615 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1454UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int618 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1461UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_206 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1468UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_207 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1474UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1480UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t47.mField0[0UL], &t47.mField1[0UL],
    &t47.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t47.mField0[0UL], &t47.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2621 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[158UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based29_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1488UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based48_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1494UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t254.mField0[0UL], &t254.mField1[0UL],
    &t254.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t254.mField0[0UL], &t254.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_211 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1500UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t254.mField0[0UL], &t254.mField1[0UL],
    &t254.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t254.mField0[0UL], &t254.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2809 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1506UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t47.mField0[0UL], &t47.mField1[0UL],
    &t47.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t47.mField0[0UL], &t47.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_213 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1512UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1519UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_215 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1527UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t254.mField0[0UL], &t254.mField1[0UL],
    &t254.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t254.mField0[0UL], &t254.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int651 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1534UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_217 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1540UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_218 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1546UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int66 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[164UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2770 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1552UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1558UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int666 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1564UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t47.mField0[0UL], &t47.mField1[0UL],
    &t47.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t47.mField0[0UL], &t47.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int669 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1570UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t254.mField0[0UL], &t254.mField1[0UL],
    &t254.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t254.mField0[0UL], &t254.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1576UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t254.mField0[0UL], &t254.mField1[0UL],
    &t254.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t254.mField0[0UL], &t254.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_four_Battery_Table_Based1_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1585UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t47.mField0[0UL], &t47.mField1[0UL],
    &t47.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t47.mField0[0UL], &t47.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_225 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1594UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2822 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1603UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_227 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1612UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t47.mField0[0UL], &t47.mField1[0UL],
    &t47.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t47.mField0[0UL], &t47.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_228 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1620UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int69 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[170UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int690 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1626UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t47.mField0[0UL], &t47.mField1[0UL],
    &t47.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t47.mField0[0UL], &t47.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2828 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1634UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2831 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1642UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_232 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1649UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2829 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1655UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t254.mField0[0UL], &t254.mField1[0UL],
    &t254.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t254.mField0[0UL], &t254.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_four_Battery_Table_Based19_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1661UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int708 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1668UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_236 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1677UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_237 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1686UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2840 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1693UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int72 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[179UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1700UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_240 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1706UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int726 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1712UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_242 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1720UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2839 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1726UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_244 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1732UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_four_Battery_Table_Based29_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1738UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2845 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1744UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int744 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1753UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2817 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1762UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_four_Battery_Table_Based32_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[188UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2849 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1768UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_250 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1775UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2850 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1782UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2844 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1788UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2852 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1794UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int765 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1802UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int768 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1808UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int771 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1814UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2853 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1821UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_258 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1827UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_259 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[194UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2858 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1836UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int783 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1845UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int786 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1852UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int789 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1859UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_263 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1865UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2864 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1871UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2859 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1879UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int801 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1885UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_267 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1891UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_268 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1897UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_269 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[201UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int810 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1903UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2869 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1910UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int816 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1918UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2867 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1925UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_273 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1931UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_four_Battery_Table_Based58_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1937UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_275 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1943UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_four_Battery_Table_Based6_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1949UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2826 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1955UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2830 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[1961UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2875 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[208UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_28 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[214UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_29 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[29UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2630 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[220UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[228UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int96 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[234UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int99 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[240UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_33 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[247UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[253UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2636 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[262UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int111 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[271UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[278UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[285UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_39 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[38UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_4 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[291UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int123 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[297UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[305UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_42 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[311UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int132 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[317UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_44 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[323UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2644 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[329UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2646 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[337UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_47 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[345UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int147 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[352UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[46UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_5 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[358UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[364UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2603 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[370UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_52 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[376UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2605 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[382UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2609 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[388UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_55 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[394UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int171 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[403UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2654 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[412UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  zc_int177 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[421UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int18 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[52UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2658 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[430UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2655 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[438UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_61 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[444UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2662 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[452UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int192 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[460UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_64 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[467UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2663 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[473UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[479UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_67 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[486UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2670 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[495UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_69 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[60UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_7 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[504UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[511UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2675 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[518UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2669 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[524UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_73 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[530UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[538UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_75 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[544UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[550UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[556UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2678 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[562UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_79 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[68UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[571UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2650 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[580UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2682 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[586UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2684 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[593UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_83 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[600UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  t2679 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[606UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int258 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[612UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL],
    &t315[0UL], &t313[0UL]);
  intrm_sf_mf_86 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[620UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2683 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[626UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2688 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[632UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_89 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[75UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2687 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[639UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int273 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[645UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int276 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[654UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int279 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[663UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  zc_int282 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[670UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t2697 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[677UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  intrm_sf_mf_95 = t2158[0UL];
  t476[0UL] = t2888->mX.mX[683UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[689UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge = t2158[0UL];
  t476[0UL] = t2888->mX.mX[697UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t2158[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  t476[0UL] = t2888->mX.mX[703UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t476[0UL], &t312[0UL], &t313[0UL]);
  tlu2_2d_linear_nearest_value(&t476[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t246.mField0[0UL], &t246.mField2[0UL], &nonscalar3[0UL], &t312[0UL], &t315
    [0UL], &t313[0UL]);
  if (t2888->mM.mX[1UL] != 0) {
    t2876 = 8.200000000000002E-8;
  } else {
    t2876 = zc_int102;
  }

  if (t2888->mM.mX[824UL] != 0) {
    zc_int102 = 8.200000000000002E-8;
  } else {
    zc_int102 = Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge;
  }

  if (t2888->mM.mX[827UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge = t2636;
  }

  if (t2888->mM.mX[829UL] != 0) {
    t2636 = 8.200000000000002E-8;
  } else {
    t2636 = zc_int111;
  }

  if (t2888->mM.mX[831UL] != 0) {
    zc_int111 = 8.200000000000002E-8;
  } else {
    zc_int111 = Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge;
  }

  if (t2888->mM.mX[833UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge =
      Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  }

  if (t2888->mM.mX[835UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge =
      intrm_sf_mf_39;
  }

  if (t2888->mM.mX[847UL] != 0) {
    intrm_sf_mf_39 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_39 = intrm_sf_mf_4;
  }

  if (t2888->mM.mX[838UL] != 0) {
    intrm_sf_mf_4 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_4 = zc_int123;
  }

  if (t2888->mM.mX[840UL] != 0) {
    zc_int123 = 8.200000000000002E-8;
  } else {
    zc_int123 = Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  }

  if (t2888->mM.mX[842UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge =
      intrm_sf_mf_42;
  }

  if (t2888->mM.mX[844UL] != 0) {
    intrm_sf_mf_42 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_42 = zc_int132;
  }

  if (t2888->mM.mX[846UL] != 0) {
    zc_int132 = 8.200000000000002E-8;
  } else {
    zc_int132 = intrm_sf_mf_44;
  }

  if (t2888->mM.mX[849UL] != 0) {
    intrm_sf_mf_44 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_44 = t2644;
  }

  if (t2888->mM.mX[851UL] != 0) {
    t2644 = 8.200000000000002E-8;
  } else {
    t2644 = t2646;
  }

  if (t2888->mM.mX[853UL] != 0) {
    t2646 = 8.200000000000002E-8;
  } else {
    t2646 = intrm_sf_mf_47;
  }

  if (t2888->mM.mX[855UL] != 0) {
    intrm_sf_mf_47 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_47 = zc_int147;
  }

  if (t2888->mM.mX[857UL] != 0) {
    zc_int147 = 8.200000000000002E-8;
  } else {
    zc_int147 = Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge;
  }

  if (t2888->mM.mX[13UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge = intrm_sf_mf_5;
  }

  if (t2888->mM.mX[4UL] != 0) {
    intrm_sf_mf_5 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_5 = Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge;
  }

  if (t2888->mM.mX[6UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge = t2603;
  }

  if (t2888->mM.mX[8UL] != 0) {
    t2603 = 8.200000000000002E-8;
  } else {
    t2603 = intrm_sf_mf_52;
  }

  if (t2888->mM.mX[10UL] != 0) {
    intrm_sf_mf_52 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_52 = t2605;
  }

  if (t2888->mM.mX[12UL] != 0) {
    t2605 = 8.200000000000002E-8;
  } else {
    t2605 = t2609;
  }

  if (t2888->mM.mX[15UL] != 0) {
    t2609 = 8.200000000000002E-8;
  } else {
    t2609 = intrm_sf_mf_55;
  }

  if (t2888->mM.mX[21UL] != 0) {
    intrm_sf_mf_55 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_55 = zc_int171;
  }

  if (t2888->mM.mX[43UL] != 0) {
    zc_int171 = 8.200000000000002E-8;
  } else {
    zc_int171 = t2654;
  }

  if (t2888->mM.mX[65UL] != 0) {
    t2654 = 8.200000000000002E-8;
  } else {
    t2654 = zc_int177;
  }

  if (t2888->mM.mX[87UL] != 0) {
    zc_int177 = 8.200000000000002E-8;
  } else {
    zc_int177 = zc_int18;
  }

  if (t2888->mM.mX[209UL] != 0) {
    zc_int18 = 8.200000000000002E-8;
  } else {
    zc_int18 = t2658;
  }

  if (t2888->mM.mX[110UL] != 0) {
    t2658 = 8.200000000000002E-8;
  } else {
    t2658 = t2655;
  }

  if (t2888->mM.mX[132UL] != 0) {
    t2655 = 8.200000000000002E-8;
  } else {
    t2655 = intrm_sf_mf_61;
  }

  if (t2888->mM.mX[154UL] != 0) {
    intrm_sf_mf_61 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_61 = t2662;
  }

  if (t2888->mM.mX[176UL] != 0) {
    t2662 = 8.200000000000002E-8;
  } else {
    t2662 = zc_int192;
  }

  if (t2888->mM.mX[198UL] != 0) {
    zc_int192 = 8.200000000000002E-8;
  } else {
    zc_int192 = intrm_sf_mf_64;
  }

  if (t2888->mM.mX[221UL] != 0) {
    intrm_sf_mf_64 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_64 = t2663;
  }

  if (t2888->mM.mX[243UL] != 0) {
    t2663 = 8.200000000000002E-8;
  } else {
    t2663 = Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge;
  }

  if (t2888->mM.mX[265UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge = intrm_sf_mf_67;
  }

  if (t2888->mM.mX[287UL] != 0) {
    intrm_sf_mf_67 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_67 = t2670;
  }

  if (t2888->mM.mX[309UL] != 0) {
    t2670 = 8.200000000000002E-8;
  } else {
    t2670 = intrm_sf_mf_69;
  }

  if (t2888->mM.mX[349UL] != 0) {
    intrm_sf_mf_69 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_69 = intrm_sf_mf_7;
  }

  if (t2888->mM.mX[332UL] != 0) {
    intrm_sf_mf_7 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_7 = Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge;
  }

  if (t2888->mM.mX[342UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge = t2675;
  }

  if (t2888->mM.mX[344UL] != 0) {
    t2675 = 8.200000000000002E-8;
  } else {
    t2675 = t2669;
  }

  if (t2888->mM.mX[346UL] != 0) {
    t2669 = 8.200000000000002E-8;
  } else {
    t2669 = intrm_sf_mf_73;
  }

  if (t2888->mM.mX[348UL] != 0) {
    intrm_sf_mf_73 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_73 = Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  }

  if (t2888->mM.mX[351UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge = intrm_sf_mf_75;
  }

  if (t2888->mM.mX[353UL] != 0) {
    intrm_sf_mf_75 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_75 = Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge;
  }

  if (t2888->mM.mX[355UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge =
      Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge;
  }

  if (t2888->mM.mX[357UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge = t2678;
  }

  if (t2888->mM.mX[359UL] != 0) {
    t2678 = 8.200000000000002E-8;
  } else {
    t2678 = intrm_sf_mf_79;
  }

  if (t2888->mM.mX[371UL] != 0) {
    intrm_sf_mf_79 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_79 =
      Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  }

  if (t2888->mM.mX[362UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge = t2650;
  }

  if (t2888->mM.mX[364UL] != 0) {
    t2650 = 8.200000000000002E-8;
  } else {
    t2650 = t2682;
  }

  if (t2888->mM.mX[366UL] != 0) {
    t2682 = 8.200000000000002E-8;
  } else {
    t2682 = t2684;
  }

  if (t2888->mM.mX[368UL] != 0) {
    t2684 = 8.200000000000002E-8;
  } else {
    t2684 = intrm_sf_mf_83;
  }

  if (t2888->mM.mX[370UL] != 0) {
    intrm_sf_mf_83 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_83 = t2679;
  }

  if (t2888->mM.mX[373UL] != 0) {
    t2679 = 8.200000000000002E-8;
  } else {
    t2679 = zc_int258;
  }

  if (t2888->mM.mX[375UL] != 0) {
    zc_int258 = 8.200000000000002E-8;
  } else {
    zc_int258 = intrm_sf_mf_86;
  }

  if (t2888->mM.mX[377UL] != 0) {
    intrm_sf_mf_86 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_86 = t2683;
  }

  if (t2888->mM.mX[379UL] != 0) {
    t2683 = 8.200000000000002E-8;
  } else {
    t2683 = t2688;
  }

  if (t2888->mM.mX[381UL] != 0) {
    t2688 = 8.200000000000002E-8;
  } else {
    t2688 = intrm_sf_mf_89;
  }

  if (t2888->mM.mX[393UL] != 0) {
    intrm_sf_mf_89 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_89 = t2687;
  }

  if (t2888->mM.mX[384UL] != 0) {
    t2687 = 8.200000000000002E-8;
  } else {
    t2687 = zc_int273;
  }

  if (t2888->mM.mX[386UL] != 0) {
    zc_int273 = 8.200000000000002E-8;
  } else {
    zc_int273 = zc_int276;
  }

  if (t2888->mM.mX[388UL] != 0) {
    zc_int276 = 8.200000000000002E-8;
  } else {
    zc_int276 = zc_int279;
  }

  if (t2888->mM.mX[390UL] != 0) {
    zc_int279 = 8.200000000000002E-8;
  } else {
    zc_int279 = zc_int282;
  }

  if (t2888->mM.mX[392UL] != 0) {
    zc_int282 = 8.200000000000002E-8;
  } else {
    zc_int282 = t2697;
  }

  if (t2888->mM.mX[395UL] != 0) {
    t2697 = 8.200000000000002E-8;
  } else {
    t2697 = intrm_sf_mf_95;
  }

  if (t2888->mM.mX[397UL] != 0) {
    intrm_sf_mf_95 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_95 = Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge;
  }

  if (t2888->mM.mX[399UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge =
      Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge;
  }

  if (t2888->mM.mX[401UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge = t2158[0UL];
  }

  if (t2888->mM.mX[403UL] != 0) {
    t2695 = 8.200000000000002E-8;
  } else {
    t2695 = t476[0UL];
  }

  if (t2888->mM.mX[515UL] != 0) {
    t2596 = 8.200000000000002E-8;
  } else {
    t2596 = zc_int30;
  }

  if (t2888->mM.mX[416UL] != 0) {
    zc_int30 = 8.200000000000002E-8;
  } else {
    zc_int30 = intrm_sf_mf_10;
  }

  if (t2888->mM.mX[407UL] != 0) {
    intrm_sf_mf_10 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_10 = intrm_sf_mf_100;
  }

  if (t2888->mM.mX[409UL] != 0) {
    intrm_sf_mf_100 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_100 =
      Accumalator_Module_One1_Battery_Table_Based50_stateOfCharge;
  }

  if (t2888->mM.mX[411UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based50_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based50_stateOfCharge =
      Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  }

  if (t2888->mM.mX[413UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge =
      intrm_sf_mf_103;
  }

  if (t2888->mM.mX[415UL] != 0) {
    intrm_sf_mf_103 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_103 = t2701;
  }

  if (t2888->mM.mX[418UL] != 0) {
    t2701 = 8.200000000000002E-8;
  } else {
    t2701 = t2703;
  }

  if (t2888->mM.mX[420UL] != 0) {
    t2703 = 8.200000000000002E-8;
  } else {
    t2703 = Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge;
  }

  if (t2888->mM.mX[422UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge =
      Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge;
  }

  if (t2888->mM.mX[424UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge =
      intrm_sf_mf_108;
  }

  if (t2888->mM.mX[426UL] != 0) {
    intrm_sf_mf_108 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_108 = intrm_sf_mf_109;
  }

  if (t2888->mM.mX[438UL] != 0) {
    intrm_sf_mf_109 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_109 = t2661;
  }

  if (t2888->mM.mX[429UL] != 0) {
    t2661 = 8.200000000000002E-8;
  } else {
    t2661 = intrm_sf_mf_110;
  }

  if (t2888->mM.mX[431UL] != 0) {
    intrm_sf_mf_110 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_110 = zc_int336;
  }

  if (t2888->mM.mX[433UL] != 0) {
    zc_int336 = 8.200000000000002E-8;
  } else {
    zc_int336 = t2708;
  }

  if (t2888->mM.mX[435UL] != 0) {
    t2708 = 8.200000000000002E-8;
  } else {
    t2708 = intrm_sf_mf_113;
  }

  if (t2888->mM.mX[437UL] != 0) {
    intrm_sf_mf_113 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_113 =
      Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  }

  if (t2888->mM.mX[440UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge = zc_int348;
  }

  if (t2888->mM.mX[442UL] != 0) {
    zc_int348 = 8.200000000000002E-8;
  } else {
    zc_int348 = intrm_sf_mf_116;
  }

  if (t2888->mM.mX[444UL] != 0) {
    intrm_sf_mf_116 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_116 =
      Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge;
  }

  if (t2888->mM.mX[446UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge = zc_int357;
  }

  if (t2888->mM.mX[448UL] != 0) {
    zc_int357 = 8.200000000000002E-8;
  } else {
    zc_int357 = intrm_sf_mf_119;
  }

  if (t2888->mM.mX[460UL] != 0) {
    intrm_sf_mf_119 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_119 = zc_int360;
  }

  if (t2888->mM.mX[451UL] != 0) {
    zc_int360 = 8.200000000000002E-8;
  } else {
    zc_int360 = Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge;
  }

  if (t2888->mM.mX[453UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge =
      intrm_sf_mf_121;
  }

  if (t2888->mM.mX[455UL] != 0) {
    intrm_sf_mf_121 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_121 = zc_int369;
  }

  if (t2888->mM.mX[457UL] != 0) {
    zc_int369 = 8.200000000000002E-8;
  } else {
    zc_int369 = Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  }

  if (t2888->mM.mX[459UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge = t2726;
  }

  if (t2888->mM.mX[462UL] != 0) {
    t2726 = 8.200000000000002E-8;
  } else {
    t2726 = zc_int378;
  }

  if (t2888->mM.mX[464UL] != 0) {
    zc_int378 = 8.200000000000002E-8;
  } else {
    zc_int378 = intrm_sf_mf_126;
  }

  if (t2888->mM.mX[466UL] != 0) {
    intrm_sf_mf_126 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_126 = intrm_sf_mf_127;
  }

  if (t2888->mM.mX[468UL] != 0) {
    intrm_sf_mf_127 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_127 = t2725;
  }

  if (t2888->mM.mX[470UL] != 0) {
    t2725 = 8.200000000000002E-8;
  } else {
    t2725 = zc_int39;
  }

  if (t2888->mM.mX[482UL] != 0) {
    zc_int39 = 8.200000000000002E-8;
  } else {
    zc_int39 = intrm_sf_mf_13;
  }

  if (t2888->mM.mX[473UL] != 0) {
    intrm_sf_mf_13 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_13 = zc_int393;
  }

  if (t2888->mM.mX[475UL] != 0) {
    zc_int393 = 8.200000000000002E-8;
  } else {
    zc_int393 = zc_int396;
  }

  if (t2888->mM.mX[477UL] != 0) {
    zc_int396 = 8.200000000000002E-8;
  } else {
    zc_int396 = Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge;
  }

  if (t2888->mM.mX[479UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge =
      intrm_sf_mf_133;
  }

  if (t2888->mM.mX[481UL] != 0) {
    intrm_sf_mf_133 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_133 =
      Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  }

  if (t2888->mM.mX[484UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge = t2736;
  }

  if (t2888->mM.mX[486UL] != 0) {
    t2736 = 8.200000000000002E-8;
  } else {
    t2736 = t2706;
  }

  if (t2888->mM.mX[488UL] != 0) {
    t2706 = 8.200000000000002E-8;
  } else {
    t2706 = intrm_sf_mf_137;
  }

  if (t2888->mM.mX[490UL] != 0) {
    intrm_sf_mf_137 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_137 = intrm_sf_mf_138;
  }

  if (t2888->mM.mX[492UL] != 0) {
    intrm_sf_mf_138 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_138 =
      Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge;
  }

  if (t2888->mM.mX[504UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge =
      intrm_sf_mf_14;
  }

  if (t2888->mM.mX[495UL] != 0) {
    intrm_sf_mf_14 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_14 = t2735;
  }

  if (t2888->mM.mX[497UL] != 0) {
    t2735 = 8.200000000000002E-8;
  } else {
    t2735 = zc_int426;
  }

  if (t2888->mM.mX[499UL] != 0) {
    zc_int426 = 8.200000000000002E-8;
  } else {
    zc_int426 = Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge;
  }

  if (t2888->mM.mX[501UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge =
      intrm_sf_mf_143;
  }

  if (t2888->mM.mX[503UL] != 0) {
    intrm_sf_mf_143 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_143 = zc_int435;
  }

  if (t2888->mM.mX[506UL] != 0) {
    zc_int435 = 8.200000000000002E-8;
  } else {
    zc_int435 = intrm_sf_mf_145;
  }

  if (t2888->mM.mX[508UL] != 0) {
    intrm_sf_mf_145 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_145 = intrm_sf_mf_146;
  }

  if (t2888->mM.mX[510UL] != 0) {
    intrm_sf_mf_146 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_146 = zc_int444;
  }

  if (t2888->mM.mX[512UL] != 0) {
    zc_int444 = 8.200000000000002E-8;
  } else {
    zc_int444 = Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  }

  if (t2888->mM.mX[514UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge =
      Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge;
  }

  if (t2888->mM.mX[527UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge = t2752;
  }

  if (t2888->mM.mX[518UL] != 0) {
    t2752 = 8.200000000000002E-8;
  } else {
    t2752 = intrm_sf_mf_150;
  }

  if (t2888->mM.mX[520UL] != 0) {
    intrm_sf_mf_150 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_150 =
      Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge;
  }

  if (t2888->mM.mX[522UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge =
      Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge;
  }

  if (t2888->mM.mX[524UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge = t2749;
  }

  if (t2888->mM.mX[526UL] != 0) {
    t2749 = 8.200000000000002E-8;
  } else {
    t2749 = intrm_sf_mf_154;
  }

  if (t2888->mM.mX[529UL] != 0) {
    intrm_sf_mf_154 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_154 =
      Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge;
  }

  if (t2888->mM.mX[531UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge = t2755;
  }

  if (t2888->mM.mX[533UL] != 0) {
    t2755 = 8.200000000000002E-8;
  } else {
    t2755 = t2756;
  }

  if (t2888->mM.mX[535UL] != 0) {
    t2756 = 8.200000000000002E-8;
  } else {
    t2756 = Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  }

  if (t2888->mM.mX[537UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge =
      Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge;
  }

  if (t2888->mM.mX[549UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge = zc_int480;
  }

  if (t2888->mM.mX[540UL] != 0) {
    zc_int480 = 8.200000000000002E-8;
  } else {
    zc_int480 = zc_int483;
  }

  if (t2888->mM.mX[542UL] != 0) {
    zc_int483 = 8.200000000000002E-8;
  } else {
    zc_int483 = Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge;
  }

  if (t2888->mM.mX[544UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge =
      Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge;
  }

  if (t2888->mM.mX[546UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge = zc_int492;
  }

  if (t2888->mM.mX[548UL] != 0) {
    zc_int492 = 8.200000000000002E-8;
  } else {
    zc_int492 = Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge;
  }

  if (t2888->mM.mX[551UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge =
      intrm_sf_mf_165;
  }

  if (t2888->mM.mX[553UL] != 0) {
    intrm_sf_mf_165 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_165 = intrm_sf_mf_166;
  }

  if (t2888->mM.mX[555UL] != 0) {
    intrm_sf_mf_166 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_166 = zc_int504;
  }

  if (t2888->mM.mX[557UL] != 0) {
    zc_int504 = 8.200000000000002E-8;
  } else {
    zc_int504 = t2764;
  }

  if (t2888->mM.mX[559UL] != 0) {
    t2764 = 8.200000000000002E-8;
  } else {
    t2764 = zc_int51;
  }

  if (t2888->mM.mX[571UL] != 0) {
    zc_int51 = 8.200000000000002E-8;
  } else {
    zc_int51 = t2766;
  }

  if (t2888->mM.mX[562UL] != 0) {
    t2766 = 8.200000000000002E-8;
  } else {
    t2766 = Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  }

  if (t2888->mM.mX[564UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  }

  if (t2888->mM.mX[566UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge = zc_int519;
  }

  if (t2888->mM.mX[568UL] != 0) {
    zc_int519 = 8.200000000000002E-8;
  } else {
    zc_int519 = t2773;
  }

  if (t2888->mM.mX[570UL] != 0) {
    t2773 = 8.200000000000002E-8;
  } else {
    t2773 = Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  }

  if (t2888->mM.mX[573UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  }

  if (t2888->mM.mX[575UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge = t2765;
  }

  if (t2888->mM.mX[577UL] != 0) {
    t2765 = 8.200000000000002E-8;
  } else {
    t2765 = t2775;
  }

  if (t2888->mM.mX[579UL] != 0) {
    t2775 = 8.200000000000002E-8;
  } else {
    t2775 = zc_int537;
  }

  if (t2888->mM.mX[581UL] != 0) {
    zc_int537 = 8.200000000000002E-8;
  } else {
    zc_int537 = zc_int54;
  }

  if (t2888->mM.mX[593UL] != 0) {
    zc_int54 = 8.200000000000002E-8;
  } else {
    zc_int54 = zc_int540;
  }

  if (t2888->mM.mX[584UL] != 0) {
    zc_int540 = 8.200000000000002E-8;
  } else {
    zc_int540 = Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  }

  if (t2888->mM.mX[586UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  }

  if (t2888->mM.mX[588UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge = t2786;
  }

  if (t2888->mM.mX[590UL] != 0) {
    t2786 = 8.200000000000002E-8;
  } else {
    t2786 = zc_int552;
  }

  if (t2888->mM.mX[592UL] != 0) {
    zc_int552 = 8.200000000000002E-8;
  } else {
    zc_int552 = Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge;
  }

  if (t2888->mM.mX[595UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge = intrm_sf_mf_185;
  }

  if (t2888->mM.mX[597UL] != 0) {
    intrm_sf_mf_185 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_185 = t2782;
  }

  if (t2888->mM.mX[599UL] != 0) {
    t2782 = 8.200000000000002E-8;
  } else {
    t2782 = t2784;
  }

  if (t2888->mM.mX[601UL] != 0) {
    t2784 = 8.200000000000002E-8;
  } else {
    t2784 = intrm_sf_mf_188;
  }

  if (t2888->mM.mX[603UL] != 0) {
    intrm_sf_mf_188 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_188 = t2614;
  }

  if (t2888->mM.mX[615UL] != 0) {
    t2614 = 8.200000000000002E-8;
  } else {
    t2614 = t2778;
  }

  if (t2888->mM.mX[606UL] != 0) {
    t2778 = 8.200000000000002E-8;
  } else {
    t2778 = intrm_sf_mf_190;
  }

  if (t2888->mM.mX[608UL] != 0) {
    intrm_sf_mf_190 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_190 = t2792;
  }

  if (t2888->mM.mX[610UL] != 0) {
    t2792 = 8.200000000000002E-8;
  } else {
    t2792 = Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  }

  if (t2888->mM.mX[612UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge = intrm_sf_mf_193;
  }

  if (t2888->mM.mX[614UL] != 0) {
    intrm_sf_mf_193 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_193 = t2796;
  }

  if (t2888->mM.mX[617UL] != 0) {
    t2796 = 8.200000000000002E-8;
  } else {
    t2796 = t2797;
  }

  if (t2888->mM.mX[619UL] != 0) {
    t2797 = 8.200000000000002E-8;
  } else {
    t2797 = Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge;
  }

  if (t2888->mM.mX[621UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge = intrm_sf_mf_197;
  }

  if (t2888->mM.mX[623UL] != 0) {
    intrm_sf_mf_197 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_197 = Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  }

  if (t2888->mM.mX[625UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge = intrm_sf_mf_199;
  }

  if (t2888->mM.mX[737UL] != 0) {
    intrm_sf_mf_199 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_199 = zc_int60;
  }

  if (t2888->mM.mX[638UL] != 0) {
    zc_int60 = 8.200000000000002E-8;
  } else {
    zc_int60 = intrm_sf_mf_20;
  }

  if (t2888->mM.mX[629UL] != 0) {
    intrm_sf_mf_20 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_20 = intrm_sf_mf_200;
  }

  if (t2888->mM.mX[631UL] != 0) {
    intrm_sf_mf_200 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_200 = zc_int606;
  }

  if (t2888->mM.mX[633UL] != 0) {
    zc_int606 = 8.200000000000002E-8;
  } else {
    zc_int606 = Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge;
  }

  if (t2888->mM.mX[635UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge = zc_int612;
  }

  if (t2888->mM.mX[637UL] != 0) {
    zc_int612 = 8.200000000000002E-8;
  } else {
    zc_int612 = zc_int615;
  }

  if (t2888->mM.mX[640UL] != 0) {
    zc_int615 = 8.200000000000002E-8;
  } else {
    zc_int615 = zc_int618;
  }

  if (t2888->mM.mX[642UL] != 0) {
    zc_int618 = 8.200000000000002E-8;
  } else {
    zc_int618 = intrm_sf_mf_206;
  }

  if (t2888->mM.mX[644UL] != 0) {
    intrm_sf_mf_206 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_206 = intrm_sf_mf_207;
  }

  if (t2888->mM.mX[646UL] != 0) {
    intrm_sf_mf_207 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_207 = Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge;
  }

  if (t2888->mM.mX[648UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge = t2621;
  }

  if (t2888->mM.mX[660UL] != 0) {
    t2621 = 8.200000000000002E-8;
  } else {
    t2621 = Accumalator_Module_Five1_Battery_Table_Based29_stateOfCharge;
  }

  if (t2888->mM.mX[651UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based29_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based29_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based48_stateOfCharge;
  }

  if (t2888->mM.mX[653UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based48_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based48_stateOfCharge = intrm_sf_mf_211;
  }

  if (t2888->mM.mX[655UL] != 0) {
    intrm_sf_mf_211 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_211 = t2809;
  }

  if (t2888->mM.mX[657UL] != 0) {
    t2809 = 8.200000000000002E-8;
  } else {
    t2809 = intrm_sf_mf_213;
  }

  if (t2888->mM.mX[659UL] != 0) {
    intrm_sf_mf_213 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_213 = Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  }

  if (t2888->mM.mX[662UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge = intrm_sf_mf_215;
  }

  if (t2888->mM.mX[664UL] != 0) {
    intrm_sf_mf_215 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_215 = zc_int651;
  }

  if (t2888->mM.mX[666UL] != 0) {
    zc_int651 = 8.200000000000002E-8;
  } else {
    zc_int651 = intrm_sf_mf_217;
  }

  if (t2888->mM.mX[668UL] != 0) {
    intrm_sf_mf_217 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_217 = intrm_sf_mf_218;
  }

  if (t2888->mM.mX[670UL] != 0) {
    intrm_sf_mf_218 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_218 = zc_int66;
  }

  if (t2888->mM.mX[682UL] != 0) {
    zc_int66 = 8.200000000000002E-8;
  } else {
    zc_int66 = t2770;
  }

  if (t2888->mM.mX[673UL] != 0) {
    t2770 = 8.200000000000002E-8;
  } else {
    t2770 = Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge;
  }

  if (t2888->mM.mX[675UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge = zc_int666;
  }

  if (t2888->mM.mX[677UL] != 0) {
    zc_int666 = 8.200000000000002E-8;
  } else {
    zc_int666 = zc_int669;
  }

  if (t2888->mM.mX[679UL] != 0) {
    zc_int669 = 8.200000000000002E-8;
  } else {
    zc_int669 = Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge;
  }

  if (t2888->mM.mX[681UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge =
      Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  }

  if (t2888->mM.mX[684UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based1_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based1_stateOfCharge = intrm_sf_mf_225;
  }

  if (t2888->mM.mX[686UL] != 0) {
    intrm_sf_mf_225 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_225 = t2822;
  }

  if (t2888->mM.mX[688UL] != 0) {
    t2822 = 8.200000000000002E-8;
  } else {
    t2822 = intrm_sf_mf_227;
  }

  if (t2888->mM.mX[690UL] != 0) {
    intrm_sf_mf_227 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_227 = intrm_sf_mf_228;
  }

  if (t2888->mM.mX[692UL] != 0) {
    intrm_sf_mf_228 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_228 = zc_int69;
  }

  if (t2888->mM.mX[704UL] != 0) {
    zc_int69 = 8.200000000000002E-8;
  } else {
    zc_int69 = zc_int690;
  }

  if (t2888->mM.mX[695UL] != 0) {
    zc_int690 = 8.200000000000002E-8;
  } else {
    zc_int690 = t2828;
  }

  if (t2888->mM.mX[697UL] != 0) {
    t2828 = 8.200000000000002E-8;
  } else {
    t2828 = t2831;
  }

  if (t2888->mM.mX[699UL] != 0) {
    t2831 = 8.200000000000002E-8;
  } else {
    t2831 = intrm_sf_mf_232;
  }

  if (t2888->mM.mX[701UL] != 0) {
    intrm_sf_mf_232 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_232 = t2829;
  }

  if (t2888->mM.mX[703UL] != 0) {
    t2829 = 8.200000000000002E-8;
  } else {
    t2829 = Accumalator_Module_four_Battery_Table_Based19_stateOfCharge;
  }

  if (t2888->mM.mX[706UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based19_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based19_stateOfCharge = zc_int708;
  }

  if (t2888->mM.mX[708UL] != 0) {
    zc_int708 = 8.200000000000002E-8;
  } else {
    zc_int708 = intrm_sf_mf_236;
  }

  if (t2888->mM.mX[710UL] != 0) {
    intrm_sf_mf_236 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_236 = intrm_sf_mf_237;
  }

  if (t2888->mM.mX[712UL] != 0) {
    intrm_sf_mf_237 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_237 = t2840;
  }

  if (t2888->mM.mX[714UL] != 0) {
    t2840 = 8.200000000000002E-8;
  } else {
    t2840 = zc_int72;
  }

  if (t2888->mM.mX[726UL] != 0) {
    zc_int72 = 8.200000000000002E-8;
  } else {
    zc_int72 = Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge;
  }

  if (t2888->mM.mX[717UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge =
      intrm_sf_mf_240;
  }

  if (t2888->mM.mX[719UL] != 0) {
    intrm_sf_mf_240 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_240 = zc_int726;
  }

  if (t2888->mM.mX[721UL] != 0) {
    zc_int726 = 8.200000000000002E-8;
  } else {
    zc_int726 = intrm_sf_mf_242;
  }

  if (t2888->mM.mX[723UL] != 0) {
    intrm_sf_mf_242 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_242 = t2839;
  }

  if (t2888->mM.mX[725UL] != 0) {
    t2839 = 8.200000000000002E-8;
  } else {
    t2839 = intrm_sf_mf_244;
  }

  if (t2888->mM.mX[728UL] != 0) {
    intrm_sf_mf_244 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_244 =
      Accumalator_Module_four_Battery_Table_Based29_stateOfCharge;
  }

  if (t2888->mM.mX[730UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based29_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based29_stateOfCharge = t2845;
  }

  if (t2888->mM.mX[732UL] != 0) {
    t2845 = 8.200000000000002E-8;
  } else {
    t2845 = zc_int744;
  }

  if (t2888->mM.mX[734UL] != 0) {
    zc_int744 = 8.200000000000002E-8;
  } else {
    zc_int744 = t2817;
  }

  if (t2888->mM.mX[736UL] != 0) {
    t2817 = 8.200000000000002E-8;
  } else {
    t2817 = Accumalator_Module_four_Battery_Table_Based32_stateOfCharge;
  }

  if (t2888->mM.mX[749UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based32_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based32_stateOfCharge = t2849;
  }

  if (t2888->mM.mX[740UL] != 0) {
    t2849 = 8.200000000000002E-8;
  } else {
    t2849 = intrm_sf_mf_250;
  }

  if (t2888->mM.mX[742UL] != 0) {
    intrm_sf_mf_250 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_250 = t2850;
  }

  if (t2888->mM.mX[744UL] != 0) {
    t2850 = 8.200000000000002E-8;
  } else {
    t2850 = t2844;
  }

  if (t2888->mM.mX[746UL] != 0) {
    t2844 = 8.200000000000002E-8;
  } else {
    t2844 = t2852;
  }

  if (t2888->mM.mX[748UL] != 0) {
    t2852 = 8.200000000000002E-8;
  } else {
    t2852 = zc_int765;
  }

  if (t2888->mM.mX[751UL] != 0) {
    zc_int765 = 8.200000000000002E-8;
  } else {
    zc_int765 = zc_int768;
  }

  if (t2888->mM.mX[753UL] != 0) {
    zc_int768 = 8.200000000000002E-8;
  } else {
    zc_int768 = zc_int771;
  }

  if (t2888->mM.mX[755UL] != 0) {
    zc_int771 = 8.200000000000002E-8;
  } else {
    zc_int771 = t2853;
  }

  if (t2888->mM.mX[757UL] != 0) {
    t2853 = 8.200000000000002E-8;
  } else {
    t2853 = intrm_sf_mf_258;
  }

  if (t2888->mM.mX[759UL] != 0) {
    intrm_sf_mf_258 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_258 = intrm_sf_mf_259;
  }

  if (t2888->mM.mX[771UL] != 0) {
    intrm_sf_mf_259 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_259 = t2858;
  }

  if (t2888->mM.mX[762UL] != 0) {
    t2858 = 8.200000000000002E-8;
  } else {
    t2858 = zc_int783;
  }

  if (t2888->mM.mX[764UL] != 0) {
    zc_int783 = 8.200000000000002E-8;
  } else {
    zc_int783 = zc_int786;
  }

  if (t2888->mM.mX[766UL] != 0) {
    zc_int786 = 8.200000000000002E-8;
  } else {
    zc_int786 = zc_int789;
  }

  if (t2888->mM.mX[768UL] != 0) {
    zc_int789 = 8.200000000000002E-8;
  } else {
    zc_int789 = intrm_sf_mf_263;
  }

  if (t2888->mM.mX[770UL] != 0) {
    intrm_sf_mf_263 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_263 = t2864;
  }

  if (t2888->mM.mX[773UL] != 0) {
    t2864 = 8.200000000000002E-8;
  } else {
    t2864 = t2859;
  }

  if (t2888->mM.mX[775UL] != 0) {
    t2859 = 8.200000000000002E-8;
  } else {
    t2859 = zc_int801;
  }

  if (t2888->mM.mX[777UL] != 0) {
    zc_int801 = 8.200000000000002E-8;
  } else {
    zc_int801 = intrm_sf_mf_267;
  }

  if (t2888->mM.mX[779UL] != 0) {
    intrm_sf_mf_267 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_267 = intrm_sf_mf_268;
  }

  if (t2888->mM.mX[781UL] != 0) {
    intrm_sf_mf_268 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_268 = intrm_sf_mf_269;
  }

  if (t2888->mM.mX[793UL] != 0) {
    intrm_sf_mf_269 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_269 = zc_int810;
  }

  if (t2888->mM.mX[784UL] != 0) {
    zc_int810 = 8.200000000000002E-8;
  } else {
    zc_int810 = t2869;
  }

  if (t2888->mM.mX[786UL] != 0) {
    t2869 = 8.200000000000002E-8;
  } else {
    t2869 = zc_int816;
  }

  if (t2888->mM.mX[788UL] != 0) {
    zc_int816 = 8.200000000000002E-8;
  } else {
    zc_int816 = t2867;
  }

  if (t2888->mM.mX[790UL] != 0) {
    t2867 = 8.200000000000002E-8;
  } else {
    t2867 = intrm_sf_mf_273;
  }

  if (t2888->mM.mX[792UL] != 0) {
    intrm_sf_mf_273 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_273 =
      Accumalator_Module_four_Battery_Table_Based58_stateOfCharge;
  }

  if (t2888->mM.mX[795UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based58_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based58_stateOfCharge =
      intrm_sf_mf_275;
  }

  if (t2888->mM.mX[797UL] != 0) {
    intrm_sf_mf_275 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_275 = Accumalator_Module_four_Battery_Table_Based6_stateOfCharge;
  }

  if (t2888->mM.mX[799UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based6_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based6_stateOfCharge = t2826;
  }

  if (t2888->mM.mX[801UL] != 0) {
    t2826 = 8.200000000000002E-8;
  } else {
    t2826 = t2830;
  }

  if (t2888->mM.mX[803UL] != 0) {
    t2830 = 8.200000000000002E-8;
  } else {
    t2830 = t2875;
  }

  if (t2888->mM.mX[811UL] != 0) {
    t2875 = 8.200000000000002E-8;
  } else {
    t2875 = intrm_sf_mf_28;
  }

  if (t2888->mM.mX[813UL] != 0) {
    intrm_sf_mf_28 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_28 = intrm_sf_mf_29;
  }

  if (t2888->mM.mX[825UL] != 0) {
    intrm_sf_mf_29 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_29 = t2630;
  }

  if (t2888->mM.mX[816UL] != 0) {
    t2630 = 8.200000000000002E-8;
  } else {
    t2630 = Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge;
  }

  if (t2888->mM.mX[818UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge = zc_int96;
  }

  if (t2888->mM.mX[820UL] != 0) {
    zc_int96 = 8.200000000000002E-8;
  } else {
    zc_int96 = zc_int99;
  }

  if (t2888->mM.mX[822UL] != 0) {
    zc_int99 = 8.200000000000002E-8;
  } else {
    zc_int99 = intrm_sf_mf_33;
  }

  if (t2888->mM.mX[329UL] != 0) {
    t2276[9UL] = 10.0;
  } else {
    t2276[9UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[334UL] != 0) {
    t2276[14UL] = 10.0;
  } else {
    t2276[14UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[338UL] != 0) {
    t2276[17UL] = 10.0;
  } else {
    t2276[17UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[329UL] != 0) {
    t2277[9UL] = 10.0;
  } else {
    t2277[9UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[334UL] != 0) {
    t2277[14UL] = 10.0;
  } else {
    t2277[14UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[338UL] != 0) {
    t2277[17UL] = 10.0;
  } else {
    t2277[17UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[329UL] != 0) {
    t2331[2UL] = -10.0;
  } else {
    t2331[2UL] = -1.0000000000000001E-7;
  }

  if (t2888->mM.mX[334UL] != 0) {
    t2331[5UL] = -10.0;
  } else {
    t2331[5UL] = -1.0000000000000001E-7;
  }

  if (t2888->mM.mX[338UL] != 0) {
    t2331[7UL] = -10.0;
  } else {
    t2331[7UL] = -1.0000000000000001E-7;
  }

  if (t2888->mM.mX[329UL] != 0) {
    t2332[1UL] = 11.0;
  } else {
    t2332[1UL] = 1.0000001;
  }

  if (t2888->mM.mX[334UL] != 0) {
    t2332[4UL] = 10.0;
  } else {
    t2332[4UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[338UL] != 0) {
    t2332[6UL] = 10.0;
  } else {
    t2332[6UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[329UL] != 0) {
    t2333[1UL] = -10.0;
  } else {
    t2333[1UL] = -1.0000000000000001E-7;
  }

  if (t2888->mM.mX[334UL] != 0) {
    t2333[4UL] = -10.0;
  } else {
    t2333[4UL] = -1.0000000000000001E-7;
  }

  if (t2888->mM.mX[338UL] != 0) {
    t2333[7UL] = -10.0;
  } else {
    t2333[7UL] = -1.0000000000000001E-7;
  }

  if (t2888->mM.mX[329UL] != 0) {
    t2334[1UL] = 10.0;
  } else {
    t2334[1UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[334UL] != 0) {
    t2334[3UL] = 11.0;
  } else {
    t2334[3UL] = 1.0000001;
  }

  if (t2888->mM.mX[338UL] != 0) {
    t2334[6UL] = 10.0;
  } else {
    t2334[6UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[329UL] != 0) {
    t2335[1UL] = -10.0;
  } else {
    t2335[1UL] = -1.0000000000000001E-7;
  }

  if (t2888->mM.mX[334UL] != 0) {
    t2335[3UL] = -10.0;
  } else {
    t2335[3UL] = -1.0000000000000001E-7;
  }

  if (t2888->mM.mX[338UL] != 0) {
    t2335[6UL] = -10.0;
  } else {
    t2335[6UL] = -1.0000000000000001E-7;
  }

  if (t2888->mM.mX[329UL] != 0) {
    t2336[1UL] = 10.0;
  } else {
    t2336[1UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[334UL] != 0) {
    t2336[3UL] = 10.0;
  } else {
    t2336[3UL] = 1.0000000000000001E-7;
  }

  if (t2888->mM.mX[338UL] != 0) {
    t2336[5UL] = 11.0;
  } else {
    t2336[5UL] = 1.0000001;
  }

  if (t2888->mM.mX[329UL] != 0) {
    t2422[1UL] = 1000.0;
  } else {
    t2422[1UL] = 1.0E-5;
  }

  if (t2888->mM.mX[331UL] != 0) {
    t2422[3UL] = -1000.0;
  } else {
    t2422[3UL] = -1.0E-5;
  }

  if (t2888->mM.mX[334UL] != 0) {
    t2423[1UL] = 1000.0;
  } else {
    t2423[1UL] = 1.0E-5;
  }

  if (t2888->mM.mX[336UL] != 0) {
    t2423[3UL] = -1000.0;
  } else {
    t2423[3UL] = -1.0E-5;
  }

  if (t2888->mM.mX[338UL] != 0) {
    t2424[1UL] = 1000.0;
  } else {
    t2424[1UL] = 1.0E-5;
  }

  if (t2888->mM.mX[340UL] != 0) {
    t2424[3UL] = -1000.0;
  } else {
    t2424[3UL] = -1.0E-5;
  }

  out->mJNL.mX[0UL] =
    -Accumalator_Module_four_Battery_Table_Based32_stateOfCharge;
  out->mJNL.mX[1UL] = t2876;
  t2276[0UL] = -Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge;
  t2276[1UL] = -Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge;
  t2276[2UL] = -zc_int435;
  t2276[3UL] = -intrm_sf_mf_146;
  t2276[4UL] = -zc_int54;
  t2276[5UL] = -zc_int444;
  t2276[6UL] = -Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  t2276[7UL] = -t2752;
  t2276[8UL] = 0.01;
  t2276[10UL] = -zc_int69;
  t2276[11UL] = -Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge;
  t2276[12UL] = 0.01;
  t2276[13UL] = -zc_int72;
  t2276[15UL] = 0.01;
  t2276[16UL] = -intrm_sf_mf_259;
  t2276[18UL] = -intrm_sf_mf_269;
  t2276[19UL] = -t2756;
  t2276[20UL] = -Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  t2276[21UL] = -t2630;
  t2276[22UL] = -zc_int480;
  t2276[23UL] = -zc_int99;
  t2276[24UL] = -Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge;
  t2276[25UL] = -t2678;
  t2276[26UL] = -Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge;
  t2276[27UL] = -Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  t2276[28UL] = -t2682;
  t2276[29UL] = -t2684;
  t2276[30UL] = -intrm_sf_mf_213;
  t2276[31UL] = -Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  t2276[32UL] = -zc_int258;
  t2276[33UL] = -intrm_sf_mf_215;
  t2276[34UL] = -t2688;
  t2276[35UL] = -zc_int273;
  t2276[36UL] = -zc_int276;
  t2276[37UL] = -zc_int279;
  t2276[38UL] = -zc_int282;
  t2276[39UL] = -Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge;
  t2276[40UL] = -Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  t2276[41UL] = -intrm_sf_mf_225;
  t2276[42UL] = -Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge;
  t2276[43UL] = -t2822;
  t2276[44UL] = -intrm_sf_mf_227;
  t2276[45UL] = -zc_int369;
  t2276[46UL] = -Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  t2276[47UL] = -t2852;
  t2276[48UL] = -t2726;
  t2276[49UL] = -zc_int378;
  t2276[50UL] = -intrm_sf_mf_126;
  t2276[51UL] = -zc_int771;
  t2276[52UL] = -intrm_sf_mf_258;
  t2276[53UL] = -t2876;
  t2276[54UL] = -intrm_sf_mf_13;
  t2276[55UL] = -t2858;
  t2276[56UL] = -t2596;
  t2276[57UL] = -zc_int783;
  t2276[58UL] = -intrm_sf_mf_199;
  t2276[59UL] = -zc_int786;
  t2276[60UL] = -intrm_sf_mf_29;
  t2276[61UL] = -intrm_sf_mf_39;
  t2276[62UL] = -Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  t2276[63UL] = -t2864;
  t2276[64UL] = -zc_int18;
  t2276[65UL] = -t2736;
  t2276[66UL] = -intrm_sf_mf_69;
  t2276[67UL] = -intrm_sf_mf_79;
  t2276[68UL] = -intrm_sf_mf_137;
  t2276[69UL] = -intrm_sf_mf_138;
  t2276[70UL] = -zc_int810;
  t2276[71UL] = -intrm_sf_mf_109;
  t2276[72UL] = -t2869;
  t2276[73UL] = -intrm_sf_mf_119;
  t2276[74UL] = -zc_int426;
  t2276[75UL] = -zc_int816;
  t2276[76UL] = -zc_int39;
  t2276[77UL] = -zc_int171;
  t2276[78UL] = -t2654;
  t2276[79UL] = -zc_int177;
  t2276[80UL] = -t2658;
  t2276[81UL] = -intrm_sf_mf_190;
  t2276[82UL] = -intrm_sf_mf_61;
  t2276[83UL] = -t2792;
  t2276[84UL] = -t2662;
  t2276[85UL] = -zc_int192;
  t2276[86UL] = -intrm_sf_mf_193;
  t2276[87UL] = -t2796;
  t2276[88UL] = -Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge;
  t2276[89UL] = -intrm_sf_mf_67;
  t2276[90UL] = -intrm_sf_mf_197;
  t2276[91UL] = -t2670;
  t2276[92UL] = -intrm_sf_mf_7;
  t2276[93UL] = -Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge;
  t2276[94UL] = -intrm_sf_mf_200;
  t2276[95UL] = -Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge;
  t2276[96UL] = -intrm_sf_mf_73;
  t2276[97UL] = -zc_int612;
  t2276[98UL] = -zc_int615;
  t2276[99UL] = -zc_int618;
  t2276[100UL] = -zc_int690;
  t2276[101UL] = -t2828;
  t2276[102UL] = -Accumalator_Module_One1_Battery_Table_Based50_stateOfCharge;
  t2276[103UL] = -t2831;
  t2276[104UL] = -Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  t2276[105UL] = -intrm_sf_mf_103;
  t2276[106UL] = -Accumalator_Module_four_Battery_Table_Based19_stateOfCharge;
  t2276[107UL] = -zc_int708;
  t2276[108UL] = -intrm_sf_mf_236;
  t2276[109UL] = -intrm_sf_mf_237;
  t2276[110UL] = -t2840;
  t2276[111UL] = -zc_int336;
  t2276[112UL] = -zc_int726;
  t2276[113UL] = -t2708;
  t2276[114UL] = -intrm_sf_mf_113;
  t2276[115UL] = -Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  t2276[116UL] = -zc_int348;
  t2276[117UL] = -t2845;
  t2276[118UL] = -Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge;
  t2276[119UL] = -zc_int744;
  t2276[120UL] = -zc_int357;
  t2276[121UL] = -zc_int360;
  t2276[122UL] = -t2849;
  t2276[123UL] = -t2636;
  t2276[124UL] = -zc_int111;
  t2276[125UL] = -Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge;
  t2276[126UL] = -zc_int504;
  t2276[127UL] = -t2764;
  t2276[128UL] = -t2766;
  t2276[129UL] = -zc_int123;
  t2276[130UL] = -Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  t2276[131UL] = -Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  t2276[132UL] = -t2773;
  t2276[133UL] = -Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  t2276[134UL] = -t2644;
  t2276[135UL] = -Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  t2276[136UL] = -t2646;
  t2276[137UL] = -intrm_sf_mf_47;
  t2276[138UL] = -zc_int537;
  t2276[139UL] = -zc_int540;
  t2276[140UL] = -Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  t2276[141UL] = -Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  t2276[142UL] = -t2786;
  t2276[143UL] = -intrm_sf_mf_55;
  t2276[144UL] = -intrm_sf_mf_185;
  t2276[145UL] = -intrm_sf_mf_250;
  t2277[0UL] = -Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge;
  t2277[1UL] = -Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge;
  t2277[2UL] = -zc_int435;
  t2277[3UL] = -intrm_sf_mf_146;
  t2277[4UL] = -zc_int54;
  t2277[5UL] = -zc_int444;
  t2277[6UL] = -Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  t2277[7UL] = -t2752;
  t2277[8UL] = 0.01;
  t2277[10UL] = -zc_int69;
  t2277[11UL] = -Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge;
  t2277[12UL] = 0.01;
  t2277[13UL] = -zc_int72;
  t2277[15UL] = 0.01;
  t2277[16UL] = -intrm_sf_mf_259;
  t2277[18UL] = -intrm_sf_mf_269;
  t2277[19UL] = -t2756;
  t2277[20UL] = -Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  t2277[21UL] = -t2630;
  t2277[22UL] = -zc_int480;
  t2277[23UL] = -zc_int99;
  t2277[24UL] = -Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge;
  t2277[25UL] = -t2678;
  t2277[26UL] = -Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge;
  t2277[27UL] = -Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  t2277[28UL] = -t2682;
  t2277[29UL] = -t2684;
  t2277[30UL] = -intrm_sf_mf_213;
  t2277[31UL] = -Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  t2277[32UL] = -zc_int258;
  t2277[33UL] = -intrm_sf_mf_215;
  t2277[34UL] = -t2688;
  t2277[35UL] = -zc_int273;
  t2277[36UL] = -zc_int276;
  t2277[37UL] = -zc_int279;
  t2277[38UL] = -zc_int282;
  t2277[39UL] = -Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge;
  t2277[40UL] = -Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  t2277[41UL] = -intrm_sf_mf_225;
  t2277[42UL] = -Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge;
  t2277[43UL] = -t2822;
  t2277[44UL] = -intrm_sf_mf_227;
  t2277[45UL] = -zc_int369;
  t2277[46UL] = -Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  t2277[47UL] = -t2852;
  t2277[48UL] = -t2726;
  t2277[49UL] = -zc_int378;
  t2277[50UL] = -intrm_sf_mf_126;
  t2277[51UL] = -zc_int771;
  t2277[52UL] = -intrm_sf_mf_258;
  t2277[53UL] = -t2876;
  t2277[54UL] = -intrm_sf_mf_13;
  t2277[55UL] = -t2858;
  t2277[56UL] = -t2596;
  t2277[57UL] = -zc_int783;
  t2277[58UL] = -intrm_sf_mf_199;
  t2277[59UL] = -zc_int786;
  t2277[60UL] = -intrm_sf_mf_29;
  t2277[61UL] = -intrm_sf_mf_39;
  t2277[62UL] = -Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  t2277[63UL] = -t2864;
  t2277[64UL] = -zc_int18;
  t2277[65UL] = -t2736;
  t2277[66UL] = -intrm_sf_mf_69;
  t2277[67UL] = -intrm_sf_mf_79;
  t2277[68UL] = -intrm_sf_mf_137;
  t2277[69UL] = -intrm_sf_mf_138;
  t2277[70UL] = -zc_int810;
  t2277[71UL] = -intrm_sf_mf_109;
  t2277[72UL] = -t2869;
  t2277[73UL] = -intrm_sf_mf_119;
  t2277[74UL] = -zc_int426;
  t2277[75UL] = -zc_int816;
  t2277[76UL] = -zc_int39;
  t2277[77UL] = -zc_int171;
  t2277[78UL] = -t2654;
  t2277[79UL] = -zc_int177;
  t2277[80UL] = -t2658;
  t2277[81UL] = -intrm_sf_mf_190;
  t2277[82UL] = -intrm_sf_mf_61;
  t2277[83UL] = -t2792;
  t2277[84UL] = -t2662;
  t2277[85UL] = -zc_int192;
  t2277[86UL] = -intrm_sf_mf_193;
  t2277[87UL] = -t2796;
  t2277[88UL] = -Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge;
  t2277[89UL] = -intrm_sf_mf_67;
  t2277[90UL] = -t2670;
  t2277[91UL] = -intrm_sf_mf_7;
  t2277[92UL] = -Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge;
  t2277[93UL] = -intrm_sf_mf_200;
  t2277[94UL] = -zc_int606;
  t2277[95UL] = -Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge;
  t2277[96UL] = -intrm_sf_mf_73;
  t2277[97UL] = -zc_int612;
  t2277[98UL] = -zc_int615;
  t2277[99UL] = -zc_int618;
  t2277[100UL] = -zc_int690;
  t2277[101UL] = -t2828;
  t2277[102UL] = -Accumalator_Module_One1_Battery_Table_Based50_stateOfCharge;
  t2277[103UL] = -t2831;
  t2277[104UL] = -Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  t2277[105UL] = -intrm_sf_mf_103;
  t2277[106UL] = -Accumalator_Module_four_Battery_Table_Based19_stateOfCharge;
  t2277[107UL] = -zc_int708;
  t2277[108UL] = -intrm_sf_mf_236;
  t2277[109UL] = -intrm_sf_mf_237;
  t2277[110UL] = -t2840;
  t2277[111UL] = -zc_int336;
  t2277[112UL] = -zc_int726;
  t2277[113UL] = -t2708;
  t2277[114UL] = -intrm_sf_mf_113;
  t2277[115UL] = -Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  t2277[116UL] = -zc_int348;
  t2277[117UL] = -t2845;
  t2277[118UL] = -Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge;
  t2277[119UL] = -zc_int744;
  t2277[120UL] = -zc_int357;
  t2277[121UL] = -zc_int360;
  t2277[122UL] = -t2849;
  t2277[123UL] = -t2636;
  t2277[124UL] = -zc_int111;
  t2277[125UL] = -Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge;
  t2277[126UL] = -zc_int504;
  t2277[127UL] = -t2764;
  t2277[128UL] = -t2766;
  t2277[129UL] = -zc_int123;
  t2277[130UL] = -Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  t2277[131UL] = -Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  t2277[132UL] = -t2773;
  t2277[133UL] = -Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  t2277[134UL] = -t2644;
  t2277[135UL] = -Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  t2277[136UL] = -t2646;
  t2277[137UL] = -intrm_sf_mf_47;
  t2277[138UL] = -zc_int537;
  t2277[139UL] = -zc_int540;
  t2277[140UL] = -Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  t2277[141UL] = -Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  t2277[142UL] = -t2786;
  t2277[143UL] = -intrm_sf_mf_55;
  t2277[144UL] = -intrm_sf_mf_185;
  t2277[145UL] = -intrm_sf_mf_250;
  intrm_sf_mf_197 = t2596;
  t2596 = -intrm_sf_mf_89;
  intrm_sf_mf_89 = intrm_sf_mf_199;
  intrm_sf_mf_199 =
    -Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge;
  Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge = intrm_sf_mf_29;
  intrm_sf_mf_29 = -zc_int132;
  zc_int132 = intrm_sf_mf_39;
  intrm_sf_mf_39 = -t2603;
  t2603 = zc_int18;
  zc_int18 = -t2605;
  t2605 = intrm_sf_mf_69;
  intrm_sf_mf_69 = -zc_int30;
  zc_int30 = intrm_sf_mf_79;
  intrm_sf_mf_79 = -t2609;
  t2609 = -zc_int66;
  zc_int606 = intrm_sf_mf_109;
  intrm_sf_mf_109 = -zc_int51;
  zc_int51 = intrm_sf_mf_119;
  intrm_sf_mf_119 = -t2614;
  t2614 = zc_int39;
  zc_int39 = Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge;
  zc_int66 = -intrm_sf_mf_28;
  intrm_sf_mf_28 = zc_int72;
  zc_int72 = -zc_int96;
  zc_int96 = intrm_sf_mf_269;
  intrm_sf_mf_269 = t2630;
  t2630 = -zc_int102;
  zc_int102 = zc_int99;
  zc_int99 = -intrm_sf_mf_52;
  intrm_sf_mf_52 = Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge;
  Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge = -intrm_sf_mf_4;
  intrm_sf_mf_4 = t2636;
  t2636 = -Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge = zc_int111;
  zc_int111 = -intrm_sf_mf_42;
  intrm_sf_mf_42 = Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge;
  Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge =
    -Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge = zc_int123;
  zc_int123 = -intrm_sf_mf_44;
  intrm_sf_mf_44 = t2644;
  t2644 = -zc_int147;
  zc_int147 = t2646;
  t2646 = -intrm_sf_mf_5;
  intrm_sf_mf_5 = intrm_sf_mf_47;
  intrm_sf_mf_47 = -Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge;
  Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge = -t2650;
  t2650 = intrm_sf_mf_55;
  intrm_sf_mf_55 = zc_int171;
  zc_int171 = -intrm_sf_mf_64;
  intrm_sf_mf_64 = t2654;
  t2654 = -t2655;
  t2655 = zc_int177;
  zc_int177 = -intrm_sf_mf_10;
  intrm_sf_mf_10 = t2658;
  t2658 = -Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge = intrm_sf_mf_61;
  intrm_sf_mf_61 = -t2661;
  t2661 = t2662;
  t2662 = -t2663;
  t2663 = zc_int192;
  zc_int192 = -intrm_sf_mf_110;
  intrm_sf_mf_110 = -Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge =
    Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge = intrm_sf_mf_67;
  intrm_sf_mf_67 = -t2669;
  t2669 = t2670;
  t2670 = -Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge = intrm_sf_mf_7;
  intrm_sf_mf_7 = -intrm_sf_mf_75;
  intrm_sf_mf_75 = Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge = -t2675;
  t2675 = intrm_sf_mf_73;
  intrm_sf_mf_73 = -Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge = t2678;
  t2678 = -t2679;
  t2679 = Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge = -intrm_sf_mf_86;
  intrm_sf_mf_86 = t2682;
  t2682 = -t2683;
  t2683 = t2684;
  t2684 = -intrm_sf_mf_83;
  intrm_sf_mf_83 = zc_int258;
  zc_int258 = -t2687;
  t2687 = t2688;
  t2688 = -intrm_sf_mf_108;
  intrm_sf_mf_108 = zc_int273;
  zc_int273 = -intrm_sf_mf_95;
  intrm_sf_mf_95 = zc_int276;
  zc_int276 = -Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge = zc_int279;
  zc_int279 = -t2695;
  t2695 = zc_int282;
  zc_int282 = -t2697;
  t2697 = Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge = -intrm_sf_mf_100;
  intrm_sf_mf_100 = Accumalator_Module_One1_Battery_Table_Based50_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based50_stateOfCharge = -t2701;
  t2331[0UL] = -0.01;
  t2331[1UL] = 1.0;
  t2331[3UL] = 1.0;
  t2331[4UL] = -0.01;
  t2331[6UL] = -0.01;
  t2332[0UL] = 0.01;
  t2332[2UL] = -1.0;
  t2332[3UL] = 0.01;
  t2332[5UL] = 0.01;
  t2333[0UL] = -0.01;
  t2333[2UL] = -0.01;
  t2333[3UL] = 1.0;
  t2333[5UL] = 1.0;
  t2333[6UL] = -0.01;
  t2334[0UL] = 0.01;
  t2334[2UL] = 0.01;
  t2334[4UL] = -1.0;
  t2334[5UL] = 0.01;
  t2335[0UL] = -0.01;
  t2335[2UL] = -0.01;
  t2335[4UL] = -0.01;
  t2335[5UL] = 1.0;
  t2335[7UL] = 1.0;
  t2336[0UL] = 0.01;
  t2336[2UL] = 0.01;
  t2336[4UL] = 0.01;
  t2336[6UL] = -1.0;
  t2701 = Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge = -t2703;
  t2703 = intrm_sf_mf_103;
  intrm_sf_mf_103 = -Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge;
  Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge = -t2706;
  t2706 = zc_int336;
  zc_int336 = t2708;
  t2708 = -Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge =
    intrm_sf_mf_113;
  intrm_sf_mf_113 = -intrm_sf_mf_116;
  intrm_sf_mf_116 =
    -Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge =
    Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge = -zc_int492;
  zc_int492 = zc_int348;
  zc_int348 = Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge =
    -intrm_sf_mf_165;
  intrm_sf_mf_165 = zc_int357;
  zc_int357 = -intrm_sf_mf_121;
  intrm_sf_mf_121 = zc_int360;
  zc_int360 = -intrm_sf_mf_166;
  intrm_sf_mf_166 = zc_int369;
  zc_int369 = -intrm_sf_mf_133;
  intrm_sf_mf_133 = Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge = -t2725;
  t2725 = t2726;
  t2726 = -zc_int393;
  zc_int393 = zc_int378;
  zc_int378 = -zc_int396;
  zc_int396 = intrm_sf_mf_126;
  intrm_sf_mf_126 = -intrm_sf_mf_127;
  intrm_sf_mf_127 = intrm_sf_mf_13;
  intrm_sf_mf_13 =
    -Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge =
    Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge = -t2735;
  t2735 = t2736;
  t2736 = -Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge =
    -intrm_sf_mf_143;
  intrm_sf_mf_143 = intrm_sf_mf_137;
  intrm_sf_mf_137 = intrm_sf_mf_138;
  intrm_sf_mf_138 = -intrm_sf_mf_14;
  intrm_sf_mf_14 = -intrm_sf_mf_145;
  intrm_sf_mf_145 = zc_int426;
  zc_int426 = zc_int435;
  zc_int435 = -Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge = intrm_sf_mf_146;
  intrm_sf_mf_146 =
    -Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge = zc_int444;
  zc_int444 = -t2749;
  t2749 = Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge =
    -intrm_sf_mf_154;
  intrm_sf_mf_154 = t2752;
  t2752 = -intrm_sf_mf_150;
  intrm_sf_mf_150 =
    Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge = -t2755;
  t2755 = t2756;
  t2756 = -zc_int483;
  zc_int483 = Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge =
    -Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge = zc_int480;
  zc_int480 = -Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge;
  Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge =
    -Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge = zc_int504;
  zc_int504 = t2764;
  t2764 = -t2765;
  t2765 = t2766;
  t2766 = -zc_int519;
  zc_int519 = -intrm_sf_mf_211;
  intrm_sf_mf_211 = Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge = -t2770;
  t2770 = Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge = -zc_int666;
  zc_int666 = t2773;
  t2773 = Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge = -t2775;
  t2775 = -zc_int669;
  zc_int669 = Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge = -t2778;
  t2778 = zc_int537;
  zc_int537 = zc_int540;
  zc_int540 = -Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge = -t2782;
  t2782 = Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge = -t2784;
  t2784 = Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge = t2786;
  t2786 = -zc_int552;
  zc_int552 = -intrm_sf_mf_188;
  intrm_sf_mf_188 = intrm_sf_mf_185;
  intrm_sf_mf_185 = intrm_sf_mf_190;
  intrm_sf_mf_190 = -Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge = t2792;
  t2792 = -Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge = intrm_sf_mf_193;
  intrm_sf_mf_193 = -intrm_sf_mf_20;
  intrm_sf_mf_20 = t2796;
  t2796 = -t2797;
  t2797 = -Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge = intrm_sf_mf_200;
  intrm_sf_mf_200 = -intrm_sf_mf_207;
  intrm_sf_mf_207 = Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge =
    -Accumalator_Module_Five1_Battery_Table_Based29_stateOfCharge;
  Accumalator_Module_Five1_Battery_Table_Based29_stateOfCharge = zc_int612;
  zc_int612 = -Accumalator_Module_Two_Battery_Table_Based48_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based48_stateOfCharge = zc_int615;
  zc_int615 = zc_int618;
  zc_int618 = -intrm_sf_mf_206;
  intrm_sf_mf_206 = Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge = -t2809;
  t2809 = intrm_sf_mf_213;
  intrm_sf_mf_213 = -zc_int651;
  zc_int651 = Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge = -intrm_sf_mf_217;
  intrm_sf_mf_217 = intrm_sf_mf_215;
  intrm_sf_mf_215 = -intrm_sf_mf_218;
  intrm_sf_mf_218 = Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge;
  Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge = -t2817;
  t2817 = Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  Accumalator_Module_four_Battery_Table_Based1_stateOfCharge = -intrm_sf_mf_232;
  intrm_sf_mf_232 = intrm_sf_mf_225;
  intrm_sf_mf_225 = -intrm_sf_mf_228;
  intrm_sf_mf_228 = t2822;
  t2822 = -intrm_sf_mf_267;
  intrm_sf_mf_267 = -intrm_sf_mf_275;
  intrm_sf_mf_275 = intrm_sf_mf_227;
  intrm_sf_mf_227 = -t2826;
  t2826 = zc_int690;
  zc_int690 = t2828;
  t2828 = -t2829;
  t2829 = -t2830;
  t2830 = t2831;
  t2831 = Accumalator_Module_four_Battery_Table_Based19_stateOfCharge;
  Accumalator_Module_four_Battery_Table_Based19_stateOfCharge =
    -Accumalator_Module_four_Battery_Table_Based29_stateOfCharge;
  Accumalator_Module_four_Battery_Table_Based29_stateOfCharge = zc_int708;
  zc_int708 = -intrm_sf_mf_240;
  intrm_sf_mf_240 = intrm_sf_mf_236;
  intrm_sf_mf_236 = -intrm_sf_mf_242;
  intrm_sf_mf_242 = intrm_sf_mf_237;
  intrm_sf_mf_237 = -t2839;
  t2839 = t2840;
  t2840 = -Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge;
  Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge = zc_int726;
  zc_int726 = -intrm_sf_mf_244;
  intrm_sf_mf_244 = -t2844;
  t2844 = t2845;
  t2845 = -zc_int765;
  zc_int765 = zc_int744;
  zc_int744 = -zc_int768;
  zc_int768 = t2849;
  t2849 = -t2850;
  t2850 = intrm_sf_mf_250;
  intrm_sf_mf_250 = t2852;
  t2852 = -t2853;
  t2853 = -Accumalator_Module_four_Battery_Table_Based6_stateOfCharge;
  Accumalator_Module_four_Battery_Table_Based6_stateOfCharge = zc_int771;
  zc_int771 = intrm_sf_mf_258;
  intrm_sf_mf_258 = -intrm_sf_mf_263;
  intrm_sf_mf_263 = t2858;
  t2858 = -t2859;
  t2859 = zc_int783;
  zc_int783 = -zc_int801;
  zc_int801 = zc_int786;
  t2422[0UL] = 1.0;
  t2422[2UL] = -1.0;
  t2423[0UL] = 1.0;
  t2423[2UL] = -1.0;
  t2424[0UL] = 1.0;
  t2424[2UL] = -1.0;
  for (t2583 = 0UL; t2583 < 146UL; t2583++) {
    out->mJNL.mX[t2583 + 2UL] = t2276[t2583];
  }

  for (t2583 = 0UL; t2583 < 146UL; t2583++) {
    out->mJNL.mX[t2583 + 148UL] = t2277[t2583];
  }

  out->mJNL.mX[294UL] = intrm_sf_mf_197;
  out->mJNL.mX[295UL] = t2596;
  out->mJNL.mX[296UL] = intrm_sf_mf_89;
  out->mJNL.mX[297UL] = intrm_sf_mf_199;
  out->mJNL.mX[298UL] =
    Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge;
  out->mJNL.mX[299UL] = intrm_sf_mf_29;
  out->mJNL.mX[300UL] = zc_int132;
  out->mJNL.mX[301UL] = intrm_sf_mf_39;
  out->mJNL.mX[302UL] = t2603;
  out->mJNL.mX[303UL] = zc_int18;
  out->mJNL.mX[304UL] = t2605;
  out->mJNL.mX[305UL] = intrm_sf_mf_69;
  out->mJNL.mX[306UL] = zc_int30;
  out->mJNL.mX[307UL] = intrm_sf_mf_79;
  out->mJNL.mX[308UL] = t2609;
  out->mJNL.mX[309UL] = zc_int606;
  out->mJNL.mX[310UL] = intrm_sf_mf_109;
  out->mJNL.mX[311UL] = zc_int51;
  out->mJNL.mX[312UL] = intrm_sf_mf_119;
  out->mJNL.mX[313UL] = t2614;
  out->mJNL.mX[314UL] = zc_int39;
  out->mJNL.mX[315UL] = -zc_int60;
  out->mJNL.mX[316UL] =
    Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge;
  out->mJNL.mX[317UL] =
    -Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge;
  out->mJNL.mX[318UL] = zc_int54;
  out->mJNL.mX[319UL] = -t2621;
  out->mJNL.mX[320UL] = zc_int69;
  out->mJNL.mX[321UL] = zc_int66;
  out->mJNL.mX[322UL] = intrm_sf_mf_28;
  out->mJNL.mX[323UL] =
    -Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge;
  out->mJNL.mX[324UL] = intrm_sf_mf_259;
  out->mJNL.mX[325UL] = zc_int72;
  out->mJNL.mX[326UL] = zc_int96;
  out->mJNL.mX[327UL] = -t2875;
  out->mJNL.mX[328UL] = intrm_sf_mf_269;
  out->mJNL.mX[329UL] = t2630;
  out->mJNL.mX[330UL] = zc_int102;
  out->mJNL.mX[331UL] = zc_int99;
  out->mJNL.mX[332UL] = intrm_sf_mf_52;
  out->mJNL.mX[333UL] =
    Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge;
  out->mJNL.mX[334UL] = intrm_sf_mf_4;
  out->mJNL.mX[335UL] = t2636;
  out->mJNL.mX[336UL] =
    Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  out->mJNL.mX[337UL] = zc_int111;
  out->mJNL.mX[338UL] = intrm_sf_mf_42;
  out->mJNL.mX[339UL] =
    Accumalator_Module_Five1_Battery_Table_Based43_stateOfCharge;
  out->mJNL.mX[340UL] =
    Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  out->mJNL.mX[341UL] = zc_int123;
  out->mJNL.mX[342UL] = intrm_sf_mf_44;
  out->mJNL.mX[343UL] = t2644;
  out->mJNL.mX[344UL] = zc_int147;
  out->mJNL.mX[345UL] = t2646;
  out->mJNL.mX[346UL] = intrm_sf_mf_5;
  out->mJNL.mX[347UL] = intrm_sf_mf_47;
  out->mJNL.mX[348UL] =
    Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge;
  out->mJNL.mX[349UL] = t2650;
  out->mJNL.mX[350UL] = intrm_sf_mf_55;
  out->mJNL.mX[351UL] = zc_int171;
  out->mJNL.mX[352UL] = intrm_sf_mf_64;
  out->mJNL.mX[353UL] = t2654;
  out->mJNL.mX[354UL] = t2655;
  out->mJNL.mX[355UL] = zc_int177;
  out->mJNL.mX[356UL] = intrm_sf_mf_10;
  out->mJNL.mX[357UL] = t2658;
  out->mJNL.mX[358UL] =
    Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge;
  out->mJNL.mX[359UL] = intrm_sf_mf_61;
  out->mJNL.mX[360UL] = t2661;
  out->mJNL.mX[361UL] = t2662;
  out->mJNL.mX[362UL] = t2663;
  out->mJNL.mX[363UL] = zc_int192;
  out->mJNL.mX[364UL] = intrm_sf_mf_110;
  out->mJNL.mX[365UL] =
    Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge;
  out->mJNL.mX[366UL] =
    Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge;
  out->mJNL.mX[367UL] = intrm_sf_mf_67;
  out->mJNL.mX[368UL] = t2669;
  out->mJNL.mX[369UL] = t2670;
  out->mJNL.mX[370UL] =
    Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  out->mJNL.mX[371UL] = intrm_sf_mf_7;
  out->mJNL.mX[372UL] = intrm_sf_mf_75;
  out->mJNL.mX[373UL] =
    Accumalator_Module_One1_Battery_Table_Based22_stateOfCharge;
  out->mJNL.mX[374UL] = t2675;
  out->mJNL.mX[375UL] = intrm_sf_mf_73;
  out->mJNL.mX[376UL] =
    Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge;
  out->mJNL.mX[377UL] = t2678;
  out->mJNL.mX[378UL] = t2679;
  out->mJNL.mX[379UL] =
    Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  out->mJNL.mX[380UL] = intrm_sf_mf_86;
  out->mJNL.mX[381UL] = t2682;
  out->mJNL.mX[382UL] = t2683;
  out->mJNL.mX[383UL] = t2684;
  out->mJNL.mX[384UL] = intrm_sf_mf_83;
  out->mJNL.mX[385UL] = zc_int258;
  out->mJNL.mX[386UL] = t2687;
  out->mJNL.mX[387UL] = t2688;
  out->mJNL.mX[388UL] = intrm_sf_mf_108;
  out->mJNL.mX[389UL] = zc_int273;
  out->mJNL.mX[390UL] = intrm_sf_mf_95;
  out->mJNL.mX[391UL] = zc_int276;
  out->mJNL.mX[392UL] =
    Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge;
  out->mJNL.mX[393UL] = zc_int279;
  out->mJNL.mX[394UL] = t2695;
  out->mJNL.mX[395UL] = zc_int282;
  out->mJNL.mX[396UL] = t2697;
  out->mJNL.mX[397UL] =
    Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge;
  out->mJNL.mX[398UL] = intrm_sf_mf_100;
  out->mJNL.mX[399UL] =
    Accumalator_Module_One1_Battery_Table_Based50_stateOfCharge;
  for (t2583 = 0UL; t2583 < 8UL; t2583++) {
    out->mJNL.mX[t2583 + 400UL] = t2331[t2583];
  }

  for (t2583 = 0UL; t2583 < 7UL; t2583++) {
    out->mJNL.mX[t2583 + 408UL] = t2332[t2583];
  }

  for (t2583 = 0UL; t2583 < 8UL; t2583++) {
    out->mJNL.mX[t2583 + 415UL] = t2333[t2583];
  }

  for (t2583 = 0UL; t2583 < 7UL; t2583++) {
    out->mJNL.mX[t2583 + 423UL] = t2334[t2583];
  }

  for (t2583 = 0UL; t2583 < 8UL; t2583++) {
    out->mJNL.mX[t2583 + 430UL] = t2335[t2583];
  }

  for (t2583 = 0UL; t2583 < 7UL; t2583++) {
    out->mJNL.mX[t2583 + 438UL] = t2336[t2583];
  }

  out->mJNL.mX[445UL] = t2701;
  out->mJNL.mX[446UL] =
    Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  out->mJNL.mX[447UL] = t2703;
  out->mJNL.mX[448UL] = intrm_sf_mf_103;
  out->mJNL.mX[449UL] =
    Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge;
  out->mJNL.mX[450UL] = t2706;
  out->mJNL.mX[451UL] = zc_int336;
  out->mJNL.mX[452UL] = t2708;
  out->mJNL.mX[453UL] =
    Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge;
  out->mJNL.mX[454UL] = intrm_sf_mf_113;
  out->mJNL.mX[455UL] = intrm_sf_mf_116;
  out->mJNL.mX[456UL] =
    Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge;
  out->mJNL.mX[457UL] =
    Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  out->mJNL.mX[458UL] = zc_int492;
  out->mJNL.mX[459UL] = zc_int348;
  out->mJNL.mX[460UL] =
    Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge;
  out->mJNL.mX[461UL] = intrm_sf_mf_165;
  out->mJNL.mX[462UL] = zc_int357;
  out->mJNL.mX[463UL] = intrm_sf_mf_121;
  out->mJNL.mX[464UL] = zc_int360;
  out->mJNL.mX[465UL] = intrm_sf_mf_166;
  out->mJNL.mX[466UL] = zc_int369;
  out->mJNL.mX[467UL] = intrm_sf_mf_133;
  out->mJNL.mX[468UL] =
    Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  out->mJNL.mX[469UL] = t2725;
  out->mJNL.mX[470UL] = t2726;
  out->mJNL.mX[471UL] = zc_int393;
  out->mJNL.mX[472UL] = zc_int378;
  out->mJNL.mX[473UL] = zc_int396;
  out->mJNL.mX[474UL] = intrm_sf_mf_126;
  out->mJNL.mX[475UL] = intrm_sf_mf_127;
  out->mJNL.mX[476UL] = intrm_sf_mf_13;
  out->mJNL.mX[477UL] =
    Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge;
  out->mJNL.mX[478UL] =
    Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  out->mJNL.mX[479UL] = t2735;
  out->mJNL.mX[480UL] = t2736;
  out->mJNL.mX[481UL] =
    Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge;
  out->mJNL.mX[482UL] = intrm_sf_mf_143;
  out->mJNL.mX[483UL] = intrm_sf_mf_137;
  out->mJNL.mX[484UL] = intrm_sf_mf_138;
  out->mJNL.mX[485UL] = intrm_sf_mf_14;
  out->mJNL.mX[486UL] = intrm_sf_mf_145;
  out->mJNL.mX[487UL] = zc_int426;
  out->mJNL.mX[488UL] = zc_int435;
  out->mJNL.mX[489UL] =
    Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge;
  out->mJNL.mX[490UL] = intrm_sf_mf_146;
  out->mJNL.mX[491UL] =
    Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge;
  out->mJNL.mX[492UL] = zc_int444;
  out->mJNL.mX[493UL] = t2749;
  out->mJNL.mX[494UL] =
    Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  out->mJNL.mX[495UL] = intrm_sf_mf_154;
  out->mJNL.mX[496UL] = t2752;
  out->mJNL.mX[497UL] = intrm_sf_mf_150;
  out->mJNL.mX[498UL] =
    Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge;
  out->mJNL.mX[499UL] = t2755;
  out->mJNL.mX[500UL] = t2756;
  out->mJNL.mX[501UL] = zc_int483;
  out->mJNL.mX[502UL] =
    Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  out->mJNL.mX[503UL] =
    Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge;
  out->mJNL.mX[504UL] = zc_int480;
  out->mJNL.mX[505UL] =
    Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge;
  out->mJNL.mX[506UL] =
    Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  out->mJNL.mX[507UL] = zc_int504;
  out->mJNL.mX[508UL] = t2764;
  out->mJNL.mX[509UL] = t2765;
  out->mJNL.mX[510UL] = t2766;
  out->mJNL.mX[511UL] = zc_int519;
  out->mJNL.mX[512UL] = intrm_sf_mf_211;
  out->mJNL.mX[513UL] =
    Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  out->mJNL.mX[514UL] = t2770;
  out->mJNL.mX[515UL] =
    Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  out->mJNL.mX[516UL] = zc_int666;
  out->mJNL.mX[517UL] = t2773;
  out->mJNL.mX[518UL] =
    Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  out->mJNL.mX[519UL] = t2775;
  out->mJNL.mX[520UL] = zc_int669;
  out->mJNL.mX[521UL] =
    Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  out->mJNL.mX[522UL] = t2778;
  out->mJNL.mX[523UL] = zc_int537;
  out->mJNL.mX[524UL] = zc_int540;
  out->mJNL.mX[525UL] =
    Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge;
  out->mJNL.mX[526UL] = t2782;
  out->mJNL.mX[527UL] =
    Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  out->mJNL.mX[528UL] = t2784;
  out->mJNL.mX[529UL] =
    Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  out->mJNL.mX[530UL] = t2786;
  out->mJNL.mX[531UL] = zc_int552;
  out->mJNL.mX[532UL] = intrm_sf_mf_188;
  out->mJNL.mX[533UL] = intrm_sf_mf_185;
  out->mJNL.mX[534UL] = intrm_sf_mf_190;
  out->mJNL.mX[535UL] =
    Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge;
  out->mJNL.mX[536UL] = t2792;
  out->mJNL.mX[537UL] =
    Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  out->mJNL.mX[538UL] = intrm_sf_mf_193;
  out->mJNL.mX[539UL] = intrm_sf_mf_20;
  out->mJNL.mX[540UL] = t2796;
  out->mJNL.mX[541UL] = t2797;
  out->mJNL.mX[542UL] =
    Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge;
  out->mJNL.mX[543UL] = intrm_sf_mf_200;
  out->mJNL.mX[544UL] = intrm_sf_mf_207;
  out->mJNL.mX[545UL] =
    Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge;
  out->mJNL.mX[546UL] =
    Accumalator_Module_Five1_Battery_Table_Based29_stateOfCharge;
  out->mJNL.mX[547UL] = zc_int612;
  out->mJNL.mX[548UL] =
    Accumalator_Module_Two_Battery_Table_Based48_stateOfCharge;
  out->mJNL.mX[549UL] = zc_int615;
  out->mJNL.mX[550UL] = zc_int618;
  out->mJNL.mX[551UL] = intrm_sf_mf_206;
  out->mJNL.mX[552UL] =
    Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge;
  out->mJNL.mX[553UL] = t2809;
  out->mJNL.mX[554UL] = intrm_sf_mf_213;
  out->mJNL.mX[555UL] = zc_int651;
  out->mJNL.mX[556UL] =
    Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  out->mJNL.mX[557UL] = intrm_sf_mf_217;
  out->mJNL.mX[558UL] = intrm_sf_mf_215;
  out->mJNL.mX[559UL] = intrm_sf_mf_218;
  out->mJNL.mX[560UL] =
    Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge;
  out->mJNL.mX[561UL] = t2817;
  out->mJNL.mX[562UL] =
    Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  out->mJNL.mX[563UL] = intrm_sf_mf_232;
  out->mJNL.mX[564UL] = intrm_sf_mf_225;
  out->mJNL.mX[565UL] = intrm_sf_mf_228;
  out->mJNL.mX[566UL] = t2822;
  out->mJNL.mX[567UL] = intrm_sf_mf_267;
  out->mJNL.mX[568UL] = intrm_sf_mf_275;
  out->mJNL.mX[569UL] = intrm_sf_mf_227;
  out->mJNL.mX[570UL] = t2826;
  out->mJNL.mX[571UL] = zc_int690;
  out->mJNL.mX[572UL] = t2828;
  out->mJNL.mX[573UL] = t2829;
  out->mJNL.mX[574UL] = t2830;
  out->mJNL.mX[575UL] = t2831;
  out->mJNL.mX[576UL] =
    Accumalator_Module_four_Battery_Table_Based19_stateOfCharge;
  out->mJNL.mX[577UL] =
    Accumalator_Module_four_Battery_Table_Based29_stateOfCharge;
  out->mJNL.mX[578UL] = zc_int708;
  out->mJNL.mX[579UL] = intrm_sf_mf_240;
  out->mJNL.mX[580UL] = intrm_sf_mf_236;
  out->mJNL.mX[581UL] = intrm_sf_mf_242;
  out->mJNL.mX[582UL] = intrm_sf_mf_237;
  out->mJNL.mX[583UL] = t2839;
  out->mJNL.mX[584UL] = t2840;
  out->mJNL.mX[585UL] =
    Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge;
  out->mJNL.mX[586UL] = zc_int726;
  out->mJNL.mX[587UL] = intrm_sf_mf_244;
  out->mJNL.mX[588UL] = t2844;
  out->mJNL.mX[589UL] = t2845;
  out->mJNL.mX[590UL] = zc_int765;
  out->mJNL.mX[591UL] = zc_int744;
  out->mJNL.mX[592UL] = zc_int768;
  out->mJNL.mX[593UL] = t2849;
  out->mJNL.mX[594UL] = t2850;
  out->mJNL.mX[595UL] = intrm_sf_mf_250;
  out->mJNL.mX[596UL] = t2852;
  out->mJNL.mX[597UL] = t2853;
  out->mJNL.mX[598UL] =
    Accumalator_Module_four_Battery_Table_Based6_stateOfCharge;
  out->mJNL.mX[599UL] = zc_int771;
  out->mJNL.mX[600UL] = intrm_sf_mf_258;
  out->mJNL.mX[601UL] = intrm_sf_mf_263;
  out->mJNL.mX[602UL] = t2858;
  out->mJNL.mX[603UL] = t2859;
  out->mJNL.mX[604UL] = zc_int783;
  out->mJNL.mX[605UL] = zc_int801;
  out->mJNL.mX[606UL] = -zc_int789;
  out->mJNL.mX[607UL] = t2864;
  out->mJNL.mX[608UL] = -intrm_sf_mf_268;
  out->mJNL.mX[609UL] = zc_int810;
  out->mJNL.mX[610UL] = -t2867;
  out->mJNL.mX[611UL] = -intrm_sf_mf_273;
  out->mJNL.mX[612UL] = t2869;
  out->mJNL.mX[613UL] =
    -Accumalator_Module_four_Battery_Table_Based58_stateOfCharge;
  out->mJNL.mX[614UL] = zc_int816;
  for (t2583 = 0UL; t2583 < 4UL; t2583++) {
    out->mJNL.mX[t2583 + 615UL] = t2422[t2583];
  }

  for (t2583 = 0UL; t2583 < 4UL; t2583++) {
    out->mJNL.mX[t2583 + 619UL] = t2423[t2583];
  }

  for (t2583 = 0UL; t2583 < 4UL; t2583++) {
    out->mJNL.mX[t2583 + 623UL] = t2424[t2583];
  }

  out->mJNL.mX[627UL] = 1.0;
  out->mJNL.mX[628UL] = 1.0;
  out->mJNL.mX[629UL] = 1.0;
  out->mJNL.mX[630UL] = t2888->mM.mX[328UL] != 0 ? -1.0 : -0.001;
  out->mJNL.mX[631UL] = t2888->mM.mX[328UL] != 0 ? -1.0E-5 : -1.0;
  out->mJNL.mX[632UL] = 1.0;
  out->mJNL.mX[633UL] = 1.0;
  out->mJNL.mX[634UL] = t2888->mM.mX[330UL] != 0 ? -1.0 : -0.001;
  out->mJNL.mX[635UL] = t2888->mM.mX[330UL] != 0 ? -1.0E-5 : -1.0;
  out->mJNL.mX[636UL] = t2888->mM.mX[333UL] != 0 ? -1.0 : -0.001;
  out->mJNL.mX[637UL] = t2888->mM.mX[333UL] != 0 ? -1.0E-5 : -1.0;
  out->mJNL.mX[638UL] = 1.0;
  out->mJNL.mX[639UL] = 1.0;
  out->mJNL.mX[640UL] = t2888->mM.mX[335UL] != 0 ? -1.0 : -0.001;
  out->mJNL.mX[641UL] = t2888->mM.mX[335UL] != 0 ? -1.0E-5 : -1.0;
  out->mJNL.mX[642UL] = t2888->mM.mX[337UL] != 0 ? -1.0 : -0.001;
  out->mJNL.mX[643UL] = t2888->mM.mX[337UL] != 0 ? -1.0E-5 : -1.0;
  out->mJNL.mX[644UL] = 1.0;
  out->mJNL.mX[645UL] = 1.0;
  out->mJNL.mX[646UL] = t2888->mM.mX[339UL] != 0 ? -1.0 : -0.001;
  out->mJNL.mX[647UL] = t2888->mM.mX[339UL] != 0 ? -1.0E-5 : -1.0;
  (void)sys;
  (void)out;
  return 0;
}
