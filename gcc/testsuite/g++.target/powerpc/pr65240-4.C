/* { dg-skip-if "" { *-*-darwin* } } */
/* { dg-options "-mdejagnu-cpu=power7 -O3 -ffast-math -Wno-return-type" } */
/* { dg-require-effective-target powerpc_vsx } */

/* target/65240, compiler got a 'insn does not satisfy its constraints' error.  */

#include "pr65240.h"
