/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Tractive_System_model/Solver Configuration1'.
 */

#include "ne_ds.h"
#include "Tractive_System_model_2f85d999_0_initer_idae_ds_sys_struct.h"
#include "Tractive_System_model_2f85d999_0_initer_idae_ds_y.h"
#include "Tractive_System_model_2f85d999_0_initer_idae_ds.h"
#include "Tractive_System_model_2f85d999_0_initer_idae_ds_externals.h"
#include "Tractive_System_model_2f85d999_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Tractive_System_model_2f85d999_0_initer_idae_ds_y(const NeDynamicSystem *
  LC, const NeDynamicSystemInput *t32, NeDsMethodOutput *out)
{
  ETTS8eaf4aba t0;
  ETTS8eaf4aba t1;
  real_T t12[12];
  real_T t7[1];
  real_T Accumalator_Module_One1_Battery_Table_Based51_electricalModel_p_v;
  size_t t13[14];
  size_t t2[1];
  size_t t4[1];
  size_t t5[1];
  size_t t8[1];
  size_t t20;
  Accumalator_Module_One1_Battery_Table_Based51_electricalModel_p_v =
    (((((((t32->mX.mX[2UL] * -0.01 + t32->mX.mX[3UL] * -0.01) + t32->mX.mX
          [1031UL] * 0.01) + t32->mX.mX[1032UL] * -0.01) + t32->mX.mX[1033UL] *
        0.01) + t32->mX.mX[1034UL] * -0.01) + t32->mX.mX[1035UL] * 0.01) +
     t32->mX.mX[1036UL] * -0.01) + t32->mX.mX[1030UL];
  out->mY.mX[0UL] = -t32->mX.mX[2UL] - t32->mX.mX[3UL];
  out->mY.mX[3UL] = t32->mX.mX[2809UL];
  out->mY.mX[4UL] = t32->mX.mX[2814UL];
  out->mY.mX[5UL] = t32->mX.mX[2815UL];
  out->mY.mX[6UL] = t32->mX.mX[2816UL];
  t2[0] = 0UL;
  t7[0UL] = Accumalator_Module_One1_Battery_Table_Based51_electricalModel_p_v;
  t4[0] = 15UL;
  t5[0] = 1UL;
  tlu2_akima_nearest_prelookup(&t1.mField0[0UL], &t1.mField1[0UL], &t2[0UL], ((
    const _NeDynamicSystem*)(LC))->mField3, &t7[0UL], &t4[0UL], &t5[0UL]);
  t7[0UL] = -t32->mX.mX[2816UL];
  t8[0] = 11UL;
  tlu2_akima_nearest_prelookup(&t0.mField0[0UL], &t0.mField1[0UL], &t2[0UL], ((
    const _NeDynamicSystem*)(LC))->mField4, &t7[0UL], &t8[0UL], &t5[0UL]);
  for (t20 = 0UL; t20 < 12UL; t20++) {
    t12[t20] = 0.0;
  }

  for (t20 = 0UL; t20 < 14UL; t20++) {
    t13[t20] = 0UL;
  }

  tlu2_2d_akima_nearest_value(&t7[0UL], &t1.mField0[0UL], &t1.mField1[0UL],
    &t0.mField0[0UL], &t0.mField1[0UL], ((const _NeDynamicSystem*)(LC))->mField2,
    &t4[0UL], &t8[0UL], &t12[0UL], &t13[0UL], &t5[0UL]);
  out->mY.mX[11UL] =
    Accumalator_Module_One1_Battery_Table_Based51_electricalModel_p_v -
    t32->mX.mX[2811UL];
  out->mY.mX[10UL] =
    Accumalator_Module_One1_Battery_Table_Based51_electricalModel_p_v -
    t32->mX.mX[2812UL];
  out->mY.mX[1UL] = t32->mX.mX[2808UL];
  out->mY.mX[2UL] = t32->mX.mX[2807UL];
  out->mY.mX[7UL] = t32->mX.mX[2807UL] * 9.5492965855137211;
  out->mY.mX[8UL] = t7[0UL] * 1000.0;
  out->mY.mX[9UL] =
    Accumalator_Module_One1_Battery_Table_Based51_electricalModel_p_v;
  (void)LC;
  (void)out;
  return 0;
}
