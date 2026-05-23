/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Tractive_System_model/Solver Configuration1'.
 */

#include "nesl_rtw_partitioning.h"
#include "Tractive_System_model_2f85d999_0_slc_281_sys_struct.h"
#include "Tractive_System_model_2f85d999_0_slc_281fx.h"
#include "Tractive_System_model_2f85d999_0_slc_281.h"
#include "Tractive_System_model_2f85d999_0_slc_281_externals.h"
#include "Tractive_System_model_2f85d999_0_slc_281_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Tractive_System_model_2f85d999_0_slc_281fx(const SwitchedLinearClump
  *sys, const NeDynamicSystemInput *t5361, SlcMethodOutput *out)
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
  ETTSf3049b48 t10;
  ETTSf3049b48 t100;
  ETTSf3049b48 t101;
  ETTSf3049b48 t102;
  ETTSf3049b48 t103;
  ETTSf3049b48 t104;
  ETTSf3049b48 t105;
  ETTSf3049b48 t106;
  ETTSf3049b48 t107;
  ETTSf3049b48 t108;
  ETTSf3049b48 t109;
  ETTSf3049b48 t11;
  ETTSf3049b48 t110;
  ETTSf3049b48 t111;
  ETTSf3049b48 t112;
  ETTSf3049b48 t113;
  ETTSf3049b48 t114;
  ETTSf3049b48 t115;
  ETTSf3049b48 t116;
  ETTSf3049b48 t117;
  ETTSf3049b48 t118;
  ETTSf3049b48 t119;
  ETTSf3049b48 t12;
  ETTSf3049b48 t120;
  ETTSf3049b48 t121;
  ETTSf3049b48 t122;
  ETTSf3049b48 t123;
  ETTSf3049b48 t124;
  ETTSf3049b48 t125;
  ETTSf3049b48 t126;
  ETTSf3049b48 t127;
  ETTSf3049b48 t128;
  ETTSf3049b48 t129;
  ETTSf3049b48 t13;
  ETTSf3049b48 t130;
  ETTSf3049b48 t131;
  ETTSf3049b48 t132;
  ETTSf3049b48 t133;
  ETTSf3049b48 t134;
  ETTSf3049b48 t135;
  ETTSf3049b48 t136;
  ETTSf3049b48 t137;
  ETTSf3049b48 t138;
  ETTSf3049b48 t139;
  ETTSf3049b48 t14;
  ETTSf3049b48 t140;
  ETTSf3049b48 t141;
  ETTSf3049b48 t142;
  ETTSf3049b48 t143;
  ETTSf3049b48 t144;
  ETTSf3049b48 t145;
  ETTSf3049b48 t146;
  ETTSf3049b48 t147;
  ETTSf3049b48 t148;
  ETTSf3049b48 t149;
  ETTSf3049b48 t15;
  ETTSf3049b48 t150;
  ETTSf3049b48 t151;
  ETTSf3049b48 t152;
  ETTSf3049b48 t153;
  ETTSf3049b48 t154;
  ETTSf3049b48 t155;
  ETTSf3049b48 t156;
  ETTSf3049b48 t157;
  ETTSf3049b48 t158;
  ETTSf3049b48 t159;
  ETTSf3049b48 t16;
  ETTSf3049b48 t160;
  ETTSf3049b48 t161;
  ETTSf3049b48 t162;
  ETTSf3049b48 t163;
  ETTSf3049b48 t164;
  ETTSf3049b48 t165;
  ETTSf3049b48 t166;
  ETTSf3049b48 t167;
  ETTSf3049b48 t168;
  ETTSf3049b48 t169;
  ETTSf3049b48 t17;
  ETTSf3049b48 t170;
  ETTSf3049b48 t171;
  ETTSf3049b48 t172;
  ETTSf3049b48 t173;
  ETTSf3049b48 t174;
  ETTSf3049b48 t175;
  ETTSf3049b48 t176;
  ETTSf3049b48 t177;
  ETTSf3049b48 t178;
  ETTSf3049b48 t179;
  ETTSf3049b48 t18;
  ETTSf3049b48 t180;
  ETTSf3049b48 t181;
  ETTSf3049b48 t182;
  ETTSf3049b48 t183;
  ETTSf3049b48 t184;
  ETTSf3049b48 t185;
  ETTSf3049b48 t186;
  ETTSf3049b48 t187;
  ETTSf3049b48 t188;
  ETTSf3049b48 t189;
  ETTSf3049b48 t19;
  ETTSf3049b48 t190;
  ETTSf3049b48 t191;
  ETTSf3049b48 t192;
  ETTSf3049b48 t193;
  ETTSf3049b48 t194;
  ETTSf3049b48 t195;
  ETTSf3049b48 t196;
  ETTSf3049b48 t197;
  ETTSf3049b48 t198;
  ETTSf3049b48 t199;
  ETTSf3049b48 t2;
  ETTSf3049b48 t20;
  ETTSf3049b48 t200;
  ETTSf3049b48 t201;
  ETTSf3049b48 t202;
  ETTSf3049b48 t203;
  ETTSf3049b48 t204;
  ETTSf3049b48 t205;
  ETTSf3049b48 t206;
  ETTSf3049b48 t207;
  ETTSf3049b48 t208;
  ETTSf3049b48 t209;
  ETTSf3049b48 t21;
  ETTSf3049b48 t210;
  ETTSf3049b48 t211;
  ETTSf3049b48 t212;
  ETTSf3049b48 t213;
  ETTSf3049b48 t214;
  ETTSf3049b48 t215;
  ETTSf3049b48 t216;
  ETTSf3049b48 t217;
  ETTSf3049b48 t218;
  ETTSf3049b48 t219;
  ETTSf3049b48 t22;
  ETTSf3049b48 t220;
  ETTSf3049b48 t221;
  ETTSf3049b48 t222;
  ETTSf3049b48 t223;
  ETTSf3049b48 t224;
  ETTSf3049b48 t225;
  ETTSf3049b48 t226;
  ETTSf3049b48 t227;
  ETTSf3049b48 t228;
  ETTSf3049b48 t229;
  ETTSf3049b48 t23;
  ETTSf3049b48 t230;
  ETTSf3049b48 t231;
  ETTSf3049b48 t232;
  ETTSf3049b48 t233;
  ETTSf3049b48 t234;
  ETTSf3049b48 t235;
  ETTSf3049b48 t236;
  ETTSf3049b48 t237;
  ETTSf3049b48 t238;
  ETTSf3049b48 t239;
  ETTSf3049b48 t24;
  ETTSf3049b48 t240;
  ETTSf3049b48 t241;
  ETTSf3049b48 t242;
  ETTSf3049b48 t243;
  ETTSf3049b48 t244;
  ETTSf3049b48 t245;
  ETTSf3049b48 t246;
  ETTSf3049b48 t247;
  ETTSf3049b48 t248;
  ETTSf3049b48 t249;
  ETTSf3049b48 t25;
  ETTSf3049b48 t250;
  ETTSf3049b48 t251;
  ETTSf3049b48 t252;
  ETTSf3049b48 t253;
  ETTSf3049b48 t254;
  ETTSf3049b48 t255;
  ETTSf3049b48 t256;
  ETTSf3049b48 t257;
  ETTSf3049b48 t258;
  ETTSf3049b48 t259;
  ETTSf3049b48 t26;
  ETTSf3049b48 t260;
  ETTSf3049b48 t261;
  ETTSf3049b48 t262;
  ETTSf3049b48 t263;
  ETTSf3049b48 t264;
  ETTSf3049b48 t265;
  ETTSf3049b48 t266;
  ETTSf3049b48 t267;
  ETTSf3049b48 t268;
  ETTSf3049b48 t269;
  ETTSf3049b48 t27;
  ETTSf3049b48 t270;
  ETTSf3049b48 t271;
  ETTSf3049b48 t272;
  ETTSf3049b48 t273;
  ETTSf3049b48 t274;
  ETTSf3049b48 t275;
  ETTSf3049b48 t276;
  ETTSf3049b48 t277;
  ETTSf3049b48 t278;
  ETTSf3049b48 t279;
  ETTSf3049b48 t28;
  ETTSf3049b48 t280;
  ETTSf3049b48 t29;
  ETTSf3049b48 t3;
  ETTSf3049b48 t30;
  ETTSf3049b48 t31;
  ETTSf3049b48 t32;
  ETTSf3049b48 t33;
  ETTSf3049b48 t34;
  ETTSf3049b48 t35;
  ETTSf3049b48 t36;
  ETTSf3049b48 t37;
  ETTSf3049b48 t38;
  ETTSf3049b48 t39;
  ETTSf3049b48 t4;
  ETTSf3049b48 t40;
  ETTSf3049b48 t41;
  ETTSf3049b48 t42;
  ETTSf3049b48 t43;
  ETTSf3049b48 t44;
  ETTSf3049b48 t45;
  ETTSf3049b48 t46;
  ETTSf3049b48 t47;
  ETTSf3049b48 t48;
  ETTSf3049b48 t49;
  ETTSf3049b48 t5;
  ETTSf3049b48 t50;
  ETTSf3049b48 t51;
  ETTSf3049b48 t52;
  ETTSf3049b48 t53;
  ETTSf3049b48 t54;
  ETTSf3049b48 t55;
  ETTSf3049b48 t56;
  ETTSf3049b48 t57;
  ETTSf3049b48 t58;
  ETTSf3049b48 t59;
  ETTSf3049b48 t6;
  ETTSf3049b48 t60;
  ETTSf3049b48 t61;
  ETTSf3049b48 t62;
  ETTSf3049b48 t63;
  ETTSf3049b48 t64;
  ETTSf3049b48 t65;
  ETTSf3049b48 t66;
  ETTSf3049b48 t67;
  ETTSf3049b48 t68;
  ETTSf3049b48 t69;
  ETTSf3049b48 t7;
  ETTSf3049b48 t70;
  ETTSf3049b48 t71;
  ETTSf3049b48 t72;
  ETTSf3049b48 t73;
  ETTSf3049b48 t74;
  ETTSf3049b48 t75;
  ETTSf3049b48 t76;
  ETTSf3049b48 t77;
  ETTSf3049b48 t78;
  ETTSf3049b48 t79;
  ETTSf3049b48 t8;
  ETTSf3049b48 t80;
  ETTSf3049b48 t81;
  ETTSf3049b48 t82;
  ETTSf3049b48 t83;
  ETTSf3049b48 t84;
  ETTSf3049b48 t85;
  ETTSf3049b48 t86;
  ETTSf3049b48 t87;
  ETTSf3049b48 t88;
  ETTSf3049b48 t89;
  ETTSf3049b48 t9;
  ETTSf3049b48 t90;
  ETTSf3049b48 t91;
  ETTSf3049b48 t92;
  ETTSf3049b48 t93;
  ETTSf3049b48 t94;
  ETTSf3049b48 t95;
  ETTSf3049b48 t96;
  ETTSf3049b48 t97;
  ETTSf3049b48 t98;
  ETTSf3049b48 t99;
  real_T nonscalar0[40];
  real_T nonscalar3[40];
  real_T nonscalar1[10];
  real_T nonscalar2[4];
  real_T t2890[1];
  real_T t344[1];
  real_T Accumalator_Module_Five1_Battery_Table_Based10_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based11_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based13_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based15_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based16_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based16_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based17_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based18_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based1_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based1_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based21_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based22_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based22_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based23_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based25_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based26_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based27_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based29_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based31_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based33_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based37_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based38_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based3_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based40_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based42_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based44_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based45_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based47_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based48_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based4_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based50_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based53_electricalModel_v;
  real_T Accumalator_Module_Five1_Battery_Table_Based54_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based59_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based5_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based7_electricalModel_xVint;
  real_T Accumalator_Module_Five1_Battery_Table_Based8_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based9_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based10_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based10_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based11_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based12_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based13_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based15_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based15_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based16_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based17_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based18_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based1_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based20_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based20_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based21_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based22_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based22_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based23_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based23_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based25_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based26_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based27_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based2_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based30_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based30_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based31_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based32_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based33_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based33_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based34_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based34_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based35_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based37_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based38_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based41_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based42_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based43_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based44_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based44_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based47_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based48_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based4_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based4_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based50_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based51_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based52_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based52_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based53_electricalModel_v;
  real_T Accumalator_Module_One1_Battery_Table_Based53_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based58_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based5_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based6_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based7_electricalModel_xVint;
  real_T Accumalator_Module_One1_Battery_Table_Based8_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based12_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based13_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based13_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based18_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based20_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based21_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based23_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based23_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based24_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based25_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based29_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based31_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based33_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based34_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based35_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based37_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based38_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based40_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based41_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based42_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based44_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based4_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based50_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based51_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based52_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based53_electricalModel_v;
  real_T Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based59_electricalModel_xVint;
  real_T Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based7_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based10_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based11_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based12_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based13_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based14_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based15_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based16_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based17_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based18_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based1_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based1_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based20_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based21_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based22_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based23_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based26_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based29_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based2_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based30_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based31_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based33_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based33_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based34_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based36_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based37_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based38_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based41_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based42_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based43_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based44_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based44_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based45_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based47_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based48_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based49_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based4_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based51_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based52_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based52_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based53_electricalModel_v;
  real_T Accumalator_Module_Two_Battery_Table_Based53_electricalModel_xVint;
  real_T Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based58_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based10_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based11_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based11_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based12_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based13_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based15_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based16_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based16_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based17_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based17_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based18_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based19_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based1_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based20_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based20_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based21_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based21_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based22_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based23_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based24_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based26_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based28_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based29_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based2_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based30_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based31_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based32_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based33_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based33_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based34_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based35_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based36_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based37_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based3_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based41_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based41_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based42_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based43_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based44_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based45_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based46_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based47_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based47_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based48_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based49_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based4_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based50_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based51_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based51_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based52_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based53_electricalModel_v;
  real_T Accumalator_Module_four_Battery_Table_Based53_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based58_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based59_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based5_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based6_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based7_electricalModel_xVint;
  real_T Accumalator_Module_four_Battery_Table_Based8_stateOfCharge;
  real_T Three_phase_inverter_IGBT_BH_diode_private_Diode_v_diode;
  real_T Three_phase_inverter_IGBT_BL_diode_i;
  real_T Three_phase_inverter_IGBT_CH_diode_private_Diode_v_diode;
  real_T Three_phase_inverter_IGBT_CL_diode_i;
  real_T intrm_sf_mf_10;
  real_T intrm_sf_mf_103;
  real_T intrm_sf_mf_104;
  real_T intrm_sf_mf_107;
  real_T intrm_sf_mf_108;
  real_T intrm_sf_mf_109;
  real_T intrm_sf_mf_11;
  real_T intrm_sf_mf_110;
  real_T intrm_sf_mf_112;
  real_T intrm_sf_mf_113;
  real_T intrm_sf_mf_117;
  real_T intrm_sf_mf_121;
  real_T intrm_sf_mf_126;
  real_T intrm_sf_mf_127;
  real_T intrm_sf_mf_13;
  real_T intrm_sf_mf_130;
  real_T intrm_sf_mf_133;
  real_T intrm_sf_mf_136;
  real_T intrm_sf_mf_137;
  real_T intrm_sf_mf_138;
  real_T intrm_sf_mf_139;
  real_T intrm_sf_mf_14;
  real_T intrm_sf_mf_140;
  real_T intrm_sf_mf_142;
  real_T intrm_sf_mf_143;
  real_T intrm_sf_mf_144;
  real_T intrm_sf_mf_145;
  real_T intrm_sf_mf_146;
  real_T intrm_sf_mf_148;
  real_T intrm_sf_mf_15;
  real_T intrm_sf_mf_150;
  real_T intrm_sf_mf_156;
  real_T intrm_sf_mf_158;
  real_T intrm_sf_mf_161;
  real_T intrm_sf_mf_165;
  real_T intrm_sf_mf_166;
  real_T intrm_sf_mf_17;
  real_T intrm_sf_mf_170;
  real_T intrm_sf_mf_174;
  real_T intrm_sf_mf_176;
  real_T intrm_sf_mf_179;
  real_T intrm_sf_mf_181;
  real_T intrm_sf_mf_184;
  real_T intrm_sf_mf_186;
  real_T intrm_sf_mf_187;
  real_T intrm_sf_mf_188;
  real_T intrm_sf_mf_189;
  real_T intrm_sf_mf_190;
  real_T intrm_sf_mf_191;
  real_T intrm_sf_mf_192;
  real_T intrm_sf_mf_20;
  real_T intrm_sf_mf_200;
  real_T intrm_sf_mf_201;
  real_T intrm_sf_mf_203;
  real_T intrm_sf_mf_204;
  real_T intrm_sf_mf_206;
  real_T intrm_sf_mf_207;
  real_T intrm_sf_mf_211;
  real_T intrm_sf_mf_213;
  real_T intrm_sf_mf_215;
  real_T intrm_sf_mf_219;
  real_T intrm_sf_mf_221;
  real_T intrm_sf_mf_222;
  real_T intrm_sf_mf_224;
  real_T intrm_sf_mf_225;
  real_T intrm_sf_mf_226;
  real_T intrm_sf_mf_228;
  real_T intrm_sf_mf_229;
  real_T intrm_sf_mf_232;
  real_T intrm_sf_mf_237;
  real_T intrm_sf_mf_239;
  real_T intrm_sf_mf_240;
  real_T intrm_sf_mf_241;
  real_T intrm_sf_mf_242;
  real_T intrm_sf_mf_243;
  real_T intrm_sf_mf_244;
  real_T intrm_sf_mf_245;
  real_T intrm_sf_mf_247;
  real_T intrm_sf_mf_249;
  real_T intrm_sf_mf_250;
  real_T intrm_sf_mf_251;
  real_T intrm_sf_mf_252;
  real_T intrm_sf_mf_254;
  real_T intrm_sf_mf_255;
  real_T intrm_sf_mf_258;
  real_T intrm_sf_mf_260;
  real_T intrm_sf_mf_263;
  real_T intrm_sf_mf_264;
  real_T intrm_sf_mf_265;
  real_T intrm_sf_mf_266;
  real_T intrm_sf_mf_267;
  real_T intrm_sf_mf_268;
  real_T intrm_sf_mf_274;
  real_T intrm_sf_mf_275;
  real_T intrm_sf_mf_28;
  real_T intrm_sf_mf_3;
  real_T intrm_sf_mf_33;
  real_T intrm_sf_mf_39;
  real_T intrm_sf_mf_4;
  real_T intrm_sf_mf_41;
  real_T intrm_sf_mf_43;
  real_T intrm_sf_mf_47;
  real_T intrm_sf_mf_5;
  real_T intrm_sf_mf_50;
  real_T intrm_sf_mf_52;
  real_T intrm_sf_mf_53;
  real_T intrm_sf_mf_55;
  real_T intrm_sf_mf_57;
  real_T intrm_sf_mf_58;
  real_T intrm_sf_mf_6;
  real_T intrm_sf_mf_61;
  real_T intrm_sf_mf_63;
  real_T intrm_sf_mf_64;
  real_T intrm_sf_mf_65;
  real_T intrm_sf_mf_67;
  real_T intrm_sf_mf_68;
  real_T intrm_sf_mf_7;
  real_T intrm_sf_mf_71;
  real_T intrm_sf_mf_73;
  real_T intrm_sf_mf_75;
  real_T intrm_sf_mf_78;
  real_T intrm_sf_mf_79;
  real_T intrm_sf_mf_8;
  real_T intrm_sf_mf_80;
  real_T intrm_sf_mf_84;
  real_T intrm_sf_mf_85;
  real_T intrm_sf_mf_86;
  real_T intrm_sf_mf_89;
  real_T intrm_sf_mf_92;
  real_T intrm_sf_mf_95;
  real_T intrm_sf_mf_98;
  real_T t282;
  real_T t284;
  real_T t290;
  real_T t296;
  real_T t4785;
  real_T t4787;
  real_T t4789;
  real_T t4790;
  real_T t4791;
  real_T t4792;
  real_T t4793;
  real_T t4794;
  real_T t4795;
  real_T zc_int0;
  real_T zc_int1;
  real_T zc_int102;
  real_T zc_int103;
  real_T zc_int106;
  real_T zc_int109;
  real_T zc_int111;
  real_T zc_int112;
  real_T zc_int115;
  real_T zc_int121;
  real_T zc_int123;
  real_T zc_int127;
  real_T zc_int130;
  real_T zc_int132;
  real_T zc_int133;
  real_T zc_int136;
  real_T zc_int139;
  real_T zc_int144;
  real_T zc_int145;
  real_T zc_int147;
  real_T zc_int148;
  real_T zc_int154;
  real_T zc_int159;
  real_T zc_int160;
  real_T zc_int163;
  real_T zc_int169;
  real_T zc_int171;
  real_T zc_int177;
  real_T zc_int178;
  real_T zc_int18;
  real_T zc_int181;
  real_T zc_int183;
  real_T zc_int186;
  real_T zc_int187;
  real_T zc_int190;
  real_T zc_int192;
  real_T zc_int195;
  real_T zc_int199;
  real_T zc_int208;
  real_T zc_int21;
  real_T zc_int211;
  real_T zc_int217;
  real_T zc_int219;
  real_T zc_int223;
  real_T zc_int229;
  real_T zc_int232;
  real_T zc_int237;
  real_T zc_int243;
  real_T zc_int244;
  real_T zc_int247;
  real_T zc_int25;
  real_T zc_int258;
  real_T zc_int262;
  real_T zc_int265;
  real_T zc_int267;
  real_T zc_int270;
  real_T zc_int271;
  real_T zc_int273;
  real_T zc_int274;
  real_T zc_int276;
  real_T zc_int279;
  real_T zc_int28;
  real_T zc_int282;
  real_T zc_int283;
  real_T zc_int288;
  real_T zc_int289;
  real_T zc_int292;
  real_T zc_int298;
  real_T zc_int3;
  real_T zc_int30;
  real_T zc_int301;
  real_T zc_int304;
  real_T zc_int307;
  real_T zc_int310;
  real_T zc_int316;
  real_T zc_int319;
  real_T zc_int334;
  real_T zc_int336;
  real_T zc_int343;
  real_T zc_int346;
  real_T zc_int348;
  real_T zc_int349;
  real_T zc_int355;
  real_T zc_int358;
  real_T zc_int360;
  real_T zc_int361;
  real_T zc_int367;
  real_T zc_int369;
  real_T zc_int37;
  real_T zc_int373;
  real_T zc_int375;
  real_T zc_int376;
  real_T zc_int378;
  real_T zc_int385;
  real_T zc_int388;
  real_T zc_int394;
  real_T zc_int396;
  real_T zc_int397;
  real_T zc_int40;
  real_T zc_int400;
  real_T zc_int403;
  real_T zc_int406;
  real_T zc_int414;
  real_T zc_int424;
  real_T zc_int426;
  real_T zc_int435;
  real_T zc_int438;
  real_T zc_int442;
  real_T zc_int444;
  real_T zc_int448;
  real_T zc_int453;
  real_T zc_int454;
  real_T zc_int457;
  real_T zc_int46;
  real_T zc_int460;
  real_T zc_int463;
  real_T zc_int465;
  real_T zc_int466;
  real_T zc_int471;
  real_T zc_int472;
  real_T zc_int478;
  real_T zc_int480;
  real_T zc_int481;
  real_T zc_int483;
  real_T zc_int487;
  real_T zc_int49;
  real_T zc_int490;
  real_T zc_int493;
  real_T zc_int501;
  real_T zc_int502;
  real_T zc_int504;
  real_T zc_int505;
  real_T zc_int508;
  real_T zc_int51;
  real_T zc_int514;
  real_T zc_int517;
  real_T zc_int519;
  real_T zc_int52;
  real_T zc_int526;
  real_T zc_int532;
  real_T zc_int535;
  real_T zc_int537;
  real_T zc_int54;
  real_T zc_int540;
  real_T zc_int541;
  real_T zc_int547;
  real_T zc_int55;
  real_T zc_int550;
  real_T zc_int552;
  real_T zc_int556;
  real_T zc_int570;
  real_T zc_int576;
  real_T zc_int58;
  real_T zc_int582;
  real_T zc_int583;
  real_T zc_int586;
  real_T zc_int588;
  real_T zc_int589;
  real_T zc_int595;
  real_T zc_int60;
  real_T zc_int603;
  real_T zc_int606;
  real_T zc_int607;
  real_T zc_int610;
  real_T zc_int612;
  real_T zc_int615;
  real_T zc_int616;
  real_T zc_int618;
  real_T zc_int625;
  real_T zc_int628;
  real_T zc_int63;
  real_T zc_int630;
  real_T zc_int631;
  real_T zc_int637;
  real_T zc_int639;
  real_T zc_int642;
  real_T zc_int643;
  real_T zc_int649;
  real_T zc_int652;
  real_T zc_int655;
  real_T zc_int66;
  real_T zc_int660;
  real_T zc_int661;
  real_T zc_int666;
  real_T zc_int669;
  real_T zc_int67;
  real_T zc_int678;
  real_T zc_int682;
  real_T zc_int684;
  real_T zc_int687;
  real_T zc_int69;
  real_T zc_int690;
  real_T zc_int691;
  real_T zc_int693;
  real_T zc_int694;
  real_T zc_int7;
  real_T zc_int70;
  real_T zc_int703;
  real_T zc_int706;
  real_T zc_int708;
  real_T zc_int709;
  real_T zc_int715;
  real_T zc_int717;
  real_T zc_int72;
  real_T zc_int720;
  real_T zc_int726;
  real_T zc_int729;
  real_T zc_int730;
  real_T zc_int732;
  real_T zc_int739;
  real_T zc_int744;
  real_T zc_int745;
  real_T zc_int747;
  real_T zc_int750;
  real_T zc_int756;
  real_T zc_int76;
  real_T zc_int765;
  real_T zc_int768;
  real_T zc_int769;
  real_T zc_int771;
  real_T zc_int772;
  real_T zc_int774;
  real_T zc_int777;
  real_T zc_int778;
  real_T zc_int780;
  real_T zc_int783;
  real_T zc_int784;
  real_T zc_int786;
  real_T zc_int787;
  real_T zc_int789;
  real_T zc_int808;
  real_T zc_int810;
  real_T zc_int811;
  real_T zc_int814;
  real_T zc_int816;
  real_T zc_int817;
  real_T zc_int82;
  real_T zc_int822;
  real_T zc_int829;
  real_T zc_int832;
  real_T zc_int835;
  real_T zc_int838;
  real_T zc_int84;
  real_T zc_int87;
  real_T zc_int88;
  real_T zc_int9;
  real_T zc_int91;
  real_T zc_int94;
  real_T zc_int97;
  real_T zc_int99;
  size_t t301[1];
  size_t t303[1];
  size_t t3394[1];
  size_t t3682;
  size_t t3872;
  size_t t4026;
  Accumalator_Module_Five1_Battery_Table_Based1_electricalModel_v =
    -t5361->mX.mX[4UL] + t5361->mX.mX[5UL];
  t344[0UL] = t5361->mX.mX[0UL] * 5.5555555555555558E-5;
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
  t3394[0] = 10UL;
  t301[0] = 1UL;
  tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL],
    &t119.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  t344[0] = 298.15;
  t303[0] = 4UL;
  tlu2_linear_nearest_prelookup(&t6.mField0[0UL], &t6.mField1[0UL], &t6.mField2
    [0UL], &nonscalar2[0UL], &t344[0UL], &t303[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based1_stateOfCharge = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based10_electricalModel_v =
    -t5361->mX.mX[13UL] + t5361->mX.mX[14UL];
  t344[0UL] = t5361->mX.mX[11UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t94.mField0[0UL], &t94.mField1[0UL],
    &t94.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t94.mField0[0UL], &t94.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int40 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based11_electricalModel_v =
    -t5361->mX.mX[22UL] + t5361->mX.mX[23UL];
  t344[0UL] = t5361->mX.mX[20UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t26.mField0[0UL], &t26.mField1[0UL],
    &t26.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t26.mField0[0UL], &t26.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int70 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_v =
    -t5361->mX.mX[31UL] + t5361->mX.mX[32UL];
  t344[0UL] = t5361->mX.mX[29UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t188.mField0[0UL], &t188.mField1[0UL],
    &t188.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t188.mField0[0UL], &t188.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Five1_Battery_Table_Based13_electricalModel_v =
    -t5361->mX.mX[32UL] + t5361->mX.mX[40UL];
  t344[0UL] = t5361->mX.mX[38UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t183.mField0[0UL], &t183.mField1[0UL],
    &t183.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t183.mField0[0UL], &t183.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int130 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[46UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t44.mField0[0UL], &t44.mField1[0UL],
    &t44.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t44.mField0[0UL], &t44.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int160 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based15_electricalModel_v =
    -t5361->mX.mX[54UL] + t5361->mX.mX[22UL];
  t344[0UL] = t5361->mX.mX[52UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t254.mField0[0UL], &t254.mField1[0UL],
    &t254.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t254.mField0[0UL], &t254.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int190 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based16_electricalModel_v =
    -t5361->mX.mX[62UL] + t5361->mX.mX[54UL];
  t344[0UL] = t5361->mX.mX[60UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t17.mField0[0UL], &t17.mField1[0UL],
    &t17.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t17.mField0[0UL], &t17.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based16_stateOfCharge = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based17_electricalModel_v =
    -t5361->mX.mX[23UL] + t5361->mX.mX[13UL];
  t344[0UL] = t5361->mX.mX[68UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t233.mField0[0UL], &t233.mField1[0UL],
    &t233.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t233.mField0[0UL], &t233.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[75UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t51.mField0[0UL], &t51.mField1[0UL],
    &t51.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t51.mField0[0UL], &t51.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based18_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[81UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t197.mField0[0UL], &t197.mField1[0UL],
    &t197.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t197.mField0[0UL], &t197.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int310 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_v =
    -t5361->mX.mX[5UL] + t5361->mX.mX[31UL];
  t344[0UL] = t5361->mX.mX[87UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t134.mField0[0UL], &t134.mField1[0UL],
    &t134.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t134.mField0[0UL], &t134.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_v =
    -t5361->mX.mX[96UL] + t5361->mX.mX[97UL];
  t344[0UL] = t5361->mX.mX[94UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t181.mField0[0UL], &t181.mField1[0UL],
    &t181.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t181.mField0[0UL], &t181.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Five1_Battery_Table_Based21_electricalModel_v =
    -t5361->mX.mX[105UL] + t5361->mX.mX[106UL];
  t344[0UL] = t5361->mX.mX[103UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t179.mField0[0UL], &t179.mField1[0UL],
    &t179.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t179.mField0[0UL], &t179.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int400 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based22_electricalModel_v =
    -t5361->mX.mX[106UL] + t5361->mX.mX[62UL];
  t344[0UL] = t5361->mX.mX[112UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t266.mField0[0UL], &t266.mField1[0UL],
    &t266.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t266.mField0[0UL], &t266.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based22_stateOfCharge = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based23_electricalModel_v =
    -t5361->mX.mX[97UL] + t5361->mX.mX[105UL];
  t344[0UL] = t5361->mX.mX[119UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t152.mField0[0UL], &t152.mField1[0UL],
    &t152.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t152.mField0[0UL], &t152.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int460 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[126UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t169.mField0[0UL], &t169.mField1[0UL],
    &t169.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t169.mField0[0UL], &t169.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int490 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[132UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t265.mField0[0UL], &t265.mField1[0UL],
    &t265.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t265.mField0[0UL], &t265.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based25_stateOfCharge = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based26_electricalModel_v =
    -t5361->mX.mX[140UL] + t5361->mX.mX[96UL];
  t344[0UL] = t5361->mX.mX[138UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t155.mField0[0UL], &t155.mField1[0UL],
    &t155.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t155.mField0[0UL], &t155.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int550 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[146UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t66.mField0[0UL], &t66.mField1[0UL],
    &t66.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t66.mField0[0UL], &t66.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based27_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[152UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t249.mField0[0UL], &t249.mField1[0UL],
    &t249.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t249.mField0[0UL], &t249.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int610 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[158UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t184.mField0[0UL], &t184.mField1[0UL],
    &t184.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t184.mField0[0UL], &t184.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based29_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[164UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t280.mField0[0UL], &t280.mField1[0UL],
    &t280.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t280.mField0[0UL], &t280.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based3_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_v =
    -t5361->mX.mX[172UL] + t5361->mX.mX[173UL];
  t344[0UL] = t5361->mX.mX[170UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t211.mField0[0UL], &t211.mField1[0UL],
    &t211.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t211.mField0[0UL], &t211.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Five1_Battery_Table_Based31_electricalModel_v =
    -t5361->mX.mX[181UL] + t5361->mX.mX[182UL];
  t344[0UL] = t5361->mX.mX[179UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t58.mField0[0UL], &t58.mField1[0UL],
    &t58.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t58.mField0[0UL], &t58.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int730 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[188UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t3.mField0[0UL], &t3.mField1[0UL], &t3.mField2
    [0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t3.mField0[0UL], &t3.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based33_electricalModel_v =
    -t5361->mX.mX[182UL] + t5361->mX.mX[140UL];
  t344[0UL] = t5361->mX.mX[194UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t85.mField0[0UL], &t85.mField1[0UL],
    &t85.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t85.mField0[0UL], &t85.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_v =
    -t5361->mX.mX[173UL] + t5361->mX.mX[181UL];
  t344[0UL] = t5361->mX.mX[201UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t70.mField0[0UL], &t70.mField1[0UL],
    &t70.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t70.mField0[0UL], &t70.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[208UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t227.mField0[0UL], &t227.mField1[0UL],
    &t227.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t227.mField0[0UL], &t227.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int87 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[214UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t96.mField0[0UL], &t96.mField1[0UL],
    &t96.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t96.mField0[0UL], &t96.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int9 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based37_electricalModel_v =
    -t5361->mX.mX[222UL] + t5361->mX.mX[172UL];
  t344[0UL] = t5361->mX.mX[220UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t269.mField0[0UL], &t269.mField1[0UL],
    &t269.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t269.mField0[0UL], &t269.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[228UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t267.mField0[0UL], &t267.mField1[0UL],
    &t267.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t267.mField0[0UL], &t267.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based38_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[234UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t78.mField0[0UL], &t78.mField1[0UL],
    &t78.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int99 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based4_electricalModel_v =
    -t5361->mX.mX[14UL] + t5361->mX.mX[4UL];
  t344[0UL] = t5361->mX.mX[240UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t60.mField0[0UL], &t60.mField1[0UL],
    &t60.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t60.mField0[0UL], &t60.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int102 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[247UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t42.mField0[0UL], &t42.mField1[0UL],
    &t42.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t42.mField0[0UL], &t42.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based40_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_v =
    -t5361->mX.mX[255UL] + t5361->mX.mX[256UL];
  t344[0UL] = t5361->mX.mX[253UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t198.mField0[0UL], &t198.mField1[0UL],
    &t198.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t198.mField0[0UL], &t198.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Five1_Battery_Table_Based42_electricalModel_v =
    -t5361->mX.mX[264UL] + t5361->mX.mX[265UL];
  t344[0UL] = t5361->mX.mX[262UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t7.mField0[0UL], &t7.mField1[0UL], &t7.mField2
    [0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t7.mField0[0UL], &t7.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int111 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_v =
    -t5361->mX.mX[265UL] + t5361->mX.mX[222UL];
  t344[0UL] = t5361->mX.mX[271UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t200.mField0[0UL], &t200.mField1[0UL],
    &t200.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t200.mField0[0UL], &t200.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Five1_Battery_Table_Based44_electricalModel_v =
    -t5361->mX.mX[256UL] + t5361->mX.mX[264UL];
  t344[0UL] = t5361->mX.mX[278UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[285UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t127.mField0[0UL], &t127.mField1[0UL],
    &t127.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t127.mField0[0UL], &t127.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based45_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[291UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t29.mField0[0UL], &t29.mField1[0UL],
    &t29.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t29.mField0[0UL], &t29.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int123 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based47_electricalModel_v =
    -t5361->mX.mX[299UL] + t5361->mX.mX[255UL];
  t344[0UL] = t5361->mX.mX[297UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t72.mField0[0UL], &t72.mField1[0UL],
    &t72.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t72.mField0[0UL], &t72.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[305UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t4.mField0[0UL], &t4.mField1[0UL], &t4.mField2
    [0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t4.mField0[0UL], &t4.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based48_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[311UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t53.mField0[0UL], &t53.mField1[0UL],
    &t53.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t53.mField0[0UL], &t53.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int132 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[317UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t136.mField0[0UL], &t136.mField1[0UL],
    &t136.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t136.mField0[0UL], &t136.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based5_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[323UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t241.mField0[0UL], &t241.mField1[0UL],
    &t241.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t241.mField0[0UL], &t241.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based50_stateOfCharge = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_v =
    -t5361->mX.mX[40UL] + t5361->mX.mX[331UL];
  t344[0UL] = t5361->mX.mX[329UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t214.mField0[0UL], &t214.mField1[0UL],
    &t214.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t214.mField0[0UL], &t214.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[337UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t73.mField0[0UL], &t73.mField1[0UL],
    &t73.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t73.mField0[0UL], &t73.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int144 = t2890[0UL];
  Accumalator_Module_Five1_Battery_Table_Based53_electricalModel_v =
    -t5361->mX.mX[339UL] + t5361->mX.mX[299UL];
  t344[0UL] = t5361->mX.mX[345UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t171.mField0[0UL], &t171.mField1[0UL],
    &t171.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t171.mField0[0UL], &t171.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int147 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[352UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t206.mField0[0UL], &t206.mField1[0UL],
    &t206.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t206.mField0[0UL], &t206.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based54_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[358UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t140.mField0[0UL], &t140.mField1[0UL],
    &t140.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t140.mField0[0UL], &t140.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[364UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t24.mField0[0UL], &t24.mField1[0UL],
    &t24.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t24.mField0[0UL], &t24.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based59_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[370UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int159 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[376UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t120.mField0[0UL], &t120.mField1[0UL],
    &t120.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t120.mField0[0UL], &t120.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based7_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[382UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based8_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[388UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t201.mField0[0UL], &t201.mField1[0UL],
    &t201.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t201.mField0[0UL], &t201.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based9_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_One1_Battery_Table_Based1_electricalModel_v = -t5361->
    mX.mX[396UL] + t5361->mX.mX[397UL];
  t344[0UL] = t5361->mX.mX[394UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t213.mField0[0UL], &t213.mField1[0UL],
    &t213.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t213.mField0[0UL], &t213.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int171 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based10_electricalModel_v =
    -t5361->mX.mX[405UL] + t5361->mX.mX[406UL];
  t344[0UL] = t5361->mX.mX[403UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t231.mField0[0UL], &t231.mField1[0UL],
    &t231.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t231.mField0[0UL], &t231.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based10_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_One1_Battery_Table_Based11_electricalModel_v =
    -t5361->mX.mX[414UL] + t5361->mX.mX[415UL];
  t344[0UL] = t5361->mX.mX[412UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t202.mField0[0UL], &t202.mField1[0UL],
    &t202.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t202.mField0[0UL], &t202.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int177 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based12_electricalModel_v =
    -t5361->mX.mX[423UL] + t5361->mX.mX[424UL];
  t344[0UL] = t5361->mX.mX[421UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t170.mField0[0UL], &t170.mField1[0UL],
    &t170.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t170.mField0[0UL], &t170.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int18 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based13_electricalModel_v =
    -t5361->mX.mX[424UL] + t5361->mX.mX[432UL];
  t344[0UL] = t5361->mX.mX[430UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t215.mField0[0UL], &t215.mField1[0UL],
    &t215.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t215.mField0[0UL], &t215.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int183 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[438UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t55.mField0[0UL], &t55.mField1[0UL],
    &t55.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int186 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based15_electricalModel_v =
    -t5361->mX.mX[446UL] + t5361->mX.mX[414UL];
  t344[0UL] = t5361->mX.mX[444UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t246.mField0[0UL], &t246.mField1[0UL],
    &t246.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t246.mField0[0UL], &t246.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based15_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_One1_Battery_Table_Based16_electricalModel_v =
    -t5361->mX.mX[454UL] + t5361->mX.mX[446UL];
  t344[0UL] = t5361->mX.mX[452UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t219.mField0[0UL], &t219.mField1[0UL],
    &t219.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t219.mField0[0UL], &t219.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int192 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based17_electricalModel_v =
    -t5361->mX.mX[415UL] + t5361->mX.mX[405UL];
  t344[0UL] = t5361->mX.mX[460UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t230.mField0[0UL], &t230.mField1[0UL],
    &t230.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t230.mField0[0UL], &t230.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int195 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[467UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based18_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[473UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t145.mField0[0UL], &t145.mField1[0UL],
    &t145.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t145.mField0[0UL], &t145.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based2_electricalModel_v = -t5361->
    mX.mX[397UL] + t5361->mX.mX[423UL];
  t344[0UL] = t5361->mX.mX[479UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t235.mField0[0UL], &t235.mField1[0UL],
    &t235.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t235.mField0[0UL], &t235.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based20_electricalModel_v =
    -t5361->mX.mX[488UL] + t5361->mX.mX[489UL];
  t344[0UL] = t5361->mX.mX[486UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t191.mField0[0UL], &t191.mField1[0UL],
    &t191.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t191.mField0[0UL], &t191.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based20_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_One1_Battery_Table_Based21_electricalModel_v =
    -t5361->mX.mX[497UL] + t5361->mX.mX[498UL];
  t344[0UL] = t5361->mX.mX[495UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t185.mField0[0UL], &t185.mField1[0UL],
    &t185.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t185.mField0[0UL], &t185.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int21 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based22_electricalModel_v =
    -t5361->mX.mX[498UL] + t5361->mX.mX[454UL];
  t344[0UL] = t5361->mX.mX[504UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t121.mField0[0UL], &t121.mField1[0UL],
    &t121.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t121.mField0[0UL], &t121.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based22_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_One1_Battery_Table_Based23_electricalModel_v =
    -t5361->mX.mX[489UL] + t5361->mX.mX[497UL];
  t344[0UL] = t5361->mX.mX[511UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based23_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[518UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t234.mField0[0UL], &t234.mField1[0UL],
    &t234.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t234.mField0[0UL], &t234.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int219 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[524UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t163.mField0[0UL], &t163.mField1[0UL],
    &t163.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t163.mField0[0UL], &t163.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based25_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_One1_Battery_Table_Based26_electricalModel_v =
    -t5361->mX.mX[532UL] + t5361->mX.mX[488UL];
  t344[0UL] = t5361->mX.mX[530UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t59.mField0[0UL], &t59.mField1[0UL],
    &t59.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[538UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t111.mField0[0UL], &t111.mField1[0UL],
    &t111.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t111.mField0[0UL], &t111.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based27_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[544UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t91.mField0[0UL], &t91.mField1[0UL],
    &t91.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t91.mField0[0UL], &t91.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[550UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t253.mField0[0UL], &t253.mField1[0UL],
    &t253.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t253.mField0[0UL], &t253.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[556UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t34.mField0[0UL], &t34.mField1[0UL],
    &t34.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int237 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based30_electricalModel_v =
    -t5361->mX.mX[564UL] + t5361->mX.mX[565UL];
  t344[0UL] = t5361->mX.mX[562UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t98.mField0[0UL], &t98.mField1[0UL],
    &t98.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t98.mField0[0UL], &t98.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based30_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_One1_Battery_Table_Based31_electricalModel_v =
    -t5361->mX.mX[573UL] + t5361->mX.mX[574UL];
  t344[0UL] = t5361->mX.mX[571UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t86.mField0[0UL], &t86.mField1[0UL],
    &t86.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t86.mField0[0UL], &t86.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int243 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[580UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t245.mField0[0UL], &t245.mField1[0UL],
    &t245.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t245.mField0[0UL], &t245.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based32_stateOfCharge = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based33_electricalModel_v =
    -t5361->mX.mX[574UL] + t5361->mX.mX[532UL];
  t344[0UL] = t5361->mX.mX[586UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t192.mField0[0UL], &t192.mField1[0UL],
    &t192.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t192.mField0[0UL], &t192.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based33_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_One1_Battery_Table_Based34_electricalModel_v =
    -t5361->mX.mX[565UL] + t5361->mX.mX[573UL];
  t344[0UL] = t5361->mX.mX[593UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t106.mField0[0UL], &t106.mField1[0UL],
    &t106.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t106.mField0[0UL], &t106.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based34_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[600UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t248.mField0[0UL], &t248.mField1[0UL],
    &t248.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t248.mField0[0UL], &t248.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based35_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[606UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t33.mField0[0UL], &t33.mField1[0UL],
    &t33.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t33.mField0[0UL], &t33.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int258 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based37_electricalModel_v =
    -t5361->mX.mX[614UL] + t5361->mX.mX[564UL];
  t344[0UL] = t5361->mX.mX[612UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t264.mField0[0UL], &t264.mField1[0UL],
    &t264.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t264.mField0[0UL], &t264.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[620UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t139.mField0[0UL], &t139.mField1[0UL],
    &t139.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t139.mField0[0UL], &t139.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based38_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[626UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t178.mField0[0UL], &t178.mField1[0UL],
    &t178.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t178.mField0[0UL], &t178.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int267 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based4_electricalModel_v = -t5361->
    mX.mX[406UL] + t5361->mX.mX[396UL];
  t344[0UL] = t5361->mX.mX[632UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t10.mField0[0UL], &t10.mField1[0UL],
    &t10.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based4_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[639UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t63.mField0[0UL], &t63.mField1[0UL],
    &t63.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t63.mField0[0UL], &t63.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int273 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based41_electricalModel_v =
    -t5361->mX.mX[647UL] + t5361->mX.mX[648UL];
  t344[0UL] = t5361->mX.mX[645UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t148.mField0[0UL], &t148.mField1[0UL],
    &t148.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t148.mField0[0UL], &t148.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int276 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based42_electricalModel_v =
    -t5361->mX.mX[656UL] + t5361->mX.mX[657UL];
  t344[0UL] = t5361->mX.mX[654UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t109.mField0[0UL], &t109.mField1[0UL],
    &t109.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t109.mField0[0UL], &t109.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int279 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based43_electricalModel_v =
    -t5361->mX.mX[657UL] + t5361->mX.mX[614UL];
  t344[0UL] = t5361->mX.mX[663UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t52.mField0[0UL], &t52.mField1[0UL],
    &t52.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t52.mField0[0UL], &t52.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int282 = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based44_electricalModel_v =
    -t5361->mX.mX[648UL] + t5361->mX.mX[656UL];
  t344[0UL] = t5361->mX.mX[670UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t48.mField0[0UL], &t48.mField1[0UL],
    &t48.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t48.mField0[0UL], &t48.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based44_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[677UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t177.mField0[0UL], &t177.mField1[0UL],
    &t177.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t177.mField0[0UL], &t177.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int288 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[683UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t77.mField0[0UL], &t77.mField1[0UL],
    &t77.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t77.mField0[0UL], &t77.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based47_electricalModel_v =
    -t5361->mX.mX[691UL] + t5361->mX.mX[647UL];
  t344[0UL] = t5361->mX.mX[689UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[697UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t88.mField0[0UL], &t88.mField1[0UL],
    &t88.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t88.mField0[0UL], &t88.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based48_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[703UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t193.mField0[0UL], &t193.mField1[0UL],
    &t193.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t193.mField0[0UL], &t193.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int3 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[709UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t68.mField0[0UL], &t68.mField1[0UL],
    &t68.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t68.mField0[0UL], &t68.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based5_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[715UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t180.mField0[0UL], &t180.mField1[0UL],
    &t180.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t180.mField0[0UL], &t180.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based50_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_One1_Battery_Table_Based51_electricalModel_v =
    ((((((((-t5361->mX.mX[432UL] + t5361->mX.mX[2UL] * -0.01) + t5361->mX.mX[3UL]
           * -0.01) + t5361->mX.mX[729UL] * 0.01) + t5361->mX.mX[730UL] * -0.01)
        + t5361->mX.mX[731UL] * 0.01) + t5361->mX.mX[732UL] * -0.01) +
      t5361->mX.mX[733UL] * 0.01) + t5361->mX.mX[734UL] * -0.01) + t5361->mX.mX
    [728UL];
  t344[0UL] = t5361->mX.mX[721UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t173.mField0[0UL], &t173.mField1[0UL],
    &t173.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t173.mField0[0UL], &t173.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge = t2890[0UL];
  Accumalator_Module_One1_Battery_Table_Based52_electricalModel_v =
    -t5361->mX.mX[737UL] + t5361->mX.mX[738UL];
  t344[0UL] = t5361->mX.mX[735UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t46.mField0[0UL], &t46.mField1[0UL],
    &t46.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based52_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_One1_Battery_Table_Based53_electricalModel_v =
    -t5361->mX.mX[738UL] + t5361->mX.mX[691UL];
  t344[0UL] = t5361->mX.mX[744UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t116.mField0[0UL], &t116.mField1[0UL],
    &t116.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t116.mField0[0UL], &t116.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based53_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[751UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t76.mField0[0UL], &t76.mField1[0UL],
    &t76.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t76.mField0[0UL], &t76.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[757UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t243.mField0[0UL], &t243.mField1[0UL],
    &t243.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t243.mField0[0UL], &t243.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based58_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[763UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t137.mField0[0UL], &t137.mField1[0UL],
    &t137.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t137.mField0[0UL], &t137.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[769UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t1.mField0[0UL], &t1.mField1[0UL], &t1.mField2
    [0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t1.mField0[0UL], &t1.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based6_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[775UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t2.mField0[0UL], &t2.mField1[0UL], &t2.mField2
    [0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t2.mField0[0UL], &t2.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based7_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[781UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t209.mField0[0UL], &t209.mField1[0UL],
    &t209.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t209.mField0[0UL], &t209.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_One1_Battery_Table_Based8_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[787UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t255.mField0[0UL], &t255.mField1[0UL],
    &t255.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t255.mField0[0UL], &t255.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int336 = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_v =
    -t5361->mX.mX[795UL] + t5361->mX.mX[796UL];
  t344[0UL] = t5361->mX.mX[793UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t83.mField0[0UL], &t83.mField1[0UL],
    &t83.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t83.mField0[0UL], &t83.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_v =
    -t5361->mX.mX[804UL] + t5361->mX.mX[805UL];
  t344[0UL] = t5361->mX.mX[802UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t189.mField0[0UL], &t189.mField1[0UL],
    &t189.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t189.mField0[0UL], &t189.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_v =
    -t5361->mX.mX[813UL] + t5361->mX.mX[814UL];
  t344[0UL] = t5361->mX.mX[811UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t89.mField0[0UL], &t89.mField1[0UL],
    &t89.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t89.mField0[0UL], &t89.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based12_electricalModel_v =
    -t5361->mX.mX[822UL] + t5361->mX.mX[823UL];
  t344[0UL] = t5361->mX.mX[820UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t128.mField0[0UL], &t128.mField1[0UL],
    &t128.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t128.mField0[0UL], &t128.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int348 = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based13_electricalModel_v =
    -t5361->mX.mX[823UL] + t5361->mX.mX[831UL];
  t344[0UL] = t5361->mX.mX[829UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t244.mField0[0UL], &t244.mField1[0UL],
    &t244.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t244.mField0[0UL], &t244.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based13_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[837UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t236.mField0[0UL], &t236.mField1[0UL],
    &t236.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t236.mField0[0UL], &t236.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_v =
    -t5361->mX.mX[845UL] + t5361->mX.mX[813UL];
  t344[0UL] = t5361->mX.mX[843UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t84.mField0[0UL], &t84.mField1[0UL],
    &t84.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t84.mField0[0UL], &t84.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_v =
    -t5361->mX.mX[853UL] + t5361->mX.mX[845UL];
  t344[0UL] = t5361->mX.mX[851UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t9.mField0[0UL], &t9.mField1[0UL], &t9.mField2
    [0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t9.mField0[0UL], &t9.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_v =
    -t5361->mX.mX[814UL] + t5361->mX.mX[804UL];
  t344[0UL] = t5361->mX.mX[859UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t225.mField0[0UL], &t225.mField1[0UL],
    &t225.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t225.mField0[0UL], &t225.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[866UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t114.mField0[0UL], &t114.mField1[0UL],
    &t114.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t114.mField0[0UL], &t114.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based18_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[872UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t257.mField0[0UL], &t257.mField1[0UL],
    &t257.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t257.mField0[0UL], &t257.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int369 = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_v =
    -t5361->mX.mX[796UL] + t5361->mX.mX[822UL];
  t344[0UL] = t5361->mX.mX[878UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t64.mField0[0UL], &t64.mField1[0UL],
    &t64.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t64.mField0[0UL], &t64.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based20_electricalModel_v =
    -t5361->mX.mX[887UL] + t5361->mX.mX[888UL];
  t344[0UL] = t5361->mX.mX[885UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t35.mField0[0UL], &t35.mField1[0UL],
    &t35.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t35.mField0[0UL], &t35.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int375 = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based21_electricalModel_v =
    -t5361->mX.mX[896UL] + t5361->mX.mX[897UL];
  t344[0UL] = t5361->mX.mX[894UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t199.mField0[0UL], &t199.mField1[0UL],
    &t199.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t199.mField0[0UL], &t199.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int378 = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_v =
    -t5361->mX.mX[897UL] + t5361->mX.mX[853UL];
  t344[0UL] = t5361->mX.mX[903UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t13.mField0[0UL], &t13.mField1[0UL],
    &t13.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t13.mField0[0UL], &t13.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based23_electricalModel_v =
    -t5361->mX.mX[888UL] + t5361->mX.mX[896UL];
  t344[0UL] = t5361->mX.mX[910UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t251.mField0[0UL], &t251.mField1[0UL],
    &t251.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t251.mField0[0UL], &t251.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based23_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[917UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t124.mField0[0UL], &t124.mField1[0UL],
    &t124.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t124.mField0[0UL], &t124.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based24_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[923UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t156.mField0[0UL], &t156.mField1[0UL],
    &t156.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t156.mField0[0UL], &t156.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based25_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_v =
    -t5361->mX.mX[931UL] + t5361->mX.mX[887UL];
  t344[0UL] = t5361->mX.mX[929UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t38.mField0[0UL], &t38.mField1[0UL],
    &t38.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t38.mField0[0UL], &t38.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[937UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int396 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[943UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t20.mField0[0UL], &t20.mField1[0UL],
    &t20.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t20.mField0[0UL], &t20.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[949UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t81.mField0[0UL], &t81.mField1[0UL],
    &t81.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t81.mField0[0UL], &t81.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based29_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[955UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t174.mField0[0UL], &t174.mField1[0UL],
    &t174.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t174.mField0[0UL], &t174.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_v =
    -t5361->mX.mX[963UL] + t5361->mX.mX[964UL];
  t344[0UL] = t5361->mX.mX[961UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t175.mField0[0UL], &t175.mField1[0UL],
    &t175.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t175.mField0[0UL], &t175.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based31_electricalModel_v =
    -t5361->mX.mX[972UL] + t5361->mX.mX[973UL];
  t344[0UL] = t5361->mX.mX[970UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t271.mField0[0UL], &t271.mField1[0UL],
    &t271.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t271.mField0[0UL], &t271.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[979UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t43.mField0[0UL], &t43.mField1[0UL],
    &t43.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t43.mField0[0UL], &t43.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int414 = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based33_electricalModel_v =
    -t5361->mX.mX[973UL] + t5361->mX.mX[931UL];
  t344[0UL] = t5361->mX.mX[985UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t194.mField0[0UL], &t194.mField1[0UL],
    &t194.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t194.mField0[0UL], &t194.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based34_electricalModel_v =
    -t5361->mX.mX[964UL] + t5361->mX.mX[972UL];
  t344[0UL] = t5361->mX.mX[992UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t18.mField0[0UL], &t18.mField1[0UL],
    &t18.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[999UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t25.mField0[0UL], &t25.mField1[0UL],
    &t25.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t25.mField0[0UL], &t25.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based35_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1005UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t132.mField0[0UL], &t132.mField1[0UL],
    &t132.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t132.mField0[0UL], &t132.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int426 = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based37_electricalModel_v =
    -t5361->mX.mX[1013UL] + t5361->mX.mX[963UL];
  t344[0UL] = t5361->mX.mX[1011UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t50.mField0[0UL], &t50.mField1[0UL],
    &t50.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t50.mField0[0UL], &t50.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1019UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t117.mField0[0UL], &t117.mField1[0UL],
    &t117.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t117.mField0[0UL], &t117.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based38_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1025UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t182.mField0[0UL], &t182.mField1[0UL],
    &t182.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t182.mField0[0UL], &t182.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int435 = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based4_electricalModel_v =
    -t5361->mX.mX[805UL] + t5361->mX.mX[795UL];
  t344[0UL] = t5361->mX.mX[1031UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t263.mField0[0UL], &t263.mField1[0UL],
    &t263.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t263.mField0[0UL], &t263.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int438 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1038UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t208.mField0[0UL], &t208.mField1[0UL],
    &t208.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t208.mField0[0UL], &t208.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based40_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based41_electricalModel_v =
    -t5361->mX.mX[1046UL] + t5361->mX.mX[1047UL];
  t344[0UL] = t5361->mX.mX[1044UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t133.mField0[0UL], &t133.mField1[0UL],
    &t133.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t133.mField0[0UL], &t133.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int444 = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based42_electricalModel_v =
    -t5361->mX.mX[1055UL] + t5361->mX.mX[1056UL];
  t344[0UL] = t5361->mX.mX[1053UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t167.mField0[0UL], &t167.mField1[0UL],
    &t167.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t167.mField0[0UL], &t167.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_v =
    -t5361->mX.mX[1056UL] + t5361->mX.mX[1013UL];
  t344[0UL] = t5361->mX.mX[1062UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t232.mField0[0UL], &t232.mField1[0UL],
    &t232.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t232.mField0[0UL], &t232.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_Three1_Battery_Table_Based44_electricalModel_v =
    -t5361->mX.mX[1047UL] + t5361->mX.mX[1055UL];
  t344[0UL] = t5361->mX.mX[1069UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t74.mField0[0UL], &t74.mField1[0UL],
    &t74.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t74.mField0[0UL], &t74.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int453 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1076UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t154.mField0[0UL], &t154.mField1[0UL],
    &t154.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t154.mField0[0UL], &t154.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1082UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t122.mField0[0UL], &t122.mField1[0UL],
    &t122.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t122.mField0[0UL], &t122.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_v =
    -t5361->mX.mX[1090UL] + t5361->mX.mX[1046UL];
  t344[0UL] = t5361->mX.mX[1088UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t36.mField0[0UL], &t36.mField1[0UL],
    &t36.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t36.mField0[0UL], &t36.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1096UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t157.mField0[0UL], &t157.mField1[0UL],
    &t157.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t157.mField0[0UL], &t157.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int465 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1102UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t203.mField0[0UL], &t203.mField1[0UL],
    &t203.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t203.mField0[0UL], &t203.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1108UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t221.mField0[0UL], &t221.mField1[0UL],
    &t221.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t221.mField0[0UL], &t221.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int471 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1114UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t195.mField0[0UL], &t195.mField1[0UL],
    &t195.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t195.mField0[0UL], &t195.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based50_stateOfCharge = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based51_electricalModel_v =
    -t5361->mX.mX[831UL] + t5361->mX.mX[1122UL];
  t344[0UL] = t5361->mX.mX[1120UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t67.mField0[0UL], &t67.mField1[0UL],
    &t67.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t67.mField0[0UL], &t67.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based52_electricalModel_v =
    -t5361->mX.mX[1130UL] + t5361->mX.mX[1131UL];
  t344[0UL] = t5361->mX.mX[1128UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t22.mField0[0UL], &t22.mField1[0UL],
    &t22.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t22.mField0[0UL], &t22.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge = t2890[0UL];
  Accumalator_Module_Three1_Battery_Table_Based53_electricalModel_v =
    -t5361->mX.mX[1131UL] + t5361->mX.mX[1090UL];
  t344[0UL] = t5361->mX.mX[1137UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t164.mField0[0UL], &t164.mField1[0UL],
    &t164.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t164.mField0[0UL], &t164.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int483 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1144UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t97.mField0[0UL], &t97.mField1[0UL],
    &t97.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t97.mField0[0UL], &t97.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1150UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t160.mField0[0UL], &t160.mField1[0UL],
    &t160.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t160.mField0[0UL], &t160.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1156UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t54.mField0[0UL], &t54.mField1[0UL],
    &t54.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t54.mField0[0UL], &t54.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based59_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1162UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t28.mField0[0UL], &t28.mField1[0UL],
    &t28.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t28.mField0[0UL], &t28.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1168UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t47.mField0[0UL], &t47.mField1[0UL],
    &t47.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t47.mField0[0UL], &t47.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based7_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1174UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t226.mField0[0UL], &t226.mField1[0UL],
    &t226.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t226.mField0[0UL], &t226.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int501 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1180UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int504 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based1_electricalModel_v = -t5361->mX.mX
    [1188UL] + t5361->mX.mX[1189UL];
  t344[0UL] = t5361->mX.mX[1186UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t158.mField0[0UL], &t158.mField1[0UL],
    &t158.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t158.mField0[0UL], &t158.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based1_electricalModel_xVint = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based10_electricalModel_v = -t5361->
    mX.mX[1197UL] + t5361->mX.mX[1198UL];
  t344[0UL] = t5361->mX.mX[1195UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t129.mField0[0UL], &t129.mField1[0UL],
    &t129.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t129.mField0[0UL], &t129.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int51 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based11_electricalModel_v = -t5361->
    mX.mX[1206UL] + t5361->mX.mX[1207UL];
  t344[0UL] = t5361->mX.mX[1204UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t168.mField0[0UL], &t168.mField1[0UL],
    &t168.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t168.mField0[0UL], &t168.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based12_electricalModel_v = -t5361->
    mX.mX[1215UL] + t5361->mX.mX[1216UL];
  t344[0UL] = t5361->mX.mX[1213UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t107.mField0[0UL], &t107.mField1[0UL],
    &t107.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t107.mField0[0UL], &t107.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based13_electricalModel_v = -t5361->
    mX.mX[1216UL] + t5361->mX.mX[1224UL];
  t344[0UL] = t5361->mX.mX[1222UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t0.mField0[0UL], &t0.mField1[0UL], &t0.mField2
    [0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t0.mField0[0UL], &t0.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int519 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1230UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t237.mField0[0UL], &t237.mField1[0UL],
    &t237.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t237.mField0[0UL], &t237.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based14_electricalModel_xVint = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based15_electricalModel_v = -t5361->
    mX.mX[1238UL] + t5361->mX.mX[1206UL];
  t344[0UL] = t5361->mX.mX[1236UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t100.mField0[0UL], &t100.mField1[0UL],
    &t100.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t100.mField0[0UL], &t100.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based16_electricalModel_v = -t5361->
    mX.mX[1246UL] + t5361->mX.mX[1238UL];
  t344[0UL] = t5361->mX.mX[1244UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based17_electricalModel_v = -t5361->
    mX.mX[1207UL] + t5361->mX.mX[1197UL];
  t344[0UL] = t5361->mX.mX[1252UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t270.mField0[0UL], &t270.mField1[0UL],
    &t270.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t270.mField0[0UL], &t270.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1259UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t113.mField0[0UL], &t113.mField1[0UL],
    &t113.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t113.mField0[0UL], &t113.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based18_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1265UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t147.mField0[0UL], &t147.mField1[0UL],
    &t147.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t147.mField0[0UL], &t147.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int537 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based2_electricalModel_v = -t5361->mX.mX
    [1189UL] + t5361->mX.mX[1215UL];
  t344[0UL] = t5361->mX.mX[1271UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t135.mField0[0UL], &t135.mField1[0UL],
    &t135.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t135.mField0[0UL], &t135.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int54 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based20_electricalModel_v = -t5361->
    mX.mX[1280UL] + t5361->mX.mX[1281UL];
  t344[0UL] = t5361->mX.mX[1278UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t103.mField0[0UL], &t103.mField1[0UL],
    &t103.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t103.mField0[0UL], &t103.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based21_electricalModel_v = -t5361->
    mX.mX[1289UL] + t5361->mX.mX[1290UL];
  t344[0UL] = t5361->mX.mX[1287UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t217.mField0[0UL], &t217.mField1[0UL],
    &t217.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t217.mField0[0UL], &t217.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based22_electricalModel_v = -t5361->
    mX.mX[1290UL] + t5361->mX.mX[1246UL];
  t344[0UL] = t5361->mX.mX[1296UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t8.mField0[0UL], &t8.mField1[0UL], &t8.mField2
    [0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based23_electricalModel_v = -t5361->
    mX.mX[1281UL] + t5361->mX.mX[1289UL];
  t344[0UL] = t5361->mX.mX[1303UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t12.mField0[0UL], &t12.mField1[0UL],
    &t12.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t12.mField0[0UL], &t12.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int552 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1310UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t40.mField0[0UL], &t40.mField1[0UL],
    &t40.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t40.mField0[0UL], &t40.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1316UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t65.mField0[0UL], &t65.mField1[0UL],
    &t65.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t65.mField0[0UL], &t65.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based26_electricalModel_v = -t5361->
    mX.mX[1324UL] + t5361->mX.mX[1280UL];
  t344[0UL] = t5361->mX.mX[1322UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t99.mField0[0UL], &t99.mField1[0UL],
    &t99.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t99.mField0[0UL], &t99.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1330UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t238.mField0[0UL], &t238.mField1[0UL],
    &t238.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t238.mField0[0UL], &t238.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1336UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t71.mField0[0UL], &t71.mField1[0UL],
    &t71.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t71.mField0[0UL], &t71.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1342UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t130.mField0[0UL], &t130.mField1[0UL],
    &t130.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t130.mField0[0UL], &t130.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based29_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1348UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t274.mField0[0UL], &t274.mField1[0UL],
    &t274.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t274.mField0[0UL], &t274.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based30_electricalModel_v = -t5361->
    mX.mX[1356UL] + t5361->mX.mX[1357UL];
  t344[0UL] = t5361->mX.mX[1354UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t104.mField0[0UL], &t104.mField1[0UL],
    &t104.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t104.mField0[0UL], &t104.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int576 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based31_electricalModel_v = -t5361->
    mX.mX[1365UL] + t5361->mX.mX[1366UL];
  t344[0UL] = t5361->mX.mX[1363UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t87.mField0[0UL], &t87.mField1[0UL],
    &t87.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1372UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t118.mField0[0UL], &t118.mField1[0UL],
    &t118.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t118.mField0[0UL], &t118.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int582 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based33_electricalModel_v = -t5361->
    mX.mX[1366UL] + t5361->mX.mX[1324UL];
  t344[0UL] = t5361->mX.mX[1378UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t79.mField0[0UL], &t79.mField1[0UL],
    &t79.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t79.mField0[0UL], &t79.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based33_electricalModel_xVint = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based34_electricalModel_v = -t5361->
    mX.mX[1357UL] + t5361->mX.mX[1365UL];
  t344[0UL] = t5361->mX.mX[1385UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t258.mField0[0UL], &t258.mField1[0UL],
    &t258.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t258.mField0[0UL], &t258.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int588 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1392UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t146.mField0[0UL], &t146.mField1[0UL],
    &t146.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t146.mField0[0UL], &t146.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1398UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t239.mField0[0UL], &t239.mField1[0UL],
    &t239.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t239.mField0[0UL], &t239.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based36_electricalModel_xVint = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based37_electricalModel_v = -t5361->
    mX.mX[1405UL] + t5361->mX.mX[1356UL];
  t344[0UL] = t5361->mX.mX[1404UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t138.mField0[0UL], &t138.mField1[0UL],
    &t138.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t138.mField0[0UL], &t138.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1411UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t69.mField0[0UL], &t69.mField1[0UL],
    &t69.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t69.mField0[0UL], &t69.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based38_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1417UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t16.mField0[0UL], &t16.mField1[0UL],
    &t16.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t16.mField0[0UL], &t16.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int603 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based4_electricalModel_v = -t5361->mX.mX
    [1198UL] + t5361->mX.mX[1188UL];
  t344[0UL] = t5361->mX.mX[1423UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t276.mField0[0UL], &t276.mField1[0UL],
    &t276.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t276.mField0[0UL], &t276.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int606 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1430UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t27.mField0[0UL], &t27.mField1[0UL],
    &t27.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t27.mField0[0UL], &t27.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based41_electricalModel_v = -t5361->
    mX.mX[1438UL] + t5361->mX.mX[1439UL];
  t344[0UL] = t5361->mX.mX[1436UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t39.mField0[0UL], &t39.mField1[0UL],
    &t39.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t39.mField0[0UL], &t39.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int612 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based42_electricalModel_v = -t5361->
    mX.mX[1447UL] + t5361->mX.mX[1448UL];
  t344[0UL] = t5361->mX.mX[1445UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int615 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based43_electricalModel_v = -t5361->
    mX.mX[1448UL] + t5361->mX.mX[1405UL];
  t344[0UL] = t5361->mX.mX[1454UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL],
    &t187.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int618 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based44_electricalModel_v = -t5361->
    mX.mX[1439UL] + t5361->mX.mX[1447UL];
  t344[0UL] = t5361->mX.mX[1461UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t126.mField0[0UL], &t126.mField1[0UL],
    &t126.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t126.mField0[0UL], &t126.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based44_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1468UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t196.mField0[0UL], &t196.mField1[0UL],
    &t196.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t196.mField0[0UL], &t196.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based45_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1474UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t37.mField0[0UL], &t37.mField1[0UL],
    &t37.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t37.mField0[0UL], &t37.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based47_electricalModel_v = -t5361->
    mX.mX[1482UL] + t5361->mX.mX[1438UL];
  t344[0UL] = t5361->mX.mX[1480UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t228.mField0[0UL], &t228.mField1[0UL],
    &t228.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t228.mField0[0UL], &t228.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int63 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1488UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t222.mField0[0UL], &t222.mField1[0UL],
    &t222.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t222.mField0[0UL], &t222.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based48_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1494UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t108.mField0[0UL], &t108.mField1[0UL],
    &t108.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t108.mField0[0UL], &t108.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based49_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1500UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t123.mField0[0UL], &t123.mField1[0UL],
    &t123.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t123.mField0[0UL], &t123.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int639 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1506UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t105.mField0[0UL], &t105.mField1[0UL],
    &t105.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t105.mField0[0UL], &t105.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int642 = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based51_electricalModel_v = -t5361->
    mX.mX[1224UL] + t5361->mX.mX[737UL];
  t344[0UL] = t5361->mX.mX[1512UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t256.mField0[0UL], &t256.mField1[0UL],
    &t256.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t256.mField0[0UL], &t256.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based52_electricalModel_v = -t5361->
    mX.mX[1122UL] + t5361->mX.mX[1521UL];
  t344[0UL] = t5361->mX.mX[1519UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t31.mField0[0UL], &t31.mField1[0UL],
    &t31.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t31.mField0[0UL], &t31.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based52_electricalModel_xVint = t2890[0UL];
  Accumalator_Module_Two_Battery_Table_Based53_electricalModel_v = -t5361->
    mX.mX[1521UL] + t5361->mX.mX[1482UL];
  t344[0UL] = t5361->mX.mX[1527UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t229.mField0[0UL], &t229.mField1[0UL],
    &t229.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t229.mField0[0UL], &t229.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based53_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1534UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t242.mField0[0UL], &t242.mField1[0UL],
    &t242.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t242.mField0[0UL], &t242.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1540UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t262.mField0[0UL], &t262.mField1[0UL],
    &t262.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t262.mField0[0UL], &t262.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based58_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1546UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL],
    &t162.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t162.mField0[0UL], &t162.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int66 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1552UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t49.mField0[0UL], &t49.mField1[0UL],
    &t49.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t49.mField0[0UL], &t49.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1558UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t252.mField0[0UL], &t252.mField1[0UL],
    &t252.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t252.mField0[0UL], &t252.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int666 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1564UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t150.mField0[0UL], &t150.mField1[0UL],
    &t150.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t150.mField0[0UL], &t150.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int669 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1570UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t172.mField0[0UL], &t172.mField1[0UL],
    &t172.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t172.mField0[0UL], &t172.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based1_electricalModel_v = -t5361->
    mX.mX[1578UL] + t5361->mX.mX[1579UL];
  t344[0UL] = t5361->mX.mX[1576UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t90.mField0[0UL], &t90.mField1[0UL],
    &t90.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t90.mField0[0UL], &t90.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based1_stateOfCharge = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based10_electricalModel_v =
    -t5361->mX.mX[1587UL] + t5361->mX.mX[1588UL];
  t344[0UL] = t5361->mX.mX[1585UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t176.mField0[0UL], &t176.mField1[0UL],
    &t176.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t176.mField0[0UL], &t176.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int678 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based11_electricalModel_v =
    -t5361->mX.mX[1596UL] + t5361->mX.mX[1597UL];
  t344[0UL] = t5361->mX.mX[1594UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t102.mField0[0UL], &t102.mField1[0UL],
    &t102.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t102.mField0[0UL], &t102.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based11_stateOfCharge = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based12_electricalModel_v =
    -t5361->mX.mX[1605UL] + t5361->mX.mX[1606UL];
  t344[0UL] = t5361->mX.mX[1603UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t240.mField0[0UL], &t240.mField1[0UL],
    &t240.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t240.mField0[0UL], &t240.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int684 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based13_electricalModel_v =
    -t5361->mX.mX[1606UL] + t5361->mX.mX[1614UL];
  t344[0UL] = t5361->mX.mX[1612UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t210.mField0[0UL], &t210.mField1[0UL],
    &t210.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t210.mField0[0UL], &t210.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int687 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1620UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t159.mField0[0UL], &t159.mField1[0UL],
    &t159.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t159.mField0[0UL], &t159.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int69 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based15_electricalModel_v =
    -t5361->mX.mX[1628UL] + t5361->mX.mX[1596UL];
  t344[0UL] = t5361->mX.mX[1626UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t268.mField0[0UL], &t268.mField1[0UL],
    &t268.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t268.mField0[0UL], &t268.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int693 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based16_electricalModel_v =
    -t5361->mX.mX[1636UL] + t5361->mX.mX[1628UL];
  t344[0UL] = t5361->mX.mX[1634UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t190.mField0[0UL], &t190.mField1[0UL],
    &t190.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t190.mField0[0UL], &t190.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based16_stateOfCharge = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based17_electricalModel_v =
    -t5361->mX.mX[1597UL] + t5361->mX.mX[1587UL];
  t344[0UL] = t5361->mX.mX[1642UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t278.mField0[0UL], &t278.mField1[0UL],
    &t278.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t278.mField0[0UL], &t278.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based17_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1649UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t92.mField0[0UL], &t92.mField1[0UL],
    &t92.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t92.mField0[0UL], &t92.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based18_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1655UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t115.mField0[0UL], &t115.mField1[0UL],
    &t115.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t115.mField0[0UL], &t115.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based19_stateOfCharge = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based2_electricalModel_v = -t5361->
    mX.mX[1579UL] + t5361->mX.mX[1605UL];
  t344[0UL] = t5361->mX.mX[1661UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t23.mField0[0UL], &t23.mField1[0UL],
    &t23.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t23.mField0[0UL], &t23.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int708 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based20_electricalModel_v =
    -t5361->mX.mX[1670UL] + t5361->mX.mX[1671UL];
  t344[0UL] = t5361->mX.mX[1668UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t5.mField0[0UL], &t5.mField1[0UL], &t5.mField2
    [0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t5.mField0[0UL], &t5.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based20_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_four_Battery_Table_Based21_electricalModel_v =
    -t5361->mX.mX[1679UL] + t5361->mX.mX[1680UL];
  t344[0UL] = t5361->mX.mX[1677UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t259.mField0[0UL], &t259.mField1[0UL],
    &t259.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t259.mField0[0UL], &t259.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based21_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_four_Battery_Table_Based22_electricalModel_v =
    -t5361->mX.mX[1680UL] + t5361->mX.mX[1636UL];
  t344[0UL] = t5361->mX.mX[1686UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t30.mField0[0UL], &t30.mField1[0UL],
    &t30.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t30.mField0[0UL], &t30.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int717 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based23_electricalModel_v =
    -t5361->mX.mX[1671UL] + t5361->mX.mX[1679UL];
  t344[0UL] = t5361->mX.mX[1693UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int72 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1700UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t277.mField0[0UL], &t277.mField1[0UL],
    &t277.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t277.mField0[0UL], &t277.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based24_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1706UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t93.mField0[0UL], &t93.mField1[0UL],
    &t93.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t93.mField0[0UL], &t93.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int726 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based26_electricalModel_v =
    -t5361->mX.mX[1714UL] + t5361->mX.mX[1670UL];
  t344[0UL] = t5361->mX.mX[1712UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t220.mField0[0UL], &t220.mField1[0UL],
    &t220.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t220.mField0[0UL], &t220.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int729 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1720UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t205.mField0[0UL], &t205.mField1[0UL],
    &t205.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t205.mField0[0UL], &t205.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int732 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1726UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based28_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1732UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t82.mField0[0UL], &t82.mField1[0UL],
    &t82.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t82.mField0[0UL], &t82.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based29_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1738UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t32.mField0[0UL], &t32.mField1[0UL],
    &t32.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t32.mField0[0UL], &t32.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based3_electricalModel_xVint = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based30_electricalModel_v =
    -t5361->mX.mX[1746UL] + t5361->mX.mX[1747UL];
  t344[0UL] = t5361->mX.mX[1744UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t261.mField0[0UL], &t261.mField1[0UL],
    &t261.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t261.mField0[0UL], &t261.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int744 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based31_electricalModel_v =
    -t5361->mX.mX[1755UL] + t5361->mX.mX[1756UL];
  t344[0UL] = t5361->mX.mX[1753UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t41.mField0[0UL], &t41.mField1[0UL],
    &t41.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t41.mField0[0UL], &t41.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int747 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1762UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t151.mField0[0UL], &t151.mField1[0UL],
    &t151.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t151.mField0[0UL], &t151.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based32_stateOfCharge = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based33_electricalModel_v =
    -t5361->mX.mX[1756UL] + t5361->mX.mX[1714UL];
  t344[0UL] = t5361->mX.mX[1768UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t144.mField0[0UL], &t144.mField1[0UL],
    &t144.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t144.mField0[0UL], &t144.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based33_stateOfCharge = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based34_electricalModel_v =
    -t5361->mX.mX[1747UL] + t5361->mX.mX[1755UL];
  t344[0UL] = t5361->mX.mX[1775UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t131.mField0[0UL], &t131.mField1[0UL],
    &t131.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t131.mField0[0UL], &t131.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int756 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1782UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t141.mField0[0UL], &t141.mField1[0UL],
    &t141.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t141.mField0[0UL], &t141.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based35_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1788UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t165.mField0[0UL], &t165.mField1[0UL],
    &t165.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t165.mField0[0UL], &t165.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based36_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_four_Battery_Table_Based37_electricalModel_v =
    -t5361->mX.mX[1796UL] + t5361->mX.mX[1746UL];
  t344[0UL] = t5361->mX.mX[1794UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t223.mField0[0UL], &t223.mField1[0UL],
    &t223.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t223.mField0[0UL], &t223.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int765 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1802UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int768 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1808UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t218.mField0[0UL], &t218.mField1[0UL],
    &t218.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t218.mField0[0UL], &t218.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int771 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based4_electricalModel_v = -t5361->
    mX.mX[1588UL] + t5361->mX.mX[1578UL];
  t344[0UL] = t5361->mX.mX[1814UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t15.mField0[0UL], &t15.mField1[0UL],
    &t15.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t15.mField0[0UL], &t15.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int774 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1821UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t212.mField0[0UL], &t212.mField1[0UL],
    &t212.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t212.mField0[0UL], &t212.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int777 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based41_electricalModel_v =
    -t5361->mX.mX[1829UL] + t5361->mX.mX[1830UL];
  t344[0UL] = t5361->mX.mX[1827UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t143.mField0[0UL], &t143.mField1[0UL],
    &t143.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t143.mField0[0UL], &t143.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based41_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_four_Battery_Table_Based42_electricalModel_v =
    -t5361->mX.mX[1838UL] + t5361->mX.mX[1839UL];
  t344[0UL] = t5361->mX.mX[1836UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t153.mField0[0UL], &t153.mField1[0UL],
    &t153.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t153.mField0[0UL], &t153.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int783 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based43_electricalModel_v =
    -t5361->mX.mX[1839UL] + t5361->mX.mX[1796UL];
  t344[0UL] = t5361->mX.mX[1845UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t247.mField0[0UL], &t247.mField1[0UL],
    &t247.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t247.mField0[0UL], &t247.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int786 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based44_electricalModel_v =
    -t5361->mX.mX[1830UL] + t5361->mX.mX[1838UL];
  t344[0UL] = t5361->mX.mX[1852UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t216.mField0[0UL], &t216.mField1[0UL],
    &t216.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t216.mField0[0UL], &t216.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int789 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1859UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t272.mField0[0UL], &t272.mField1[0UL],
    &t272.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t272.mField0[0UL], &t272.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based45_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1865UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t250.mField0[0UL], &t250.mField1[0UL],
    &t250.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t250.mField0[0UL], &t250.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based46_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_four_Battery_Table_Based47_electricalModel_v =
    -t5361->mX.mX[1873UL] + t5361->mX.mX[1829UL];
  t344[0UL] = t5361->mX.mX[1871UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based47_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1879UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t45.mField0[0UL], &t45.mField1[0UL],
    &t45.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t45.mField0[0UL], &t45.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based48_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1885UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t260.mField0[0UL], &t260.mField1[0UL],
    &t260.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t260.mField0[0UL], &t260.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based49_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1891UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t112.mField0[0UL], &t112.mField1[0UL],
    &t112.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t112.mField0[0UL], &t112.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based5_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1897UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t207.mField0[0UL], &t207.mField1[0UL],
    &t207.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based50_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_four_Battery_Table_Based51_electricalModel_v =
    -t5361->mX.mX[1614UL] + t5361->mX.mX[1130UL];
  t344[0UL] = t5361->mX.mX[1903UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t14.mField0[0UL], &t14.mField1[0UL],
    &t14.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t14.mField0[0UL], &t14.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based51_electricalModel_xVint = t2890
    [0UL];
  Accumalator_Module_four_Battery_Table_Based52_electricalModel_v =
    -t5361->mX.mX[331UL] + t5361->mX.mX[1912UL];
  t344[0UL] = t5361->mX.mX[1910UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t95.mField0[0UL], &t95.mField1[0UL],
    &t95.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t95.mField0[0UL], &t95.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int816 = t2890[0UL];
  Accumalator_Module_four_Battery_Table_Based53_electricalModel_v =
    -t5361->mX.mX[1912UL] + t5361->mX.mX[1873UL];
  t344[0UL] = t5361->mX.mX[1918UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t166.mField0[0UL], &t166.mField1[0UL],
    &t166.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t166.mField0[0UL], &t166.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based53_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1925UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t275.mField0[0UL], &t275.mField1[0UL],
    &t275.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t275.mField0[0UL], &t275.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  zc_int822 = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1931UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t56.mField0[0UL], &t56.mField1[0UL],
    &t56.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t56.mField0[0UL], &t56.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based58_electricalModel_xVint = t2890
    [0UL];
  t344[0UL] = t5361->mX.mX[1937UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based59_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1943UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t142.mField0[0UL], &t142.mField1[0UL],
    &t142.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t142.mField0[0UL], &t142.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based6_stateOfCharge = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1949UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t21.mField0[0UL], &t21.mField1[0UL],
    &t21.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t21.mField0[0UL], &t21.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  Accumalator_Module_four_Battery_Table_Based7_electricalModel_xVint = t2890[0UL];
  t344[0UL] = t5361->mX.mX[1955UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t279.mField0[0UL], &t279.mField1[0UL],
    &t279.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t2890[0UL], &t279.mField0[0UL], &t279.mField2
    [0UL], &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL],
    &t303[0UL], &t301[0UL]);
  t344[0UL] = t5361->mX.mX[1961UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t80.mField0[0UL], &t80.mField1[0UL],
    &t80.mField2[0UL], &nonscalar1[0UL], &t344[0UL], &t3394[0UL], &t301[0UL]);
  tlu2_2d_linear_nearest_value(&t344[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar0[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int84 = t344[0UL];
  t282 = t5361->mX.mX[1968UL] * 10.0 - 1.5707963267948966;
  t4787 = t282;
  zc_int595 = t282 - 2.0943951023931953;
  t4789 = t282 + 2.0943951023931953;
  t282 = ((((((((-t5361->mX.mX[728UL] + t5361->mX.mX[2UL] * 0.01) + t5361->
                mX.mX[3UL] * 0.01) + t5361->mX.mX[729UL] * -0.01) + t5361->
              mX.mX[730UL] * 0.01) + t5361->mX.mX[731UL] * -0.01) + t5361->
            mX.mX[732UL] * 0.01) + t5361->mX.mX[733UL] * -0.01) + t5361->mX.mX
          [734UL] * 0.01) + t5361->mX.mX[1967UL];
  t284 = ((((((((t5361->mX.mX[2UL] * -0.01 + t5361->mX.mX[3UL] * -0.01) -
                t5361->mX.mX[1967UL]) + t5361->mX.mX[729UL] * 0.01) +
              t5361->mX.mX[730UL] * -0.01) + t5361->mX.mX[731UL] * 0.01) +
            t5361->mX.mX[732UL] * -0.01) + t5361->mX.mX[733UL] * 0.01) +
          t5361->mX.mX[734UL] * -0.01) + t5361->mX.mX[728UL];
  t4785 = ((-t5361->mX.mX[730UL] + t5361->mX.mX[1971UL]) + t5361->mX.mX[729UL])
    + t5361->mX.mX[1977UL];
  Three_phase_inverter_IGBT_BH_diode_private_Diode_v_diode =
    ((((((((-t5361->mX.mX[728UL] + t5361->mX.mX[2UL] * 0.01) + t5361->mX.mX[3UL]
           * 0.01) + t5361->mX.mX[729UL] * -0.01) + t5361->mX.mX[730UL] * 0.01)
        + t5361->mX.mX[731UL] * -0.01) + t5361->mX.mX[732UL] * 0.01) +
      t5361->mX.mX[733UL] * -0.01) + t5361->mX.mX[734UL] * 0.01) + t5361->mX.mX
    [1969UL];
  t290 = ((((((((t5361->mX.mX[2UL] * -0.01 + t5361->mX.mX[3UL] * -0.01) +
                t5361->mX.mX[729UL] * 0.01) + t5361->mX.mX[730UL] * -0.01) -
              t5361->mX.mX[1969UL]) + t5361->mX.mX[731UL] * 0.01) + t5361->
            mX.mX[732UL] * -0.01) + t5361->mX.mX[733UL] * 0.01) + t5361->mX.mX
          [734UL] * -0.01) + t5361->mX.mX[728UL];
  Three_phase_inverter_IGBT_BL_diode_i = ((-t5361->mX.mX[732UL] + t5361->mX.mX
    [1972UL]) + t5361->mX.mX[731UL]) + t5361->mX.mX[1980UL];
  Three_phase_inverter_IGBT_CH_diode_private_Diode_v_diode =
    ((((((((-t5361->mX.mX[728UL] + t5361->mX.mX[2UL] * 0.01) + t5361->mX.mX[3UL]
           * 0.01) + t5361->mX.mX[729UL] * -0.01) + t5361->mX.mX[730UL] * 0.01)
        + t5361->mX.mX[731UL] * -0.01) + t5361->mX.mX[732UL] * 0.01) +
      t5361->mX.mX[733UL] * -0.01) + t5361->mX.mX[734UL] * 0.01) + t5361->mX.mX
    [1970UL];
  t296 = ((((((((t5361->mX.mX[2UL] * -0.01 + t5361->mX.mX[3UL] * -0.01) -
                t5361->mX.mX[1970UL]) + t5361->mX.mX[729UL] * 0.01) +
              t5361->mX.mX[730UL] * -0.01) + t5361->mX.mX[731UL] * 0.01) +
            t5361->mX.mX[732UL] * -0.01) + t5361->mX.mX[733UL] * 0.01) +
          t5361->mX.mX[734UL] * -0.01) + t5361->mX.mX[728UL];
  Three_phase_inverter_IGBT_CL_diode_i = ((-t5361->mX.mX[734UL] + t5361->mX.mX
    [1973UL]) + t5361->mX.mX[733UL]) + t5361->mX.mX[1983UL];
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
  tlu2_2d_linear_nearest_value(&t344[0UL], &t119.mField0[0UL], &t119.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int1 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t94.mField0[0UL], &t94.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int30 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t197.mField0[0UL], &t197.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_10 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t68.mField0[0UL], &t68.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int301 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t180.mField0[0UL], &t180.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int304 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t173.mField0[0UL], &t173.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int307 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t46.mField0[0UL], &t46.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_103 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t116.mField0[0UL], &t116.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_104 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t76.mField0[0UL], &t76.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int316 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t243.mField0[0UL], &t243.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int319 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t137.mField0[0UL], &t137.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_107 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t1.mField0[0UL], &t1.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_108 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t2.mField0[0UL], &t2.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_109 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t134.mField0[0UL], &t134.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_11 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t209.mField0[0UL], &t209.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_110 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t255.mField0[0UL], &t255.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int334 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t83.mField0[0UL], &t83.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_112 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t189.mField0[0UL], &t189.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_113 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t89.mField0[0UL], &t89.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int343 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t128.mField0[0UL], &t128.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int346 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t244.mField0[0UL], &t244.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int349 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t236.mField0[0UL], &t236.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_117 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t84.mField0[0UL], &t84.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int355 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t9.mField0[0UL], &t9.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int358 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t181.mField0[0UL], &t181.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int360 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t225.mField0[0UL], &t225.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int361 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t114.mField0[0UL], &t114.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_121 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t257.mField0[0UL], &t257.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int367 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t64.mField0[0UL], &t64.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int37 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t35.mField0[0UL], &t35.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int373 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t199.mField0[0UL], &t199.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int376 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t13.mField0[0UL], &t13.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_126 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t251.mField0[0UL], &t251.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_127 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t124.mField0[0UL], &t124.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int385 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t156.mField0[0UL], &t156.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int388 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t179.mField0[0UL], &t179.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_13 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t38.mField0[0UL], &t38.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_130 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int394 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t20.mField0[0UL], &t20.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int397 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t81.mField0[0UL], &t81.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_133 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t174.mField0[0UL], &t174.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int403 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t175.mField0[0UL], &t175.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int406 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t271.mField0[0UL], &t271.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_136 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t43.mField0[0UL], &t43.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_137 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t194.mField0[0UL], &t194.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_138 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t18.mField0[0UL], &t18.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_139 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t266.mField0[0UL], &t266.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_14 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t25.mField0[0UL], &t25.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_140 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t132.mField0[0UL], &t132.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int424 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t50.mField0[0UL], &t50.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_142 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t117.mField0[0UL], &t117.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_143 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t182.mField0[0UL], &t182.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_144 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t263.mField0[0UL], &t263.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_145 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t208.mField0[0UL], &t208.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_146 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t133.mField0[0UL], &t133.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int442 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t167.mField0[0UL], &t167.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_148 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t232.mField0[0UL], &t232.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int448 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t152.mField0[0UL], &t152.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_15 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t74.mField0[0UL], &t74.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_150 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t154.mField0[0UL], &t154.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int454 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t122.mField0[0UL], &t122.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int457 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t36.mField0[0UL], &t36.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int46 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t157.mField0[0UL], &t157.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int463 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t203.mField0[0UL], &t203.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int466 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t221.mField0[0UL], &t221.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_156 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t195.mField0[0UL], &t195.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int472 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t67.mField0[0UL], &t67.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_158 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t22.mField0[0UL], &t22.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int478 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t169.mField0[0UL], &t169.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int480 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t164.mField0[0UL], &t164.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int481 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t97.mField0[0UL], &t97.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_161 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t160.mField0[0UL], &t160.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int487 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t54.mField0[0UL], &t54.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int49 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t28.mField0[0UL], &t28.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int493 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t47.mField0[0UL], &t47.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_165 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t226.mField0[0UL], &t226.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_166 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int502 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t158.mField0[0UL], &t158.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int505 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t129.mField0[0UL], &t129.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int508 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t265.mField0[0UL], &t265.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_17 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t168.mField0[0UL], &t168.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_170 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t107.mField0[0UL], &t107.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int514 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t0.mField0[0UL], &t0.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int517 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t237.mField0[0UL], &t237.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int52 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t100.mField0[0UL], &t100.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_174 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t224.mField0[0UL], &t224.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int526 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t270.mField0[0UL], &t270.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_176 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t113.mField0[0UL], &t113.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int532 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t147.mField0[0UL], &t147.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int535 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t135.mField0[0UL], &t135.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_179 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t155.mField0[0UL], &t155.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int540 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t103.mField0[0UL], &t103.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int541 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t217.mField0[0UL], &t217.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_181 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t8.mField0[0UL], &t8.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int547 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t12.mField0[0UL], &t12.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int55 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t40.mField0[0UL], &t40.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_184 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t65.mField0[0UL], &t65.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int556 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t99.mField0[0UL], &t99.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_186 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t238.mField0[0UL], &t238.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_187 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t71.mField0[0UL], &t71.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_188 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t130.mField0[0UL], &t130.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_189 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t66.mField0[0UL], &t66.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int570 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t274.mField0[0UL], &t274.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_190 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t104.mField0[0UL], &t104.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_191 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_192 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t118.mField0[0UL], &t118.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int58 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t79.mField0[0UL], &t79.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int583 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t258.mField0[0UL], &t258.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int586 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t146.mField0[0UL], &t146.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int589 = t344[0UL];
  t4790 = cos(t4787);
  t4791 = -sin(t4787);
  t4792 = cos(zc_int595);
  t4793 = -sin(zc_int595);
  t4794 = cos(t4789);
  t4795 = -sin(t4789);
  tlu2_2d_linear_nearest_value(&t344[0UL], &t239.mField0[0UL], &t239.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  t4787 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t138.mField0[0UL], &t138.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int595 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t69.mField0[0UL], &t69.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  t4789 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t26.mField0[0UL], &t26.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int60 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t249.mField0[0UL], &t249.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_20 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t16.mField0[0UL], &t16.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_200 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t276.mField0[0UL], &t276.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_201 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t27.mField0[0UL], &t27.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int607 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t39.mField0[0UL], &t39.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_203 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t101.mField0[0UL], &t101.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_204 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t187.mField0[0UL], &t187.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int616 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t126.mField0[0UL], &t126.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_206 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t196.mField0[0UL], &t196.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_207 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t37.mField0[0UL], &t37.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int625 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t228.mField0[0UL], &t228.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int628 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t184.mField0[0UL], &t184.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int630 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t222.mField0[0UL], &t222.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int631 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t108.mField0[0UL], &t108.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_211 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t123.mField0[0UL], &t123.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int637 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t105.mField0[0UL], &t105.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_213 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t256.mField0[0UL], &t256.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int643 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t31.mField0[0UL], &t31.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_215 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t229.mField0[0UL], &t229.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int649 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t242.mField0[0UL], &t242.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int652 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t262.mField0[0UL], &t262.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int655 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t162.mField0[0UL], &t162.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_219 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t280.mField0[0UL], &t280.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int660 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t49.mField0[0UL], &t49.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int661 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t252.mField0[0UL], &t252.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_221 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t150.mField0[0UL], &t150.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_222 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t172.mField0[0UL], &t172.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int67 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t90.mField0[0UL], &t90.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_224 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t176.mField0[0UL], &t176.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_225 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t102.mField0[0UL], &t102.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_226 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t240.mField0[0UL], &t240.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int682 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t210.mField0[0UL], &t210.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_228 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t159.mField0[0UL], &t159.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_229 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t211.mField0[0UL], &t211.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int690 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t268.mField0[0UL], &t268.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int691 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t190.mField0[0UL], &t190.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int694 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t278.mField0[0UL], &t278.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_232 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t92.mField0[0UL], &t92.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int7 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t115.mField0[0UL], &t115.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int703 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t23.mField0[0UL], &t23.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int706 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t5.mField0[0UL], &t5.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int709 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t259.mField0[0UL], &t259.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_237 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t30.mField0[0UL], &t30.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int715 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_239 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t58.mField0[0UL], &t58.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int720 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t277.mField0[0UL], &t277.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_240 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t93.mField0[0UL], &t93.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_241 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t220.mField0[0UL], &t220.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_242 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t205.mField0[0UL], &t205.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_243 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t186.mField0[0UL], &t186.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_244 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t82.mField0[0UL], &t82.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_245 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t32.mField0[0UL], &t32.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int739 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t261.mField0[0UL], &t261.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_247 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t41.mField0[0UL], &t41.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int745 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t151.mField0[0UL], &t151.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_249 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t3.mField0[0UL], &t3.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int750 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t144.mField0[0UL], &t144.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_250 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t131.mField0[0UL], &t131.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_251 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t141.mField0[0UL], &t141.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_252 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t165.mField0[0UL], &t165.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int76 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t223.mField0[0UL], &t223.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_254 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t110.mField0[0UL], &t110.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_255 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t218.mField0[0UL], &t218.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int769 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t15.mField0[0UL], &t15.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int772 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t212.mField0[0UL], &t212.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_258 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t143.mField0[0UL], &t143.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int778 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t85.mField0[0UL], &t85.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int780 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t153.mField0[0UL], &t153.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_260 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t247.mField0[0UL], &t247.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int784 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t216.mField0[0UL], &t216.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int787 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t272.mField0[0UL], &t272.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_263 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t250.mField0[0UL], &t250.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_264 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_265 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t45.mField0[0UL], &t45.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_266 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t260.mField0[0UL], &t260.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_267 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t112.mField0[0UL], &t112.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_268 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t207.mField0[0UL], &t207.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int808 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t70.mField0[0UL], &t70.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int810 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t14.mField0[0UL], &t14.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int811 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t95.mField0[0UL], &t95.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int814 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t166.mField0[0UL], &t166.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int817 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t275.mField0[0UL], &t275.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int82 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t56.mField0[0UL], &t56.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_274 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t149.mField0[0UL], &t149.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_275 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t142.mField0[0UL], &t142.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int829 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t21.mField0[0UL], &t21.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int832 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t279.mField0[0UL], &t279.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int835 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t80.mField0[0UL], &t80.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int838 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t227.mField0[0UL], &t227.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_28 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t96.mField0[0UL], &t96.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int88 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t188.mField0[0UL], &t188.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_3 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t269.mField0[0UL], &t269.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int91 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t267.mField0[0UL], &t267.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int94 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t78.mField0[0UL], &t78.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int97 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t60.mField0[0UL], &t60.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_33 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t42.mField0[0UL], &t42.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int103 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t198.mField0[0UL], &t198.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int106 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t7.mField0[0UL], &t7.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int109 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t200.mField0[0UL], &t200.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int112 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t204.mField0[0UL], &t204.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int115 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t127.mField0[0UL], &t127.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_39 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t183.mField0[0UL], &t183.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_4 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t29.mField0[0UL], &t29.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int121 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t72.mField0[0UL], &t72.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_41 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t4.mField0[0UL], &t4.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int127 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t53.mField0[0UL], &t53.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_43 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t136.mField0[0UL], &t136.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int133 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t241.mField0[0UL], &t241.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int136 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t214.mField0[0UL], &t214.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int139 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t73.mField0[0UL], &t73.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_47 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t171.mField0[0UL], &t171.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int145 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t206.mField0[0UL], &t206.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int148 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t44.mField0[0UL], &t44.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_5 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t140.mField0[0UL], &t140.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_50 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t24.mField0[0UL], &t24.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int154 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t125.mField0[0UL], &t125.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_52 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t120.mField0[0UL], &t120.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_53 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int163 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t201.mField0[0UL], &t201.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_55 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t213.mField0[0UL], &t213.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int169 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t231.mField0[0UL], &t231.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_57 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t202.mField0[0UL], &t202.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_58 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t170.mField0[0UL], &t170.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int178 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t254.mField0[0UL], &t254.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_6 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t215.mField0[0UL], &t215.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int181 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t55.mField0[0UL], &t55.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_61 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t246.mField0[0UL], &t246.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int187 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t219.mField0[0UL], &t219.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_63 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t230.mField0[0UL], &t230.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_64 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t161.mField0[0UL], &t161.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_65 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t145.mField0[0UL], &t145.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int199 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t235.mField0[0UL], &t235.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_67 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t191.mField0[0UL], &t191.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_68 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t185.mField0[0UL], &t185.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int208 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t17.mField0[0UL], &t17.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_7 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t121.mField0[0UL], &t121.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int211 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t273.mField0[0UL], &t273.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_71 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t234.mField0[0UL], &t234.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int217 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t163.mField0[0UL], &t163.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_73 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t59.mField0[0UL], &t59.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int223 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t111.mField0[0UL], &t111.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_75 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t91.mField0[0UL], &t91.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int229 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t253.mField0[0UL], &t253.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int232 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t34.mField0[0UL], &t34.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_78 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t98.mField0[0UL], &t98.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_79 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t233.mField0[0UL], &t233.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_8 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t86.mField0[0UL], &t86.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_80 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t245.mField0[0UL], &t245.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int244 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t192.mField0[0UL], &t192.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int247 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t106.mField0[0UL], &t106.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int25 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t248.mField0[0UL], &t248.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_84 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t33.mField0[0UL], &t33.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_85 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t264.mField0[0UL], &t264.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_86 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t139.mField0[0UL], &t139.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int262 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t178.mField0[0UL], &t178.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int265 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_89 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t51.mField0[0UL], &t51.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int270 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t63.mField0[0UL], &t63.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int271 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t148.mField0[0UL], &t148.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int274 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t109.mField0[0UL], &t109.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_92 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t52.mField0[0UL], &t52.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int28 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t48.mField0[0UL], &t48.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int283 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t177.mField0[0UL], &t177.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_95 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t77.mField0[0UL], &t77.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int289 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  zc_int292 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t88.mField0[0UL], &t88.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  intrm_sf_mf_98 = t344[0UL];
  tlu2_2d_linear_nearest_value(&t344[0UL], &t193.mField0[0UL], &t193.mField2[0UL],
    &t6.mField0[0UL], &t6.mField2[0UL], &nonscalar3[0UL], &t3394[0UL], &t303[0UL],
    &t301[0UL]);
  if (t5361->mM.mX[1UL] != 0) {
    zc_int0 = 8.200000000000002E-8;
  } else {
    zc_int0 = zc_int1;
  }

  if (t5361->mM.mX[0UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int1 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int1 = Accumalator_Module_Five1_Battery_Table_Based1_stateOfCharge;
  }

  if (t5361->mM.mX[814UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based1_stateOfCharge =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based1_stateOfCharge =
      Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_xVint;
  }

  if (t5361->mM.mX[821UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_xVint =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_xVint =
      zc_int102;
  }

  if (t5361->mM.mX[824UL] != 0) {
    zc_int102 = 8.200000000000002E-8;
  } else {
    zc_int102 = zc_int103;
  }

  if (t5361->mM.mX[823UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int103 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int103 =
      Accumalator_Module_Five1_Battery_Table_Based40_electricalModel_xVint;
  }

  if (t5361->mM.mX[827UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based40_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based40_electricalModel_xVint =
      zc_int106;
  }

  if (t5361->mM.mX[826UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int106 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int106 =
      Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_xVint;
  }

  if (t5361->mM.mX[829UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_xVint =
      zc_int109;
  }

  if (t5361->mM.mX[828UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int109 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int109 = zc_int111;
  }

  if (t5361->mM.mX[831UL] != 0) {
    zc_int111 = 8.200000000000002E-8;
  } else {
    zc_int111 = zc_int112;
  }

  if (t5361->mM.mX[830UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int112 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int112 =
      Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_xVint;
  }

  if (t5361->mM.mX[833UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_xVint =
      zc_int115;
  }

  if (t5361->mM.mX[832UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int115 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int115 = Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  }

  if (t5361->mM.mX[835UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge =
      intrm_sf_mf_39;
  }

  if (t5361->mM.mX[834UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_39 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_39 =
      Accumalator_Module_Five1_Battery_Table_Based45_electricalModel_xVint;
  }

  if (t5361->mM.mX[847UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based45_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based45_electricalModel_xVint =
      intrm_sf_mf_4;
  }

  if (t5361->mM.mX[838UL] != 0) {
    intrm_sf_mf_4 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_4 = zc_int121;
  }

  if (t5361->mM.mX[837UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int121 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int121 = zc_int123;
  }

  if (t5361->mM.mX[840UL] != 0) {
    zc_int123 = 8.200000000000002E-8;
  } else {
    zc_int123 = intrm_sf_mf_41;
  }

  if (t5361->mM.mX[839UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_41 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_41 =
      Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  }

  if (t5361->mM.mX[842UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge = zc_int127;
  }

  if (t5361->mM.mX[841UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int127 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int127 = Accumalator_Module_Five1_Battery_Table_Based48_stateOfCharge;
  }

  if (t5361->mM.mX[844UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based48_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based48_stateOfCharge =
      intrm_sf_mf_43;
  }

  if (t5361->mM.mX[836UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_43 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_43 = zc_int130;
  }

  if (t5361->mM.mX[843UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int130 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int130 = zc_int132;
  }

  if (t5361->mM.mX[846UL] != 0) {
    zc_int132 = 8.200000000000002E-8;
  } else {
    zc_int132 = zc_int133;
  }

  if (t5361->mM.mX[845UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int133 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int133 = Accumalator_Module_Five1_Battery_Table_Based5_stateOfCharge;
  }

  if (t5361->mM.mX[849UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based5_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based5_stateOfCharge = zc_int136;
  }

  if (t5361->mM.mX[848UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int136 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int136 = Accumalator_Module_Five1_Battery_Table_Based50_stateOfCharge;
  }

  if (t5361->mM.mX[851UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based50_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based50_stateOfCharge = zc_int139;
  }

  if (t5361->mM.mX[850UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int139 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int139 =
      Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_xVint;
  }

  if (t5361->mM.mX[853UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_xVint =
      intrm_sf_mf_47;
  }

  if (t5361->mM.mX[852UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_47 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_47 = zc_int144;
  }

  if (t5361->mM.mX[855UL] != 0) {
    zc_int144 = 8.200000000000002E-8;
  } else {
    zc_int144 = zc_int145;
  }

  if (t5361->mM.mX[854UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int145 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int145 = zc_int147;
  }

  if (t5361->mM.mX[857UL] != 0) {
    zc_int147 = 8.200000000000002E-8;
  } else {
    zc_int147 = zc_int148;
  }

  if (t5361->mM.mX[856UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int148 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int148 =
      Accumalator_Module_Five1_Battery_Table_Based54_electricalModel_xVint;
  }

  if (t5361->mM.mX[13UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based54_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based54_electricalModel_xVint =
      intrm_sf_mf_5;
  }

  if (t5361->mM.mX[4UL] != 0) {
    intrm_sf_mf_5 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_5 = intrm_sf_mf_50;
  }

  if (t5361->mM.mX[3UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_50 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_50 =
      Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge;
  }

  if (t5361->mM.mX[6UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge = zc_int154;
  }

  if (t5361->mM.mX[5UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int154 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int154 = Accumalator_Module_Five1_Battery_Table_Based59_stateOfCharge;
  }

  if (t5361->mM.mX[8UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based59_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based59_stateOfCharge =
      intrm_sf_mf_52;
  }

  if (t5361->mM.mX[7UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_52 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_52 = zc_int159;
  }

  if (t5361->mM.mX[10UL] != 0) {
    zc_int159 = 8.200000000000002E-8;
  } else {
    zc_int159 = intrm_sf_mf_53;
  }

  if (t5361->mM.mX[2UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_53 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_53 = zc_int160;
  }

  if (t5361->mM.mX[9UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int160 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int160 =
      Accumalator_Module_Five1_Battery_Table_Based7_electricalModel_xVint;
  }

  if (t5361->mM.mX[12UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based7_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based7_electricalModel_xVint =
      zc_int163;
  }

  if (t5361->mM.mX[11UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int163 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int163 = Accumalator_Module_Five1_Battery_Table_Based8_stateOfCharge;
  }

  if (t5361->mM.mX[15UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based8_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based8_stateOfCharge = intrm_sf_mf_55;
  }

  if (t5361->mM.mX[14UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_55 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_55 =
      Accumalator_Module_Five1_Battery_Table_Based9_electricalModel_xVint;
  }

  if (t5361->mM.mX[21UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based9_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based9_electricalModel_xVint =
      zc_int169;
  }

  if (t5361->mM.mX[16UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int169 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int169 = zc_int171;
  }

  if (t5361->mM.mX[43UL] != 0) {
    zc_int171 = 8.200000000000002E-8;
  } else {
    zc_int171 = intrm_sf_mf_57;
  }

  if (t5361->mM.mX[32UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_57 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_57 =
      Accumalator_Module_One1_Battery_Table_Based10_electricalModel_xVint;
  }

  if (t5361->mM.mX[65UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based10_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based10_electricalModel_xVint =
      intrm_sf_mf_58;
  }

  if (t5361->mM.mX[54UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_58 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_58 = zc_int177;
  }

  if (t5361->mM.mX[87UL] != 0) {
    zc_int177 = 8.200000000000002E-8;
  } else {
    zc_int177 = zc_int178;
  }

  if (t5361->mM.mX[76UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int178 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int178 = zc_int18;
  }

  if (t5361->mM.mX[209UL] != 0) {
    zc_int18 = 8.200000000000002E-8;
  } else {
    zc_int18 = intrm_sf_mf_6;
  }

  if (t5361->mM.mX[110UL] != 0) {
    intrm_sf_mf_6 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_6 = zc_int181;
  }

  if (t5361->mM.mX[99UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int181 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int181 = zc_int183;
  }

  if (t5361->mM.mX[132UL] != 0) {
    zc_int183 = 8.200000000000002E-8;
  } else {
    zc_int183 = intrm_sf_mf_61;
  }

  if (t5361->mM.mX[121UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_61 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_61 = zc_int186;
  }

  if (t5361->mM.mX[154UL] != 0) {
    zc_int186 = 8.200000000000002E-8;
  } else {
    zc_int186 = zc_int187;
  }

  if (t5361->mM.mX[143UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int187 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int187 =
      Accumalator_Module_One1_Battery_Table_Based15_electricalModel_xVint;
  }

  if (t5361->mM.mX[176UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based15_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based15_electricalModel_xVint =
      intrm_sf_mf_63;
  }

  if (t5361->mM.mX[98UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_63 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_63 = zc_int190;
  }

  if (t5361->mM.mX[165UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int190 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int190 = zc_int192;
  }

  if (t5361->mM.mX[198UL] != 0) {
    zc_int192 = 8.200000000000002E-8;
  } else {
    zc_int192 = intrm_sf_mf_64;
  }

  if (t5361->mM.mX[187UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_64 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_64 = zc_int195;
  }

  if (t5361->mM.mX[221UL] != 0) {
    zc_int195 = 8.200000000000002E-8;
  } else {
    zc_int195 = intrm_sf_mf_65;
  }

  if (t5361->mM.mX[210UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_65 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_65 =
      Accumalator_Module_One1_Battery_Table_Based18_electricalModel_xVint;
  }

  if (t5361->mM.mX[243UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based18_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based18_electricalModel_xVint =
      zc_int199;
  }

  if (t5361->mM.mX[232UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int199 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int199 = Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge;
  }

  if (t5361->mM.mX[265UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge = intrm_sf_mf_67;
  }

  if (t5361->mM.mX[254UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_67 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_67 = Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge;
  }

  if (t5361->mM.mX[287UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge = intrm_sf_mf_68;
  }

  if (t5361->mM.mX[276UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_68 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_68 =
      Accumalator_Module_One1_Battery_Table_Based20_electricalModel_xVint;
  }

  if (t5361->mM.mX[309UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based20_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based20_electricalModel_xVint =
      zc_int208;
  }

  if (t5361->mM.mX[298UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int208 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int208 = zc_int21;
  }

  if (t5361->mM.mX[349UL] != 0) {
    zc_int21 = 8.200000000000002E-8;
  } else {
    zc_int21 = intrm_sf_mf_7;
  }

  if (t5361->mM.mX[332UL] != 0) {
    intrm_sf_mf_7 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_7 = zc_int211;
  }

  if (t5361->mM.mX[321UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int211 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int211 =
      Accumalator_Module_One1_Battery_Table_Based22_electricalModel_xVint;
  }

  if (t5361->mM.mX[342UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based22_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based22_electricalModel_xVint =
      intrm_sf_mf_71;
  }

  if (t5361->mM.mX[341UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_71 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_71 =
      Accumalator_Module_One1_Battery_Table_Based23_electricalModel_xVint;
  }

  if (t5361->mM.mX[344UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based23_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based23_electricalModel_xVint =
      zc_int217;
  }

  if (t5361->mM.mX[343UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int217 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int217 = zc_int219;
  }

  if (t5361->mM.mX[346UL] != 0) {
    zc_int219 = 8.200000000000002E-8;
  } else {
    zc_int219 = intrm_sf_mf_73;
  }

  if (t5361->mM.mX[320UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_73 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_73 =
      Accumalator_Module_Five1_Battery_Table_Based16_stateOfCharge;
  }

  if (t5361->mM.mX[345UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based16_stateOfCharge =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based16_stateOfCharge =
      Accumalator_Module_One1_Battery_Table_Based25_electricalModel_xVint;
  }

  if (t5361->mM.mX[348UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based25_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based25_electricalModel_xVint =
      zc_int223;
  }

  if (t5361->mM.mX[347UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int223 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int223 = Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  }

  if (t5361->mM.mX[351UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge = intrm_sf_mf_75;
  }

  if (t5361->mM.mX[350UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_75 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_75 =
      Accumalator_Module_One1_Battery_Table_Based27_electricalModel_xVint;
  }

  if (t5361->mM.mX[353UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based27_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based27_electricalModel_xVint =
      zc_int229;
  }

  if (t5361->mM.mX[352UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int229 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int229 = Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge;
  }

  if (t5361->mM.mX[355UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge = zc_int232;
  }

  if (t5361->mM.mX[354UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int232 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int232 = Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge;
  }

  if (t5361->mM.mX[357UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge = intrm_sf_mf_78;
  }

  if (t5361->mM.mX[356UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_78 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_78 = zc_int237;
  }

  if (t5361->mM.mX[359UL] != 0) {
    zc_int237 = 8.200000000000002E-8;
  } else {
    zc_int237 = intrm_sf_mf_79;
  }

  if (t5361->mM.mX[358UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_79 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_79 =
      Accumalator_Module_One1_Battery_Table_Based30_electricalModel_xVint;
  }

  if (t5361->mM.mX[371UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based30_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based30_electricalModel_xVint =
      intrm_sf_mf_8;
  }

  if (t5361->mM.mX[362UL] != 0) {
    intrm_sf_mf_8 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_8 = intrm_sf_mf_80;
  }

  if (t5361->mM.mX[361UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_80 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_80 = zc_int243;
  }

  if (t5361->mM.mX[364UL] != 0) {
    zc_int243 = 8.200000000000002E-8;
  } else {
    zc_int243 = zc_int244;
  }

  if (t5361->mM.mX[363UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int244 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int244 = Accumalator_Module_One1_Battery_Table_Based32_stateOfCharge;
  }

  if (t5361->mM.mX[366UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based32_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based32_stateOfCharge = zc_int247;
  }

  if (t5361->mM.mX[365UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int247 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int247 =
      Accumalator_Module_One1_Battery_Table_Based33_electricalModel_xVint;
  }

  if (t5361->mM.mX[368UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based33_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based33_electricalModel_xVint =
      zc_int25;
  }

  if (t5361->mM.mX[360UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int25 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int25 = Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  }

  if (t5361->mM.mX[367UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge =
      Accumalator_Module_One1_Battery_Table_Based34_electricalModel_xVint;
  }

  if (t5361->mM.mX[370UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based34_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based34_electricalModel_xVint =
      intrm_sf_mf_84;
  }

  if (t5361->mM.mX[369UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_84 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_84 =
      Accumalator_Module_One1_Battery_Table_Based35_electricalModel_xVint;
  }

  if (t5361->mM.mX[373UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based35_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based35_electricalModel_xVint =
      intrm_sf_mf_85;
  }

  if (t5361->mM.mX[372UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_85 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_85 = zc_int258;
  }

  if (t5361->mM.mX[375UL] != 0) {
    zc_int258 = 8.200000000000002E-8;
  } else {
    zc_int258 = intrm_sf_mf_86;
  }

  if (t5361->mM.mX[374UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_86 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_86 = Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge;
  }

  if (t5361->mM.mX[377UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge = zc_int262;
  }

  if (t5361->mM.mX[376UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int262 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int262 =
      Accumalator_Module_One1_Battery_Table_Based38_electricalModel_xVint;
  }

  if (t5361->mM.mX[379UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based38_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based38_electricalModel_xVint =
      zc_int265;
  }

  if (t5361->mM.mX[378UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int265 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int265 = zc_int267;
  }

  if (t5361->mM.mX[381UL] != 0) {
    zc_int267 = 8.200000000000002E-8;
  } else {
    zc_int267 = intrm_sf_mf_89;
  }

  if (t5361->mM.mX[380UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_89 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_89 =
      Accumalator_Module_One1_Battery_Table_Based4_electricalModel_xVint;
  }

  if (t5361->mM.mX[393UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based4_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based4_electricalModel_xVint =
      zc_int270;
  }

  if (t5361->mM.mX[384UL] != 0) {
    zc_int270 = 8.200000000000002E-8;
  } else {
    zc_int270 = zc_int271;
  }

  if (t5361->mM.mX[383UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int271 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int271 = zc_int273;
  }

  if (t5361->mM.mX[386UL] != 0) {
    zc_int273 = 8.200000000000002E-8;
  } else {
    zc_int273 = zc_int274;
  }

  if (t5361->mM.mX[385UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int274 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int274 = zc_int276;
  }

  if (t5361->mM.mX[388UL] != 0) {
    zc_int276 = 8.200000000000002E-8;
  } else {
    zc_int276 = intrm_sf_mf_92;
  }

  if (t5361->mM.mX[387UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_92 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_92 = zc_int279;
  }

  if (t5361->mM.mX[390UL] != 0) {
    zc_int279 = 8.200000000000002E-8;
  } else {
    zc_int279 = zc_int28;
  }

  if (t5361->mM.mX[382UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int28 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int28 = Accumalator_Module_Five1_Battery_Table_Based18_stateOfCharge;
  }

  if (t5361->mM.mX[389UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based18_stateOfCharge =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based18_stateOfCharge = zc_int282;
  }

  if (t5361->mM.mX[392UL] != 0) {
    zc_int282 = 8.200000000000002E-8;
  } else {
    zc_int282 = zc_int283;
  }

  if (t5361->mM.mX[391UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int283 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int283 =
      Accumalator_Module_One1_Battery_Table_Based44_electricalModel_xVint;
  }

  if (t5361->mM.mX[395UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based44_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based44_electricalModel_xVint =
      intrm_sf_mf_95;
  }

  if (t5361->mM.mX[394UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_95 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_95 = zc_int288;
  }

  if (t5361->mM.mX[397UL] != 0) {
    zc_int288 = 8.200000000000002E-8;
  } else {
    zc_int288 = zc_int289;
  }

  if (t5361->mM.mX[396UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int289 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int289 = Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge;
  }

  if (t5361->mM.mX[399UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge = zc_int292;
  }

  if (t5361->mM.mX[398UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int292 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int292 = Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge;
  }

  if (t5361->mM.mX[401UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge = intrm_sf_mf_98;
  }

  if (t5361->mM.mX[400UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_98 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_98 =
      Accumalator_Module_One1_Battery_Table_Based48_electricalModel_xVint;
  }

  if (t5361->mM.mX[403UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based48_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based48_electricalModel_xVint = t344
      [0UL];
  }

  if (t5361->mM.mX[402UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int298 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int298 = zc_int3;
  }

  if (t5361->mM.mX[515UL] != 0) {
    zc_int3 = 8.200000000000002E-8;
  } else {
    zc_int3 = zc_int30;
  }

  if (t5361->mM.mX[416UL] != 0) {
    zc_int30 = 8.200000000000002E-8;
  } else {
    zc_int30 = intrm_sf_mf_10;
  }

  if (t5361->mM.mX[407UL] != 0) {
    intrm_sf_mf_10 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_10 = zc_int301;
  }

  if (t5361->mM.mX[406UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int301 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int301 = Accumalator_Module_One1_Battery_Table_Based5_stateOfCharge;
  }

  if (t5361->mM.mX[409UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based5_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based5_stateOfCharge = zc_int304;
  }

  if (t5361->mM.mX[408UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int304 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int304 =
      Accumalator_Module_One1_Battery_Table_Based50_electricalModel_xVint;
  }

  if (t5361->mM.mX[411UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based50_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based50_electricalModel_xVint =
      zc_int307;
  }

  if (t5361->mM.mX[410UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int307 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int307 = Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge;
  }

  if (t5361->mM.mX[413UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge =
      intrm_sf_mf_103;
  }

  if (t5361->mM.mX[405UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_103 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_103 = zc_int310;
  }

  if (t5361->mM.mX[412UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int310 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int310 =
      Accumalator_Module_One1_Battery_Table_Based52_electricalModel_xVint;
  }

  if (t5361->mM.mX[415UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based52_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based52_electricalModel_xVint =
      intrm_sf_mf_104;
  }

  if (t5361->mM.mX[414UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_104 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_104 =
      Accumalator_Module_One1_Battery_Table_Based53_electricalModel_xVint;
  }

  if (t5361->mM.mX[418UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based53_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based53_electricalModel_xVint =
      zc_int316;
  }

  if (t5361->mM.mX[417UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int316 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int316 = Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge;
  }

  if (t5361->mM.mX[420UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge = zc_int319;
  }

  if (t5361->mM.mX[419UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int319 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int319 =
      Accumalator_Module_One1_Battery_Table_Based58_electricalModel_xVint;
  }

  if (t5361->mM.mX[422UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based58_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based58_electricalModel_xVint =
      intrm_sf_mf_107;
  }

  if (t5361->mM.mX[421UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_107 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_107 =
      Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge;
  }

  if (t5361->mM.mX[424UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge =
      intrm_sf_mf_108;
  }

  if (t5361->mM.mX[423UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_108 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_108 = Accumalator_Module_One1_Battery_Table_Based6_stateOfCharge;
  }

  if (t5361->mM.mX[426UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based6_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based6_stateOfCharge = intrm_sf_mf_109;
  }

  if (t5361->mM.mX[425UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_109 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_109 =
      Accumalator_Module_One1_Battery_Table_Based7_electricalModel_xVint;
  }

  if (t5361->mM.mX[438UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based7_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based7_electricalModel_xVint =
      intrm_sf_mf_11;
  }

  if (t5361->mM.mX[429UL] != 0) {
    intrm_sf_mf_11 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_11 = intrm_sf_mf_110;
  }

  if (t5361->mM.mX[428UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_110 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_110 =
      Accumalator_Module_One1_Battery_Table_Based8_electricalModel_xVint;
  }

  if (t5361->mM.mX[431UL] != 0) {
    Accumalator_Module_One1_Battery_Table_Based8_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_One1_Battery_Table_Based8_electricalModel_xVint =
      zc_int334;
  }

  if (t5361->mM.mX[430UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int334 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int334 = zc_int336;
  }

  if (t5361->mM.mX[433UL] != 0) {
    zc_int336 = 8.200000000000002E-8;
  } else {
    zc_int336 = intrm_sf_mf_112;
  }

  if (t5361->mM.mX[432UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_112 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_112 =
      Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_xVint;
  }

  if (t5361->mM.mX[435UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_xVint =
      intrm_sf_mf_113;
  }

  if (t5361->mM.mX[427UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_113 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_113 =
      Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_xVint;
  }

  if (t5361->mM.mX[434UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_xVint =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_xVint =
      Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_xVint;
  }

  if (t5361->mM.mX[437UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_xVint =
      zc_int343;
  }

  if (t5361->mM.mX[436UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int343 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int343 =
      Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_xVint;
  }

  if (t5361->mM.mX[440UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_xVint =
      zc_int346;
  }

  if (t5361->mM.mX[439UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int346 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int346 = zc_int348;
  }

  if (t5361->mM.mX[442UL] != 0) {
    zc_int348 = 8.200000000000002E-8;
  } else {
    zc_int348 = zc_int349;
  }

  if (t5361->mM.mX[441UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int349 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int349 = Accumalator_Module_Three1_Battery_Table_Based13_stateOfCharge;
  }

  if (t5361->mM.mX[444UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based13_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based13_stateOfCharge =
      intrm_sf_mf_117;
  }

  if (t5361->mM.mX[443UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_117 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_117 =
      Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge;
  }

  if (t5361->mM.mX[446UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge = zc_int355;
  }

  if (t5361->mM.mX[445UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int355 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int355 =
      Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_xVint;
  }

  if (t5361->mM.mX[448UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_xVint =
      zc_int358;
  }

  if (t5361->mM.mX[447UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int358 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int358 =
      Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_xVint;
  }

  if (t5361->mM.mX[460UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_xVint =
      zc_int360;
  }

  if (t5361->mM.mX[451UL] != 0) {
    zc_int360 = 8.200000000000002E-8;
  } else {
    zc_int360 = zc_int361;
  }

  if (t5361->mM.mX[450UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int361 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int361 =
      Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_xVint;
  }

  if (t5361->mM.mX[453UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_xVint =
      intrm_sf_mf_121;
  }

  if (t5361->mM.mX[452UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_121 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_121 =
      Accumalator_Module_Three1_Battery_Table_Based18_electricalModel_xVint;
  }

  if (t5361->mM.mX[455UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based18_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based18_electricalModel_xVint =
      zc_int367;
  }

  if (t5361->mM.mX[454UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int367 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int367 = zc_int369;
  }

  if (t5361->mM.mX[457UL] != 0) {
    zc_int369 = 8.200000000000002E-8;
  } else {
    zc_int369 = zc_int37;
  }

  if (t5361->mM.mX[449UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int37 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int37 =
      Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_xVint;
  }

  if (t5361->mM.mX[456UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_xVint =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_xVint =
      Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_xVint;
  }

  if (t5361->mM.mX[459UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_xVint =
      zc_int373;
  }

  if (t5361->mM.mX[458UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int373 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int373 = zc_int375;
  }

  if (t5361->mM.mX[462UL] != 0) {
    zc_int375 = 8.200000000000002E-8;
  } else {
    zc_int375 = zc_int376;
  }

  if (t5361->mM.mX[461UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int376 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int376 = zc_int378;
  }

  if (t5361->mM.mX[464UL] != 0) {
    zc_int378 = 8.200000000000002E-8;
  } else {
    zc_int378 = intrm_sf_mf_126;
  }

  if (t5361->mM.mX[463UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_126 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_126 =
      Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_xVint;
  }

  if (t5361->mM.mX[466UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_xVint =
      intrm_sf_mf_127;
  }

  if (t5361->mM.mX[465UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_127 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_127 =
      Accumalator_Module_Three1_Battery_Table_Based23_stateOfCharge;
  }

  if (t5361->mM.mX[468UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based23_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based23_stateOfCharge = zc_int385;
  }

  if (t5361->mM.mX[467UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int385 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int385 =
      Accumalator_Module_Three1_Battery_Table_Based24_electricalModel_xVint;
  }

  if (t5361->mM.mX[470UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based24_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based24_electricalModel_xVint =
      zc_int388;
  }

  if (t5361->mM.mX[469UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int388 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int388 =
      Accumalator_Module_Three1_Battery_Table_Based25_electricalModel_xVint;
  }

  if (t5361->mM.mX[482UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based25_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based25_electricalModel_xVint =
      intrm_sf_mf_13;
  }

  if (t5361->mM.mX[473UL] != 0) {
    intrm_sf_mf_13 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_13 = intrm_sf_mf_130;
  }

  if (t5361->mM.mX[472UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_130 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_130 =
      Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_xVint;
  }

  if (t5361->mM.mX[475UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_xVint =
      zc_int394;
  }

  if (t5361->mM.mX[474UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int394 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int394 = zc_int396;
  }

  if (t5361->mM.mX[477UL] != 0) {
    zc_int396 = 8.200000000000002E-8;
  } else {
    zc_int396 = zc_int397;
  }

  if (t5361->mM.mX[476UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int397 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int397 = Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge;
  }

  if (t5361->mM.mX[479UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge =
      intrm_sf_mf_133;
  }

  if (t5361->mM.mX[404UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_133 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_133 = zc_int40;
  }

  if (t5361->mM.mX[471UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int40 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int40 = zc_int400;
  }

  if (t5361->mM.mX[478UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int400 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int400 =
      Accumalator_Module_Three1_Battery_Table_Based29_electricalModel_xVint;
  }

  if (t5361->mM.mX[481UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based29_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based29_electricalModel_xVint =
      zc_int403;
  }

  if (t5361->mM.mX[480UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int403 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int403 = Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  }

  if (t5361->mM.mX[484UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge = zc_int406;
  }

  if (t5361->mM.mX[483UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int406 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int406 =
      Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_xVint;
  }

  if (t5361->mM.mX[486UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_xVint =
      intrm_sf_mf_136;
  }

  if (t5361->mM.mX[485UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_136 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_136 =
      Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge;
  }

  if (t5361->mM.mX[488UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge =
      intrm_sf_mf_137;
  }

  if (t5361->mM.mX[487UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_137 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_137 = zc_int414;
  }

  if (t5361->mM.mX[490UL] != 0) {
    zc_int414 = 8.200000000000002E-8;
  } else {
    zc_int414 = intrm_sf_mf_138;
  }

  if (t5361->mM.mX[489UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_138 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_138 =
      Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge;
  }

  if (t5361->mM.mX[492UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge =
      intrm_sf_mf_139;
  }

  if (t5361->mM.mX[491UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_139 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_139 =
      Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge;
  }

  if (t5361->mM.mX[504UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge =
      intrm_sf_mf_14;
  }

  if (t5361->mM.mX[495UL] != 0) {
    intrm_sf_mf_14 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_14 = intrm_sf_mf_140;
  }

  if (t5361->mM.mX[494UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_140 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_140 =
      Accumalator_Module_Three1_Battery_Table_Based35_electricalModel_xVint;
  }

  if (t5361->mM.mX[497UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based35_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based35_electricalModel_xVint =
      zc_int424;
  }

  if (t5361->mM.mX[496UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int424 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int424 = zc_int426;
  }

  if (t5361->mM.mX[499UL] != 0) {
    zc_int426 = 8.200000000000002E-8;
  } else {
    zc_int426 = intrm_sf_mf_142;
  }

  if (t5361->mM.mX[498UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_142 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_142 =
      Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge;
  }

  if (t5361->mM.mX[501UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge =
      intrm_sf_mf_143;
  }

  if (t5361->mM.mX[493UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_143 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_143 =
      Accumalator_Module_Five1_Battery_Table_Based22_stateOfCharge;
  }

  if (t5361->mM.mX[500UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based22_stateOfCharge =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based22_stateOfCharge =
      Accumalator_Module_Three1_Battery_Table_Based38_stateOfCharge;
  }

  if (t5361->mM.mX[503UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based38_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based38_stateOfCharge =
      intrm_sf_mf_144;
  }

  if (t5361->mM.mX[502UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_144 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_144 = zc_int435;
  }

  if (t5361->mM.mX[506UL] != 0) {
    zc_int435 = 8.200000000000002E-8;
  } else {
    zc_int435 = intrm_sf_mf_145;
  }

  if (t5361->mM.mX[505UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_145 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_145 = zc_int438;
  }

  if (t5361->mM.mX[508UL] != 0) {
    zc_int438 = 8.200000000000002E-8;
  } else {
    zc_int438 = intrm_sf_mf_146;
  }

  if (t5361->mM.mX[507UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_146 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_146 =
      Accumalator_Module_Three1_Battery_Table_Based40_electricalModel_xVint;
  }

  if (t5361->mM.mX[510UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based40_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based40_electricalModel_xVint =
      zc_int442;
  }

  if (t5361->mM.mX[509UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int442 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int442 = zc_int444;
  }

  if (t5361->mM.mX[512UL] != 0) {
    zc_int444 = 8.200000000000002E-8;
  } else {
    zc_int444 = intrm_sf_mf_148;
  }

  if (t5361->mM.mX[511UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_148 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_148 =
      Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  }

  if (t5361->mM.mX[514UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge = zc_int448;
  }

  if (t5361->mM.mX[513UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int448 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int448 =
      Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_xVint;
  }

  if (t5361->mM.mX[527UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_xVint =
      intrm_sf_mf_15;
  }

  if (t5361->mM.mX[518UL] != 0) {
    intrm_sf_mf_15 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_15 = intrm_sf_mf_150;
  }

  if (t5361->mM.mX[517UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_150 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_150 = zc_int453;
  }

  if (t5361->mM.mX[520UL] != 0) {
    zc_int453 = 8.200000000000002E-8;
  } else {
    zc_int453 = zc_int454;
  }

  if (t5361->mM.mX[519UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int454 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int454 = Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge;
  }

  if (t5361->mM.mX[522UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge = zc_int457;
  }

  if (t5361->mM.mX[521UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int457 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int457 = Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge;
  }

  if (t5361->mM.mX[524UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge = zc_int46;
  }

  if (t5361->mM.mX[516UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int46 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int46 = zc_int460;
  }

  if (t5361->mM.mX[523UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int460 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int460 =
      Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_xVint;
  }

  if (t5361->mM.mX[526UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_xVint =
      zc_int463;
  }

  if (t5361->mM.mX[525UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int463 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int463 = zc_int465;
  }

  if (t5361->mM.mX[529UL] != 0) {
    zc_int465 = 8.200000000000002E-8;
  } else {
    zc_int465 = zc_int466;
  }

  if (t5361->mM.mX[528UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int466 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int466 = Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge;
  }

  if (t5361->mM.mX[531UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge =
      intrm_sf_mf_156;
  }

  if (t5361->mM.mX[530UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_156 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_156 = zc_int471;
  }

  if (t5361->mM.mX[533UL] != 0) {
    zc_int471 = 8.200000000000002E-8;
  } else {
    zc_int471 = zc_int472;
  }

  if (t5361->mM.mX[532UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int472 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int472 = Accumalator_Module_Three1_Battery_Table_Based50_stateOfCharge;
  }

  if (t5361->mM.mX[535UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based50_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based50_stateOfCharge =
      intrm_sf_mf_158;
  }

  if (t5361->mM.mX[534UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_158 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_158 =
      Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  }

  if (t5361->mM.mX[537UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge = zc_int478;
  }

  if (t5361->mM.mX[536UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int478 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int478 = Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge;
  }

  if (t5361->mM.mX[549UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge = zc_int480;
  }

  if (t5361->mM.mX[540UL] != 0) {
    zc_int480 = 8.200000000000002E-8;
  } else {
    zc_int480 = zc_int481;
  }

  if (t5361->mM.mX[539UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int481 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int481 = zc_int483;
  }

  if (t5361->mM.mX[542UL] != 0) {
    zc_int483 = 8.200000000000002E-8;
  } else {
    zc_int483 = intrm_sf_mf_161;
  }

  if (t5361->mM.mX[541UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_161 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_161 =
      Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge;
  }

  if (t5361->mM.mX[544UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge = zc_int487;
  }

  if (t5361->mM.mX[543UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int487 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int487 = Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge;
  }

  if (t5361->mM.mX[546UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge = zc_int49;
  }

  if (t5361->mM.mX[538UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int49 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int49 = zc_int490;
  }

  if (t5361->mM.mX[545UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int490 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int490 =
      Accumalator_Module_Three1_Battery_Table_Based59_electricalModel_xVint;
  }

  if (t5361->mM.mX[548UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based59_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based59_electricalModel_xVint =
      zc_int493;
  }

  if (t5361->mM.mX[547UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int493 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int493 = Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge;
  }

  if (t5361->mM.mX[551UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge =
      intrm_sf_mf_165;
  }

  if (t5361->mM.mX[550UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_165 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_165 =
      Accumalator_Module_Three1_Battery_Table_Based7_electricalModel_xVint;
  }

  if (t5361->mM.mX[553UL] != 0) {
    Accumalator_Module_Three1_Battery_Table_Based7_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Three1_Battery_Table_Based7_electricalModel_xVint =
      intrm_sf_mf_166;
  }

  if (t5361->mM.mX[552UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_166 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_166 = zc_int501;
  }

  if (t5361->mM.mX[555UL] != 0) {
    zc_int501 = 8.200000000000002E-8;
  } else {
    zc_int501 = zc_int502;
  }

  if (t5361->mM.mX[554UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int502 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int502 = zc_int504;
  }

  if (t5361->mM.mX[557UL] != 0) {
    zc_int504 = 8.200000000000002E-8;
  } else {
    zc_int504 = zc_int505;
  }

  if (t5361->mM.mX[556UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int505 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int505 =
      Accumalator_Module_Two_Battery_Table_Based1_electricalModel_xVint;
  }

  if (t5361->mM.mX[559UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based1_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based1_electricalModel_xVint =
      zc_int508;
  }

  if (t5361->mM.mX[558UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int508 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int508 = zc_int51;
  }

  if (t5361->mM.mX[571UL] != 0) {
    zc_int51 = 8.200000000000002E-8;
  } else {
    zc_int51 = intrm_sf_mf_17;
  }

  if (t5361->mM.mX[562UL] != 0) {
    intrm_sf_mf_17 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_17 = intrm_sf_mf_170;
  }

  if (t5361->mM.mX[561UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_170 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_170 = Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  }

  if (t5361->mM.mX[564UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge = zc_int514;
  }

  if (t5361->mM.mX[563UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int514 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int514 = Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  }

  if (t5361->mM.mX[566UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge = zc_int517;
  }

  if (t5361->mM.mX[565UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int517 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int517 = zc_int519;
  }

  if (t5361->mM.mX[568UL] != 0) {
    zc_int519 = 8.200000000000002E-8;
  } else {
    zc_int519 = zc_int52;
  }

  if (t5361->mM.mX[560UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int52 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int52 = Accumalator_Module_Five1_Battery_Table_Based25_stateOfCharge;
  }

  if (t5361->mM.mX[567UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based25_stateOfCharge =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based25_stateOfCharge =
      Accumalator_Module_Two_Battery_Table_Based14_electricalModel_xVint;
  }

  if (t5361->mM.mX[570UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based14_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based14_electricalModel_xVint =
      intrm_sf_mf_174;
  }

  if (t5361->mM.mX[569UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_174 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_174 = Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  }

  if (t5361->mM.mX[573UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge = zc_int526;
  }

  if (t5361->mM.mX[572UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int526 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int526 = Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge;
  }

  if (t5361->mM.mX[575UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge = intrm_sf_mf_176;
  }

  if (t5361->mM.mX[574UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_176 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_176 = Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge;
  }

  if (t5361->mM.mX[577UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge = zc_int532;
  }

  if (t5361->mM.mX[576UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int532 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int532 =
      Accumalator_Module_Two_Battery_Table_Based18_electricalModel_xVint;
  }

  if (t5361->mM.mX[579UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based18_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based18_electricalModel_xVint =
      zc_int535;
  }

  if (t5361->mM.mX[578UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int535 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int535 = zc_int537;
  }

  if (t5361->mM.mX[581UL] != 0) {
    zc_int537 = 8.200000000000002E-8;
  } else {
    zc_int537 = intrm_sf_mf_179;
  }

  if (t5361->mM.mX[580UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_179 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_179 = zc_int54;
  }

  if (t5361->mM.mX[593UL] != 0) {
    zc_int54 = 8.200000000000002E-8;
  } else {
    zc_int54 = zc_int540;
  }

  if (t5361->mM.mX[584UL] != 0) {
    zc_int540 = 8.200000000000002E-8;
  } else {
    zc_int540 = zc_int541;
  }

  if (t5361->mM.mX[583UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int541 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int541 = Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  }

  if (t5361->mM.mX[586UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge = intrm_sf_mf_181;
  }

  if (t5361->mM.mX[585UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_181 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_181 = Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  }

  if (t5361->mM.mX[588UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge = zc_int547;
  }

  if (t5361->mM.mX[587UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int547 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int547 = Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge;
  }

  if (t5361->mM.mX[590UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge = zc_int55;
  }

  if (t5361->mM.mX[582UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int55 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int55 = zc_int550;
  }

  if (t5361->mM.mX[589UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int550 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int550 = zc_int552;
  }

  if (t5361->mM.mX[592UL] != 0) {
    zc_int552 = 8.200000000000002E-8;
  } else {
    zc_int552 = intrm_sf_mf_184;
  }

  if (t5361->mM.mX[591UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_184 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_184 = Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge;
  }

  if (t5361->mM.mX[595UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge = zc_int556;
  }

  if (t5361->mM.mX[594UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int556 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int556 = Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge;
  }

  if (t5361->mM.mX[597UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge = intrm_sf_mf_186;
  }

  if (t5361->mM.mX[596UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_186 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_186 = Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge;
  }

  if (t5361->mM.mX[599UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge = intrm_sf_mf_187;
  }

  if (t5361->mM.mX[598UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_187 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_187 = Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge;
  }

  if (t5361->mM.mX[601UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge = intrm_sf_mf_188;
  }

  if (t5361->mM.mX[600UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_188 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_188 = Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge;
  }

  if (t5361->mM.mX[603UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge = intrm_sf_mf_189;
  }

  if (t5361->mM.mX[602UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_189 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_189 =
      Accumalator_Module_Two_Battery_Table_Based29_electricalModel_xVint;
  }

  if (t5361->mM.mX[615UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based29_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based29_electricalModel_xVint =
      zc_int570;
  }

  if (t5361->mM.mX[606UL] != 0) {
    zc_int570 = 8.200000000000002E-8;
  } else {
    zc_int570 = intrm_sf_mf_190;
  }

  if (t5361->mM.mX[605UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_190 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_190 = Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge;
  }

  if (t5361->mM.mX[608UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge = intrm_sf_mf_191;
  }

  if (t5361->mM.mX[607UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_191 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_191 = zc_int576;
  }

  if (t5361->mM.mX[610UL] != 0) {
    zc_int576 = 8.200000000000002E-8;
  } else {
    zc_int576 = intrm_sf_mf_192;
  }

  if (t5361->mM.mX[609UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_192 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_192 = Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  }

  if (t5361->mM.mX[612UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge = zc_int58;
  }

  if (t5361->mM.mX[604UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int58 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int58 =
      Accumalator_Module_Five1_Battery_Table_Based27_electricalModel_xVint;
  }

  if (t5361->mM.mX[611UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based27_electricalModel_xVint =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based27_electricalModel_xVint =
      zc_int582;
  }

  if (t5361->mM.mX[614UL] != 0) {
    zc_int582 = 8.200000000000002E-8;
  } else {
    zc_int582 = zc_int583;
  }

  if (t5361->mM.mX[613UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int583 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int583 =
      Accumalator_Module_Two_Battery_Table_Based33_electricalModel_xVint;
  }

  if (t5361->mM.mX[617UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based33_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based33_electricalModel_xVint =
      zc_int586;
  }

  if (t5361->mM.mX[616UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int586 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int586 = zc_int588;
  }

  if (t5361->mM.mX[619UL] != 0) {
    zc_int588 = 8.200000000000002E-8;
  } else {
    zc_int588 = zc_int589;
  }

  if (t5361->mM.mX[618UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int589 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int589 = Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge;
  }

  if (t5361->mM.mX[621UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge = t4787;
  }

  if (t5361->mM.mX[620UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    t4787 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    t4787 = Accumalator_Module_Two_Battery_Table_Based36_electricalModel_xVint;
  }

  if (t5361->mM.mX[623UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based36_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based36_electricalModel_xVint =
      zc_int595;
  }

  if (t5361->mM.mX[622UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int595 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int595 = Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  }

  if (t5361->mM.mX[625UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge = t4789;
  }

  if (t5361->mM.mX[624UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    t4789 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    t4789 = Accumalator_Module_Two_Battery_Table_Based38_electricalModel_xVint;
  }

  if (t5361->mM.mX[737UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based38_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based38_electricalModel_xVint =
      zc_int60;
  }

  if (t5361->mM.mX[638UL] != 0) {
    zc_int60 = 8.200000000000002E-8;
  } else {
    zc_int60 = intrm_sf_mf_20;
  }

  if (t5361->mM.mX[629UL] != 0) {
    intrm_sf_mf_20 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_20 = intrm_sf_mf_200;
  }

  if (t5361->mM.mX[628UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_200 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_200 = zc_int603;
  }

  if (t5361->mM.mX[631UL] != 0) {
    zc_int603 = 8.200000000000002E-8;
  } else {
    zc_int603 = intrm_sf_mf_201;
  }

  if (t5361->mM.mX[630UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_201 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_201 = zc_int606;
  }

  if (t5361->mM.mX[633UL] != 0) {
    zc_int606 = 8.200000000000002E-8;
  } else {
    zc_int606 = zc_int607;
  }

  if (t5361->mM.mX[632UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int607 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int607 = Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge;
  }

  if (t5361->mM.mX[635UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge = intrm_sf_mf_203;
  }

  if (t5361->mM.mX[627UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_203 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_203 = zc_int610;
  }

  if (t5361->mM.mX[634UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int610 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int610 = zc_int612;
  }

  if (t5361->mM.mX[637UL] != 0) {
    zc_int612 = 8.200000000000002E-8;
  } else {
    zc_int612 = intrm_sf_mf_204;
  }

  if (t5361->mM.mX[636UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_204 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_204 = zc_int615;
  }

  if (t5361->mM.mX[640UL] != 0) {
    zc_int615 = 8.200000000000002E-8;
  } else {
    zc_int615 = zc_int616;
  }

  if (t5361->mM.mX[639UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int616 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int616 = zc_int618;
  }

  if (t5361->mM.mX[642UL] != 0) {
    zc_int618 = 8.200000000000002E-8;
  } else {
    zc_int618 = intrm_sf_mf_206;
  }

  if (t5361->mM.mX[641UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_206 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_206 =
      Accumalator_Module_Two_Battery_Table_Based44_electricalModel_xVint;
  }

  if (t5361->mM.mX[644UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based44_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based44_electricalModel_xVint =
      intrm_sf_mf_207;
  }

  if (t5361->mM.mX[643UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_207 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_207 =
      Accumalator_Module_Two_Battery_Table_Based45_electricalModel_xVint;
  }

  if (t5361->mM.mX[646UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based45_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based45_electricalModel_xVint =
      zc_int625;
  }

  if (t5361->mM.mX[645UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int625 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int625 = Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge;
  }

  if (t5361->mM.mX[648UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge = zc_int628;
  }

  if (t5361->mM.mX[647UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int628 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int628 = zc_int63;
  }

  if (t5361->mM.mX[660UL] != 0) {
    zc_int63 = 8.200000000000002E-8;
  } else {
    zc_int63 = zc_int630;
  }

  if (t5361->mM.mX[651UL] != 0) {
    zc_int630 = 8.200000000000002E-8;
  } else {
    zc_int630 = zc_int631;
  }

  if (t5361->mM.mX[650UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int631 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int631 =
      Accumalator_Module_Two_Battery_Table_Based48_electricalModel_xVint;
  }

  if (t5361->mM.mX[653UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based48_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based48_electricalModel_xVint =
      intrm_sf_mf_211;
  }

  if (t5361->mM.mX[652UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_211 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_211 =
      Accumalator_Module_Two_Battery_Table_Based49_electricalModel_xVint;
  }

  if (t5361->mM.mX[655UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based49_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based49_electricalModel_xVint =
      zc_int637;
  }

  if (t5361->mM.mX[654UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int637 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int637 = zc_int639;
  }

  if (t5361->mM.mX[657UL] != 0) {
    zc_int639 = 8.200000000000002E-8;
  } else {
    zc_int639 = intrm_sf_mf_213;
  }

  if (t5361->mM.mX[649UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_213 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_213 =
      Accumalator_Module_Five1_Battery_Table_Based29_electricalModel_xVint;
  }

  if (t5361->mM.mX[656UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based29_electricalModel_xVint =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based29_electricalModel_xVint =
      zc_int642;
  }

  if (t5361->mM.mX[659UL] != 0) {
    zc_int642 = 8.200000000000002E-8;
  } else {
    zc_int642 = zc_int643;
  }

  if (t5361->mM.mX[658UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int643 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int643 = Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  }

  if (t5361->mM.mX[662UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge = intrm_sf_mf_215;
  }

  if (t5361->mM.mX[661UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_215 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_215 =
      Accumalator_Module_Two_Battery_Table_Based52_electricalModel_xVint;
  }

  if (t5361->mM.mX[664UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based52_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based52_electricalModel_xVint =
      zc_int649;
  }

  if (t5361->mM.mX[663UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int649 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int649 =
      Accumalator_Module_Two_Battery_Table_Based53_electricalModel_xVint;
  }

  if (t5361->mM.mX[666UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based53_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based53_electricalModel_xVint =
      zc_int652;
  }

  if (t5361->mM.mX[665UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int652 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int652 = Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge;
  }

  if (t5361->mM.mX[668UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge = zc_int655;
  }

  if (t5361->mM.mX[667UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int655 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int655 = Accumalator_Module_Two_Battery_Table_Based58_stateOfCharge;
  }

  if (t5361->mM.mX[670UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based58_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based58_stateOfCharge = intrm_sf_mf_219;
  }

  if (t5361->mM.mX[669UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_219 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_219 = zc_int66;
  }

  if (t5361->mM.mX[682UL] != 0) {
    zc_int66 = 8.200000000000002E-8;
  } else {
    zc_int66 = zc_int660;
  }

  if (t5361->mM.mX[673UL] != 0) {
    zc_int660 = 8.200000000000002E-8;
  } else {
    zc_int660 = zc_int661;
  }

  if (t5361->mM.mX[672UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int661 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int661 = Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge;
  }

  if (t5361->mM.mX[675UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge = intrm_sf_mf_221;
  }

  if (t5361->mM.mX[674UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_221 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_221 = zc_int666;
  }

  if (t5361->mM.mX[677UL] != 0) {
    zc_int666 = 8.200000000000002E-8;
  } else {
    zc_int666 = intrm_sf_mf_222;
  }

  if (t5361->mM.mX[676UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_222 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_222 = zc_int669;
  }

  if (t5361->mM.mX[679UL] != 0) {
    zc_int669 = 8.200000000000002E-8;
  } else {
    zc_int669 = zc_int67;
  }

  if (t5361->mM.mX[671UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int67 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int67 =
      Accumalator_Module_Five1_Battery_Table_Based3_electricalModel_xVint;
  }

  if (t5361->mM.mX[678UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based3_electricalModel_xVint =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based3_electricalModel_xVint =
      Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge;
  }

  if (t5361->mM.mX[681UL] != 0) {
    Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge = intrm_sf_mf_224;
  }

  if (t5361->mM.mX[680UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_224 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_224 = Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  }

  if (t5361->mM.mX[684UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based1_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based1_stateOfCharge = intrm_sf_mf_225;
  }

  if (t5361->mM.mX[683UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_225 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_225 = zc_int678;
  }

  if (t5361->mM.mX[686UL] != 0) {
    zc_int678 = 8.200000000000002E-8;
  } else {
    zc_int678 = intrm_sf_mf_226;
  }

  if (t5361->mM.mX[685UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_226 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_226 =
      Accumalator_Module_four_Battery_Table_Based11_stateOfCharge;
  }

  if (t5361->mM.mX[688UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based11_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based11_stateOfCharge = zc_int682;
  }

  if (t5361->mM.mX[687UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int682 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int682 = zc_int684;
  }

  if (t5361->mM.mX[690UL] != 0) {
    zc_int684 = 8.200000000000002E-8;
  } else {
    zc_int684 = intrm_sf_mf_228;
  }

  if (t5361->mM.mX[689UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_228 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_228 = zc_int687;
  }

  if (t5361->mM.mX[692UL] != 0) {
    zc_int687 = 8.200000000000002E-8;
  } else {
    zc_int687 = intrm_sf_mf_229;
  }

  if (t5361->mM.mX[691UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_229 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_229 = zc_int69;
  }

  if (t5361->mM.mX[704UL] != 0) {
    zc_int69 = 8.200000000000002E-8;
  } else {
    zc_int69 = zc_int690;
  }

  if (t5361->mM.mX[695UL] != 0) {
    zc_int690 = 8.200000000000002E-8;
  } else {
    zc_int690 = zc_int691;
  }

  if (t5361->mM.mX[694UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int691 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int691 = zc_int693;
  }

  if (t5361->mM.mX[697UL] != 0) {
    zc_int693 = 8.200000000000002E-8;
  } else {
    zc_int693 = zc_int694;
  }

  if (t5361->mM.mX[696UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int694 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int694 = Accumalator_Module_four_Battery_Table_Based16_stateOfCharge;
  }

  if (t5361->mM.mX[699UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based16_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based16_stateOfCharge =
      intrm_sf_mf_232;
  }

  if (t5361->mM.mX[698UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_232 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_232 =
      Accumalator_Module_four_Battery_Table_Based17_stateOfCharge;
  }

  if (t5361->mM.mX[701UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based17_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based17_stateOfCharge = zc_int7;
  }

  if (t5361->mM.mX[626UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int7 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int7 = zc_int70;
  }

  if (t5361->mM.mX[693UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int70 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int70 =
      Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_xVint;
  }

  if (t5361->mM.mX[700UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_xVint =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_xVint =
      Accumalator_Module_four_Battery_Table_Based18_stateOfCharge;
  }

  if (t5361->mM.mX[703UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based18_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based18_stateOfCharge = zc_int703;
  }

  if (t5361->mM.mX[702UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int703 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int703 = Accumalator_Module_four_Battery_Table_Based19_stateOfCharge;
  }

  if (t5361->mM.mX[706UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based19_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based19_stateOfCharge = zc_int706;
  }

  if (t5361->mM.mX[705UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int706 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int706 = zc_int708;
  }

  if (t5361->mM.mX[708UL] != 0) {
    zc_int708 = 8.200000000000002E-8;
  } else {
    zc_int708 = zc_int709;
  }

  if (t5361->mM.mX[707UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int709 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int709 =
      Accumalator_Module_four_Battery_Table_Based20_electricalModel_xVint;
  }

  if (t5361->mM.mX[710UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based20_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based20_electricalModel_xVint =
      intrm_sf_mf_237;
  }

  if (t5361->mM.mX[709UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_237 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_237 =
      Accumalator_Module_four_Battery_Table_Based21_electricalModel_xVint;
  }

  if (t5361->mM.mX[712UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based21_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based21_electricalModel_xVint =
      zc_int715;
  }

  if (t5361->mM.mX[711UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int715 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int715 = zc_int717;
  }

  if (t5361->mM.mX[714UL] != 0) {
    zc_int717 = 8.200000000000002E-8;
  } else {
    zc_int717 = intrm_sf_mf_239;
  }

  if (t5361->mM.mX[713UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_239 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_239 = zc_int72;
  }

  if (t5361->mM.mX[726UL] != 0) {
    zc_int72 = 8.200000000000002E-8;
  } else {
    zc_int72 = zc_int720;
  }

  if (t5361->mM.mX[717UL] != 0) {
    zc_int720 = 8.200000000000002E-8;
  } else {
    zc_int720 = intrm_sf_mf_240;
  }

  if (t5361->mM.mX[716UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_240 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_240 =
      Accumalator_Module_four_Battery_Table_Based24_electricalModel_xVint;
  }

  if (t5361->mM.mX[719UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based24_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based24_electricalModel_xVint =
      intrm_sf_mf_241;
  }

  if (t5361->mM.mX[718UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_241 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_241 = zc_int726;
  }

  if (t5361->mM.mX[721UL] != 0) {
    zc_int726 = 8.200000000000002E-8;
  } else {
    zc_int726 = intrm_sf_mf_242;
  }

  if (t5361->mM.mX[720UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_242 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_242 = zc_int729;
  }

  if (t5361->mM.mX[723UL] != 0) {
    zc_int729 = 8.200000000000002E-8;
  } else {
    zc_int729 = intrm_sf_mf_243;
  }

  if (t5361->mM.mX[715UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_243 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_243 = zc_int730;
  }

  if (t5361->mM.mX[722UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int730 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int730 = zc_int732;
  }

  if (t5361->mM.mX[725UL] != 0) {
    zc_int732 = 8.200000000000002E-8;
  } else {
    zc_int732 = intrm_sf_mf_244;
  }

  if (t5361->mM.mX[724UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_244 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_244 =
      Accumalator_Module_four_Battery_Table_Based28_electricalModel_xVint;
  }

  if (t5361->mM.mX[728UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based28_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based28_electricalModel_xVint =
      intrm_sf_mf_245;
  }

  if (t5361->mM.mX[727UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_245 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_245 =
      Accumalator_Module_four_Battery_Table_Based29_stateOfCharge;
  }

  if (t5361->mM.mX[730UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based29_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based29_stateOfCharge = zc_int739;
  }

  if (t5361->mM.mX[729UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int739 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int739 =
      Accumalator_Module_four_Battery_Table_Based3_electricalModel_xVint;
  }

  if (t5361->mM.mX[732UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based3_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based3_electricalModel_xVint =
      intrm_sf_mf_247;
  }

  if (t5361->mM.mX[731UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_247 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_247 = zc_int744;
  }

  if (t5361->mM.mX[734UL] != 0) {
    zc_int744 = 8.200000000000002E-8;
  } else {
    zc_int744 = zc_int745;
  }

  if (t5361->mM.mX[733UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int745 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int745 = zc_int747;
  }

  if (t5361->mM.mX[736UL] != 0) {
    zc_int747 = 8.200000000000002E-8;
  } else {
    zc_int747 = intrm_sf_mf_249;
  }

  if (t5361->mM.mX[735UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_249 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_249 =
      Accumalator_Module_four_Battery_Table_Based32_stateOfCharge;
  }

  if (t5361->mM.mX[749UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based32_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based32_stateOfCharge = zc_int750;
  }

  if (t5361->mM.mX[740UL] != 0) {
    zc_int750 = 8.200000000000002E-8;
  } else {
    zc_int750 = intrm_sf_mf_250;
  }

  if (t5361->mM.mX[739UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_250 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_250 =
      Accumalator_Module_four_Battery_Table_Based33_stateOfCharge;
  }

  if (t5361->mM.mX[742UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based33_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based33_stateOfCharge =
      intrm_sf_mf_251;
  }

  if (t5361->mM.mX[741UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_251 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_251 = zc_int756;
  }

  if (t5361->mM.mX[744UL] != 0) {
    zc_int756 = 8.200000000000002E-8;
  } else {
    zc_int756 = intrm_sf_mf_252;
  }

  if (t5361->mM.mX[743UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_252 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_252 =
      Accumalator_Module_four_Battery_Table_Based35_stateOfCharge;
  }

  if (t5361->mM.mX[746UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based35_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based35_stateOfCharge = zc_int76;
  }

  if (t5361->mM.mX[738UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int76 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int76 = Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge;
  }

  if (t5361->mM.mX[745UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge =
      Accumalator_Module_four_Battery_Table_Based36_electricalModel_xVint;
  }

  if (t5361->mM.mX[748UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based36_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based36_electricalModel_xVint =
      intrm_sf_mf_254;
  }

  if (t5361->mM.mX[747UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_254 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_254 = zc_int765;
  }

  if (t5361->mM.mX[751UL] != 0) {
    zc_int765 = 8.200000000000002E-8;
  } else {
    zc_int765 = intrm_sf_mf_255;
  }

  if (t5361->mM.mX[750UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_255 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_255 = zc_int768;
  }

  if (t5361->mM.mX[753UL] != 0) {
    zc_int768 = 8.200000000000002E-8;
  } else {
    zc_int768 = zc_int769;
  }

  if (t5361->mM.mX[752UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int769 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int769 = zc_int771;
  }

  if (t5361->mM.mX[755UL] != 0) {
    zc_int771 = 8.200000000000002E-8;
  } else {
    zc_int771 = zc_int772;
  }

  if (t5361->mM.mX[754UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int772 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int772 = zc_int774;
  }

  if (t5361->mM.mX[757UL] != 0) {
    zc_int774 = 8.200000000000002E-8;
  } else {
    zc_int774 = intrm_sf_mf_258;
  }

  if (t5361->mM.mX[756UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_258 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_258 = zc_int777;
  }

  if (t5361->mM.mX[759UL] != 0) {
    zc_int777 = 8.200000000000002E-8;
  } else {
    zc_int777 = zc_int778;
  }

  if (t5361->mM.mX[758UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int778 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int778 =
      Accumalator_Module_four_Battery_Table_Based41_electricalModel_xVint;
  }

  if (t5361->mM.mX[771UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based41_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based41_electricalModel_xVint =
      zc_int780;
  }

  if (t5361->mM.mX[762UL] != 0) {
    zc_int780 = 8.200000000000002E-8;
  } else {
    zc_int780 = intrm_sf_mf_260;
  }

  if (t5361->mM.mX[761UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_260 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_260 = zc_int783;
  }

  if (t5361->mM.mX[764UL] != 0) {
    zc_int783 = 8.200000000000002E-8;
  } else {
    zc_int783 = zc_int784;
  }

  if (t5361->mM.mX[763UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int784 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int784 = zc_int786;
  }

  if (t5361->mM.mX[766UL] != 0) {
    zc_int786 = 8.200000000000002E-8;
  } else {
    zc_int786 = zc_int787;
  }

  if (t5361->mM.mX[765UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int787 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int787 = zc_int789;
  }

  if (t5361->mM.mX[768UL] != 0) {
    zc_int789 = 8.200000000000002E-8;
  } else {
    zc_int789 = intrm_sf_mf_263;
  }

  if (t5361->mM.mX[760UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_263 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_263 =
      Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge;
  }

  if (t5361->mM.mX[767UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge =
      Accumalator_Module_four_Battery_Table_Based45_electricalModel_xVint;
  }

  if (t5361->mM.mX[770UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based45_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based45_electricalModel_xVint =
      intrm_sf_mf_264;
  }

  if (t5361->mM.mX[769UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_264 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_264 =
      Accumalator_Module_four_Battery_Table_Based46_electricalModel_xVint;
  }

  if (t5361->mM.mX[773UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based46_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based46_electricalModel_xVint =
      intrm_sf_mf_265;
  }

  if (t5361->mM.mX[772UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_265 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_265 =
      Accumalator_Module_four_Battery_Table_Based47_electricalModel_xVint;
  }

  if (t5361->mM.mX[775UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based47_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based47_electricalModel_xVint =
      intrm_sf_mf_266;
  }

  if (t5361->mM.mX[774UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_266 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_266 =
      Accumalator_Module_four_Battery_Table_Based48_electricalModel_xVint;
  }

  if (t5361->mM.mX[777UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based48_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based48_electricalModel_xVint =
      intrm_sf_mf_267;
  }

  if (t5361->mM.mX[776UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_267 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_267 =
      Accumalator_Module_four_Battery_Table_Based49_stateOfCharge;
  }

  if (t5361->mM.mX[779UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based49_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based49_stateOfCharge =
      intrm_sf_mf_268;
  }

  if (t5361->mM.mX[778UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_268 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_268 = Accumalator_Module_four_Battery_Table_Based5_stateOfCharge;
  }

  if (t5361->mM.mX[781UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based5_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based5_stateOfCharge = zc_int808;
  }

  if (t5361->mM.mX[780UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int808 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int808 =
      Accumalator_Module_four_Battery_Table_Based50_electricalModel_xVint;
  }

  if (t5361->mM.mX[793UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based50_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based50_electricalModel_xVint =
      zc_int810;
  }

  if (t5361->mM.mX[784UL] != 0) {
    zc_int810 = 8.200000000000002E-8;
  } else {
    zc_int810 = zc_int811;
  }

  if (t5361->mM.mX[783UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int811 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int811 =
      Accumalator_Module_four_Battery_Table_Based51_electricalModel_xVint;
  }

  if (t5361->mM.mX[786UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based51_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based51_electricalModel_xVint =
      zc_int814;
  }

  if (t5361->mM.mX[785UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int814 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int814 = zc_int816;
  }

  if (t5361->mM.mX[788UL] != 0) {
    zc_int816 = 8.200000000000002E-8;
  } else {
    zc_int816 = zc_int817;
  }

  if (t5361->mM.mX[787UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int817 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int817 =
      Accumalator_Module_four_Battery_Table_Based53_electricalModel_xVint;
  }

  if (t5361->mM.mX[790UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based53_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based53_electricalModel_xVint =
      zc_int82;
  }

  if (t5361->mM.mX[782UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int82 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int82 =
      Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_xVint;
  }

  if (t5361->mM.mX[789UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_xVint =
      nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_xVint =
      zc_int822;
  }

  if (t5361->mM.mX[792UL] != 0) {
    zc_int822 = 8.200000000000002E-8;
  } else {
    zc_int822 = intrm_sf_mf_274;
  }

  if (t5361->mM.mX[791UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_274 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_274 =
      Accumalator_Module_four_Battery_Table_Based58_electricalModel_xVint;
  }

  if (t5361->mM.mX[795UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based58_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based58_electricalModel_xVint =
      intrm_sf_mf_275;
  }

  if (t5361->mM.mX[794UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_275 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_275 =
      Accumalator_Module_four_Battery_Table_Based59_stateOfCharge;
  }

  if (t5361->mM.mX[797UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based59_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based59_stateOfCharge = zc_int829;
  }

  if (t5361->mM.mX[796UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int829 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int829 = Accumalator_Module_four_Battery_Table_Based6_stateOfCharge;
  }

  if (t5361->mM.mX[799UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based6_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based6_stateOfCharge = zc_int832;
  }

  if (t5361->mM.mX[798UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int832 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int832 =
      Accumalator_Module_four_Battery_Table_Based7_electricalModel_xVint;
  }

  if (t5361->mM.mX[801UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based7_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based7_electricalModel_xVint =
      zc_int835;
  }

  if (t5361->mM.mX[800UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int835 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int835 = t2890[0UL];
  }

  if (t5361->mM.mX[803UL] != 0) {
    Accumalator_Module_four_Battery_Table_Based8_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_four_Battery_Table_Based8_stateOfCharge = zc_int838;
  }

  if (t5361->mM.mX[802UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int838 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int838 = zc_int84;
  }

  if (t5361->mM.mX[811UL] != 0) {
    zc_int84 = 8.200000000000002E-8;
  } else {
    zc_int84 = intrm_sf_mf_28;
  }

  if (t5361->mM.mX[804UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    intrm_sf_mf_28 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    intrm_sf_mf_28 = zc_int87;
  }

  if (t5361->mM.mX[813UL] != 0) {
    zc_int87 = 8.200000000000002E-8;
  } else {
    zc_int87 = zc_int88;
  }

  if (t5361->mM.mX[812UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int88 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int88 = zc_int9;
  }

  if (t5361->mM.mX[825UL] != 0) {
    zc_int9 = 8.200000000000002E-8;
  } else {
    zc_int9 = intrm_sf_mf_3;
  }

  if (t5361->mM.mX[816UL] != 0) {
    intrm_sf_mf_3 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_3 = zc_int91;
  }

  if (t5361->mM.mX[815UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int91 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int91 = Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge;
  }

  if (t5361->mM.mX[818UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge = zc_int94;
  }

  if (t5361->mM.mX[817UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int94 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int94 =
      Accumalator_Module_Five1_Battery_Table_Based38_electricalModel_xVint;
  }

  if (t5361->mM.mX[820UL] != 0) {
    Accumalator_Module_Five1_Battery_Table_Based38_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Accumalator_Module_Five1_Battery_Table_Based38_electricalModel_xVint =
      zc_int97;
  }

  if (t5361->mM.mX[819UL] != 0) {
    t3394[0UL] = 0UL;
    for (t4026 = 0UL; t4026 < 40UL; t4026++) {
      t3682 = t4026 / 40UL;
      t3872 = (t4026 - t4026 % 40UL) + t3394[t3682 > 0UL ? 0UL : t3682];
      if (nonscalar0[t4026] * 1.0E-5 < nonscalar0[t3872 > 39UL ? 39UL : t3872] *
          1.0E-5) {
        t3394[t3682 > 0UL ? 0UL : t3682] = t4026 % 40UL;
      }
    }

    zc_int97 = nonscalar0[t3394[0UL] > 39UL ? 39UL : t3394[0UL]] * 1.0E-5;
  } else {
    zc_int97 = zc_int99;
  }

  if (t5361->mM.mX[822UL] != 0) {
    zc_int99 = 8.200000000000002E-8;
  } else {
    zc_int99 = intrm_sf_mf_33;
  }

  if (t5361->mM.mX[328UL] != 0) {
    out->mFX.mX[25UL] = t282 - (t5361->mX.mX[1976UL] + 0.8);
  } else {
    out->mFX.mX[25UL] = t282 - (t5361->mX.mX[1976UL] * 0.001 + 0.8);
  }

  if (t5361->mM.mX[328UL] != 0) {
    out->mFX.mX[27UL] = t5361->mX.mX[729UL] - (t5361->mX.mX[1976UL] * 1.0E-5 +
      8.0000000000000013E-6);
  } else {
    out->mFX.mX[27UL] = t5361->mX.mX[729UL] - (t5361->mX.mX[1976UL] +
      8.0000000000000013E-6);
  }

  if (t5361->mM.mX[329UL] != 0) {
    out->mFX.mX[29UL] = t5361->mX.mX[730UL] - (t284 - 0.799999992) / 0.001;
  } else {
    out->mFX.mX[29UL] = t5361->mX.mX[730UL] - t284 * 1.0E-5;
  }

  if (t5361->mM.mX[330UL] != 0) {
    out->mFX.mX[30UL] = -t5361->mX.mX[1967UL] - (t5361->mX.mX[1978UL] + 0.8);
  } else {
    out->mFX.mX[30UL] = -t5361->mX.mX[1967UL] - (t5361->mX.mX[1978UL] * 0.001 +
      0.8);
  }

  if (t5361->mM.mX[330UL] != 0) {
    out->mFX.mX[32UL] = t4785 - (t5361->mX.mX[1978UL] * 1.0E-5 +
      8.0000000000000013E-6);
  } else {
    out->mFX.mX[32UL] = t4785 - (t5361->mX.mX[1978UL] + 8.0000000000000013E-6);
  }

  if (t5361->mM.mX[331UL] != 0) {
    out->mFX.mX[34UL] = t5361->mX.mX[1977UL] - (t5361->mX.mX[1967UL] -
      0.799999992) / 0.001;
  } else {
    out->mFX.mX[34UL] = t5361->mX.mX[1977UL] - t5361->mX.mX[1967UL] * 1.0E-5;
  }

  if (t5361->mM.mX[333UL] != 0) {
    out->mFX.mX[35UL] = Three_phase_inverter_IGBT_BH_diode_private_Diode_v_diode
      - (t5361->mX.mX[1979UL] + 0.8);
  } else {
    out->mFX.mX[35UL] = Three_phase_inverter_IGBT_BH_diode_private_Diode_v_diode
      - (t5361->mX.mX[1979UL] * 0.001 + 0.8);
  }

  if (t5361->mM.mX[333UL] != 0) {
    out->mFX.mX[37UL] = t5361->mX.mX[731UL] - (t5361->mX.mX[1979UL] * 1.0E-5 +
      8.0000000000000013E-6);
  } else {
    out->mFX.mX[37UL] = t5361->mX.mX[731UL] - (t5361->mX.mX[1979UL] +
      8.0000000000000013E-6);
  }

  if (t5361->mM.mX[334UL] != 0) {
    out->mFX.mX[39UL] = t5361->mX.mX[732UL] - (t290 - 0.799999992) / 0.001;
  } else {
    out->mFX.mX[39UL] = t5361->mX.mX[732UL] - t290 * 1.0E-5;
  }

  if (t5361->mM.mX[335UL] != 0) {
    out->mFX.mX[40UL] = -t5361->mX.mX[1969UL] - (t5361->mX.mX[1981UL] + 0.8);
  } else {
    out->mFX.mX[40UL] = -t5361->mX.mX[1969UL] - (t5361->mX.mX[1981UL] * 0.001 +
      0.8);
  }

  if (t5361->mM.mX[335UL] != 0) {
    out->mFX.mX[42UL] = Three_phase_inverter_IGBT_BL_diode_i - (t5361->mX.mX
      [1981UL] * 1.0E-5 + 8.0000000000000013E-6);
  } else {
    out->mFX.mX[42UL] = Three_phase_inverter_IGBT_BL_diode_i - (t5361->mX.mX
      [1981UL] + 8.0000000000000013E-6);
  }

  if (t5361->mM.mX[336UL] != 0) {
    out->mFX.mX[44UL] = t5361->mX.mX[1980UL] - (t5361->mX.mX[1969UL] -
      0.799999992) / 0.001;
  } else {
    out->mFX.mX[44UL] = t5361->mX.mX[1980UL] - t5361->mX.mX[1969UL] * 1.0E-5;
  }

  if (t5361->mM.mX[337UL] != 0) {
    out->mFX.mX[45UL] = Three_phase_inverter_IGBT_CH_diode_private_Diode_v_diode
      - (t5361->mX.mX[1982UL] + 0.8);
  } else {
    out->mFX.mX[45UL] = Three_phase_inverter_IGBT_CH_diode_private_Diode_v_diode
      - (t5361->mX.mX[1982UL] * 0.001 + 0.8);
  }

  if (t5361->mM.mX[337UL] != 0) {
    out->mFX.mX[47UL] = t5361->mX.mX[733UL] - (t5361->mX.mX[1982UL] * 1.0E-5 +
      8.0000000000000013E-6);
  } else {
    out->mFX.mX[47UL] = t5361->mX.mX[733UL] - (t5361->mX.mX[1982UL] +
      8.0000000000000013E-6);
  }

  if (t5361->mM.mX[338UL] != 0) {
    out->mFX.mX[49UL] = t5361->mX.mX[734UL] - (t296 - 0.799999992) / 0.001;
  } else {
    out->mFX.mX[49UL] = t5361->mX.mX[734UL] - t296 * 1.0E-5;
  }

  if (t5361->mM.mX[339UL] != 0) {
    out->mFX.mX[50UL] = -t5361->mX.mX[1970UL] - (t5361->mX.mX[1984UL] + 0.8);
  } else {
    out->mFX.mX[50UL] = -t5361->mX.mX[1970UL] - (t5361->mX.mX[1984UL] * 0.001 +
      0.8);
  }

  if (t5361->mM.mX[339UL] != 0) {
    out->mFX.mX[52UL] = Three_phase_inverter_IGBT_CL_diode_i - (t5361->mX.mX
      [1984UL] * 1.0E-5 + 8.0000000000000013E-6);
  } else {
    out->mFX.mX[52UL] = Three_phase_inverter_IGBT_CL_diode_i - (t5361->mX.mX
      [1984UL] + 8.0000000000000013E-6);
  }

  if (t5361->mM.mX[340UL] != 0) {
    out->mFX.mX[54UL] = t5361->mX.mX[1983UL] - (t5361->mX.mX[1970UL] -
      0.799999992) / 0.001;
  } else {
    out->mFX.mX[54UL] = t5361->mX.mX[1983UL] - t5361->mX.mX[1970UL] * 1.0E-5;
  }

  out->mFX.mX[0UL] =
    Accumalator_Module_Five1_Battery_Table_Based22_electricalModel_v -
    ((((((((-t5361->mX.mX[113UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Three1_Battery_Table_Based34_stateOfCharge +
          t5361->mX.mX[114UL]) + t5361->mX.mX[115UL]) + t5361->mX.mX[116UL]) +
       t5361->mX.mX[117UL]) + t5361->mX.mX[118UL]) + intrm_sf_mf_143);
  out->mFX.mX[1UL] =
    Accumalator_Module_Three1_Battery_Table_Based33_electricalModel_v -
    ((((((t5361->mX.mX[986UL] *
          Accumalator_Module_Three1_Battery_Table_Based38_stateOfCharge +
          t5361->mX.mX[1026UL]) + t5361->mX.mX[1027UL]) + t5361->mX.mX[1028UL])
       + t5361->mX.mX[1029UL]) + t5361->mX.mX[1030UL]) + intrm_sf_mf_144);
  out->mFX.mX[2UL] =
    Accumalator_Module_four_Battery_Table_Based52_electricalModel_v -
    ((((((t5361->mX.mX[1911UL] * zc_int822 + t5361->mX.mX[1932UL]) +
         t5361->mX.mX[1933UL]) + t5361->mX.mX[1934UL]) + t5361->mX.mX[1935UL]) +
      t5361->mX.mX[1936UL]) + intrm_sf_mf_274);
  out->mFX.mX[3UL] =
    Accumalator_Module_Five1_Battery_Table_Based23_electricalModel_v -
    ((((((((-t5361->mX.mX[120UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_xVint
          + t5361->mX.mX[121UL]) + t5361->mX.mX[122UL]) + t5361->mX.mX[123UL]) +
       t5361->mX.mX[124UL]) + t5361->mX.mX[125UL]) + zc_int46);
  out->mFX.mX[4UL] =
    Accumalator_Module_Three1_Battery_Table_Based4_electricalModel_v -
    ((((((((-t5361->mX.mX[1032UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int435 + t5361->mX.mX[1033UL]) + t5361->mX.mX[1034UL]) +
        t5361->mX.mX[1035UL]) + t5361->mX.mX[1036UL]) + t5361->mX.mX[1037UL]) +
     intrm_sf_mf_145);
  out->mFX.mX[5UL] =
    Accumalator_Module_four_Battery_Table_Based53_electricalModel_v -
    ((((((t5361->mX.mX[1919UL] *
          Accumalator_Module_four_Battery_Table_Based58_electricalModel_xVint
          + t5361->mX.mX[1938UL]) + t5361->mX.mX[1939UL]) + t5361->mX.mX[1940UL])
       + t5361->mX.mX[1941UL]) + t5361->mX.mX[1942UL]) + intrm_sf_mf_275);
  out->mFX.mX[6UL] =
    Accumalator_Module_Five1_Battery_Table_Based23_electricalModel_v -
    ((((((t5361->mX.mX[120UL] *
          Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge +
          t5361->mX.mX[127UL]) + t5361->mX.mX[128UL]) + t5361->mX.mX[129UL]) +
       t5361->mX.mX[130UL]) + t5361->mX.mX[131UL]) + zc_int49);
  out->mFX.mX[7UL] =
    Accumalator_Module_Three1_Battery_Table_Based37_electricalModel_v -
    ((((((t5361->mX.mX[1012UL] * zc_int438 + t5361->mX.mX[1039UL]) +
         t5361->mX.mX[1040UL]) + t5361->mX.mX[1041UL]) + t5361->mX.mX[1042UL]) +
      t5361->mX.mX[1043UL]) + intrm_sf_mf_146);
  out->mFX.mX[8UL] =
    Accumalator_Module_four_Battery_Table_Based13_electricalModel_v -
    ((((((t5361->mX.mX[1613UL] *
          Accumalator_Module_four_Battery_Table_Based59_stateOfCharge +
          t5361->mX.mX[1944UL]) + t5361->mX.mX[1945UL]) + t5361->mX.mX[1946UL])
       + t5361->mX.mX[1947UL]) + t5361->mX.mX[1948UL]) + zc_int829);
  out->mFX.mX[9UL] =
    Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_v -
    ((((((t5361->mX.mX[95UL] * zc_int51 + t5361->mX.mX[133UL]) + t5361->mX.mX
         [134UL]) + t5361->mX.mX[135UL]) + t5361->mX.mX[136UL]) + t5361->mX.mX
      [137UL]) + zc_int52);
  out->mFX.mX[10UL] =
    Accumalator_Module_Three1_Battery_Table_Based41_electricalModel_v - ((((((((
    -t5361->mX.mX[1045UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based40_electricalModel_xVint
    + t5361->mX.mX[1048UL]) + t5361->mX.mX[1049UL]) + t5361->mX.mX[1050UL]) +
    t5361->mX.mX[1051UL]) + t5361->mX.mX[1052UL]) + zc_int442);
  out->mFX.mX[11UL] =
    Accumalator_Module_four_Battery_Table_Based4_electricalModel_v -
    ((((((t5361->mX.mX[1815UL] *
          Accumalator_Module_four_Battery_Table_Based6_stateOfCharge +
          t5361->mX.mX[1950UL]) + t5361->mX.mX[1951UL]) + t5361->mX.mX[1952UL])
       + t5361->mX.mX[1953UL]) + t5361->mX.mX[1954UL]) + zc_int832);
  out->mFX.mX[12UL] =
    Accumalator_Module_Five1_Battery_Table_Based26_electricalModel_v -
    ((((((((-t5361->mX.mX[139UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int54 + t5361->mX.mX[141UL]) + t5361->mX.mX[142UL]) + t5361->mX.mX
        [143UL]) + t5361->mX.mX[144UL]) + t5361->mX.mX[145UL]) + zc_int55);
  out->mFX.mX[13UL] =
    Accumalator_Module_Three1_Battery_Table_Based42_electricalModel_v - ((((((((
    -t5361->mX.mX[1054UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) * zc_int444
    + t5361->mX.mX[1057UL]) + t5361->mX.mX[1058UL]) + t5361->mX.mX[1059UL]) +
    t5361->mX.mX[1060UL]) + t5361->mX.mX[1061UL]) + intrm_sf_mf_148);
  out->mFX.mX[14UL] =
    Accumalator_Module_four_Battery_Table_Based15_electricalModel_v -
    ((((((t5361->mX.mX[1627UL] *
          Accumalator_Module_four_Battery_Table_Based7_electricalModel_xVint
          + t5361->mX.mX[1956UL]) + t5361->mX.mX[1957UL]) + t5361->mX.mX[1958UL])
       + t5361->mX.mX[1959UL]) + t5361->mX.mX[1960UL]) + zc_int835);
  out->mFX.mX[15UL] =
    Accumalator_Module_Five1_Battery_Table_Based21_electricalModel_v -
    ((((((t5361->mX.mX[104UL] *
          Accumalator_Module_Two_Battery_Table_Based29_electricalModel_xVint
          + t5361->mX.mX[147UL]) + t5361->mX.mX[148UL]) + t5361->mX.mX[149UL]) +
       t5361->mX.mX[150UL]) + t5361->mX.mX[151UL]) + zc_int58);
  out->mFX.mX[16UL] =
    Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_v - ((((((((
    -t5361->mX.mX[1063UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge + t5361->
    mX.mX[1064UL]) + t5361->mX.mX[1065UL]) + t5361->mX.mX[1066UL]) +
    t5361->mX.mX[1067UL]) + t5361->mX.mX[1068UL]) + zc_int448);
  out->mFX.mX[17UL] =
    Accumalator_Module_four_Battery_Table_Based17_electricalModel_v -
    ((((((t5361->mX.mX[1643UL] *
          Accumalator_Module_four_Battery_Table_Based8_stateOfCharge +
          t5361->mX.mX[1962UL]) + t5361->mX.mX[1963UL]) + t5361->mX.mX[1964UL])
       + t5361->mX.mX[1965UL]) + t5361->mX.mX[1966UL]) + zc_int838);
  out->mFX.mX[18UL] =
    Accumalator_Module_Five1_Battery_Table_Based22_electricalModel_v -
    ((((((t5361->mX.mX[113UL] * zc_int60 + t5361->mX.mX[153UL]) + t5361->mX.mX
         [154UL]) + t5361->mX.mX[155UL]) + t5361->mX.mX[156UL]) + t5361->mX.mX
      [157UL]) + intrm_sf_mf_203);
  out->mFX.mX[19UL] =
    Accumalator_Module_Three1_Battery_Table_Based44_electricalModel_v - ((((((((
    -t5361->mX.mX[1070UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    intrm_sf_mf_15 + t5361->mX.mX[1071UL]) + t5361->mX.mX[1072UL]) +
    t5361->mX.mX[1073UL]) + t5361->mX.mX[1074UL]) + t5361->mX.mX[1075UL]) +
    intrm_sf_mf_150);
  out->mFX.mX[20UL] = (t5361->mX.mX[1971UL] - t5361->mX.mX[1967UL] * 1.0E-12) -
    (t4790 * t5361->mX.mX[1974UL] + t4791 * t5361->mX.mX[1975UL]);
  out->mFX.mX[21UL] =
    Accumalator_Module_Five1_Battery_Table_Based26_electricalModel_v -
    ((((((t5361->mX.mX[139UL] * zc_int63 + t5361->mX.mX[159UL]) + t5361->mX.mX
         [160UL]) + t5361->mX.mX[161UL]) + t5361->mX.mX[162UL]) + t5361->mX.mX
      [163UL]) + intrm_sf_mf_213);
  out->mFX.mX[22UL] = (t5361->mX.mX[1972UL] - t5361->mX.mX[1969UL] * 1.0E-12) -
    (t4792 * t5361->mX.mX[1974UL] + t4793 * t5361->mX.mX[1975UL]);
  out->mFX.mX[23UL] =
    Accumalator_Module_Three1_Battery_Table_Based44_electricalModel_v -
    ((((((t5361->mX.mX[1070UL] * zc_int453 + t5361->mX.mX[1077UL]) +
         t5361->mX.mX[1078UL]) + t5361->mX.mX[1079UL]) + t5361->mX.mX[1080UL]) +
      t5361->mX.mX[1081UL]) + zc_int454);
  out->mFX.mX[24UL] = (t5361->mX.mX[1973UL] - t5361->mX.mX[1970UL] * 1.0E-12) -
    (t4794 * t5361->mX.mX[1974UL] + t4795 * t5361->mX.mX[1975UL]);
  out->mFX.mX[26UL] =
    Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_v -
    ((((((t5361->mX.mX[88UL] * zc_int66 + t5361->mX.mX[165UL]) + t5361->mX.mX
         [166UL]) + t5361->mX.mX[167UL]) + t5361->mX.mX[168UL]) + t5361->mX.mX
      [169UL]) + zc_int67);
  out->mFX.mX[28UL] =
    Accumalator_Module_Three1_Battery_Table_Based41_electricalModel_v -
    ((((((t5361->mX.mX[1045UL] *
          Accumalator_Module_Three1_Battery_Table_Based45_stateOfCharge +
          t5361->mX.mX[1083UL]) + t5361->mX.mX[1084UL]) + t5361->mX.mX[1085UL])
       + t5361->mX.mX[1086UL]) + t5361->mX.mX[1087UL]) + zc_int457);
  out->mFX.mX[31UL] =
    Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_v -
    ((((((((-t5361->mX.mX[171UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int69 + t5361->mX.mX[174UL]) + t5361->mX.mX[175UL]) + t5361->mX.mX
        [176UL]) + t5361->mX.mX[177UL]) + t5361->mX.mX[178UL]) + zc_int70);
  out->mFX.mX[33UL] =
    Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_v - ((((((((
    -t5361->mX.mX[1089UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based46_stateOfCharge + t5361->
    mX.mX[1091UL]) + t5361->mX.mX[1092UL]) + t5361->mX.mX[1093UL]) +
    t5361->mX.mX[1094UL]) + t5361->mX.mX[1095UL]) + zc_int460);
  out->mFX.mX[36UL] =
    Accumalator_Module_Five1_Battery_Table_Based31_electricalModel_v -
    ((((((((-t5361->mX.mX[180UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int72 + t5361->mX.mX[183UL]) + t5361->mX.mX[184UL]) + t5361->mX.mX
        [185UL]) + t5361->mX.mX[186UL]) + t5361->mX.mX[187UL]) + intrm_sf_mf_243);
  out->mFX.mX[38UL] =
    Accumalator_Module_Three1_Battery_Table_Based42_electricalModel_v -
    ((((((t5361->mX.mX[1054UL] *
          Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_xVint
          + t5361->mX.mX[1097UL]) + t5361->mX.mX[1098UL]) + t5361->mX.mX[1099UL])
       + t5361->mX.mX[1100UL]) + t5361->mX.mX[1101UL]) + zc_int463);
  out->mFX.mX[41UL] =
    Accumalator_Module_Five1_Battery_Table_Based1_electricalModel_v -
    ((((((t5361->mX.mX[1UL] *
          Accumalator_Module_four_Battery_Table_Based32_stateOfCharge +
          t5361->mX.mX[189UL]) + t5361->mX.mX[190UL]) + t5361->mX.mX[191UL]) +
       t5361->mX.mX[192UL]) + t5361->mX.mX[193UL]) + zc_int76);
  out->mFX.mX[43UL] =
    Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_v -
    ((((((t5361->mX.mX[1063UL] * zc_int465 + t5361->mX.mX[1103UL]) +
         t5361->mX.mX[1104UL]) + t5361->mX.mX[1105UL]) + t5361->mX.mX[1106UL]) +
      t5361->mX.mX[1107UL]) + zc_int466);
  out->mFX.mX[46UL] =
    Accumalator_Module_Five1_Battery_Table_Based33_electricalModel_v -
    ((((((((-t5361->mX.mX[195UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based41_electricalModel_xVint
          + t5361->mX.mX[196UL]) + t5361->mX.mX[197UL]) + t5361->mX.mX[198UL]) +
       t5361->mX.mX[199UL]) + t5361->mX.mX[200UL]) + intrm_sf_mf_263);
  out->mFX.mX[48UL] =
    Accumalator_Module_Three1_Battery_Table_Based12_electricalModel_v -
    ((((((t5361->mX.mX[821UL] *
          Accumalator_Module_Three1_Battery_Table_Based49_stateOfCharge +
          t5361->mX.mX[1109UL]) + t5361->mX.mX[1110UL]) + t5361->mX.mX[1111UL])
       + t5361->mX.mX[1112UL]) + t5361->mX.mX[1113UL]) + intrm_sf_mf_156);
  out->mFX.mX[51UL] =
    Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_v -
    ((((((((-t5361->mX.mX[202UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based50_electricalModel_xVint
          + t5361->mX.mX[203UL]) + t5361->mX.mX[204UL]) + t5361->mX.mX[205UL]) +
       t5361->mX.mX[206UL]) + t5361->mX.mX[207UL]) + zc_int82);
  out->mFX.mX[53UL] =
    Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_v -
    ((((((t5361->mX.mX[1089UL] * zc_int471 + t5361->mX.mX[1115UL]) +
         t5361->mX.mX[1116UL]) + t5361->mX.mX[1117UL]) + t5361->mX.mX[1118UL]) +
      t5361->mX.mX[1119UL]) + zc_int472);
  out->mFX.mX[55UL] =
    Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_v -
    ((((((t5361->mX.mX[202UL] * zc_int84 + t5361->mX.mX[209UL]) + t5361->mX.mX
         [210UL]) + t5361->mX.mX[211UL]) + t5361->mX.mX[212UL]) + t5361->mX.mX
      [213UL]) + intrm_sf_mf_28);
  out->mFX.mX[56UL] =
    Accumalator_Module_Three1_Battery_Table_Based51_electricalModel_v - ((((((((
    -t5361->mX.mX[1121UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based50_stateOfCharge + t5361->
    mX.mX[1123UL]) + t5361->mX.mX[1124UL]) + t5361->mX.mX[1125UL]) +
    t5361->mX.mX[1126UL]) + t5361->mX.mX[1127UL]) + intrm_sf_mf_158);
  out->mFX.mX[57UL] =
    Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_v -
    ((((((t5361->mX.mX[171UL] * zc_int87 + t5361->mX.mX[215UL]) + t5361->mX.mX
         [216UL]) + t5361->mX.mX[217UL]) + t5361->mX.mX[218UL]) + t5361->mX.mX
      [219UL]) + zc_int88);
  out->mFX.mX[58UL] =
    Accumalator_Module_Three1_Battery_Table_Based52_electricalModel_v - ((((((((
    -t5361->mX.mX[1129UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge + t5361->
    mX.mX[1132UL]) + t5361->mX.mX[1133UL]) + t5361->mX.mX[1134UL]) +
    t5361->mX.mX[1135UL]) + t5361->mX.mX[1136UL]) + zc_int478);
  out->mFX.mX[59UL] =
    Accumalator_Module_Five1_Battery_Table_Based37_electricalModel_v -
    ((((((((-t5361->mX.mX[221UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          intrm_sf_mf_3 + t5361->mX.mX[223UL]) + t5361->mX.mX[224UL]) +
        t5361->mX.mX[225UL]) + t5361->mX.mX[226UL]) + t5361->mX.mX[227UL]) +
     zc_int91);
  out->mFX.mX[60UL] =
    Accumalator_Module_Three1_Battery_Table_Based53_electricalModel_v - ((((((((
    -t5361->mX.mX[1138UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) * zc_int480
    + t5361->mX.mX[1139UL]) + t5361->mX.mX[1140UL]) + t5361->mX.mX[1141UL]) +
    t5361->mX.mX[1142UL]) + t5361->mX.mX[1143UL]) + zc_int481);
  out->mFX.mX[61UL] =
    Accumalator_Module_Five1_Battery_Table_Based31_electricalModel_v -
    ((((((t5361->mX.mX[180UL] *
          Accumalator_Module_Five1_Battery_Table_Based37_stateOfCharge +
          t5361->mX.mX[229UL]) + t5361->mX.mX[230UL]) + t5361->mX.mX[231UL]) +
       t5361->mX.mX[232UL]) + t5361->mX.mX[233UL]) + zc_int94);
  out->mFX.mX[62UL] =
    Accumalator_Module_Three1_Battery_Table_Based51_electricalModel_v -
    ((((((t5361->mX.mX[1121UL] * zc_int483 + t5361->mX.mX[1145UL]) +
         t5361->mX.mX[1146UL]) + t5361->mX.mX[1147UL]) + t5361->mX.mX[1148UL]) +
      t5361->mX.mX[1149UL]) + intrm_sf_mf_161);
  out->mFX.mX[63UL] =
    Accumalator_Module_Five1_Battery_Table_Based33_electricalModel_v -
    ((((((t5361->mX.mX[195UL] *
          Accumalator_Module_Five1_Battery_Table_Based38_electricalModel_xVint +
          t5361->mX.mX[235UL]) + t5361->mX.mX[236UL]) + t5361->mX.mX[237UL]) +
       t5361->mX.mX[238UL]) + t5361->mX.mX[239UL]) + zc_int97);
  out->mFX.mX[64UL] =
    Accumalator_Module_Three1_Battery_Table_Based52_electricalModel_v -
    ((((((t5361->mX.mX[1129UL] *
          Accumalator_Module_Three1_Battery_Table_Based54_stateOfCharge +
          t5361->mX.mX[1151UL]) + t5361->mX.mX[1152UL]) + t5361->mX.mX[1153UL])
       + t5361->mX.mX[1154UL]) + t5361->mX.mX[1155UL]) + zc_int487);
  out->mFX.mX[65UL] =
    Accumalator_Module_Five1_Battery_Table_Based4_electricalModel_v -
    ((((((((-t5361->mX.mX[241UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int99 + t5361->mX.mX[242UL]) + t5361->mX.mX[243UL]) + t5361->mX.mX
        [244UL]) + t5361->mX.mX[245UL]) + t5361->mX.mX[246UL]) +
     Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_xVint);
  out->mFX.mX[66UL] =
    Accumalator_Module_Three1_Battery_Table_Based53_electricalModel_v -
    ((((((t5361->mX.mX[1138UL] *
          Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge +
          t5361->mX.mX[1157UL]) + t5361->mX.mX[1158UL]) + t5361->mX.mX[1159UL])
       + t5361->mX.mX[1160UL]) + t5361->mX.mX[1161UL]) + zc_int490);
  out->mFX.mX[67UL] =
    Accumalator_Module_Five1_Battery_Table_Based37_electricalModel_v -
    ((((((t5361->mX.mX[221UL] * zc_int102 + t5361->mX.mX[248UL]) + t5361->mX.mX
         [249UL]) + t5361->mX.mX[250UL]) + t5361->mX.mX[251UL]) + t5361->mX.mX
      [252UL]) + zc_int103);
  out->mFX.mX[68UL] =
    Accumalator_Module_Three1_Battery_Table_Based13_electricalModel_v -
    ((((((t5361->mX.mX[830UL] *
          Accumalator_Module_Three1_Battery_Table_Based59_electricalModel_xVint
          + t5361->mX.mX[1163UL]) + t5361->mX.mX[1164UL]) + t5361->mX.mX[1165UL])
       + t5361->mX.mX[1166UL]) + t5361->mX.mX[1167UL]) + zc_int493);
  out->mFX.mX[69UL] =
    Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_v -
    ((((((((-t5361->mX.mX[254UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Five1_Battery_Table_Based40_electricalModel_xVint +
          t5361->mX.mX[257UL]) + t5361->mX.mX[258UL]) + t5361->mX.mX[259UL]) +
       t5361->mX.mX[260UL]) + t5361->mX.mX[261UL]) + zc_int106);
  out->mFX.mX[70UL] =
    Accumalator_Module_One1_Battery_Table_Based2_electricalModel_v -
    ((((((t5361->mX.mX[480UL] *
          Accumalator_Module_One1_Battery_Table_Based29_stateOfCharge +
          t5361->mX.mX[557UL]) + t5361->mX.mX[558UL]) + t5361->mX.mX[559UL]) +
       t5361->mX.mX[560UL]) + t5361->mX.mX[561UL]) + intrm_sf_mf_78);
  out->mFX.mX[71UL] =
    Accumalator_Module_Two_Battery_Table_Based41_electricalModel_v -
    ((((((t5361->mX.mX[1437UL] *
          Accumalator_Module_Two_Battery_Table_Based45_electricalModel_xVint
          + t5361->mX.mX[1475UL]) + t5361->mX.mX[1476UL]) + t5361->mX.mX[1477UL])
       + t5361->mX.mX[1478UL]) + t5361->mX.mX[1479UL]) + zc_int625);
  out->mFX.mX[72UL] =
    Accumalator_Module_One1_Battery_Table_Based30_electricalModel_v -
    ((((((((-t5361->mX.mX[563UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int237 + t5361->mX.mX[566UL]) + t5361->mX.mX[567UL]) + t5361->
        mX.mX[568UL]) + t5361->mX.mX[569UL]) + t5361->mX.mX[570UL]) +
     intrm_sf_mf_79);
  out->mFX.mX[73UL] =
    Accumalator_Module_Two_Battery_Table_Based47_electricalModel_v -
    ((((((((-t5361->mX.mX[1481UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based46_stateOfCharge +
          t5361->mX.mX[1483UL]) + t5361->mX.mX[1484UL]) + t5361->mX.mX[1485UL])
       + t5361->mX.mX[1486UL]) + t5361->mX.mX[1487UL]) + zc_int628);
  out->mFX.mX[74UL] =
    Accumalator_Module_One1_Battery_Table_Based31_electricalModel_v -
    ((((((((-t5361->mX.mX[572UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          intrm_sf_mf_8 + t5361->mX.mX[575UL]) + t5361->mX.mX[576UL]) +
        t5361->mX.mX[577UL]) + t5361->mX.mX[578UL]) + t5361->mX.mX[579UL]) +
     intrm_sf_mf_80);
  out->mFX.mX[75UL] =
    Accumalator_Module_Two_Battery_Table_Based42_electricalModel_v -
    ((((((t5361->mX.mX[1446UL] * zc_int630 + t5361->mX.mX[1489UL]) +
         t5361->mX.mX[1490UL]) + t5361->mX.mX[1491UL]) + t5361->mX.mX[1492UL]) +
      t5361->mX.mX[1493UL]) + zc_int631);
  out->mFX.mX[76UL] =
    Accumalator_Module_One1_Battery_Table_Based1_electricalModel_v -
    ((((((t5361->mX.mX[395UL] * zc_int243 + t5361->mX.mX[581UL]) + t5361->mX.mX
         [582UL]) + t5361->mX.mX[583UL]) + t5361->mX.mX[584UL]) + t5361->mX.mX
      [585UL]) + zc_int244);
  out->mFX.mX[77UL] =
    Accumalator_Module_Two_Battery_Table_Based43_electricalModel_v -
    ((((((t5361->mX.mX[1455UL] *
          Accumalator_Module_Two_Battery_Table_Based48_electricalModel_xVint
          + t5361->mX.mX[1495UL]) + t5361->mX.mX[1496UL]) + t5361->mX.mX[1497UL])
       + t5361->mX.mX[1498UL]) + t5361->mX.mX[1499UL]) + intrm_sf_mf_211);
  out->mFX.mX[78UL] =
    Accumalator_Module_One1_Battery_Table_Based33_electricalModel_v -
    ((((((((-t5361->mX.mX[587UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based32_stateOfCharge +
          t5361->mX.mX[588UL]) + t5361->mX.mX[589UL]) + t5361->mX.mX[590UL]) +
       t5361->mX.mX[591UL]) + t5361->mX.mX[592UL]) + zc_int247);
  out->mFX.mX[79UL] =
    Accumalator_Module_Two_Battery_Table_Based12_electricalModel_v -
    ((((((t5361->mX.mX[1214UL] *
          Accumalator_Module_Two_Battery_Table_Based49_electricalModel_xVint
          + t5361->mX.mX[1501UL]) + t5361->mX.mX[1502UL]) + t5361->mX.mX[1503UL])
       + t5361->mX.mX[1504UL]) + t5361->mX.mX[1505UL]) + zc_int637);
  out->mFX.mX[80UL] =
    Accumalator_Module_One1_Battery_Table_Based34_electricalModel_v -
    ((((((((-t5361->mX.mX[594UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based33_electricalModel_xVint
          + t5361->mX.mX[595UL]) + t5361->mX.mX[596UL]) + t5361->mX.mX[597UL]) +
       t5361->mX.mX[598UL]) + t5361->mX.mX[599UL]) +
     Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge);
  out->mFX.mX[81UL] =
    Accumalator_Module_Two_Battery_Table_Based47_electricalModel_v -
    ((((((t5361->mX.mX[1481UL] * zc_int639 + t5361->mX.mX[1507UL]) +
         t5361->mX.mX[1508UL]) + t5361->mX.mX[1509UL]) + t5361->mX.mX[1510UL]) +
      t5361->mX.mX[1511UL]) +
     Accumalator_Module_Five1_Battery_Table_Based29_electricalModel_xVint);
  out->mFX.mX[82UL] =
    Accumalator_Module_One1_Battery_Table_Based34_electricalModel_v -
    ((((((t5361->mX.mX[594UL] *
          Accumalator_Module_One1_Battery_Table_Based34_electricalModel_xVint
          + t5361->mX.mX[601UL]) + t5361->mX.mX[602UL]) + t5361->mX.mX[603UL]) +
       t5361->mX.mX[604UL]) + t5361->mX.mX[605UL]) + intrm_sf_mf_84);
  out->mFX.mX[83UL] =
    Accumalator_Module_Two_Battery_Table_Based51_electricalModel_v -
    ((((((((-t5361->mX.mX[1513UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int642 + t5361->mX.mX[1514UL]) + t5361->mX.mX[1515UL]) +
        t5361->mX.mX[1516UL]) + t5361->mX.mX[1517UL]) + t5361->mX.mX[1518UL]) +
     zc_int643);
  out->mFX.mX[84UL] =
    Accumalator_Module_One1_Battery_Table_Based30_electricalModel_v -
    ((((((t5361->mX.mX[563UL] *
          Accumalator_Module_One1_Battery_Table_Based35_electricalModel_xVint
          + t5361->mX.mX[607UL]) + t5361->mX.mX[608UL]) + t5361->mX.mX[609UL]) +
       t5361->mX.mX[610UL]) + t5361->mX.mX[611UL]) + intrm_sf_mf_85);
  out->mFX.mX[85UL] =
    Accumalator_Module_Two_Battery_Table_Based52_electricalModel_v -
    ((((((((-t5361->mX.mX[1520UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge +
          t5361->mX.mX[1522UL]) + t5361->mX.mX[1523UL]) + t5361->mX.mX[1524UL])
       + t5361->mX.mX[1525UL]) + t5361->mX.mX[1526UL]) + intrm_sf_mf_215);
  out->mFX.mX[86UL] =
    Accumalator_Module_One1_Battery_Table_Based37_electricalModel_v -
    ((((((((-t5361->mX.mX[613UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int258 + t5361->mX.mX[615UL]) + t5361->mX.mX[616UL]) + t5361->
        mX.mX[617UL]) + t5361->mX.mX[618UL]) + t5361->mX.mX[619UL]) +
     intrm_sf_mf_86);
  out->mFX.mX[87UL] =
    Accumalator_Module_Two_Battery_Table_Based53_electricalModel_v -
    ((((((((-t5361->mX.mX[1528UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based52_electricalModel_xVint
          + t5361->mX.mX[1529UL]) + t5361->mX.mX[1530UL]) + t5361->mX.mX[1531UL])
       + t5361->mX.mX[1532UL]) + t5361->mX.mX[1533UL]) + zc_int649);
  out->mFX.mX[88UL] =
    Accumalator_Module_One1_Battery_Table_Based31_electricalModel_v -
    ((((((t5361->mX.mX[572UL] *
          Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge +
          t5361->mX.mX[621UL]) + t5361->mX.mX[622UL]) + t5361->mX.mX[623UL]) +
       t5361->mX.mX[624UL]) + t5361->mX.mX[625UL]) + zc_int262);
  out->mFX.mX[89UL] =
    Accumalator_Module_Two_Battery_Table_Based51_electricalModel_v -
    ((((((t5361->mX.mX[1513UL] *
          Accumalator_Module_Two_Battery_Table_Based53_electricalModel_xVint
          + t5361->mX.mX[1535UL]) + t5361->mX.mX[1536UL]) + t5361->mX.mX[1537UL])
       + t5361->mX.mX[1538UL]) + t5361->mX.mX[1539UL]) + zc_int652);
  out->mFX.mX[90UL] =
    Accumalator_Module_One1_Battery_Table_Based33_electricalModel_v -
    ((((((t5361->mX.mX[587UL] *
          Accumalator_Module_One1_Battery_Table_Based38_electricalModel_xVint
          + t5361->mX.mX[627UL]) + t5361->mX.mX[628UL]) + t5361->mX.mX[629UL]) +
       t5361->mX.mX[630UL]) + t5361->mX.mX[631UL]) + zc_int265);
  out->mFX.mX[91UL] =
    Accumalator_Module_Two_Battery_Table_Based52_electricalModel_v -
    ((((((t5361->mX.mX[1520UL] *
          Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge +
          t5361->mX.mX[1541UL]) + t5361->mX.mX[1542UL]) + t5361->mX.mX[1543UL])
       + t5361->mX.mX[1544UL]) + t5361->mX.mX[1545UL]) + zc_int655);
  out->mFX.mX[92UL] =
    Accumalator_Module_One1_Battery_Table_Based4_electricalModel_v -
    ((((((((-t5361->mX.mX[633UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int267 + t5361->mX.mX[634UL]) + t5361->mX.mX[635UL]) + t5361->
        mX.mX[636UL]) + t5361->mX.mX[637UL]) + t5361->mX.mX[638UL]) +
     intrm_sf_mf_89);
  out->mFX.mX[93UL] =
    Accumalator_Module_Two_Battery_Table_Based53_electricalModel_v -
    ((((((t5361->mX.mX[1528UL] *
          Accumalator_Module_Two_Battery_Table_Based58_stateOfCharge +
          t5361->mX.mX[1547UL]) + t5361->mX.mX[1548UL]) + t5361->mX.mX[1549UL])
       + t5361->mX.mX[1550UL]) + t5361->mX.mX[1551UL]) + intrm_sf_mf_219);
  out->mFX.mX[94UL] =
    Accumalator_Module_One1_Battery_Table_Based37_electricalModel_v -
    ((((((t5361->mX.mX[613UL] * zc_int270 + t5361->mX.mX[640UL]) + t5361->mX.mX
         [641UL]) + t5361->mX.mX[642UL]) + t5361->mX.mX[643UL]) + t5361->mX.mX
      [644UL]) + zc_int271);
  out->mFX.mX[95UL] =
    Accumalator_Module_Two_Battery_Table_Based13_electricalModel_v -
    ((((((t5361->mX.mX[1223UL] * zc_int660 + t5361->mX.mX[1553UL]) +
         t5361->mX.mX[1554UL]) + t5361->mX.mX[1555UL]) + t5361->mX.mX[1556UL]) +
      t5361->mX.mX[1557UL]) + zc_int661);
  out->mFX.mX[96UL] =
    Accumalator_Module_One1_Battery_Table_Based41_electricalModel_v -
    ((((((((-t5361->mX.mX[646UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int273 + t5361->mX.mX[649UL]) + t5361->mX.mX[650UL]) + t5361->
        mX.mX[651UL]) + t5361->mX.mX[652UL]) + t5361->mX.mX[653UL]) + zc_int274);
  out->mFX.mX[97UL] =
    Accumalator_Module_Two_Battery_Table_Based4_electricalModel_v -
    ((((((t5361->mX.mX[1424UL] *
          Accumalator_Module_Two_Battery_Table_Based6_stateOfCharge +
          t5361->mX.mX[1559UL]) + t5361->mX.mX[1560UL]) + t5361->mX.mX[1561UL])
       + t5361->mX.mX[1562UL]) + t5361->mX.mX[1563UL]) + intrm_sf_mf_221);
  out->mFX.mX[98UL] =
    Accumalator_Module_One1_Battery_Table_Based42_electricalModel_v -
    ((((((((-t5361->mX.mX[655UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int276 + t5361->mX.mX[658UL]) + t5361->mX.mX[659UL]) + t5361->
        mX.mX[660UL]) + t5361->mX.mX[661UL]) + t5361->mX.mX[662UL]) +
     intrm_sf_mf_92);
  out->mFX.mX[99UL] =
    Accumalator_Module_Two_Battery_Table_Based15_electricalModel_v -
    ((((((t5361->mX.mX[1237UL] * zc_int666 + t5361->mX.mX[1565UL]) +
         t5361->mX.mX[1566UL]) + t5361->mX.mX[1567UL]) + t5361->mX.mX[1568UL]) +
      t5361->mX.mX[1569UL]) + intrm_sf_mf_222);
  out->mFX.mX[100UL] =
    Accumalator_Module_One1_Battery_Table_Based43_electricalModel_v -
    ((((((((-t5361->mX.mX[664UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int279 + t5361->mX.mX[665UL]) + t5361->mX.mX[666UL]) + t5361->
        mX.mX[667UL]) + t5361->mX.mX[668UL]) + t5361->mX.mX[669UL]) +
     Accumalator_Module_Five1_Battery_Table_Based18_stateOfCharge);
  out->mFX.mX[101UL] =
    Accumalator_Module_Two_Battery_Table_Based17_electricalModel_v -
    ((((((t5361->mX.mX[1253UL] * zc_int669 + t5361->mX.mX[1571UL]) +
         t5361->mX.mX[1572UL]) + t5361->mX.mX[1573UL]) + t5361->mX.mX[1574UL]) +
      t5361->mX.mX[1575UL]) +
     Accumalator_Module_Five1_Battery_Table_Based3_electricalModel_xVint);
  out->mFX.mX[102UL] =
    Accumalator_Module_One1_Battery_Table_Based44_electricalModel_v -
    ((((((((-t5361->mX.mX[671UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int282 + t5361->mX.mX[672UL]) + t5361->mX.mX[673UL]) + t5361->
        mX.mX[674UL]) + t5361->mX.mX[675UL]) + t5361->mX.mX[676UL]) + zc_int283);
  out->mFX.mX[103UL] =
    Accumalator_Module_four_Battery_Table_Based1_electricalModel_v -
    ((((((((-t5361->mX.mX[1577UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based9_stateOfCharge +
          t5361->mX.mX[1580UL]) + t5361->mX.mX[1581UL]) + t5361->mX.mX[1582UL])
       + t5361->mX.mX[1583UL]) + t5361->mX.mX[1584UL]) + intrm_sf_mf_224);
  out->mFX.mX[104UL] =
    Accumalator_Module_One1_Battery_Table_Based44_electricalModel_v -
    ((((((t5361->mX.mX[671UL] *
          Accumalator_Module_One1_Battery_Table_Based44_electricalModel_xVint
          + t5361->mX.mX[678UL]) + t5361->mX.mX[679UL]) + t5361->mX.mX[680UL]) +
       t5361->mX.mX[681UL]) + t5361->mX.mX[682UL]) + intrm_sf_mf_95);
  out->mFX.mX[105UL] =
    Accumalator_Module_four_Battery_Table_Based10_electricalModel_v -
    ((((((((-t5361->mX.mX[1586UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based1_stateOfCharge +
          t5361->mX.mX[1589UL]) + t5361->mX.mX[1590UL]) + t5361->mX.mX[1591UL])
       + t5361->mX.mX[1592UL]) + t5361->mX.mX[1593UL]) + intrm_sf_mf_225);
  out->mFX.mX[106UL] =
    Accumalator_Module_One1_Battery_Table_Based41_electricalModel_v -
    ((((((t5361->mX.mX[646UL] * zc_int288 + t5361->mX.mX[684UL]) + t5361->mX.mX
         [685UL]) + t5361->mX.mX[686UL]) + t5361->mX.mX[687UL]) + t5361->mX.mX
      [688UL]) + zc_int289);
  out->mFX.mX[107UL] =
    Accumalator_Module_four_Battery_Table_Based11_electricalModel_v -
    ((((((((-t5361->mX.mX[1595UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int678 + t5361->mX.mX[1598UL]) + t5361->mX.mX[1599UL]) +
        t5361->mX.mX[1600UL]) + t5361->mX.mX[1601UL]) + t5361->mX.mX[1602UL]) +
     intrm_sf_mf_226);
  out->mFX.mX[108UL] =
    Accumalator_Module_One1_Battery_Table_Based47_electricalModel_v -
    ((((((((-t5361->mX.mX[690UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based46_stateOfCharge +
          t5361->mX.mX[692UL]) + t5361->mX.mX[693UL]) + t5361->mX.mX[694UL]) +
       t5361->mX.mX[695UL]) + t5361->mX.mX[696UL]) + zc_int292);
  out->mFX.mX[109UL] =
    Accumalator_Module_four_Battery_Table_Based12_electricalModel_v -
    ((((((((-t5361->mX.mX[1604UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based11_stateOfCharge +
          t5361->mX.mX[1607UL]) + t5361->mX.mX[1608UL]) + t5361->mX.mX[1609UL])
       + t5361->mX.mX[1610UL]) + t5361->mX.mX[1611UL]) + zc_int682);
  out->mFX.mX[110UL] =
    Accumalator_Module_One1_Battery_Table_Based42_electricalModel_v -
    ((((((t5361->mX.mX[655UL] *
          Accumalator_Module_One1_Battery_Table_Based47_stateOfCharge +
          t5361->mX.mX[698UL]) + t5361->mX.mX[699UL]) + t5361->mX.mX[700UL]) +
       t5361->mX.mX[701UL]) + t5361->mX.mX[702UL]) + intrm_sf_mf_98);
  out->mFX.mX[111UL] =
    Accumalator_Module_four_Battery_Table_Based13_electricalModel_v -
    ((((((((-t5361->mX.mX[1613UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int684 + t5361->mX.mX[1615UL]) + t5361->mX.mX[1616UL]) +
        t5361->mX.mX[1617UL]) + t5361->mX.mX[1618UL]) + t5361->mX.mX[1619UL]) +
     intrm_sf_mf_228);
  out->mFX.mX[112UL] =
    Accumalator_Module_One1_Battery_Table_Based43_electricalModel_v -
    ((((((t5361->mX.mX[664UL] *
          Accumalator_Module_One1_Battery_Table_Based48_electricalModel_xVint
          + t5361->mX.mX[704UL]) + t5361->mX.mX[705UL]) + t5361->mX.mX[706UL]) +
       t5361->mX.mX[707UL]) + t5361->mX.mX[708UL]) + zc_int298);
  out->mFX.mX[113UL] =
    Accumalator_Module_four_Battery_Table_Based34_electricalModel_v -
    ((((((t5361->mX.mX[1776UL] * zc_int756 + t5361->mX.mX[1783UL]) +
         t5361->mX.mX[1784UL]) + t5361->mX.mX[1785UL]) + t5361->mX.mX[1786UL]) +
      t5361->mX.mX[1787UL]) + intrm_sf_mf_252);
  out->mFX.mX[114UL] =
    Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_v -
    ((((((((-t5361->mX.mX[879UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int369 + t5361->mX.mX[880UL]) + t5361->mX.mX[881UL]) + t5361->
        mX.mX[882UL]) + t5361->mX.mX[883UL]) + t5361->mX.mX[884UL]) +
     Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_xVint);
  out->mFX.mX[115UL] =
    Accumalator_Module_four_Battery_Table_Based30_electricalModel_v -
    ((((((t5361->mX.mX[1745UL] *
          Accumalator_Module_four_Battery_Table_Based35_stateOfCharge +
          t5361->mX.mX[1789UL]) + t5361->mX.mX[1790UL]) + t5361->mX.mX[1791UL])
       + t5361->mX.mX[1792UL]) + t5361->mX.mX[1793UL]) +
     Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge);
  out->mFX.mX[116UL] =
    Accumalator_Module_Three1_Battery_Table_Based20_electricalModel_v - ((((((((
    -t5361->mX.mX[886UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_xVint
    + t5361->mX.mX[889UL]) + t5361->mX.mX[890UL]) + t5361->mX.mX[891UL]) +
    t5361->mX.mX[892UL]) + t5361->mX.mX[893UL]) + zc_int373);
  out->mFX.mX[117UL] =
    Accumalator_Module_four_Battery_Table_Based37_electricalModel_v -
    ((((((((-t5361->mX.mX[1795UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based36_electricalModel_xVint
          + t5361->mX.mX[1797UL]) + t5361->mX.mX[1798UL]) + t5361->mX.mX[1799UL])
       + t5361->mX.mX[1800UL]) + t5361->mX.mX[1801UL]) + intrm_sf_mf_254);
  out->mFX.mX[118UL] =
    Accumalator_Module_Three1_Battery_Table_Based21_electricalModel_v - ((((((((
    -t5361->mX.mX[895UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) * zc_int375 +
    t5361->mX.mX[898UL]) + t5361->mX.mX[899UL]) + t5361->mX.mX[900UL]) +
    t5361->mX.mX[901UL]) + t5361->mX.mX[902UL]) + zc_int376);
  out->mFX.mX[119UL] =
    Accumalator_Module_four_Battery_Table_Based31_electricalModel_v -
    ((((((t5361->mX.mX[1754UL] * zc_int765 + t5361->mX.mX[1803UL]) +
         t5361->mX.mX[1804UL]) + t5361->mX.mX[1805UL]) + t5361->mX.mX[1806UL]) +
      t5361->mX.mX[1807UL]) + intrm_sf_mf_255);
  out->mFX.mX[120UL] =
    Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_v - ((((((((
    -t5361->mX.mX[904UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) * zc_int378 +
    t5361->mX.mX[905UL]) + t5361->mX.mX[906UL]) + t5361->mX.mX[907UL]) +
    t5361->mX.mX[908UL]) + t5361->mX.mX[909UL]) + intrm_sf_mf_126);
  out->mFX.mX[121UL] =
    Accumalator_Module_four_Battery_Table_Based33_electricalModel_v -
    ((((((t5361->mX.mX[1769UL] * zc_int768 + t5361->mX.mX[1809UL]) +
         t5361->mX.mX[1810UL]) + t5361->mX.mX[1811UL]) + t5361->mX.mX[1812UL]) +
      t5361->mX.mX[1813UL]) + zc_int769);
  out->mFX.mX[122UL] =
    Accumalator_Module_Three1_Battery_Table_Based23_electricalModel_v - ((((((((
    -t5361->mX.mX[911UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_xVint
    + t5361->mX.mX[912UL]) + t5361->mX.mX[913UL]) + t5361->mX.mX[914UL]) +
    t5361->mX.mX[915UL]) + t5361->mX.mX[916UL]) + intrm_sf_mf_127);
  out->mFX.mX[123UL] =
    Accumalator_Module_four_Battery_Table_Based4_electricalModel_v -
    ((((((((-t5361->mX.mX[1815UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int771 + t5361->mX.mX[1816UL]) + t5361->mX.mX[1817UL]) +
        t5361->mX.mX[1818UL]) + t5361->mX.mX[1819UL]) + t5361->mX.mX[1820UL]) +
     zc_int772);
  out->mFX.mX[124UL] =
    Accumalator_Module_Three1_Battery_Table_Based23_electricalModel_v -
    ((((((t5361->mX.mX[911UL] *
          Accumalator_Module_Three1_Battery_Table_Based23_stateOfCharge +
          t5361->mX.mX[918UL]) + t5361->mX.mX[919UL]) + t5361->mX.mX[920UL]) +
       t5361->mX.mX[921UL]) + t5361->mX.mX[922UL]) + zc_int385);
  out->mFX.mX[125UL] =
    Accumalator_Module_four_Battery_Table_Based37_electricalModel_v -
    ((((((t5361->mX.mX[1795UL] * zc_int774 + t5361->mX.mX[1822UL]) +
         t5361->mX.mX[1823UL]) + t5361->mX.mX[1824UL]) + t5361->mX.mX[1825UL]) +
      t5361->mX.mX[1826UL]) + intrm_sf_mf_258);
  out->mFX.mX[126UL] =
    Accumalator_Module_Three1_Battery_Table_Based20_electricalModel_v -
    ((((((t5361->mX.mX[886UL] *
          Accumalator_Module_Three1_Battery_Table_Based24_electricalModel_xVint
          + t5361->mX.mX[924UL]) + t5361->mX.mX[925UL]) + t5361->mX.mX[926UL]) +
       t5361->mX.mX[927UL]) + t5361->mX.mX[928UL]) + zc_int388);
  out->mFX.mX[127UL] =
    Accumalator_Module_four_Battery_Table_Based41_electricalModel_v -
    ((((((((-t5361->mX.mX[1828UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int777 + t5361->mX.mX[1831UL]) + t5361->mX.mX[1832UL]) +
        t5361->mX.mX[1833UL]) + t5361->mX.mX[1834UL]) + t5361->mX.mX[1835UL]) +
     zc_int778);
  out->mFX.mX[128UL] =
    Accumalator_Module_Five1_Battery_Table_Based1_electricalModel_v -
    ((((((((-t5361->mX.mX[1UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int0 + t5361->mX.mX[6UL]) + t5361->mX.mX[7UL]) + t5361->mX.mX[8UL])
       + t5361->mX.mX[9UL]) + t5361->mX.mX[10UL]) + zc_int1);
  out->mFX.mX[129UL] =
    Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_v - ((((((((
    -t5361->mX.mX[930UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    intrm_sf_mf_13 + t5361->mX.mX[932UL]) + t5361->mX.mX[933UL]) + t5361->mX.mX
    [934UL]) + t5361->mX.mX[935UL]) + t5361->mX.mX[936UL]) + intrm_sf_mf_130);
  out->mFX.mX[130UL] =
    Accumalator_Module_four_Battery_Table_Based42_electricalModel_v -
    ((((((((-t5361->mX.mX[1837UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int780 + t5361->mX.mX[1840UL]) + t5361->mX.mX[1841UL]) +
        t5361->mX.mX[1842UL]) + t5361->mX.mX[1843UL]) + t5361->mX.mX[1844UL]) +
     intrm_sf_mf_260);
  out->mFX.mX[131UL] =
    Accumalator_Module_Five1_Battery_Table_Based10_electricalModel_v -
    ((((((((-t5361->mX.mX[12UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int3 + t5361->mX.mX[15UL]) + t5361->mX.mX[16UL]) + t5361->mX.mX
        [17UL]) + t5361->mX.mX[18UL]) + t5361->mX.mX[19UL]) + intrm_sf_mf_133);
  out->mFX.mX[132UL] =
    Accumalator_Module_Three1_Battery_Table_Based21_electricalModel_v -
    ((((((t5361->mX.mX[895UL] *
          Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_xVint
          + t5361->mX.mX[938UL]) + t5361->mX.mX[939UL]) + t5361->mX.mX[940UL]) +
       t5361->mX.mX[941UL]) + t5361->mX.mX[942UL]) + zc_int394);
  out->mFX.mX[133UL] =
    Accumalator_Module_four_Battery_Table_Based43_electricalModel_v -
    ((((((((-t5361->mX.mX[1846UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int783 + t5361->mX.mX[1847UL]) + t5361->mX.mX[1848UL]) +
        t5361->mX.mX[1849UL]) + t5361->mX.mX[1850UL]) + t5361->mX.mX[1851UL]) +
     zc_int784);
  out->mFX.mX[134UL] =
    Accumalator_Module_Five1_Battery_Table_Based11_electricalModel_v -
    ((((((((-t5361->mX.mX[21UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based38_electricalModel_xVint
          + t5361->mX.mX[24UL]) + t5361->mX.mX[25UL]) + t5361->mX.mX[26UL]) +
       t5361->mX.mX[27UL]) + t5361->mX.mX[28UL]) + zc_int7);
  out->mFX.mX[135UL] =
    Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_v -
    ((((((t5361->mX.mX[904UL] * zc_int396 + t5361->mX.mX[944UL]) + t5361->mX.mX
         [945UL]) + t5361->mX.mX[946UL]) + t5361->mX.mX[947UL]) + t5361->mX.mX
      [948UL]) + zc_int397);
  out->mFX.mX[136UL] =
    Accumalator_Module_four_Battery_Table_Based44_electricalModel_v -
    ((((((((-t5361->mX.mX[1853UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int786 + t5361->mX.mX[1854UL]) + t5361->mX.mX[1855UL]) +
        t5361->mX.mX[1856UL]) + t5361->mX.mX[1857UL]) + t5361->mX.mX[1858UL]) +
     zc_int787);
  out->mFX.mX[137UL] =
    Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_v -
    ((((((((-t5361->mX.mX[30UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int9 + t5361->mX.mX[33UL]) + t5361->mX.mX[34UL]) + t5361->mX.mX
        [35UL]) + t5361->mX.mX[36UL]) + t5361->mX.mX[37UL]) +
     Accumalator_Module_Five1_Battery_Table_Based1_stateOfCharge);
  out->mFX.mX[138UL] =
    Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_v -
    ((((((t5361->mX.mX[930UL] *
          Accumalator_Module_Three1_Battery_Table_Based28_stateOfCharge +
          t5361->mX.mX[950UL]) + t5361->mX.mX[951UL]) + t5361->mX.mX[952UL]) +
       t5361->mX.mX[953UL]) + t5361->mX.mX[954UL]) + zc_int400);
  out->mFX.mX[139UL] =
    Accumalator_Module_four_Battery_Table_Based44_electricalModel_v -
    ((((((t5361->mX.mX[1853UL] * zc_int789 + t5361->mX.mX[1860UL]) +
         t5361->mX.mX[1861UL]) + t5361->mX.mX[1862UL]) + t5361->mX.mX[1863UL]) +
      t5361->mX.mX[1864UL]) +
     Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge);
  out->mFX.mX[140UL] =
    Accumalator_Module_Five1_Battery_Table_Based13_electricalModel_v -
    ((((((((-t5361->mX.mX[39UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Five1_Battery_Table_Based45_electricalModel_xVint +
          t5361->mX.mX[41UL]) + t5361->mX.mX[42UL]) + t5361->mX.mX[43UL]) +
       t5361->mX.mX[44UL]) + t5361->mX.mX[45UL]) + intrm_sf_mf_43);
  out->mFX.mX[141UL] =
    Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_v -
    ((((((t5361->mX.mX[879UL] *
          Accumalator_Module_Three1_Battery_Table_Based29_electricalModel_xVint
          + t5361->mX.mX[956UL]) + t5361->mX.mX[957UL]) + t5361->mX.mX[958UL]) +
       t5361->mX.mX[959UL]) + t5361->mX.mX[960UL]) + zc_int403);
  out->mFX.mX[142UL] =
    Accumalator_Module_four_Battery_Table_Based41_electricalModel_v -
    ((((((t5361->mX.mX[1828UL] *
          Accumalator_Module_four_Battery_Table_Based45_electricalModel_xVint
          + t5361->mX.mX[1866UL]) + t5361->mX.mX[1867UL]) + t5361->mX.mX[1868UL])
       + t5361->mX.mX[1869UL]) + t5361->mX.mX[1870UL]) + intrm_sf_mf_264);
  out->mFX.mX[143UL] =
    Accumalator_Module_Five1_Battery_Table_Based11_electricalModel_v -
    ((((((t5361->mX.mX[21UL] *
          Accumalator_Module_Five1_Battery_Table_Based54_electricalModel_xVint +
          t5361->mX.mX[47UL]) + t5361->mX.mX[48UL]) + t5361->mX.mX[49UL]) +
       t5361->mX.mX[50UL]) + t5361->mX.mX[51UL]) + intrm_sf_mf_53);
  out->mFX.mX[144UL] =
    Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_v - ((((((((
    -t5361->mX.mX[962UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge + t5361->mX.mX
    [965UL]) + t5361->mX.mX[966UL]) + t5361->mX.mX[967UL]) + t5361->mX.mX[968UL])
    + t5361->mX.mX[969UL]) + zc_int406);
  out->mFX.mX[145UL] =
    Accumalator_Module_four_Battery_Table_Based47_electricalModel_v -
    ((((((((-t5361->mX.mX[1872UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based46_electricalModel_xVint
          + t5361->mX.mX[1874UL]) + t5361->mX.mX[1875UL]) + t5361->mX.mX[1876UL])
       + t5361->mX.mX[1877UL]) + t5361->mX.mX[1878UL]) + intrm_sf_mf_265);
  out->mFX.mX[146UL] =
    Accumalator_Module_Five1_Battery_Table_Based15_electricalModel_v -
    ((((((((-t5361->mX.mX[53UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int18 + t5361->mX.mX[55UL]) + t5361->mX.mX[56UL]) + t5361->mX.mX
        [57UL]) + t5361->mX.mX[58UL]) + t5361->mX.mX[59UL]) + intrm_sf_mf_63);
  out->mFX.mX[147UL] =
    Accumalator_Module_Three1_Battery_Table_Based31_electricalModel_v - ((((((((
    -t5361->mX.mX[971UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_xVint
    + t5361->mX.mX[974UL]) + t5361->mX.mX[975UL]) + t5361->mX.mX[976UL]) +
    t5361->mX.mX[977UL]) + t5361->mX.mX[978UL]) + intrm_sf_mf_136);
  out->mFX.mX[148UL] =
    Accumalator_Module_four_Battery_Table_Based42_electricalModel_v -
    ((((((t5361->mX.mX[1837UL] *
          Accumalator_Module_four_Battery_Table_Based47_electricalModel_xVint
          + t5361->mX.mX[1880UL]) + t5361->mX.mX[1881UL]) + t5361->mX.mX[1882UL])
       + t5361->mX.mX[1883UL]) + t5361->mX.mX[1884UL]) + intrm_sf_mf_266);
  out->mFX.mX[149UL] =
    Accumalator_Module_Five1_Battery_Table_Based16_electricalModel_v -
    ((((((((-t5361->mX.mX[61UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int21 + t5361->mX.mX[63UL]) + t5361->mX.mX[64UL]) + t5361->mX.mX
        [65UL]) + t5361->mX.mX[66UL]) + t5361->mX.mX[67UL]) + intrm_sf_mf_73);
  out->mFX.mX[150UL] =
    Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_v -
    ((((((t5361->mX.mX[794UL] *
          Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge +
          t5361->mX.mX[980UL]) + t5361->mX.mX[981UL]) + t5361->mX.mX[982UL]) +
       t5361->mX.mX[983UL]) + t5361->mX.mX[984UL]) + intrm_sf_mf_137);
  out->mFX.mX[151UL] =
    Accumalator_Module_four_Battery_Table_Based43_electricalModel_v -
    ((((((t5361->mX.mX[1846UL] *
          Accumalator_Module_four_Battery_Table_Based48_electricalModel_xVint
          + t5361->mX.mX[1886UL]) + t5361->mX.mX[1887UL]) + t5361->mX.mX[1888UL])
       + t5361->mX.mX[1889UL]) + t5361->mX.mX[1890UL]) + intrm_sf_mf_267);
  out->mFX.mX[152UL] =
    Accumalator_Module_Five1_Battery_Table_Based17_electricalModel_v -
    ((((((((-t5361->mX.mX[69UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based30_electricalModel_xVint
          + t5361->mX.mX[70UL]) + t5361->mX.mX[71UL]) + t5361->mX.mX[72UL]) +
       t5361->mX.mX[73UL]) + t5361->mX.mX[74UL]) + zc_int25);
  out->mFX.mX[153UL] =
    Accumalator_Module_Three1_Battery_Table_Based33_electricalModel_v - ((((((((
    -t5361->mX.mX[986UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) * zc_int414 +
    t5361->mX.mX[987UL]) + t5361->mX.mX[988UL]) + t5361->mX.mX[989UL]) +
    t5361->mX.mX[990UL]) + t5361->mX.mX[991UL]) + intrm_sf_mf_138);
  out->mFX.mX[154UL] =
    Accumalator_Module_four_Battery_Table_Based12_electricalModel_v -
    ((((((t5361->mX.mX[1604UL] *
          Accumalator_Module_four_Battery_Table_Based49_stateOfCharge +
          t5361->mX.mX[1892UL]) + t5361->mX.mX[1893UL]) + t5361->mX.mX[1894UL])
       + t5361->mX.mX[1895UL]) + t5361->mX.mX[1896UL]) + intrm_sf_mf_268);
  out->mFX.mX[155UL] =
    Accumalator_Module_Five1_Battery_Table_Based10_electricalModel_v -
    ((((((t5361->mX.mX[12UL] *
          Accumalator_Module_One1_Battery_Table_Based4_electricalModel_xVint
          + t5361->mX.mX[76UL]) + t5361->mX.mX[77UL]) + t5361->mX.mX[78UL]) +
       t5361->mX.mX[79UL]) + t5361->mX.mX[80UL]) + zc_int28);
  out->mFX.mX[156UL] =
    Accumalator_Module_Three1_Battery_Table_Based34_electricalModel_v - ((((((((
    -t5361->mX.mX[993UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge + t5361->
    mX.mX[994UL]) + t5361->mX.mX[995UL]) + t5361->mX.mX[996UL]) + t5361->mX.mX
    [997UL]) + t5361->mX.mX[998UL]) + intrm_sf_mf_139);
  out->mFX.mX[157UL] =
    Accumalator_Module_four_Battery_Table_Based47_electricalModel_v -
    ((((((t5361->mX.mX[1872UL] *
          Accumalator_Module_four_Battery_Table_Based5_stateOfCharge +
          t5361->mX.mX[1898UL]) + t5361->mX.mX[1899UL]) + t5361->mX.mX[1900UL])
       + t5361->mX.mX[1901UL]) + t5361->mX.mX[1902UL]) + zc_int808);
  out->mFX.mX[158UL] =
    Accumalator_Module_Five1_Battery_Table_Based16_electricalModel_v -
    ((((((t5361->mX.mX[61UL] * zc_int30 + t5361->mX.mX[82UL]) + t5361->mX.mX
         [83UL]) + t5361->mX.mX[84UL]) + t5361->mX.mX[85UL]) + t5361->mX.mX[86UL])
     + intrm_sf_mf_103);
  out->mFX.mX[159UL] =
    Accumalator_Module_Three1_Battery_Table_Based34_electricalModel_v -
    ((((((t5361->mX.mX[993UL] * intrm_sf_mf_14 + t5361->mX.mX[1000UL]) +
         t5361->mX.mX[1001UL]) + t5361->mX.mX[1002UL]) + t5361->mX.mX[1003UL]) +
      t5361->mX.mX[1004UL]) + intrm_sf_mf_140);
  out->mFX.mX[160UL] =
    Accumalator_Module_four_Battery_Table_Based51_electricalModel_v -
    ((((((((-t5361->mX.mX[1904UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int810 + t5361->mX.mX[1905UL]) + t5361->mX.mX[1906UL]) +
        t5361->mX.mX[1907UL]) + t5361->mX.mX[1908UL]) + t5361->mX.mX[1909UL]) +
     zc_int811);
  out->mFX.mX[161UL] =
    Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_v -
    ((((((((-t5361->mX.mX[88UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based7_electricalModel_xVint
          + t5361->mX.mX[89UL]) + t5361->mX.mX[90UL]) + t5361->mX.mX[91UL]) +
       t5361->mX.mX[92UL]) + t5361->mX.mX[93UL]) + intrm_sf_mf_113);
  out->mFX.mX[162UL] =
    Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_v -
    ((((((t5361->mX.mX[962UL] *
          Accumalator_Module_Three1_Battery_Table_Based35_electricalModel_xVint
          + t5361->mX.mX[1006UL]) + t5361->mX.mX[1007UL]) + t5361->mX.mX[1008UL])
       + t5361->mX.mX[1009UL]) + t5361->mX.mX[1010UL]) + zc_int424);
  out->mFX.mX[163UL] =
    Accumalator_Module_four_Battery_Table_Based52_electricalModel_v -
    ((((((((-t5361->mX.mX[1911UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based51_electricalModel_xVint
          + t5361->mX.mX[1913UL]) + t5361->mX.mX[1914UL]) + t5361->mX.mX[1915UL])
       + t5361->mX.mX[1916UL]) + t5361->mX.mX[1917UL]) + zc_int814);
  out->mFX.mX[164UL] =
    Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_v -
    ((((((((-t5361->mX.mX[95UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_xVint
          + t5361->mX.mX[98UL]) + t5361->mX.mX[99UL]) + t5361->mX.mX[100UL]) +
       t5361->mX.mX[101UL]) + t5361->mX.mX[102UL]) + zc_int37);
  out->mFX.mX[165UL] =
    Accumalator_Module_Three1_Battery_Table_Based37_electricalModel_v - ((((((((
    -t5361->mX.mX[1012UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) * zc_int426
    + t5361->mX.mX[1014UL]) + t5361->mX.mX[1015UL]) + t5361->mX.mX[1016UL]) +
    t5361->mX.mX[1017UL]) + t5361->mX.mX[1018UL]) + intrm_sf_mf_142);
  out->mFX.mX[166UL] =
    Accumalator_Module_four_Battery_Table_Based53_electricalModel_v -
    ((((((((-t5361->mX.mX[1919UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int816 + t5361->mX.mX[1920UL]) + t5361->mX.mX[1921UL]) +
        t5361->mX.mX[1922UL]) + t5361->mX.mX[1923UL]) + t5361->mX.mX[1924UL]) +
     zc_int817);
  out->mFX.mX[167UL] =
    Accumalator_Module_Five1_Battery_Table_Based21_electricalModel_v -
    ((((((((-t5361->mX.mX[104UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Three1_Battery_Table_Based25_electricalModel_xVint
          + t5361->mX.mX[107UL]) + t5361->mX.mX[108UL]) + t5361->mX.mX[109UL]) +
       t5361->mX.mX[110UL]) + t5361->mX.mX[111UL]) + zc_int40);
  out->mFX.mX[168UL] =
    Accumalator_Module_Three1_Battery_Table_Based31_electricalModel_v -
    ((((((t5361->mX.mX[971UL] *
          Accumalator_Module_Three1_Battery_Table_Based37_stateOfCharge +
          t5361->mX.mX[1020UL]) + t5361->mX.mX[1021UL]) + t5361->mX.mX[1022UL])
       + t5361->mX.mX[1023UL]) + t5361->mX.mX[1024UL]) +
     Accumalator_Module_Five1_Battery_Table_Based22_stateOfCharge);
  out->mFX.mX[169UL] =
    Accumalator_Module_four_Battery_Table_Based51_electricalModel_v -
    ((((((t5361->mX.mX[1904UL] *
          Accumalator_Module_four_Battery_Table_Based53_electricalModel_xVint
          + t5361->mX.mX[1926UL]) + t5361->mX.mX[1927UL]) + t5361->mX.mX[1928UL])
       + t5361->mX.mX[1929UL]) + t5361->mX.mX[1930UL]) +
     Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_xVint);
  out->mFX.mX[170UL] =
    Accumalator_Module_One1_Battery_Table_Based10_electricalModel_v -
    ((((((((-t5361->mX.mX[404UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int171 + t5361->mX.mX[407UL]) + t5361->mX.mX[408UL]) + t5361->
        mX.mX[409UL]) + t5361->mX.mX[410UL]) + t5361->mX.mX[411UL]) +
     intrm_sf_mf_57);
  out->mFX.mX[171UL] =
    Accumalator_Module_Two_Battery_Table_Based21_electricalModel_v -
    ((((((t5361->mX.mX[1288UL] *
          Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge +
          t5361->mX.mX[1331UL]) + t5361->mX.mX[1332UL]) + t5361->mX.mX[1333UL])
       + t5361->mX.mX[1334UL]) + t5361->mX.mX[1335UL]) + intrm_sf_mf_187);
  out->mFX.mX[172UL] =
    Accumalator_Module_One1_Battery_Table_Based11_electricalModel_v -
    ((((((((-t5361->mX.mX[413UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based10_electricalModel_xVint
          + t5361->mX.mX[416UL]) + t5361->mX.mX[417UL]) + t5361->mX.mX[418UL]) +
       t5361->mX.mX[419UL]) + t5361->mX.mX[420UL]) + intrm_sf_mf_58);
  out->mFX.mX[173UL] =
    Accumalator_Module_Two_Battery_Table_Based22_electricalModel_v -
    ((((((t5361->mX.mX[1297UL] *
          Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge +
          t5361->mX.mX[1337UL]) + t5361->mX.mX[1338UL]) + t5361->mX.mX[1339UL])
       + t5361->mX.mX[1340UL]) + t5361->mX.mX[1341UL]) + intrm_sf_mf_188);
  out->mFX.mX[174UL] =
    Accumalator_Module_One1_Battery_Table_Based12_electricalModel_v -
    ((((((((-t5361->mX.mX[422UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int177 + t5361->mX.mX[425UL]) + t5361->mX.mX[426UL]) + t5361->
        mX.mX[427UL]) + t5361->mX.mX[428UL]) + t5361->mX.mX[429UL]) + zc_int178);
  out->mFX.mX[175UL] =
    Accumalator_Module_Two_Battery_Table_Based26_electricalModel_v -
    ((((((t5361->mX.mX[1323UL] *
          Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge +
          t5361->mX.mX[1343UL]) + t5361->mX.mX[1344UL]) + t5361->mX.mX[1345UL])
       + t5361->mX.mX[1346UL]) + t5361->mX.mX[1347UL]) + intrm_sf_mf_189);
  out->mFX.mX[176UL] =
    Accumalator_Module_One1_Battery_Table_Based13_electricalModel_v -
    ((((((((-t5361->mX.mX[431UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          intrm_sf_mf_6 + t5361->mX.mX[433UL]) + t5361->mX.mX[434UL]) +
        t5361->mX.mX[435UL]) + t5361->mX.mX[436UL]) + t5361->mX.mX[437UL]) +
     zc_int181);
  out->mFX.mX[177UL] =
    Accumalator_Module_Two_Battery_Table_Based2_electricalModel_v -
    ((((((t5361->mX.mX[1272UL] * zc_int570 + t5361->mX.mX[1349UL]) +
         t5361->mX.mX[1350UL]) + t5361->mX.mX[1351UL]) + t5361->mX.mX[1352UL]) +
      t5361->mX.mX[1353UL]) + intrm_sf_mf_190);
  out->mFX.mX[178UL] =
    Accumalator_Module_One1_Battery_Table_Based11_electricalModel_v -
    ((((((t5361->mX.mX[413UL] * zc_int183 + t5361->mX.mX[439UL]) + t5361->mX.mX
         [440UL]) + t5361->mX.mX[441UL]) + t5361->mX.mX[442UL]) + t5361->mX.mX
      [443UL]) + intrm_sf_mf_61);
  out->mFX.mX[179UL] =
    Accumalator_Module_Two_Battery_Table_Based30_electricalModel_v -
    ((((((((-t5361->mX.mX[1355UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge +
          t5361->mX.mX[1358UL]) + t5361->mX.mX[1359UL]) + t5361->mX.mX[1360UL])
       + t5361->mX.mX[1361UL]) + t5361->mX.mX[1362UL]) + intrm_sf_mf_191);
  out->mFX.mX[180UL] =
    Accumalator_Module_One1_Battery_Table_Based15_electricalModel_v -
    ((((((((-t5361->mX.mX[445UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int186 + t5361->mX.mX[447UL]) + t5361->mX.mX[448UL]) + t5361->
        mX.mX[449UL]) + t5361->mX.mX[450UL]) + t5361->mX.mX[451UL]) + zc_int187);
  out->mFX.mX[181UL] =
    Accumalator_Module_Two_Battery_Table_Based31_electricalModel_v -
    ((((((((-t5361->mX.mX[1364UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int576 + t5361->mX.mX[1367UL]) + t5361->mX.mX[1368UL]) +
        t5361->mX.mX[1369UL]) + t5361->mX.mX[1370UL]) + t5361->mX.mX[1371UL]) +
     intrm_sf_mf_192);
  out->mFX.mX[182UL] =
    Accumalator_Module_One1_Battery_Table_Based16_electricalModel_v -
    ((((((((-t5361->mX.mX[453UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based15_electricalModel_xVint
          + t5361->mX.mX[455UL]) + t5361->mX.mX[456UL]) + t5361->mX.mX[457UL]) +
       t5361->mX.mX[458UL]) + t5361->mX.mX[459UL]) + zc_int190);
  out->mFX.mX[183UL] =
    Accumalator_Module_Two_Battery_Table_Based1_electricalModel_v -
    ((((((t5361->mX.mX[1187UL] *
          Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge +
          t5361->mX.mX[1373UL]) + t5361->mX.mX[1374UL]) + t5361->mX.mX[1375UL])
       + t5361->mX.mX[1376UL]) + t5361->mX.mX[1377UL]) +
     Accumalator_Module_Five1_Battery_Table_Based27_electricalModel_xVint);
  out->mFX.mX[184UL] =
    Accumalator_Module_One1_Battery_Table_Based17_electricalModel_v -
    ((((((((-t5361->mX.mX[461UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int192 + t5361->mX.mX[462UL]) + t5361->mX.mX[463UL]) + t5361->
        mX.mX[464UL]) + t5361->mX.mX[465UL]) + t5361->mX.mX[466UL]) +
     intrm_sf_mf_64);
  out->mFX.mX[185UL] =
    Accumalator_Module_Two_Battery_Table_Based33_electricalModel_v -
    ((((((((-t5361->mX.mX[1379UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int582 + t5361->mX.mX[1380UL]) + t5361->mX.mX[1381UL]) +
        t5361->mX.mX[1382UL]) + t5361->mX.mX[1383UL]) + t5361->mX.mX[1384UL]) +
     zc_int583);
  out->mFX.mX[186UL] =
    Accumalator_Module_One1_Battery_Table_Based10_electricalModel_v -
    ((((((t5361->mX.mX[404UL] * zc_int195 + t5361->mX.mX[468UL]) + t5361->mX.mX
         [469UL]) + t5361->mX.mX[470UL]) + t5361->mX.mX[471UL]) + t5361->mX.mX
      [472UL]) + intrm_sf_mf_65);
  out->mFX.mX[187UL] =
    Accumalator_Module_Two_Battery_Table_Based34_electricalModel_v -
    ((((((((-t5361->mX.mX[1386UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based33_electricalModel_xVint
          + t5361->mX.mX[1387UL]) + t5361->mX.mX[1388UL]) + t5361->mX.mX[1389UL])
       + t5361->mX.mX[1390UL]) + t5361->mX.mX[1391UL]) + zc_int586);
  out->mFX.mX[188UL] =
    Accumalator_Module_One1_Battery_Table_Based16_electricalModel_v -
    ((((((t5361->mX.mX[453UL] *
          Accumalator_Module_One1_Battery_Table_Based18_electricalModel_xVint
          + t5361->mX.mX[474UL]) + t5361->mX.mX[475UL]) + t5361->mX.mX[476UL]) +
       t5361->mX.mX[477UL]) + t5361->mX.mX[478UL]) + zc_int199);
  out->mFX.mX[189UL] =
    Accumalator_Module_Two_Battery_Table_Based34_electricalModel_v -
    ((((((t5361->mX.mX[1386UL] * zc_int588 + t5361->mX.mX[1393UL]) +
         t5361->mX.mX[1394UL]) + t5361->mX.mX[1395UL]) + t5361->mX.mX[1396UL]) +
      t5361->mX.mX[1397UL]) + zc_int589);
  out->mFX.mX[190UL] =
    Accumalator_Module_One1_Battery_Table_Based2_electricalModel_v -
    ((((((((-t5361->mX.mX[480UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge +
          t5361->mX.mX[481UL]) + t5361->mX.mX[482UL]) + t5361->mX.mX[483UL]) +
       t5361->mX.mX[484UL]) + t5361->mX.mX[485UL]) + intrm_sf_mf_67);
  out->mFX.mX[191UL] =
    Accumalator_Module_Two_Battery_Table_Based30_electricalModel_v -
    ((((((t5361->mX.mX[1355UL] *
          Accumalator_Module_Two_Battery_Table_Based35_stateOfCharge +
          t5361->mX.mX[1399UL]) + t5361->mX.mX[1400UL]) + t5361->mX.mX[1401UL])
       + t5361->mX.mX[1402UL]) + t5361->mX.mX[1403UL]) + t4787);
  out->mFX.mX[192UL] =
    Accumalator_Module_One1_Battery_Table_Based20_electricalModel_v -
    ((((((((-t5361->mX.mX[487UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge +
          t5361->mX.mX[490UL]) + t5361->mX.mX[491UL]) + t5361->mX.mX[492UL]) +
       t5361->mX.mX[493UL]) + t5361->mX.mX[494UL]) + intrm_sf_mf_68);
  out->mFX.mX[193UL] =
    Accumalator_Module_Two_Battery_Table_Based37_electricalModel_v -
    ((((((t5361->mX.mX[2UL] *
          Accumalator_Module_Two_Battery_Table_Based36_electricalModel_xVint
          + t5361->mX.mX[1406UL]) + t5361->mX.mX[1407UL]) + t5361->mX.mX[1408UL])
       + t5361->mX.mX[1409UL]) + t5361->mX.mX[1410UL]) + zc_int595);
  out->mFX.mX[194UL] =
    Accumalator_Module_One1_Battery_Table_Based21_electricalModel_v -
    ((((((((-t5361->mX.mX[496UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based20_electricalModel_xVint
          + t5361->mX.mX[499UL]) + t5361->mX.mX[500UL]) + t5361->mX.mX[501UL]) +
       t5361->mX.mX[502UL]) + t5361->mX.mX[503UL]) + zc_int208);
  out->mFX.mX[195UL] =
    Accumalator_Module_Two_Battery_Table_Based31_electricalModel_v -
    ((((((t5361->mX.mX[1364UL] *
          Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge +
          t5361->mX.mX[1412UL]) + t5361->mX.mX[1413UL]) + t5361->mX.mX[1414UL])
       + t5361->mX.mX[1415UL]) + t5361->mX.mX[1416UL]) + t4789);
  out->mFX.mX[196UL] =
    Accumalator_Module_One1_Battery_Table_Based22_electricalModel_v -
    ((((((((-t5361->mX.mX[505UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          intrm_sf_mf_7 + t5361->mX.mX[506UL]) + t5361->mX.mX[507UL]) +
        t5361->mX.mX[508UL]) + t5361->mX.mX[509UL]) + t5361->mX.mX[510UL]) +
     zc_int211);
  out->mFX.mX[197UL] =
    Accumalator_Module_Two_Battery_Table_Based33_electricalModel_v -
    ((((((t5361->mX.mX[1379UL] * intrm_sf_mf_20 + t5361->mX.mX[1418UL]) +
         t5361->mX.mX[1419UL]) + t5361->mX.mX[1420UL]) + t5361->mX.mX[1421UL]) +
      t5361->mX.mX[1422UL]) + intrm_sf_mf_200);
  out->mFX.mX[198UL] =
    Accumalator_Module_One1_Battery_Table_Based23_electricalModel_v -
    ((((((((-t5361->mX.mX[512UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based22_electricalModel_xVint
          + t5361->mX.mX[513UL]) + t5361->mX.mX[514UL]) + t5361->mX.mX[515UL]) +
       t5361->mX.mX[516UL]) + t5361->mX.mX[517UL]) + intrm_sf_mf_71);
  out->mFX.mX[199UL] =
    Accumalator_Module_Two_Battery_Table_Based4_electricalModel_v -
    ((((((((-t5361->mX.mX[1424UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int603 + t5361->mX.mX[1425UL]) + t5361->mX.mX[1426UL]) +
        t5361->mX.mX[1427UL]) + t5361->mX.mX[1428UL]) + t5361->mX.mX[1429UL]) +
     intrm_sf_mf_201);
  out->mFX.mX[200UL] =
    Accumalator_Module_One1_Battery_Table_Based23_electricalModel_v -
    ((((((t5361->mX.mX[512UL] *
          Accumalator_Module_One1_Battery_Table_Based23_electricalModel_xVint
          + t5361->mX.mX[519UL]) + t5361->mX.mX[520UL]) + t5361->mX.mX[521UL]) +
       t5361->mX.mX[522UL]) + t5361->mX.mX[523UL]) + zc_int217);
  out->mFX.mX[201UL] =
    Accumalator_Module_Two_Battery_Table_Based37_electricalModel_v -
    ((((((t5361->mX.mX[3UL] * zc_int606 + t5361->mX.mX[1431UL]) + t5361->mX.mX
         [1432UL]) + t5361->mX.mX[1433UL]) + t5361->mX.mX[1434UL]) +
      t5361->mX.mX[1435UL]) + zc_int607);
  out->mFX.mX[202UL] =
    Accumalator_Module_One1_Battery_Table_Based20_electricalModel_v -
    ((((((t5361->mX.mX[487UL] * zc_int219 + t5361->mX.mX[525UL]) + t5361->mX.mX
         [526UL]) + t5361->mX.mX[527UL]) + t5361->mX.mX[528UL]) + t5361->mX.mX
      [529UL]) + Accumalator_Module_Five1_Battery_Table_Based16_stateOfCharge);
  out->mFX.mX[203UL] =
    Accumalator_Module_Two_Battery_Table_Based41_electricalModel_v -
    ((((((((-t5361->mX.mX[1437UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge +
          t5361->mX.mX[1440UL]) + t5361->mX.mX[1441UL]) + t5361->mX.mX[1442UL])
       + t5361->mX.mX[1443UL]) + t5361->mX.mX[1444UL]) + zc_int610);
  out->mFX.mX[204UL] =
    Accumalator_Module_One1_Battery_Table_Based26_electricalModel_v -
    ((((((((-t5361->mX.mX[531UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based25_electricalModel_xVint
          + t5361->mX.mX[533UL]) + t5361->mX.mX[534UL]) + t5361->mX.mX[535UL]) +
       t5361->mX.mX[536UL]) + t5361->mX.mX[537UL]) + zc_int223);
  out->mFX.mX[205UL] =
    Accumalator_Module_Two_Battery_Table_Based42_electricalModel_v -
    ((((((((-t5361->mX.mX[1446UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int612 + t5361->mX.mX[1449UL]) + t5361->mX.mX[1450UL]) +
        t5361->mX.mX[1451UL]) + t5361->mX.mX[1452UL]) + t5361->mX.mX[1453UL]) +
     intrm_sf_mf_204);
  out->mFX.mX[206UL] =
    Accumalator_Module_One1_Battery_Table_Based21_electricalModel_v -
    ((((((t5361->mX.mX[496UL] *
          Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge +
          t5361->mX.mX[539UL]) + t5361->mX.mX[540UL]) + t5361->mX.mX[541UL]) +
       t5361->mX.mX[542UL]) + t5361->mX.mX[543UL]) + intrm_sf_mf_75);
  out->mFX.mX[207UL] =
    Accumalator_Module_Two_Battery_Table_Based43_electricalModel_v -
    ((((((((-t5361->mX.mX[1455UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int615 + t5361->mX.mX[1456UL]) + t5361->mX.mX[1457UL]) +
        t5361->mX.mX[1458UL]) + t5361->mX.mX[1459UL]) + t5361->mX.mX[1460UL]) +
     zc_int616);
  out->mFX.mX[208UL] =
    Accumalator_Module_One1_Battery_Table_Based22_electricalModel_v -
    ((((((t5361->mX.mX[505UL] *
          Accumalator_Module_One1_Battery_Table_Based27_electricalModel_xVint
          + t5361->mX.mX[545UL]) + t5361->mX.mX[546UL]) + t5361->mX.mX[547UL]) +
       t5361->mX.mX[548UL]) + t5361->mX.mX[549UL]) + zc_int229);
  out->mFX.mX[209UL] =
    Accumalator_Module_Two_Battery_Table_Based44_electricalModel_v -
    ((((((((-t5361->mX.mX[1462UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int618 + t5361->mX.mX[1463UL]) + t5361->mX.mX[1464UL]) +
        t5361->mX.mX[1465UL]) + t5361->mX.mX[1466UL]) + t5361->mX.mX[1467UL]) +
     intrm_sf_mf_206);
  out->mFX.mX[210UL] =
    Accumalator_Module_One1_Battery_Table_Based26_electricalModel_v -
    ((((((t5361->mX.mX[531UL] *
          Accumalator_Module_One1_Battery_Table_Based28_stateOfCharge +
          t5361->mX.mX[551UL]) + t5361->mX.mX[552UL]) + t5361->mX.mX[553UL]) +
       t5361->mX.mX[554UL]) + t5361->mX.mX[555UL]) + zc_int232);
  out->mFX.mX[211UL] =
    Accumalator_Module_Two_Battery_Table_Based44_electricalModel_v -
    ((((((t5361->mX.mX[1462UL] *
          Accumalator_Module_Two_Battery_Table_Based44_electricalModel_xVint
          + t5361->mX.mX[1469UL]) + t5361->mX.mX[1470UL]) + t5361->mX.mX[1471UL])
       + t5361->mX.mX[1472UL]) + t5361->mX.mX[1473UL]) + intrm_sf_mf_207);
  out->mFX.mX[212UL] =
    Accumalator_Module_four_Battery_Table_Based11_electricalModel_v -
    ((((((t5361->mX.mX[1595UL] * zc_int687 + t5361->mX.mX[1621UL]) +
         t5361->mX.mX[1622UL]) + t5361->mX.mX[1623UL]) + t5361->mX.mX[1624UL]) +
      t5361->mX.mX[1625UL]) + intrm_sf_mf_229);
  out->mFX.mX[213UL] =
    Accumalator_Module_One1_Battery_Table_Based12_electricalModel_v -
    ((((((t5361->mX.mX[422UL] * intrm_sf_mf_10 + t5361->mX.mX[710UL]) +
         t5361->mX.mX[711UL]) + t5361->mX.mX[712UL]) + t5361->mX.mX[713UL]) +
      t5361->mX.mX[714UL]) + zc_int301);
  out->mFX.mX[214UL] =
    Accumalator_Module_four_Battery_Table_Based15_electricalModel_v -
    ((((((((-t5361->mX.mX[1627UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int690 + t5361->mX.mX[1629UL]) + t5361->mX.mX[1630UL]) +
        t5361->mX.mX[1631UL]) + t5361->mX.mX[1632UL]) + t5361->mX.mX[1633UL]) +
     zc_int691);
  out->mFX.mX[215UL] =
    Accumalator_Module_One1_Battery_Table_Based47_electricalModel_v -
    ((((((t5361->mX.mX[690UL] *
          Accumalator_Module_One1_Battery_Table_Based5_stateOfCharge +
          t5361->mX.mX[716UL]) + t5361->mX.mX[717UL]) + t5361->mX.mX[718UL]) +
       t5361->mX.mX[719UL]) + t5361->mX.mX[720UL]) + zc_int304);
  out->mFX.mX[216UL] =
    Accumalator_Module_four_Battery_Table_Based16_electricalModel_v -
    ((((((((-t5361->mX.mX[1635UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int693 + t5361->mX.mX[1637UL]) + t5361->mX.mX[1638UL]) +
        t5361->mX.mX[1639UL]) + t5361->mX.mX[1640UL]) + t5361->mX.mX[1641UL]) +
     zc_int694);
  out->mFX.mX[217UL] =
    Accumalator_Module_One1_Battery_Table_Based51_electricalModel_v -
    ((((((((-t5361->mX.mX[722UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based50_electricalModel_xVint
          + t5361->mX.mX[723UL]) + t5361->mX.mX[724UL]) + t5361->mX.mX[725UL]) +
       t5361->mX.mX[726UL]) + t5361->mX.mX[727UL]) + zc_int307);
  out->mFX.mX[218UL] =
    Accumalator_Module_four_Battery_Table_Based17_electricalModel_v -
    ((((((((-t5361->mX.mX[1643UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based16_stateOfCharge +
          t5361->mX.mX[1644UL]) + t5361->mX.mX[1645UL]) + t5361->mX.mX[1646UL])
       + t5361->mX.mX[1647UL]) + t5361->mX.mX[1648UL]) + intrm_sf_mf_232);
  out->mFX.mX[219UL] =
    Accumalator_Module_One1_Battery_Table_Based52_electricalModel_v -
    ((((((((-t5361->mX.mX[736UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based51_stateOfCharge +
          t5361->mX.mX[739UL]) + t5361->mX.mX[740UL]) + t5361->mX.mX[741UL]) +
       t5361->mX.mX[742UL]) + t5361->mX.mX[743UL]) + zc_int310);
  out->mFX.mX[220UL] =
    Accumalator_Module_four_Battery_Table_Based10_electricalModel_v -
    ((((((t5361->mX.mX[1586UL] *
          Accumalator_Module_four_Battery_Table_Based17_stateOfCharge +
          t5361->mX.mX[1650UL]) + t5361->mX.mX[1651UL]) + t5361->mX.mX[1652UL])
       + t5361->mX.mX[1653UL]) + t5361->mX.mX[1654UL]) +
     Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_xVint);
  out->mFX.mX[221UL] =
    Accumalator_Module_One1_Battery_Table_Based53_electricalModel_v -
    ((((((((-t5361->mX.mX[745UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_One1_Battery_Table_Based52_electricalModel_xVint
          + t5361->mX.mX[746UL]) + t5361->mX.mX[747UL]) + t5361->mX.mX[748UL]) +
       t5361->mX.mX[749UL]) + t5361->mX.mX[750UL]) + intrm_sf_mf_104);
  out->mFX.mX[222UL] =
    Accumalator_Module_four_Battery_Table_Based16_electricalModel_v -
    ((((((t5361->mX.mX[1635UL] *
          Accumalator_Module_four_Battery_Table_Based18_stateOfCharge +
          t5361->mX.mX[1656UL]) + t5361->mX.mX[1657UL]) + t5361->mX.mX[1658UL])
       + t5361->mX.mX[1659UL]) + t5361->mX.mX[1660UL]) + zc_int703);
  out->mFX.mX[223UL] =
    Accumalator_Module_One1_Battery_Table_Based51_electricalModel_v -
    ((((((t5361->mX.mX[722UL] *
          Accumalator_Module_One1_Battery_Table_Based53_electricalModel_xVint
          + t5361->mX.mX[752UL]) + t5361->mX.mX[753UL]) + t5361->mX.mX[754UL]) +
       t5361->mX.mX[755UL]) + t5361->mX.mX[756UL]) + zc_int316);
  out->mFX.mX[224UL] =
    Accumalator_Module_four_Battery_Table_Based2_electricalModel_v -
    ((((((((-t5361->mX.mX[1662UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based19_stateOfCharge +
          t5361->mX.mX[1663UL]) + t5361->mX.mX[1664UL]) + t5361->mX.mX[1665UL])
       + t5361->mX.mX[1666UL]) + t5361->mX.mX[1667UL]) + zc_int706);
  out->mFX.mX[225UL] =
    Accumalator_Module_One1_Battery_Table_Based52_electricalModel_v -
    ((((((t5361->mX.mX[736UL] *
          Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge +
          t5361->mX.mX[758UL]) + t5361->mX.mX[759UL]) + t5361->mX.mX[760UL]) +
       t5361->mX.mX[761UL]) + t5361->mX.mX[762UL]) + zc_int319);
  out->mFX.mX[226UL] =
    Accumalator_Module_four_Battery_Table_Based20_electricalModel_v -
    ((((((((-t5361->mX.mX[1669UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int708 + t5361->mX.mX[1672UL]) + t5361->mX.mX[1673UL]) +
        t5361->mX.mX[1674UL]) + t5361->mX.mX[1675UL]) + t5361->mX.mX[1676UL]) +
     zc_int709);
  out->mFX.mX[227UL] =
    Accumalator_Module_One1_Battery_Table_Based53_electricalModel_v -
    ((((((t5361->mX.mX[745UL] *
          Accumalator_Module_One1_Battery_Table_Based58_electricalModel_xVint
          + t5361->mX.mX[764UL]) + t5361->mX.mX[765UL]) + t5361->mX.mX[766UL]) +
       t5361->mX.mX[767UL]) + t5361->mX.mX[768UL]) + intrm_sf_mf_107);
  out->mFX.mX[228UL] =
    Accumalator_Module_four_Battery_Table_Based21_electricalModel_v -
    ((((((((-t5361->mX.mX[1678UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based20_electricalModel_xVint
          + t5361->mX.mX[1681UL]) + t5361->mX.mX[1682UL]) + t5361->mX.mX[1683UL])
       + t5361->mX.mX[1684UL]) + t5361->mX.mX[1685UL]) + intrm_sf_mf_237);
  out->mFX.mX[229UL] =
    Accumalator_Module_One1_Battery_Table_Based13_electricalModel_v -
    ((((((t5361->mX.mX[431UL] *
          Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge +
          t5361->mX.mX[770UL]) + t5361->mX.mX[771UL]) + t5361->mX.mX[772UL]) +
       t5361->mX.mX[773UL]) + t5361->mX.mX[774UL]) + intrm_sf_mf_108);
  out->mFX.mX[230UL] =
    Accumalator_Module_four_Battery_Table_Based22_electricalModel_v -
    ((((((((-t5361->mX.mX[1687UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based21_electricalModel_xVint
          + t5361->mX.mX[1688UL]) + t5361->mX.mX[1689UL]) + t5361->mX.mX[1690UL])
       + t5361->mX.mX[1691UL]) + t5361->mX.mX[1692UL]) + zc_int715);
  out->mFX.mX[231UL] =
    Accumalator_Module_One1_Battery_Table_Based4_electricalModel_v -
    ((((((t5361->mX.mX[633UL] *
          Accumalator_Module_One1_Battery_Table_Based6_stateOfCharge +
          t5361->mX.mX[776UL]) + t5361->mX.mX[777UL]) + t5361->mX.mX[778UL]) +
       t5361->mX.mX[779UL]) + t5361->mX.mX[780UL]) + intrm_sf_mf_109);
  out->mFX.mX[232UL] =
    Accumalator_Module_four_Battery_Table_Based23_electricalModel_v -
    ((((((((-t5361->mX.mX[1694UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int717 + t5361->mX.mX[1695UL]) + t5361->mX.mX[1696UL]) +
        t5361->mX.mX[1697UL]) + t5361->mX.mX[1698UL]) + t5361->mX.mX[1699UL]) +
     intrm_sf_mf_239);
  out->mFX.mX[233UL] =
    Accumalator_Module_One1_Battery_Table_Based15_electricalModel_v -
    ((((((t5361->mX.mX[445UL] * intrm_sf_mf_11 + t5361->mX.mX[782UL]) +
         t5361->mX.mX[783UL]) + t5361->mX.mX[784UL]) + t5361->mX.mX[785UL]) +
      t5361->mX.mX[786UL]) + intrm_sf_mf_110);
  out->mFX.mX[234UL] =
    Accumalator_Module_four_Battery_Table_Based23_electricalModel_v -
    ((((((t5361->mX.mX[1694UL] * zc_int720 + t5361->mX.mX[1701UL]) +
         t5361->mX.mX[1702UL]) + t5361->mX.mX[1703UL]) + t5361->mX.mX[1704UL]) +
      t5361->mX.mX[1705UL]) + intrm_sf_mf_240);
  out->mFX.mX[235UL] =
    Accumalator_Module_One1_Battery_Table_Based17_electricalModel_v -
    ((((((t5361->mX.mX[461UL] *
          Accumalator_Module_One1_Battery_Table_Based8_electricalModel_xVint
          + t5361->mX.mX[788UL]) + t5361->mX.mX[789UL]) + t5361->mX.mX[790UL]) +
       t5361->mX.mX[791UL]) + t5361->mX.mX[792UL]) + zc_int334);
  out->mFX.mX[236UL] =
    Accumalator_Module_four_Battery_Table_Based20_electricalModel_v -
    ((((((t5361->mX.mX[1669UL] *
          Accumalator_Module_four_Battery_Table_Based24_electricalModel_xVint
          + t5361->mX.mX[1707UL]) + t5361->mX.mX[1708UL]) + t5361->mX.mX[1709UL])
       + t5361->mX.mX[1710UL]) + t5361->mX.mX[1711UL]) + intrm_sf_mf_241);
  out->mFX.mX[237UL] =
    Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_v -
    ((((((((-t5361->mX.mX[794UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int336 + t5361->mX.mX[797UL]) + t5361->mX.mX[798UL]) + t5361->
        mX.mX[799UL]) + t5361->mX.mX[800UL]) + t5361->mX.mX[801UL]) +
     intrm_sf_mf_112);
  out->mFX.mX[238UL] =
    Accumalator_Module_four_Battery_Table_Based26_electricalModel_v -
    ((((((((-t5361->mX.mX[1713UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int726 + t5361->mX.mX[1715UL]) + t5361->mX.mX[1716UL]) +
        t5361->mX.mX[1717UL]) + t5361->mX.mX[1718UL]) + t5361->mX.mX[1719UL]) +
     intrm_sf_mf_242);
  out->mFX.mX[239UL] =
    Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_v - ((((((((
    -t5361->mX.mX[803UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_xVint
    + t5361->mX.mX[806UL]) + t5361->mX.mX[807UL]) + t5361->mX.mX[808UL]) +
    t5361->mX.mX[809UL]) + t5361->mX.mX[810UL]) +
    Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_xVint);
  out->mFX.mX[240UL] =
    Accumalator_Module_four_Battery_Table_Based21_electricalModel_v -
    ((((((t5361->mX.mX[1678UL] * zc_int729 + t5361->mX.mX[1721UL]) +
         t5361->mX.mX[1722UL]) + t5361->mX.mX[1723UL]) + t5361->mX.mX[1724UL]) +
      t5361->mX.mX[1725UL]) + zc_int730);
  out->mFX.mX[241UL] =
    Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_v - ((((((((
    -t5361->mX.mX[812UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_xVint
    + t5361->mX.mX[815UL]) + t5361->mX.mX[816UL]) + t5361->mX.mX[817UL]) +
    t5361->mX.mX[818UL]) + t5361->mX.mX[819UL]) + zc_int343);
  out->mFX.mX[242UL] =
    Accumalator_Module_four_Battery_Table_Based22_electricalModel_v -
    ((((((t5361->mX.mX[1687UL] * zc_int732 + t5361->mX.mX[1727UL]) +
         t5361->mX.mX[1728UL]) + t5361->mX.mX[1729UL]) + t5361->mX.mX[1730UL]) +
      t5361->mX.mX[1731UL]) + intrm_sf_mf_244);
  out->mFX.mX[243UL] =
    Accumalator_Module_Three1_Battery_Table_Based12_electricalModel_v - ((((((((
    -t5361->mX.mX[821UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_xVint
    + t5361->mX.mX[824UL]) + t5361->mX.mX[825UL]) + t5361->mX.mX[826UL]) +
    t5361->mX.mX[827UL]) + t5361->mX.mX[828UL]) + zc_int346);
  out->mFX.mX[244UL] =
    Accumalator_Module_four_Battery_Table_Based26_electricalModel_v -
    ((((((t5361->mX.mX[1713UL] *
          Accumalator_Module_four_Battery_Table_Based28_electricalModel_xVint
          + t5361->mX.mX[1733UL]) + t5361->mX.mX[1734UL]) + t5361->mX.mX[1735UL])
       + t5361->mX.mX[1736UL]) + t5361->mX.mX[1737UL]) + intrm_sf_mf_245);
  out->mFX.mX[245UL] =
    Accumalator_Module_Three1_Battery_Table_Based13_electricalModel_v - ((((((((
    -t5361->mX.mX[830UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) * zc_int348 +
    t5361->mX.mX[832UL]) + t5361->mX.mX[833UL]) + t5361->mX.mX[834UL]) +
    t5361->mX.mX[835UL]) + t5361->mX.mX[836UL]) + zc_int349);
  out->mFX.mX[246UL] =
    Accumalator_Module_four_Battery_Table_Based2_electricalModel_v -
    ((((((t5361->mX.mX[1662UL] *
          Accumalator_Module_four_Battery_Table_Based29_stateOfCharge +
          t5361->mX.mX[1739UL]) + t5361->mX.mX[1740UL]) + t5361->mX.mX[1741UL])
       + t5361->mX.mX[1742UL]) + t5361->mX.mX[1743UL]) + zc_int739);
  out->mFX.mX[247UL] =
    Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_v -
    ((((((t5361->mX.mX[812UL] *
          Accumalator_Module_Three1_Battery_Table_Based13_stateOfCharge +
          t5361->mX.mX[838UL]) + t5361->mX.mX[839UL]) + t5361->mX.mX[840UL]) +
       t5361->mX.mX[841UL]) + t5361->mX.mX[842UL]) + intrm_sf_mf_117);
  out->mFX.mX[248UL] =
    Accumalator_Module_four_Battery_Table_Based30_electricalModel_v -
    ((((((((-t5361->mX.mX[1745UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based3_electricalModel_xVint
          + t5361->mX.mX[1748UL]) + t5361->mX.mX[1749UL]) + t5361->mX.mX[1750UL])
       + t5361->mX.mX[1751UL]) + t5361->mX.mX[1752UL]) + intrm_sf_mf_247);
  out->mFX.mX[249UL] =
    Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_v - ((((((((
    -t5361->mX.mX[844UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based14_stateOfCharge + t5361->
    mX.mX[846UL]) + t5361->mX.mX[847UL]) + t5361->mX.mX[848UL]) + t5361->mX.mX
    [849UL]) + t5361->mX.mX[850UL]) + zc_int355);
  out->mFX.mX[250UL] =
    Accumalator_Module_four_Battery_Table_Based31_electricalModel_v -
    ((((((((-t5361->mX.mX[1754UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int744 + t5361->mX.mX[1757UL]) + t5361->mX.mX[1758UL]) +
        t5361->mX.mX[1759UL]) + t5361->mX.mX[1760UL]) + t5361->mX.mX[1761UL]) +
     zc_int745);
  out->mFX.mX[251UL] =
    Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_v - ((((((((
    -t5361->mX.mX[852UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_xVint
    + t5361->mX.mX[854UL]) + t5361->mX.mX[855UL]) + t5361->mX.mX[856UL]) +
    t5361->mX.mX[857UL]) + t5361->mX.mX[858UL]) + zc_int358);
  out->mFX.mX[252UL] =
    Accumalator_Module_four_Battery_Table_Based1_electricalModel_v -
    ((((((t5361->mX.mX[1577UL] * zc_int747 + t5361->mX.mX[1763UL]) +
         t5361->mX.mX[1764UL]) + t5361->mX.mX[1765UL]) + t5361->mX.mX[1766UL]) +
      t5361->mX.mX[1767UL]) + intrm_sf_mf_249);
  out->mFX.mX[253UL] =
    Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_v - ((((((((
    -t5361->mX.mX[860UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) * zc_int360 +
    t5361->mX.mX[861UL]) + t5361->mX.mX[862UL]) + t5361->mX.mX[863UL]) +
    t5361->mX.mX[864UL]) + t5361->mX.mX[865UL]) + zc_int361);
  out->mFX.mX[254UL] =
    Accumalator_Module_four_Battery_Table_Based33_electricalModel_v -
    ((((((((-t5361->mX.mX[1769UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int750 + t5361->mX.mX[1770UL]) + t5361->mX.mX[1771UL]) +
        t5361->mX.mX[1772UL]) + t5361->mX.mX[1773UL]) + t5361->mX.mX[1774UL]) +
     intrm_sf_mf_250);
  out->mFX.mX[255UL] =
    Accumalator_Module_Three1_Battery_Table_Based4_electricalModel_v -
    ((((((t5361->mX.mX[1032UL] *
          Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge +
          t5361->mX.mX[1169UL]) + t5361->mX.mX[1170UL]) + t5361->mX.mX[1171UL])
       + t5361->mX.mX[1172UL]) + t5361->mX.mX[1173UL]) + intrm_sf_mf_165);
  out->mFX.mX[256UL] =
    Accumalator_Module_Five1_Battery_Table_Based42_electricalModel_v -
    ((((((((-t5361->mX.mX[263UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_xVint +
          t5361->mX.mX[266UL]) + t5361->mX.mX[267UL]) + t5361->mX.mX[268UL]) +
       t5361->mX.mX[269UL]) + t5361->mX.mX[270UL]) + zc_int109);
  out->mFX.mX[257UL] =
    Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_v -
    ((((((t5361->mX.mX[844UL] *
          Accumalator_Module_Three1_Battery_Table_Based7_electricalModel_xVint +
          t5361->mX.mX[1175UL]) + t5361->mX.mX[1176UL]) + t5361->mX.mX[1177UL])
       + t5361->mX.mX[1178UL]) + t5361->mX.mX[1179UL]) + intrm_sf_mf_166);
  out->mFX.mX[258UL] =
    Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_v -
    ((((((((-t5361->mX.mX[272UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int111 + t5361->mX.mX[273UL]) + t5361->mX.mX[274UL]) + t5361->
        mX.mX[275UL]) + t5361->mX.mX[276UL]) + t5361->mX.mX[277UL]) + zc_int112);
  out->mFX.mX[259UL] =
    Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_v -
    ((((((t5361->mX.mX[860UL] * zc_int501 + t5361->mX.mX[1181UL]) + t5361->
         mX.mX[1182UL]) + t5361->mX.mX[1183UL]) + t5361->mX.mX[1184UL]) +
      t5361->mX.mX[1185UL]) + zc_int502);
  out->mFX.mX[260UL] =
    Accumalator_Module_Five1_Battery_Table_Based44_electricalModel_v -
    ((((((((-t5361->mX.mX[279UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_xVint +
          t5361->mX.mX[280UL]) + t5361->mX.mX[281UL]) + t5361->mX.mX[282UL]) +
       t5361->mX.mX[283UL]) + t5361->mX.mX[284UL]) + zc_int115);
  out->mFX.mX[261UL] =
    Accumalator_Module_Two_Battery_Table_Based1_electricalModel_v -
    ((((((((-t5361->mX.mX[1187UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int504 + t5361->mX.mX[1190UL]) + t5361->mX.mX[1191UL]) +
        t5361->mX.mX[1192UL]) + t5361->mX.mX[1193UL]) + t5361->mX.mX[1194UL]) +
     zc_int505);
  out->mFX.mX[262UL] =
    Accumalator_Module_Five1_Battery_Table_Based44_electricalModel_v -
    ((((((t5361->mX.mX[279UL] *
          Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge +
          t5361->mX.mX[286UL]) + t5361->mX.mX[287UL]) + t5361->mX.mX[288UL]) +
       t5361->mX.mX[289UL]) + t5361->mX.mX[290UL]) + intrm_sf_mf_39);
  out->mFX.mX[263UL] =
    Accumalator_Module_Two_Battery_Table_Based10_electricalModel_v -
    ((((((((-t5361->mX.mX[1196UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based1_electricalModel_xVint
          + t5361->mX.mX[1199UL]) + t5361->mX.mX[1200UL]) + t5361->mX.mX[1201UL])
       + t5361->mX.mX[1202UL]) + t5361->mX.mX[1203UL]) + zc_int508);
  out->mFX.mX[264UL] =
    Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_v -
    ((((((t5361->mX.mX[254UL] * intrm_sf_mf_4 + t5361->mX.mX[292UL]) +
         t5361->mX.mX[293UL]) + t5361->mX.mX[294UL]) + t5361->mX.mX[295UL]) +
      t5361->mX.mX[296UL]) + zc_int121);
  out->mFX.mX[265UL] =
    Accumalator_Module_Two_Battery_Table_Based11_electricalModel_v -
    ((((((((-t5361->mX.mX[1205UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          intrm_sf_mf_17 + t5361->mX.mX[1208UL]) + t5361->mX.mX[1209UL]) +
        t5361->mX.mX[1210UL]) + t5361->mX.mX[1211UL]) + t5361->mX.mX[1212UL]) +
     intrm_sf_mf_170);
  out->mFX.mX[266UL] =
    Accumalator_Module_Five1_Battery_Table_Based47_electricalModel_v -
    ((((((((-t5361->mX.mX[298UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int123 + t5361->mX.mX[300UL]) + t5361->mX.mX[301UL]) + t5361->
        mX.mX[302UL]) + t5361->mX.mX[303UL]) + t5361->mX.mX[304UL]) +
     intrm_sf_mf_41);
  out->mFX.mX[267UL] =
    Accumalator_Module_Two_Battery_Table_Based12_electricalModel_v -
    ((((((((-t5361->mX.mX[1214UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge +
          t5361->mX.mX[1217UL]) + t5361->mX.mX[1218UL]) + t5361->mX.mX[1219UL])
       + t5361->mX.mX[1220UL]) + t5361->mX.mX[1221UL]) + zc_int514);
  out->mFX.mX[268UL] =
    Accumalator_Module_Five1_Battery_Table_Based42_electricalModel_v -
    ((((((t5361->mX.mX[263UL] *
          Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge +
          t5361->mX.mX[306UL]) + t5361->mX.mX[307UL]) + t5361->mX.mX[308UL]) +
       t5361->mX.mX[309UL]) + t5361->mX.mX[310UL]) + zc_int127);
  out->mFX.mX[269UL] =
    Accumalator_Module_Two_Battery_Table_Based13_electricalModel_v -
    ((((((((-t5361->mX.mX[1223UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge +
          t5361->mX.mX[1225UL]) + t5361->mX.mX[1226UL]) + t5361->mX.mX[1227UL])
       + t5361->mX.mX[1228UL]) + t5361->mX.mX[1229UL]) + zc_int517);
  out->mFX.mX[270UL] =
    Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_v -
    ((((((t5361->mX.mX[272UL] *
          Accumalator_Module_Five1_Battery_Table_Based48_stateOfCharge +
          t5361->mX.mX[312UL]) + t5361->mX.mX[313UL]) + t5361->mX.mX[314UL]) +
       t5361->mX.mX[315UL]) + t5361->mX.mX[316UL]) + zc_int130);
  out->mFX.mX[271UL] =
    Accumalator_Module_Two_Battery_Table_Based11_electricalModel_v -
    ((((((t5361->mX.mX[1205UL] * zc_int519 + t5361->mX.mX[1231UL]) +
         t5361->mX.mX[1232UL]) + t5361->mX.mX[1233UL]) + t5361->mX.mX[1234UL]) +
      t5361->mX.mX[1235UL]) +
     Accumalator_Module_Five1_Battery_Table_Based25_stateOfCharge);
  out->mFX.mX[272UL] =
    Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_v -
    ((((((t5361->mX.mX[30UL] * zc_int132 + t5361->mX.mX[318UL]) + t5361->mX.mX
         [319UL]) + t5361->mX.mX[320UL]) + t5361->mX.mX[321UL]) + t5361->mX.mX
      [322UL]) + zc_int133);
  out->mFX.mX[273UL] =
    Accumalator_Module_Two_Battery_Table_Based15_electricalModel_v -
    ((((((((-t5361->mX.mX[1237UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based14_electricalModel_xVint
          + t5361->mX.mX[1239UL]) + t5361->mX.mX[1240UL]) + t5361->mX.mX[1241UL])
       + t5361->mX.mX[1242UL]) + t5361->mX.mX[1243UL]) + intrm_sf_mf_174);
  out->mFX.mX[274UL] =
    Accumalator_Module_Five1_Battery_Table_Based47_electricalModel_v -
    ((((((t5361->mX.mX[298UL] *
          Accumalator_Module_Five1_Battery_Table_Based5_stateOfCharge +
          t5361->mX.mX[324UL]) + t5361->mX.mX[325UL]) + t5361->mX.mX[326UL]) +
       t5361->mX.mX[327UL]) + t5361->mX.mX[328UL]) + zc_int136);
  out->mFX.mX[275UL] =
    Accumalator_Module_Two_Battery_Table_Based16_electricalModel_v -
    ((((((((-t5361->mX.mX[1245UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge +
          t5361->mX.mX[1247UL]) + t5361->mX.mX[1248UL]) + t5361->mX.mX[1249UL])
       + t5361->mX.mX[1250UL]) + t5361->mX.mX[1251UL]) + zc_int526);
  out->mFX.mX[276UL] =
    Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_v -
    ((((((((-t5361->mX.mX[330UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Five1_Battery_Table_Based50_stateOfCharge +
          t5361->mX.mX[332UL]) + t5361->mX.mX[333UL]) + t5361->mX.mX[334UL]) +
       t5361->mX.mX[335UL]) + t5361->mX.mX[336UL]) + zc_int139);
  out->mFX.mX[277UL] =
    Accumalator_Module_Two_Battery_Table_Based17_electricalModel_v -
    ((((((((-t5361->mX.mX[1253UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based16_stateOfCharge +
          t5361->mX.mX[1254UL]) + t5361->mX.mX[1255UL]) + t5361->mX.mX[1256UL])
       + t5361->mX.mX[1257UL]) + t5361->mX.mX[1258UL]) + intrm_sf_mf_176);
  out->mFX.mX[278UL] = t5361->mX.mX[339UL] - ((((((((-t5361->mX.mX[338UL] +
    t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
    Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_xVint
    + t5361->mX.mX[340UL]) + t5361->mX.mX[341UL]) + t5361->mX.mX[342UL]) +
    t5361->mX.mX[343UL]) + t5361->mX.mX[344UL]) + intrm_sf_mf_47);
  out->mFX.mX[279UL] =
    Accumalator_Module_Two_Battery_Table_Based10_electricalModel_v -
    ((((((t5361->mX.mX[1196UL] *
          Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge +
          t5361->mX.mX[1260UL]) + t5361->mX.mX[1261UL]) + t5361->mX.mX[1262UL])
       + t5361->mX.mX[1263UL]) + t5361->mX.mX[1264UL]) + zc_int532);
  out->mFX.mX[280UL] =
    Accumalator_Module_Five1_Battery_Table_Based53_electricalModel_v -
    ((((((((-t5361->mX.mX[346UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int144 + t5361->mX.mX[347UL]) + t5361->mX.mX[348UL]) + t5361->
        mX.mX[349UL]) + t5361->mX.mX[350UL]) + t5361->mX.mX[351UL]) + zc_int145);
  out->mFX.mX[281UL] =
    Accumalator_Module_Two_Battery_Table_Based16_electricalModel_v -
    ((((((t5361->mX.mX[1245UL] *
          Accumalator_Module_Two_Battery_Table_Based18_electricalModel_xVint
          + t5361->mX.mX[1266UL]) + t5361->mX.mX[1267UL]) + t5361->mX.mX[1268UL])
       + t5361->mX.mX[1269UL]) + t5361->mX.mX[1270UL]) + zc_int535);
  out->mFX.mX[282UL] =
    Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_v -
    ((((((t5361->mX.mX[330UL] * zc_int147 + t5361->mX.mX[353UL]) + t5361->mX.mX
         [354UL]) + t5361->mX.mX[355UL]) + t5361->mX.mX[356UL]) + t5361->mX.mX
      [357UL]) + zc_int148);
  out->mFX.mX[283UL] =
    Accumalator_Module_Two_Battery_Table_Based2_electricalModel_v -
    ((((((((-t5361->mX.mX[1272UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int537 + t5361->mX.mX[1273UL]) + t5361->mX.mX[1274UL]) +
        t5361->mX.mX[1275UL]) + t5361->mX.mX[1276UL]) + t5361->mX.mX[1277UL]) +
     intrm_sf_mf_179);
  out->mFX.mX[284UL] = t5361->mX.mX[339UL] - ((((((t5361->mX.mX[338UL] *
    intrm_sf_mf_5 + t5361->mX.mX[359UL]) + t5361->mX.mX[360UL]) + t5361->mX.mX
    [361UL]) + t5361->mX.mX[362UL]) + t5361->mX.mX[363UL]) + intrm_sf_mf_50);
  out->mFX.mX[285UL] =
    Accumalator_Module_Two_Battery_Table_Based20_electricalModel_v -
    ((((((((-t5361->mX.mX[1279UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          zc_int540 + t5361->mX.mX[1282UL]) + t5361->mX.mX[1283UL]) +
        t5361->mX.mX[1284UL]) + t5361->mX.mX[1285UL]) + t5361->mX.mX[1286UL]) +
     zc_int541);
  out->mFX.mX[286UL] =
    Accumalator_Module_Five1_Battery_Table_Based53_electricalModel_v -
    ((((((t5361->mX.mX[346UL] *
          Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge +
          t5361->mX.mX[365UL]) + t5361->mX.mX[366UL]) + t5361->mX.mX[367UL]) +
       t5361->mX.mX[368UL]) + t5361->mX.mX[369UL]) + zc_int154);
  out->mFX.mX[287UL] =
    Accumalator_Module_Two_Battery_Table_Based21_electricalModel_v -
    ((((((((-t5361->mX.mX[1288UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge +
          t5361->mX.mX[1291UL]) + t5361->mX.mX[1292UL]) + t5361->mX.mX[1293UL])
       + t5361->mX.mX[1294UL]) + t5361->mX.mX[1295UL]) + intrm_sf_mf_181);
  out->mFX.mX[288UL] =
    Accumalator_Module_Five1_Battery_Table_Based13_electricalModel_v -
    ((((((t5361->mX.mX[39UL] *
          Accumalator_Module_Five1_Battery_Table_Based59_stateOfCharge +
          t5361->mX.mX[371UL]) + t5361->mX.mX[372UL]) + t5361->mX.mX[373UL]) +
       t5361->mX.mX[374UL]) + t5361->mX.mX[375UL]) + intrm_sf_mf_52);
  out->mFX.mX[289UL] =
    Accumalator_Module_Two_Battery_Table_Based22_electricalModel_v -
    ((((((((-t5361->mX.mX[1297UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge +
          t5361->mX.mX[1298UL]) + t5361->mX.mX[1299UL]) + t5361->mX.mX[1300UL])
       + t5361->mX.mX[1301UL]) + t5361->mX.mX[1302UL]) + zc_int547);
  out->mFX.mX[290UL] =
    Accumalator_Module_Five1_Battery_Table_Based4_electricalModel_v -
    ((((((t5361->mX.mX[241UL] * zc_int159 + t5361->mX.mX[377UL]) + t5361->mX.mX
         [378UL]) + t5361->mX.mX[379UL]) + t5361->mX.mX[380UL]) + t5361->mX.mX
      [381UL]) + zc_int160);
  out->mFX.mX[291UL] =
    Accumalator_Module_Two_Battery_Table_Based23_electricalModel_v -
    ((((((((-t5361->mX.mX[1304UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based22_stateOfCharge +
          t5361->mX.mX[1305UL]) + t5361->mX.mX[1306UL]) + t5361->mX.mX[1307UL])
       + t5361->mX.mX[1308UL]) + t5361->mX.mX[1309UL]) + zc_int550);
  out->mFX.mX[292UL] =
    Accumalator_Module_Five1_Battery_Table_Based15_electricalModel_v -
    ((((((t5361->mX.mX[53UL] *
          Accumalator_Module_Five1_Battery_Table_Based7_electricalModel_xVint
          + t5361->mX.mX[383UL]) + t5361->mX.mX[384UL]) + t5361->mX.mX[385UL]) +
       t5361->mX.mX[386UL]) + t5361->mX.mX[387UL]) + zc_int163);
  out->mFX.mX[293UL] =
    Accumalator_Module_Two_Battery_Table_Based23_electricalModel_v -
    ((((((t5361->mX.mX[1304UL] * zc_int552 + t5361->mX.mX[1311UL]) +
         t5361->mX.mX[1312UL]) + t5361->mX.mX[1313UL]) + t5361->mX.mX[1314UL]) +
      t5361->mX.mX[1315UL]) + intrm_sf_mf_184);
  out->mFX.mX[294UL] =
    Accumalator_Module_Five1_Battery_Table_Based17_electricalModel_v -
    ((((((t5361->mX.mX[69UL] *
          Accumalator_Module_Five1_Battery_Table_Based8_stateOfCharge +
          t5361->mX.mX[389UL]) + t5361->mX.mX[390UL]) + t5361->mX.mX[391UL]) +
       t5361->mX.mX[392UL]) + t5361->mX.mX[393UL]) + intrm_sf_mf_55);
  out->mFX.mX[295UL] =
    Accumalator_Module_Two_Battery_Table_Based20_electricalModel_v -
    ((((((t5361->mX.mX[1279UL] *
          Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge +
          t5361->mX.mX[1317UL]) + t5361->mX.mX[1318UL]) + t5361->mX.mX[1319UL])
       + t5361->mX.mX[1320UL]) + t5361->mX.mX[1321UL]) + zc_int556);
  out->mFX.mX[296UL] =
    Accumalator_Module_One1_Battery_Table_Based1_electricalModel_v -
    ((((((((-t5361->mX.mX[395UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Five1_Battery_Table_Based9_electricalModel_xVint
          + t5361->mX.mX[398UL]) + t5361->mX.mX[399UL]) + t5361->mX.mX[400UL]) +
       t5361->mX.mX[401UL]) + t5361->mX.mX[402UL]) + zc_int169);
  out->mFX.mX[297UL] =
    Accumalator_Module_Two_Battery_Table_Based26_electricalModel_v -
    ((((((((-t5361->mX.mX[1323UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge +
          t5361->mX.mX[1325UL]) + t5361->mX.mX[1326UL]) + t5361->mX.mX[1327UL])
       + t5361->mX.mX[1328UL]) + t5361->mX.mX[1329UL]) + intrm_sf_mf_186);
  out->mFX.mX[298UL] =
    Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_v -
    ((((((t5361->mX.mX[803UL] *
          Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_xVint
          + t5361->mX.mX[867UL]) + t5361->mX.mX[868UL]) + t5361->mX.mX[869UL]) +
       t5361->mX.mX[870UL]) + t5361->mX.mX[871UL]) + intrm_sf_mf_121);
  out->mFX.mX[299UL] =
    Accumalator_Module_four_Battery_Table_Based34_electricalModel_v -
    ((((((((-t5361->mX.mX[1776UL] + t5361->mX.mX[2UL]) + t5361->mX.mX[3UL]) *
          Accumalator_Module_four_Battery_Table_Based33_stateOfCharge +
          t5361->mX.mX[1777UL]) + t5361->mX.mX[1778UL]) + t5361->mX.mX[1779UL])
       + t5361->mX.mX[1780UL]) + t5361->mX.mX[1781UL]) + intrm_sf_mf_251);
  out->mFX.mX[300UL] =
    Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_v -
    ((((((t5361->mX.mX[852UL] *
          Accumalator_Module_Three1_Battery_Table_Based18_electricalModel_xVint
          + t5361->mX.mX[873UL]) + t5361->mX.mX[874UL]) + t5361->mX.mX[875UL]) +
       t5361->mX.mX[876UL]) + t5361->mX.mX[877UL]) + zc_int367);
  (void)sys;
  (void)out;
  return 0;
}
