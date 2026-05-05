#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Referenced_battery_pack_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "Referenced_battery_pack.h"
#include "Referenced_battery_pack_capi.h"
#include "Referenced_battery_pack_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING ( "Referenced_battery_pack/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "Discrete_3618734018" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 , TARGET_STRING ( "Referenced_battery_pack/Solver\nConfiguration/EVAL_KEY/PARTITIONING_STATE_0" ) , TARGET_STRING ( "Discrete_119033433" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1 , TARGET_STRING ( "Referenced_battery_pack/Solver\nConfiguration/EVAL_KEY/PARTITIONING_STATE_0" ) , TARGET_STRING ( "FirstOutput_119033433" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 } ;
#ifndef HOST_CAPI_BUILD
static void Referenced_battery_pack_InitializeDataAddr ( void * dataAddr [ ]
, oruurd4lj0 * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
bj2kfl3m3t [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> hsakgqju1f [
0 ] ) ; dataAddr [ 2 ] = ( void * ) ( & localDW -> fz1mndibmx ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Referenced_battery_pack_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Referenced_battery_pack_InitializeLoggingFunctions ( RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL ) ; loggingPtrs [ 2 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_SCALAR , 4 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 2 , 1
, 7003 , 1 , 1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.01 ,
0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 4 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 4 , rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL ) } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 3 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 602375183U , 2458146209U , 995776484U , 1042616688U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * Referenced_battery_pack_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Referenced_battery_pack_InitializeSystemRan ( jean1zw3o1 * const
e4buf2d545 , sysRanDType * systemRan [ ] , oruurd4lj0 * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( e4buf2d545 ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ; systemRan [ 3 ] = ( NULL ) ; systemTid [ 1 ] = e4buf2d545 -> Timing . mdlref_GlobalTID [ 1 ] ; systemTid [ 2 ] = e4buf2d545 -> Timing . mdlref_GlobalTID [ 1 ] ; systemTid [ 3 ] = e4buf2d545 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ; rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Referenced_battery_pack_InitializeDataMapInfo ( jean1zw3o1 * const
e4buf2d545 , oruurd4lj0 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( e4buf2d545 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( e4buf2d545 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( e4buf2d545 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; Referenced_battery_pack_InitializeDataAddr ( e4buf2d545
-> DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap ( e4buf2d545 -> DataMapInfo . mmi , e4buf2d545 -> DataMapInfo . dataAddress ) ; Referenced_battery_pack_InitializeVarDimsAddr ( e4buf2d545 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( e4buf2d545 -> DataMapInfo . mmi , e4buf2d545 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( e4buf2d545 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( e4buf2d545 -> DataMapInfo . mmi , ( NULL ) ) ; Referenced_battery_pack_InitializeLoggingFunctions ( e4buf2d545 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( e4buf2d545 -> DataMapInfo . mmi , e4buf2d545 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo ( e4buf2d545 -> DataMapInfo . mmi , & e4buf2d545 -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( e4buf2d545 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( e4buf2d545 -> DataMapInfo . mmi , 0 ) ; Referenced_battery_pack_InitializeSystemRan ( e4buf2d545 , e4buf2d545 -> DataMapInfo . systemRan , localDW , e4buf2d545 -> DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( e4buf2d545 -> DataMapInfo . mmi , e4buf2d545 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( e4buf2d545 -> DataMapInfo . mmi , e4buf2d545 -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( e4buf2d545 -> DataMapInfo . mmi , & e4buf2d545 -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Referenced_battery_pack_host_InitializeDataMapInfo ( Referenced_battery_pack_host_DataMapInfo_T * dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
