#ifndef Referenced_battery_pack_h_
#define Referenced_battery_pack_h_
#ifndef Referenced_battery_pack_COMMON_INCLUDES_
#define Referenced_battery_pack_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "math.h"
#include "Referenced_battery_pack_785197ff_0_simulator.h"
#include "nesl_rtw_partitioning.h"
#include "nesl_rtw_rtp.h"
#endif
#include "Referenced_battery_pack_types.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
typedef struct { real_T dpy3y4g1fv ; } g5etvv2tdf ; typedef struct { real_T
j4wwe4mokr ; uint8_T ns5leiowvz ; } gvid0rjon4 ; typedef struct { real_T
omtqfw2dkz [ 4 ] ; real_T chxhdpcs11 ; real_T dxtpfhelga [ 2 ] ; g5etvv2tdf
hnxo2peo4f [ 1 ] ; } od0eeefmsi ; typedef struct { real_T bj2kfl3m3t [ 2 ] ;
real_T hsakgqju1f [ 7003 ] ; real_T fz1mndibmx ; real_T khyqgdft3n ; real_T
nfvf01sfd3 ; void * f0g015sg4m ; void * ibu4hql23w ; void * ilpxsm4tru ; void
* j3m1xm3pfa ; void * jgkxhulput ; boolean_T pe0h1wdvl5 ; gvid0rjon4
hnxo2peo4f [ 1 ] ; } oruurd4lj0 ; struct cvut0gvhm5_ { real_T P_0 ; } ;
struct dz0xp1haazo_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ;
real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T
P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ;
real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T
P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ;
real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T
P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ;
real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T
P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ;
real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T
P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ;
real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T
P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ;
real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T
P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ;
real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T
P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 ;
real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101 ; real_T P_102 ;
real_T P_103 ; real_T P_104 ; real_T P_105 ; real_T P_106 ; real_T P_107 ;
real_T P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 ;
real_T P_113 ; real_T P_114 ; real_T P_115 ; real_T P_116 ; real_T P_117 ;
real_T P_118 ; real_T P_119 ; real_T P_120 ; real_T P_121 ; real_T P_122 ;
real_T P_123 ; real_T P_124 ; real_T P_125 ; real_T P_126 ; real_T P_127 ;
real_T P_128 ; real_T P_129 ; real_T P_130 ; real_T P_131 ; real_T P_132 ;
real_T P_133 ; real_T P_134 ; real_T P_135 ; real_T P_136 ; real_T P_137 ;
real_T P_138 ; real_T P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 ;
real_T P_143 ; real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ;
real_T P_148 ; real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ;
real_T P_153 ; real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ;
real_T P_158 ; real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ;
real_T P_163 ; real_T P_164 ; real_T P_165 ; real_T P_166 ; real_T P_167 ;
real_T P_168 ; real_T P_169 ; real_T P_170 ; real_T P_171 ; real_T P_172 ;
real_T P_173 ; real_T P_174 ; real_T P_175 ; real_T P_176 ; real_T P_177 ;
real_T P_178 ; real_T P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ;
real_T P_183 ; real_T P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ;
real_T P_188 ; real_T P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ;
real_T P_193 ; real_T P_194 ; real_T P_195 ; real_T P_196 ; real_T P_197 ;
real_T P_198 ; real_T P_199 ; real_T P_200 ; real_T P_201 ; real_T P_202 ;
real_T P_203 ; real_T P_204 ; real_T P_205 ; real_T P_206 ; real_T P_207 ;
real_T P_208 ; real_T P_209 ; real_T P_210 ; real_T P_211 ; real_T P_212 ;
real_T P_213 ; real_T P_214 ; real_T P_215 ; real_T P_216 ; real_T P_217 ;
real_T P_218 ; real_T P_219 ; real_T P_220 ; real_T P_221 ; real_T P_222 ;
real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T P_226 ; real_T P_227 ;
real_T P_228 ; real_T P_229 ; real_T P_230 ; real_T P_231 ; real_T P_232 ;
real_T P_233 ; real_T P_234 ; real_T P_235 ; real_T P_236 ; real_T P_237 ;
real_T P_238 ; real_T P_239 ; real_T P_240 ; real_T P_241 ; real_T P_242 ;
real_T P_243 ; real_T P_244 ; real_T P_245 ; real_T P_246 ; real_T P_247 ;
real_T P_248 ; real_T P_249 ; real_T P_250 ; real_T P_251 ; real_T P_252 ;
real_T P_253 ; real_T P_254 ; real_T P_255 ; real_T P_256 ; real_T P_257 ;
real_T P_258 ; real_T P_259 ; real_T P_260 ; real_T P_261 ; real_T P_262 ;
real_T P_263 ; real_T P_264 ; real_T P_265 ; real_T P_266 ; real_T P_267 ;
real_T P_268 ; real_T P_269 ; real_T P_270 ; real_T P_271 ; real_T P_272 ;
real_T P_273 ; real_T P_274 ; real_T P_275 ; real_T P_276 ; real_T P_277 ;
real_T P_278 ; real_T P_279 ; cvut0gvhm5 hnxo2peo4f ; } ; struct b3ycw2zppz {
struct SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge * timingBridge ;
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 3 ] ; int32_T * vardimsAddress [ 3
] ; RTWLoggingFcnPtr loggingPtrs [ 3 ] ; sysRanDType * systemRan [ 4 ] ;
int_T systemTid [ 4 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 4 ]
; } Timing ; } ; typedef struct { od0eeefmsi rtb ; oruurd4lj0 rtdw ;
jean1zw3o1 rtm ; } lax0vklohkm ; extern void asggnlvkgn ( SimStruct *
_mdlRefSfcnS , ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray ,
int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , int_T mdlref_TID3
, jean1zw3o1 * const e4buf2d545 , od0eeefmsi * localB , oruurd4lj0 * localDW
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_Referenced_battery_pack_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_Referenced_battery_pack_GetDWork ( const lax0vklohkm * mdlrefDW ) ; extern
void mr_Referenced_battery_pack_SetDWork ( lax0vklohkm * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_Referenced_battery_pack_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_Referenced_battery_pack_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
Referenced_battery_pack_GetCAPIStaticMap ( void ) ; extern void gufsl3zicl ( jean1zw3o1 * const e4buf2d545 , oruurd4lj0 * localDW ) ; extern void cg355dq0z1 ( jean1zw3o1 * const e4buf2d545 , oruurd4lj0 * localDW ) ; extern void cfw4m2n3fw ( od0eeefmsi * localB , oruurd4lj0 * localDW ) ; extern void guuukyvztk ( jean1zw3o1 * const e4buf2d545 , od0eeefmsi * localB , oruurd4lj0 * localDW ) ; extern void Referenced_battery_pack ( jean1zw3o1 * const e4buf2d545 , const real_T * hs4l245vdo , real_T * am2vbk50bo , real_T * j2k212mznn , od0eeefmsi * localB , oruurd4lj0 * localDW ) ; extern void bodshmi05b ( oruurd4lj0 * localDW , jean1zw3o1 * const e4buf2d545 ) ;
#endif
