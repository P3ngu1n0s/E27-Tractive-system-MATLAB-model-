#include "nesl_rtw_partitioning.h"
#include "Referenced_battery_pack_785197ff_0_slc_276_sys_struct.h"
#include "Referenced_battery_pack_785197ff_0_slc_276jnl.h"
#include "Referenced_battery_pack_785197ff_0_slc_276.h"
#include "Referenced_battery_pack_785197ff_0_slc_276_externals.h"
#include "Referenced_battery_pack_785197ff_0_slc_276_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Referenced_battery_pack_785197ff_0_slc_276jnl ( const
SwitchedLinearClump * sys , const NeDynamicSystemInput * t20 ,
SlcMethodOutput * out ) { static real_T _cg_const_3 [ 40 ] = { 0.011867 ,
0.008993 , 0.007674 , 0.006911 , 0.006648 , 0.006648 , 0.006528 , 0.006157 ,
0.005996 , 0.0073 , 0.0109 , 0.006456 , 0.005381 , 0.005078 , 0.005 ,
0.005044 , 0.005511 , 0.006407 , 0.006522 , 0.005367 , 0.0102 , 0.007978 ,
0.006793 , 0.0062 , 0.006033 , 0.005441 , 0.0051 , 0.005707 , 0.005037 ,
0.005067 , 0.0101 , 0.007759 , 0.006637 , 0.006022 , 0.005741 , 0.005667 ,
0.005311 , 0.004911 , 0.005859 , 0.004733 } ; static real_T _cg_const_1 [ 10
] = { 0.1 , 0.188889 , 0.277778 , 0.366667 , 0.455556 , 0.544444 , 0.633333 ,
0.722222 , 0.811111 , 0.9 } ; static real_T _cg_const_2 [ 4 ] = { 303.15 ,
305.65 , 308.15 , 311.15 } ; ETTSf3049b48 t0 ; ETTSf3049b48 t2 ; real_T
nonscalar3 [ 40 ] ; real_T nonscalar1 [ 10 ] ; real_T nonscalar2 [ 4 ] ;
real_T t12 [ 1 ] ; real_T t19 [ 1 ] ; real_T
Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge ; real_T
zc_int78 ; size_t t4 [ 1 ] ; size_t t5 [ 1 ] ; size_t t7 [ 1 ] ; t12 [ 0UL ]
= t20 -> mX . mX [ 2UL ] * 5.5555555555555558E-5 ; nonscalar1 [ 0 ] =
_cg_const_1 [ 0 ] ; nonscalar1 [ 1 ] = _cg_const_1 [ 1 ] ; nonscalar1 [ 2 ] =
_cg_const_1 [ 2 ] ; nonscalar1 [ 3 ] = _cg_const_1 [ 3 ] ; nonscalar1 [ 4 ] =
_cg_const_1 [ 4 ] ; nonscalar1 [ 5 ] = _cg_const_1 [ 5 ] ; nonscalar1 [ 6 ] =
_cg_const_1 [ 6 ] ; nonscalar1 [ 7 ] = _cg_const_1 [ 7 ] ; nonscalar1 [ 8 ] =
_cg_const_1 [ 8 ] ; nonscalar1 [ 9 ] = _cg_const_1 [ 9 ] ; nonscalar2 [ 0 ] =
_cg_const_2 [ 0 ] ; nonscalar2 [ 1 ] = _cg_const_2 [ 1 ] ; nonscalar2 [ 2 ] =
_cg_const_2 [ 2 ] ; nonscalar2 [ 3 ] = _cg_const_2 [ 3 ] ; nonscalar3 [ 0 ] =
_cg_const_3 [ 0 ] ; nonscalar3 [ 1 ] = _cg_const_3 [ 1 ] ; nonscalar3 [ 2 ] =
_cg_const_3 [ 2 ] ; nonscalar3 [ 3 ] = _cg_const_3 [ 3 ] ; nonscalar3 [ 4 ] =
_cg_const_3 [ 4 ] ; nonscalar3 [ 5 ] = _cg_const_3 [ 5 ] ; nonscalar3 [ 6 ] =
_cg_const_3 [ 6 ] ; nonscalar3 [ 7 ] = _cg_const_3 [ 7 ] ; nonscalar3 [ 8 ] =
_cg_const_3 [ 8 ] ; nonscalar3 [ 9 ] = _cg_const_3 [ 9 ] ; nonscalar3 [ 10 ]
= _cg_const_3 [ 10 ] ; nonscalar3 [ 11 ] = _cg_const_3 [ 11 ] ; nonscalar3 [
12 ] = _cg_const_3 [ 12 ] ; nonscalar3 [ 13 ] = _cg_const_3 [ 13 ] ;
nonscalar3 [ 14 ] = _cg_const_3 [ 14 ] ; nonscalar3 [ 15 ] = _cg_const_3 [ 15
] ; nonscalar3 [ 16 ] = _cg_const_3 [ 16 ] ; nonscalar3 [ 17 ] = _cg_const_3
[ 17 ] ; nonscalar3 [ 18 ] = _cg_const_3 [ 18 ] ; nonscalar3 [ 19 ] =
_cg_const_3 [ 19 ] ; nonscalar3 [ 20 ] = _cg_const_3 [ 20 ] ; nonscalar3 [ 21
] = _cg_const_3 [ 21 ] ; nonscalar3 [ 22 ] = _cg_const_3 [ 22 ] ; nonscalar3
[ 23 ] = _cg_const_3 [ 23 ] ; nonscalar3 [ 24 ] = _cg_const_3 [ 24 ] ;
nonscalar3 [ 25 ] = _cg_const_3 [ 25 ] ; nonscalar3 [ 26 ] = _cg_const_3 [ 26
] ; nonscalar3 [ 27 ] = _cg_const_3 [ 27 ] ; nonscalar3 [ 28 ] = _cg_const_3
[ 28 ] ; nonscalar3 [ 29 ] = _cg_const_3 [ 29 ] ; nonscalar3 [ 30 ] =
_cg_const_3 [ 30 ] ; nonscalar3 [ 31 ] = _cg_const_3 [ 31 ] ; nonscalar3 [ 32
] = _cg_const_3 [ 32 ] ; nonscalar3 [ 33 ] = _cg_const_3 [ 33 ] ; nonscalar3
[ 34 ] = _cg_const_3 [ 34 ] ; nonscalar3 [ 35 ] = _cg_const_3 [ 35 ] ;
nonscalar3 [ 36 ] = _cg_const_3 [ 36 ] ; nonscalar3 [ 37 ] = _cg_const_3 [ 37
] ; nonscalar3 [ 38 ] = _cg_const_3 [ 38 ] ; nonscalar3 [ 39 ] = _cg_const_3
[ 39 ] ; t4 [ 0 ] = 10UL ; t5 [ 0 ] = 1UL ; tlu2_linear_nearest_prelookup ( &
t2 . mField0 [ 0UL ] , & t2 . mField1 [ 0UL ] , & t2 . mField2 [ 0UL ] , &
nonscalar1 [ 0UL ] , & t12 [ 0UL ] , & t4 [ 0UL ] , & t5 [ 0UL ] ) ; t12 [ 0
] = 298.15 ; t7 [ 0 ] = 4UL ; tlu2_linear_nearest_prelookup ( & t0 . mField0
[ 0UL ] , & t0 . mField1 [ 0UL ] , & t0 . mField2 [ 0UL ] , & nonscalar2 [
0UL ] , & t12 [ 0UL ] , & t7 [ 0UL ] , & t5 [ 0UL ] ) ;
tlu2_2d_linear_nearest_value ( & t19 [ 0UL ] , & t2 . mField0 [ 0UL ] , & t2
. mField2 [ 0UL ] , & t0 . mField0 [ 0UL ] , & t0 . mField2 [ 0UL ] , &
nonscalar3 [ 0UL ] , & t4 [ 0UL ] , & t7 [ 0UL ] , & t5 [ 0UL ] ) ; t12 [ 0UL
] = t20 -> mX . mX [ 9UL ] * 5.5555555555555558E-5 ;
tlu2_linear_nearest_prelookup ( & t2 . mField0 [ 0UL ] , & t2 . mField1 [ 0UL
] , & t2 . mField2 [ 0UL ] , & nonscalar1 [ 0UL ] , & t12 [ 0UL ] , & t4 [
0UL ] , & t5 [ 0UL ] ) ; tlu2_2d_linear_nearest_value ( & t12 [ 0UL ] , & t2
. mField0 [ 0UL ] , & t2 . mField2 [ 0UL ] , & t0 . mField0 [ 0UL ] , & t0 .
mField2 [ 0UL ] , & nonscalar3 [ 0UL ] , & t4 [ 0UL ] , & t7 [ 0UL ] , & t5 [
0UL ] ) ; if ( t20 -> mM . mX [ 3UL ] != 0 ) { zc_int78 =
8.200000000000002E-8 ; } else { zc_int78 = t19 [ 0UL ] ; } if ( t20 -> mM .
mX [ 5UL ] != 0 ) {
Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge =
8.200000000000002E-8 ; } else {
Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge = t12 [ 0UL ] ;
} out -> mJNL . mX [ 0UL ] = -
Accumalator_Module_Five1_Battery_Table_Based33_stateOfCharge ; out -> mJNL .
mX [ 1UL ] = zc_int78 ; ( void ) sys ; ( void ) out ; return 0 ; }
