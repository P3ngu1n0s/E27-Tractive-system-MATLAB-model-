/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Tractive_System_model/Solver Configuration1'.
 */

#include "ne_ds.h"
#include "Tractive_System_model_2f85d999_0_initer_idae_ds_sys_struct.h"
#include "Tractive_System_model_2f85d999_0_initer_idae_ds_dxy.h"
#include "Tractive_System_model_2f85d999_0_initer_idae_ds.h"
#include "Tractive_System_model_2f85d999_0_initer_idae_ds_externals.h"
#include "Tractive_System_model_2f85d999_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Tractive_System_model_2f85d999_0_initer_idae_ds_dxy(const
  NeDynamicSystem *LC, const NeDynamicSystemInput *t81, NeDsMethodOutput *out)
{
  ETTS8eaf4aba t2;
  ETTS8eaf4aba t6;
  real_T t17[12];
  real_T t35[5];
  real_T t36[5];
  real_T t37[4];
  real_T t38[4];
  real_T t39[4];
  real_T t40[4];
  real_T t41[4];
  real_T t42[4];
  real_T t43[4];
  real_T t45[4];
  real_T t12[1];
  real_T t8[1];
  real_T Subsystem1_PS_Lookup_Table_2D_I1;
  real_T intermediate_der3261;
  real_T intermediate_der3262;
  real_T t80;
  size_t t18[14];
  size_t t11[1];
  size_t t13[1];
  size_t t7[1];
  size_t t9[1];
  size_t t55;
  Subsystem1_PS_Lookup_Table_2D_I1 = (((((((t81->mX.mX[2UL] * -0.01 + t81->
    mX.mX[3UL] * -0.01) + t81->mX.mX[1031UL] * 0.01) + t81->mX.mX[1032UL] *
    -0.01) + t81->mX.mX[1033UL] * 0.01) + t81->mX.mX[1034UL] * -0.01) +
    t81->mX.mX[1035UL] * 0.01) + t81->mX.mX[1036UL] * -0.01) + t81->mX.mX[1030UL];
  t7[0] = 1UL;
  t8[0UL] = Subsystem1_PS_Lookup_Table_2D_I1;
  t9[0] = 15UL;
  tlu2_akima_nearest_prelookup(&t2.mField0[0UL], &t2.mField1[0UL], &t7[0UL], ((
    const _NeDynamicSystem*)(LC))->mField3, &t8[0UL], &t9[0UL], &t7[0UL]);
  t11[0] = 0UL;
  t12[0UL] = -t81->mX.mX[2816UL];
  t13[0] = 11UL;
  tlu2_akima_nearest_prelookup(&t6.mField0[0UL], &t6.mField1[0UL], &t11[0UL], ((
    const _NeDynamicSystem*)(LC))->mField4, &t12[0UL], &t13[0UL], &t7[0UL]);
  for (t55 = 0UL; t55 < 12UL; t55++) {
    t17[t55] = 0.0;
  }

  for (t55 = 0UL; t55 < 14UL; t55++) {
    t18[t55] = 0UL;
  }

  tlu2_2d_akima_nearest_value(&t8[0UL], &t2.mField0[0UL], &t2.mField1[0UL],
    &t6.mField0[0UL], &t6.mField1[0UL], ((const _NeDynamicSystem*)(LC))->mField2,
    &t9[0UL], &t13[0UL], &t17[0UL], &t18[0UL], &t7[0UL]);
  intermediate_der3261 = t8[0UL] * -0.01;
  intermediate_der3262 = t8[0UL];
  t80 = t8[0UL] * 0.01;
  t8[0UL] = Subsystem1_PS_Lookup_Table_2D_I1;
  tlu2_akima_nearest_prelookup(&t6.mField0[0UL], &t6.mField1[0UL], &t11[0UL], ((
    const _NeDynamicSystem*)(LC))->mField3, &t8[0UL], &t9[0UL], &t7[0UL]);
  t8[0UL] = -t81->mX.mX[2816UL];
  tlu2_akima_nearest_prelookup(&t2.mField0[0UL], &t2.mField1[0UL], &t7[0UL], ((
    const _NeDynamicSystem*)(LC))->mField4, &t8[0UL], &t13[0UL], &t7[0UL]);
  for (t55 = 0UL; t55 < 12UL; t55++) {
    t17[t55] = 0.0;
  }

  for (t55 = 0UL; t55 < 14UL; t55++) {
    t18[t55] = 0UL;
  }

  tlu2_2d_akima_nearest_value(&t8[0UL], &t6.mField0[0UL], &t6.mField1[0UL],
    &t2.mField0[0UL], &t2.mField1[0UL], ((const _NeDynamicSystem*)(LC))->mField2,
    &t9[0UL], &t13[0UL], &t17[0UL], &t18[0UL], &t7[0UL]);
  t37[3UL] = 1.0;
  t37[2UL] = 1.0;
  t35[0UL] = -1.0;
  t35[1UL] = intermediate_der3261 * 1000.0;
  t35[2UL] = -0.01;
  t35[3UL] = -0.01;
  t35[4UL] = -0.01;
  t36[0UL] = -1.0;
  t36[1UL] = intermediate_der3261 * 1000.0;
  t36[2UL] = -0.01;
  t36[3UL] = -0.01;
  t36[4UL] = -0.01;
  t37[0UL] = intermediate_der3262 * 1000.0;
  t37[1UL] = 1.0;
  t38[0UL] = t80 * 1000.0;
  t38[1UL] = 0.01;
  t38[2UL] = 0.01;
  t38[3UL] = 0.01;
  t39[0UL] = intermediate_der3261 * 1000.0;
  t39[1UL] = -0.01;
  t39[2UL] = -0.01;
  t39[3UL] = -0.01;
  t40[0UL] = t80 * 1000.0;
  t40[1UL] = 0.01;
  t40[2UL] = 0.01;
  t40[3UL] = 0.01;
  t41[0UL] = intermediate_der3261 * 1000.0;
  t41[1UL] = -0.01;
  t41[2UL] = -0.01;
  t41[3UL] = -0.01;
  t42[0UL] = t80 * 1000.0;
  t42[1UL] = 0.01;
  t42[2UL] = 0.01;
  t42[3UL] = 0.01;
  t43[0UL] = intermediate_der3261 * 1000.0;
  t43[1UL] = -0.01;
  t43[2UL] = -0.01;
  t43[3UL] = -0.01;
  t45[0UL] = 0.0;
  t45[1UL] = 0.0;
  t45[2UL] = 1.0;
  t45[3UL] = -t8[0UL] * 1000.0;
  for (t55 = 0UL; t55 < 5UL; t55++) {
    out->mDXY.mX[t55] = t35[t55];
  }

  for (t55 = 0UL; t55 < 5UL; t55++) {
    out->mDXY.mX[t55 + 5UL] = t36[t55];
  }

  for (t55 = 0UL; t55 < 4UL; t55++) {
    out->mDXY.mX[t55 + 10UL] = t37[t55];
  }

  for (t55 = 0UL; t55 < 4UL; t55++) {
    out->mDXY.mX[t55 + 14UL] = t38[t55];
  }

  for (t55 = 0UL; t55 < 4UL; t55++) {
    out->mDXY.mX[t55 + 18UL] = t39[t55];
  }

  for (t55 = 0UL; t55 < 4UL; t55++) {
    out->mDXY.mX[t55 + 22UL] = t40[t55];
  }

  for (t55 = 0UL; t55 < 4UL; t55++) {
    out->mDXY.mX[t55 + 26UL] = t41[t55];
  }

  for (t55 = 0UL; t55 < 4UL; t55++) {
    out->mDXY.mX[t55 + 30UL] = t42[t55];
  }

  for (t55 = 0UL; t55 < 4UL; t55++) {
    out->mDXY.mX[t55 + 34UL] = t43[t55];
  }

  out->mDXY.mX[38UL] = 1.0;
  out->mDXY.mX[39UL] = 9.5492965855137211;
  out->mDXY.mX[40UL] = 1.0;
  out->mDXY.mX[41UL] = 1.0;
  out->mDXY.mX[42UL] = -1.0;
  out->mDXY.mX[43UL] = -1.0;
  out->mDXY.mX[44UL] = 1.0;
  out->mDXY.mX[45UL] = 0.0;
  out->mDXY.mX[46UL] = 0.0;
  out->mDXY.mX[47UL] = 0.0;
  out->mDXY.mX[48UL] = 1.0;
  out->mDXY.mX[49UL] = 0.0;
  for (t55 = 0UL; t55 < 4UL; t55++) {
    out->mDXY.mX[t55 + 50UL] = t45[t55];
  }

  (void)LC;
  (void)out;
  return 0;
}
