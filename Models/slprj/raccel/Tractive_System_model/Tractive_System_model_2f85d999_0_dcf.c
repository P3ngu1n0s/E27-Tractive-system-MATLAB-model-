/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Tractive_System_model/Solver Configuration1'.
 */

#include "nesl_rtw_partitioning.h"
#include "Tractive_System_model_2f85d999_0_dc_sys_struct.h"
#include "Tractive_System_model_2f85d999_0_dcf.h"
#include "Tractive_System_model_2f85d999_0_dc.h"
#include "Tractive_System_model_2f85d999_0_dc_externals.h"
#include "Tractive_System_model_2f85d999_0_dc_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Tractive_System_model_2f85d999_0_dcf(const DifferentialClump *sys, const
  NeDynamicSystemInput *t8449, DcMethodOutput *out)
{
  static real_T _cg_const_8[80] = { 0.007451, 0.003783, 0.002841, 0.003185,
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

  static real_T _cg_const_9[40] = { 0.040653, 0.026828, 0.019744, 0.012414,
    0.007363, 0.005882, 0.006739, 0.008222, 0.008985, 0.004704, 0.04799,
    0.033189, 0.025225, 0.014827, 0.008356, 0.007703, 0.007058, 0.004287,
    0.007821, 0.003171, 0.046915, 0.032279, 0.021211, 0.017004, 0.01135,
    0.006532, 0.006772, 0.009601, 0.008932, 0.002422, 0.044404, 0.030363,
    0.019613, 0.016763, 0.010173, 0.005526, 0.005603, 0.005034, 0.006662,
    0.004036 };

  static real_T _cg_const_1[10] = { 0.1, 0.188889, 0.277778, 0.366667, 0.455556,
    0.544444, 0.633333, 0.722222, 0.811111, 0.9 };

  static real_T _cg_const_2[4] = { 303.15, 305.65, 308.15, 311.15 };

  ETTSf3049b48 t101;
  ETTSf3049b48 t110;
  ETTSf3049b48 t119;
  ETTSf3049b48 t125;
  ETTSf3049b48 t149;
  ETTSf3049b48 t151;
  ETTSf3049b48 t161;
  ETTSf3049b48 t162;
  ETTSf3049b48 t186;
  ETTSf3049b48 t187;
  ETTSf3049b48 t19;
  ETTSf3049b48 t204;
  ETTSf3049b48 t207;
  ETTSf3049b48 t224;
  ETTSf3049b48 t273;
  ETTSf3049b48 t57;
  ETTSf3049b48 t61;
  ETTSf3049b48 t62;
  ETTSf3049b48 t75;
  ETTSf3049b48 t87;
  real_T nonscalar11[80];
  real_T nonscalar12[40];
  real_T nonscalar9[40];
  real_T nonscalar1[10];
  real_T nonscalar2[4];
  real_T t2590[1];
  real_T t3510[1];
  real_T Accumalator_Module_Five1_Battery_Table_Based10_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based11_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based13_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based15_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based16_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based17_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based21_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based22_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based23_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based26_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based28_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based31_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based33_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based37_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based39_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based42_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based44_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based47_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based4_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based52_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based53_electricalModel_i;
  real_T Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge;
  real_T Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based10_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based11_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based11_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based12_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based13_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based15_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based16_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based17_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based1_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based20_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based21_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based22_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based23_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based26_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based2_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based30_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based30_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based31_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based31_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based33_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based34_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based35_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based36_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based37_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based41_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based41_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based42_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based43_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based44_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based47_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based4_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based51_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based52_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based53_electricalModel_i;
  real_T Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge;
  real_T Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based12_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based13_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based16_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based20_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based21_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based23_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based29_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based31_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based32_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based33_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based34_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based36_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based37_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based41_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based41_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based42_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based44_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based47_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based4_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based51_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based52_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based53_electricalModel_i;
  real_T Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge;
  real_T Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based10_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based11_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based12_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based13_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based14_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based15_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based16_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based17_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based1_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based20_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based21_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based22_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based23_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based26_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based2_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based2_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based30_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based31_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based32_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based33_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based34_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based38_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based39_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based41_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based42_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based43_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based44_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based47_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based4_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based51_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based52_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based53_electricalModel_i;
  real_T Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge;
  real_T Accumalator_Module_Two_Battery_Table_Based59_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based10_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based11_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based12_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based13_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based14_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based15_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based16_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based16_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based17_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based17_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based19_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based1_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based20_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based21_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based22_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based23_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based23_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based26_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based28_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based29_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based2_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based30_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based31_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based32_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based33_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based34_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based35_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based37_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based41_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based42_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based43_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based44_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based45_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based47_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based49_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based4_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based4_stateOfCharge;
  real_T Accumalator_Module_four_Battery_Table_Based51_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based52_electricalModel_i;
  real_T Accumalator_Module_four_Battery_Table_Based53_electricalModel_i;
  real_T Three_phase_inverter_Capacitor_i;
  real_T intrm_sf_mf_1003;
  real_T intrm_sf_mf_1006;
  real_T intrm_sf_mf_1012;
  real_T intrm_sf_mf_1021;
  real_T intrm_sf_mf_1027;
  real_T intrm_sf_mf_1030;
  real_T intrm_sf_mf_1042;
  real_T intrm_sf_mf_1048;
  real_T intrm_sf_mf_1063;
  real_T intrm_sf_mf_1069;
  real_T intrm_sf_mf_1075;
  real_T intrm_sf_mf_1093;
  real_T intrm_sf_mf_1105;
  real_T intrm_sf_mf_1111;
  real_T intrm_sf_mf_1114;
  real_T intrm_sf_mf_1129;
  real_T intrm_sf_mf_1135;
  real_T intrm_sf_mf_1144;
  real_T intrm_sf_mf_1159;
  real_T intrm_sf_mf_1165;
  real_T intrm_sf_mf_1177;
  real_T intrm_sf_mf_1189;
  real_T intrm_sf_mf_1195;
  real_T intrm_sf_mf_1207;
  real_T intrm_sf_mf_1210;
  real_T intrm_sf_mf_1216;
  real_T intrm_sf_mf_1225;
  real_T intrm_sf_mf_1231;
  real_T intrm_sf_mf_1249;
  real_T intrm_sf_mf_1261;
  real_T intrm_sf_mf_1282;
  real_T intrm_sf_mf_1285;
  real_T intrm_sf_mf_1288;
  real_T intrm_sf_mf_1309;
  real_T intrm_sf_mf_1315;
  real_T intrm_sf_mf_1321;
  real_T intrm_sf_mf_1327;
  real_T intrm_sf_mf_1330;
  real_T intrm_sf_mf_1333;
  real_T intrm_sf_mf_1339;
  real_T intrm_sf_mf_1345;
  real_T intrm_sf_mf_1357;
  real_T intrm_sf_mf_1369;
  real_T intrm_sf_mf_1378;
  real_T intrm_sf_mf_1381;
  real_T intrm_sf_mf_1387;
  real_T intrm_sf_mf_1399;
  real_T intrm_sf_mf_1405;
  real_T intrm_sf_mf_1411;
  real_T intrm_sf_mf_1429;
  real_T intrm_sf_mf_1435;
  real_T intrm_sf_mf_1453;
  real_T intrm_sf_mf_1462;
  real_T intrm_sf_mf_1489;
  real_T intrm_sf_mf_1504;
  real_T intrm_sf_mf_1510;
  real_T intrm_sf_mf_1522;
  real_T intrm_sf_mf_1525;
  real_T intrm_sf_mf_1534;
  real_T intrm_sf_mf_1549;
  real_T intrm_sf_mf_1552;
  real_T intrm_sf_mf_1555;
  real_T intrm_sf_mf_1558;
  real_T intrm_sf_mf_1567;
  real_T intrm_sf_mf_1576;
  real_T intrm_sf_mf_1585;
  real_T intrm_sf_mf_1588;
  real_T intrm_sf_mf_1600;
  real_T intrm_sf_mf_1606;
  real_T intrm_sf_mf_1612;
  real_T intrm_sf_mf_1615;
  real_T intrm_sf_mf_1618;
  real_T intrm_sf_mf_1630;
  real_T intrm_sf_mf_1633;
  real_T intrm_sf_mf_1639;
  real_T intrm_sf_mf_1642;
  real_T intrm_sf_mf_1648;
  real_T intrm_sf_mf_1669;
  real_T intrm_sf_mf_1675;
  real_T intrm_sf_mf_1681;
  real_T intrm_sf_mf_1687;
  real_T intrm_sf_mf_1690;
  real_T intrm_sf_mf_1699;
  real_T intrm_sf_mf_1702;
  real_T intrm_sf_mf_1711;
  real_T intrm_sf_mf_1717;
  real_T intrm_sf_mf_1732;
  real_T intrm_sf_mf_1738;
  real_T intrm_sf_mf_1747;
  real_T intrm_sf_mf_1762;
  real_T intrm_sf_mf_1768;
  real_T intrm_sf_mf_1771;
  real_T intrm_sf_mf_1777;
  real_T intrm_sf_mf_1780;
  real_T intrm_sf_mf_1786;
  real_T intrm_sf_mf_1795;
  real_T intrm_sf_mf_1798;
  real_T intrm_sf_mf_1804;
  real_T intrm_sf_mf_1807;
  real_T intrm_sf_mf_1810;
  real_T intrm_sf_mf_1819;
  real_T intrm_sf_mf_1825;
  real_T intrm_sf_mf_1843;
  real_T intrm_sf_mf_1849;
  real_T intrm_sf_mf_1852;
  real_T intrm_sf_mf_1861;
  real_T intrm_sf_mf_1867;
  real_T intrm_sf_mf_1870;
  real_T intrm_sf_mf_1873;
  real_T intrm_sf_mf_1879;
  real_T intrm_sf_mf_1885;
  real_T intrm_sf_mf_1891;
  real_T intrm_sf_mf_1897;
  real_T intrm_sf_mf_1900;
  real_T intrm_sf_mf_1903;
  real_T intrm_sf_mf_1906;
  real_T intrm_sf_mf_1909;
  real_T intrm_sf_mf_1915;
  real_T intrm_sf_mf_1930;
  real_T intrm_sf_mf_1939;
  real_T intrm_sf_mf_1948;
  real_T intrm_sf_mf_283;
  real_T intrm_sf_mf_292;
  real_T intrm_sf_mf_295;
  real_T intrm_sf_mf_298;
  real_T intrm_sf_mf_304;
  real_T intrm_sf_mf_310;
  real_T intrm_sf_mf_313;
  real_T intrm_sf_mf_316;
  real_T intrm_sf_mf_337;
  real_T intrm_sf_mf_340;
  real_T intrm_sf_mf_349;
  real_T intrm_sf_mf_355;
  real_T intrm_sf_mf_361;
  real_T intrm_sf_mf_370;
  real_T intrm_sf_mf_373;
  real_T intrm_sf_mf_376;
  real_T intrm_sf_mf_382;
  real_T intrm_sf_mf_388;
  real_T intrm_sf_mf_397;
  real_T intrm_sf_mf_406;
  real_T intrm_sf_mf_421;
  real_T intrm_sf_mf_439;
  real_T intrm_sf_mf_442;
  real_T intrm_sf_mf_445;
  real_T intrm_sf_mf_448;
  real_T intrm_sf_mf_451;
  real_T intrm_sf_mf_454;
  real_T intrm_sf_mf_460;
  real_T intrm_sf_mf_463;
  real_T intrm_sf_mf_466;
  real_T intrm_sf_mf_469;
  real_T intrm_sf_mf_475;
  real_T intrm_sf_mf_490;
  real_T intrm_sf_mf_502;
  real_T intrm_sf_mf_511;
  real_T intrm_sf_mf_514;
  real_T intrm_sf_mf_517;
  real_T intrm_sf_mf_520;
  real_T intrm_sf_mf_523;
  real_T intrm_sf_mf_532;
  real_T intrm_sf_mf_538;
  real_T intrm_sf_mf_541;
  real_T intrm_sf_mf_553;
  real_T intrm_sf_mf_559;
  real_T intrm_sf_mf_565;
  real_T intrm_sf_mf_571;
  real_T intrm_sf_mf_589;
  real_T intrm_sf_mf_595;
  real_T intrm_sf_mf_598;
  real_T intrm_sf_mf_601;
  real_T intrm_sf_mf_607;
  real_T intrm_sf_mf_619;
  real_T intrm_sf_mf_631;
  real_T intrm_sf_mf_634;
  real_T intrm_sf_mf_643;
  real_T intrm_sf_mf_655;
  real_T intrm_sf_mf_670;
  real_T intrm_sf_mf_679;
  real_T intrm_sf_mf_691;
  real_T intrm_sf_mf_694;
  real_T intrm_sf_mf_700;
  real_T intrm_sf_mf_706;
  real_T intrm_sf_mf_709;
  real_T intrm_sf_mf_715;
  real_T intrm_sf_mf_718;
  real_T intrm_sf_mf_721;
  real_T intrm_sf_mf_727;
  real_T intrm_sf_mf_733;
  real_T intrm_sf_mf_736;
  real_T intrm_sf_mf_739;
  real_T intrm_sf_mf_742;
  real_T intrm_sf_mf_745;
  real_T intrm_sf_mf_748;
  real_T intrm_sf_mf_757;
  real_T intrm_sf_mf_772;
  real_T intrm_sf_mf_778;
  real_T intrm_sf_mf_781;
  real_T intrm_sf_mf_793;
  real_T intrm_sf_mf_808;
  real_T intrm_sf_mf_811;
  real_T intrm_sf_mf_820;
  real_T intrm_sf_mf_823;
  real_T intrm_sf_mf_835;
  real_T intrm_sf_mf_850;
  real_T intrm_sf_mf_853;
  real_T intrm_sf_mf_856;
  real_T intrm_sf_mf_862;
  real_T intrm_sf_mf_865;
  real_T intrm_sf_mf_880;
  real_T intrm_sf_mf_898;
  real_T intrm_sf_mf_913;
  real_T intrm_sf_mf_925;
  real_T intrm_sf_mf_928;
  real_T intrm_sf_mf_931;
  real_T intrm_sf_mf_937;
  real_T intrm_sf_mf_940;
  real_T intrm_sf_mf_943;
  real_T intrm_sf_mf_952;
  real_T intrm_sf_mf_958;
  real_T intrm_sf_mf_979;
  real_T intrm_sf_mf_988;
  real_T t6730;
  real_T t6733;
  real_T t6738;
  real_T t6739;
  real_T t6740;
  real_T t718;
  real_T t8405;
  real_T t8448;
  real_T zc_int1130;
  real_T zc_int1131;
  real_T zc_int1137;
  real_T zc_int1140;
  real_T zc_int1146;
  real_T zc_int1148;
  real_T zc_int1149;
  real_T zc_int1152;
  real_T zc_int1154;
  real_T zc_int1158;
  real_T zc_int1160;
  real_T zc_int1163;
  real_T zc_int1166;
  real_T zc_int1169;
  real_T zc_int1170;
  real_T zc_int1176;
  real_T zc_int1179;
  real_T zc_int1182;
  real_T zc_int1184;
  real_T zc_int1188;
  real_T zc_int1191;
  real_T zc_int1193;
  real_T zc_int1194;
  real_T zc_int1196;
  real_T zc_int1200;
  real_T zc_int1203;
  real_T zc_int1215;
  real_T zc_int1226;
  real_T zc_int1227;
  real_T zc_int1230;
  real_T zc_int1233;
  real_T zc_int1235;
  real_T zc_int1236;
  real_T zc_int1239;
  real_T zc_int1251;
  real_T zc_int1254;
  real_T zc_int1259;
  real_T zc_int1260;
  real_T zc_int1262;
  real_T zc_int1265;
  real_T zc_int1268;
  real_T zc_int1275;
  real_T zc_int1278;
  real_T zc_int1280;
  real_T zc_int1283;
  real_T zc_int1289;
  real_T zc_int1292;
  real_T zc_int1293;
  real_T zc_int1295;
  real_T zc_int1298;
  real_T zc_int1299;
  real_T zc_int1305;
  real_T zc_int1310;
  real_T zc_int1311;
  real_T zc_int1316;
  real_T zc_int1317;
  real_T zc_int1319;
  real_T zc_int1320;
  real_T zc_int1323;
  real_T zc_int1329;
  real_T zc_int1331;
  real_T zc_int1335;
  real_T zc_int1338;
  real_T zc_int1343;
  real_T zc_int1352;
  real_T zc_int1362;
  real_T zc_int1368;
  real_T zc_int1370;
  real_T zc_int1371;
  real_T zc_int1374;
  real_T zc_int1380;
  real_T zc_int1386;
  real_T zc_int1388;
  real_T zc_int1389;
  real_T zc_int1394;
  real_T zc_int1395;
  real_T zc_int1401;
  real_T zc_int1403;
  real_T zc_int1406;
  real_T zc_int1407;
  real_T zc_int1409;
  real_T zc_int1410;
  real_T zc_int1416;
  real_T zc_int1421;
  real_T zc_int1422;
  real_T zc_int1424;
  real_T zc_int1425;
  real_T zc_int1428;
  real_T zc_int1430;
  real_T zc_int1431;
  real_T zc_int1433;
  real_T zc_int1434;
  real_T zc_int1437;
  real_T zc_int1439;
  real_T zc_int1440;
  real_T zc_int1446;
  real_T zc_int1454;
  real_T zc_int1460;
  real_T zc_int1461;
  real_T zc_int1464;
  real_T zc_int1467;
  real_T zc_int1470;
  real_T zc_int1472;
  real_T zc_int1473;
  real_T zc_int1475;
  real_T zc_int1478;
  real_T zc_int1479;
  real_T zc_int1482;
  real_T zc_int1485;
  real_T zc_int1494;
  real_T zc_int1499;
  real_T zc_int1505;
  real_T zc_int1512;
  real_T zc_int1514;
  real_T zc_int1515;
  real_T zc_int1520;
  real_T zc_int1523;
  real_T zc_int1527;
  real_T zc_int1530;
  real_T zc_int1532;
  real_T zc_int1536;
  real_T zc_int1545;
  real_T zc_int1547;
  real_T zc_int1548;
  real_T zc_int1553;
  real_T zc_int1556;
  real_T zc_int1557;
  real_T zc_int1560;
  real_T zc_int1562;
  real_T zc_int1563;
  real_T zc_int1565;
  real_T zc_int1572;
  real_T zc_int1577;
  real_T zc_int1578;
  real_T zc_int1580;
  real_T zc_int1583;
  real_T zc_int1587;
  real_T zc_int1589;
  real_T zc_int1593;
  real_T zc_int1596;
  real_T zc_int1598;
  real_T zc_int1605;
  real_T zc_int1607;
  real_T zc_int1608;
  real_T zc_int1610;
  real_T zc_int1614;
  real_T zc_int1616;
  real_T zc_int1620;
  real_T zc_int1622;
  real_T zc_int1623;
  real_T zc_int1625;
  real_T zc_int1626;
  real_T zc_int1632;
  real_T zc_int1634;
  real_T zc_int1635;
  real_T zc_int1638;
  real_T zc_int1643;
  real_T zc_int1658;
  real_T zc_int1661;
  real_T zc_int1662;
  real_T zc_int1668;
  real_T zc_int1673;
  real_T zc_int1674;
  real_T zc_int1683;
  real_T zc_int1694;
  real_T zc_int1695;
  real_T zc_int1698;
  real_T zc_int1700;
  real_T zc_int1707;
  real_T zc_int1709;
  real_T zc_int1710;
  real_T zc_int1715;
  real_T zc_int1716;
  real_T zc_int1719;
  real_T zc_int1722;
  real_T zc_int1725;
  real_T zc_int1728;
  real_T zc_int1730;
  real_T zc_int1734;
  real_T zc_int1736;
  real_T zc_int1737;
  real_T zc_int1740;
  real_T zc_int1743;
  real_T zc_int1745;
  real_T zc_int1746;
  real_T zc_int1751;
  real_T zc_int1752;
  real_T zc_int1755;
  real_T zc_int1757;
  real_T zc_int1758;
  real_T zc_int1760;
  real_T zc_int1767;
  real_T zc_int1772;
  real_T zc_int1773;
  real_T zc_int1776;
  real_T zc_int1782;
  real_T zc_int1785;
  real_T zc_int1788;
  real_T zc_int1791;
  real_T zc_int1797;
  real_T zc_int1800;
  real_T zc_int1805;
  real_T zc_int1809;
  real_T zc_int1812;
  real_T zc_int1815;
  real_T zc_int1817;
  real_T zc_int1818;
  real_T zc_int1826;
  real_T zc_int1833;
  real_T zc_int1835;
  real_T zc_int1839;
  real_T zc_int1841;
  real_T zc_int1847;
  real_T zc_int1848;
  real_T zc_int1850;
  real_T zc_int1851;
  real_T zc_int1854;
  real_T zc_int1857;
  real_T zc_int1863;
  real_T zc_int1865;
  real_T zc_int1866;
  real_T zc_int1869;
  real_T zc_int1878;
  real_T zc_int1881;
  real_T zc_int1887;
  real_T zc_int1893;
  real_T zc_int1895;
  real_T zc_int1901;
  real_T zc_int1902;
  real_T zc_int1904;
  real_T zc_int1905;
  real_T zc_int1907;
  real_T zc_int1910;
  real_T zc_int1914;
  real_T zc_int1919;
  real_T zc_int1925;
  real_T zc_int1931;
  real_T zc_int1934;
  real_T zc_int1943;
  real_T zc_int1946;
  real_T zc_int1947;
  real_T zc_int1949;
  real_T zc_int1950;
  real_T zc_int1953;
  real_T zc_int1955;
  real_T zc_int1958;
  real_T zc_int1959;
  real_T zc_int1962;
  real_T zc_int1964;
  real_T zc_int1965;
  size_t t4336[1];
  size_t t843[1];
  size_t t845[1];
  size_t t5749;
  size_t t5952;
  size_t t6029;
  t8448 = (-t8449->mX.mX[1UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
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
  Accumalator_Module_Five1_Battery_Table_Based10_electricalModel_i =
    (-t8449->mX.mX[15UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based11_electricalModel_i =
    (-t8449->mX.mX[27UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_i =
    (-t8449->mX.mX[39UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based13_electricalModel_i =
    (-t8449->mX.mX[51UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based15_electricalModel_i =
    (-t8449->mX.mX[71UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based16_electricalModel_i =
    (-t8449->mX.mX[82UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based17_electricalModel_i =
    (-t8449->mX.mX[93UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_i =
    (-t8449->mX.mX[121UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_i =
    (-t8449->mX.mX[131UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based21_electricalModel_i =
    (-t8449->mX.mX[143UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based22_electricalModel_i =
    (-t8449->mX.mX[155UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based23_electricalModel_i =
    (-t8449->mX.mX[165UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based26_electricalModel_i =
    (-t8449->mX.mX[193UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_i =
    (-t8449->mX.mX[240UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based31_electricalModel_i =
    (-t8449->mX.mX[252UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based33_electricalModel_i =
    (-t8449->mX.mX[273UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_i =
    (-t8449->mX.mX[283UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based37_electricalModel_i =
    (-t8449->mX.mX[311UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based4_electricalModel_i =
    (-t8449->mX.mX[340UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_i =
    (-t8449->mX.mX[359UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based42_electricalModel_i =
    (-t8449->mX.mX[371UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_i =
    (-t8449->mX.mX[383UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based44_electricalModel_i =
    (-t8449->mX.mX[393UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based47_electricalModel_i =
    (-t8449->mX.mX[421UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_i =
    (-t8449->mX.mX[468UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based52_electricalModel_i =
    (-t8449->mX.mX[479UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Five1_Battery_Table_Based53_electricalModel_i =
    (-t8449->mX.mX[490UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based1_electricalModel_i =
    (-t8449->mX.mX[563UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based10_electricalModel_i =
    (-t8449->mX.mX[575UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based11_electricalModel_i =
    (-t8449->mX.mX[587UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based12_electricalModel_i =
    (-t8449->mX.mX[599UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based13_electricalModel_i =
    (-t8449->mX.mX[611UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based15_electricalModel_i =
    (-t8449->mX.mX[631UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based16_electricalModel_i =
    (-t8449->mX.mX[642UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based17_electricalModel_i =
    (-t8449->mX.mX[653UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based2_electricalModel_i =
    (-t8449->mX.mX[681UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based20_electricalModel_i =
    (-t8449->mX.mX[691UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based21_electricalModel_i =
    (-t8449->mX.mX[703UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based22_electricalModel_i =
    (-t8449->mX.mX[715UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based23_electricalModel_i =
    (-t8449->mX.mX[725UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based26_electricalModel_i =
    (-t8449->mX.mX[753UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based30_electricalModel_i =
    (-t8449->mX.mX[800UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based31_electricalModel_i =
    (-t8449->mX.mX[812UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based33_electricalModel_i =
    (-t8449->mX.mX[833UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based34_electricalModel_i =
    (-t8449->mX.mX[843UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based37_electricalModel_i =
    (-t8449->mX.mX[871UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based4_electricalModel_i =
    (-t8449->mX.mX[900UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based41_electricalModel_i =
    (-t8449->mX.mX[919UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based42_electricalModel_i =
    (-t8449->mX.mX[931UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based43_electricalModel_i =
    (-t8449->mX.mX[943UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based44_electricalModel_i =
    (-t8449->mX.mX[953UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based47_electricalModel_i =
    (-t8449->mX.mX[981UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based51_electricalModel_i =
    (-t8449->mX.mX[1028UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based52_electricalModel_i =
    (-t8449->mX.mX[1045UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_One1_Battery_Table_Based53_electricalModel_i =
    (-t8449->mX.mX[1057UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_i =
    (-t8449->mX.mX[1130UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_i =
    (-t8449->mX.mX[1142UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_i =
    (-t8449->mX.mX[1154UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based12_electricalModel_i =
    (-t8449->mX.mX[1166UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based13_electricalModel_i =
    (-t8449->mX.mX[1178UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_i =
    (-t8449->mX.mX[1198UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_i =
    (-t8449->mX.mX[1209UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_i =
    (-t8449->mX.mX[1220UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  t2590[0UL] = t8449->mX.mX[1219UL] * 5.5555555555555558E-5;
  Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_i =
    (-t8449->mX.mX[1248UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based20_electricalModel_i =
    (-t8449->mX.mX[1258UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based21_electricalModel_i =
    (-t8449->mX.mX[1270UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_i =
    (-t8449->mX.mX[1282UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based23_electricalModel_i =
    (-t8449->mX.mX[1292UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_i =
    (-t8449->mX.mX[1320UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_i =
    (-t8449->mX.mX[1367UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based31_electricalModel_i =
    (-t8449->mX.mX[1379UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based33_electricalModel_i =
    (-t8449->mX.mX[1400UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based34_electricalModel_i =
    (-t8449->mX.mX[1410UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based37_electricalModel_i =
    (-t8449->mX.mX[1438UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based4_electricalModel_i =
    (-t8449->mX.mX[1467UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based41_electricalModel_i =
    (-t8449->mX.mX[1486UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based42_electricalModel_i =
    (-t8449->mX.mX[1498UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_i =
    (-t8449->mX.mX[1510UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based44_electricalModel_i =
    (-t8449->mX.mX[1520UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_i =
    (-t8449->mX.mX[1548UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based51_electricalModel_i =
    (-t8449->mX.mX[1595UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based52_electricalModel_i =
    (-t8449->mX.mX[1606UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Three1_Battery_Table_Based53_electricalModel_i =
    (-t8449->mX.mX[1618UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based1_electricalModel_i = (-t8449->
    mX.mX[1691UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based10_electricalModel_i =
    (-t8449->mX.mX[1703UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based11_electricalModel_i =
    (-t8449->mX.mX[1715UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based12_electricalModel_i =
    (-t8449->mX.mX[1727UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based13_electricalModel_i =
    (-t8449->mX.mX[1739UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based15_electricalModel_i =
    (-t8449->mX.mX[1759UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based16_electricalModel_i =
    (-t8449->mX.mX[1770UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based17_electricalModel_i =
    (-t8449->mX.mX[1781UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based2_electricalModel_i = (-t8449->
    mX.mX[1809UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based20_electricalModel_i =
    (-t8449->mX.mX[1819UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based21_electricalModel_i =
    (-t8449->mX.mX[1831UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based22_electricalModel_i =
    (-t8449->mX.mX[1843UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based23_electricalModel_i =
    (-t8449->mX.mX[1853UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based26_electricalModel_i =
    (-t8449->mX.mX[1881UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based30_electricalModel_i =
    (-t8449->mX.mX[1928UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based31_electricalModel_i =
    (-t8449->mX.mX[1940UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based33_electricalModel_i =
    (-t8449->mX.mX[1961UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based34_electricalModel_i =
    (-t8449->mX.mX[1971UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based4_electricalModel_i = (-t8449->
    mX.mX[2027UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based41_electricalModel_i =
    (-t8449->mX.mX[2046UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based42_electricalModel_i =
    (-t8449->mX.mX[2058UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based43_electricalModel_i =
    (-t8449->mX.mX[2070UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based44_electricalModel_i =
    (-t8449->mX.mX[2080UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based47_electricalModel_i =
    (-t8449->mX.mX[2108UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based51_electricalModel_i =
    (-t8449->mX.mX[2155UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based52_electricalModel_i =
    (-t8449->mX.mX[2165UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_Two_Battery_Table_Based53_electricalModel_i =
    (-t8449->mX.mX[2176UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based1_electricalModel_i =
    (-t8449->mX.mX[2249UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based10_electricalModel_i =
    (-t8449->mX.mX[2261UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based11_electricalModel_i =
    (-t8449->mX.mX[2273UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based12_electricalModel_i =
    (-t8449->mX.mX[2285UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based13_electricalModel_i =
    (-t8449->mX.mX[2297UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based15_electricalModel_i =
    (-t8449->mX.mX[2317UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based16_electricalModel_i =
    (-t8449->mX.mX[2328UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based17_electricalModel_i =
    (-t8449->mX.mX[2339UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based2_electricalModel_i =
    (-t8449->mX.mX[2367UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based20_electricalModel_i =
    (-t8449->mX.mX[2377UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based21_electricalModel_i =
    (-t8449->mX.mX[2389UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based22_electricalModel_i =
    (-t8449->mX.mX[2401UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based23_electricalModel_i =
    (-t8449->mX.mX[2411UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based26_electricalModel_i =
    (-t8449->mX.mX[2439UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based30_electricalModel_i =
    (-t8449->mX.mX[2486UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based31_electricalModel_i =
    (-t8449->mX.mX[2498UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based33_electricalModel_i =
    (-t8449->mX.mX[2519UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based34_electricalModel_i =
    (-t8449->mX.mX[2529UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based37_electricalModel_i =
    (-t8449->mX.mX[2557UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based4_electricalModel_i =
    (-t8449->mX.mX[2586UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based41_electricalModel_i =
    (-t8449->mX.mX[2605UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based42_electricalModel_i =
    (-t8449->mX.mX[2617UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based43_electricalModel_i =
    (-t8449->mX.mX[2629UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based44_electricalModel_i =
    (-t8449->mX.mX[2639UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based47_electricalModel_i =
    (-t8449->mX.mX[2667UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based51_electricalModel_i =
    (-t8449->mX.mX[2714UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based52_electricalModel_i =
    (-t8449->mX.mX[2724UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  Accumalator_Module_four_Battery_Table_Based53_electricalModel_i =
    (-t8449->mX.mX[2735UL] + t8449->mX.mX[2UL]) + t8449->mX.mX[3UL];
  intrm_sf_mf_1003 = t8449->mX.mX[2813UL] * 10.0 - 1.5707963267948966;
  intrm_sf_mf_1021 = cos(intrm_sf_mf_1003) * 0.66666666666666663;
  intrm_sf_mf_1027 = cos(intrm_sf_mf_1003 - 2.0943951023931953) *
    0.66666666666666663;
  t6738 = cos(intrm_sf_mf_1003 + 2.0943951023931953) * 0.66666666666666663;
  t6739 = -sin(intrm_sf_mf_1003) * 0.66666666666666663;
  t6740 = -sin(intrm_sf_mf_1003 - 2.0943951023931953) * 0.66666666666666663;
  zc_int1512 = -sin(intrm_sf_mf_1003 + 2.0943951023931953) * 0.66666666666666663;
  t6733 = t8449->mX.mX[2811UL] - t8449->mX.mX[2814UL] * 0.012;
  Three_phase_inverter_Capacitor_i = t8449->mX.mX[2812UL] - t8449->mX.mX[2815UL]
    * 0.012;
  intrm_sf_mf_1003 = t8449->mX.mX[2810UL] - t8449->mX.mX[2816UL] * 0.012;
  t6730 = (intrm_sf_mf_1021 * t6733 + intrm_sf_mf_1027 *
           Three_phase_inverter_Capacitor_i) + t6738 * intrm_sf_mf_1003;
  Three_phase_inverter_Capacitor_i = (t6739 * t6733 + t6740 *
    Three_phase_inverter_Capacitor_i) + zc_int1512 * intrm_sf_mf_1003;
  out->mF.mX[1962UL] = ((((((-t8449->mX.mX[2UL] - t8449->mX.mX[3UL]) -
    t8449->mX.mX[1032UL]) - t8449->mX.mX[1034UL]) - t8449->mX.mX[1036UL]) +
    t8449->mX.mX[1031UL]) + t8449->mX.mX[1033UL]) + t8449->mX.mX[1035UL];
  nonscalar9[0] = _cg_const_3[0];
  nonscalar9[1] = _cg_const_3[1];
  nonscalar9[2] = _cg_const_3[2];
  nonscalar9[3] = _cg_const_3[3];
  nonscalar9[4] = _cg_const_3[4];
  nonscalar9[5] = _cg_const_3[5];
  nonscalar9[6] = _cg_const_3[6];
  nonscalar9[7] = _cg_const_3[7];
  nonscalar9[8] = _cg_const_3[8];
  nonscalar9[9] = _cg_const_3[9];
  nonscalar9[10] = _cg_const_3[10];
  nonscalar9[11] = _cg_const_3[11];
  nonscalar9[12] = _cg_const_3[12];
  nonscalar9[13] = _cg_const_3[13];
  nonscalar9[14] = _cg_const_3[14];
  nonscalar9[15] = _cg_const_3[15];
  nonscalar9[16] = _cg_const_3[16];
  nonscalar9[17] = _cg_const_3[17];
  nonscalar9[18] = _cg_const_3[18];
  nonscalar9[19] = _cg_const_3[19];
  nonscalar9[20] = _cg_const_3[20];
  nonscalar9[21] = _cg_const_3[21];
  nonscalar9[22] = _cg_const_3[22];
  nonscalar9[23] = _cg_const_3[23];
  nonscalar9[24] = _cg_const_3[24];
  nonscalar9[25] = _cg_const_3[25];
  nonscalar9[26] = _cg_const_3[26];
  nonscalar9[27] = _cg_const_3[27];
  nonscalar9[28] = _cg_const_3[28];
  nonscalar9[29] = _cg_const_3[29];
  nonscalar9[30] = _cg_const_3[30];
  nonscalar9[31] = _cg_const_3[31];
  nonscalar9[32] = _cg_const_3[32];
  nonscalar9[33] = _cg_const_3[33];
  nonscalar9[34] = _cg_const_3[34];
  nonscalar9[35] = _cg_const_3[35];
  nonscalar9[36] = _cg_const_3[36];
  nonscalar9[37] = _cg_const_3[37];
  nonscalar9[38] = _cg_const_3[38];
  nonscalar9[39] = _cg_const_3[39];
  t4336[0] = 10UL;
  t843[0] = 1UL;
  tlu2_linear_nearest_prelookup(&t87.mField0[0UL], &t87.mField1[0UL],
    &t87.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  t2590[0] = 298.15;
  t845[0] = 4UL;
  tlu2_linear_nearest_prelookup(&t162.mField0[0UL], &t162.mField1[0UL],
    &t162.mField2[0UL], &nonscalar2[0UL], &t2590[0UL], &t845[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge = t3510[0UL];
  nonscalar11[0] = _cg_const_8[0];
  nonscalar11[1] = _cg_const_8[1];
  nonscalar11[2] = _cg_const_8[2];
  nonscalar11[3] = _cg_const_8[3];
  nonscalar11[4] = _cg_const_8[4];
  nonscalar11[5] = _cg_const_8[5];
  nonscalar11[6] = _cg_const_8[6];
  nonscalar11[7] = _cg_const_8[7];
  nonscalar11[8] = _cg_const_8[8];
  nonscalar11[9] = _cg_const_8[9];
  nonscalar11[10] = _cg_const_8[10];
  nonscalar11[11] = _cg_const_8[11];
  nonscalar11[12] = _cg_const_8[12];
  nonscalar11[13] = _cg_const_8[13];
  nonscalar11[14] = _cg_const_8[14];
  nonscalar11[15] = _cg_const_8[15];
  nonscalar11[16] = _cg_const_8[16];
  nonscalar11[17] = _cg_const_8[17];
  nonscalar11[18] = _cg_const_8[18];
  nonscalar11[19] = _cg_const_8[19];
  nonscalar11[20] = _cg_const_8[20];
  nonscalar11[21] = _cg_const_8[21];
  nonscalar11[22] = _cg_const_8[22];
  nonscalar11[23] = _cg_const_8[23];
  nonscalar11[24] = _cg_const_8[24];
  nonscalar11[25] = _cg_const_8[25];
  nonscalar11[26] = _cg_const_8[26];
  nonscalar11[27] = _cg_const_8[27];
  nonscalar11[28] = _cg_const_8[28];
  nonscalar11[29] = _cg_const_8[29];
  nonscalar11[30] = _cg_const_8[30];
  nonscalar11[31] = _cg_const_8[31];
  nonscalar11[32] = _cg_const_8[32];
  nonscalar11[33] = _cg_const_8[33];
  nonscalar11[34] = _cg_const_8[34];
  nonscalar11[35] = _cg_const_8[35];
  nonscalar11[36] = _cg_const_8[36];
  nonscalar11[37] = _cg_const_8[37];
  nonscalar11[38] = _cg_const_8[38];
  nonscalar11[39] = _cg_const_8[39];
  nonscalar11[40] = _cg_const_8[40];
  nonscalar11[41] = _cg_const_8[41];
  nonscalar11[42] = _cg_const_8[42];
  nonscalar11[43] = _cg_const_8[43];
  nonscalar11[44] = _cg_const_8[44];
  nonscalar11[45] = _cg_const_8[45];
  nonscalar11[46] = _cg_const_8[46];
  nonscalar11[47] = _cg_const_8[47];
  nonscalar11[48] = _cg_const_8[48];
  nonscalar11[49] = _cg_const_8[49];
  nonscalar11[50] = _cg_const_8[50];
  nonscalar11[51] = _cg_const_8[51];
  nonscalar11[52] = _cg_const_8[52];
  nonscalar11[53] = _cg_const_8[53];
  nonscalar11[54] = _cg_const_8[54];
  nonscalar11[55] = _cg_const_8[55];
  nonscalar11[56] = _cg_const_8[56];
  nonscalar11[57] = _cg_const_8[57];
  nonscalar11[58] = _cg_const_8[58];
  nonscalar11[59] = _cg_const_8[59];
  nonscalar11[60] = _cg_const_8[60];
  nonscalar11[61] = _cg_const_8[61];
  nonscalar11[62] = _cg_const_8[62];
  nonscalar11[63] = _cg_const_8[63];
  nonscalar11[64] = _cg_const_8[64];
  nonscalar11[65] = _cg_const_8[65];
  nonscalar11[66] = _cg_const_8[66];
  nonscalar11[67] = _cg_const_8[67];
  nonscalar11[68] = _cg_const_8[68];
  nonscalar11[69] = _cg_const_8[69];
  nonscalar11[70] = _cg_const_8[70];
  nonscalar11[71] = _cg_const_8[71];
  nonscalar11[72] = _cg_const_8[72];
  nonscalar11[73] = _cg_const_8[73];
  nonscalar11[74] = _cg_const_8[74];
  nonscalar11[75] = _cg_const_8[75];
  nonscalar11[76] = _cg_const_8[76];
  nonscalar11[77] = _cg_const_8[77];
  nonscalar11[78] = _cg_const_8[78];
  nonscalar11[79] = _cg_const_8[79];
  nonscalar12[0] = _cg_const_9[0];
  nonscalar12[1] = _cg_const_9[1];
  nonscalar12[2] = _cg_const_9[2];
  nonscalar12[3] = _cg_const_9[3];
  nonscalar12[4] = _cg_const_9[4];
  nonscalar12[5] = _cg_const_9[5];
  nonscalar12[6] = _cg_const_9[6];
  nonscalar12[7] = _cg_const_9[7];
  nonscalar12[8] = _cg_const_9[8];
  nonscalar12[9] = _cg_const_9[9];
  nonscalar12[10] = _cg_const_9[10];
  nonscalar12[11] = _cg_const_9[11];
  nonscalar12[12] = _cg_const_9[12];
  nonscalar12[13] = _cg_const_9[13];
  nonscalar12[14] = _cg_const_9[14];
  nonscalar12[15] = _cg_const_9[15];
  nonscalar12[16] = _cg_const_9[16];
  nonscalar12[17] = _cg_const_9[17];
  nonscalar12[18] = _cg_const_9[18];
  nonscalar12[19] = _cg_const_9[19];
  nonscalar12[20] = _cg_const_9[20];
  nonscalar12[21] = _cg_const_9[21];
  nonscalar12[22] = _cg_const_9[22];
  nonscalar12[23] = _cg_const_9[23];
  nonscalar12[24] = _cg_const_9[24];
  nonscalar12[25] = _cg_const_9[25];
  nonscalar12[26] = _cg_const_9[26];
  nonscalar12[27] = _cg_const_9[27];
  nonscalar12[28] = _cg_const_9[28];
  nonscalar12[29] = _cg_const_9[29];
  nonscalar12[30] = _cg_const_9[30];
  nonscalar12[31] = _cg_const_9[31];
  nonscalar12[32] = _cg_const_9[32];
  nonscalar12[33] = _cg_const_9[33];
  nonscalar12[34] = _cg_const_9[34];
  nonscalar12[35] = _cg_const_9[35];
  nonscalar12[36] = _cg_const_9[36];
  nonscalar12[37] = _cg_const_9[37];
  nonscalar12[38] = _cg_const_9[38];
  nonscalar12[39] = _cg_const_9[39];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1003 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1229UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1006 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  t6733 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1238UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1012 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1494 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1247UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1021 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1257UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1499 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1027 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1269UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1030 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  t6738 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1281UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t87.mField0[0UL], &t87.mField1[0UL],
    &t87.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1505 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  t6739 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1291UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1042 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  t6740 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1301UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1048 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1512 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1310UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1514 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1515 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1319UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1063 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1330UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1520 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1069 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1339UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1523 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1075 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1348UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based29_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1527 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1357UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1530 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1366UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1532 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1093 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1378UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t87.mField0[0UL], &t87.mField1[0UL],
    &t87.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1536 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1390UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based32_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1105 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1399UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1111 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1409UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1114 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1545 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1419UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1547 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1548 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1428UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based36_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1129 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1437UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1553 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1135 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1448UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1556 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1557 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1457UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1144 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1560 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1466UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1562 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1563 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1476UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1565 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1159 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1485UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based41_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1165 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1497UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1572 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1509UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1177 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1519UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1577 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1578 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1529UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1580 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1189 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1538UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1583 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1195 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1547UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based47_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1587 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1558UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1589 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1207 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1567UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1210 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1593 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1576UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1216 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1596 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1585UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1598 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1225 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1594UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1231 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1605UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1605 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1617UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1607 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1608 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1627UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1610 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1249 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1636UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1614 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1645UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1616 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1261 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1654UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1620 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1663UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1622 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1623 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1672UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1625 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1626 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1681UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1282 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1285 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1690UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1288 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1632 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1702UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1634 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1635 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1714UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1638 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1726UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1309 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1738UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1643 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1315 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1749UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based14_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1321 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1758UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1327 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1769UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1330 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1333 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1780UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1339 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1790UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1658 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1345 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1799UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1661 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1662 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1808UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based2_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1357 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1818UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1668 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1830UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1369 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1842UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1673 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1674 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1852UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1378 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1381 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1862UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1387 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1871UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1683 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1880UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1399 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1891UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1405 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1900UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1411 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1909UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1694 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1695 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1918UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1698 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1927UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL],
    &t119.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1700 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1429 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1939UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1435 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1951UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based32_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1707 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1960UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1709 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1710 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1970UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL],
    &t119.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1453 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1980UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1715 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1716 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1989UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1462 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1719 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1998UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1722 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2008UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based38_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1725 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2017UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based39_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1728 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2026UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1730 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1489 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2036UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t207.mField0[0UL], &t207.mField1[0UL],
    &t207.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1734 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2045UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t207.mField0[0UL], &t207.mField1[0UL],
    &t207.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1736 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1737 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2057UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1504 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1740 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2069UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL],
    &t187.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1510 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1743 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2079UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1745 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1746 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2089UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1522 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1525 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2098UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1751 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1752 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2107UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1534 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1755 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2118UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1757 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1758 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2127UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1760 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1549 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2136UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1552 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1555 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2145UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1558 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1767 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2154UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1567 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2164UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1772 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1773 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2175UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1576 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1776 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2185UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL],
    &t119.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1585 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2194UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1588 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1782 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2203UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t151.mField0[0UL], &t151.mField1[0UL],
    &t151.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t151.mField0[0UL], &t151.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Two_Battery_Table_Based59_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t151.mField0[0UL], &t151.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1785 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2212UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1600 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1788 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2221UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1606 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1791 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2230UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL],
    &t119.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1612 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1615 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2239UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1618 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1797 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2248UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based1_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1800 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2260UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1630 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1633 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2272UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t151.mField0[0UL], &t151.mField1[0UL],
    &t151.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t151.mField0[0UL], &t151.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1805 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t151.mField0[0UL], &t151.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1639 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2284UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL],
    &t119.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1642 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1809 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2296UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1648 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1812 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2307UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based14_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1815 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2316UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1817 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1818 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2327UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based16_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1669 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2338UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based17_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1675 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2348UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t207.mField0[0UL], &t207.mField1[0UL],
    &t207.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1826 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1681 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2357UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based19_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1687 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2366UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t207.mField0[0UL], &t207.mField1[0UL],
    &t207.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1690 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1833 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2376UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1835 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1699 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2388UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1702 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1839 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2400UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1841 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1711 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2410UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based23_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1717 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2420UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1847 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1848 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2429UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1850 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1851 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2438UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t207.mField0[0UL], &t207.mField1[0UL],
    &t207.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1732 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1854 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2449UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL],
    &t187.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1738 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1857 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2458UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based28_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1747 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2467UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t207.mField0[0UL], &t207.mField1[0UL],
    &t207.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based29_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1863 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2476UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1865 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1866 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2485UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1762 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1869 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2497UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1768 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1771 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2509UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based32_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1777 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2518UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL],
    &t119.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1780 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1878 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2528UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1786 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1881 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2538UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based35_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1795 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2547UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1798 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1887 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2556UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL],
    &t187.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1804 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1807 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2567UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1810 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1893 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2576UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1895 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1819 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2585UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based4_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1825 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2595UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1901 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1902 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2604UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1904 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1905 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2616UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1907 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1843 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2628UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1910 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1849 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2638UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1852 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1914 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2648UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based45_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1861 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2657UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1919 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1867 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2666UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1870 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1873 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2677UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1925 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1879 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2686UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_four_Battery_Table_Based49_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1885 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2695UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1931 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1891 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2704UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1934 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1897 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2713UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1900 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1903 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2723UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1906 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1909 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2734UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1943 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1915 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2744UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1946 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1947 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2753UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1949 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1950 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2762UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1930 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1953 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2771UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1955 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1939 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2780UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1958 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1959 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2789UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_1948 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1962 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[2798UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1964 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1965 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[0UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  t8405 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_283 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[14UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1130 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1131 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[26UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_292 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_295 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[38UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_298 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1137 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[50UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_304 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1140 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[61UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_310 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_313 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[70UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_316 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1146 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[81UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t75.mField0[0UL], &t75.mField1[0UL],
    &t75.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1148 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t75.mField0[0UL], &t75.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1149 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[92UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1152 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[102UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1154 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_337 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[111UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL],
    &t187.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_340 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1158 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[120UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1160 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_349 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[130UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t187.mField0[0UL], &t187.mField1[0UL],
    &t187.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1163 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t187.mField0[0UL], &t187.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_355 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[142UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1166 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_361 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[154UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t207.mField0[0UL], &t207.mField1[0UL],
    &t207.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1169 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t207.mField0[0UL], &t207.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1170 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[164UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL],
    &t119.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_370 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_373 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[174UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_376 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1176 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[183UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_382 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1179 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[192UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_388 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1182 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[203UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1184 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_397 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[212UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based28_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1188 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[221UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_406 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1191 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[230UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1193 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1194 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[239UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1196 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_421 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[251UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1200 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[263UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1203 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[272UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_439 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[282UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_442 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_445 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[292UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_448 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_451 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[301UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_454 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1215 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[310UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_460 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_463 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[321UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_466 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_469 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[330UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL],
    &t119.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based39_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_475 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[339UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1226 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1227 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[349UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1230 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[358UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_490 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1233 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[370UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1235 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1236 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[382UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_502 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1239 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[392UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t119.mField0[0UL], &t119.mField1[0UL],
    &t119.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t119.mField0[0UL], &t119.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_511 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[402UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t87.mField0[0UL], &t87.mField1[0UL],
    &t87.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_514 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_517 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[411UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_520 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_523 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[420UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1251 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[431UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_532 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1254 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[440UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_538 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_541 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[449UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1259 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1260 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[458UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1262 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_553 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[467UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1265 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_559 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[478UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1268 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_565 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[489UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_571 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[499UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1275 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[508UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1278 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[517UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1280 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_589 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[526UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1283 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_595 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[535UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_598 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_601 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[544UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1289 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_607 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[553UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1292 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1293 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[562UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1295 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_619 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[574UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1298 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1299 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[586UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based11_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_631 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[598UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_634 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1305 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[610UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_643 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[621UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1310 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1311 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[630UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_655 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[641UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1316 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1317 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[652UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t62.mField0[0UL], &t62.mField1[0UL],
    &t62.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1319 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t62.mField0[0UL], &t62.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1320 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[662UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_670 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1323 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[671UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t61.mField0[0UL], &t61.mField1[0UL],
    &t61.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t61.mField0[0UL], &t61.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_679 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[680UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1329 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[690UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1331 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_691 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[702UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_694 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1335 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[714UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t161.mField0[0UL], &t161.mField1[0UL],
    &t161.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_700 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t161.mField0[0UL], &t161.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1338 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[724UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_706 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_709 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[734UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1343 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_715 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[743UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_718 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_721 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[752UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_727 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[763UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t87.mField0[0UL], &t87.mField1[0UL],
    &t87.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1352 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_733 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[772UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_736 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_739 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[781UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_742 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_745 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[790UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_748 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1362 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[799UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based30_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_757 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[811UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t87.mField0[0UL], &t87.mField1[0UL],
    &t87.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based31_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1368 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[823UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1370 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1371 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[832UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_772 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1374 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[842UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_778 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_781 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[852UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based35_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1380 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[861UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based36_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_793 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[870UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1386 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[881UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1388 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1389 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[890UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t101.mField0[0UL], &t101.mField1[0UL],
    &t101.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_808 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t101.mField0[0UL], &t101.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_811 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[899UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1394 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1395 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[909UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_820 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_823 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[918UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t125.mField0[0UL], &t125.mField1[0UL],
    &t125.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based41_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t125.mField0[0UL], &t125.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1401 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[930UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1403 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_835 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[942UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1406 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1407 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[952UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1409 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1410 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[962UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t224.mField0[0UL], &t224.mField1[0UL],
    &t224.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_850 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t224.mField0[0UL], &t224.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_853 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[971UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_856 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1416 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[980UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t149.mField0[0UL], &t149.mField1[0UL],
    &t149.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_862 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t149.mField0[0UL], &t149.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_865 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[991UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1421 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1422 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1000UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1424 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1425 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1009UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_880 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1428 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1018UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1430 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1431 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1027UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t186.mField0[0UL], &t186.mField1[0UL],
    &t186.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1433 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t186.mField0[0UL], &t186.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1434 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1044UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_898 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1437 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1056UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1439 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1440 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1066UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_913 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1075UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1446 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1084UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t19.mField0[0UL], &t19.mField1[0UL],
    &t19.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t19.mField0[0UL], &t19.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_925 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1093UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t110.mField0[0UL], &t110.mField1[0UL],
    &t110.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_928 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t110.mField0[0UL], &t110.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_931 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1102UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1454 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_937 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1111UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_940 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_943 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1120UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1460 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1461 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1129UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_952 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1464 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1141UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t273.mField0[0UL], &t273.mField1[0UL],
    &t273.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_958 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t273.mField0[0UL], &t273.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1467 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1153UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t57.mField0[0UL], &t57.mField1[0UL],
    &t57.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t57.mField0[0UL], &t57.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1470 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1165UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1472 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1473 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1177UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t204.mField0[0UL], &t204.mField1[0UL],
    &t204.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1475 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t204.mField0[0UL], &t204.mField2
    [0UL], &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_979 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1188UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t87.mField0[0UL], &t87.mField1[0UL],
    &t87.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1478 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  zc_int1479 = t3510[0UL];
  t2590[0UL] = t8449->mX.mX[1197UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t87.mField0[0UL], &t87.mField1[0UL],
    &t87.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  intrm_sf_mf_988 = t3510[0UL];
  tlu2_2d_linear_nearest_value(&t3510[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  t2590[0UL] = t8449->mX.mX[1208UL] * 5.5555555555555558E-5;
  tlu2_linear_nearest_prelookup(&t87.mField0[0UL], &t87.mField1[0UL],
    &t87.mField2[0UL], &nonscalar1[0UL], &t2590[0UL], &t4336[0UL], &t843[0UL]);
  tlu2_2d_linear_nearest_value(&t2590[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar9[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  Accumalator_Module_Three1_Battery_Table_Based16_stateOfCharge = t2590[0UL];
  tlu2_2d_linear_nearest_value(&t2590[0UL], &t87.mField0[0UL], &t87.mField2[0UL],
    &t162.mField0[0UL], &t162.mField2[0UL], &nonscalar12[0UL], &t4336[0UL],
    &t845[0UL], &t843[0UL]);
  if (t8449->mM.mX[4092UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = t8405;
  }

  t8405 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4093UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_283;
  }

  intrm_sf_mf_283 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4094UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1130;
  }

  zc_int1130 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4095UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1131;
  }

  zc_int1131 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4097UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_292;
  }

  intrm_sf_mf_292 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4098UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_295;
  }

  intrm_sf_mf_295 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4099UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_298;
  }

  intrm_sf_mf_298 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4100UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1137;
  }

  zc_int1137 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4101UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_304;
  }

  intrm_sf_mf_304 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4102UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1140;
  }

  zc_int1140 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4103UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_310;
  }

  intrm_sf_mf_310 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4104UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_313;
  }

  intrm_sf_mf_313 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4105UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_316;
  }

  intrm_sf_mf_316 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4106UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1146;
  }

  zc_int1146 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4109UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1148;
  }

  zc_int1148 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4110UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1149;
  }

  zc_int1149 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4111UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4112UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1152;
  }

  zc_int1152 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4113UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1154;
  }

  zc_int1154 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4114UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_337;
  }

  intrm_sf_mf_337 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4115UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_340;
  }

  intrm_sf_mf_340 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4116UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1158;
  }

  zc_int1158 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4117UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1160;
  }

  zc_int1160 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4118UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_349;
  }

  intrm_sf_mf_349 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4120UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1163;
  }

  zc_int1163 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4121UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_355;
  }

  intrm_sf_mf_355 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4122UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1166;
  }

  zc_int1166 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4123UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_361;
  }

  intrm_sf_mf_361 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4124UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1169;
  }

  zc_int1169 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4125UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1170;
  }

  zc_int1170 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4126UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_370;
  }

  intrm_sf_mf_370 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4127UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_373;
  }

  intrm_sf_mf_373 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4128UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_376;
  }

  intrm_sf_mf_376 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4129UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1176;
  }

  zc_int1176 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4131UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_382;
  }

  intrm_sf_mf_382 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4132UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1179;
  }

  zc_int1179 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4133UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_388;
  }

  intrm_sf_mf_388 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4134UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1182;
  }

  zc_int1182 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4135UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1184;
  }

  zc_int1184 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4136UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_397;
  }

  intrm_sf_mf_397 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4137UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based28_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based28_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4138UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1188;
  }

  zc_int1188 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4139UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_406;
  }

  intrm_sf_mf_406 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4140UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1191;
  }

  zc_int1191 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4142UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1193;
  }

  zc_int1193 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4143UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1194;
  }

  zc_int1194 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4144UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1196;
  }

  zc_int1196 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4145UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_421;
  }

  intrm_sf_mf_421 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4146UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4147UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1200;
  }

  zc_int1200 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4148UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4149UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1203;
  }

  zc_int1203 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4150UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4151UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_439;
  }

  intrm_sf_mf_439 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4153UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_442;
  }

  intrm_sf_mf_442 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4154UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_445;
  }

  intrm_sf_mf_445 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4155UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_448;
  }

  intrm_sf_mf_448 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4156UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_451;
  }

  intrm_sf_mf_451 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4157UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_454;
  }

  intrm_sf_mf_454 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4158UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1215;
  }

  zc_int1215 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4159UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_460;
  }

  intrm_sf_mf_460 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4160UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_463;
  }

  intrm_sf_mf_463 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4161UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_466;
  }

  intrm_sf_mf_466 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4162UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_469;
  }

  intrm_sf_mf_469 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4164UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based39_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based39_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4165UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_475;
  }

  intrm_sf_mf_475 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4166UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1226;
  }

  zc_int1226 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4167UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1227;
  }

  zc_int1227 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4168UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4169UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1230;
  }

  zc_int1230 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4170UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_490;
  }

  intrm_sf_mf_490 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4171UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1233;
  }

  zc_int1233 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4172UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1235;
  }

  zc_int1235 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4173UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1236;
  }

  zc_int1236 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4175UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_502;
  }

  intrm_sf_mf_502 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4176UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1239;
  }

  zc_int1239 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4177UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4178UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_511;
  }

  intrm_sf_mf_511 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4179UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_514;
  }

  intrm_sf_mf_514 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4180UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_517;
  }

  intrm_sf_mf_517 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4181UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_520;
  }

  intrm_sf_mf_520 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4182UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_523;
  }

  intrm_sf_mf_523 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4183UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4184UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1251;
  }

  zc_int1251 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4186UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_532;
  }

  intrm_sf_mf_532 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4187UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1254;
  }

  zc_int1254 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4188UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_538;
  }

  intrm_sf_mf_538 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4189UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_541;
  }

  intrm_sf_mf_541 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4190UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1259;
  }

  zc_int1259 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4191UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1260;
  }

  zc_int1260 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4192UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1262;
  }

  zc_int1262 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4193UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_553;
  }

  intrm_sf_mf_553 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4194UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1265;
  }

  zc_int1265 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4195UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_559;
  }

  intrm_sf_mf_559 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4197UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1268;
  }

  zc_int1268 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4198UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_565;
  }

  intrm_sf_mf_565 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4199UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4200UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_571;
  }

  intrm_sf_mf_571 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4201UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4202UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1275;
  }

  zc_int1275 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4203UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge;
  }

  Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4204UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1278;
  }

  zc_int1278 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4205UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1280;
  }

  zc_int1280 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4206UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_589;
  }

  intrm_sf_mf_589 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4208UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1283;
  }

  zc_int1283 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4209UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_595;
  }

  intrm_sf_mf_595 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4210UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_598;
  }

  intrm_sf_mf_598 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4211UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_601;
  }

  intrm_sf_mf_601 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4212UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1289;
  }

  zc_int1289 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4213UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_607;
  }

  intrm_sf_mf_607 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4214UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1292;
  }

  zc_int1292 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4215UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1293;
  }

  zc_int1293 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4216UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1295;
  }

  zc_int1295 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4217UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_619;
  }

  intrm_sf_mf_619 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1298;
  }

  zc_int1298 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[5UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1299;
  }

  zc_int1299 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[6UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based11_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based11_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[7UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_631;
  }

  intrm_sf_mf_631 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[8UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_634;
  }

  intrm_sf_mf_634 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[9UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1305;
  }

  zc_int1305 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[10UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[11UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_643;
  }

  intrm_sf_mf_643 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[12UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1310;
  }

  zc_int1310 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[13UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1311;
  }

  zc_int1311 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[15UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[16UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_655;
  }

  intrm_sf_mf_655 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[17UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1316;
  }

  zc_int1316 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[18UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1317;
  }

  zc_int1317 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[19UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1319;
  }

  zc_int1319 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[20UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1320;
  }

  zc_int1320 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[21UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_670;
  }

  intrm_sf_mf_670 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[22UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1323;
  }

  zc_int1323 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[23UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[24UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_679;
  }

  intrm_sf_mf_679 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[26UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[27UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1329;
  }

  zc_int1329 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[28UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1331;
  }

  zc_int1331 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[29UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_691;
  }

  intrm_sf_mf_691 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[30UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_694;
  }

  intrm_sf_mf_694 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[31UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1335;
  }

  zc_int1335 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[32UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_700;
  }

  intrm_sf_mf_700 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[33UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1338;
  }

  zc_int1338 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[34UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_706;
  }

  intrm_sf_mf_706 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[35UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_709;
  }

  intrm_sf_mf_709 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[37UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1343;
  }

  zc_int1343 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[38UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_715;
  }

  intrm_sf_mf_715 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[39UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_718;
  }

  intrm_sf_mf_718 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[40UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_721;
  }

  intrm_sf_mf_721 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[41UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[42UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_727;
  }

  intrm_sf_mf_727 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[43UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1352;
  }

  zc_int1352 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[44UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_733;
  }

  intrm_sf_mf_733 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[45UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_736;
  }

  intrm_sf_mf_736 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[46UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_739;
  }

  intrm_sf_mf_739 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[48UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_742;
  }

  intrm_sf_mf_742 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[49UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_745;
  }

  intrm_sf_mf_745 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[50UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_748;
  }

  intrm_sf_mf_748 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[51UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1362;
  }

  zc_int1362 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[52UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based30_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based30_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[53UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_757;
  }

  intrm_sf_mf_757 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[54UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based31_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based31_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[55UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1368;
  }

  zc_int1368 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[56UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1370;
  }

  zc_int1370 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[57UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1371;
  }

  zc_int1371 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[59UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_772;
  }

  intrm_sf_mf_772 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[60UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1374;
  }

  zc_int1374 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[61UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_778;
  }

  intrm_sf_mf_778 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[62UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_781;
  }

  intrm_sf_mf_781 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[63UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based35_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based35_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[64UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1380;
  }

  zc_int1380 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[65UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based36_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based36_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[66UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_793;
  }

  intrm_sf_mf_793 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[67UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[68UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1386;
  }

  zc_int1386 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[70UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1388;
  }

  zc_int1388 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[71UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1389;
  }

  zc_int1389 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[72UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_808;
  }

  intrm_sf_mf_808 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[73UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_811;
  }

  intrm_sf_mf_811 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[74UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1394;
  }

  zc_int1394 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[75UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1395;
  }

  zc_int1395 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[76UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_820;
  }

  intrm_sf_mf_820 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[77UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_823;
  }

  intrm_sf_mf_823 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[78UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based41_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based41_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[79UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1401;
  }

  zc_int1401 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[81UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1403;
  }

  zc_int1403 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[82UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_835;
  }

  intrm_sf_mf_835 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[83UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1406;
  }

  zc_int1406 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[84UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1407;
  }

  zc_int1407 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[85UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1409;
  }

  zc_int1409 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[86UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1410;
  }

  zc_int1410 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[87UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_850;
  }

  intrm_sf_mf_850 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[88UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_853;
  }

  intrm_sf_mf_853 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[89UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_856;
  }

  intrm_sf_mf_856 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[90UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1416;
  }

  zc_int1416 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[92UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_862;
  }

  intrm_sf_mf_862 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[93UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_865;
  }

  intrm_sf_mf_865 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[94UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1421;
  }

  zc_int1421 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[95UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1422;
  }

  zc_int1422 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[96UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1424;
  }

  zc_int1424 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[97UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1425;
  }

  zc_int1425 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[98UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_880;
  }

  intrm_sf_mf_880 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[99UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1428;
  }

  zc_int1428 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[100UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1430;
  }

  zc_int1430 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[101UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1431;
  }

  zc_int1431 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[103UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1433;
  }

  zc_int1433 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[104UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1434;
  }

  zc_int1434 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[105UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_898;
  }

  intrm_sf_mf_898 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[106UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1437;
  }

  zc_int1437 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[107UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1439;
  }

  zc_int1439 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[108UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1440;
  }

  zc_int1440 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[109UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[110UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_913;
  }

  intrm_sf_mf_913 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[111UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[112UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1446;
  }

  zc_int1446 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[115UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge;
  }

  Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[116UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_925;
  }

  intrm_sf_mf_925 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[117UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_928;
  }

  intrm_sf_mf_928 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[118UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_931;
  }

  intrm_sf_mf_931 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[119UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1454;
  }

  zc_int1454 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[120UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_937;
  }

  intrm_sf_mf_937 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[121UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_940;
  }

  intrm_sf_mf_940 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[122UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_943;
  }

  intrm_sf_mf_943 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[123UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1460;
  }

  zc_int1460 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[124UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1461;
  }

  zc_int1461 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[126UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_952;
  }

  intrm_sf_mf_952 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[127UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1464;
  }

  zc_int1464 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[128UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_958;
  }

  intrm_sf_mf_958 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[129UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1467;
  }

  zc_int1467 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[130UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[131UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1470;
  }

  zc_int1470 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[132UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1472;
  }

  zc_int1472 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[133UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1473;
  }

  zc_int1473 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[134UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1475;
  }

  zc_int1475 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[135UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_979;
  }

  intrm_sf_mf_979 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[137UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1478;
  }

  zc_int1478 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[138UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1479;
  }

  zc_int1479 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[139UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_988;
  }

  intrm_sf_mf_988 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[140UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = t3510[0UL];
  }

  zc_int1482 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[141UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based16_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based16_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[142UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = t2590[0UL];
  }

  zc_int1485 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3737UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3738UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1003;
  }

  intrm_sf_mf_1003 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3739UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1006;
  }

  intrm_sf_mf_1006 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3740UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = t6733;
  }

  t6733 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3742UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1012;
  }

  intrm_sf_mf_1012 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3743UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1494;
  }

  zc_int1494 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3744UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3745UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1021;
  }

  intrm_sf_mf_1021 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3746UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1499;
  }

  zc_int1499 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3747UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1027;
  }

  intrm_sf_mf_1027 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3748UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1030;
  }

  intrm_sf_mf_1030 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3749UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = t6738;
  }

  t6738 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3750UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1505;
  }

  zc_int1505 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3751UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = t6739;
  }

  t6739 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3753UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1042;
  }

  intrm_sf_mf_1042 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3754UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = t6740;
  }

  t6740 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3755UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1048;
  }

  intrm_sf_mf_1048 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3756UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1512;
  }

  zc_int1512 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3757UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1514;
  }

  zc_int1514 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3758UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1515;
  }

  zc_int1515 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3759UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3760UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1063;
  }

  intrm_sf_mf_1063 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3761UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1520;
  }

  zc_int1520 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3762UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1069;
  }

  intrm_sf_mf_1069 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3764UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1523;
  }

  zc_int1523 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3765UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1075;
  }

  intrm_sf_mf_1075 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3766UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based29_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based29_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3767UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1527;
  }

  zc_int1527 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3768UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3769UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1530;
  }

  zc_int1530 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3770UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1532;
  }

  zc_int1532 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3771UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1093;
  }

  intrm_sf_mf_1093 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3772UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3773UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1536;
  }

  zc_int1536 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3776UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based32_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based32_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3777UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1105;
  }

  intrm_sf_mf_1105 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3778UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3779UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1111;
  }

  intrm_sf_mf_1111 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3780UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1114;
  }

  intrm_sf_mf_1114 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3781UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1545;
  }

  zc_int1545 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3782UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1547;
  }

  zc_int1547 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3783UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1548;
  }

  zc_int1548 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3784UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based36_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based36_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3785UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1129;
  }

  intrm_sf_mf_1129 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3787UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1553;
  }

  zc_int1553 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3788UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1135;
  }

  intrm_sf_mf_1135 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3789UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1556;
  }

  zc_int1556 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3790UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1557;
  }

  zc_int1557 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3791UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1144;
  }

  intrm_sf_mf_1144 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3792UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1560;
  }

  zc_int1560 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3793UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1562;
  }

  zc_int1562 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3794UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1563;
  }

  zc_int1563 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3795UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1565;
  }

  zc_int1565 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3796UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1159;
  }

  intrm_sf_mf_1159 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3798UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based41_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based41_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3799UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1165;
  }

  intrm_sf_mf_1165 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3800UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3801UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1572;
  }

  zc_int1572 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3802UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3803UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1177;
  }

  intrm_sf_mf_1177 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3804UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1577;
  }

  zc_int1577 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3805UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1578;
  }

  zc_int1578 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3806UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1580;
  }

  zc_int1580 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3807UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1189;
  }

  intrm_sf_mf_1189 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3809UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1583;
  }

  zc_int1583 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3810UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1195;
  }

  intrm_sf_mf_1195 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3811UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based47_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based47_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3812UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1587;
  }

  zc_int1587 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3813UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1589;
  }

  zc_int1589 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3814UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1207;
  }

  intrm_sf_mf_1207 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3815UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1210;
  }

  intrm_sf_mf_1210 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3816UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1593;
  }

  zc_int1593 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3817UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1216;
  }

  intrm_sf_mf_1216 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3818UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1596;
  }

  zc_int1596 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3820UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1598;
  }

  zc_int1598 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3821UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1225;
  }

  intrm_sf_mf_1225 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3822UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3823UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1231;
  }

  intrm_sf_mf_1231 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3824UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3825UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1605;
  }

  zc_int1605 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3826UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1607;
  }

  zc_int1607 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3827UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1608;
  }

  zc_int1608 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3828UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1610;
  }

  zc_int1610 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3829UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1249;
  }

  intrm_sf_mf_1249 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3831UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3832UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1614;
  }

  zc_int1614 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3833UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1616;
  }

  zc_int1616 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3834UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1261;
  }

  intrm_sf_mf_1261 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3835UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge;
  }

  Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3836UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1620;
  }

  zc_int1620 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3837UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1622;
  }

  zc_int1622 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3838UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1623;
  }

  zc_int1623 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3839UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1625;
  }

  zc_int1625 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3840UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1626;
  }

  zc_int1626 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3842UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1282;
  }

  intrm_sf_mf_1282 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3843UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1285;
  }

  intrm_sf_mf_1285 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3844UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1288;
  }

  intrm_sf_mf_1288 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3845UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1632;
  }

  zc_int1632 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3846UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1634;
  }

  zc_int1634 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3847UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1635;
  }

  zc_int1635 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3848UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3849UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1638;
  }

  zc_int1638 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3850UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3851UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1309;
  }

  intrm_sf_mf_1309 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3853UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1643;
  }

  zc_int1643 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3854UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1315;
  }

  intrm_sf_mf_1315 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3855UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based14_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based14_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3856UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1321;
  }

  intrm_sf_mf_1321 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3857UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3858UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1327;
  }

  intrm_sf_mf_1327 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3859UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1330;
  }

  intrm_sf_mf_1330 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3860UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1333;
  }

  intrm_sf_mf_1333 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3861UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3862UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1339;
  }

  intrm_sf_mf_1339 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3864UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1658;
  }

  zc_int1658 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3865UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1345;
  }

  intrm_sf_mf_1345 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3866UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1661;
  }

  zc_int1661 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3867UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1662;
  }

  zc_int1662 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3868UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based2_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based2_stateOfCharge = 1.0 / (t718 == 0.0
    ? 1.0E-16 : t718);
  if (t8449->mM.mX[3869UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1357;
  }

  intrm_sf_mf_1357 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3870UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3871UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1668;
  }

  zc_int1668 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3872UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3873UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1369;
  }

  intrm_sf_mf_1369 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3875UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1673;
  }

  zc_int1673 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3876UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1674;
  }

  zc_int1674 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3877UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1378;
  }

  intrm_sf_mf_1378 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3878UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1381;
  }

  intrm_sf_mf_1381 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3879UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3880UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1387;
  }

  intrm_sf_mf_1387 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3881UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3882UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1683;
  }

  zc_int1683 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3883UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3884UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1399;
  }

  intrm_sf_mf_1399 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3887UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3888UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1405;
  }

  intrm_sf_mf_1405 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3889UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3890UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1411;
  }

  intrm_sf_mf_1411 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3891UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1694;
  }

  zc_int1694 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3892UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1695;
  }

  zc_int1695 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3893UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge = 1.0 / (t718 == 0.0
    ? 1.0E-16 : t718);
  if (t8449->mM.mX[3894UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1698;
  }

  zc_int1698 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3895UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1700;
  }

  zc_int1700 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3896UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1429;
  }

  intrm_sf_mf_1429 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3898UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3899UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1435;
  }

  intrm_sf_mf_1435 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3900UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based32_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based32_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3901UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1707;
  }

  zc_int1707 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3902UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1709;
  }

  zc_int1709 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3903UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1710;
  }

  zc_int1710 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3904UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3905UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1453;
  }

  intrm_sf_mf_1453 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3906UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1715;
  }

  zc_int1715 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3907UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1716;
  }

  zc_int1716 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3909UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1462;
  }

  intrm_sf_mf_1462 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3910UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1719;
  }

  zc_int1719 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3911UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3912UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1722;
  }

  zc_int1722 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3913UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based38_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based38_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3914UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1725;
  }

  zc_int1725 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3915UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based39_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based39_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3916UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1728;
  }

  zc_int1728 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3917UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1730;
  }

  zc_int1730 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3918UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1489;
  }

  intrm_sf_mf_1489 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3920UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3921UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1734;
  }

  zc_int1734 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3922UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1736;
  }

  zc_int1736 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3923UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1737;
  }

  zc_int1737 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3924UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1504;
  }

  intrm_sf_mf_1504 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3925UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1740;
  }

  zc_int1740 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3926UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1510;
  }

  intrm_sf_mf_1510 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3927UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1743;
  }

  zc_int1743 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3928UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1745;
  }

  zc_int1745 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3929UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1746;
  }

  zc_int1746 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3931UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1522;
  }

  intrm_sf_mf_1522 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3932UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1525;
  }

  intrm_sf_mf_1525 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3933UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1751;
  }

  zc_int1751 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3934UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1752;
  }

  zc_int1752 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3935UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1534;
  }

  intrm_sf_mf_1534 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3936UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1755;
  }

  zc_int1755 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3937UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1757;
  }

  zc_int1757 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3938UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1758;
  }

  zc_int1758 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3939UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1760;
  }

  zc_int1760 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3940UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1549;
  }

  intrm_sf_mf_1549 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3942UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1552;
  }

  intrm_sf_mf_1552 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3943UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1555;
  }

  intrm_sf_mf_1555 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3944UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1558;
  }

  intrm_sf_mf_1558 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3945UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1767;
  }

  zc_int1767 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3946UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3947UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1567;
  }

  intrm_sf_mf_1567 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3948UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1772;
  }

  zc_int1772 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3949UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1773;
  }

  zc_int1773 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3950UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1576;
  }

  intrm_sf_mf_1576 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3951UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1776;
  }

  zc_int1776 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3953UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3954UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1585;
  }

  intrm_sf_mf_1585 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3955UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1588;
  }

  intrm_sf_mf_1588 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3956UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1782;
  }

  zc_int1782 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3957UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_Two_Battery_Table_Based59_stateOfCharge;
  }

  Accumalator_Module_Two_Battery_Table_Based59_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3958UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1785;
  }

  zc_int1785 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3959UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1600;
  }

  intrm_sf_mf_1600 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3960UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1788;
  }

  zc_int1788 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3961UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1606;
  }

  intrm_sf_mf_1606 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3962UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1791;
  }

  zc_int1791 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3964UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1612;
  }

  intrm_sf_mf_1612 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3965UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1615;
  }

  intrm_sf_mf_1615 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3966UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1618;
  }

  intrm_sf_mf_1618 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3967UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1797;
  }

  zc_int1797 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3968UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based1_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based1_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3969UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1800;
  }

  zc_int1800 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3970UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1630;
  }

  intrm_sf_mf_1630 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3971UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1633;
  }

  intrm_sf_mf_1633 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3972UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1805;
  }

  zc_int1805 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3973UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1639;
  }

  intrm_sf_mf_1639 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3975UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1642;
  }

  intrm_sf_mf_1642 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3976UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1809;
  }

  zc_int1809 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3977UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1648;
  }

  intrm_sf_mf_1648 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3978UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1812;
  }

  zc_int1812 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3979UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based14_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based14_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3980UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1815;
  }

  zc_int1815 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3981UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1817;
  }

  zc_int1817 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3982UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1818;
  }

  zc_int1818 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3983UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based16_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based16_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3984UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1669;
  }

  intrm_sf_mf_1669 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3986UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based17_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based17_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3987UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1675;
  }

  intrm_sf_mf_1675 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3988UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1826;
  }

  zc_int1826 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3989UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1681;
  }

  intrm_sf_mf_1681 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3990UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based19_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based19_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3991UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1687;
  }

  intrm_sf_mf_1687 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3992UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1690;
  }

  intrm_sf_mf_1690 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3993UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1833;
  }

  zc_int1833 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3994UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1835;
  }

  zc_int1835 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3995UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1699;
  }

  intrm_sf_mf_1699 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3998UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1702;
  }

  intrm_sf_mf_1702 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[3999UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1839;
  }

  zc_int1839 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4000UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1841;
  }

  zc_int1841 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4001UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1711;
  }

  intrm_sf_mf_1711 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4002UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based23_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based23_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4003UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1717;
  }

  intrm_sf_mf_1717 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4004UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1847;
  }

  zc_int1847 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4005UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1848;
  }

  zc_int1848 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4006UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1850;
  }

  zc_int1850 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4007UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1851;
  }

  zc_int1851 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4009UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1732;
  }

  intrm_sf_mf_1732 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4010UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1854;
  }

  zc_int1854 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4011UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1738;
  }

  intrm_sf_mf_1738 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4012UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1857;
  }

  zc_int1857 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4013UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based28_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based28_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4014UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1747;
  }

  intrm_sf_mf_1747 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4015UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based29_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based29_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4016UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1863;
  }

  zc_int1863 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4017UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1865;
  }

  zc_int1865 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4018UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1866;
  }

  zc_int1866 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4020UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1762;
  }

  intrm_sf_mf_1762 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4021UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1869;
  }

  zc_int1869 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4022UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1768;
  }

  intrm_sf_mf_1768 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4023UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1771;
  }

  intrm_sf_mf_1771 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4024UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based32_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based32_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4025UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1777;
  }

  intrm_sf_mf_1777 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4026UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1780;
  }

  intrm_sf_mf_1780 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4027UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1878;
  }

  zc_int1878 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4028UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1786;
  }

  intrm_sf_mf_1786 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4029UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1881;
  }

  zc_int1881 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4031UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based35_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based35_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4032UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1795;
  }

  intrm_sf_mf_1795 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4033UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1798;
  }

  intrm_sf_mf_1798 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4034UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1887;
  }

  zc_int1887 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4035UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1804;
  }

  intrm_sf_mf_1804 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4036UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1807;
  }

  intrm_sf_mf_1807 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4037UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1810;
  }

  intrm_sf_mf_1810 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4038UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1893;
  }

  zc_int1893 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4039UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1895;
  }

  zc_int1895 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4040UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1819;
  }

  intrm_sf_mf_1819 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4042UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based4_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based4_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4043UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1825;
  }

  intrm_sf_mf_1825 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4044UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1901;
  }

  zc_int1901 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4045UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1902;
  }

  zc_int1902 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4046UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1904;
  }

  zc_int1904 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4047UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1905;
  }

  zc_int1905 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4048UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1907;
  }

  zc_int1907 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4049UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1843;
  }

  intrm_sf_mf_1843 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4050UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1910;
  }

  zc_int1910 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4051UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1849;
  }

  intrm_sf_mf_1849 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4053UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1852;
  }

  intrm_sf_mf_1852 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4054UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1914;
  }

  zc_int1914 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4055UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based45_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based45_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4056UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1861;
  }

  intrm_sf_mf_1861 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4057UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1919;
  }

  zc_int1919 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4058UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1867;
  }

  intrm_sf_mf_1867 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4059UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1870;
  }

  intrm_sf_mf_1870 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4060UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1873;
  }

  intrm_sf_mf_1873 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4061UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1925;
  }

  zc_int1925 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4062UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1879;
  }

  intrm_sf_mf_1879 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4064UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = Accumalator_Module_four_Battery_Table_Based49_stateOfCharge;
  }

  Accumalator_Module_four_Battery_Table_Based49_stateOfCharge = 1.0 / (t718 ==
    0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4065UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1885;
  }

  intrm_sf_mf_1885 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4066UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1931;
  }

  zc_int1931 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4067UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1891;
  }

  intrm_sf_mf_1891 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4068UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1934;
  }

  zc_int1934 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4069UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1897;
  }

  intrm_sf_mf_1897 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4070UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1900;
  }

  intrm_sf_mf_1900 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4071UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1903;
  }

  intrm_sf_mf_1903 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4072UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1906;
  }

  intrm_sf_mf_1906 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4073UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1909;
  }

  intrm_sf_mf_1909 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4075UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1943;
  }

  zc_int1943 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4076UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1915;
  }

  intrm_sf_mf_1915 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4077UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1946;
  }

  zc_int1946 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4078UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1947;
  }

  zc_int1947 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4079UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1949;
  }

  zc_int1949 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4080UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1950;
  }

  zc_int1950 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4081UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1930;
  }

  intrm_sf_mf_1930 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4082UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1953;
  }

  zc_int1953 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4083UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1955;
  }

  zc_int1955 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4084UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1939;
  }

  intrm_sf_mf_1939 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4086UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1958;
  }

  zc_int1958 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4087UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1959;
  }

  zc_int1959 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4088UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = intrm_sf_mf_1948;
  }

  intrm_sf_mf_1948 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4089UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1962;
  }

  zc_int1962 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4090UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1964;
  }

  zc_int1964 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718);
  if (t8449->mM.mX[4091UL] != 0) {
    t4336[0UL] = 0UL;
    for (t5952 = 0UL; t5952 < 80UL; t5952++) {
      t5749 = t5952 / 80UL;
      t6029 = (t5952 - t5952 % 80UL) + t4336[t5749 > 0UL ? 0UL : t5749];
      if (nonscalar11[t5952] * 1.0E-5 < nonscalar11[t6029 > 79UL ? 79UL : t6029]
          * 1.0E-5) {
        t4336[t5749 > 0UL ? 0UL : t5749] = t5952 % 80UL;
      }
    }

    t718 = nonscalar11[t4336[0UL] > 79UL ? 79UL : t4336[0UL]] * 1.0E-5;
  } else {
    t718 = zc_int1965;
  }

  out->mF.mX[0UL] = (t8449->mX.mX[7UL] * t8405 - t8448) / 1094.6513219702053;
  out->mF.mX[1UL] = (t8449->mX.mX[8UL] * intrm_sf_mf_283 - t8448) /
    3239.4854008314264;
  out->mF.mX[2UL] = -0.0;
  out->mF.mX[3UL] = -0.0;
  out->mF.mX[4UL] = -0.0;
  out->mF.mX[5UL] = (t8449->mX.mX[19UL] * zc_int1130 -
                     Accumalator_Module_Five1_Battery_Table_Based10_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[6UL] = (t8449->mX.mX[20UL] * zc_int1131 -
                     Accumalator_Module_Five1_Battery_Table_Based10_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[7UL] = -0.0;
  out->mF.mX[8UL] = -0.0;
  out->mF.mX[9UL] = -0.0;
  out->mF.mX[10UL] = (t8449->mX.mX[31UL] * intrm_sf_mf_292 -
                      Accumalator_Module_Five1_Battery_Table_Based11_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[11UL] = (t8449->mX.mX[32UL] * intrm_sf_mf_295 -
                      Accumalator_Module_Five1_Battery_Table_Based11_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[12UL] = -0.0;
  out->mF.mX[13UL] = -0.0;
  out->mF.mX[14UL] = -0.0;
  out->mF.mX[15UL] = (t8449->mX.mX[43UL] * intrm_sf_mf_298 -
                      Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[16UL] = (t8449->mX.mX[44UL] * zc_int1137 -
                      Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[17UL] = -0.0;
  out->mF.mX[18UL] = -0.0;
  out->mF.mX[19UL] = -0.0;
  out->mF.mX[20UL] = (t8449->mX.mX[54UL] * intrm_sf_mf_304 -
                      Accumalator_Module_Five1_Battery_Table_Based13_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[21UL] = (t8449->mX.mX[55UL] * zc_int1140 -
                      Accumalator_Module_Five1_Battery_Table_Based13_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[22UL] = -0.0;
  out->mF.mX[23UL] = -0.0;
  out->mF.mX[24UL] = -0.0;
  out->mF.mX[25UL] = (t8449->mX.mX[63UL] * intrm_sf_mf_310 - t8449->mX.mX[27UL])
    / 1094.6513219702053;
  out->mF.mX[26UL] = (t8449->mX.mX[64UL] * intrm_sf_mf_313 - t8449->mX.mX[27UL])
    / 3239.4854008314264;
  out->mF.mX[27UL] = -0.0;
  out->mF.mX[28UL] = -0.0;
  out->mF.mX[29UL] = -0.0;
  out->mF.mX[30UL] = (t8449->mX.mX[74UL] * intrm_sf_mf_316 -
                      Accumalator_Module_Five1_Battery_Table_Based15_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[31UL] = (t8449->mX.mX[75UL] * zc_int1146 -
                      Accumalator_Module_Five1_Battery_Table_Based15_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[32UL] = -0.0;
  out->mF.mX[33UL] = -0.0;
  out->mF.mX[34UL] = -0.0;
  out->mF.mX[35UL] = (t8449->mX.mX[85UL] * zc_int1148 -
                      Accumalator_Module_Five1_Battery_Table_Based16_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[36UL] = (t8449->mX.mX[86UL] * zc_int1149 -
                      Accumalator_Module_Five1_Battery_Table_Based16_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[37UL] = -0.0;
  out->mF.mX[38UL] = -0.0;
  out->mF.mX[39UL] = -0.0;
  out->mF.mX[40UL] = (t8449->mX.mX[95UL] *
                      Accumalator_Module_Five1_Battery_Table_Based17_stateOfCharge
                      - Accumalator_Module_Five1_Battery_Table_Based17_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[41UL] = (t8449->mX.mX[96UL] * zc_int1152 -
                      Accumalator_Module_Five1_Battery_Table_Based17_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[42UL] = -0.0;
  out->mF.mX[43UL] = -0.0;
  out->mF.mX[44UL] = -0.0;
  out->mF.mX[45UL] = (t8449->mX.mX[104UL] * zc_int1154 - t8449->mX.mX[15UL]) /
    1094.6513219702053;
  out->mF.mX[46UL] = (t8449->mX.mX[105UL] * intrm_sf_mf_337 - t8449->mX.mX[15UL])
    / 3239.4854008314264;
  out->mF.mX[47UL] = -0.0;
  out->mF.mX[48UL] = -0.0;
  out->mF.mX[49UL] = -0.0;
  out->mF.mX[50UL] = (t8449->mX.mX[113UL] * intrm_sf_mf_340 - t8449->mX.mX[82UL])
    / 1094.6513219702053;
  out->mF.mX[51UL] = (t8449->mX.mX[114UL] * zc_int1158 - t8449->mX.mX[82UL]) /
    3239.4854008314264;
  out->mF.mX[52UL] = -0.0;
  out->mF.mX[53UL] = -0.0;
  out->mF.mX[54UL] = -0.0;
  out->mF.mX[55UL] = (t8449->mX.mX[123UL] * zc_int1160 -
                      Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[56UL] = (t8449->mX.mX[124UL] * intrm_sf_mf_349 -
                      Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[57UL] = -0.0;
  out->mF.mX[58UL] = -0.0;
  out->mF.mX[59UL] = -0.0;
  out->mF.mX[60UL] = (t8449->mX.mX[135UL] * zc_int1163 -
                      Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[61UL] = (t8449->mX.mX[136UL] * intrm_sf_mf_355 -
                      Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[62UL] = -0.0;
  out->mF.mX[63UL] = -0.0;
  out->mF.mX[64UL] = -0.0;
  out->mF.mX[65UL] = (t8449->mX.mX[147UL] * zc_int1166 -
                      Accumalator_Module_Five1_Battery_Table_Based21_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[66UL] = (t8449->mX.mX[148UL] * intrm_sf_mf_361 -
                      Accumalator_Module_Five1_Battery_Table_Based21_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[67UL] = -0.0;
  out->mF.mX[68UL] = -0.0;
  out->mF.mX[69UL] = -0.0;
  out->mF.mX[70UL] = (t8449->mX.mX[157UL] * zc_int1169 -
                      Accumalator_Module_Five1_Battery_Table_Based22_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[71UL] = (t8449->mX.mX[158UL] * zc_int1170 -
                      Accumalator_Module_Five1_Battery_Table_Based22_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[72UL] = -0.0;
  out->mF.mX[73UL] = -0.0;
  out->mF.mX[74UL] = -0.0;
  out->mF.mX[75UL] = (t8449->mX.mX[167UL] * intrm_sf_mf_370 -
                      Accumalator_Module_Five1_Battery_Table_Based23_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[76UL] = (t8449->mX.mX[168UL] * intrm_sf_mf_373 -
                      Accumalator_Module_Five1_Battery_Table_Based23_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[77UL] = -0.0;
  out->mF.mX[78UL] = -0.0;
  out->mF.mX[79UL] = -0.0;
  out->mF.mX[80UL] = (t8449->mX.mX[176UL] * intrm_sf_mf_376 - t8449->mX.mX[165UL])
    / 1094.6513219702053;
  out->mF.mX[81UL] = (t8449->mX.mX[177UL] * zc_int1176 - t8449->mX.mX[165UL]) /
    3239.4854008314264;
  out->mF.mX[82UL] = -0.0;
  out->mF.mX[83UL] = -0.0;
  out->mF.mX[84UL] = -0.0;
  out->mF.mX[85UL] = (t8449->mX.mX[185UL] * intrm_sf_mf_382 - t8449->mX.mX[131UL])
    / 1094.6513219702053;
  out->mF.mX[86UL] = (t8449->mX.mX[186UL] * zc_int1179 - t8449->mX.mX[131UL]) /
    3239.4854008314264;
  out->mF.mX[87UL] = -0.0;
  out->mF.mX[88UL] = -0.0;
  out->mF.mX[89UL] = -0.0;
  out->mF.mX[90UL] = (t8449->mX.mX[196UL] * intrm_sf_mf_388 -
                      Accumalator_Module_Five1_Battery_Table_Based26_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[91UL] = (t8449->mX.mX[197UL] * zc_int1182 -
                      Accumalator_Module_Five1_Battery_Table_Based26_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[92UL] = -0.0;
  out->mF.mX[93UL] = -0.0;
  out->mF.mX[94UL] = -0.0;
  out->mF.mX[95UL] = (t8449->mX.mX[205UL] * zc_int1184 - t8449->mX.mX[143UL]) /
    1094.6513219702053;
  out->mF.mX[96UL] = (t8449->mX.mX[206UL] * intrm_sf_mf_397 - t8449->mX.mX[143UL])
    / 3239.4854008314264;
  out->mF.mX[97UL] = -0.0;
  out->mF.mX[98UL] = -0.0;
  out->mF.mX[99UL] = -0.0;
  out->mF.mX[100UL] = (t8449->mX.mX[214UL] *
                       Accumalator_Module_Five1_Battery_Table_Based28_stateOfCharge
                       - t8449->mX.mX[155UL]) / 2340.2408637873755;
  out->mF.mX[101UL] = (t8449->mX.mX[215UL] * zc_int1188 - t8449->mX.mX[155UL]) /
    26655.229591836738;
  out->mF.mX[102UL] = -0.0;
  out->mF.mX[103UL] = -0.0;
  out->mF.mX[104UL] = -0.0;
  out->mF.mX[105UL] = (t8449->mX.mX[223UL] * intrm_sf_mf_406 - t8449->mX.mX
                       [193UL]) / 1094.6513219702053;
  out->mF.mX[106UL] = (t8449->mX.mX[224UL] * zc_int1191 - t8449->mX.mX[193UL]) /
    3239.4854008314264;
  out->mF.mX[107UL] = -0.0;
  out->mF.mX[108UL] = -0.0;
  out->mF.mX[109UL] = -0.0;
  out->mF.mX[110UL] = (t8449->mX.mX[232UL] * zc_int1193 - t8449->mX.mX[121UL]) /
    1094.6513219702053;
  out->mF.mX[111UL] = (t8449->mX.mX[233UL] * zc_int1194 - t8449->mX.mX[121UL]) /
    3239.4854008314264;
  out->mF.mX[112UL] = -0.0;
  out->mF.mX[113UL] = -0.0;
  out->mF.mX[114UL] = -0.0;
  out->mF.mX[115UL] = (t8449->mX.mX[244UL] * zc_int1196 -
                       Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[116UL] = (t8449->mX.mX[245UL] * intrm_sf_mf_421 -
                       Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[117UL] = -0.0;
  out->mF.mX[118UL] = -0.0;
  out->mF.mX[119UL] = -0.0;
  out->mF.mX[120UL] = (t8449->mX.mX[256UL] *
                       Accumalator_Module_Five1_Battery_Table_Based31_stateOfCharge
                       - Accumalator_Module_Five1_Battery_Table_Based31_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[121UL] = (t8449->mX.mX[257UL] * zc_int1200 -
                       Accumalator_Module_Five1_Battery_Table_Based31_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[122UL] = -0.0;
  out->mF.mX[123UL] = -0.0;
  out->mF.mX[124UL] = -0.0;
  out->mF.mX[125UL] = (t8449->mX.mX[265UL] *
                       Accumalator_Module_Five1_Battery_Table_Based32_stateOfCharge
                       - t8449->mX.mX[1UL]) / 1094.6513219702053;
  out->mF.mX[126UL] = (t8449->mX.mX[266UL] * zc_int1203 - t8449->mX.mX[1UL]) /
    3239.4854008314264;
  out->mF.mX[127UL] = -0.0;
  out->mF.mX[128UL] = -0.0;
  out->mF.mX[129UL] = -0.0;
  out->mF.mX[130UL] = (t8449->mX.mX[275UL] *
                       Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge
                       - Accumalator_Module_Five1_Battery_Table_Based33_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[131UL] = (t8449->mX.mX[276UL] * intrm_sf_mf_439 -
                       Accumalator_Module_Five1_Battery_Table_Based33_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[132UL] = -0.0;
  out->mF.mX[133UL] = -0.0;
  out->mF.mX[134UL] = -0.0;
  out->mF.mX[135UL] = (t8449->mX.mX[285UL] * intrm_sf_mf_442 -
                       Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[136UL] = (t8449->mX.mX[286UL] * intrm_sf_mf_445 -
                       Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[137UL] = -0.0;
  out->mF.mX[138UL] = -0.0;
  out->mF.mX[139UL] = -0.0;
  out->mF.mX[140UL] = (t8449->mX.mX[294UL] * intrm_sf_mf_448 - t8449->mX.mX
                       [283UL]) / 1094.6513219702053;
  out->mF.mX[141UL] = (t8449->mX.mX[295UL] * intrm_sf_mf_451 - t8449->mX.mX
                       [283UL]) / 3239.4854008314264;
  out->mF.mX[142UL] = -0.0;
  out->mF.mX[143UL] = -0.0;
  out->mF.mX[144UL] = -0.0;
  out->mF.mX[145UL] = (t8449->mX.mX[303UL] * intrm_sf_mf_454 - t8449->mX.mX
                       [240UL]) / 1094.6513219702053;
  out->mF.mX[146UL] = (t8449->mX.mX[304UL] * zc_int1215 - t8449->mX.mX[240UL]) /
    3239.4854008314264;
  out->mF.mX[147UL] = -0.0;
  out->mF.mX[148UL] = -0.0;
  out->mF.mX[149UL] = -0.0;
  out->mF.mX[150UL] = (t8449->mX.mX[314UL] * intrm_sf_mf_460 -
                       Accumalator_Module_Five1_Battery_Table_Based37_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[151UL] = (t8449->mX.mX[315UL] * intrm_sf_mf_463 -
                       Accumalator_Module_Five1_Battery_Table_Based37_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[152UL] = -0.0;
  out->mF.mX[153UL] = -0.0;
  out->mF.mX[154UL] = -0.0;
  out->mF.mX[155UL] = (t8449->mX.mX[323UL] * intrm_sf_mf_466 - t8449->mX.mX
                       [252UL]) / 1094.6513219702053;
  out->mF.mX[156UL] = (t8449->mX.mX[324UL] * intrm_sf_mf_469 - t8449->mX.mX
                       [252UL]) / 3239.4854008314264;
  out->mF.mX[157UL] = -0.0;
  out->mF.mX[158UL] = -0.0;
  out->mF.mX[159UL] = -0.0;
  out->mF.mX[160UL] = (t8449->mX.mX[332UL] *
                       Accumalator_Module_Five1_Battery_Table_Based39_stateOfCharge
                       - t8449->mX.mX[273UL]) / 1094.6513219702053;
  out->mF.mX[161UL] = (t8449->mX.mX[333UL] * intrm_sf_mf_475 - t8449->mX.mX
                       [273UL]) / 3239.4854008314264;
  out->mF.mX[162UL] = -0.0;
  out->mF.mX[163UL] = -0.0;
  out->mF.mX[164UL] = -0.0;
  out->mF.mX[165UL] = (t8449->mX.mX[342UL] * zc_int1226 -
                       Accumalator_Module_Five1_Battery_Table_Based4_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[166UL] = (t8449->mX.mX[343UL] * zc_int1227 -
                       Accumalator_Module_Five1_Battery_Table_Based4_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[167UL] = -0.0;
  out->mF.mX[168UL] = -0.0;
  out->mF.mX[169UL] = -0.0;
  out->mF.mX[170UL] = (t8449->mX.mX[351UL] *
                       Accumalator_Module_Five1_Battery_Table_Based40_stateOfCharge
                       - t8449->mX.mX[311UL]) / 1094.6513219702053;
  out->mF.mX[171UL] = (t8449->mX.mX[352UL] * zc_int1230 - t8449->mX.mX[311UL]) /
    3239.4854008314264;
  out->mF.mX[172UL] = -0.0;
  out->mF.mX[173UL] = -0.0;
  out->mF.mX[174UL] = -0.0;
  out->mF.mX[175UL] = (t8449->mX.mX[363UL] * intrm_sf_mf_490 -
                       Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[176UL] = (t8449->mX.mX[364UL] * zc_int1233 -
                       Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[177UL] = -0.0;
  out->mF.mX[178UL] = -0.0;
  out->mF.mX[179UL] = -0.0;
  out->mF.mX[180UL] = (t8449->mX.mX[375UL] * zc_int1235 -
                       Accumalator_Module_Five1_Battery_Table_Based42_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[181UL] = (t8449->mX.mX[376UL] * zc_int1236 -
                       Accumalator_Module_Five1_Battery_Table_Based42_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[182UL] = -0.0;
  out->mF.mX[183UL] = -0.0;
  out->mF.mX[184UL] = -0.0;
  out->mF.mX[185UL] = (t8449->mX.mX[385UL] * intrm_sf_mf_502 -
                       Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[186UL] = (t8449->mX.mX[386UL] * zc_int1239 -
                       Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[187UL] = -0.0;
  out->mF.mX[188UL] = -0.0;
  out->mF.mX[189UL] = -0.0;
  out->mF.mX[190UL] = (t8449->mX.mX[395UL] *
                       Accumalator_Module_Five1_Battery_Table_Based44_stateOfCharge
                       - Accumalator_Module_Five1_Battery_Table_Based44_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[191UL] = (t8449->mX.mX[396UL] * intrm_sf_mf_511 -
                       Accumalator_Module_Five1_Battery_Table_Based44_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[192UL] = -0.0;
  out->mF.mX[193UL] = -0.0;
  out->mF.mX[194UL] = -0.0;
  out->mF.mX[195UL] = (t8449->mX.mX[404UL] * intrm_sf_mf_514 - t8449->mX.mX
                       [393UL]) / 1094.6513219702053;
  out->mF.mX[196UL] = (t8449->mX.mX[405UL] * intrm_sf_mf_517 - t8449->mX.mX
                       [393UL]) / 3239.4854008314264;
  out->mF.mX[197UL] = -0.0;
  out->mF.mX[198UL] = -0.0;
  out->mF.mX[199UL] = -0.0;
  out->mF.mX[200UL] = (t8449->mX.mX[413UL] * intrm_sf_mf_520 - t8449->mX.mX
                       [359UL]) / 1094.6513219702053;
  out->mF.mX[201UL] = (t8449->mX.mX[414UL] * intrm_sf_mf_523 - t8449->mX.mX
                       [359UL]) / 3239.4854008314264;
  out->mF.mX[202UL] = -0.0;
  out->mF.mX[203UL] = -0.0;
  out->mF.mX[204UL] = -0.0;
  out->mF.mX[205UL] = (t8449->mX.mX[424UL] *
                       Accumalator_Module_Five1_Battery_Table_Based47_stateOfCharge
                       - Accumalator_Module_Five1_Battery_Table_Based47_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[206UL] = (t8449->mX.mX[425UL] * zc_int1251 -
                       Accumalator_Module_Five1_Battery_Table_Based47_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[207UL] = -0.0;
  out->mF.mX[208UL] = -0.0;
  out->mF.mX[209UL] = -0.0;
  out->mF.mX[210UL] = (t8449->mX.mX[433UL] * intrm_sf_mf_532 - t8449->mX.mX
                       [371UL]) / 1094.6513219702053;
  out->mF.mX[211UL] = (t8449->mX.mX[434UL] * zc_int1254 - t8449->mX.mX[371UL]) /
    3239.4854008314264;
  out->mF.mX[212UL] = -0.0;
  out->mF.mX[213UL] = -0.0;
  out->mF.mX[214UL] = -0.0;
  out->mF.mX[215UL] = (t8449->mX.mX[442UL] * intrm_sf_mf_538 - t8449->mX.mX
                       [383UL]) / 1094.6513219702053;
  out->mF.mX[216UL] = (t8449->mX.mX[443UL] * intrm_sf_mf_541 - t8449->mX.mX
                       [383UL]) / 3239.4854008314264;
  out->mF.mX[217UL] = -0.0;
  out->mF.mX[218UL] = -0.0;
  out->mF.mX[219UL] = -0.0;
  out->mF.mX[220UL] = (t8449->mX.mX[451UL] * zc_int1259 - t8449->mX.mX[39UL]) /
    1094.6513219702053;
  out->mF.mX[221UL] = (t8449->mX.mX[452UL] * zc_int1260 - t8449->mX.mX[39UL]) /
    3239.4854008314264;
  out->mF.mX[222UL] = -0.0;
  out->mF.mX[223UL] = -0.0;
  out->mF.mX[224UL] = -0.0;
  out->mF.mX[225UL] = (t8449->mX.mX[460UL] * zc_int1262 - t8449->mX.mX[421UL]) /
    1094.6513219702053;
  out->mF.mX[226UL] = (t8449->mX.mX[461UL] * intrm_sf_mf_553 - t8449->mX.mX
                       [421UL]) / 3239.4854008314264;
  out->mF.mX[227UL] = -0.0;
  out->mF.mX[228UL] = -0.0;
  out->mF.mX[229UL] = -0.0;
  out->mF.mX[230UL] = (t8449->mX.mX[471UL] * zc_int1265 -
                       Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[231UL] = (t8449->mX.mX[472UL] * intrm_sf_mf_559 -
                       Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[232UL] = -0.0;
  out->mF.mX[233UL] = -0.0;
  out->mF.mX[234UL] = -0.0;
  out->mF.mX[235UL] = (t8449->mX.mX[482UL] * zc_int1268 -
                       Accumalator_Module_Five1_Battery_Table_Based52_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[236UL] = (t8449->mX.mX[483UL] * intrm_sf_mf_565 -
                       Accumalator_Module_Five1_Battery_Table_Based52_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[237UL] = -0.0;
  out->mF.mX[238UL] = -0.0;
  out->mF.mX[239UL] = -0.0;
  out->mF.mX[240UL] = (t8449->mX.mX[492UL] *
                       Accumalator_Module_Five1_Battery_Table_Based53_stateOfCharge
                       - Accumalator_Module_Five1_Battery_Table_Based53_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[241UL] = (t8449->mX.mX[493UL] * intrm_sf_mf_571 -
                       Accumalator_Module_Five1_Battery_Table_Based53_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[242UL] = -0.0;
  out->mF.mX[243UL] = -0.0;
  out->mF.mX[244UL] = -0.0;
  out->mF.mX[245UL] = (t8449->mX.mX[501UL] *
                       Accumalator_Module_Five1_Battery_Table_Based54_stateOfCharge
                       - t8449->mX.mX[468UL]) / 1094.6513219702053;
  out->mF.mX[246UL] = (t8449->mX.mX[502UL] * zc_int1275 - t8449->mX.mX[468UL]) /
    3239.4854008314264;
  out->mF.mX[247UL] = -0.0;
  out->mF.mX[248UL] = -0.0;
  out->mF.mX[249UL] = -0.0;
  out->mF.mX[250UL] = (t8449->mX.mX[510UL] *
                       Accumalator_Module_Five1_Battery_Table_Based58_stateOfCharge
                       - t8449->mX.mX[479UL]) / 1094.6513219702053;
  out->mF.mX[251UL] = (t8449->mX.mX[511UL] * zc_int1278 - t8449->mX.mX[479UL]) /
    3239.4854008314264;
  out->mF.mX[252UL] = -0.0;
  out->mF.mX[253UL] = -0.0;
  out->mF.mX[254UL] = -0.0;
  out->mF.mX[255UL] = (t8449->mX.mX[519UL] * zc_int1280 - t8449->mX.mX[490UL]) /
    1094.6513219702053;
  out->mF.mX[256UL] = (t8449->mX.mX[520UL] * intrm_sf_mf_589 - t8449->mX.mX
                       [490UL]) / 3239.4854008314264;
  out->mF.mX[257UL] = -0.0;
  out->mF.mX[258UL] = -0.0;
  out->mF.mX[259UL] = -0.0;
  out->mF.mX[260UL] = (t8449->mX.mX[528UL] * zc_int1283 - t8449->mX.mX[51UL]) /
    1094.6513219702053;
  out->mF.mX[261UL] = (t8449->mX.mX[529UL] * intrm_sf_mf_595 - t8449->mX.mX[51UL])
    / 3239.4854008314264;
  out->mF.mX[262UL] = -0.0;
  out->mF.mX[263UL] = -0.0;
  out->mF.mX[264UL] = -0.0;
  out->mF.mX[265UL] = (t8449->mX.mX[537UL] * intrm_sf_mf_598 - t8449->mX.mX
                       [340UL]) / 1094.6513219702053;
  out->mF.mX[266UL] = (t8449->mX.mX[538UL] * intrm_sf_mf_601 - t8449->mX.mX
                       [340UL]) / 3239.4854008314264;
  out->mF.mX[267UL] = -0.0;
  out->mF.mX[268UL] = -0.0;
  out->mF.mX[269UL] = -0.0;
  out->mF.mX[270UL] = (t8449->mX.mX[546UL] * zc_int1289 - t8449->mX.mX[71UL]) /
    1094.6513219702053;
  out->mF.mX[271UL] = (t8449->mX.mX[547UL] * intrm_sf_mf_607 - t8449->mX.mX[71UL])
    / 3239.4854008314264;
  out->mF.mX[272UL] = -0.0;
  out->mF.mX[273UL] = -0.0;
  out->mF.mX[274UL] = -0.0;
  out->mF.mX[275UL] = (t8449->mX.mX[555UL] * zc_int1292 - t8449->mX.mX[93UL]) /
    1094.6513219702053;
  out->mF.mX[276UL] = (t8449->mX.mX[556UL] * zc_int1293 - t8449->mX.mX[93UL]) /
    3239.4854008314264;
  out->mF.mX[277UL] = -0.0;
  out->mF.mX[278UL] = -0.0;
  out->mF.mX[279UL] = -0.0;
  out->mF.mX[280UL] = (t8449->mX.mX[567UL] * zc_int1295 -
                       Accumalator_Module_One1_Battery_Table_Based1_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[281UL] = (t8449->mX.mX[568UL] * intrm_sf_mf_619 -
                       Accumalator_Module_One1_Battery_Table_Based1_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[282UL] = -0.0;
  out->mF.mX[283UL] = -0.0;
  out->mF.mX[284UL] = -0.0;
  out->mF.mX[285UL] = (t8449->mX.mX[579UL] * zc_int1298 -
                       Accumalator_Module_One1_Battery_Table_Based10_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[286UL] = (t8449->mX.mX[580UL] * zc_int1299 -
                       Accumalator_Module_One1_Battery_Table_Based10_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[287UL] = -0.0;
  out->mF.mX[288UL] = -0.0;
  out->mF.mX[289UL] = -0.0;
  out->mF.mX[290UL] = (t8449->mX.mX[591UL] *
                       Accumalator_Module_One1_Battery_Table_Based11_stateOfCharge
                       - Accumalator_Module_One1_Battery_Table_Based11_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[291UL] = (t8449->mX.mX[592UL] * intrm_sf_mf_631 -
                       Accumalator_Module_One1_Battery_Table_Based11_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[292UL] = -0.0;
  out->mF.mX[293UL] = -0.0;
  out->mF.mX[294UL] = -0.0;
  out->mF.mX[295UL] = (t8449->mX.mX[603UL] * intrm_sf_mf_634 -
                       Accumalator_Module_One1_Battery_Table_Based12_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[296UL] = (t8449->mX.mX[604UL] * zc_int1305 -
                       Accumalator_Module_One1_Battery_Table_Based12_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[297UL] = -0.0;
  out->mF.mX[298UL] = -0.0;
  out->mF.mX[299UL] = -0.0;
  out->mF.mX[300UL] = (t8449->mX.mX[614UL] *
                       Accumalator_Module_One1_Battery_Table_Based13_stateOfCharge
                       - Accumalator_Module_One1_Battery_Table_Based13_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[301UL] = (t8449->mX.mX[615UL] * intrm_sf_mf_643 -
                       Accumalator_Module_One1_Battery_Table_Based13_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[302UL] = -0.0;
  out->mF.mX[303UL] = -0.0;
  out->mF.mX[304UL] = -0.0;
  out->mF.mX[305UL] = (t8449->mX.mX[623UL] * zc_int1310 - t8449->mX.mX[587UL]) /
    1094.6513219702053;
  out->mF.mX[306UL] = (t8449->mX.mX[624UL] * zc_int1311 - t8449->mX.mX[587UL]) /
    3239.4854008314264;
  out->mF.mX[307UL] = -0.0;
  out->mF.mX[308UL] = -0.0;
  out->mF.mX[309UL] = -0.0;
  out->mF.mX[310UL] = (t8449->mX.mX[634UL] *
                       Accumalator_Module_One1_Battery_Table_Based15_stateOfCharge
                       - Accumalator_Module_One1_Battery_Table_Based15_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[311UL] = (t8449->mX.mX[635UL] * intrm_sf_mf_655 -
                       Accumalator_Module_One1_Battery_Table_Based15_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[312UL] = -0.0;
  out->mF.mX[313UL] = -0.0;
  out->mF.mX[314UL] = -0.0;
  out->mF.mX[315UL] = (t8449->mX.mX[645UL] * zc_int1316 -
                       Accumalator_Module_One1_Battery_Table_Based16_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[316UL] = (t8449->mX.mX[646UL] * zc_int1317 -
                       Accumalator_Module_One1_Battery_Table_Based16_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[317UL] = -0.0;
  out->mF.mX[318UL] = -0.0;
  out->mF.mX[319UL] = -0.0;
  out->mF.mX[320UL] = (t8449->mX.mX[655UL] * zc_int1319 -
                       Accumalator_Module_One1_Battery_Table_Based17_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[321UL] = (t8449->mX.mX[656UL] * zc_int1320 -
                       Accumalator_Module_One1_Battery_Table_Based17_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[322UL] = -0.0;
  out->mF.mX[323UL] = -0.0;
  out->mF.mX[324UL] = -0.0;
  out->mF.mX[325UL] = (t8449->mX.mX[664UL] * intrm_sf_mf_670 - t8449->mX.mX
                       [575UL]) / 1094.6513219702053;
  out->mF.mX[326UL] = (t8449->mX.mX[665UL] * zc_int1323 - t8449->mX.mX[575UL]) /
    3239.4854008314264;
  out->mF.mX[327UL] = -0.0;
  out->mF.mX[328UL] = -0.0;
  out->mF.mX[329UL] = -0.0;
  out->mF.mX[330UL] = (t8449->mX.mX[673UL] *
                       Accumalator_Module_One1_Battery_Table_Based19_stateOfCharge
                       - t8449->mX.mX[642UL]) / 1094.6513219702053;
  out->mF.mX[331UL] = (t8449->mX.mX[674UL] * intrm_sf_mf_679 - t8449->mX.mX
                       [642UL]) / 3239.4854008314264;
  out->mF.mX[332UL] = -0.0;
  out->mF.mX[333UL] = -0.0;
  out->mF.mX[334UL] = -0.0;
  out->mF.mX[335UL] = (t8449->mX.mX[683UL] *
                       Accumalator_Module_One1_Battery_Table_Based2_stateOfCharge
                       - Accumalator_Module_One1_Battery_Table_Based2_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[336UL] = (t8449->mX.mX[684UL] * zc_int1329 -
                       Accumalator_Module_One1_Battery_Table_Based2_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[337UL] = -0.0;
  out->mF.mX[338UL] = -0.0;
  out->mF.mX[339UL] = -0.0;
  out->mF.mX[340UL] = (t8449->mX.mX[695UL] * zc_int1331 -
                       Accumalator_Module_One1_Battery_Table_Based20_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[341UL] = (t8449->mX.mX[696UL] * intrm_sf_mf_691 -
                       Accumalator_Module_One1_Battery_Table_Based20_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[342UL] = -0.0;
  out->mF.mX[343UL] = -0.0;
  out->mF.mX[344UL] = -0.0;
  out->mF.mX[345UL] = (t8449->mX.mX[707UL] * intrm_sf_mf_694 -
                       Accumalator_Module_One1_Battery_Table_Based21_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[346UL] = (t8449->mX.mX[708UL] * zc_int1335 -
                       Accumalator_Module_One1_Battery_Table_Based21_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[347UL] = -0.0;
  out->mF.mX[348UL] = -0.0;
  out->mF.mX[349UL] = -0.0;
  out->mF.mX[350UL] = (t8449->mX.mX[717UL] * intrm_sf_mf_700 -
                       Accumalator_Module_One1_Battery_Table_Based22_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[351UL] = (t8449->mX.mX[718UL] * zc_int1338 -
                       Accumalator_Module_One1_Battery_Table_Based22_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[352UL] = -0.0;
  out->mF.mX[353UL] = -0.0;
  out->mF.mX[354UL] = -0.0;
  out->mF.mX[355UL] = (t8449->mX.mX[727UL] * intrm_sf_mf_706 -
                       Accumalator_Module_One1_Battery_Table_Based23_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[356UL] = (t8449->mX.mX[728UL] * intrm_sf_mf_709 -
                       Accumalator_Module_One1_Battery_Table_Based23_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[357UL] = -0.0;
  out->mF.mX[358UL] = -0.0;
  out->mF.mX[359UL] = -0.0;
  out->mF.mX[360UL] = (t8449->mX.mX[736UL] * zc_int1343 - t8449->mX.mX[725UL]) /
    1094.6513219702053;
  out->mF.mX[361UL] = (t8449->mX.mX[737UL] * intrm_sf_mf_715 - t8449->mX.mX
                       [725UL]) / 3239.4854008314264;
  out->mF.mX[362UL] = -0.0;
  out->mF.mX[363UL] = -0.0;
  out->mF.mX[364UL] = -0.0;
  out->mF.mX[365UL] = (t8449->mX.mX[745UL] * intrm_sf_mf_718 - t8449->mX.mX
                       [691UL]) / 1094.6513219702053;
  out->mF.mX[366UL] = (t8449->mX.mX[746UL] * intrm_sf_mf_721 - t8449->mX.mX
                       [691UL]) / 3239.4854008314264;
  out->mF.mX[367UL] = -0.0;
  out->mF.mX[368UL] = -0.0;
  out->mF.mX[369UL] = -0.0;
  out->mF.mX[370UL] = (t8449->mX.mX[756UL] *
                       Accumalator_Module_One1_Battery_Table_Based26_stateOfCharge
                       - Accumalator_Module_One1_Battery_Table_Based26_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[371UL] = (t8449->mX.mX[757UL] * intrm_sf_mf_727 -
                       Accumalator_Module_One1_Battery_Table_Based26_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[372UL] = -0.0;
  out->mF.mX[373UL] = -0.0;
  out->mF.mX[374UL] = -0.0;
  out->mF.mX[375UL] = (t8449->mX.mX[765UL] * zc_int1352 - t8449->mX.mX[703UL]) /
    1094.6513219702053;
  out->mF.mX[376UL] = (t8449->mX.mX[766UL] * intrm_sf_mf_733 - t8449->mX.mX
                       [703UL]) / 3239.4854008314264;
  out->mF.mX[377UL] = -0.0;
  out->mF.mX[378UL] = -0.0;
  out->mF.mX[379UL] = -0.0;
  out->mF.mX[380UL] = (t8449->mX.mX[774UL] * intrm_sf_mf_736 - t8449->mX.mX
                       [715UL]) / 2340.2408637873755;
  out->mF.mX[381UL] = (t8449->mX.mX[775UL] * intrm_sf_mf_739 - t8449->mX.mX
                       [715UL]) / 26655.229591836738;
  out->mF.mX[382UL] = -0.0;
  out->mF.mX[383UL] = -0.0;
  out->mF.mX[384UL] = -0.0;
  out->mF.mX[385UL] = (t8449->mX.mX[783UL] * intrm_sf_mf_742 - t8449->mX.mX
                       [753UL]) / 1094.6513219702053;
  out->mF.mX[386UL] = (t8449->mX.mX[784UL] * intrm_sf_mf_745 - t8449->mX.mX
                       [753UL]) / 3239.4854008314264;
  out->mF.mX[387UL] = -0.0;
  out->mF.mX[388UL] = -0.0;
  out->mF.mX[389UL] = -0.0;
  out->mF.mX[390UL] = (t8449->mX.mX[792UL] * intrm_sf_mf_748 - t8449->mX.mX
                       [681UL]) / 1094.6513219702053;
  out->mF.mX[391UL] = (t8449->mX.mX[793UL] * zc_int1362 - t8449->mX.mX[681UL]) /
    3239.4854008314264;
  out->mF.mX[392UL] = -0.0;
  out->mF.mX[393UL] = -0.0;
  out->mF.mX[394UL] = -0.0;
  out->mF.mX[395UL] = (t8449->mX.mX[804UL] *
                       Accumalator_Module_One1_Battery_Table_Based30_stateOfCharge
                       - Accumalator_Module_One1_Battery_Table_Based30_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[396UL] = (t8449->mX.mX[805UL] * intrm_sf_mf_757 -
                       Accumalator_Module_One1_Battery_Table_Based30_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[397UL] = -0.0;
  out->mF.mX[398UL] = -0.0;
  out->mF.mX[399UL] = -0.0;
  out->mF.mX[400UL] = (t8449->mX.mX[816UL] *
                       Accumalator_Module_One1_Battery_Table_Based31_stateOfCharge
                       - Accumalator_Module_One1_Battery_Table_Based31_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[401UL] = (t8449->mX.mX[817UL] * zc_int1368 -
                       Accumalator_Module_One1_Battery_Table_Based31_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[402UL] = -0.0;
  out->mF.mX[403UL] = -0.0;
  out->mF.mX[404UL] = -0.0;
  out->mF.mX[405UL] = (t8449->mX.mX[825UL] * zc_int1370 - t8449->mX.mX[563UL]) /
    1094.6513219702053;
  out->mF.mX[406UL] = (t8449->mX.mX[826UL] * zc_int1371 - t8449->mX.mX[563UL]) /
    3239.4854008314264;
  out->mF.mX[407UL] = -0.0;
  out->mF.mX[408UL] = -0.0;
  out->mF.mX[409UL] = -0.0;
  out->mF.mX[410UL] = (t8449->mX.mX[835UL] * intrm_sf_mf_772 -
                       Accumalator_Module_One1_Battery_Table_Based33_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[411UL] = (t8449->mX.mX[836UL] * zc_int1374 -
                       Accumalator_Module_One1_Battery_Table_Based33_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[412UL] = -0.0;
  out->mF.mX[413UL] = -0.0;
  out->mF.mX[414UL] = -0.0;
  out->mF.mX[415UL] = (t8449->mX.mX[845UL] * intrm_sf_mf_778 -
                       Accumalator_Module_One1_Battery_Table_Based34_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[416UL] = (t8449->mX.mX[846UL] * intrm_sf_mf_781 -
                       Accumalator_Module_One1_Battery_Table_Based34_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[417UL] = -0.0;
  out->mF.mX[418UL] = -0.0;
  out->mF.mX[419UL] = -0.0;
  out->mF.mX[420UL] = (t8449->mX.mX[854UL] *
                       Accumalator_Module_One1_Battery_Table_Based35_stateOfCharge
                       - t8449->mX.mX[843UL]) / 1094.6513219702053;
  out->mF.mX[421UL] = (t8449->mX.mX[855UL] * zc_int1380 - t8449->mX.mX[843UL]) /
    3239.4854008314264;
  out->mF.mX[422UL] = -0.0;
  out->mF.mX[423UL] = -0.0;
  out->mF.mX[424UL] = -0.0;
  out->mF.mX[425UL] = (t8449->mX.mX[863UL] *
                       Accumalator_Module_One1_Battery_Table_Based36_stateOfCharge
                       - t8449->mX.mX[800UL]) / 1094.6513219702053;
  out->mF.mX[426UL] = (t8449->mX.mX[864UL] * intrm_sf_mf_793 - t8449->mX.mX
                       [800UL]) / 3239.4854008314264;
  out->mF.mX[427UL] = -0.0;
  out->mF.mX[428UL] = -0.0;
  out->mF.mX[429UL] = -0.0;
  out->mF.mX[430UL] = (t8449->mX.mX[874UL] *
                       Accumalator_Module_One1_Battery_Table_Based37_stateOfCharge
                       - Accumalator_Module_One1_Battery_Table_Based37_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[431UL] = (t8449->mX.mX[875UL] * zc_int1386 -
                       Accumalator_Module_One1_Battery_Table_Based37_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[432UL] = -0.0;
  out->mF.mX[433UL] = -0.0;
  out->mF.mX[434UL] = -0.0;
  out->mF.mX[435UL] = (t8449->mX.mX[883UL] * zc_int1388 - t8449->mX.mX[812UL]) /
    1094.6513219702053;
  out->mF.mX[436UL] = (t8449->mX.mX[884UL] * zc_int1389 - t8449->mX.mX[812UL]) /
    3239.4854008314264;
  out->mF.mX[437UL] = -0.0;
  out->mF.mX[438UL] = -0.0;
  out->mF.mX[439UL] = -0.0;
  out->mF.mX[440UL] = (t8449->mX.mX[892UL] * intrm_sf_mf_808 - t8449->mX.mX
                       [833UL]) / 1094.6513219702053;
  out->mF.mX[441UL] = (t8449->mX.mX[893UL] * intrm_sf_mf_811 - t8449->mX.mX
                       [833UL]) / 3239.4854008314264;
  out->mF.mX[442UL] = -0.0;
  out->mF.mX[443UL] = -0.0;
  out->mF.mX[444UL] = -0.0;
  out->mF.mX[445UL] = (t8449->mX.mX[902UL] * zc_int1394 -
                       Accumalator_Module_One1_Battery_Table_Based4_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[446UL] = (t8449->mX.mX[903UL] * zc_int1395 -
                       Accumalator_Module_One1_Battery_Table_Based4_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[447UL] = -0.0;
  out->mF.mX[448UL] = -0.0;
  out->mF.mX[449UL] = -0.0;
  out->mF.mX[450UL] = (t8449->mX.mX[911UL] * intrm_sf_mf_820 - t8449->mX.mX
                       [871UL]) / 1094.6513219702053;
  out->mF.mX[451UL] = (t8449->mX.mX[912UL] * intrm_sf_mf_823 - t8449->mX.mX
                       [871UL]) / 3239.4854008314264;
  out->mF.mX[452UL] = -0.0;
  out->mF.mX[453UL] = -0.0;
  out->mF.mX[454UL] = -0.0;
  out->mF.mX[455UL] = (t8449->mX.mX[923UL] *
                       Accumalator_Module_One1_Battery_Table_Based41_stateOfCharge
                       - Accumalator_Module_One1_Battery_Table_Based41_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[456UL] = (t8449->mX.mX[924UL] * zc_int1401 -
                       Accumalator_Module_One1_Battery_Table_Based41_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[457UL] = -0.0;
  out->mF.mX[458UL] = -0.0;
  out->mF.mX[459UL] = -0.0;
  out->mF.mX[460UL] = (t8449->mX.mX[935UL] * zc_int1403 -
                       Accumalator_Module_One1_Battery_Table_Based42_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[461UL] = (t8449->mX.mX[936UL] * intrm_sf_mf_835 -
                       Accumalator_Module_One1_Battery_Table_Based42_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[462UL] = -0.0;
  out->mF.mX[463UL] = -0.0;
  out->mF.mX[464UL] = -0.0;
  out->mF.mX[465UL] = (t8449->mX.mX[945UL] * zc_int1406 -
                       Accumalator_Module_One1_Battery_Table_Based43_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[466UL] = (t8449->mX.mX[946UL] * zc_int1407 -
                       Accumalator_Module_One1_Battery_Table_Based43_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[467UL] = -0.0;
  out->mF.mX[468UL] = -0.0;
  out->mF.mX[469UL] = -0.0;
  out->mF.mX[470UL] = (t8449->mX.mX[955UL] * zc_int1409 -
                       Accumalator_Module_One1_Battery_Table_Based44_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[471UL] = (t8449->mX.mX[956UL] * zc_int1410 -
                       Accumalator_Module_One1_Battery_Table_Based44_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[472UL] = -0.0;
  out->mF.mX[473UL] = -0.0;
  out->mF.mX[474UL] = -0.0;
  out->mF.mX[475UL] = (t8449->mX.mX[964UL] * intrm_sf_mf_850 - t8449->mX.mX
                       [953UL]) / 1094.6513219702053;
  out->mF.mX[476UL] = (t8449->mX.mX[965UL] * intrm_sf_mf_853 - t8449->mX.mX
                       [953UL]) / 3239.4854008314264;
  out->mF.mX[477UL] = -0.0;
  out->mF.mX[478UL] = -0.0;
  out->mF.mX[479UL] = -0.0;
  out->mF.mX[480UL] = (t8449->mX.mX[973UL] * intrm_sf_mf_856 - t8449->mX.mX
                       [919UL]) / 1094.6513219702053;
  out->mF.mX[481UL] = (t8449->mX.mX[974UL] * zc_int1416 - t8449->mX.mX[919UL]) /
    3239.4854008314264;
  out->mF.mX[482UL] = -0.0;
  out->mF.mX[483UL] = -0.0;
  out->mF.mX[484UL] = -0.0;
  out->mF.mX[485UL] = (t8449->mX.mX[984UL] * intrm_sf_mf_862 -
                       Accumalator_Module_One1_Battery_Table_Based47_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[486UL] = (t8449->mX.mX[985UL] * intrm_sf_mf_865 -
                       Accumalator_Module_One1_Battery_Table_Based47_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[487UL] = -0.0;
  out->mF.mX[488UL] = -0.0;
  out->mF.mX[489UL] = -0.0;
  out->mF.mX[490UL] = (t8449->mX.mX[993UL] * zc_int1421 - t8449->mX.mX[931UL]) /
    1094.6513219702053;
  out->mF.mX[491UL] = (t8449->mX.mX[994UL] * zc_int1422 - t8449->mX.mX[931UL]) /
    3239.4854008314264;
  out->mF.mX[492UL] = -0.0;
  out->mF.mX[493UL] = -0.0;
  out->mF.mX[494UL] = -0.0;
  out->mF.mX[495UL] = (t8449->mX.mX[1002UL] * zc_int1424 - t8449->mX.mX[943UL]) /
    1094.6513219702053;
  out->mF.mX[496UL] = (t8449->mX.mX[1003UL] * zc_int1425 - t8449->mX.mX[943UL]) /
    3239.4854008314264;
  out->mF.mX[497UL] = -0.0;
  out->mF.mX[498UL] = -0.0;
  out->mF.mX[499UL] = -0.0;
  out->mF.mX[500UL] = (t8449->mX.mX[1011UL] * intrm_sf_mf_880 - t8449->mX.mX
                       [599UL]) / 1094.6513219702053;
  out->mF.mX[501UL] = (t8449->mX.mX[1012UL] * zc_int1428 - t8449->mX.mX[599UL]) /
    3239.4854008314264;
  out->mF.mX[502UL] = -0.0;
  out->mF.mX[503UL] = -0.0;
  out->mF.mX[504UL] = -0.0;
  out->mF.mX[505UL] = (t8449->mX.mX[1020UL] * zc_int1430 - t8449->mX.mX[981UL]) /
    1094.6513219702053;
  out->mF.mX[506UL] = (t8449->mX.mX[1021UL] * zc_int1431 - t8449->mX.mX[981UL]) /
    3239.4854008314264;
  out->mF.mX[507UL] = -0.0;
  out->mF.mX[508UL] = -0.0;
  out->mF.mX[509UL] = -0.0;
  out->mF.mX[510UL] = (t8449->mX.mX[1037UL] * zc_int1433 -
                       Accumalator_Module_One1_Battery_Table_Based51_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[511UL] = (t8449->mX.mX[1038UL] * zc_int1434 -
                       Accumalator_Module_One1_Battery_Table_Based51_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[512UL] = -0.0;
  out->mF.mX[513UL] = -0.0;
  out->mF.mX[514UL] = -0.0;
  out->mF.mX[515UL] = (t8449->mX.mX[1049UL] * intrm_sf_mf_898 -
                       Accumalator_Module_One1_Battery_Table_Based52_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[516UL] = (t8449->mX.mX[1050UL] * zc_int1437 -
                       Accumalator_Module_One1_Battery_Table_Based52_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[517UL] = -0.0;
  out->mF.mX[518UL] = -0.0;
  out->mF.mX[519UL] = -0.0;
  out->mF.mX[520UL] = (t8449->mX.mX[1059UL] * zc_int1439 -
                       Accumalator_Module_One1_Battery_Table_Based53_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[521UL] = (t8449->mX.mX[1060UL] * zc_int1440 -
                       Accumalator_Module_One1_Battery_Table_Based53_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[522UL] = -0.0;
  out->mF.mX[523UL] = -0.0;
  out->mF.mX[524UL] = -0.0;
  out->mF.mX[525UL] = (t8449->mX.mX[1068UL] *
                       Accumalator_Module_One1_Battery_Table_Based54_stateOfCharge
                       - t8449->mX.mX[1028UL]) / 1094.6513219702053;
  out->mF.mX[526UL] = (t8449->mX.mX[1069UL] * intrm_sf_mf_913 - t8449->mX.mX
                       [1028UL]) / 3239.4854008314264;
  out->mF.mX[527UL] = -0.0;
  out->mF.mX[528UL] = -0.0;
  out->mF.mX[529UL] = -0.0;
  out->mF.mX[530UL] = (t8449->mX.mX[1077UL] *
                       Accumalator_Module_One1_Battery_Table_Based58_stateOfCharge
                       - t8449->mX.mX[1045UL]) / 1094.6513219702053;
  out->mF.mX[531UL] = (t8449->mX.mX[1078UL] * zc_int1446 - t8449->mX.mX[1045UL])
    / 3239.4854008314264;
  out->mF.mX[532UL] = -0.0;
  out->mF.mX[533UL] = -0.0;
  out->mF.mX[534UL] = -0.0;
  out->mF.mX[535UL] = (t8449->mX.mX[1086UL] *
                       Accumalator_Module_One1_Battery_Table_Based59_stateOfCharge
                       - t8449->mX.mX[1057UL]) / 1094.6513219702053;
  out->mF.mX[536UL] = (t8449->mX.mX[1087UL] * intrm_sf_mf_925 - t8449->mX.mX
                       [1057UL]) / 3239.4854008314264;
  out->mF.mX[537UL] = -0.0;
  out->mF.mX[538UL] = -0.0;
  out->mF.mX[539UL] = -0.0;
  out->mF.mX[540UL] = (t8449->mX.mX[1095UL] * intrm_sf_mf_928 - t8449->mX.mX
                       [611UL]) / 1094.6513219702053;
  out->mF.mX[541UL] = (t8449->mX.mX[1096UL] * intrm_sf_mf_931 - t8449->mX.mX
                       [611UL]) / 3239.4854008314264;
  out->mF.mX[542UL] = -0.0;
  out->mF.mX[543UL] = -0.0;
  out->mF.mX[544UL] = -0.0;
  out->mF.mX[545UL] = (t8449->mX.mX[1104UL] * zc_int1454 - t8449->mX.mX[900UL]) /
    1094.6513219702053;
  out->mF.mX[546UL] = (t8449->mX.mX[1105UL] * intrm_sf_mf_937 - t8449->mX.mX
                       [900UL]) / 3239.4854008314264;
  out->mF.mX[547UL] = -0.0;
  out->mF.mX[548UL] = -0.0;
  out->mF.mX[549UL] = -0.0;
  out->mF.mX[550UL] = (t8449->mX.mX[1113UL] * intrm_sf_mf_940 - t8449->mX.mX
                       [631UL]) / 1094.6513219702053;
  out->mF.mX[551UL] = (t8449->mX.mX[1114UL] * intrm_sf_mf_943 - t8449->mX.mX
                       [631UL]) / 3239.4854008314264;
  out->mF.mX[552UL] = -0.0;
  out->mF.mX[553UL] = -0.0;
  out->mF.mX[554UL] = -0.0;
  out->mF.mX[555UL] = (t8449->mX.mX[1122UL] * zc_int1460 - t8449->mX.mX[653UL]) /
    1094.6513219702053;
  out->mF.mX[556UL] = (t8449->mX.mX[1123UL] * zc_int1461 - t8449->mX.mX[653UL]) /
    3239.4854008314264;
  out->mF.mX[557UL] = -0.0;
  out->mF.mX[558UL] = -0.0;
  out->mF.mX[559UL] = -0.0;
  out->mF.mX[560UL] = (t8449->mX.mX[1134UL] * intrm_sf_mf_952 -
                       Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[561UL] = (t8449->mX.mX[1135UL] * zc_int1464 -
                       Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[562UL] = -0.0;
  out->mF.mX[563UL] = -0.0;
  out->mF.mX[564UL] = -0.0;
  out->mF.mX[565UL] = (t8449->mX.mX[1146UL] * intrm_sf_mf_958 -
                       Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[566UL] = (t8449->mX.mX[1147UL] * zc_int1467 -
                       Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[567UL] = -0.0;
  out->mF.mX[568UL] = -0.0;
  out->mF.mX[569UL] = -0.0;
  out->mF.mX[570UL] = (t8449->mX.mX[1158UL] *
                       Accumalator_Module_Three1_Battery_Table_Based11_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[571UL] = (t8449->mX.mX[1159UL] * zc_int1470 -
                       Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[572UL] = -0.0;
  out->mF.mX[573UL] = -0.0;
  out->mF.mX[574UL] = -0.0;
  out->mF.mX[575UL] = (t8449->mX.mX[1170UL] * zc_int1472 -
                       Accumalator_Module_Three1_Battery_Table_Based12_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[576UL] = (t8449->mX.mX[1171UL] * zc_int1473 -
                       Accumalator_Module_Three1_Battery_Table_Based12_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[577UL] = -0.0;
  out->mF.mX[578UL] = -0.0;
  out->mF.mX[579UL] = -0.0;
  out->mF.mX[580UL] = (t8449->mX.mX[1181UL] * zc_int1475 -
                       Accumalator_Module_Three1_Battery_Table_Based13_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[581UL] = (t8449->mX.mX[1182UL] * intrm_sf_mf_979 -
                       Accumalator_Module_Three1_Battery_Table_Based13_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[582UL] = -0.0;
  out->mF.mX[583UL] = -0.0;
  out->mF.mX[584UL] = -0.0;
  out->mF.mX[585UL] = (t8449->mX.mX[1190UL] * zc_int1478 - t8449->mX.mX[1154UL])
    / 1094.6513219702053;
  out->mF.mX[586UL] = (t8449->mX.mX[1191UL] * zc_int1479 - t8449->mX.mX[1154UL])
    / 3239.4854008314264;
  out->mF.mX[587UL] = -0.0;
  out->mF.mX[588UL] = -0.0;
  out->mF.mX[589UL] = -0.0;
  out->mF.mX[590UL] = (t8449->mX.mX[1201UL] * intrm_sf_mf_988 -
                       Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[591UL] = (t8449->mX.mX[1202UL] * zc_int1482 -
                       Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[592UL] = -0.0;
  out->mF.mX[593UL] = -0.0;
  out->mF.mX[594UL] = -0.0;
  out->mF.mX[595UL] = (t8449->mX.mX[1212UL] *
                       Accumalator_Module_Three1_Battery_Table_Based16_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[596UL] = (t8449->mX.mX[1213UL] * zc_int1485 -
                       Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[597UL] = -0.0;
  out->mF.mX[598UL] = -0.0;
  out->mF.mX[599UL] = -0.0;
  out->mF.mX[600UL] = (t8449->mX.mX[1222UL] *
                       Accumalator_Module_Three1_Battery_Table_Based17_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[601UL] = (t8449->mX.mX[1223UL] * intrm_sf_mf_1003 -
                       Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[602UL] = -0.0;
  out->mF.mX[603UL] = -0.0;
  out->mF.mX[604UL] = -0.0;
  out->mF.mX[605UL] = (t8449->mX.mX[1231UL] * intrm_sf_mf_1006 - t8449->mX.mX
                       [1142UL]) / 1094.6513219702053;
  out->mF.mX[606UL] = (t8449->mX.mX[1232UL] * t6733 - t8449->mX.mX[1142UL]) /
    3239.4854008314264;
  out->mF.mX[607UL] = -0.0;
  out->mF.mX[608UL] = -0.0;
  out->mF.mX[609UL] = -0.0;
  out->mF.mX[610UL] = (t8449->mX.mX[1240UL] * intrm_sf_mf_1012 - t8449->mX.mX
                       [1209UL]) / 1094.6513219702053;
  out->mF.mX[611UL] = (t8449->mX.mX[1241UL] * zc_int1494 - t8449->mX.mX[1209UL])
    / 3239.4854008314264;
  out->mF.mX[612UL] = -0.0;
  out->mF.mX[613UL] = -0.0;
  out->mF.mX[614UL] = -0.0;
  out->mF.mX[615UL] = (t8449->mX.mX[1250UL] *
                       Accumalator_Module_Three1_Battery_Table_Based2_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[616UL] = (t8449->mX.mX[1251UL] * intrm_sf_mf_1021 -
                       Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[617UL] = -0.0;
  out->mF.mX[618UL] = -0.0;
  out->mF.mX[619UL] = -0.0;
  out->mF.mX[620UL] = (t8449->mX.mX[1262UL] * zc_int1499 -
                       Accumalator_Module_Three1_Battery_Table_Based20_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[621UL] = (t8449->mX.mX[1263UL] * intrm_sf_mf_1027 -
                       Accumalator_Module_Three1_Battery_Table_Based20_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[622UL] = -0.0;
  out->mF.mX[623UL] = -0.0;
  out->mF.mX[624UL] = -0.0;
  out->mF.mX[625UL] = (t8449->mX.mX[1274UL] * intrm_sf_mf_1030 -
                       Accumalator_Module_Three1_Battery_Table_Based21_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[626UL] = (t8449->mX.mX[1275UL] * t6738 -
                       Accumalator_Module_Three1_Battery_Table_Based21_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[627UL] = -0.0;
  out->mF.mX[628UL] = -0.0;
  out->mF.mX[629UL] = -0.0;
  out->mF.mX[630UL] = (t8449->mX.mX[1284UL] * zc_int1505 -
                       Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[631UL] = (t8449->mX.mX[1285UL] * t6739 -
                       Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[632UL] = -0.0;
  out->mF.mX[633UL] = -0.0;
  out->mF.mX[634UL] = -0.0;
  out->mF.mX[635UL] = (t8449->mX.mX[1294UL] * intrm_sf_mf_1042 -
                       Accumalator_Module_Three1_Battery_Table_Based23_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[636UL] = (t8449->mX.mX[1295UL] * t6740 -
                       Accumalator_Module_Three1_Battery_Table_Based23_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[637UL] = -0.0;
  out->mF.mX[638UL] = -0.0;
  out->mF.mX[639UL] = -0.0;
  out->mF.mX[640UL] = (t8449->mX.mX[1303UL] * intrm_sf_mf_1048 - t8449->mX.mX
                       [1292UL]) / 1094.6513219702053;
  out->mF.mX[641UL] = (t8449->mX.mX[1304UL] * zc_int1512 - t8449->mX.mX[1292UL])
    / 3239.4854008314264;
  out->mF.mX[642UL] = -0.0;
  out->mF.mX[643UL] = -0.0;
  out->mF.mX[644UL] = -0.0;
  out->mF.mX[645UL] = (t8449->mX.mX[1312UL] * zc_int1514 - t8449->mX.mX[1258UL])
    / 1094.6513219702053;
  out->mF.mX[646UL] = (t8449->mX.mX[1313UL] * zc_int1515 - t8449->mX.mX[1258UL])
    / 3239.4854008314264;
  out->mF.mX[647UL] = -0.0;
  out->mF.mX[648UL] = -0.0;
  out->mF.mX[649UL] = -0.0;
  out->mF.mX[650UL] = (t8449->mX.mX[1323UL] *
                       Accumalator_Module_Three1_Battery_Table_Based26_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[651UL] = (t8449->mX.mX[1324UL] * intrm_sf_mf_1063 -
                       Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[652UL] = -0.0;
  out->mF.mX[653UL] = -0.0;
  out->mF.mX[654UL] = -0.0;
  out->mF.mX[655UL] = (t8449->mX.mX[1332UL] * zc_int1520 - t8449->mX.mX[1270UL])
    / 1094.6513219702053;
  out->mF.mX[656UL] = (t8449->mX.mX[1333UL] * intrm_sf_mf_1069 - t8449->mX.mX
                       [1270UL]) / 3239.4854008314264;
  out->mF.mX[657UL] = -0.0;
  out->mF.mX[658UL] = -0.0;
  out->mF.mX[659UL] = -0.0;
  out->mF.mX[660UL] = (t8449->mX.mX[1341UL] * zc_int1523 - t8449->mX.mX[1282UL])
    / 2340.2408637873755;
  out->mF.mX[661UL] = (t8449->mX.mX[1342UL] * intrm_sf_mf_1075 - t8449->mX.mX
                       [1282UL]) / 26655.229591836738;
  out->mF.mX[662UL] = -0.0;
  out->mF.mX[663UL] = -0.0;
  out->mF.mX[664UL] = -0.0;
  out->mF.mX[665UL] = (t8449->mX.mX[1350UL] *
                       Accumalator_Module_Three1_Battery_Table_Based29_stateOfCharge
                       - t8449->mX.mX[1320UL]) / 1094.6513219702053;
  out->mF.mX[666UL] = (t8449->mX.mX[1351UL] * zc_int1527 - t8449->mX.mX[1320UL])
    / 3239.4854008314264;
  out->mF.mX[667UL] = -0.0;
  out->mF.mX[668UL] = -0.0;
  out->mF.mX[669UL] = -0.0;
  out->mF.mX[670UL] = (t8449->mX.mX[1359UL] *
                       Accumalator_Module_Three1_Battery_Table_Based3_stateOfCharge
                       - t8449->mX.mX[1248UL]) / 1094.6513219702053;
  out->mF.mX[671UL] = (t8449->mX.mX[1360UL] * zc_int1530 - t8449->mX.mX[1248UL])
    / 3239.4854008314264;
  out->mF.mX[672UL] = -0.0;
  out->mF.mX[673UL] = -0.0;
  out->mF.mX[674UL] = -0.0;
  out->mF.mX[675UL] = (t8449->mX.mX[1371UL] * zc_int1532 -
                       Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[676UL] = (t8449->mX.mX[1372UL] * intrm_sf_mf_1093 -
                       Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[677UL] = -0.0;
  out->mF.mX[678UL] = -0.0;
  out->mF.mX[679UL] = -0.0;
  out->mF.mX[680UL] = (t8449->mX.mX[1383UL] *
                       Accumalator_Module_Three1_Battery_Table_Based31_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based31_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[681UL] = (t8449->mX.mX[1384UL] * zc_int1536 -
                       Accumalator_Module_Three1_Battery_Table_Based31_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[682UL] = -0.0;
  out->mF.mX[683UL] = -0.0;
  out->mF.mX[684UL] = -0.0;
  out->mF.mX[685UL] = (t8449->mX.mX[1392UL] *
                       Accumalator_Module_Three1_Battery_Table_Based32_stateOfCharge
                       - t8449->mX.mX[1130UL]) / 1094.6513219702053;
  out->mF.mX[686UL] = (t8449->mX.mX[1393UL] * intrm_sf_mf_1105 - t8449->mX.mX
                       [1130UL]) / 3239.4854008314264;
  out->mF.mX[687UL] = -0.0;
  out->mF.mX[688UL] = -0.0;
  out->mF.mX[689UL] = -0.0;
  out->mF.mX[690UL] = (t8449->mX.mX[1402UL] *
                       Accumalator_Module_Three1_Battery_Table_Based33_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based33_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[691UL] = (t8449->mX.mX[1403UL] * intrm_sf_mf_1111 -
                       Accumalator_Module_Three1_Battery_Table_Based33_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[692UL] = -0.0;
  out->mF.mX[693UL] = -0.0;
  out->mF.mX[694UL] = -0.0;
  out->mF.mX[695UL] = (t8449->mX.mX[1412UL] * intrm_sf_mf_1114 -
                       Accumalator_Module_Three1_Battery_Table_Based34_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[696UL] = (t8449->mX.mX[1413UL] * zc_int1545 -
                       Accumalator_Module_Three1_Battery_Table_Based34_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[697UL] = -0.0;
  out->mF.mX[698UL] = -0.0;
  out->mF.mX[699UL] = -0.0;
  out->mF.mX[700UL] = (t8449->mX.mX[1421UL] * zc_int1547 - t8449->mX.mX[1410UL])
    / 1094.6513219702053;
  out->mF.mX[701UL] = (t8449->mX.mX[1422UL] * zc_int1548 - t8449->mX.mX[1410UL])
    / 3239.4854008314264;
  out->mF.mX[702UL] = -0.0;
  out->mF.mX[703UL] = -0.0;
  out->mF.mX[704UL] = -0.0;
  out->mF.mX[705UL] = (t8449->mX.mX[1430UL] *
                       Accumalator_Module_Three1_Battery_Table_Based36_stateOfCharge
                       - t8449->mX.mX[1367UL]) / 1094.6513219702053;
  out->mF.mX[706UL] = (t8449->mX.mX[1431UL] * intrm_sf_mf_1129 - t8449->mX.mX
                       [1367UL]) / 3239.4854008314264;
  out->mF.mX[707UL] = -0.0;
  out->mF.mX[708UL] = -0.0;
  out->mF.mX[709UL] = -0.0;
  out->mF.mX[710UL] = (t8449->mX.mX[1441UL] * zc_int1553 -
                       Accumalator_Module_Three1_Battery_Table_Based37_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[711UL] = (t8449->mX.mX[1442UL] * intrm_sf_mf_1135 -
                       Accumalator_Module_Three1_Battery_Table_Based37_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[712UL] = -0.0;
  out->mF.mX[713UL] = -0.0;
  out->mF.mX[714UL] = -0.0;
  out->mF.mX[715UL] = (t8449->mX.mX[1450UL] * zc_int1556 - t8449->mX.mX[1379UL])
    / 1094.6513219702053;
  out->mF.mX[716UL] = (t8449->mX.mX[1451UL] * zc_int1557 - t8449->mX.mX[1379UL])
    / 3239.4854008314264;
  out->mF.mX[717UL] = -0.0;
  out->mF.mX[718UL] = -0.0;
  out->mF.mX[719UL] = -0.0;
  out->mF.mX[720UL] = (t8449->mX.mX[1459UL] * intrm_sf_mf_1144 - t8449->mX.mX
                       [1400UL]) / 1094.6513219702053;
  out->mF.mX[721UL] = (t8449->mX.mX[1460UL] * zc_int1560 - t8449->mX.mX[1400UL])
    / 3239.4854008314264;
  out->mF.mX[722UL] = -0.0;
  out->mF.mX[723UL] = -0.0;
  out->mF.mX[724UL] = -0.0;
  out->mF.mX[725UL] = (t8449->mX.mX[1469UL] * zc_int1562 -
                       Accumalator_Module_Three1_Battery_Table_Based4_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[726UL] = (t8449->mX.mX[1470UL] * zc_int1563 -
                       Accumalator_Module_Three1_Battery_Table_Based4_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[727UL] = -0.0;
  out->mF.mX[728UL] = -0.0;
  out->mF.mX[729UL] = -0.0;
  out->mF.mX[730UL] = (t8449->mX.mX[1478UL] * zc_int1565 - t8449->mX.mX[1438UL])
    / 1094.6513219702053;
  out->mF.mX[731UL] = (t8449->mX.mX[1479UL] * intrm_sf_mf_1159 - t8449->mX.mX
                       [1438UL]) / 3239.4854008314264;
  out->mF.mX[732UL] = -0.0;
  out->mF.mX[733UL] = -0.0;
  out->mF.mX[734UL] = -0.0;
  out->mF.mX[735UL] = (t8449->mX.mX[1490UL] *
                       Accumalator_Module_Three1_Battery_Table_Based41_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based41_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[736UL] = (t8449->mX.mX[1491UL] * intrm_sf_mf_1165 -
                       Accumalator_Module_Three1_Battery_Table_Based41_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[737UL] = -0.0;
  out->mF.mX[738UL] = -0.0;
  out->mF.mX[739UL] = -0.0;
  out->mF.mX[740UL] = (t8449->mX.mX[1502UL] *
                       Accumalator_Module_Three1_Battery_Table_Based42_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based42_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[741UL] = (t8449->mX.mX[1503UL] * zc_int1572 -
                       Accumalator_Module_Three1_Battery_Table_Based42_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[742UL] = -0.0;
  out->mF.mX[743UL] = -0.0;
  out->mF.mX[744UL] = -0.0;
  out->mF.mX[745UL] = (t8449->mX.mX[1512UL] *
                       Accumalator_Module_Three1_Battery_Table_Based43_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[746UL] = (t8449->mX.mX[1513UL] * intrm_sf_mf_1177 -
                       Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[747UL] = -0.0;
  out->mF.mX[748UL] = -0.0;
  out->mF.mX[749UL] = -0.0;
  out->mF.mX[750UL] = (t8449->mX.mX[1522UL] * zc_int1577 -
                       Accumalator_Module_Three1_Battery_Table_Based44_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[751UL] = (t8449->mX.mX[1523UL] * zc_int1578 -
                       Accumalator_Module_Three1_Battery_Table_Based44_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[752UL] = -0.0;
  out->mF.mX[753UL] = -0.0;
  out->mF.mX[754UL] = -0.0;
  out->mF.mX[755UL] = (t8449->mX.mX[1531UL] * zc_int1580 - t8449->mX.mX[1520UL])
    / 1094.6513219702053;
  out->mF.mX[756UL] = (t8449->mX.mX[1532UL] * intrm_sf_mf_1189 - t8449->mX.mX
                       [1520UL]) / 3239.4854008314264;
  out->mF.mX[757UL] = -0.0;
  out->mF.mX[758UL] = -0.0;
  out->mF.mX[759UL] = -0.0;
  out->mF.mX[760UL] = (t8449->mX.mX[1540UL] * zc_int1583 - t8449->mX.mX[1486UL])
    / 1094.6513219702053;
  out->mF.mX[761UL] = (t8449->mX.mX[1541UL] * intrm_sf_mf_1195 - t8449->mX.mX
                       [1486UL]) / 3239.4854008314264;
  out->mF.mX[762UL] = -0.0;
  out->mF.mX[763UL] = -0.0;
  out->mF.mX[764UL] = -0.0;
  out->mF.mX[765UL] = (t8449->mX.mX[1551UL] *
                       Accumalator_Module_Three1_Battery_Table_Based47_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[766UL] = (t8449->mX.mX[1552UL] * zc_int1587 -
                       Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[767UL] = -0.0;
  out->mF.mX[768UL] = -0.0;
  out->mF.mX[769UL] = -0.0;
  out->mF.mX[770UL] = (t8449->mX.mX[1560UL] * zc_int1589 - t8449->mX.mX[1498UL])
    / 1094.6513219702053;
  out->mF.mX[771UL] = (t8449->mX.mX[1561UL] * intrm_sf_mf_1207 - t8449->mX.mX
                       [1498UL]) / 3239.4854008314264;
  out->mF.mX[772UL] = -0.0;
  out->mF.mX[773UL] = -0.0;
  out->mF.mX[774UL] = -0.0;
  out->mF.mX[775UL] = (t8449->mX.mX[1569UL] * intrm_sf_mf_1210 - t8449->mX.mX
                       [1510UL]) / 1094.6513219702053;
  out->mF.mX[776UL] = (t8449->mX.mX[1570UL] * zc_int1593 - t8449->mX.mX[1510UL])
    / 3239.4854008314264;
  out->mF.mX[777UL] = -0.0;
  out->mF.mX[778UL] = -0.0;
  out->mF.mX[779UL] = -0.0;
  out->mF.mX[780UL] = (t8449->mX.mX[1578UL] * intrm_sf_mf_1216 - t8449->mX.mX
                       [1166UL]) / 1094.6513219702053;
  out->mF.mX[781UL] = (t8449->mX.mX[1579UL] * zc_int1596 - t8449->mX.mX[1166UL])
    / 3239.4854008314264;
  out->mF.mX[782UL] = -0.0;
  out->mF.mX[783UL] = -0.0;
  out->mF.mX[784UL] = -0.0;
  out->mF.mX[785UL] = (t8449->mX.mX[1587UL] * zc_int1598 - t8449->mX.mX[1548UL])
    / 1094.6513219702053;
  out->mF.mX[786UL] = (t8449->mX.mX[1588UL] * intrm_sf_mf_1225 - t8449->mX.mX
                       [1548UL]) / 3239.4854008314264;
  out->mF.mX[787UL] = -0.0;
  out->mF.mX[788UL] = -0.0;
  out->mF.mX[789UL] = -0.0;
  out->mF.mX[790UL] = (t8449->mX.mX[1598UL] *
                       Accumalator_Module_Three1_Battery_Table_Based51_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based51_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[791UL] = (t8449->mX.mX[1599UL] * intrm_sf_mf_1231 -
                       Accumalator_Module_Three1_Battery_Table_Based51_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[792UL] = -0.0;
  out->mF.mX[793UL] = -0.0;
  out->mF.mX[794UL] = -0.0;
  out->mF.mX[795UL] = (t8449->mX.mX[1610UL] *
                       Accumalator_Module_Three1_Battery_Table_Based52_stateOfCharge
                       - Accumalator_Module_Three1_Battery_Table_Based52_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[796UL] = (t8449->mX.mX[1611UL] * zc_int1605 -
                       Accumalator_Module_Three1_Battery_Table_Based52_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[797UL] = -0.0;
  out->mF.mX[798UL] = -0.0;
  out->mF.mX[799UL] = -0.0;
  out->mF.mX[800UL] = (t8449->mX.mX[1620UL] * zc_int1607 -
                       Accumalator_Module_Three1_Battery_Table_Based53_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[801UL] = (t8449->mX.mX[1621UL] * zc_int1608 -
                       Accumalator_Module_Three1_Battery_Table_Based53_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[802UL] = -0.0;
  out->mF.mX[803UL] = -0.0;
  out->mF.mX[804UL] = -0.0;
  out->mF.mX[805UL] = (t8449->mX.mX[1629UL] * zc_int1610 - t8449->mX.mX[1595UL])
    / 1094.6513219702053;
  out->mF.mX[806UL] = (t8449->mX.mX[1630UL] * intrm_sf_mf_1249 - t8449->mX.mX
                       [1595UL]) / 3239.4854008314264;
  out->mF.mX[807UL] = -0.0;
  out->mF.mX[808UL] = -0.0;
  out->mF.mX[809UL] = -0.0;
  out->mF.mX[810UL] = (t8449->mX.mX[1638UL] *
                       Accumalator_Module_Three1_Battery_Table_Based58_stateOfCharge
                       - t8449->mX.mX[1606UL]) / 1094.6513219702053;
  out->mF.mX[811UL] = (t8449->mX.mX[1639UL] * zc_int1614 - t8449->mX.mX[1606UL])
    / 3239.4854008314264;
  out->mF.mX[812UL] = -0.0;
  out->mF.mX[813UL] = -0.0;
  out->mF.mX[814UL] = -0.0;
  out->mF.mX[815UL] = (t8449->mX.mX[1647UL] * zc_int1616 - t8449->mX.mX[1618UL])
    / 1094.6513219702053;
  out->mF.mX[816UL] = (t8449->mX.mX[1648UL] * intrm_sf_mf_1261 - t8449->mX.mX
                       [1618UL]) / 3239.4854008314264;
  out->mF.mX[817UL] = -0.0;
  out->mF.mX[818UL] = -0.0;
  out->mF.mX[819UL] = -0.0;
  out->mF.mX[820UL] = (t8449->mX.mX[1656UL] *
                       Accumalator_Module_Three1_Battery_Table_Based6_stateOfCharge
                       - t8449->mX.mX[1178UL]) / 1094.6513219702053;
  out->mF.mX[821UL] = (t8449->mX.mX[1657UL] * zc_int1620 - t8449->mX.mX[1178UL])
    / 3239.4854008314264;
  out->mF.mX[822UL] = -0.0;
  out->mF.mX[823UL] = -0.0;
  out->mF.mX[824UL] = -0.0;
  out->mF.mX[825UL] = (t8449->mX.mX[1665UL] * zc_int1622 - t8449->mX.mX[1467UL])
    / 1094.6513219702053;
  out->mF.mX[826UL] = (t8449->mX.mX[1666UL] * zc_int1623 - t8449->mX.mX[1467UL])
    / 3239.4854008314264;
  out->mF.mX[827UL] = -0.0;
  out->mF.mX[828UL] = -0.0;
  out->mF.mX[829UL] = -0.0;
  out->mF.mX[830UL] = (t8449->mX.mX[1674UL] * zc_int1625 - t8449->mX.mX[1198UL])
    / 1094.6513219702053;
  out->mF.mX[831UL] = (t8449->mX.mX[1675UL] * zc_int1626 - t8449->mX.mX[1198UL])
    / 3239.4854008314264;
  out->mF.mX[832UL] = -0.0;
  out->mF.mX[833UL] = -0.0;
  out->mF.mX[834UL] = -0.0;
  out->mF.mX[835UL] = (t8449->mX.mX[1683UL] * intrm_sf_mf_1282 - t8449->mX.mX
                       [1220UL]) / 1094.6513219702053;
  out->mF.mX[836UL] = (t8449->mX.mX[1684UL] * intrm_sf_mf_1285 - t8449->mX.mX
                       [1220UL]) / 3239.4854008314264;
  out->mF.mX[837UL] = -0.0;
  out->mF.mX[838UL] = -0.0;
  out->mF.mX[839UL] = -0.0;
  out->mF.mX[840UL] = (t8449->mX.mX[1695UL] * intrm_sf_mf_1288 -
                       Accumalator_Module_Two_Battery_Table_Based1_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[841UL] = (t8449->mX.mX[1696UL] * zc_int1632 -
                       Accumalator_Module_Two_Battery_Table_Based1_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[842UL] = -0.0;
  out->mF.mX[843UL] = -0.0;
  out->mF.mX[844UL] = -0.0;
  out->mF.mX[845UL] = (t8449->mX.mX[1707UL] * zc_int1634 -
                       Accumalator_Module_Two_Battery_Table_Based10_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[846UL] = (t8449->mX.mX[1708UL] * zc_int1635 -
                       Accumalator_Module_Two_Battery_Table_Based10_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[847UL] = -0.0;
  out->mF.mX[848UL] = -0.0;
  out->mF.mX[849UL] = -0.0;
  out->mF.mX[850UL] = (t8449->mX.mX[1719UL] *
                       Accumalator_Module_Two_Battery_Table_Based11_stateOfCharge
                       - Accumalator_Module_Two_Battery_Table_Based11_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[851UL] = (t8449->mX.mX[1720UL] * zc_int1638 -
                       Accumalator_Module_Two_Battery_Table_Based11_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[852UL] = -0.0;
  out->mF.mX[853UL] = -0.0;
  out->mF.mX[854UL] = -0.0;
  out->mF.mX[855UL] = (t8449->mX.mX[1731UL] *
                       Accumalator_Module_Two_Battery_Table_Based12_stateOfCharge
                       - Accumalator_Module_Two_Battery_Table_Based12_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[856UL] = (t8449->mX.mX[1732UL] * intrm_sf_mf_1309 -
                       Accumalator_Module_Two_Battery_Table_Based12_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[857UL] = -0.0;
  out->mF.mX[858UL] = -0.0;
  out->mF.mX[859UL] = -0.0;
  out->mF.mX[860UL] = (t8449->mX.mX[1742UL] * zc_int1643 -
                       Accumalator_Module_Two_Battery_Table_Based13_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[861UL] = (t8449->mX.mX[1743UL] * intrm_sf_mf_1315 -
                       Accumalator_Module_Two_Battery_Table_Based13_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[862UL] = -0.0;
  out->mF.mX[863UL] = -0.0;
  out->mF.mX[864UL] = -0.0;
  out->mF.mX[865UL] = (t8449->mX.mX[1751UL] *
                       Accumalator_Module_Two_Battery_Table_Based14_stateOfCharge
                       - t8449->mX.mX[1715UL]) / 1094.6513219702053;
  out->mF.mX[866UL] = (t8449->mX.mX[1752UL] * intrm_sf_mf_1321 - t8449->mX.mX
                       [1715UL]) / 3239.4854008314264;
  out->mF.mX[867UL] = -0.0;
  out->mF.mX[868UL] = -0.0;
  out->mF.mX[869UL] = -0.0;
  out->mF.mX[870UL] = (t8449->mX.mX[1762UL] *
                       Accumalator_Module_Two_Battery_Table_Based15_stateOfCharge
                       - Accumalator_Module_Two_Battery_Table_Based15_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[871UL] = (t8449->mX.mX[1763UL] * intrm_sf_mf_1327 -
                       Accumalator_Module_Two_Battery_Table_Based15_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[872UL] = -0.0;
  out->mF.mX[873UL] = -0.0;
  out->mF.mX[874UL] = -0.0;
  out->mF.mX[875UL] = (t8449->mX.mX[1773UL] * intrm_sf_mf_1330 -
                       Accumalator_Module_Two_Battery_Table_Based16_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[876UL] = (t8449->mX.mX[1774UL] * intrm_sf_mf_1333 -
                       Accumalator_Module_Two_Battery_Table_Based16_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[877UL] = -0.0;
  out->mF.mX[878UL] = -0.0;
  out->mF.mX[879UL] = -0.0;
  out->mF.mX[880UL] = (t8449->mX.mX[1783UL] *
                       Accumalator_Module_Two_Battery_Table_Based17_stateOfCharge
                       - Accumalator_Module_Two_Battery_Table_Based17_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[881UL] = (t8449->mX.mX[1784UL] * intrm_sf_mf_1339 -
                       Accumalator_Module_Two_Battery_Table_Based17_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[882UL] = -0.0;
  out->mF.mX[883UL] = -0.0;
  out->mF.mX[884UL] = -0.0;
  out->mF.mX[885UL] = (t8449->mX.mX[1792UL] * zc_int1658 - t8449->mX.mX[1703UL])
    / 1094.6513219702053;
  out->mF.mX[886UL] = (t8449->mX.mX[1793UL] * intrm_sf_mf_1345 - t8449->mX.mX
                       [1703UL]) / 3239.4854008314264;
  out->mF.mX[887UL] = -0.0;
  out->mF.mX[888UL] = -0.0;
  out->mF.mX[889UL] = -0.0;
  out->mF.mX[890UL] = (t8449->mX.mX[1801UL] * zc_int1661 - t8449->mX.mX[1770UL])
    / 1094.6513219702053;
  out->mF.mX[891UL] = (t8449->mX.mX[1802UL] * zc_int1662 - t8449->mX.mX[1770UL])
    / 3239.4854008314264;
  out->mF.mX[892UL] = -0.0;
  out->mF.mX[893UL] = -0.0;
  out->mF.mX[894UL] = -0.0;
  out->mF.mX[895UL] = (t8449->mX.mX[1811UL] *
                       Accumalator_Module_Two_Battery_Table_Based2_stateOfCharge
                       - Accumalator_Module_Two_Battery_Table_Based2_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[896UL] = (t8449->mX.mX[1812UL] * intrm_sf_mf_1357 -
                       Accumalator_Module_Two_Battery_Table_Based2_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[897UL] = -0.0;
  out->mF.mX[898UL] = -0.0;
  out->mF.mX[899UL] = -0.0;
  out->mF.mX[900UL] = (t8449->mX.mX[1823UL] *
                       Accumalator_Module_Two_Battery_Table_Based20_stateOfCharge
                       - Accumalator_Module_Two_Battery_Table_Based20_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[901UL] = (t8449->mX.mX[1824UL] * zc_int1668 -
                       Accumalator_Module_Two_Battery_Table_Based20_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[902UL] = -0.0;
  out->mF.mX[903UL] = -0.0;
  out->mF.mX[904UL] = -0.0;
  out->mF.mX[905UL] = (t8449->mX.mX[1835UL] *
                       Accumalator_Module_Two_Battery_Table_Based21_stateOfCharge
                       - Accumalator_Module_Two_Battery_Table_Based21_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[906UL] = (t8449->mX.mX[1836UL] * intrm_sf_mf_1369 -
                       Accumalator_Module_Two_Battery_Table_Based21_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[907UL] = -0.0;
  out->mF.mX[908UL] = -0.0;
  out->mF.mX[909UL] = -0.0;
  out->mF.mX[910UL] = (t8449->mX.mX[1845UL] * zc_int1673 -
                       Accumalator_Module_Two_Battery_Table_Based22_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[911UL] = (t8449->mX.mX[1846UL] * zc_int1674 -
                       Accumalator_Module_Two_Battery_Table_Based22_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[912UL] = -0.0;
  out->mF.mX[913UL] = -0.0;
  out->mF.mX[914UL] = -0.0;
  out->mF.mX[915UL] = (t8449->mX.mX[1855UL] * intrm_sf_mf_1378 -
                       Accumalator_Module_Two_Battery_Table_Based23_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[916UL] = (t8449->mX.mX[1856UL] * intrm_sf_mf_1381 -
                       Accumalator_Module_Two_Battery_Table_Based23_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[917UL] = -0.0;
  out->mF.mX[918UL] = -0.0;
  out->mF.mX[919UL] = -0.0;
  out->mF.mX[920UL] = (t8449->mX.mX[1864UL] *
                       Accumalator_Module_Two_Battery_Table_Based24_stateOfCharge
                       - t8449->mX.mX[1853UL]) / 1094.6513219702053;
  out->mF.mX[921UL] = (t8449->mX.mX[1865UL] * intrm_sf_mf_1387 - t8449->mX.mX
                       [1853UL]) / 3239.4854008314264;
  out->mF.mX[922UL] = -0.0;
  out->mF.mX[923UL] = -0.0;
  out->mF.mX[924UL] = -0.0;
  out->mF.mX[925UL] = (t8449->mX.mX[1873UL] *
                       Accumalator_Module_Two_Battery_Table_Based25_stateOfCharge
                       - t8449->mX.mX[1819UL]) / 1094.6513219702053;
  out->mF.mX[926UL] = (t8449->mX.mX[1874UL] * zc_int1683 - t8449->mX.mX[1819UL])
    / 3239.4854008314264;
  out->mF.mX[927UL] = -0.0;
  out->mF.mX[928UL] = -0.0;
  out->mF.mX[929UL] = -0.0;
  out->mF.mX[930UL] = (t8449->mX.mX[1884UL] *
                       Accumalator_Module_Two_Battery_Table_Based26_stateOfCharge
                       - Accumalator_Module_Two_Battery_Table_Based26_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[931UL] = (t8449->mX.mX[1885UL] * intrm_sf_mf_1399 -
                       Accumalator_Module_Two_Battery_Table_Based26_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[932UL] = -0.0;
  out->mF.mX[933UL] = -0.0;
  out->mF.mX[934UL] = -0.0;
  out->mF.mX[935UL] = (t8449->mX.mX[1893UL] *
                       Accumalator_Module_Two_Battery_Table_Based27_stateOfCharge
                       - t8449->mX.mX[1831UL]) / 1094.6513219702053;
  out->mF.mX[936UL] = (t8449->mX.mX[1894UL] * intrm_sf_mf_1405 - t8449->mX.mX
                       [1831UL]) / 3239.4854008314264;
  out->mF.mX[937UL] = -0.0;
  out->mF.mX[938UL] = -0.0;
  out->mF.mX[939UL] = -0.0;
  out->mF.mX[940UL] = (t8449->mX.mX[1902UL] *
                       Accumalator_Module_Two_Battery_Table_Based28_stateOfCharge
                       - t8449->mX.mX[1843UL]) / 2340.2408637873755;
  out->mF.mX[941UL] = (t8449->mX.mX[1903UL] * intrm_sf_mf_1411 - t8449->mX.mX
                       [1843UL]) / 26655.229591836738;
  out->mF.mX[942UL] = -0.0;
  out->mF.mX[943UL] = -0.0;
  out->mF.mX[944UL] = -0.0;
  out->mF.mX[945UL] = (t8449->mX.mX[1911UL] * zc_int1694 - t8449->mX.mX[1881UL])
    / 1094.6513219702053;
  out->mF.mX[946UL] = (t8449->mX.mX[1912UL] * zc_int1695 - t8449->mX.mX[1881UL])
    / 3239.4854008314264;
  out->mF.mX[947UL] = -0.0;
  out->mF.mX[948UL] = -0.0;
  out->mF.mX[949UL] = -0.0;
  out->mF.mX[950UL] = (t8449->mX.mX[1920UL] *
                       Accumalator_Module_Two_Battery_Table_Based3_stateOfCharge
                       - t8449->mX.mX[1809UL]) / 1094.6513219702053;
  out->mF.mX[951UL] = (t8449->mX.mX[1921UL] * zc_int1698 - t8449->mX.mX[1809UL])
    / 3239.4854008314264;
  out->mF.mX[952UL] = -0.0;
  out->mF.mX[953UL] = -0.0;
  out->mF.mX[954UL] = -0.0;
  out->mF.mX[955UL] = (t8449->mX.mX[1932UL] * zc_int1700 -
                       Accumalator_Module_Two_Battery_Table_Based30_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[956UL] = (t8449->mX.mX[1933UL] * intrm_sf_mf_1429 -
                       Accumalator_Module_Two_Battery_Table_Based30_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[957UL] = -0.0;
  out->mF.mX[958UL] = -0.0;
  out->mF.mX[959UL] = -0.0;
  out->mF.mX[960UL] = (t8449->mX.mX[1944UL] *
                       Accumalator_Module_Two_Battery_Table_Based31_stateOfCharge
                       - Accumalator_Module_Two_Battery_Table_Based31_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[961UL] = (t8449->mX.mX[1945UL] * intrm_sf_mf_1435 -
                       Accumalator_Module_Two_Battery_Table_Based31_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[962UL] = -0.0;
  out->mF.mX[963UL] = -0.0;
  out->mF.mX[964UL] = -0.0;
  out->mF.mX[965UL] = (t8449->mX.mX[1953UL] *
                       Accumalator_Module_Two_Battery_Table_Based32_stateOfCharge
                       - t8449->mX.mX[1691UL]) / 1094.6513219702053;
  out->mF.mX[966UL] = (t8449->mX.mX[1954UL] * zc_int1707 - t8449->mX.mX[1691UL])
    / 3239.4854008314264;
  out->mF.mX[967UL] = -0.0;
  out->mF.mX[968UL] = -0.0;
  out->mF.mX[969UL] = -0.0;
  out->mF.mX[970UL] = (t8449->mX.mX[1963UL] * zc_int1709 -
                       Accumalator_Module_Two_Battery_Table_Based33_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[971UL] = (t8449->mX.mX[1964UL] * zc_int1710 -
                       Accumalator_Module_Two_Battery_Table_Based33_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[972UL] = -0.0;
  out->mF.mX[973UL] = -0.0;
  out->mF.mX[974UL] = -0.0;
  out->mF.mX[975UL] = (t8449->mX.mX[1973UL] *
                       Accumalator_Module_Two_Battery_Table_Based34_stateOfCharge
                       - Accumalator_Module_Two_Battery_Table_Based34_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[976UL] = (t8449->mX.mX[1974UL] * intrm_sf_mf_1453 -
                       Accumalator_Module_Two_Battery_Table_Based34_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[977UL] = -0.0;
  out->mF.mX[978UL] = -0.0;
  out->mF.mX[979UL] = -0.0;
  out->mF.mX[980UL] = (t8449->mX.mX[1982UL] * zc_int1715 - t8449->mX.mX[1971UL])
    / 1094.6513219702053;
  out->mF.mX[981UL] = (t8449->mX.mX[1983UL] * zc_int1716 - t8449->mX.mX[1971UL])
    / 3239.4854008314264;
  out->mF.mX[982UL] = -0.0;
  out->mF.mX[983UL] = -0.0;
  out->mF.mX[984UL] = -0.0;
  out->mF.mX[985UL] = (t8449->mX.mX[1991UL] * intrm_sf_mf_1462 - t8449->mX.mX
                       [1928UL]) / 1094.6513219702053;
  out->mF.mX[986UL] = (t8449->mX.mX[1992UL] * zc_int1719 - t8449->mX.mX[1928UL])
    / 3239.4854008314264;
  out->mF.mX[987UL] = -0.0;
  out->mF.mX[988UL] = -0.0;
  out->mF.mX[989UL] = -0.0;
  out->mF.mX[990UL] = (t8449->mX.mX[2001UL] *
                       Accumalator_Module_Two_Battery_Table_Based37_stateOfCharge
                       - t8449->mX.mX[2UL]) / 1094.6513219702053;
  out->mF.mX[991UL] = (t8449->mX.mX[2002UL] * zc_int1722 - t8449->mX.mX[2UL]) /
    3239.4854008314264;
  out->mF.mX[992UL] = -0.0;
  out->mF.mX[993UL] = -0.0;
  out->mF.mX[994UL] = -0.0;
  out->mF.mX[995UL] = (t8449->mX.mX[2010UL] *
                       Accumalator_Module_Two_Battery_Table_Based38_stateOfCharge
                       - t8449->mX.mX[1940UL]) / 1094.6513219702053;
  out->mF.mX[996UL] = (t8449->mX.mX[2011UL] * zc_int1725 - t8449->mX.mX[1940UL])
    / 3239.4854008314264;
  out->mF.mX[997UL] = -0.0;
  out->mF.mX[998UL] = -0.0;
  out->mF.mX[999UL] = -0.0;
  out->mF.mX[1000UL] = (t8449->mX.mX[2019UL] *
                        Accumalator_Module_Two_Battery_Table_Based39_stateOfCharge
                        - t8449->mX.mX[1961UL]) / 1094.6513219702053;
  out->mF.mX[1001UL] = (t8449->mX.mX[2020UL] * zc_int1728 - t8449->mX.mX[1961UL])
    / 3239.4854008314264;
  out->mF.mX[1002UL] = -0.0;
  out->mF.mX[1003UL] = -0.0;
  out->mF.mX[1004UL] = -0.0;
  out->mF.mX[1005UL] = (t8449->mX.mX[2029UL] * zc_int1730 -
                        Accumalator_Module_Two_Battery_Table_Based4_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1006UL] = (t8449->mX.mX[2030UL] * intrm_sf_mf_1489 -
                        Accumalator_Module_Two_Battery_Table_Based4_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1007UL] = -0.0;
  out->mF.mX[1008UL] = -0.0;
  out->mF.mX[1009UL] = -0.0;
  out->mF.mX[1010UL] = (t8449->mX.mX[2038UL] *
                        Accumalator_Module_Two_Battery_Table_Based40_stateOfCharge
                        - t8449->mX.mX[3UL]) / 1094.6513219702053;
  out->mF.mX[1011UL] = (t8449->mX.mX[2039UL] * zc_int1734 - t8449->mX.mX[3UL]) /
    3239.4854008314264;
  out->mF.mX[1012UL] = -0.0;
  out->mF.mX[1013UL] = -0.0;
  out->mF.mX[1014UL] = -0.0;
  out->mF.mX[1015UL] = (t8449->mX.mX[2050UL] * zc_int1736 -
                        Accumalator_Module_Two_Battery_Table_Based41_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1016UL] = (t8449->mX.mX[2051UL] * zc_int1737 -
                        Accumalator_Module_Two_Battery_Table_Based41_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1017UL] = -0.0;
  out->mF.mX[1018UL] = -0.0;
  out->mF.mX[1019UL] = -0.0;
  out->mF.mX[1020UL] = (t8449->mX.mX[2062UL] * intrm_sf_mf_1504 -
                        Accumalator_Module_Two_Battery_Table_Based42_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1021UL] = (t8449->mX.mX[2063UL] * zc_int1740 -
                        Accumalator_Module_Two_Battery_Table_Based42_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1022UL] = -0.0;
  out->mF.mX[1023UL] = -0.0;
  out->mF.mX[1024UL] = -0.0;
  out->mF.mX[1025UL] = (t8449->mX.mX[2072UL] * intrm_sf_mf_1510 -
                        Accumalator_Module_Two_Battery_Table_Based43_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1026UL] = (t8449->mX.mX[2073UL] * zc_int1743 -
                        Accumalator_Module_Two_Battery_Table_Based43_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1027UL] = -0.0;
  out->mF.mX[1028UL] = -0.0;
  out->mF.mX[1029UL] = -0.0;
  out->mF.mX[1030UL] = (t8449->mX.mX[2082UL] * zc_int1745 -
                        Accumalator_Module_Two_Battery_Table_Based44_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1031UL] = (t8449->mX.mX[2083UL] * zc_int1746 -
                        Accumalator_Module_Two_Battery_Table_Based44_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1032UL] = -0.0;
  out->mF.mX[1033UL] = -0.0;
  out->mF.mX[1034UL] = -0.0;
  out->mF.mX[1035UL] = (t8449->mX.mX[2091UL] * intrm_sf_mf_1522 - t8449->mX.mX
                        [2080UL]) / 1094.6513219702053;
  out->mF.mX[1036UL] = (t8449->mX.mX[2092UL] * intrm_sf_mf_1525 - t8449->mX.mX
                        [2080UL]) / 3239.4854008314264;
  out->mF.mX[1037UL] = -0.0;
  out->mF.mX[1038UL] = -0.0;
  out->mF.mX[1039UL] = -0.0;
  out->mF.mX[1040UL] = (t8449->mX.mX[2100UL] * zc_int1751 - t8449->mX.mX[2046UL])
    / 1094.6513219702053;
  out->mF.mX[1041UL] = (t8449->mX.mX[2101UL] * zc_int1752 - t8449->mX.mX[2046UL])
    / 3239.4854008314264;
  out->mF.mX[1042UL] = -0.0;
  out->mF.mX[1043UL] = -0.0;
  out->mF.mX[1044UL] = -0.0;
  out->mF.mX[1045UL] = (t8449->mX.mX[2111UL] * intrm_sf_mf_1534 -
                        Accumalator_Module_Two_Battery_Table_Based47_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1046UL] = (t8449->mX.mX[2112UL] * zc_int1755 -
                        Accumalator_Module_Two_Battery_Table_Based47_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1047UL] = -0.0;
  out->mF.mX[1048UL] = -0.0;
  out->mF.mX[1049UL] = -0.0;
  out->mF.mX[1050UL] = (t8449->mX.mX[2120UL] * zc_int1757 - t8449->mX.mX[2058UL])
    / 1094.6513219702053;
  out->mF.mX[1051UL] = (t8449->mX.mX[2121UL] * zc_int1758 - t8449->mX.mX[2058UL])
    / 3239.4854008314264;
  out->mF.mX[1052UL] = -0.0;
  out->mF.mX[1053UL] = -0.0;
  out->mF.mX[1054UL] = -0.0;
  out->mF.mX[1055UL] = (t8449->mX.mX[2129UL] * zc_int1760 - t8449->mX.mX[2070UL])
    / 1094.6513219702053;
  out->mF.mX[1056UL] = (t8449->mX.mX[2130UL] * intrm_sf_mf_1549 - t8449->mX.mX
                        [2070UL]) / 3239.4854008314264;
  out->mF.mX[1057UL] = -0.0;
  out->mF.mX[1058UL] = -0.0;
  out->mF.mX[1059UL] = -0.0;
  out->mF.mX[1060UL] = (t8449->mX.mX[2138UL] * intrm_sf_mf_1552 - t8449->mX.mX
                        [1727UL]) / 1094.6513219702053;
  out->mF.mX[1061UL] = (t8449->mX.mX[2139UL] * intrm_sf_mf_1555 - t8449->mX.mX
                        [1727UL]) / 3239.4854008314264;
  out->mF.mX[1062UL] = -0.0;
  out->mF.mX[1063UL] = -0.0;
  out->mF.mX[1064UL] = -0.0;
  out->mF.mX[1065UL] = (t8449->mX.mX[2147UL] * intrm_sf_mf_1558 - t8449->mX.mX
                        [2108UL]) / 1094.6513219702053;
  out->mF.mX[1066UL] = (t8449->mX.mX[2148UL] * zc_int1767 - t8449->mX.mX[2108UL])
    / 3239.4854008314264;
  out->mF.mX[1067UL] = -0.0;
  out->mF.mX[1068UL] = -0.0;
  out->mF.mX[1069UL] = -0.0;
  out->mF.mX[1070UL] = (t8449->mX.mX[2157UL] *
                        Accumalator_Module_Two_Battery_Table_Based51_stateOfCharge
                        - Accumalator_Module_Two_Battery_Table_Based51_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1071UL] = (t8449->mX.mX[2158UL] * intrm_sf_mf_1567 -
                        Accumalator_Module_Two_Battery_Table_Based51_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1072UL] = -0.0;
  out->mF.mX[1073UL] = -0.0;
  out->mF.mX[1074UL] = -0.0;
  out->mF.mX[1075UL] = (t8449->mX.mX[2168UL] * zc_int1772 -
                        Accumalator_Module_Two_Battery_Table_Based52_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1076UL] = (t8449->mX.mX[2169UL] * zc_int1773 -
                        Accumalator_Module_Two_Battery_Table_Based52_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1077UL] = -0.0;
  out->mF.mX[1078UL] = -0.0;
  out->mF.mX[1079UL] = -0.0;
  out->mF.mX[1080UL] = (t8449->mX.mX[2178UL] * intrm_sf_mf_1576 -
                        Accumalator_Module_Two_Battery_Table_Based53_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1081UL] = (t8449->mX.mX[2179UL] * zc_int1776 -
                        Accumalator_Module_Two_Battery_Table_Based53_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1082UL] = -0.0;
  out->mF.mX[1083UL] = -0.0;
  out->mF.mX[1084UL] = -0.0;
  out->mF.mX[1085UL] = (t8449->mX.mX[2187UL] *
                        Accumalator_Module_Two_Battery_Table_Based54_stateOfCharge
                        - t8449->mX.mX[2155UL]) / 1094.6513219702053;
  out->mF.mX[1086UL] = (t8449->mX.mX[2188UL] * intrm_sf_mf_1585 - t8449->mX.mX
                        [2155UL]) / 3239.4854008314264;
  out->mF.mX[1087UL] = -0.0;
  out->mF.mX[1088UL] = -0.0;
  out->mF.mX[1089UL] = -0.0;
  out->mF.mX[1090UL] = (t8449->mX.mX[2196UL] * intrm_sf_mf_1588 - t8449->mX.mX
                        [2165UL]) / 1094.6513219702053;
  out->mF.mX[1091UL] = (t8449->mX.mX[2197UL] * zc_int1782 - t8449->mX.mX[2165UL])
    / 3239.4854008314264;
  out->mF.mX[1092UL] = -0.0;
  out->mF.mX[1093UL] = -0.0;
  out->mF.mX[1094UL] = -0.0;
  out->mF.mX[1095UL] = (t8449->mX.mX[2205UL] *
                        Accumalator_Module_Two_Battery_Table_Based59_stateOfCharge
                        - t8449->mX.mX[2176UL]) / 1094.6513219702053;
  out->mF.mX[1096UL] = (t8449->mX.mX[2206UL] * zc_int1785 - t8449->mX.mX[2176UL])
    / 3239.4854008314264;
  out->mF.mX[1097UL] = -0.0;
  out->mF.mX[1098UL] = -0.0;
  out->mF.mX[1099UL] = -0.0;
  out->mF.mX[1100UL] = (t8449->mX.mX[2214UL] * intrm_sf_mf_1600 - t8449->mX.mX
                        [1739UL]) / 1094.6513219702053;
  out->mF.mX[1101UL] = (t8449->mX.mX[2215UL] * zc_int1788 - t8449->mX.mX[1739UL])
    / 3239.4854008314264;
  out->mF.mX[1102UL] = -0.0;
  out->mF.mX[1103UL] = -0.0;
  out->mF.mX[1104UL] = -0.0;
  out->mF.mX[1105UL] = (t8449->mX.mX[2223UL] * intrm_sf_mf_1606 - t8449->mX.mX
                        [2027UL]) / 1094.6513219702053;
  out->mF.mX[1106UL] = (t8449->mX.mX[2224UL] * zc_int1791 - t8449->mX.mX[2027UL])
    / 3239.4854008314264;
  out->mF.mX[1107UL] = -0.0;
  out->mF.mX[1108UL] = -0.0;
  out->mF.mX[1109UL] = -0.0;
  out->mF.mX[1110UL] = (t8449->mX.mX[2232UL] * intrm_sf_mf_1612 - t8449->mX.mX
                        [1759UL]) / 1094.6513219702053;
  out->mF.mX[1111UL] = (t8449->mX.mX[2233UL] * intrm_sf_mf_1615 - t8449->mX.mX
                        [1759UL]) / 3239.4854008314264;
  out->mF.mX[1112UL] = -0.0;
  out->mF.mX[1113UL] = -0.0;
  out->mF.mX[1114UL] = -0.0;
  out->mF.mX[1115UL] = (t8449->mX.mX[2241UL] * intrm_sf_mf_1618 - t8449->mX.mX
                        [1781UL]) / 1094.6513219702053;
  out->mF.mX[1116UL] = (t8449->mX.mX[2242UL] * zc_int1797 - t8449->mX.mX[1781UL])
    / 3239.4854008314264;
  out->mF.mX[1117UL] = -0.0;
  out->mF.mX[1118UL] = -0.0;
  out->mF.mX[1119UL] = -0.0;
  out->mF.mX[1120UL] = (t8449->mX.mX[2253UL] *
                        Accumalator_Module_four_Battery_Table_Based1_stateOfCharge
                        - Accumalator_Module_four_Battery_Table_Based1_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1121UL] = (t8449->mX.mX[2254UL] * zc_int1800 -
                        Accumalator_Module_four_Battery_Table_Based1_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1122UL] = -0.0;
  out->mF.mX[1123UL] = -0.0;
  out->mF.mX[1124UL] = -0.0;
  out->mF.mX[1125UL] = (t8449->mX.mX[2265UL] * intrm_sf_mf_1630 -
                        Accumalator_Module_four_Battery_Table_Based10_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1126UL] = (t8449->mX.mX[2266UL] * intrm_sf_mf_1633 -
                        Accumalator_Module_four_Battery_Table_Based10_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1127UL] = -0.0;
  out->mF.mX[1128UL] = -0.0;
  out->mF.mX[1129UL] = -0.0;
  out->mF.mX[1130UL] = (t8449->mX.mX[2277UL] * zc_int1805 -
                        Accumalator_Module_four_Battery_Table_Based11_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1131UL] = (t8449->mX.mX[2278UL] * intrm_sf_mf_1639 -
                        Accumalator_Module_four_Battery_Table_Based11_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1132UL] = -0.0;
  out->mF.mX[1133UL] = -0.0;
  out->mF.mX[1134UL] = -0.0;
  out->mF.mX[1135UL] = (t8449->mX.mX[2289UL] * intrm_sf_mf_1642 -
                        Accumalator_Module_four_Battery_Table_Based12_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1136UL] = (t8449->mX.mX[2290UL] * zc_int1809 -
                        Accumalator_Module_four_Battery_Table_Based12_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1137UL] = -0.0;
  out->mF.mX[1138UL] = -0.0;
  out->mF.mX[1139UL] = -0.0;
  out->mF.mX[1140UL] = (t8449->mX.mX[2300UL] * intrm_sf_mf_1648 -
                        Accumalator_Module_four_Battery_Table_Based13_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1141UL] = (t8449->mX.mX[2301UL] * zc_int1812 -
                        Accumalator_Module_four_Battery_Table_Based13_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1142UL] = -0.0;
  out->mF.mX[1143UL] = -0.0;
  out->mF.mX[1144UL] = -0.0;
  out->mF.mX[1145UL] = (t8449->mX.mX[2309UL] *
                        Accumalator_Module_four_Battery_Table_Based14_stateOfCharge
                        - t8449->mX.mX[2273UL]) / 1094.6513219702053;
  out->mF.mX[1146UL] = (t8449->mX.mX[2310UL] * zc_int1815 - t8449->mX.mX[2273UL])
    / 3239.4854008314264;
  out->mF.mX[1147UL] = -0.0;
  out->mF.mX[1148UL] = -0.0;
  out->mF.mX[1149UL] = -0.0;
  out->mF.mX[1150UL] = (t8449->mX.mX[2320UL] * zc_int1817 -
                        Accumalator_Module_four_Battery_Table_Based15_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1151UL] = (t8449->mX.mX[2321UL] * zc_int1818 -
                        Accumalator_Module_four_Battery_Table_Based15_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1152UL] = -0.0;
  out->mF.mX[1153UL] = -0.0;
  out->mF.mX[1154UL] = -0.0;
  out->mF.mX[1155UL] = (t8449->mX.mX[2331UL] *
                        Accumalator_Module_four_Battery_Table_Based16_stateOfCharge
                        - Accumalator_Module_four_Battery_Table_Based16_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1156UL] = (t8449->mX.mX[2332UL] * intrm_sf_mf_1669 -
                        Accumalator_Module_four_Battery_Table_Based16_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1157UL] = -0.0;
  out->mF.mX[1158UL] = -0.0;
  out->mF.mX[1159UL] = -0.0;
  out->mF.mX[1160UL] = (t8449->mX.mX[2341UL] *
                        Accumalator_Module_four_Battery_Table_Based17_stateOfCharge
                        - Accumalator_Module_four_Battery_Table_Based17_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1161UL] = (t8449->mX.mX[2342UL] * intrm_sf_mf_1675 -
                        Accumalator_Module_four_Battery_Table_Based17_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1162UL] = -0.0;
  out->mF.mX[1163UL] = -0.0;
  out->mF.mX[1164UL] = -0.0;
  out->mF.mX[1165UL] = (t8449->mX.mX[2350UL] * zc_int1826 - t8449->mX.mX[2261UL])
    / 1094.6513219702053;
  out->mF.mX[1166UL] = (t8449->mX.mX[2351UL] * intrm_sf_mf_1681 - t8449->mX.mX
                        [2261UL]) / 3239.4854008314264;
  out->mF.mX[1167UL] = -0.0;
  out->mF.mX[1168UL] = -0.0;
  out->mF.mX[1169UL] = -0.0;
  out->mF.mX[1170UL] = (t8449->mX.mX[2359UL] *
                        Accumalator_Module_four_Battery_Table_Based19_stateOfCharge
                        - t8449->mX.mX[2328UL]) / 1094.6513219702053;
  out->mF.mX[1171UL] = (t8449->mX.mX[2360UL] * intrm_sf_mf_1687 - t8449->mX.mX
                        [2328UL]) / 3239.4854008314264;
  out->mF.mX[1172UL] = -0.0;
  out->mF.mX[1173UL] = -0.0;
  out->mF.mX[1174UL] = -0.0;
  out->mF.mX[1175UL] = (t8449->mX.mX[2369UL] * intrm_sf_mf_1690 -
                        Accumalator_Module_four_Battery_Table_Based2_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1176UL] = (t8449->mX.mX[2370UL] * zc_int1833 -
                        Accumalator_Module_four_Battery_Table_Based2_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1177UL] = -0.0;
  out->mF.mX[1178UL] = -0.0;
  out->mF.mX[1179UL] = -0.0;
  out->mF.mX[1180UL] = (t8449->mX.mX[2381UL] * zc_int1835 -
                        Accumalator_Module_four_Battery_Table_Based20_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1181UL] = (t8449->mX.mX[2382UL] * intrm_sf_mf_1699 -
                        Accumalator_Module_four_Battery_Table_Based20_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1182UL] = -0.0;
  out->mF.mX[1183UL] = -0.0;
  out->mF.mX[1184UL] = -0.0;
  out->mF.mX[1185UL] = (t8449->mX.mX[2393UL] * intrm_sf_mf_1702 -
                        Accumalator_Module_four_Battery_Table_Based21_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1186UL] = (t8449->mX.mX[2394UL] * zc_int1839 -
                        Accumalator_Module_four_Battery_Table_Based21_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1187UL] = -0.0;
  out->mF.mX[1188UL] = -0.0;
  out->mF.mX[1189UL] = -0.0;
  out->mF.mX[1190UL] = (t8449->mX.mX[2403UL] * zc_int1841 -
                        Accumalator_Module_four_Battery_Table_Based22_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1191UL] = (t8449->mX.mX[2404UL] * intrm_sf_mf_1711 -
                        Accumalator_Module_four_Battery_Table_Based22_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1192UL] = -0.0;
  out->mF.mX[1193UL] = -0.0;
  out->mF.mX[1194UL] = -0.0;
  out->mF.mX[1195UL] = (t8449->mX.mX[2413UL] *
                        Accumalator_Module_four_Battery_Table_Based23_stateOfCharge
                        - Accumalator_Module_four_Battery_Table_Based23_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1196UL] = (t8449->mX.mX[2414UL] * intrm_sf_mf_1717 -
                        Accumalator_Module_four_Battery_Table_Based23_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1197UL] = -0.0;
  out->mF.mX[1198UL] = -0.0;
  out->mF.mX[1199UL] = -0.0;
  out->mF.mX[1200UL] = (t8449->mX.mX[2422UL] * zc_int1847 - t8449->mX.mX[2411UL])
    / 1094.6513219702053;
  out->mF.mX[1201UL] = (t8449->mX.mX[2423UL] * zc_int1848 - t8449->mX.mX[2411UL])
    / 3239.4854008314264;
  out->mF.mX[1202UL] = -0.0;
  out->mF.mX[1203UL] = -0.0;
  out->mF.mX[1204UL] = -0.0;
  out->mF.mX[1205UL] = (t8449->mX.mX[2431UL] * zc_int1850 - t8449->mX.mX[2377UL])
    / 1094.6513219702053;
  out->mF.mX[1206UL] = (t8449->mX.mX[2432UL] * zc_int1851 - t8449->mX.mX[2377UL])
    / 3239.4854008314264;
  out->mF.mX[1207UL] = -0.0;
  out->mF.mX[1208UL] = -0.0;
  out->mF.mX[1209UL] = -0.0;
  out->mF.mX[1210UL] = (t8449->mX.mX[2442UL] * intrm_sf_mf_1732 -
                        Accumalator_Module_four_Battery_Table_Based26_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1211UL] = (t8449->mX.mX[2443UL] * zc_int1854 -
                        Accumalator_Module_four_Battery_Table_Based26_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1212UL] = -0.0;
  out->mF.mX[1213UL] = -0.0;
  out->mF.mX[1214UL] = -0.0;
  out->mF.mX[1215UL] = (t8449->mX.mX[2451UL] * intrm_sf_mf_1738 - t8449->mX.mX
                        [2389UL]) / 1094.6513219702053;
  out->mF.mX[1216UL] = (t8449->mX.mX[2452UL] * zc_int1857 - t8449->mX.mX[2389UL])
    / 3239.4854008314264;
  out->mF.mX[1217UL] = -0.0;
  out->mF.mX[1218UL] = -0.0;
  out->mF.mX[1219UL] = -0.0;
  out->mF.mX[1220UL] = (t8449->mX.mX[2460UL] *
                        Accumalator_Module_four_Battery_Table_Based28_stateOfCharge
                        - t8449->mX.mX[2401UL]) / 2340.2408637873755;
  out->mF.mX[1221UL] = (t8449->mX.mX[2461UL] * intrm_sf_mf_1747 - t8449->mX.mX
                        [2401UL]) / 26655.229591836738;
  out->mF.mX[1222UL] = -0.0;
  out->mF.mX[1223UL] = -0.0;
  out->mF.mX[1224UL] = -0.0;
  out->mF.mX[1225UL] = (t8449->mX.mX[2469UL] *
                        Accumalator_Module_four_Battery_Table_Based29_stateOfCharge
                        - t8449->mX.mX[2439UL]) / 1094.6513219702053;
  out->mF.mX[1226UL] = (t8449->mX.mX[2470UL] * zc_int1863 - t8449->mX.mX[2439UL])
    / 3239.4854008314264;
  out->mF.mX[1227UL] = -0.0;
  out->mF.mX[1228UL] = -0.0;
  out->mF.mX[1229UL] = -0.0;
  out->mF.mX[1230UL] = (t8449->mX.mX[2478UL] * zc_int1865 - t8449->mX.mX[2367UL])
    / 1094.6513219702053;
  out->mF.mX[1231UL] = (t8449->mX.mX[2479UL] * zc_int1866 - t8449->mX.mX[2367UL])
    / 3239.4854008314264;
  out->mF.mX[1232UL] = -0.0;
  out->mF.mX[1233UL] = -0.0;
  out->mF.mX[1234UL] = -0.0;
  out->mF.mX[1235UL] = (t8449->mX.mX[2490UL] * intrm_sf_mf_1762 -
                        Accumalator_Module_four_Battery_Table_Based30_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1236UL] = (t8449->mX.mX[2491UL] * zc_int1869 -
                        Accumalator_Module_four_Battery_Table_Based30_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1237UL] = -0.0;
  out->mF.mX[1238UL] = -0.0;
  out->mF.mX[1239UL] = -0.0;
  out->mF.mX[1240UL] = (t8449->mX.mX[2502UL] * intrm_sf_mf_1768 -
                        Accumalator_Module_four_Battery_Table_Based31_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1241UL] = (t8449->mX.mX[2503UL] * intrm_sf_mf_1771 -
                        Accumalator_Module_four_Battery_Table_Based31_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1242UL] = -0.0;
  out->mF.mX[1243UL] = -0.0;
  out->mF.mX[1244UL] = -0.0;
  out->mF.mX[1245UL] = (t8449->mX.mX[2511UL] *
                        Accumalator_Module_four_Battery_Table_Based32_stateOfCharge
                        - t8449->mX.mX[2249UL]) / 1094.6513219702053;
  out->mF.mX[1246UL] = (t8449->mX.mX[2512UL] * intrm_sf_mf_1777 - t8449->mX.mX
                        [2249UL]) / 3239.4854008314264;
  out->mF.mX[1247UL] = -0.0;
  out->mF.mX[1248UL] = -0.0;
  out->mF.mX[1249UL] = -0.0;
  out->mF.mX[1250UL] = (t8449->mX.mX[2521UL] * intrm_sf_mf_1780 -
                        Accumalator_Module_four_Battery_Table_Based33_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1251UL] = (t8449->mX.mX[2522UL] * zc_int1878 -
                        Accumalator_Module_four_Battery_Table_Based33_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1252UL] = -0.0;
  out->mF.mX[1253UL] = -0.0;
  out->mF.mX[1254UL] = -0.0;
  out->mF.mX[1255UL] = (t8449->mX.mX[2531UL] * intrm_sf_mf_1786 -
                        Accumalator_Module_four_Battery_Table_Based34_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1256UL] = (t8449->mX.mX[2532UL] * zc_int1881 -
                        Accumalator_Module_four_Battery_Table_Based34_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1257UL] = -0.0;
  out->mF.mX[1258UL] = -0.0;
  out->mF.mX[1259UL] = -0.0;
  out->mF.mX[1260UL] = (t8449->mX.mX[2540UL] *
                        Accumalator_Module_four_Battery_Table_Based35_stateOfCharge
                        - t8449->mX.mX[2529UL]) / 1094.6513219702053;
  out->mF.mX[1261UL] = (t8449->mX.mX[2541UL] * intrm_sf_mf_1795 - t8449->mX.mX
                        [2529UL]) / 3239.4854008314264;
  out->mF.mX[1262UL] = -0.0;
  out->mF.mX[1263UL] = -0.0;
  out->mF.mX[1264UL] = -0.0;
  out->mF.mX[1265UL] = (t8449->mX.mX[2549UL] * intrm_sf_mf_1798 - t8449->mX.mX
                        [2486UL]) / 1094.6513219702053;
  out->mF.mX[1266UL] = (t8449->mX.mX[2550UL] * zc_int1887 - t8449->mX.mX[2486UL])
    / 3239.4854008314264;
  out->mF.mX[1267UL] = -0.0;
  out->mF.mX[1268UL] = -0.0;
  out->mF.mX[1269UL] = -0.0;
  out->mF.mX[1270UL] = (t8449->mX.mX[2560UL] * intrm_sf_mf_1804 -
                        Accumalator_Module_four_Battery_Table_Based37_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1271UL] = (t8449->mX.mX[2561UL] * intrm_sf_mf_1807 -
                        Accumalator_Module_four_Battery_Table_Based37_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1272UL] = -0.0;
  out->mF.mX[1273UL] = -0.0;
  out->mF.mX[1274UL] = -0.0;
  out->mF.mX[1275UL] = (t8449->mX.mX[2569UL] * intrm_sf_mf_1810 - t8449->mX.mX
                        [2498UL]) / 1094.6513219702053;
  out->mF.mX[1276UL] = (t8449->mX.mX[2570UL] * zc_int1893 - t8449->mX.mX[2498UL])
    / 3239.4854008314264;
  out->mF.mX[1277UL] = -0.0;
  out->mF.mX[1278UL] = -0.0;
  out->mF.mX[1279UL] = -0.0;
  out->mF.mX[1280UL] = (t8449->mX.mX[2578UL] * zc_int1895 - t8449->mX.mX[2519UL])
    / 1094.6513219702053;
  out->mF.mX[1281UL] = (t8449->mX.mX[2579UL] * intrm_sf_mf_1819 - t8449->mX.mX
                        [2519UL]) / 3239.4854008314264;
  out->mF.mX[1282UL] = -0.0;
  out->mF.mX[1283UL] = -0.0;
  out->mF.mX[1284UL] = -0.0;
  out->mF.mX[1285UL] = (t8449->mX.mX[2588UL] *
                        Accumalator_Module_four_Battery_Table_Based4_stateOfCharge
                        - Accumalator_Module_four_Battery_Table_Based4_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1286UL] = (t8449->mX.mX[2589UL] * intrm_sf_mf_1825 -
                        Accumalator_Module_four_Battery_Table_Based4_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1287UL] = -0.0;
  out->mF.mX[1288UL] = -0.0;
  out->mF.mX[1289UL] = -0.0;
  out->mF.mX[1290UL] = (t8449->mX.mX[2597UL] * zc_int1901 - t8449->mX.mX[2557UL])
    / 1094.6513219702053;
  out->mF.mX[1291UL] = (t8449->mX.mX[2598UL] * zc_int1902 - t8449->mX.mX[2557UL])
    / 3239.4854008314264;
  out->mF.mX[1292UL] = -0.0;
  out->mF.mX[1293UL] = -0.0;
  out->mF.mX[1294UL] = -0.0;
  out->mF.mX[1295UL] = (t8449->mX.mX[2609UL] * zc_int1904 -
                        Accumalator_Module_four_Battery_Table_Based41_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1296UL] = (t8449->mX.mX[2610UL] * zc_int1905 -
                        Accumalator_Module_four_Battery_Table_Based41_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1297UL] = -0.0;
  out->mF.mX[1298UL] = -0.0;
  out->mF.mX[1299UL] = -0.0;
  out->mF.mX[1300UL] = (t8449->mX.mX[2621UL] * zc_int1907 -
                        Accumalator_Module_four_Battery_Table_Based42_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1301UL] = (t8449->mX.mX[2622UL] * intrm_sf_mf_1843 -
                        Accumalator_Module_four_Battery_Table_Based42_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1302UL] = -0.0;
  out->mF.mX[1303UL] = -0.0;
  out->mF.mX[1304UL] = -0.0;
  out->mF.mX[1305UL] = (t8449->mX.mX[2631UL] * zc_int1910 -
                        Accumalator_Module_four_Battery_Table_Based43_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1306UL] = (t8449->mX.mX[2632UL] * intrm_sf_mf_1849 -
                        Accumalator_Module_four_Battery_Table_Based43_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1307UL] = -0.0;
  out->mF.mX[1308UL] = -0.0;
  out->mF.mX[1309UL] = -0.0;
  out->mF.mX[1310UL] = (t8449->mX.mX[2641UL] * intrm_sf_mf_1852 -
                        Accumalator_Module_four_Battery_Table_Based44_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1311UL] = (t8449->mX.mX[2642UL] * zc_int1914 -
                        Accumalator_Module_four_Battery_Table_Based44_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1312UL] = -0.0;
  out->mF.mX[1313UL] = -0.0;
  out->mF.mX[1314UL] = -0.0;
  out->mF.mX[1315UL] = (t8449->mX.mX[2650UL] *
                        Accumalator_Module_four_Battery_Table_Based45_stateOfCharge
                        - t8449->mX.mX[2639UL]) / 1094.6513219702053;
  out->mF.mX[1316UL] = (t8449->mX.mX[2651UL] * intrm_sf_mf_1861 - t8449->mX.mX
                        [2639UL]) / 3239.4854008314264;
  out->mF.mX[1317UL] = -0.0;
  out->mF.mX[1318UL] = -0.0;
  out->mF.mX[1319UL] = -0.0;
  out->mF.mX[1320UL] = (t8449->mX.mX[2659UL] * zc_int1919 - t8449->mX.mX[2605UL])
    / 1094.6513219702053;
  out->mF.mX[1321UL] = (t8449->mX.mX[2660UL] * intrm_sf_mf_1867 - t8449->mX.mX
                        [2605UL]) / 3239.4854008314264;
  out->mF.mX[1322UL] = -0.0;
  out->mF.mX[1323UL] = -0.0;
  out->mF.mX[1324UL] = -0.0;
  out->mF.mX[1325UL] = (t8449->mX.mX[2670UL] * intrm_sf_mf_1870 -
                        Accumalator_Module_four_Battery_Table_Based47_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1326UL] = (t8449->mX.mX[2671UL] * intrm_sf_mf_1873 -
                        Accumalator_Module_four_Battery_Table_Based47_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1327UL] = -0.0;
  out->mF.mX[1328UL] = -0.0;
  out->mF.mX[1329UL] = -0.0;
  out->mF.mX[1330UL] = (t8449->mX.mX[2679UL] * zc_int1925 - t8449->mX.mX[2617UL])
    / 1094.6513219702053;
  out->mF.mX[1331UL] = (t8449->mX.mX[2680UL] * intrm_sf_mf_1879 - t8449->mX.mX
                        [2617UL]) / 3239.4854008314264;
  out->mF.mX[1332UL] = -0.0;
  out->mF.mX[1333UL] = -0.0;
  out->mF.mX[1334UL] = -0.0;
  out->mF.mX[1335UL] = (t8449->mX.mX[2688UL] *
                        Accumalator_Module_four_Battery_Table_Based49_stateOfCharge
                        - t8449->mX.mX[2629UL]) / 1094.6513219702053;
  out->mF.mX[1336UL] = (t8449->mX.mX[2689UL] * intrm_sf_mf_1885 - t8449->mX.mX
                        [2629UL]) / 3239.4854008314264;
  out->mF.mX[1337UL] = -0.0;
  out->mF.mX[1338UL] = -0.0;
  out->mF.mX[1339UL] = -0.0;
  out->mF.mX[1340UL] = (t8449->mX.mX[2697UL] * zc_int1931 - t8449->mX.mX[2285UL])
    / 1094.6513219702053;
  out->mF.mX[1341UL] = (t8449->mX.mX[2698UL] * intrm_sf_mf_1891 - t8449->mX.mX
                        [2285UL]) / 3239.4854008314264;
  out->mF.mX[1342UL] = -0.0;
  out->mF.mX[1343UL] = -0.0;
  out->mF.mX[1344UL] = -0.0;
  out->mF.mX[1345UL] = (t8449->mX.mX[2706UL] * zc_int1934 - t8449->mX.mX[2667UL])
    / 1094.6513219702053;
  out->mF.mX[1346UL] = (t8449->mX.mX[2707UL] * intrm_sf_mf_1897 - t8449->mX.mX
                        [2667UL]) / 3239.4854008314264;
  out->mF.mX[1347UL] = -0.0;
  out->mF.mX[1348UL] = -0.0;
  out->mF.mX[1349UL] = -0.0;
  out->mF.mX[1350UL] = (t8449->mX.mX[2716UL] * intrm_sf_mf_1900 -
                        Accumalator_Module_four_Battery_Table_Based51_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1351UL] = (t8449->mX.mX[2717UL] * intrm_sf_mf_1903 -
                        Accumalator_Module_four_Battery_Table_Based51_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1352UL] = -0.0;
  out->mF.mX[1353UL] = -0.0;
  out->mF.mX[1354UL] = -0.0;
  out->mF.mX[1355UL] = (t8449->mX.mX[2727UL] * intrm_sf_mf_1906 -
                        Accumalator_Module_four_Battery_Table_Based52_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1356UL] = (t8449->mX.mX[2728UL] * intrm_sf_mf_1909 -
                        Accumalator_Module_four_Battery_Table_Based52_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1357UL] = -0.0;
  out->mF.mX[1358UL] = -0.0;
  out->mF.mX[1359UL] = -0.0;
  out->mF.mX[1360UL] = (t8449->mX.mX[2737UL] * zc_int1943 -
                        Accumalator_Module_four_Battery_Table_Based53_electricalModel_i)
    / 1094.6513219702053;
  out->mF.mX[1361UL] = (t8449->mX.mX[2738UL] * intrm_sf_mf_1915 -
                        Accumalator_Module_four_Battery_Table_Based53_electricalModel_i)
    / 3239.4854008314264;
  out->mF.mX[1362UL] = -0.0;
  out->mF.mX[1363UL] = -0.0;
  out->mF.mX[1364UL] = -0.0;
  out->mF.mX[1365UL] = (t8449->mX.mX[2746UL] * zc_int1946 - t8449->mX.mX[2714UL])
    / 1094.6513219702053;
  out->mF.mX[1366UL] = (t8449->mX.mX[2747UL] * zc_int1947 - t8449->mX.mX[2714UL])
    / 3239.4854008314264;
  out->mF.mX[1367UL] = -0.0;
  out->mF.mX[1368UL] = -0.0;
  out->mF.mX[1369UL] = -0.0;
  out->mF.mX[1370UL] = (t8449->mX.mX[2755UL] * zc_int1949 - t8449->mX.mX[2724UL])
    / 1094.6513219702053;
  out->mF.mX[1371UL] = (t8449->mX.mX[2756UL] * zc_int1950 - t8449->mX.mX[2724UL])
    / 3239.4854008314264;
  out->mF.mX[1372UL] = -0.0;
  out->mF.mX[1373UL] = -0.0;
  out->mF.mX[1374UL] = -0.0;
  out->mF.mX[1375UL] = (t8449->mX.mX[2764UL] * intrm_sf_mf_1930 - t8449->mX.mX
                        [2735UL]) / 1094.6513219702053;
  out->mF.mX[1376UL] = (t8449->mX.mX[2765UL] * zc_int1953 - t8449->mX.mX[2735UL])
    / 3239.4854008314264;
  out->mF.mX[1377UL] = -0.0;
  out->mF.mX[1378UL] = -0.0;
  out->mF.mX[1379UL] = -0.0;
  out->mF.mX[1380UL] = (t8449->mX.mX[2773UL] * zc_int1955 - t8449->mX.mX[2297UL])
    / 1094.6513219702053;
  out->mF.mX[1381UL] = (t8449->mX.mX[2774UL] * intrm_sf_mf_1939 - t8449->mX.mX
                        [2297UL]) / 3239.4854008314264;
  out->mF.mX[1382UL] = -0.0;
  out->mF.mX[1383UL] = -0.0;
  out->mF.mX[1384UL] = -0.0;
  out->mF.mX[1385UL] = (t8449->mX.mX[2782UL] * zc_int1958 - t8449->mX.mX[2586UL])
    / 1094.6513219702053;
  out->mF.mX[1386UL] = (t8449->mX.mX[2783UL] * zc_int1959 - t8449->mX.mX[2586UL])
    / 3239.4854008314264;
  out->mF.mX[1387UL] = -0.0;
  out->mF.mX[1388UL] = -0.0;
  out->mF.mX[1389UL] = -0.0;
  out->mF.mX[1390UL] = (t8449->mX.mX[2791UL] * intrm_sf_mf_1948 - t8449->mX.mX
                        [2317UL]) / 1094.6513219702053;
  out->mF.mX[1391UL] = (t8449->mX.mX[2792UL] * zc_int1962 - t8449->mX.mX[2317UL])
    / 3239.4854008314264;
  out->mF.mX[1392UL] = -0.0;
  out->mF.mX[1393UL] = -0.0;
  out->mF.mX[1394UL] = -0.0;
  out->mF.mX[1395UL] = (t8449->mX.mX[2800UL] * zc_int1964 - t8449->mX.mX[2339UL])
    / 1094.6513219702053;
  out->mF.mX[1396UL] = (t8449->mX.mX[2801UL] * (1.0 / (t718 == 0.0 ? 1.0E-16 :
    t718)) - t8449->mX.mX[2339UL]) / 3239.4854008314264;
  out->mF.mX[1397UL] = -0.0;
  out->mF.mX[1398UL] = -0.0;
  out->mF.mX[1399UL] = -0.0;
  out->mF.mX[1400UL] = -t8448;
  out->mF.mX[1401UL] = -(-t8448 * (real_T)(t8449->mM.mX[143UL] != 0) / 18000.0);
  out->mF.mX[1402UL] =
    -Accumalator_Module_Five1_Battery_Table_Based10_electricalModel_i;
  out->mF.mX[1403UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based10_electricalModel_i *
      (real_T)(t8449->mM.mX[144UL] != 0) / 18000.0);
  out->mF.mX[1404UL] =
    -Accumalator_Module_Five1_Battery_Table_Based11_electricalModel_i;
  out->mF.mX[1405UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based11_electricalModel_i *
      (real_T)(t8449->mM.mX[145UL] != 0) / 18000.0);
  out->mF.mX[1406UL] =
    -Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_i;
  out->mF.mX[1407UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based12_electricalModel_i *
      (real_T)(t8449->mM.mX[146UL] != 0) / 18000.0);
  out->mF.mX[1408UL] =
    -Accumalator_Module_Five1_Battery_Table_Based13_electricalModel_i;
  out->mF.mX[1409UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based13_electricalModel_i *
      (real_T)(t8449->mM.mX[148UL] != 0) / 18000.0);
  out->mF.mX[1410UL] = -t8449->mX.mX[27UL];
  out->mF.mX[1411UL] = -(-t8449->mX.mX[27UL] * (real_T)(t8449->mM.mX[149UL] != 0)
    / 18000.0);
  out->mF.mX[1412UL] =
    -Accumalator_Module_Five1_Battery_Table_Based15_electricalModel_i;
  out->mF.mX[1413UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based15_electricalModel_i *
      (real_T)(t8449->mM.mX[150UL] != 0) / 18000.0);
  out->mF.mX[1414UL] =
    -Accumalator_Module_Five1_Battery_Table_Based16_electricalModel_i;
  out->mF.mX[1415UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based16_electricalModel_i *
      (real_T)(t8449->mM.mX[151UL] != 0) / 18000.0);
  out->mF.mX[1416UL] =
    -Accumalator_Module_Five1_Battery_Table_Based17_electricalModel_i;
  out->mF.mX[1417UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based17_electricalModel_i *
      (real_T)(t8449->mM.mX[152UL] != 0) / 18000.0);
  out->mF.mX[1418UL] = -t8449->mX.mX[15UL];
  out->mF.mX[1419UL] = -(-t8449->mX.mX[15UL] * (real_T)(t8449->mM.mX[153UL] != 0)
    / 18000.0);
  out->mF.mX[1420UL] = -t8449->mX.mX[82UL];
  out->mF.mX[1421UL] = -(-t8449->mX.mX[82UL] * (real_T)(t8449->mM.mX[154UL] != 0)
    / 18000.0);
  out->mF.mX[1422UL] =
    -Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_i;
  out->mF.mX[1423UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based2_electricalModel_i * (real_T)
      (t8449->mM.mX[155UL] != 0) / 18000.0);
  out->mF.mX[1424UL] =
    -Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_i;
  out->mF.mX[1425UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based20_electricalModel_i *
      (real_T)(t8449->mM.mX[156UL] != 0) / 18000.0);
  out->mF.mX[1426UL] =
    -Accumalator_Module_Five1_Battery_Table_Based21_electricalModel_i;
  out->mF.mX[1427UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based21_electricalModel_i *
      (real_T)(t8449->mM.mX[157UL] != 0) / 18000.0);
  out->mF.mX[1428UL] =
    -Accumalator_Module_Five1_Battery_Table_Based22_electricalModel_i;
  out->mF.mX[1429UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based22_electricalModel_i *
      (real_T)(t8449->mM.mX[159UL] != 0) / 18000.0);
  out->mF.mX[1430UL] =
    -Accumalator_Module_Five1_Battery_Table_Based23_electricalModel_i;
  out->mF.mX[1431UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based23_electricalModel_i *
      (real_T)(t8449->mM.mX[160UL] != 0) / 18000.0);
  out->mF.mX[1432UL] = -t8449->mX.mX[165UL];
  out->mF.mX[1433UL] = -(-t8449->mX.mX[165UL] * (real_T)(t8449->mM.mX[161UL] !=
    0) / 18000.0);
  out->mF.mX[1434UL] = -t8449->mX.mX[131UL];
  out->mF.mX[1435UL] = -(-t8449->mX.mX[131UL] * (real_T)(t8449->mM.mX[162UL] !=
    0) / 18000.0);
  out->mF.mX[1436UL] =
    -Accumalator_Module_Five1_Battery_Table_Based26_electricalModel_i;
  out->mF.mX[1437UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based26_electricalModel_i *
      (real_T)(t8449->mM.mX[163UL] != 0) / 18000.0);
  out->mF.mX[1438UL] = -t8449->mX.mX[143UL];
  out->mF.mX[1439UL] = -(-t8449->mX.mX[143UL] * (real_T)(t8449->mM.mX[164UL] !=
    0) / 18000.0);
  out->mF.mX[1440UL] = -t8449->mX.mX[155UL];
  out->mF.mX[1441UL] = -(-t8449->mX.mX[155UL] * (real_T)(t8449->mM.mX[165UL] !=
    0) / 18000.0);
  out->mF.mX[1442UL] = -t8449->mX.mX[193UL];
  out->mF.mX[1443UL] = -(-t8449->mX.mX[193UL] * (real_T)(t8449->mM.mX[166UL] !=
    0) / 18000.0);
  out->mF.mX[1444UL] = -t8449->mX.mX[121UL];
  out->mF.mX[1445UL] = -(-t8449->mX.mX[121UL] * (real_T)(t8449->mM.mX[167UL] !=
    0) / 18000.0);
  out->mF.mX[1446UL] =
    -Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_i;
  out->mF.mX[1447UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based30_electricalModel_i *
      (real_T)(t8449->mM.mX[168UL] != 0) / 18000.0);
  out->mF.mX[1448UL] =
    -Accumalator_Module_Five1_Battery_Table_Based31_electricalModel_i;
  out->mF.mX[1449UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based31_electricalModel_i *
      (real_T)(t8449->mM.mX[170UL] != 0) / 18000.0);
  out->mF.mX[1450UL] = -t8449->mX.mX[1UL];
  out->mF.mX[1451UL] = -(-t8449->mX.mX[1UL] * (real_T)(t8449->mM.mX[171UL] != 0)
    / 18000.0);
  out->mF.mX[1452UL] =
    -Accumalator_Module_Five1_Battery_Table_Based33_electricalModel_i;
  out->mF.mX[1453UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based33_electricalModel_i *
      (real_T)(t8449->mM.mX[172UL] != 0) / 18000.0);
  out->mF.mX[1454UL] =
    -Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_i;
  out->mF.mX[1455UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based34_electricalModel_i *
      (real_T)(t8449->mM.mX[173UL] != 0) / 18000.0);
  out->mF.mX[1456UL] = -t8449->mX.mX[283UL];
  out->mF.mX[1457UL] = -(-t8449->mX.mX[283UL] * (real_T)(t8449->mM.mX[174UL] !=
    0) / 18000.0);
  out->mF.mX[1458UL] = -t8449->mX.mX[240UL];
  out->mF.mX[1459UL] = -(-t8449->mX.mX[240UL] * (real_T)(t8449->mM.mX[175UL] !=
    0) / 18000.0);
  out->mF.mX[1460UL] =
    -Accumalator_Module_Five1_Battery_Table_Based37_electricalModel_i;
  out->mF.mX[1461UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based37_electricalModel_i *
      (real_T)(t8449->mM.mX[176UL] != 0) / 18000.0);
  out->mF.mX[1462UL] = -t8449->mX.mX[252UL];
  out->mF.mX[1463UL] = -(-t8449->mX.mX[252UL] * (real_T)(t8449->mM.mX[177UL] !=
    0) / 18000.0);
  out->mF.mX[1464UL] = -t8449->mX.mX[273UL];
  out->mF.mX[1465UL] = -(-t8449->mX.mX[273UL] * (real_T)(t8449->mM.mX[178UL] !=
    0) / 18000.0);
  out->mF.mX[1466UL] =
    -Accumalator_Module_Five1_Battery_Table_Based4_electricalModel_i;
  out->mF.mX[1467UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based4_electricalModel_i * (real_T)
      (t8449->mM.mX[179UL] != 0) / 18000.0);
  out->mF.mX[1468UL] = -t8449->mX.mX[311UL];
  out->mF.mX[1469UL] = -(-t8449->mX.mX[311UL] * (real_T)(t8449->mM.mX[181UL] !=
    0) / 18000.0);
  out->mF.mX[1470UL] =
    -Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_i;
  out->mF.mX[1471UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based41_electricalModel_i *
      (real_T)(t8449->mM.mX[182UL] != 0) / 18000.0);
  out->mF.mX[1472UL] =
    -Accumalator_Module_Five1_Battery_Table_Based42_electricalModel_i;
  out->mF.mX[1473UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based42_electricalModel_i *
      (real_T)(t8449->mM.mX[183UL] != 0) / 18000.0);
  out->mF.mX[1474UL] =
    -Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_i;
  out->mF.mX[1475UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based43_electricalModel_i *
      (real_T)(t8449->mM.mX[184UL] != 0) / 18000.0);
  out->mF.mX[1476UL] =
    -Accumalator_Module_Five1_Battery_Table_Based44_electricalModel_i;
  out->mF.mX[1477UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based44_electricalModel_i *
      (real_T)(t8449->mM.mX[185UL] != 0) / 18000.0);
  out->mF.mX[1478UL] = -t8449->mX.mX[393UL];
  out->mF.mX[1479UL] = -(-t8449->mX.mX[393UL] * (real_T)(t8449->mM.mX[186UL] !=
    0) / 18000.0);
  out->mF.mX[1480UL] = -t8449->mX.mX[359UL];
  out->mF.mX[1481UL] = -(-t8449->mX.mX[359UL] * (real_T)(t8449->mM.mX[187UL] !=
    0) / 18000.0);
  out->mF.mX[1482UL] =
    -Accumalator_Module_Five1_Battery_Table_Based47_electricalModel_i;
  out->mF.mX[1483UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based47_electricalModel_i *
      (real_T)(t8449->mM.mX[188UL] != 0) / 18000.0);
  out->mF.mX[1484UL] = -t8449->mX.mX[371UL];
  out->mF.mX[1485UL] = -(-t8449->mX.mX[371UL] * (real_T)(t8449->mM.mX[189UL] !=
    0) / 18000.0);
  out->mF.mX[1486UL] = -t8449->mX.mX[383UL];
  out->mF.mX[1487UL] = -(-t8449->mX.mX[383UL] * (real_T)(t8449->mM.mX[190UL] !=
    0) / 18000.0);
  out->mF.mX[1488UL] = -t8449->mX.mX[39UL];
  out->mF.mX[1489UL] = -(-t8449->mX.mX[39UL] * (real_T)(t8449->mM.mX[192UL] != 0)
    / 18000.0);
  out->mF.mX[1490UL] = -t8449->mX.mX[421UL];
  out->mF.mX[1491UL] = -(-t8449->mX.mX[421UL] * (real_T)(t8449->mM.mX[193UL] !=
    0) / 18000.0);
  out->mF.mX[1492UL] =
    -Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_i;
  out->mF.mX[1493UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based51_electricalModel_i *
      (real_T)(t8449->mM.mX[194UL] != 0) / 18000.0);
  out->mF.mX[1494UL] =
    -Accumalator_Module_Five1_Battery_Table_Based52_electricalModel_i;
  out->mF.mX[1495UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based52_electricalModel_i *
      (real_T)(t8449->mM.mX[195UL] != 0) / 18000.0);
  out->mF.mX[1496UL] =
    -Accumalator_Module_Five1_Battery_Table_Based53_electricalModel_i;
  out->mF.mX[1497UL] =
    -(-Accumalator_Module_Five1_Battery_Table_Based53_electricalModel_i *
      (real_T)(t8449->mM.mX[196UL] != 0) / 18000.0);
  out->mF.mX[1498UL] = -t8449->mX.mX[468UL];
  out->mF.mX[1499UL] = -(-t8449->mX.mX[468UL] * (real_T)(t8449->mM.mX[197UL] !=
    0) / 18000.0);
  out->mF.mX[1500UL] = -t8449->mX.mX[479UL];
  out->mF.mX[1501UL] = -(-t8449->mX.mX[479UL] * (real_T)(t8449->mM.mX[198UL] !=
    0) / 18000.0);
  out->mF.mX[1502UL] = -t8449->mX.mX[490UL];
  out->mF.mX[1503UL] = -(-t8449->mX.mX[490UL] * (real_T)(t8449->mM.mX[199UL] !=
    0) / 18000.0);
  out->mF.mX[1504UL] = -t8449->mX.mX[51UL];
  out->mF.mX[1505UL] = -(-t8449->mX.mX[51UL] * (real_T)(t8449->mM.mX[200UL] != 0)
    / 18000.0);
  out->mF.mX[1506UL] = -t8449->mX.mX[340UL];
  out->mF.mX[1507UL] = -(-t8449->mX.mX[340UL] * (real_T)(t8449->mM.mX[201UL] !=
    0) / 18000.0);
  out->mF.mX[1508UL] = -t8449->mX.mX[71UL];
  out->mF.mX[1509UL] = -(-t8449->mX.mX[71UL] * (real_T)(t8449->mM.mX[203UL] != 0)
    / 18000.0);
  out->mF.mX[1510UL] = -t8449->mX.mX[93UL];
  out->mF.mX[1511UL] = -(-t8449->mX.mX[93UL] * (real_T)(t8449->mM.mX[204UL] != 0)
    / 18000.0);
  out->mF.mX[1512UL] =
    -Accumalator_Module_One1_Battery_Table_Based1_electricalModel_i;
  out->mF.mX[1513UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based1_electricalModel_i * (real_T)
      (t8449->mM.mX[205UL] != 0) / 18000.0);
  out->mF.mX[1514UL] =
    -Accumalator_Module_One1_Battery_Table_Based10_electricalModel_i;
  out->mF.mX[1515UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based10_electricalModel_i * (real_T)
      (t8449->mM.mX[206UL] != 0) / 18000.0);
  out->mF.mX[1516UL] =
    -Accumalator_Module_One1_Battery_Table_Based11_electricalModel_i;
  out->mF.mX[1517UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based11_electricalModel_i * (real_T)
      (t8449->mM.mX[207UL] != 0) / 18000.0);
  out->mF.mX[1518UL] =
    -Accumalator_Module_One1_Battery_Table_Based12_electricalModel_i;
  out->mF.mX[1519UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based12_electricalModel_i * (real_T)
      (t8449->mM.mX[208UL] != 0) / 18000.0);
  out->mF.mX[1520UL] =
    -Accumalator_Module_One1_Battery_Table_Based13_electricalModel_i;
  out->mF.mX[1521UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based13_electricalModel_i * (real_T)
      (t8449->mM.mX[209UL] != 0) / 18000.0);
  out->mF.mX[1522UL] = -t8449->mX.mX[587UL];
  out->mF.mX[1523UL] = -(-t8449->mX.mX[587UL] * (real_T)(t8449->mM.mX[210UL] !=
    0) / 18000.0);
  out->mF.mX[1524UL] =
    -Accumalator_Module_One1_Battery_Table_Based15_electricalModel_i;
  out->mF.mX[1525UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based15_electricalModel_i * (real_T)
      (t8449->mM.mX[211UL] != 0) / 18000.0);
  out->mF.mX[1526UL] =
    -Accumalator_Module_One1_Battery_Table_Based16_electricalModel_i;
  out->mF.mX[1527UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based16_electricalModel_i * (real_T)
      (t8449->mM.mX[212UL] != 0) / 18000.0);
  out->mF.mX[1528UL] =
    -Accumalator_Module_One1_Battery_Table_Based17_electricalModel_i;
  out->mF.mX[1529UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based17_electricalModel_i * (real_T)
      (t8449->mM.mX[214UL] != 0) / 18000.0);
  out->mF.mX[1530UL] = -t8449->mX.mX[575UL];
  out->mF.mX[1531UL] = -(-t8449->mX.mX[575UL] * (real_T)(t8449->mM.mX[215UL] !=
    0) / 18000.0);
  out->mF.mX[1532UL] = -t8449->mX.mX[642UL];
  out->mF.mX[1533UL] = -(-t8449->mX.mX[642UL] * (real_T)(t8449->mM.mX[216UL] !=
    0) / 18000.0);
  out->mF.mX[1534UL] =
    -Accumalator_Module_One1_Battery_Table_Based2_electricalModel_i;
  out->mF.mX[1535UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based2_electricalModel_i * (real_T)
      (t8449->mM.mX[217UL] != 0) / 18000.0);
  out->mF.mX[1536UL] =
    -Accumalator_Module_One1_Battery_Table_Based20_electricalModel_i;
  out->mF.mX[1537UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based20_electricalModel_i * (real_T)
      (t8449->mM.mX[218UL] != 0) / 18000.0);
  out->mF.mX[1538UL] =
    -Accumalator_Module_One1_Battery_Table_Based21_electricalModel_i;
  out->mF.mX[1539UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based21_electricalModel_i * (real_T)
      (t8449->mM.mX[219UL] != 0) / 18000.0);
  out->mF.mX[1540UL] =
    -Accumalator_Module_One1_Battery_Table_Based22_electricalModel_i;
  out->mF.mX[1541UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based22_electricalModel_i * (real_T)
      (t8449->mM.mX[220UL] != 0) / 18000.0);
  out->mF.mX[1542UL] =
    -Accumalator_Module_One1_Battery_Table_Based23_electricalModel_i;
  out->mF.mX[1543UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based23_electricalModel_i * (real_T)
      (t8449->mM.mX[221UL] != 0) / 18000.0);
  out->mF.mX[1544UL] = -t8449->mX.mX[725UL];
  out->mF.mX[1545UL] = -(-t8449->mX.mX[725UL] * (real_T)(t8449->mM.mX[222UL] !=
    0) / 18000.0);
  out->mF.mX[1546UL] = -t8449->mX.mX[691UL];
  out->mF.mX[1547UL] = -(-t8449->mX.mX[691UL] * (real_T)(t8449->mM.mX[223UL] !=
    0) / 18000.0);
  out->mF.mX[1548UL] =
    -Accumalator_Module_One1_Battery_Table_Based26_electricalModel_i;
  out->mF.mX[1549UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based26_electricalModel_i * (real_T)
      (t8449->mM.mX[226UL] != 0) / 18000.0);
  out->mF.mX[1550UL] = -t8449->mX.mX[703UL];
  out->mF.mX[1551UL] = -(-t8449->mX.mX[703UL] * (real_T)(t8449->mM.mX[227UL] !=
    0) / 18000.0);
  out->mF.mX[1552UL] = -t8449->mX.mX[715UL];
  out->mF.mX[1553UL] = -(-t8449->mX.mX[715UL] * (real_T)(t8449->mM.mX[228UL] !=
    0) / 18000.0);
  out->mF.mX[1554UL] = -t8449->mX.mX[753UL];
  out->mF.mX[1555UL] = -(-t8449->mX.mX[753UL] * (real_T)(t8449->mM.mX[229UL] !=
    0) / 18000.0);
  out->mF.mX[1556UL] = -t8449->mX.mX[681UL];
  out->mF.mX[1557UL] = -(-t8449->mX.mX[681UL] * (real_T)(t8449->mM.mX[230UL] !=
    0) / 18000.0);
  out->mF.mX[1558UL] =
    -Accumalator_Module_One1_Battery_Table_Based30_electricalModel_i;
  out->mF.mX[1559UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based30_electricalModel_i * (real_T)
      (t8449->mM.mX[231UL] != 0) / 18000.0);
  out->mF.mX[1560UL] =
    -Accumalator_Module_One1_Battery_Table_Based31_electricalModel_i;
  out->mF.mX[1561UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based31_electricalModel_i * (real_T)
      (t8449->mM.mX[232UL] != 0) / 18000.0);
  out->mF.mX[1562UL] = -t8449->mX.mX[563UL];
  out->mF.mX[1563UL] = -(-t8449->mX.mX[563UL] * (real_T)(t8449->mM.mX[233UL] !=
    0) / 18000.0);
  out->mF.mX[1564UL] =
    -Accumalator_Module_One1_Battery_Table_Based33_electricalModel_i;
  out->mF.mX[1565UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based33_electricalModel_i * (real_T)
      (t8449->mM.mX[234UL] != 0) / 18000.0);
  out->mF.mX[1566UL] =
    -Accumalator_Module_One1_Battery_Table_Based34_electricalModel_i;
  out->mF.mX[1567UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based34_electricalModel_i * (real_T)
      (t8449->mM.mX[235UL] != 0) / 18000.0);
  out->mF.mX[1568UL] = -t8449->mX.mX[843UL];
  out->mF.mX[1569UL] = -(-t8449->mX.mX[843UL] * (real_T)(t8449->mM.mX[237UL] !=
    0) / 18000.0);
  out->mF.mX[1570UL] = -t8449->mX.mX[800UL];
  out->mF.mX[1571UL] = -(-t8449->mX.mX[800UL] * (real_T)(t8449->mM.mX[238UL] !=
    0) / 18000.0);
  out->mF.mX[1572UL] =
    -Accumalator_Module_One1_Battery_Table_Based37_electricalModel_i;
  out->mF.mX[1573UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based37_electricalModel_i * (real_T)
      (t8449->mM.mX[239UL] != 0) / 18000.0);
  out->mF.mX[1574UL] = -t8449->mX.mX[812UL];
  out->mF.mX[1575UL] = -(-t8449->mX.mX[812UL] * (real_T)(t8449->mM.mX[240UL] !=
    0) / 18000.0);
  out->mF.mX[1576UL] = -t8449->mX.mX[833UL];
  out->mF.mX[1577UL] = -(-t8449->mX.mX[833UL] * (real_T)(t8449->mM.mX[241UL] !=
    0) / 18000.0);
  out->mF.mX[1578UL] =
    -Accumalator_Module_One1_Battery_Table_Based4_electricalModel_i;
  out->mF.mX[1579UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based4_electricalModel_i * (real_T)
      (t8449->mM.mX[242UL] != 0) / 18000.0);
  out->mF.mX[1580UL] = -t8449->mX.mX[871UL];
  out->mF.mX[1581UL] = -(-t8449->mX.mX[871UL] * (real_T)(t8449->mM.mX[243UL] !=
    0) / 18000.0);
  out->mF.mX[1582UL] =
    -Accumalator_Module_One1_Battery_Table_Based41_electricalModel_i;
  out->mF.mX[1583UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based41_electricalModel_i * (real_T)
      (t8449->mM.mX[244UL] != 0) / 18000.0);
  out->mF.mX[1584UL] =
    -Accumalator_Module_One1_Battery_Table_Based42_electricalModel_i;
  out->mF.mX[1585UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based42_electricalModel_i * (real_T)
      (t8449->mM.mX[245UL] != 0) / 18000.0);
  out->mF.mX[1586UL] =
    -Accumalator_Module_One1_Battery_Table_Based43_electricalModel_i;
  out->mF.mX[1587UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based43_electricalModel_i * (real_T)
      (t8449->mM.mX[246UL] != 0) / 18000.0);
  out->mF.mX[1588UL] =
    -Accumalator_Module_One1_Battery_Table_Based44_electricalModel_i;
  out->mF.mX[1589UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based44_electricalModel_i * (real_T)
      (t8449->mM.mX[248UL] != 0) / 18000.0);
  out->mF.mX[1590UL] = -t8449->mX.mX[953UL];
  out->mF.mX[1591UL] = -(-t8449->mX.mX[953UL] * (real_T)(t8449->mM.mX[249UL] !=
    0) / 18000.0);
  out->mF.mX[1592UL] = -t8449->mX.mX[919UL];
  out->mF.mX[1593UL] = -(-t8449->mX.mX[919UL] * (real_T)(t8449->mM.mX[250UL] !=
    0) / 18000.0);
  out->mF.mX[1594UL] =
    -Accumalator_Module_One1_Battery_Table_Based47_electricalModel_i;
  out->mF.mX[1595UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based47_electricalModel_i * (real_T)
      (t8449->mM.mX[251UL] != 0) / 18000.0);
  out->mF.mX[1596UL] = -t8449->mX.mX[931UL];
  out->mF.mX[1597UL] = -(-t8449->mX.mX[931UL] * (real_T)(t8449->mM.mX[252UL] !=
    0) / 18000.0);
  out->mF.mX[1598UL] = -t8449->mX.mX[943UL];
  out->mF.mX[1599UL] = -(-t8449->mX.mX[943UL] * (real_T)(t8449->mM.mX[253UL] !=
    0) / 18000.0);
  out->mF.mX[1600UL] = -t8449->mX.mX[599UL];
  out->mF.mX[1601UL] = -(-t8449->mX.mX[599UL] * (real_T)(t8449->mM.mX[254UL] !=
    0) / 18000.0);
  out->mF.mX[1602UL] = -t8449->mX.mX[981UL];
  out->mF.mX[1603UL] = -(-t8449->mX.mX[981UL] * (real_T)(t8449->mM.mX[255UL] !=
    0) / 18000.0);
  out->mF.mX[1604UL] =
    -Accumalator_Module_One1_Battery_Table_Based51_electricalModel_i;
  out->mF.mX[1605UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based51_electricalModel_i * (real_T)
      (t8449->mM.mX[256UL] != 0) / 18000.0);
  out->mF.mX[1606UL] =
    -Accumalator_Module_One1_Battery_Table_Based52_electricalModel_i;
  out->mF.mX[1607UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based52_electricalModel_i * (real_T)
      (t8449->mM.mX[257UL] != 0) / 18000.0);
  out->mF.mX[1608UL] =
    -Accumalator_Module_One1_Battery_Table_Based53_electricalModel_i;
  out->mF.mX[1609UL] =
    -(-Accumalator_Module_One1_Battery_Table_Based53_electricalModel_i * (real_T)
      (t8449->mM.mX[259UL] != 0) / 18000.0);
  out->mF.mX[1610UL] = -t8449->mX.mX[1028UL];
  out->mF.mX[1611UL] = -(-t8449->mX.mX[1028UL] * (real_T)(t8449->mM.mX[260UL] !=
    0) / 18000.0);
  out->mF.mX[1612UL] = -t8449->mX.mX[1045UL];
  out->mF.mX[1613UL] = -(-t8449->mX.mX[1045UL] * (real_T)(t8449->mM.mX[261UL] !=
    0) / 18000.0);
  out->mF.mX[1614UL] = -t8449->mX.mX[1057UL];
  out->mF.mX[1615UL] = -(-t8449->mX.mX[1057UL] * (real_T)(t8449->mM.mX[262UL] !=
    0) / 18000.0);
  out->mF.mX[1616UL] = -t8449->mX.mX[611UL];
  out->mF.mX[1617UL] = -(-t8449->mX.mX[611UL] * (real_T)(t8449->mM.mX[263UL] !=
    0) / 18000.0);
  out->mF.mX[1618UL] = -t8449->mX.mX[900UL];
  out->mF.mX[1619UL] = -(-t8449->mX.mX[900UL] * (real_T)(t8449->mM.mX[264UL] !=
    0) / 18000.0);
  out->mF.mX[1620UL] = -t8449->mX.mX[631UL];
  out->mF.mX[1621UL] = -(-t8449->mX.mX[631UL] * (real_T)(t8449->mM.mX[265UL] !=
    0) / 18000.0);
  out->mF.mX[1622UL] = -t8449->mX.mX[653UL];
  out->mF.mX[1623UL] = -(-t8449->mX.mX[653UL] * (real_T)(t8449->mM.mX[266UL] !=
    0) / 18000.0);
  out->mF.mX[1624UL] =
    -Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_i;
  out->mF.mX[1625UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based1_electricalModel_i *
      (real_T)(t8449->mM.mX[267UL] != 0) / 18000.0);
  out->mF.mX[1626UL] =
    -Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_i;
  out->mF.mX[1627UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based10_electricalModel_i *
      (real_T)(t8449->mM.mX[268UL] != 0) / 18000.0);
  out->mF.mX[1628UL] =
    -Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_i;
  out->mF.mX[1629UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based11_electricalModel_i *
      (real_T)(t8449->mM.mX[270UL] != 0) / 18000.0);
  out->mF.mX[1630UL] =
    -Accumalator_Module_Three1_Battery_Table_Based12_electricalModel_i;
  out->mF.mX[1631UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based12_electricalModel_i *
      (real_T)(t8449->mM.mX[271UL] != 0) / 18000.0);
  out->mF.mX[1632UL] =
    -Accumalator_Module_Three1_Battery_Table_Based13_electricalModel_i;
  out->mF.mX[1633UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based13_electricalModel_i *
      (real_T)(t8449->mM.mX[272UL] != 0) / 18000.0);
  out->mF.mX[1634UL] = -t8449->mX.mX[1154UL];
  out->mF.mX[1635UL] = -(-t8449->mX.mX[1154UL] * (real_T)(t8449->mM.mX[273UL] !=
    0) / 18000.0);
  out->mF.mX[1636UL] =
    -Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_i;
  out->mF.mX[1637UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based15_electricalModel_i *
      (real_T)(t8449->mM.mX[274UL] != 0) / 18000.0);
  out->mF.mX[1638UL] =
    -Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_i;
  out->mF.mX[1639UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based16_electricalModel_i *
      (real_T)(t8449->mM.mX[275UL] != 0) / 18000.0);
  out->mF.mX[1640UL] =
    -Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_i;
  out->mF.mX[1641UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based17_electricalModel_i *
      (real_T)(t8449->mM.mX[276UL] != 0) / 18000.0);
  out->mF.mX[1642UL] = -t8449->mX.mX[1142UL];
  out->mF.mX[1643UL] = -(-t8449->mX.mX[1142UL] * (real_T)(t8449->mM.mX[277UL] !=
    0) / 18000.0);
  out->mF.mX[1644UL] = -t8449->mX.mX[1209UL];
  out->mF.mX[1645UL] = -(-t8449->mX.mX[1209UL] * (real_T)(t8449->mM.mX[278UL] !=
    0) / 18000.0);
  out->mF.mX[1646UL] =
    -Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_i;
  out->mF.mX[1647UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based2_electricalModel_i *
      (real_T)(t8449->mM.mX[279UL] != 0) / 18000.0);
  out->mF.mX[1648UL] =
    -Accumalator_Module_Three1_Battery_Table_Based20_electricalModel_i;
  out->mF.mX[1649UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based20_electricalModel_i *
      (real_T)(t8449->mM.mX[281UL] != 0) / 18000.0);
  out->mF.mX[1650UL] =
    -Accumalator_Module_Three1_Battery_Table_Based21_electricalModel_i;
  out->mF.mX[1651UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based21_electricalModel_i *
      (real_T)(t8449->mM.mX[282UL] != 0) / 18000.0);
  out->mF.mX[1652UL] =
    -Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_i;
  out->mF.mX[1653UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based22_electricalModel_i *
      (real_T)(t8449->mM.mX[283UL] != 0) / 18000.0);
  out->mF.mX[1654UL] =
    -Accumalator_Module_Three1_Battery_Table_Based23_electricalModel_i;
  out->mF.mX[1655UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based23_electricalModel_i *
      (real_T)(t8449->mM.mX[284UL] != 0) / 18000.0);
  out->mF.mX[1656UL] = -t8449->mX.mX[1292UL];
  out->mF.mX[1657UL] = -(-t8449->mX.mX[1292UL] * (real_T)(t8449->mM.mX[285UL] !=
    0) / 18000.0);
  out->mF.mX[1658UL] = -t8449->mX.mX[1258UL];
  out->mF.mX[1659UL] = -(-t8449->mX.mX[1258UL] * (real_T)(t8449->mM.mX[286UL] !=
    0) / 18000.0);
  out->mF.mX[1660UL] =
    -Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_i;
  out->mF.mX[1661UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based26_electricalModel_i *
      (real_T)(t8449->mM.mX[287UL] != 0) / 18000.0);
  out->mF.mX[1662UL] = -t8449->mX.mX[1270UL];
  out->mF.mX[1663UL] = -(-t8449->mX.mX[1270UL] * (real_T)(t8449->mM.mX[288UL] !=
    0) / 18000.0);
  out->mF.mX[1664UL] = -t8449->mX.mX[1282UL];
  out->mF.mX[1665UL] = -(-t8449->mX.mX[1282UL] * (real_T)(t8449->mM.mX[289UL] !=
    0) / 18000.0);
  out->mF.mX[1666UL] = -t8449->mX.mX[1320UL];
  out->mF.mX[1667UL] = -(-t8449->mX.mX[1320UL] * (real_T)(t8449->mM.mX[290UL] !=
    0) / 18000.0);
  out->mF.mX[1668UL] = -t8449->mX.mX[1248UL];
  out->mF.mX[1669UL] = -(-t8449->mX.mX[1248UL] * (real_T)(t8449->mM.mX[292UL] !=
    0) / 18000.0);
  out->mF.mX[1670UL] =
    -Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_i;
  out->mF.mX[1671UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based30_electricalModel_i *
      (real_T)(t8449->mM.mX[293UL] != 0) / 18000.0);
  out->mF.mX[1672UL] =
    -Accumalator_Module_Three1_Battery_Table_Based31_electricalModel_i;
  out->mF.mX[1673UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based31_electricalModel_i *
      (real_T)(t8449->mM.mX[294UL] != 0) / 18000.0);
  out->mF.mX[1674UL] = -t8449->mX.mX[1130UL];
  out->mF.mX[1675UL] = -(-t8449->mX.mX[1130UL] * (real_T)(t8449->mM.mX[295UL] !=
    0) / 18000.0);
  out->mF.mX[1676UL] =
    -Accumalator_Module_Three1_Battery_Table_Based33_electricalModel_i;
  out->mF.mX[1677UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based33_electricalModel_i *
      (real_T)(t8449->mM.mX[296UL] != 0) / 18000.0);
  out->mF.mX[1678UL] =
    -Accumalator_Module_Three1_Battery_Table_Based34_electricalModel_i;
  out->mF.mX[1679UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based34_electricalModel_i *
      (real_T)(t8449->mM.mX[297UL] != 0) / 18000.0);
  out->mF.mX[1680UL] = -t8449->mX.mX[1410UL];
  out->mF.mX[1681UL] = -(-t8449->mX.mX[1410UL] * (real_T)(t8449->mM.mX[298UL] !=
    0) / 18000.0);
  out->mF.mX[1682UL] = -t8449->mX.mX[1367UL];
  out->mF.mX[1683UL] = -(-t8449->mX.mX[1367UL] * (real_T)(t8449->mM.mX[299UL] !=
    0) / 18000.0);
  out->mF.mX[1684UL] =
    -Accumalator_Module_Three1_Battery_Table_Based37_electricalModel_i;
  out->mF.mX[1685UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based37_electricalModel_i *
      (real_T)(t8449->mM.mX[300UL] != 0) / 18000.0);
  out->mF.mX[1686UL] = -t8449->mX.mX[1379UL];
  out->mF.mX[1687UL] = -(-t8449->mX.mX[1379UL] * (real_T)(t8449->mM.mX[301UL] !=
    0) / 18000.0);
  out->mF.mX[1688UL] = -t8449->mX.mX[1400UL];
  out->mF.mX[1689UL] = -(-t8449->mX.mX[1400UL] * (real_T)(t8449->mM.mX[303UL] !=
    0) / 18000.0);
  out->mF.mX[1690UL] =
    -Accumalator_Module_Three1_Battery_Table_Based4_electricalModel_i;
  out->mF.mX[1691UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based4_electricalModel_i *
      (real_T)(t8449->mM.mX[304UL] != 0) / 18000.0);
  out->mF.mX[1692UL] = -t8449->mX.mX[1438UL];
  out->mF.mX[1693UL] = -(-t8449->mX.mX[1438UL] * (real_T)(t8449->mM.mX[305UL] !=
    0) / 18000.0);
  out->mF.mX[1694UL] =
    -Accumalator_Module_Three1_Battery_Table_Based41_electricalModel_i;
  out->mF.mX[1695UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based41_electricalModel_i *
      (real_T)(t8449->mM.mX[306UL] != 0) / 18000.0);
  out->mF.mX[1696UL] =
    -Accumalator_Module_Three1_Battery_Table_Based42_electricalModel_i;
  out->mF.mX[1697UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based42_electricalModel_i *
      (real_T)(t8449->mM.mX[307UL] != 0) / 18000.0);
  out->mF.mX[1698UL] =
    -Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_i;
  out->mF.mX[1699UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based43_electricalModel_i *
      (real_T)(t8449->mM.mX[308UL] != 0) / 18000.0);
  out->mF.mX[1700UL] =
    -Accumalator_Module_Three1_Battery_Table_Based44_electricalModel_i;
  out->mF.mX[1701UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based44_electricalModel_i *
      (real_T)(t8449->mM.mX[309UL] != 0) / 18000.0);
  out->mF.mX[1702UL] = -t8449->mX.mX[1520UL];
  out->mF.mX[1703UL] = -(-t8449->mX.mX[1520UL] * (real_T)(t8449->mM.mX[310UL] !=
    0) / 18000.0);
  out->mF.mX[1704UL] = -t8449->mX.mX[1486UL];
  out->mF.mX[1705UL] = -(-t8449->mX.mX[1486UL] * (real_T)(t8449->mM.mX[311UL] !=
    0) / 18000.0);
  out->mF.mX[1706UL] =
    -Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_i;
  out->mF.mX[1707UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based47_electricalModel_i *
      (real_T)(t8449->mM.mX[312UL] != 0) / 18000.0);
  out->mF.mX[1708UL] = -t8449->mX.mX[1498UL];
  out->mF.mX[1709UL] = -(-t8449->mX.mX[1498UL] * (real_T)(t8449->mM.mX[314UL] !=
    0) / 18000.0);
  out->mF.mX[1710UL] = -t8449->mX.mX[1510UL];
  out->mF.mX[1711UL] = -(-t8449->mX.mX[1510UL] * (real_T)(t8449->mM.mX[315UL] !=
    0) / 18000.0);
  out->mF.mX[1712UL] = -t8449->mX.mX[1166UL];
  out->mF.mX[1713UL] = -(-t8449->mX.mX[1166UL] * (real_T)(t8449->mM.mX[316UL] !=
    0) / 18000.0);
  out->mF.mX[1714UL] = -t8449->mX.mX[1548UL];
  out->mF.mX[1715UL] = -(-t8449->mX.mX[1548UL] * (real_T)(t8449->mM.mX[317UL] !=
    0) / 18000.0);
  out->mF.mX[1716UL] =
    -Accumalator_Module_Three1_Battery_Table_Based51_electricalModel_i;
  out->mF.mX[1717UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based51_electricalModel_i *
      (real_T)(t8449->mM.mX[318UL] != 0) / 18000.0);
  out->mF.mX[1718UL] =
    -Accumalator_Module_Three1_Battery_Table_Based52_electricalModel_i;
  out->mF.mX[1719UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based52_electricalModel_i *
      (real_T)(t8449->mM.mX[319UL] != 0) / 18000.0);
  out->mF.mX[1720UL] =
    -Accumalator_Module_Three1_Battery_Table_Based53_electricalModel_i;
  out->mF.mX[1721UL] =
    -(-Accumalator_Module_Three1_Battery_Table_Based53_electricalModel_i *
      (real_T)(t8449->mM.mX[320UL] != 0) / 18000.0);
  out->mF.mX[1722UL] = -t8449->mX.mX[1595UL];
  out->mF.mX[1723UL] = -(-t8449->mX.mX[1595UL] * (real_T)(t8449->mM.mX[321UL] !=
    0) / 18000.0);
  out->mF.mX[1724UL] = -t8449->mX.mX[1606UL];
  out->mF.mX[1725UL] = -(-t8449->mX.mX[1606UL] * (real_T)(t8449->mM.mX[322UL] !=
    0) / 18000.0);
  out->mF.mX[1726UL] = -t8449->mX.mX[1618UL];
  out->mF.mX[1727UL] = -(-t8449->mX.mX[1618UL] * (real_T)(t8449->mM.mX[323UL] !=
    0) / 18000.0);
  out->mF.mX[1728UL] = -t8449->mX.mX[1178UL];
  out->mF.mX[1729UL] = -(-t8449->mX.mX[1178UL] * (real_T)(t8449->mM.mX[325UL] !=
    0) / 18000.0);
  out->mF.mX[1730UL] = -t8449->mX.mX[1467UL];
  out->mF.mX[1731UL] = -(-t8449->mX.mX[1467UL] * (real_T)(t8449->mM.mX[326UL] !=
    0) / 18000.0);
  out->mF.mX[1732UL] = -t8449->mX.mX[1198UL];
  out->mF.mX[1733UL] = -(-t8449->mX.mX[1198UL] * (real_T)(t8449->mM.mX[327UL] !=
    0) / 18000.0);
  out->mF.mX[1734UL] = -t8449->mX.mX[1220UL];
  out->mF.mX[1735UL] = -(-t8449->mX.mX[1220UL] * (real_T)(t8449->mM.mX[328UL] !=
    0) / 18000.0);
  out->mF.mX[1736UL] =
    -Accumalator_Module_Two_Battery_Table_Based1_electricalModel_i;
  out->mF.mX[1737UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based1_electricalModel_i * (real_T)
      (t8449->mM.mX[329UL] != 0) / 18000.0);
  out->mF.mX[1738UL] =
    -Accumalator_Module_Two_Battery_Table_Based10_electricalModel_i;
  out->mF.mX[1739UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based10_electricalModel_i * (real_T)
      (t8449->mM.mX[330UL] != 0) / 18000.0);
  out->mF.mX[1740UL] =
    -Accumalator_Module_Two_Battery_Table_Based11_electricalModel_i;
  out->mF.mX[1741UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based11_electricalModel_i * (real_T)
      (t8449->mM.mX[331UL] != 0) / 18000.0);
  out->mF.mX[1742UL] =
    -Accumalator_Module_Two_Battery_Table_Based12_electricalModel_i;
  out->mF.mX[1743UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based12_electricalModel_i * (real_T)
      (t8449->mM.mX[332UL] != 0) / 18000.0);
  out->mF.mX[1744UL] =
    -Accumalator_Module_Two_Battery_Table_Based13_electricalModel_i;
  out->mF.mX[1745UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based13_electricalModel_i * (real_T)
      (t8449->mM.mX[333UL] != 0) / 18000.0);
  out->mF.mX[1746UL] = -t8449->mX.mX[1715UL];
  out->mF.mX[1747UL] = -(-t8449->mX.mX[1715UL] * (real_T)(t8449->mM.mX[334UL] !=
    0) / 18000.0);
  out->mF.mX[1748UL] =
    -Accumalator_Module_Two_Battery_Table_Based15_electricalModel_i;
  out->mF.mX[1749UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based15_electricalModel_i * (real_T)
      (t8449->mM.mX[337UL] != 0) / 18000.0);
  out->mF.mX[1750UL] =
    -Accumalator_Module_Two_Battery_Table_Based16_electricalModel_i;
  out->mF.mX[1751UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based16_electricalModel_i * (real_T)
      (t8449->mM.mX[338UL] != 0) / 18000.0);
  out->mF.mX[1752UL] =
    -Accumalator_Module_Two_Battery_Table_Based17_electricalModel_i;
  out->mF.mX[1753UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based17_electricalModel_i * (real_T)
      (t8449->mM.mX[339UL] != 0) / 18000.0);
  out->mF.mX[1754UL] = -t8449->mX.mX[1703UL];
  out->mF.mX[1755UL] = -(-t8449->mX.mX[1703UL] * (real_T)(t8449->mM.mX[340UL] !=
    0) / 18000.0);
  out->mF.mX[1756UL] = -t8449->mX.mX[1770UL];
  out->mF.mX[1757UL] = -(-t8449->mX.mX[1770UL] * (real_T)(t8449->mM.mX[341UL] !=
    0) / 18000.0);
  out->mF.mX[1758UL] =
    -Accumalator_Module_Two_Battery_Table_Based2_electricalModel_i;
  out->mF.mX[1759UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based2_electricalModel_i * (real_T)
      (t8449->mM.mX[342UL] != 0) / 18000.0);
  out->mF.mX[1760UL] =
    -Accumalator_Module_Two_Battery_Table_Based20_electricalModel_i;
  out->mF.mX[1761UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based20_electricalModel_i * (real_T)
      (t8449->mM.mX[343UL] != 0) / 18000.0);
  out->mF.mX[1762UL] =
    -Accumalator_Module_Two_Battery_Table_Based21_electricalModel_i;
  out->mF.mX[1763UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based21_electricalModel_i * (real_T)
      (t8449->mM.mX[344UL] != 0) / 18000.0);
  out->mF.mX[1764UL] =
    -Accumalator_Module_Two_Battery_Table_Based22_electricalModel_i;
  out->mF.mX[1765UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based22_electricalModel_i * (real_T)
      (t8449->mM.mX[345UL] != 0) / 18000.0);
  out->mF.mX[1766UL] =
    -Accumalator_Module_Two_Battery_Table_Based23_electricalModel_i;
  out->mF.mX[1767UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based23_electricalModel_i * (real_T)
      (t8449->mM.mX[346UL] != 0) / 18000.0);
  out->mF.mX[1768UL] = -t8449->mX.mX[1853UL];
  out->mF.mX[1769UL] = -(-t8449->mX.mX[1853UL] * (real_T)(t8449->mM.mX[348UL] !=
    0) / 18000.0);
  out->mF.mX[1770UL] = -t8449->mX.mX[1819UL];
  out->mF.mX[1771UL] = -(-t8449->mX.mX[1819UL] * (real_T)(t8449->mM.mX[349UL] !=
    0) / 18000.0);
  out->mF.mX[1772UL] =
    -Accumalator_Module_Two_Battery_Table_Based26_electricalModel_i;
  out->mF.mX[1773UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based26_electricalModel_i * (real_T)
      (t8449->mM.mX[350UL] != 0) / 18000.0);
  out->mF.mX[1774UL] = -t8449->mX.mX[1831UL];
  out->mF.mX[1775UL] = -(-t8449->mX.mX[1831UL] * (real_T)(t8449->mM.mX[351UL] !=
    0) / 18000.0);
  out->mF.mX[1776UL] = -t8449->mX.mX[1843UL];
  out->mF.mX[1777UL] = -(-t8449->mX.mX[1843UL] * (real_T)(t8449->mM.mX[352UL] !=
    0) / 18000.0);
  out->mF.mX[1778UL] = -t8449->mX.mX[1881UL];
  out->mF.mX[1779UL] = -(-t8449->mX.mX[1881UL] * (real_T)(t8449->mM.mX[353UL] !=
    0) / 18000.0);
  out->mF.mX[1780UL] = -t8449->mX.mX[1809UL];
  out->mF.mX[1781UL] = -(-t8449->mX.mX[1809UL] * (real_T)(t8449->mM.mX[354UL] !=
    0) / 18000.0);
  out->mF.mX[1782UL] =
    -Accumalator_Module_Two_Battery_Table_Based30_electricalModel_i;
  out->mF.mX[1783UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based30_electricalModel_i * (real_T)
      (t8449->mM.mX[355UL] != 0) / 18000.0);
  out->mF.mX[1784UL] =
    -Accumalator_Module_Two_Battery_Table_Based31_electricalModel_i;
  out->mF.mX[1785UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based31_electricalModel_i * (real_T)
      (t8449->mM.mX[356UL] != 0) / 18000.0);
  out->mF.mX[1786UL] = -t8449->mX.mX[1691UL];
  out->mF.mX[1787UL] = -(-t8449->mX.mX[1691UL] * (real_T)(t8449->mM.mX[357UL] !=
    0) / 18000.0);
  out->mF.mX[1788UL] =
    -Accumalator_Module_Two_Battery_Table_Based33_electricalModel_i;
  out->mF.mX[1789UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based33_electricalModel_i * (real_T)
      (t8449->mM.mX[359UL] != 0) / 18000.0);
  out->mF.mX[1790UL] =
    -Accumalator_Module_Two_Battery_Table_Based34_electricalModel_i;
  out->mF.mX[1791UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based34_electricalModel_i * (real_T)
      (t8449->mM.mX[360UL] != 0) / 18000.0);
  out->mF.mX[1792UL] = -t8449->mX.mX[1971UL];
  out->mF.mX[1793UL] = -(-t8449->mX.mX[1971UL] * (real_T)(t8449->mM.mX[361UL] !=
    0) / 18000.0);
  out->mF.mX[1794UL] = -t8449->mX.mX[1928UL];
  out->mF.mX[1795UL] = -(-t8449->mX.mX[1928UL] * (real_T)(t8449->mM.mX[362UL] !=
    0) / 18000.0);
  out->mF.mX[1796UL] = -t8449->mX.mX[2UL];
  out->mF.mX[1797UL] = -(-t8449->mX.mX[2UL] * (real_T)(t8449->mM.mX[363UL] != 0)
    / 18000.0);
  out->mF.mX[1798UL] = -t8449->mX.mX[1940UL];
  out->mF.mX[1799UL] = -(-t8449->mX.mX[1940UL] * (real_T)(t8449->mM.mX[364UL] !=
    0) / 18000.0);
  out->mF.mX[1800UL] = -t8449->mX.mX[1961UL];
  out->mF.mX[1801UL] = -(-t8449->mX.mX[1961UL] * (real_T)(t8449->mM.mX[365UL] !=
    0) / 18000.0);
  out->mF.mX[1802UL] =
    -Accumalator_Module_Two_Battery_Table_Based4_electricalModel_i;
  out->mF.mX[1803UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based4_electricalModel_i * (real_T)
      (t8449->mM.mX[366UL] != 0) / 18000.0);
  out->mF.mX[1804UL] = -t8449->mX.mX[3UL];
  out->mF.mX[1805UL] = -(-t8449->mX.mX[3UL] * (real_T)(t8449->mM.mX[367UL] != 0)
    / 18000.0);
  out->mF.mX[1806UL] =
    -Accumalator_Module_Two_Battery_Table_Based41_electricalModel_i;
  out->mF.mX[1807UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based41_electricalModel_i * (real_T)
      (t8449->mM.mX[368UL] != 0) / 18000.0);
  out->mF.mX[1808UL] =
    -Accumalator_Module_Two_Battery_Table_Based42_electricalModel_i;
  out->mF.mX[1809UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based42_electricalModel_i * (real_T)
      (t8449->mM.mX[370UL] != 0) / 18000.0);
  out->mF.mX[1810UL] =
    -Accumalator_Module_Two_Battery_Table_Based43_electricalModel_i;
  out->mF.mX[1811UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based43_electricalModel_i * (real_T)
      (t8449->mM.mX[371UL] != 0) / 18000.0);
  out->mF.mX[1812UL] =
    -Accumalator_Module_Two_Battery_Table_Based44_electricalModel_i;
  out->mF.mX[1813UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based44_electricalModel_i * (real_T)
      (t8449->mM.mX[372UL] != 0) / 18000.0);
  out->mF.mX[1814UL] = -t8449->mX.mX[2080UL];
  out->mF.mX[1815UL] = -(-t8449->mX.mX[2080UL] * (real_T)(t8449->mM.mX[373UL] !=
    0) / 18000.0);
  out->mF.mX[1816UL] = -t8449->mX.mX[2046UL];
  out->mF.mX[1817UL] = -(-t8449->mX.mX[2046UL] * (real_T)(t8449->mM.mX[374UL] !=
    0) / 18000.0);
  out->mF.mX[1818UL] =
    -Accumalator_Module_Two_Battery_Table_Based47_electricalModel_i;
  out->mF.mX[1819UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based47_electricalModel_i * (real_T)
      (t8449->mM.mX[375UL] != 0) / 18000.0);
  out->mF.mX[1820UL] = -t8449->mX.mX[2058UL];
  out->mF.mX[1821UL] = -(-t8449->mX.mX[2058UL] * (real_T)(t8449->mM.mX[376UL] !=
    0) / 18000.0);
  out->mF.mX[1822UL] = -t8449->mX.mX[2070UL];
  out->mF.mX[1823UL] = -(-t8449->mX.mX[2070UL] * (real_T)(t8449->mM.mX[377UL] !=
    0) / 18000.0);
  out->mF.mX[1824UL] = -t8449->mX.mX[1727UL];
  out->mF.mX[1825UL] = -(-t8449->mX.mX[1727UL] * (real_T)(t8449->mM.mX[378UL] !=
    0) / 18000.0);
  out->mF.mX[1826UL] = -t8449->mX.mX[2108UL];
  out->mF.mX[1827UL] = -(-t8449->mX.mX[2108UL] * (real_T)(t8449->mM.mX[379UL] !=
    0) / 18000.0);
  out->mF.mX[1828UL] =
    -Accumalator_Module_Two_Battery_Table_Based51_electricalModel_i;
  out->mF.mX[1829UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based51_electricalModel_i * (real_T)
      (t8449->mM.mX[381UL] != 0) / 18000.0);
  out->mF.mX[1830UL] =
    -Accumalator_Module_Two_Battery_Table_Based52_electricalModel_i;
  out->mF.mX[1831UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based52_electricalModel_i * (real_T)
      (t8449->mM.mX[382UL] != 0) / 18000.0);
  out->mF.mX[1832UL] =
    -Accumalator_Module_Two_Battery_Table_Based53_electricalModel_i;
  out->mF.mX[1833UL] =
    -(-Accumalator_Module_Two_Battery_Table_Based53_electricalModel_i * (real_T)
      (t8449->mM.mX[383UL] != 0) / 18000.0);
  out->mF.mX[1834UL] = -t8449->mX.mX[2155UL];
  out->mF.mX[1835UL] = -(-t8449->mX.mX[2155UL] * (real_T)(t8449->mM.mX[384UL] !=
    0) / 18000.0);
  out->mF.mX[1836UL] = -t8449->mX.mX[2165UL];
  out->mF.mX[1837UL] = -(-t8449->mX.mX[2165UL] * (real_T)(t8449->mM.mX[385UL] !=
    0) / 18000.0);
  out->mF.mX[1838UL] = -t8449->mX.mX[2176UL];
  out->mF.mX[1839UL] = -(-t8449->mX.mX[2176UL] * (real_T)(t8449->mM.mX[386UL] !=
    0) / 18000.0);
  out->mF.mX[1840UL] = -t8449->mX.mX[1739UL];
  out->mF.mX[1841UL] = -(-t8449->mX.mX[1739UL] * (real_T)(t8449->mM.mX[387UL] !=
    0) / 18000.0);
  out->mF.mX[1842UL] = -t8449->mX.mX[2027UL];
  out->mF.mX[1843UL] = -(-t8449->mX.mX[2027UL] * (real_T)(t8449->mM.mX[388UL] !=
    0) / 18000.0);
  out->mF.mX[1844UL] = -t8449->mX.mX[1759UL];
  out->mF.mX[1845UL] = -(-t8449->mX.mX[1759UL] * (real_T)(t8449->mM.mX[389UL] !=
    0) / 18000.0);
  out->mF.mX[1846UL] = -t8449->mX.mX[1781UL];
  out->mF.mX[1847UL] = -(-t8449->mX.mX[1781UL] * (real_T)(t8449->mM.mX[390UL] !=
    0) / 18000.0);
  out->mF.mX[1848UL] =
    -Accumalator_Module_four_Battery_Table_Based1_electricalModel_i;
  out->mF.mX[1849UL] =
    -(-Accumalator_Module_four_Battery_Table_Based1_electricalModel_i * (real_T)
      (t8449->mM.mX[392UL] != 0) / 18000.0);
  out->mF.mX[1850UL] =
    -Accumalator_Module_four_Battery_Table_Based10_electricalModel_i;
  out->mF.mX[1851UL] =
    -(-Accumalator_Module_four_Battery_Table_Based10_electricalModel_i * (real_T)
      (t8449->mM.mX[393UL] != 0) / 18000.0);
  out->mF.mX[1852UL] =
    -Accumalator_Module_four_Battery_Table_Based11_electricalModel_i;
  out->mF.mX[1853UL] =
    -(-Accumalator_Module_four_Battery_Table_Based11_electricalModel_i * (real_T)
      (t8449->mM.mX[394UL] != 0) / 18000.0);
  out->mF.mX[1854UL] =
    -Accumalator_Module_four_Battery_Table_Based12_electricalModel_i;
  out->mF.mX[1855UL] =
    -(-Accumalator_Module_four_Battery_Table_Based12_electricalModel_i * (real_T)
      (t8449->mM.mX[395UL] != 0) / 18000.0);
  out->mF.mX[1856UL] =
    -Accumalator_Module_four_Battery_Table_Based13_electricalModel_i;
  out->mF.mX[1857UL] =
    -(-Accumalator_Module_four_Battery_Table_Based13_electricalModel_i * (real_T)
      (t8449->mM.mX[396UL] != 0) / 18000.0);
  out->mF.mX[1858UL] = -t8449->mX.mX[2273UL];
  out->mF.mX[1859UL] = -(-t8449->mX.mX[2273UL] * (real_T)(t8449->mM.mX[397UL] !=
    0) / 18000.0);
  out->mF.mX[1860UL] =
    -Accumalator_Module_four_Battery_Table_Based15_electricalModel_i;
  out->mF.mX[1861UL] =
    -(-Accumalator_Module_four_Battery_Table_Based15_electricalModel_i * (real_T)
      (t8449->mM.mX[398UL] != 0) / 18000.0);
  out->mF.mX[1862UL] =
    -Accumalator_Module_four_Battery_Table_Based16_electricalModel_i;
  out->mF.mX[1863UL] =
    -(-Accumalator_Module_four_Battery_Table_Based16_electricalModel_i * (real_T)
      (t8449->mM.mX[399UL] != 0) / 18000.0);
  out->mF.mX[1864UL] =
    -Accumalator_Module_four_Battery_Table_Based17_electricalModel_i;
  out->mF.mX[1865UL] =
    -(-Accumalator_Module_four_Battery_Table_Based17_electricalModel_i * (real_T)
      (t8449->mM.mX[400UL] != 0) / 18000.0);
  out->mF.mX[1866UL] = -t8449->mX.mX[2261UL];
  out->mF.mX[1867UL] = -(-t8449->mX.mX[2261UL] * (real_T)(t8449->mM.mX[401UL] !=
    0) / 18000.0);
  out->mF.mX[1868UL] = -t8449->mX.mX[2328UL];
  out->mF.mX[1869UL] = -(-t8449->mX.mX[2328UL] * (real_T)(t8449->mM.mX[403UL] !=
    0) / 18000.0);
  out->mF.mX[1870UL] =
    -Accumalator_Module_four_Battery_Table_Based2_electricalModel_i;
  out->mF.mX[1871UL] =
    -(-Accumalator_Module_four_Battery_Table_Based2_electricalModel_i * (real_T)
      (t8449->mM.mX[404UL] != 0) / 18000.0);
  out->mF.mX[1872UL] =
    -Accumalator_Module_four_Battery_Table_Based20_electricalModel_i;
  out->mF.mX[1873UL] =
    -(-Accumalator_Module_four_Battery_Table_Based20_electricalModel_i * (real_T)
      (t8449->mM.mX[405UL] != 0) / 18000.0);
  out->mF.mX[1874UL] =
    -Accumalator_Module_four_Battery_Table_Based21_electricalModel_i;
  out->mF.mX[1875UL] =
    -(-Accumalator_Module_four_Battery_Table_Based21_electricalModel_i * (real_T)
      (t8449->mM.mX[406UL] != 0) / 18000.0);
  out->mF.mX[1876UL] =
    -Accumalator_Module_four_Battery_Table_Based22_electricalModel_i;
  out->mF.mX[1877UL] =
    -(-Accumalator_Module_four_Battery_Table_Based22_electricalModel_i * (real_T)
      (t8449->mM.mX[407UL] != 0) / 18000.0);
  out->mF.mX[1878UL] =
    -Accumalator_Module_four_Battery_Table_Based23_electricalModel_i;
  out->mF.mX[1879UL] =
    -(-Accumalator_Module_four_Battery_Table_Based23_electricalModel_i * (real_T)
      (t8449->mM.mX[408UL] != 0) / 18000.0);
  out->mF.mX[1880UL] = -t8449->mX.mX[2411UL];
  out->mF.mX[1881UL] = -(-t8449->mX.mX[2411UL] * (real_T)(t8449->mM.mX[409UL] !=
    0) / 18000.0);
  out->mF.mX[1882UL] = -t8449->mX.mX[2377UL];
  out->mF.mX[1883UL] = -(-t8449->mX.mX[2377UL] * (real_T)(t8449->mM.mX[410UL] !=
    0) / 18000.0);
  out->mF.mX[1884UL] =
    -Accumalator_Module_four_Battery_Table_Based26_electricalModel_i;
  out->mF.mX[1885UL] =
    -(-Accumalator_Module_four_Battery_Table_Based26_electricalModel_i * (real_T)
      (t8449->mM.mX[411UL] != 0) / 18000.0);
  out->mF.mX[1886UL] = -t8449->mX.mX[2389UL];
  out->mF.mX[1887UL] = -(-t8449->mX.mX[2389UL] * (real_T)(t8449->mM.mX[412UL] !=
    0) / 18000.0);
  out->mF.mX[1888UL] = -t8449->mX.mX[2401UL];
  out->mF.mX[1889UL] = -(-t8449->mX.mX[2401UL] * (real_T)(t8449->mM.mX[414UL] !=
    0) / 18000.0);
  out->mF.mX[1890UL] = -t8449->mX.mX[2439UL];
  out->mF.mX[1891UL] = -(-t8449->mX.mX[2439UL] * (real_T)(t8449->mM.mX[415UL] !=
    0) / 18000.0);
  out->mF.mX[1892UL] = -t8449->mX.mX[2367UL];
  out->mF.mX[1893UL] = -(-t8449->mX.mX[2367UL] * (real_T)(t8449->mM.mX[416UL] !=
    0) / 18000.0);
  out->mF.mX[1894UL] =
    -Accumalator_Module_four_Battery_Table_Based30_electricalModel_i;
  out->mF.mX[1895UL] =
    -(-Accumalator_Module_four_Battery_Table_Based30_electricalModel_i * (real_T)
      (t8449->mM.mX[417UL] != 0) / 18000.0);
  out->mF.mX[1896UL] =
    -Accumalator_Module_four_Battery_Table_Based31_electricalModel_i;
  out->mF.mX[1897UL] =
    -(-Accumalator_Module_four_Battery_Table_Based31_electricalModel_i * (real_T)
      (t8449->mM.mX[418UL] != 0) / 18000.0);
  out->mF.mX[1898UL] = -t8449->mX.mX[2249UL];
  out->mF.mX[1899UL] = -(-t8449->mX.mX[2249UL] * (real_T)(t8449->mM.mX[419UL] !=
    0) / 18000.0);
  out->mF.mX[1900UL] =
    -Accumalator_Module_four_Battery_Table_Based33_electricalModel_i;
  out->mF.mX[1901UL] =
    -(-Accumalator_Module_four_Battery_Table_Based33_electricalModel_i * (real_T)
      (t8449->mM.mX[420UL] != 0) / 18000.0);
  out->mF.mX[1902UL] =
    -Accumalator_Module_four_Battery_Table_Based34_electricalModel_i;
  out->mF.mX[1903UL] =
    -(-Accumalator_Module_four_Battery_Table_Based34_electricalModel_i * (real_T)
      (t8449->mM.mX[421UL] != 0) / 18000.0);
  out->mF.mX[1904UL] = -t8449->mX.mX[2529UL];
  out->mF.mX[1905UL] = -(-t8449->mX.mX[2529UL] * (real_T)(t8449->mM.mX[422UL] !=
    0) / 18000.0);
  out->mF.mX[1906UL] = -t8449->mX.mX[2486UL];
  out->mF.mX[1907UL] = -(-t8449->mX.mX[2486UL] * (real_T)(t8449->mM.mX[423UL] !=
    0) / 18000.0);
  out->mF.mX[1908UL] =
    -Accumalator_Module_four_Battery_Table_Based37_electricalModel_i;
  out->mF.mX[1909UL] =
    -(-Accumalator_Module_four_Battery_Table_Based37_electricalModel_i * (real_T)
      (t8449->mM.mX[425UL] != 0) / 18000.0);
  out->mF.mX[1910UL] = -t8449->mX.mX[2498UL];
  out->mF.mX[1911UL] = -(-t8449->mX.mX[2498UL] * (real_T)(t8449->mM.mX[426UL] !=
    0) / 18000.0);
  out->mF.mX[1912UL] = -t8449->mX.mX[2519UL];
  out->mF.mX[1913UL] = -(-t8449->mX.mX[2519UL] * (real_T)(t8449->mM.mX[427UL] !=
    0) / 18000.0);
  out->mF.mX[1914UL] =
    -Accumalator_Module_four_Battery_Table_Based4_electricalModel_i;
  out->mF.mX[1915UL] =
    -(-Accumalator_Module_four_Battery_Table_Based4_electricalModel_i * (real_T)
      (t8449->mM.mX[428UL] != 0) / 18000.0);
  out->mF.mX[1916UL] = -t8449->mX.mX[2557UL];
  out->mF.mX[1917UL] = -(-t8449->mX.mX[2557UL] * (real_T)(t8449->mM.mX[429UL] !=
    0) / 18000.0);
  out->mF.mX[1918UL] =
    -Accumalator_Module_four_Battery_Table_Based41_electricalModel_i;
  out->mF.mX[1919UL] =
    -(-Accumalator_Module_four_Battery_Table_Based41_electricalModel_i * (real_T)
      (t8449->mM.mX[430UL] != 0) / 18000.0);
  out->mF.mX[1920UL] =
    -Accumalator_Module_four_Battery_Table_Based42_electricalModel_i;
  out->mF.mX[1921UL] =
    -(-Accumalator_Module_four_Battery_Table_Based42_electricalModel_i * (real_T)
      (t8449->mM.mX[431UL] != 0) / 18000.0);
  out->mF.mX[1922UL] =
    -Accumalator_Module_four_Battery_Table_Based43_electricalModel_i;
  out->mF.mX[1923UL] =
    -(-Accumalator_Module_four_Battery_Table_Based43_electricalModel_i * (real_T)
      (t8449->mM.mX[432UL] != 0) / 18000.0);
  out->mF.mX[1924UL] =
    -Accumalator_Module_four_Battery_Table_Based44_electricalModel_i;
  out->mF.mX[1925UL] =
    -(-Accumalator_Module_four_Battery_Table_Based44_electricalModel_i * (real_T)
      (t8449->mM.mX[433UL] != 0) / 18000.0);
  out->mF.mX[1926UL] = -t8449->mX.mX[2639UL];
  out->mF.mX[1927UL] = -(-t8449->mX.mX[2639UL] * (real_T)(t8449->mM.mX[434UL] !=
    0) / 18000.0);
  out->mF.mX[1928UL] = -t8449->mX.mX[2605UL];
  out->mF.mX[1929UL] = -(-t8449->mX.mX[2605UL] * (real_T)(t8449->mM.mX[436UL] !=
    0) / 18000.0);
  out->mF.mX[1930UL] =
    -Accumalator_Module_four_Battery_Table_Based47_electricalModel_i;
  out->mF.mX[1931UL] =
    -(-Accumalator_Module_four_Battery_Table_Based47_electricalModel_i * (real_T)
      (t8449->mM.mX[437UL] != 0) / 18000.0);
  out->mF.mX[1932UL] = -t8449->mX.mX[2617UL];
  out->mF.mX[1933UL] = -(-t8449->mX.mX[2617UL] * (real_T)(t8449->mM.mX[438UL] !=
    0) / 18000.0);
  out->mF.mX[1934UL] = -t8449->mX.mX[2629UL];
  out->mF.mX[1935UL] = -(-t8449->mX.mX[2629UL] * (real_T)(t8449->mM.mX[439UL] !=
    0) / 18000.0);
  out->mF.mX[1936UL] = -t8449->mX.mX[2285UL];
  out->mF.mX[1937UL] = -(-t8449->mX.mX[2285UL] * (real_T)(t8449->mM.mX[440UL] !=
    0) / 18000.0);
  out->mF.mX[1938UL] = -t8449->mX.mX[2667UL];
  out->mF.mX[1939UL] = -(-t8449->mX.mX[2667UL] * (real_T)(t8449->mM.mX[441UL] !=
    0) / 18000.0);
  out->mF.mX[1940UL] =
    -Accumalator_Module_four_Battery_Table_Based51_electricalModel_i;
  out->mF.mX[1941UL] =
    -(-Accumalator_Module_four_Battery_Table_Based51_electricalModel_i * (real_T)
      (t8449->mM.mX[442UL] != 0) / 18000.0);
  out->mF.mX[1942UL] =
    -Accumalator_Module_four_Battery_Table_Based52_electricalModel_i;
  out->mF.mX[1943UL] =
    -(-Accumalator_Module_four_Battery_Table_Based52_electricalModel_i * (real_T)
      (t8449->mM.mX[443UL] != 0) / 18000.0);
  out->mF.mX[1944UL] =
    -Accumalator_Module_four_Battery_Table_Based53_electricalModel_i;
  out->mF.mX[1945UL] =
    -(-Accumalator_Module_four_Battery_Table_Based53_electricalModel_i * (real_T)
      (t8449->mM.mX[444UL] != 0) / 18000.0);
  out->mF.mX[1946UL] = -t8449->mX.mX[2714UL];
  out->mF.mX[1947UL] = -(-t8449->mX.mX[2714UL] * (real_T)(t8449->mM.mX[445UL] !=
    0) / 18000.0);
  out->mF.mX[1948UL] = -t8449->mX.mX[2724UL];
  out->mF.mX[1949UL] = -(-t8449->mX.mX[2724UL] * (real_T)(t8449->mM.mX[448UL] !=
    0) / 18000.0);
  out->mF.mX[1950UL] = -t8449->mX.mX[2735UL];
  out->mF.mX[1951UL] = -(-t8449->mX.mX[2735UL] * (real_T)(t8449->mM.mX[449UL] !=
    0) / 18000.0);
  out->mF.mX[1952UL] = -t8449->mX.mX[2297UL];
  out->mF.mX[1953UL] = -(-t8449->mX.mX[2297UL] * (real_T)(t8449->mM.mX[450UL] !=
    0) / 18000.0);
  out->mF.mX[1954UL] = -t8449->mX.mX[2586UL];
  out->mF.mX[1955UL] = -(-t8449->mX.mX[2586UL] * (real_T)(t8449->mM.mX[451UL] !=
    0) / 18000.0);
  out->mF.mX[1956UL] = -t8449->mX.mX[2317UL];
  out->mF.mX[1957UL] = -(-t8449->mX.mX[2317UL] * (real_T)(t8449->mM.mX[452UL] !=
    0) / 18000.0);
  out->mF.mX[1958UL] = -t8449->mX.mX[2339UL];
  out->mF.mX[1959UL] = -(-t8449->mX.mX[2339UL] * (real_T)(t8449->mM.mX[453UL] !=
    0) / 18000.0);
  out->mF.mX[1960UL] = (t6730 - (-(t8449->mX.mX[2807UL] * (t8449->mX.mX[2818UL] *
    0.00013) * 10.0))) / 0.57735026918962584;
  out->mF.mX[1961UL] = (Three_phase_inverter_Capacitor_i - t8449->mX.mX[2807UL] *
                        (t8449->mX.mX[2817UL] * 0.000125 + 0.04) * 10.0) /
    0.66666666666666663;
  (void)sys;
  (void)out;
  return 0;
}
