/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_zvl4096b -mabi=lp64d -O3 -mrvv-max-lmul=m8" } */

#include "def.h"

DEF_REPEAT (v4hf, _Float16, 4, var0, var1, var0, var1)
DEF_REPEAT (v8hf, _Float16, 8, var0, var1, var0, var1, var0, var1, var0, var1)
DEF_REPEAT (v16hf, _Float16, 16, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1)
DEF_REPEAT (v32hf, _Float16, 32, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1)
DEF_REPEAT (v64hf, _Float16, 64, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1)
DEF_REPEAT (v128hf, _Float16, 128, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1)
DEF_REPEAT (
  v256hf, _Float16, 256, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1)
DEF_REPEAT (
  v512hf, _Float16, 512, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1)
DEF_REPEAT (
  v1024hf, _Float16, 1024, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1)
DEF_REPEAT (
  v2048hf, _Float16, 2048, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1)

/* { dg-final { scan-assembler-times {vmv\.v\.x} 10 } } */
/* { dg-final { scan-assembler-not {vmv1r\.v\s+v0,\s*v[0-9]+} } } */
