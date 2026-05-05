#include "ne_ds.h"
#include "Referenced_battery_pack_785197ff_0_initer_idae_ds_sys_struct.h"
#include "Referenced_battery_pack_785197ff_0_initer_idae_ds_qu_p.h"
#include "Referenced_battery_pack_785197ff_0_initer_idae_ds.h"
#include "Referenced_battery_pack_785197ff_0_initer_idae_ds_externals.h"
#include "Referenced_battery_pack_785197ff_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Referenced_battery_pack_785197ff_0_initer_idae_ds_qu_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_2 [ 141 ] = { 0 , 1 , 2 , 3 , 4 , 6 , 7 , 8
, 11 , 12 , 13 , 14 , 15 , 18 , 23 , 24 , 26 , 27 , 30 , 33 , 35 , 36 , 37 ,
38 , 41 , 46 , 47 , 48 , 56 , 57 , 58 , 59 , 60 , 62 , 63 , 64 , 67 , 68 , 69
, 70 , 71 , 74 , 79 , 80 , 82 , 83 , 86 , 89 , 91 , 92 , 93 , 94 , 97 , 102 ,
103 , 104 , 112 , 113 , 114 , 115 , 116 , 118 , 119 , 120 , 123 , 124 , 125 ,
126 , 127 , 130 , 135 , 136 , 138 , 139 , 142 , 145 , 147 , 148 , 149 , 150 ,
153 , 158 , 159 , 160 , 168 , 169 , 170 , 171 , 172 , 174 , 175 , 176 , 179 ,
180 , 181 , 182 , 183 , 186 , 191 , 192 , 194 , 195 , 198 , 201 , 203 , 204 ,
205 , 206 , 209 , 214 , 215 , 216 , 224 , 225 , 226 , 227 , 228 , 230 , 231 ,
232 , 235 , 236 , 237 , 238 , 239 , 242 , 247 , 248 , 250 , 251 , 254 , 257 ,
259 , 260 , 261 , 262 , 265 , 270 , 271 , 272 , 280 } ; int32_T i1 ; ( void )
t1 ; ( void ) LC ; out -> mQU_P . mNumCol = 1UL ; out -> mQU_P . mNumRow =
282UL ; out -> mQU_P . mJc [ 0 ] = 0 ; out -> mQU_P . mJc [ 1 ] = 141 ; for ( i1
= 0 ; i1 < 141 ; i1 ++ ) { out -> mQU_P . mIr [ i1 ] = _cg_const_2 [ i1 ] ; }
( void ) LC ; ( void ) out ; return 0 ; }
