#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_010723a0 */
GEN_LIB GEN_NOFRAME uint F_010723a0(void)
{
  GEN_ENTER(0x10723a0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0ca8) = ((code *)REFP(0x97cbb0));
  *(gen_code32 *)&REFG(undefined, 0x14a0cb0) = ((code *)REFP(0x97cbd0));
  *(undefined4 *)&REFG(undefined, 0x14a0cac) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0cb4) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0cb8) = ((code *)REFP(0x989540));
  *(undefined4 *)&REFG(undefined, 0x14a0cbc) = 0;
  return 0x989540;
}

/* ref: FUN_010723e0 */
GEN_LIB GEN_NOFRAME uint F_010723e0(void)
{
  GEN_ENTER(0x10723e0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0cc0) = ((code *)REFP(0x97cbf0));
  *(gen_code32 *)&REFG(undefined, 0x14a0cc8) = ((code *)REFP(0x97cc10));
  *(undefined4 *)&REFG(undefined, 0x14a0cc4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0ccc) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0cd0) = ((code *)REFP(0x97cc10));
  *(undefined4 *)&REFG(undefined, 0x14a0cd4) = 0;
  return 0x97cc10;
}

/* ref: FUN_01072420 */
GEN_LIB GEN_NOFRAME uint F_01072420(void)
{
  GEN_ENTER(0x1072420u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0cd8) = ((code *)REFP(0x97ccd0));
  *(gen_code32 *)&REFG(undefined, 0x14a0ce0) = ((code *)REFP(0x97cd00));
  *(undefined4 *)&REFG(undefined, 0x14a0cdc) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0ce4) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0ce8) = ((code *)REFP(0x97cd00));
  *(undefined4 *)&REFG(undefined, 0x14a0cec) = 0;
  return 0x97cd00;
}

/* ref: FUN_01072460 */
GEN_LIB GEN_NOFRAME uint F_01072460(void)
{
  GEN_ENTER(0x1072460u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0cf0) = ((code *)REFP(0x9bdda0));
  *(gen_code32 *)&REFG(undefined, 0x14a0cf8) = ((code *)REFP(0x97cfe0));
  *(gen_code32 *)&REFG(undefined, 0x14a0d00) = ((code *)REFP(0x9ab960));
  *(gen_code32 *)&REFG(undefined, 0x14a0d08) = ((code *)REFP(0x9aba80));
  *(undefined4 *)&REFG(undefined, 0x14a0cf4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0cfc) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0d04) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0d0c) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0d10) = ((code *)REFP(0x97d010));
  *(undefined4 *)&REFG(undefined, 0x14a0d14) = 0;
  return 0x97d010;
}

/* ref: FUN_010724c0 */
GEN_LIB GEN_NOFRAME uint F_010724c0(void)
{
  GEN_ENTER(0x10724c0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0d18) = ((code *)REFP(0x97d170));
  *(undefined4 *)&REFG(undefined, 0x14a0d1c) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0d20) = ((code *)REFP(0x97d1a0));
  *(undefined4 *)&REFG(undefined, 0x14a0d24) = 0;
  return 0x97d1a0;
}

/* ref: FUN_010724f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010724f0(void)
{
  GEN_ENTER(0x10724f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a0a64) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a0a64), REFG(float, 0x132f4e0));
  return;
}

/* ref: FUN_01072510 */
GEN_LIB GEN_NOFRAME unsigned int F_01072510(void)
{
  GEN_ENTER(0x1072510u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a0a68) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a0a68), REFG(float, 0x132f510));
  return;
}

/* ref: FUN_01072530 */
GEN_LIB GEN_NOFRAME uint F_01072530(void)
{
  GEN_ENTER(0x1072530u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x14a0a70) = F_004296a0(0x14,0,0xcf);
  *((uint *)GEN_TOP(REFG(undefined4, 0x14a0a70))) = REFG(undefined4, 0x14a0a70);
  *((uint *)GEN_TOP((REFG(undefined4, 0x14a0a70) + 4))) = REFG(undefined4, 0x14a0a70);
  *((uint *)GEN_TOP((REFG(undefined4, 0x14a0a70) + 8))) = REFG(undefined4, 0x14a0a70);
  *((undefined1 *)GEN_TOP((REFG(undefined4, 0x14a0a70) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((REFG(undefined4, 0x14a0a70) + 0x11))) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107c370)));
  return uVar1;
}

/* ref: FUN_01072580 */
GEN_LIB GEN_NOFRAME uint F_01072580(void)
{
  GEN_ENTER(0x1072580u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x14a0a80) = F_004296a0(0x14,0,0xd0);
  *((uint *)GEN_TOP(REFG(undefined4, 0x14a0a80))) = REFG(undefined4, 0x14a0a80);
  *((uint *)GEN_TOP((REFG(undefined4, 0x14a0a80) + 4))) = REFG(undefined4, 0x14a0a80);
  *((uint *)GEN_TOP((REFG(undefined4, 0x14a0a80) + 8))) = REFG(undefined4, 0x14a0a80);
  *((undefined1 *)GEN_TOP((REFG(undefined4, 0x14a0a80) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((REFG(undefined4, 0x14a0a80) + 0x11))) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107c3b0)));
  return uVar1;
}

/* ref: FUN_010725d0 */
GEN_LIB GEN_NOFRAME uint F_010725d0(void)
{
  GEN_ENTER(0x10725d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
  uVar1 = F_00c47de6(((code *)REFP(0x107c330)));
  return uVar1;
}

/* ref: FUN_010725f0 */
GEN_LIB GEN_NOFRAME uint F_010725f0(void)
{
  GEN_ENTER(0x10725f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0aa4));
  uVar1 = F_00c47de6(((code *)REFP(0x107c340)));
  return uVar1;
}

/* ref: FUN_01072610 */
GEN_LIB GEN_NOFRAME unsigned int F_01072610(void)
{
  GEN_ENTER(0x1072610u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14a0abc) =
       (float)((float10)*(float *)&REFG(undefined, 0x132f56c) + (float10)*(double *)&REFG(undefined, 0x1088070));
  return;
}

/* ref: FUN_01072630 */
GEN_LIB GEN_NOFRAME unsigned int F_01072630(void)
{
  GEN_ENTER(0x1072630u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14a0ac0) =
       (float)((float10)*(float *)&REFG(undefined, 0x132f570) + (float10)*(double *)&REFG(undefined, 0x1088070));
  return;
}

/* ref: FUN_01072650 */
GEN_LIB GEN_NOFRAME uint F_01072650(void)
{
  GEN_ENTER(0x1072650u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c3f0)));
  return uVar1;
}

/* ref: FUN_01072660 */
GEN_LIB GEN_NOFRAME unsigned int F_01072660(void)
{
  GEN_ENTER(0x1072660u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2448) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a2448), REFG(float, 0x133329c));
  return;
}

/* ref: FUN_01072680 */
GEN_LIB GEN_NOFRAME unsigned int F_01072680(void)
{
  GEN_ENTER(0x1072680u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a244c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a244c), REFG(float, 0x13332cc));
  return;
}

/* ref: FUN_010726a0 */
GEN_LIB GEN_NOFRAME unsigned int F_010726a0(void)
{
  GEN_ENTER(0x10726a0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2480) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a2480), REFG(float, 0x1333468));
  return;
}

/* ref: FUN_010726c0 */
GEN_LIB GEN_NOFRAME unsigned int F_010726c0(void)
{
  GEN_ENTER(0x10726c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2484) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a2484), REFG(float, 0x1333498));
  return;
}

/* ref: FUN_010726e0 */
GEN_LIB GEN_NOFRAME uint F_010726e0(void)
{
  GEN_ENTER(0x10726e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c400)));
  return uVar1;
}

/* ref: FUN_010726f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010726f0(void)
{
  GEN_ENTER(0x10726f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2678) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a2678), REFG(float, 0x1333908));
  return;
}

/* ref: FUN_01072710 */
GEN_LIB GEN_NOFRAME unsigned int F_01072710(void)
{
  GEN_ENTER(0x1072710u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a267c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a267c), REFG(float, 0x1333938));
  return;
}

/* ref: FUN_01072730 */
GEN_LIB GEN_NOFRAME uint F_01072730(void)
{
  GEN_ENTER(0x1072730u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2680) GEN_EDX_ARG,&REFG(undefined, 0x10e23f8),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c420)));
  return uVar1;
}

/* ref: FUN_01072760 */
GEN_LIB GEN_NOFRAME uint F_01072760(void)
{
  GEN_ENTER(0x1072760u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a26d8) GEN_EDX_ARG,&REFG(undefined, 0x10e23fc),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c430)));
  return uVar1;
}

/* ref: FUN_01072790 */
GEN_LIB GEN_NOFRAME uint F_01072790(void)
{
  GEN_ENTER(0x1072790u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined4, 0x14a2730) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c440)));
  return uVar1;
}

/* ref: FUN_010727b0 */
GEN_LIB GEN_NOFRAME uint F_010727b0(void)
{
  GEN_ENTER(0x10727b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined4, 0x14a2788) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c450)));
  return uVar1;
}

/* ref: FUN_010727d0 */
GEN_LIB GEN_NOFRAME uint F_010727d0(void)
{
  GEN_ENTER(0x10727d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x14a27e0) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c460)));
  return uVar1;
}

/* ref: FUN_010727f0 */
GEN_LIB GEN_NOFRAME uint F_010727f0(void)
{
  GEN_ENTER(0x10727f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x14a2838) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c470)));
  return uVar1;
}

/* ref: FUN_01072810 */
GEN_LIB GEN_NOFRAME uint F_01072810(void)
{
  GEN_ENTER(0x1072810u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x14a2890) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c480)));
  return uVar1;
}

/* ref: FUN_01072830 */
GEN_LIB GEN_NOFRAME uint F_01072830(void)
{
  GEN_ENTER(0x1072830u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c490)));
  return uVar1;
}

/* ref: FUN_01072840 */
GEN_LIB GEN_NOFRAME uint F_01072840(void)
{
  GEN_ENTER(0x1072840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c4a0)));
  return uVar1;
}

/* ref: FUN_01072850 */
GEN_LIB GEN_NOFRAME uint F_01072850(void)
{
  GEN_ENTER(0x1072850u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c4b0)));
  return uVar1;
}

/* ref: FUN_01072860 */
GEN_LIB GEN_NOFRAME unsigned int F_01072860(void)
{
  GEN_ENTER(0x1072860u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2b14) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a2b14), REFG(float, 0x1333bf8));
  return;
}

/* ref: FUN_01072880 */
GEN_LIB GEN_NOFRAME unsigned int F_01072880(void)
{
  GEN_ENTER(0x1072880u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2b18) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a2b18), REFG(float, 0x1333c28));
  return;
}

/* ref: FUN_010728a0 */
GEN_LIB GEN_NOFRAME uint F_010728a0(void)
{
  GEN_ENTER(0x10728a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2e70) GEN_EDX_ARG,((char *)REFP(0x10e38c0)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c4d0)));
  return uVar1;
}

/* ref: FUN_010728d0 */
GEN_LIB GEN_NOFRAME uint F_010728d0(void)
{
  GEN_ENTER(0x10728d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2ec8) GEN_EDX_ARG,&REFG(undefined, 0x10e38c8),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c4e0)));
  return uVar1;
}

/* ref: FUN_01072900 */
GEN_LIB GEN_NOFRAME uint F_01072900(void)
{
  GEN_ENTER(0x1072900u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2f20) GEN_EDX_ARG,((char *)REFP(0x10e38d0)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c4f0)));
  return uVar1;
}

/* ref: FUN_01072930 */
GEN_LIB GEN_NOFRAME uint F_01072930(void)
{
  GEN_ENTER(0x1072930u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2f78) GEN_EDX_ARG,&REFG(undefined, 0x10e38d8),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c500)));
  return uVar1;
}

/* ref: FUN_01072960 */
GEN_LIB GEN_NOFRAME uint F_01072960(void)
{
  GEN_ENTER(0x1072960u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2fd0) GEN_EDX_ARG,&REFG(undefined, 0x10e38e0),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c510)));
  return uVar1;
}

/* ref: FUN_01072990 */
GEN_LIB GEN_NOFRAME uint F_01072990(void)
{
  GEN_ENTER(0x1072990u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a3028) GEN_EDX_ARG,((char *)REFP(0x10e38e8)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c520)));
  return uVar1;
}

/* ref: FUN_010729c0 */
GEN_LIB GEN_NOFRAME uint F_010729c0(void)
{
  GEN_ENTER(0x10729c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00a2f470(&REFG(undefined4, 0x1333cc8) GEN_EDX_ARG,((char *)REFP(0x10e3ce0)),9);
  uVar1 = F_00c47de6(((code *)REFP(0x107c590)));
  return uVar1;
}

/* ref: FUN_010729e0 */
GEN_LIB GEN_NOFRAME uint F_010729e0(void)
{
  GEN_ENTER(0x10729e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a3080) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3de8)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c530)));
  return uVar1;
}

/* ref: FUN_01072a10 */
GEN_LIB GEN_NOFRAME uint F_01072a10(void)
{
  GEN_ENTER(0x1072a10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a30d8) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3e54)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c540)));
  return uVar1;
}

/* ref: FUN_01072a40 */
GEN_LIB GEN_NOFRAME uint F_01072a40(void)
{
  GEN_ENTER(0x1072a40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a3130) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3e58)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c550)));
  return uVar1;
}

/* ref: FUN_01072a70 */
GEN_LIB GEN_NOFRAME uint F_01072a70(void)
{
  GEN_ENTER(0x1072a70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a3188) GEN_EDX_ARG,&REFG(undefined, 0x10e3e5c),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c560)));
  return uVar1;
}

/* ref: FUN_01072aa0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072aa0(void)
{
  GEN_ENTER(0x1072aa0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a4218) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a4218), REFG(float, 0x1333f14));
  return;
}

/* ref: FUN_01072ac0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072ac0(void)
{
  GEN_ENTER(0x1072ac0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a421c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a421c), REFG(float, 0x1333f44));
  return;
}

/* ref: FUN_01072ae0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072ae0(void)
{
  GEN_ENTER(0x1072ae0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14a4220) =
       (float)((float10)*(float *)&REFG(undefined, 0x1333fa0) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return;
}

/* ref: FUN_01072b00 */
GEN_LIB GEN_NOFRAME unsigned int F_01072b00(void)
{
  GEN_ENTER(0x1072b00u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a4228) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a4228), REFG(float, 0x1334184));
  return;
}

/* ref: FUN_01072b20 */
GEN_LIB GEN_NOFRAME unsigned int F_01072b20(void)
{
  GEN_ENTER(0x1072b20u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a422c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a422c), REFG(float, 0x13341b4));
  return;
}

/* ref: FUN_01072b40 */
GEN_LIB GEN_NOFRAME uint F_01072b40(void)
{
  GEN_ENTER(0x1072b40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00a4a200(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c5d0)));
  return uVar1;
}

/* ref: FUN_01072b60 */
GEN_LIB GEN_NOFRAME unsigned int F_01072b60(void)
{
  GEN_ENTER(0x1072b60u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a73bc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a73bc), REFG(float, 0x13344a0));
  return;
}

/* ref: FUN_01072b80 */
GEN_LIB GEN_NOFRAME unsigned int F_01072b80(void)
{
  GEN_ENTER(0x1072b80u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a73c0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a73c0), REFG(float, 0x13344d0));
  return;
}

/* ref: FUN_01072ba0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072ba0(void)
{
  GEN_ENTER(0x1072ba0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a73e0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a73e0), REFG(float, 0x133488c));
  return;
}

/* ref: FUN_01072bc0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072bc0(void)
{
  GEN_ENTER(0x1072bc0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a73e4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a73e4), REFG(float, 0x13348bc));
  return;
}

/* ref: FUN_01072be0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072be0(void)
{
  GEN_ENTER(0x1072be0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14a73e8) =
       (float)((float10)*(float *)&REFG(undefined, 0x1334918) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return;
}

/* ref: FUN_01072c00 */
GEN_LIB GEN_NOFRAME uint F_01072c00(void)
{
  GEN_ENTER(0x1072c00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00a5e240(&REFG(undefined, 0x1334944) GEN_EDX_ARG,0x32);
  F_00a5e430(&REFG(undefined, 0x1334954) GEN_EDX_ARG,0x14);
  F_00a5e600(&REFG(undefined, 0x1334964) GEN_EDX_ARG,100);
  uVar1 = F_00c47de6(((code *)REFP(0x107c610)));
  return uVar1;
}

/* ref: FUN_01072c30 */
GEN_LIB GEN_FRAME uint F_01072c30(void)
{
  GEN_ENTER(0x1072c30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00edfd00(&REFG(undefined, 0x14a73f0) GEN_EDX_ARG);
  REFG(undefined4, 0x14a7404) = 0;
  REFG(undefined4, 0x14a7408) = 0;
  REFG(undefined4, 0x14a740c) = 0;
  REFG(undefined4, 0x14a7414) = 0;
  REFG(undefined4, 0x14a7418) = 0;
  REFG(undefined4, 0x14a741c) = 0;
  REFG(undefined4, 0x14a7420) = 0;
  REFG(undefined4, 0x14a7424) = 0;
  uVar1 = F_00c47de6(((code *)REFP(0x107c600)));
  return uVar1;
}

/* ref: FUN_01072ca0 */
GEN_LIB GEN_NOFRAME uint F_01072ca0(void)
{
  GEN_ENTER(0x1072ca0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00f95800(&REFG(undefined, 0x14a7470) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c5f0)));
  return uVar1;
}

/* ref: FUN_01072cc0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072cc0(void)
{
  GEN_ENTER(0x1072cc0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9710) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a9710), REFG(float, 0x1334a7c));
  return;
}

/* ref: FUN_01072ce0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072ce0(void)
{
  GEN_ENTER(0x1072ce0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9714) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a9714), REFG(float, 0x1334aac));
  return;
}

/* ref: FUN_01072d00 */
GEN_LIB GEN_NOFRAME unsigned int F_01072d00(void)
{
  GEN_ENTER(0x1072d00u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9720) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a9720), REFG(float, 0x1334ce0));
  return;
}

/* ref: FUN_01072d20 */
GEN_LIB GEN_NOFRAME unsigned int F_01072d20(void)
{
  GEN_ENTER(0x1072d20u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9724) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a9724), REFG(float, 0x1334d10));
  return;
}

/* ref: FUN_01072d40 */
GEN_LIB GEN_NOFRAME uint F_01072d40(void)
{
  GEN_ENTER(0x1072d40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a63a90(&REFG(undefined, 0x14a9728) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_01072d50 */
GEN_LIB GEN_NOFRAME unsigned int F_01072d50(void)
{
  GEN_ENTER(0x1072d50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9a10) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a9a10), REFG(float, 0x1334f48));
  return;
}

/* ref: FUN_01072d70 */
GEN_LIB GEN_NOFRAME unsigned int F_01072d70(void)
{
  GEN_ENTER(0x1072d70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9a14) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a9a14), REFG(float, 0x1334f78));
  return;
}

/* ref: FUN_01072d90 */
GEN_LIB GEN_NOFRAME unsigned int F_01072d90(void)
{
  GEN_ENTER(0x1072d90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9e34) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a9e34), REFG(float, 0x1335764));
  return;
}

/* ref: FUN_01072db0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072db0(void)
{
  GEN_ENTER(0x1072db0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9e38) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a9e38), REFG(float, 0x1335794));
  return;
}

/* ref: FUN_01072dd0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072dd0(void)
{
  GEN_ENTER(0x1072dd0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14a9e3c) =
       (float)((float10)*(float *)&REFG(undefined, 0x13357f0) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return;
}

/* ref: FUN_01072df0 */
GEN_LIB GEN_NOFRAME uint F_01072df0(void)
{
  GEN_ENTER(0x1072df0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00a9e8f0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c680)));
  return uVar1;
}

/* ref: FUN_01072e10 */
GEN_LIB GEN_NOFRAME unsigned int F_01072e10(void)
{
  GEN_ENTER(0x1072e10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14b5178) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14b5178), REFG(float, 0x133604c));
  return;
}

/* ref: FUN_01072e30 */
GEN_LIB GEN_NOFRAME unsigned int F_01072e30(void)
{
  GEN_ENTER(0x1072e30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14b517c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14b517c), REFG(float, 0x133607c));
  return;
}

/* ref: FUN_01072e50 */
GEN_LIB GEN_NOFRAME unsigned int F_01072e50(void)
{
  GEN_ENTER(0x1072e50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bcc70) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14bcc70), REFG(float, 0x13363e8));
  return;
}

/* ref: FUN_01072e70 */
GEN_LIB GEN_NOFRAME unsigned int F_01072e70(void)
{
  GEN_ENTER(0x1072e70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bcc74) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14bcc74), REFG(float, 0x1336418));
  return;
}

/* ref: FUN_01072e90 */
GEN_LIB GEN_NOFRAME uint F_01072e90(void)
{
  GEN_ENTER(0x1072e90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c700)));
  return uVar1;
}

/* ref: FUN_01072ea0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072ea0(void)
{
  GEN_ENTER(0x1072ea0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bcf30) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14bcf30), REFG(float, 0x1336784));
  return;
}

/* ref: FUN_01072ec0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072ec0(void)
{
  GEN_ENTER(0x1072ec0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bcf34) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14bcf34), REFG(float, 0x13367b4));
  return;
}

/* ref: FUN_01072ee0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072ee0(void)
{
  GEN_ENTER(0x1072ee0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14bcf38) =
       (float)((float10)*(float *)&REFG(undefined, 0x1336810) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return;
}

/* ref: FUN_01072f00 */
GEN_LIB GEN_NOFRAME unsigned int F_01072f00(void)
{
  GEN_ENTER(0x1072f00u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bee58) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14bee58), REFG(float, 0x13369f0));
  return;
}

/* ref: FUN_01072f20 */
GEN_LIB GEN_NOFRAME unsigned int F_01072f20(void)
{
  GEN_ENTER(0x1072f20u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bee5c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14bee5c), REFG(float, 0x1336a20));
  return;
}

/* ref: FUN_01072f40 */
GEN_LIB GEN_NOFRAME uint F_01072f40(void)
{
  GEN_ENTER(0x1072f40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c710)));
  return uVar1;
}

/* ref: FUN_01072f50 */
GEN_LIB GEN_NOFRAME unsigned int F_01072f50(void)
{
  GEN_ENTER(0x1072f50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0868) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c0868), REFG(float, 0x1336cd4));
  return;
}

/* ref: FUN_01072f70 */
GEN_LIB GEN_NOFRAME unsigned int F_01072f70(void)
{
  GEN_ENTER(0x1072f70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c086c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c086c), REFG(float, 0x1336d04));
  return;
}

/* ref: FUN_01072f90 */
GEN_LIB GEN_NOFRAME unsigned int F_01072f90(void)
{
  GEN_ENTER(0x1072f90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0870) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c0870), REFG(float, 0x1336dac));
  return;
}

/* ref: FUN_01072fb0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072fb0(void)
{
  GEN_ENTER(0x1072fb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0874) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c0874), REFG(float, 0x1336ddc));
  return;
}

/* ref: FUN_01072fd0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072fd0(void)
{
  GEN_ENTER(0x1072fd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c09d8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c09d8), REFG(float, 0x1338cb8));
  return;
}

/* ref: FUN_01072ff0 */
GEN_LIB GEN_NOFRAME unsigned int F_01072ff0(void)
{
  GEN_ENTER(0x1072ff0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c09dc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c09dc), REFG(float, 0x1338ce8));
  return;
}

/* ref: FUN_01073010 */
GEN_LIB GEN_NOFRAME uint F_01073010(void)
{
  GEN_ENTER(0x1073010u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x14c09e0) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c760)));
  return uVar1;
}

/* ref: FUN_01073030 */
GEN_LIB GEN_NOFRAME uint F_01073030(void)
{
  GEN_ENTER(0x1073030u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c770)));
  return uVar1;
}

/* ref: FUN_01073040 */
GEN_LIB GEN_NOFRAME unsigned int F_01073040(void)
{
  GEN_ENTER(0x1073040u, 0u, 0u, 0u, 0u);
  REFG(float, 0x14c0a48) = REFG(float, 0x1339b08);
  return;
}

/* ref: FUN_01073060 */
GEN_LIB GEN_NOFRAME unsigned int F_01073060(void)
{
  GEN_ENTER(0x1073060u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0a4c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c0a4c), REFG(float, 0x1339b38));
  return;
}

/* ref: FUN_01073080 */
GEN_LIB GEN_NOFRAME uint F_01073080(void)
{
  GEN_ENTER(0x1073080u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00affcd0(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c780)));
  return uVar1;
}

/* ref: FUN_010730a0 */
GEN_LIB GEN_NOFRAME unsigned int F_010730a0(void)
{
  GEN_ENTER(0x10730a0u, 0u, 0u, 0u, 0u);
  REFG(float, 0x1339ba0) = REFG(float, 0x1339af0);
  return;
}

/* ref: FUN_010730c0 */
GEN_LIB GEN_NOFRAME unsigned int F_010730c0(void)
{
  GEN_ENTER(0x10730c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0cf0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c0cf0), REFG(float, 0x1339e00));
  return;
}

/* ref: FUN_010730e0 */
GEN_LIB GEN_NOFRAME unsigned int F_010730e0(void)
{
  GEN_ENTER(0x10730e0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0cf4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c0cf4), REFG(float, 0x1339e30));
  return;
}

/* ref: FUN_01073100 */
GEN_LIB GEN_NOFRAME unsigned int F_01073100(void)
{
  GEN_ENTER(0x1073100u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0cfc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c0cfc), REFG(float, 0x133a068));
  return;
}

/* ref: FUN_01073120 */
GEN_LIB GEN_NOFRAME unsigned int F_01073120(void)
{
  GEN_ENTER(0x1073120u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0d00) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c0d00), REFG(float, 0x133a098));
  return;
}

/* ref: FUN_01073140 */
GEN_LIB GEN_NOFRAME unsigned int F_01073140(void)
{
  GEN_ENTER(0x1073140u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14c0d04) =
       (float)((float10)*(float *)&REFG(undefined, 0x133a0f4) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return;
}

/* ref: FUN_01073160 */
GEN_LIB GEN_NOFRAME uint F_01073160(void)
{
  GEN_ENTER(0x1073160u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a1b0d0(&REFG(undefined, 0x14c0d70) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_01073170 */
GEN_LIB GEN_NOFRAME uint F_01073170(void)
{
  GEN_ENTER(0x1073170u, 0u, 0u, 0u, 0u);
  short sVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = (short)REFG(undefined4, 0x133a594) + *(short *)&REFG(undefined, 0x14c1ec0);
  sVar3 = (short)((uint)REFG(undefined4, 0x133a594) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c1ec0) = CONCAT22(sVar1,*(short *)&REFG(undefined, 0x14c1ec0));
  sVar1 = (short)REFG(undefined4, 0x133a598) + sVar3;
  sVar4 = (short)((uint)REFG(undefined4, 0x133a598) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c1ec4) = CONCAT22(sVar1,sVar3);
  sVar1 = (short)REFG(undefined4, 0x133a59c) + sVar4;
  sVar3 = (short)((uint)REFG(undefined4, 0x133a59c) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c1ec8) = CONCAT22(sVar1,sVar4);
  *(int *)&REFG(undefined, 0x14c1ecc) = CONCAT22(*(undefined2 *)&REFG(undefined, 0x14c1ece),sVar3);
  uVar2 = REFG(int, 0x133a5a0) + *(int *)&REFG(undefined, 0x14c1ecc);
  *(int *)&REFG(undefined, 0x14c1ecc) = CONCAT22((short)uVar2,sVar3);
  return uVar2;
}

/* ref: FUN_010731f0 */
GEN_LIB GEN_NOFRAME uint F_010731f0(void)
{
  GEN_ENTER(0x10731f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c870)));
  return uVar1;
}

/* ref: FUN_01073200 */
GEN_LIB GEN_NOFRAME uint F_01073200(void)
{
  GEN_ENTER(0x1073200u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x14c4c10) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c840)));
  return uVar1;
}

/* ref: FUN_01073220 */
GEN_LIB GEN_NOFRAME uint F_01073220(void)
{
  GEN_ENTER(0x1073220u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined4, 0x14c4c68) GEN_EDX_ARG,&REFG(undefined, 0x10f1298),REFG(undefined4, 0x108cc50));
  REFG(undefined4, 0x14c4cbc) = 0x22;
  F_0042cc20(&REFG(undefined4, 0x14c4cc0) GEN_EDX_ARG,&REFG(undefined, 0x10f1290),REFG(undefined4, 0x108cc50));
  *(undefined4 *)&REFG(undefined, 0x14c4d14) = 0x27;
  F_0042cc20(&REFG(undefined, 0x14c4d18) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10f128c)),REFG(undefined4, 0x108cc50));
  *(undefined4 *)&REFG(undefined, 0x14c4d6c) = 0x26;
  F_0042cc20(&REFG(undefined, 0x14c4d70) GEN_EDX_ARG,&REFG(undefined, 0x10f1288),REFG(undefined4, 0x108cc50));
  *(undefined4 *)&REFG(undefined, 0x14c4dc4) = 0x3c;
  F_0042cc20(&REFG(undefined, 0x14c4dc8) GEN_EDX_ARG,&REFG(undefined, 0x10f1284),REFG(undefined4, 0x108cc50));
  *(undefined4 *)&REFG(undefined, 0x14c4e1c) = 0x3e;
  F_0042cc20(&REFG(undefined, 0x14c4e20) GEN_EDX_ARG,&REFG(undefined, 0x10f1266),REFG(undefined4, 0x108cc50));
  *(undefined4 *)&REFG(undefined, 0x14c4e74) = 0;
  uVar1 = F_00c47de6(((code *)REFP(0x107c850)));
  return uVar1;
}

/* ref: FUN_010732f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010732f0(void)
{
  GEN_ENTER(0x10732f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e7c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4e7c), REFG(float, 0x133b2a8));
  return;
}

/* ref: FUN_01073310 */
GEN_LIB GEN_NOFRAME unsigned int F_01073310(void)
{
  GEN_ENTER(0x1073310u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e80) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4e80), REFG(float, 0x133b2d8));
  return;
}

/* ref: FUN_01073330 */
GEN_LIB GEN_NOFRAME unsigned int F_01073330(void)
{
  GEN_ENTER(0x1073330u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e88) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4e88), REFG(float, 0x133b3fc));
  return;
}

/* ref: FUN_01073350 */
GEN_LIB GEN_NOFRAME unsigned int F_01073350(void)
{
  GEN_ENTER(0x1073350u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e8c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4e8c), REFG(float, 0x133b42c));
  return;
}

/* ref: FUN_01073370 */
GEN_LIB GEN_NOFRAME unsigned int F_01073370(void)
{
  GEN_ENTER(0x1073370u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e94) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4e94), REFG(float, 0x133c2c0));
  return;
}

/* ref: FUN_01073390 */
GEN_LIB GEN_NOFRAME unsigned int F_01073390(void)
{
  GEN_ENTER(0x1073390u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e98) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4e98), REFG(float, 0x133c2f0));
  return;
}

/* ref: FUN_010733b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010733b0(void)
{
  GEN_ENTER(0x10733b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ea8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4ea8), REFG(float, 0x133cb74));
  return;
}

/* ref: FUN_010733d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010733d0(void)
{
  GEN_ENTER(0x10733d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4eac) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4eac), REFG(float, 0x133cba4));
  return;
}

/* ref: FUN_010733f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010733f0(void)
{
  GEN_ENTER(0x10733f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4eb0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4eb0), REFG(float, 0x133ccf8));
  return;
}

/* ref: FUN_01073410 */
GEN_LIB GEN_NOFRAME unsigned int F_01073410(void)
{
  GEN_ENTER(0x1073410u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4eb4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4eb4), REFG(float, 0x133cd28));
  return;
}

/* ref: FUN_01073430 */
GEN_LIB GEN_NOFRAME unsigned int F_01073430(void)
{
  GEN_ENTER(0x1073430u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4eb8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4eb8), REFG(float, 0x133cec0));
  return;
}

/* ref: FUN_01073450 */
GEN_LIB GEN_NOFRAME unsigned int F_01073450(void)
{
  GEN_ENTER(0x1073450u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ebc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4ebc), REFG(float, 0x133cef0));
  return;
}

/* ref: FUN_01073470 */
GEN_LIB GEN_NOFRAME unsigned int F_01073470(void)
{
  GEN_ENTER(0x1073470u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ecc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4ecc), REFG(float, 0x133cf98));
  return;
}

/* ref: FUN_01073490 */
GEN_LIB GEN_NOFRAME unsigned int F_01073490(void)
{
  GEN_ENTER(0x1073490u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ed0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4ed0), REFG(float, 0x133cfc8));
  return;
}

/* ref: FUN_010734b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010734b0(void)
{
  GEN_ENTER(0x10734b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ed4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4ed4), REFG(float, 0x133d12c));
  return;
}

/* ref: FUN_010734d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010734d0(void)
{
  GEN_ENTER(0x10734d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ed8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4ed8), REFG(float, 0x133d15c));
  return;
}

/* ref: FUN_010734f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010734f0(void)
{
  GEN_ENTER(0x10734f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ee4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4ee4), REFG(float, 0x133d2cc));
  return;
}

/* ref: FUN_01073510 */
GEN_LIB GEN_NOFRAME unsigned int F_01073510(void)
{
  GEN_ENTER(0x1073510u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ee8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c4ee8), REFG(float, 0x133d2fc));
  return;
}

/* ref: FUN_01073530 */
GEN_LIB GEN_NOFRAME unsigned int F_01073530(void)
{
  GEN_ENTER(0x1073530u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5788) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5788), REFG(float, 0x133dedc));
  return;
}

/* ref: FUN_01073550 */
GEN_LIB GEN_NOFRAME unsigned int F_01073550(void)
{
  GEN_ENTER(0x1073550u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c578c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c578c), REFG(float, 0x133df0c));
  return;
}

/* ref: FUN_01073570 */
GEN_LIB GEN_NOFRAME unsigned int F_01073570(void)
{
  GEN_ENTER(0x1073570u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14c5790) =
       (float)((float10)*(float *)&REFG(undefined, 0x133df68) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return;
}

/* ref: FUN_01073590 */
GEN_LIB GEN_NOFRAME unsigned int F_01073590(void)
{
  GEN_ENTER(0x1073590u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5898) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5898), REFG(float, 0x133e038));
  return;
}

/* ref: FUN_010735b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010735b0(void)
{
  GEN_ENTER(0x10735b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c589c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c589c), REFG(float, 0x133e068));
  return;
}

/* ref: FUN_010735d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010735d0(void)
{
  GEN_ENTER(0x10735d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c58a0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c58a0), REFG(float, 0x133e2c8));
  return;
}

/* ref: FUN_010735f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010735f0(void)
{
  GEN_ENTER(0x10735f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c58a4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c58a4), REFG(float, 0x133e2f8));
  return;
}

/* ref: FUN_01073610 */
GEN_LIB GEN_NOFRAME unsigned int F_01073610(void)
{
  GEN_ENTER(0x1073610u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c58a8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c58a8), REFG(float, 0x133e530));
  return;
}

/* ref: FUN_01073630 */
GEN_LIB GEN_NOFRAME unsigned int F_01073630(void)
{
  GEN_ENTER(0x1073630u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c58ac) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c58ac), REFG(float, 0x133e560));
  return;
}

/* ref: FUN_01073650 */
GEN_LIB GEN_NOFRAME uint F_01073650(void)
{
  GEN_ENTER(0x1073650u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c8c0)));
  return uVar1;
}

/* ref: FUN_01073660 */
GEN_LIB GEN_NOFRAME unsigned int F_01073660(void)
{
  GEN_ENTER(0x1073660u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14c58b0) =
       (float)((float10)*(float *)&REFG(undefined, 0x133e994) * (float10)*(float *)&REFG(undefined, 0x133e994));
  return;
}

/* ref: FUN_01073670 */
GEN_LIB GEN_NOFRAME uint F_01073670(void)
{
  GEN_ENTER(0x1073670u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a1b190(&REFG(undefined, 0x14c58c4) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_01073680 */
GEN_LIB GEN_NOFRAME unsigned int F_01073680(void)
{
  GEN_ENTER(0x1073680u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c590c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c590c), REFG(float, 0x133f064));
  return;
}

/* ref: FUN_010736a0 */
GEN_LIB GEN_NOFRAME unsigned int F_010736a0(void)
{
  GEN_ENTER(0x10736a0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5910) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5910), REFG(float, 0x133f094));
  return;
}

/* ref: FUN_010736c0 */
GEN_LIB GEN_NOFRAME uint F_010736c0(void)
{
  GEN_ENTER(0x10736c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c8e0)));
  return uVar1;
}

/* ref: FUN_010736d0 */
GEN_LIB GEN_NOFRAME uint F_010736d0(void)
{
  GEN_ENTER(0x10736d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c8f0)));
  return uVar1;
}

/* ref: FUN_010736e0 */
GEN_LIB GEN_NOFRAME unsigned int F_010736e0(void)
{
  GEN_ENTER(0x10736e0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5914) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5914), REFG(float, 0x13403f0));
  return;
}

/* ref: FUN_01073700 */
GEN_LIB GEN_NOFRAME unsigned int F_01073700(void)
{
  GEN_ENTER(0x1073700u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5918) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5918), REFG(float, 0x1340420));
  return;
}

/* ref: FUN_01073720 */
GEN_LIB GEN_NOFRAME unsigned int F_01073720(void)
{
  GEN_ENTER(0x1073720u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5920) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5920), REFG(float, 0x1340918));
  return;
}

/* ref: FUN_01073740 */
GEN_LIB GEN_NOFRAME unsigned int F_01073740(void)
{
  GEN_ENTER(0x1073740u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5924) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5924), REFG(float, 0x1340948));
  return;
}

/* ref: FUN_01073760 */
GEN_LIB GEN_NOFRAME unsigned int F_01073760(void)
{
  GEN_ENTER(0x1073760u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5928) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5928), REFG(float, 0x1340bd0));
  return;
}

/* ref: FUN_01073780 */
GEN_LIB GEN_NOFRAME unsigned int F_01073780(void)
{
  GEN_ENTER(0x1073780u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c592c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c592c), REFG(float, 0x1340c00));
  return;
}

/* ref: FUN_010737a0 */
GEN_LIB GEN_NOFRAME uint F_010737a0(void)
{
  GEN_ENTER(0x10737a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c930)));
  return uVar1;
}

/* ref: FUN_010737b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010737b0(void)
{
  GEN_ENTER(0x10737b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5930) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5930), REFG(float, 0x1340ef8));
  return;
}

/* ref: FUN_010737d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010737d0(void)
{
  GEN_ENTER(0x10737d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5934) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5934), REFG(float, 0x1340f28));
  return;
}

/* ref: FUN_010737f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010737f0(void)
{
  GEN_ENTER(0x10737f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c593c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c593c), REFG(float, 0x1341240));
  return;
}

/* ref: FUN_01073810 */
GEN_LIB GEN_NOFRAME unsigned int F_01073810(void)
{
  GEN_ENTER(0x1073810u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5940) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5940), REFG(float, 0x1341270));
  return;
}

/* ref: FUN_01073830 */
GEN_LIB GEN_NOFRAME unsigned int F_01073830(void)
{
  GEN_ENTER(0x1073830u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5944) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5944), REFG(float, 0x1341350));
  return;
}

/* ref: FUN_01073850 */
GEN_LIB GEN_NOFRAME unsigned int F_01073850(void)
{
  GEN_ENTER(0x1073850u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5948) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5948), REFG(float, 0x1341380));
  return;
}

/* ref: FUN_01073870 */
GEN_LIB GEN_NOFRAME unsigned int F_01073870(void)
{
  GEN_ENTER(0x1073870u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c594c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c594c), REFG(float, 0x1341620));
  return;
}

/* ref: FUN_01073890 */
GEN_LIB GEN_NOFRAME unsigned int F_01073890(void)
{
  GEN_ENTER(0x1073890u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5950) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5950), REFG(float, 0x1341650));
  return;
}

/* ref: FUN_010738b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010738b0(void)
{
  GEN_ENTER(0x10738b0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14c5954) =
       (float)((float10)*(float *)&REFG(undefined, 0x13416ac) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return;
}

/* ref: FUN_010738d0 */
GEN_LIB GEN_NOFRAME uint F_010738d0(void)
{
  GEN_ENTER(0x10738d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x14c5960) = F_004296a0(0xc,0,0x25a);
  *((uint *)GEN_TOP(REFG(undefined4, 0x14c5960))) = REFG(undefined4, 0x14c5960);
  *((uint *)GEN_TOP((REFG(undefined4, 0x14c5960) + 4))) = REFG(undefined4, 0x14c5960);
  uVar1 = F_00c47de6(((code *)REFP(0x107c940)));
  return uVar1;
}

/* ref: FUN_01073900 */
GEN_LIB GEN_NOFRAME unsigned int F_01073900(void)
{
  GEN_ENTER(0x1073900u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5984) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5984), REFG(float, 0x1341c88));
  return;
}

/* ref: FUN_01073920 */
GEN_LIB GEN_NOFRAME unsigned int F_01073920(void)
{
  GEN_ENTER(0x1073920u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5988) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5988), REFG(float, 0x1341cb8));
  return;
}

/* ref: FUN_01073940 */
GEN_LIB GEN_NOFRAME uint F_01073940(void)
{
  GEN_ENTER(0x1073940u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c950)));
  return uVar1;
}

/* ref: FUN_01073950 */
GEN_LIB GEN_NOFRAME unsigned int F_01073950(void)
{
  GEN_ENTER(0x1073950u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59a0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59a0), REFG(float, 0x1341e24));
  return;
}

/* ref: FUN_01073970 */
GEN_LIB GEN_NOFRAME unsigned int F_01073970(void)
{
  GEN_ENTER(0x1073970u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59a4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59a4), REFG(float, 0x1341e54));
  return;
}

/* ref: FUN_01073990 */
GEN_LIB GEN_NOFRAME unsigned int F_01073990(void)
{
  GEN_ENTER(0x1073990u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59a8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59a8), REFG(float, 0x13420bc));
  return;
}

/* ref: FUN_010739b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010739b0(void)
{
  GEN_ENTER(0x10739b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59ac) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59ac), REFG(float, 0x13420ec));
  return;
}

/* ref: FUN_010739d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010739d0(void)
{
  GEN_ENTER(0x10739d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59b0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59b0), REFG(float, 0x1342320));
  return;
}

/* ref: FUN_010739f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010739f0(void)
{
  GEN_ENTER(0x10739f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59b4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59b4), REFG(float, 0x1342350));
  return;
}

/* ref: FUN_01073a10 */
GEN_LIB GEN_NOFRAME unsigned int F_01073a10(void)
{
  GEN_ENTER(0x1073a10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59b8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59b8), REFG(float, 0x13423f8));
  return;
}

/* ref: FUN_01073a30 */
GEN_LIB GEN_NOFRAME unsigned int F_01073a30(void)
{
  GEN_ENTER(0x1073a30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59bc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59bc), REFG(float, 0x1342428));
  return;
}

/* ref: FUN_01073a50 */
GEN_LIB GEN_NOFRAME unsigned int F_01073a50(void)
{
  GEN_ENTER(0x1073a50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59c0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59c0), REFG(float, 0x1342690));
  return;
}

/* ref: FUN_01073a70 */
GEN_LIB GEN_NOFRAME unsigned int F_01073a70(void)
{
  GEN_ENTER(0x1073a70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59c4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59c4), REFG(float, 0x13426c0));
  return;
}

/* ref: FUN_01073a90 */
GEN_LIB GEN_NOFRAME unsigned int F_01073a90(void)
{
  GEN_ENTER(0x1073a90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59c8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59c8), REFG(float, 0x1342920));
  return;
}

/* ref: FUN_01073ab0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073ab0(void)
{
  GEN_ENTER(0x1073ab0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59cc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59cc), REFG(float, 0x1342950));
  return;
}

/* ref: FUN_01073ad0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073ad0(void)
{
  GEN_ENTER(0x1073ad0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59d0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59d0), REFG(float, 0x13429fc));
  return;
}

/* ref: FUN_01073af0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073af0(void)
{
  GEN_ENTER(0x1073af0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59d4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59d4), REFG(float, 0x1342a2c));
  return;
}

/* ref: FUN_01073b10 */
GEN_LIB GEN_NOFRAME unsigned int F_01073b10(void)
{
  GEN_ENTER(0x1073b10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59d8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59d8), REFG(float, 0x1342bc8));
  return;
}

/* ref: FUN_01073b30 */
GEN_LIB GEN_NOFRAME unsigned int F_01073b30(void)
{
  GEN_ENTER(0x1073b30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59dc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c59dc), REFG(float, 0x1342bf8));
  return;
}

/* ref: FUN_01073b50 */
GEN_LIB GEN_NOFRAME uint F_01073b50(void)
{
  GEN_ENTER(0x1073b50u, 0u, 0u, 0u, 0u);
  short sVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = (short)REFG(undefined4, 0x1342d68) + *(short *)&REFG(undefined, 0x14c5a14);
  sVar3 = (short)((uint)REFG(undefined4, 0x1342d68) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c5a14) = CONCAT22(sVar1,*(short *)&REFG(undefined, 0x14c5a14));
  sVar1 = (short)REFG(undefined4, 0x1342d6c) + sVar3;
  sVar4 = (short)((uint)REFG(undefined4, 0x1342d6c) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c5a18) = CONCAT22(sVar1,sVar3);
  sVar1 = (short)REFG(undefined4, 0x1342d70) + sVar4;
  sVar3 = (short)((uint)REFG(undefined4, 0x1342d70) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c5a1c) = CONCAT22(sVar1,sVar4);
  *(int *)&REFG(undefined, 0x14c5a20) = CONCAT22(*(undefined2 *)&REFG(undefined, 0x14c5a22),sVar3);
  uVar2 = REFG(int, 0x1342d74) + *(int *)&REFG(undefined, 0x14c5a20);
  *(int *)&REFG(undefined, 0x14c5a20) = CONCAT22((short)uVar2,sVar3);
  return uVar2;
}

/* ref: FUN_01073bd0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073bd0(void)
{
  GEN_ENTER(0x1073bd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a24) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a24), REFG(float, 0x1342ec8));
  return;
}

/* ref: FUN_01073bf0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073bf0(void)
{
  GEN_ENTER(0x1073bf0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a28) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a28), REFG(float, 0x1342ef8));
  return;
}

/* ref: FUN_01073c10 */
GEN_LIB GEN_NOFRAME unsigned int F_01073c10(void)
{
  GEN_ENTER(0x1073c10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a2c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a2c), REFG(float, 0x13430fc));
  return;
}

/* ref: FUN_01073c30 */
GEN_LIB GEN_NOFRAME unsigned int F_01073c30(void)
{
  GEN_ENTER(0x1073c30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a30) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a30), REFG(float, 0x134312c));
  return;
}

/* ref: FUN_01073c50 */
GEN_LIB GEN_NOFRAME unsigned int F_01073c50(void)
{
  GEN_ENTER(0x1073c50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a34) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a34), REFG(float, 0x13431dc));
  return;
}

/* ref: FUN_01073c70 */
GEN_LIB GEN_NOFRAME unsigned int F_01073c70(void)
{
  GEN_ENTER(0x1073c70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a38) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a38), REFG(float, 0x134320c));
  return;
}

/* ref: FUN_01073c90 */
GEN_LIB GEN_NOFRAME unsigned int F_01073c90(void)
{
  GEN_ENTER(0x1073c90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a3c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a3c), REFG(float, 0x134335c));
  return;
}

/* ref: FUN_01073cb0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073cb0(void)
{
  GEN_ENTER(0x1073cb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a40) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a40), REFG(float, 0x134338c));
  return;
}

/* ref: FUN_01073cd0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073cd0(void)
{
  GEN_ENTER(0x1073cd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a44) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a44), REFG(float, 0x1343434));
  return;
}

/* ref: FUN_01073cf0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073cf0(void)
{
  GEN_ENTER(0x1073cf0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a48) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a48), REFG(float, 0x1343464));
  return;
}

/* ref: FUN_01073d10 */
GEN_LIB GEN_NOFRAME unsigned int F_01073d10(void)
{
  GEN_ENTER(0x1073d10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a4c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a4c), REFG(float, 0x134350c));
  return;
}

/* ref: FUN_01073d30 */
GEN_LIB GEN_NOFRAME unsigned int F_01073d30(void)
{
  GEN_ENTER(0x1073d30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a50) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a50), REFG(float, 0x134353c));
  return;
}

/* ref: FUN_01073d50 */
GEN_LIB GEN_NOFRAME unsigned int F_01073d50(void)
{
  GEN_ENTER(0x1073d50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a54) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a54), REFG(float, 0x13436a0));
  return;
}

/* ref: FUN_01073d70 */
GEN_LIB GEN_NOFRAME unsigned int F_01073d70(void)
{
  GEN_ENTER(0x1073d70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a58) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a58), REFG(float, 0x13436d0));
  return;
}

/* ref: FUN_01073d90 */
GEN_LIB GEN_NOFRAME unsigned int F_01073d90(void)
{
  GEN_ENTER(0x1073d90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a5c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a5c), REFG(float, 0x1343778));
  return;
}

/* ref: FUN_01073db0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073db0(void)
{
  GEN_ENTER(0x1073db0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a60) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a60), REFG(float, 0x13437a8));
  return;
}

/* ref: FUN_01073dd0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073dd0(void)
{
  GEN_ENTER(0x1073dd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a64) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a64), REFG(float, 0x1343850));
  return;
}

/* ref: FUN_01073df0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073df0(void)
{
  GEN_ENTER(0x1073df0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a68) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a68), REFG(float, 0x1343880));
  return;
}

/* ref: FUN_01073e10 */
GEN_LIB GEN_NOFRAME unsigned int F_01073e10(void)
{
  GEN_ENTER(0x1073e10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a6c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a6c), REFG(float, 0x1343928));
  return;
}

/* ref: FUN_01073e30 */
GEN_LIB GEN_NOFRAME unsigned int F_01073e30(void)
{
  GEN_ENTER(0x1073e30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a70) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a70), REFG(float, 0x1343958));
  return;
}

/* ref: FUN_01073e50 */
GEN_LIB GEN_NOFRAME unsigned int F_01073e50(void)
{
  GEN_ENTER(0x1073e50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a74) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a74), REFG(float, 0x1343a00));
  return;
}

/* ref: FUN_01073e70 */
GEN_LIB GEN_NOFRAME unsigned int F_01073e70(void)
{
  GEN_ENTER(0x1073e70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a78) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a78), REFG(float, 0x1343a30));
  return;
}

/* ref: FUN_01073e90 */
GEN_LIB GEN_NOFRAME unsigned int F_01073e90(void)
{
  GEN_ENTER(0x1073e90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a7c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a7c), REFG(float, 0x1343ad8));
  return;
}

/* ref: FUN_01073eb0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073eb0(void)
{
  GEN_ENTER(0x1073eb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a80) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a80), REFG(float, 0x1343b08));
  return;
}

/* ref: FUN_01073ed0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073ed0(void)
{
  GEN_ENTER(0x1073ed0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a84) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a84), REFG(float, 0x1343bb0));
  return;
}

/* ref: FUN_01073ef0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073ef0(void)
{
  GEN_ENTER(0x1073ef0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a88) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a88), REFG(float, 0x1343be0));
  return;
}

/* ref: FUN_01073f10 */
GEN_LIB GEN_NOFRAME unsigned int F_01073f10(void)
{
  GEN_ENTER(0x1073f10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a8c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a8c), REFG(float, 0x1343e1c));
  return;
}

/* ref: FUN_01073f30 */
GEN_LIB GEN_NOFRAME unsigned int F_01073f30(void)
{
  GEN_ENTER(0x1073f30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a90) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a90), REFG(float, 0x1343e4c));
  return;
}

/* ref: FUN_01073f50 */
GEN_LIB GEN_NOFRAME unsigned int F_01073f50(void)
{
  GEN_ENTER(0x1073f50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a94) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a94), REFG(float, 0x1344080));
  return;
}

/* ref: FUN_01073f70 */
GEN_LIB GEN_NOFRAME unsigned int F_01073f70(void)
{
  GEN_ENTER(0x1073f70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a98) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a98), REFG(float, 0x13440b0));
  return;
}

/* ref: FUN_01073f90 */
GEN_LIB GEN_NOFRAME unsigned int F_01073f90(void)
{
  GEN_ENTER(0x1073f90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a9c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5a9c), REFG(float, 0x1344324));
  return;
}

/* ref: FUN_01073fb0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073fb0(void)
{
  GEN_ENTER(0x1073fb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5aa0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5aa0), REFG(float, 0x1344354));
  return;
}

/* ref: FUN_01073fd0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073fd0(void)
{
  GEN_ENTER(0x1073fd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5aa4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5aa4), REFG(float, 0x134443c));
  return;
}

/* ref: FUN_01073ff0 */
GEN_LIB GEN_NOFRAME unsigned int F_01073ff0(void)
{
  GEN_ENTER(0x1073ff0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5aa8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5aa8), REFG(float, 0x134446c));
  return;
}

/* ref: FUN_01074010 */
GEN_LIB GEN_NOFRAME unsigned int F_01074010(void)
{
  GEN_ENTER(0x1074010u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ac0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ac0), REFG(float, 0x1344550));
  return;
}

/* ref: FUN_01074030 */
GEN_LIB GEN_NOFRAME unsigned int F_01074030(void)
{
  GEN_ENTER(0x1074030u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ac4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ac4), REFG(float, 0x1344580));
  return;
}

/* ref: FUN_01074050 */
GEN_LIB GEN_NOFRAME unsigned int F_01074050(void)
{
  GEN_ENTER(0x1074050u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ac8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ac8), REFG(float, 0x1344664));
  return;
}

/* ref: FUN_01074070 */
GEN_LIB GEN_NOFRAME unsigned int F_01074070(void)
{
  GEN_ENTER(0x1074070u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5acc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5acc), REFG(float, 0x1344694));
  return;
}

/* ref: FUN_01074090 */
GEN_LIB GEN_NOFRAME unsigned int F_01074090(void)
{
  GEN_ENTER(0x1074090u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ad0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ad0), REFG(float, 0x1344778));
  return;
}

/* ref: FUN_010740b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010740b0(void)
{
  GEN_ENTER(0x10740b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ad4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ad4), REFG(float, 0x13447a8));
  return;
}

/* ref: FUN_010740d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010740d0(void)
{
  GEN_ENTER(0x10740d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ad8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ad8), REFG(float, 0x13448cc));
  return;
}

/* ref: FUN_010740f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010740f0(void)
{
  GEN_ENTER(0x10740f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5adc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5adc), REFG(float, 0x13448fc));
  return;
}

/* ref: FUN_01074110 */
GEN_LIB GEN_NOFRAME unsigned int F_01074110(void)
{
  GEN_ENTER(0x1074110u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ae0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ae0), REFG(float, 0x13449e4));
  return;
}

/* ref: FUN_01074130 */
GEN_LIB GEN_NOFRAME unsigned int F_01074130(void)
{
  GEN_ENTER(0x1074130u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ae4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ae4), REFG(float, 0x1344a14));
  return;
}

/* ref: FUN_01074150 */
GEN_LIB GEN_NOFRAME unsigned int F_01074150(void)
{
  GEN_ENTER(0x1074150u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ae8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ae8), REFG(float, 0x1344b3c));
  return;
}

/* ref: FUN_01074170 */
GEN_LIB GEN_NOFRAME unsigned int F_01074170(void)
{
  GEN_ENTER(0x1074170u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5aec) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5aec), REFG(float, 0x1344b6c));
  return;
}

/* ref: FUN_01074190 */
GEN_LIB GEN_NOFRAME unsigned int F_01074190(void)
{
  GEN_ENTER(0x1074190u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5af0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5af0), REFG(float, 0x1344c58));
  return;
}

/* ref: FUN_010741b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010741b0(void)
{
  GEN_ENTER(0x10741b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5af4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5af4), REFG(float, 0x1344c88));
  return;
}

/* ref: FUN_010741d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010741d0(void)
{
  GEN_ENTER(0x10741d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5af8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5af8), REFG(float, 0x1344da8));
  return;
}

/* ref: FUN_010741f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010741f0(void)
{
  GEN_ENTER(0x10741f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5afc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5afc), REFG(float, 0x1344dd8));
  return;
}

/* ref: FUN_01074210 */
GEN_LIB GEN_NOFRAME unsigned int F_01074210(void)
{
  GEN_ENTER(0x1074210u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b00) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b00), REFG(float, 0x1344ebc));
  return;
}

/* ref: FUN_01074230 */
GEN_LIB GEN_NOFRAME unsigned int F_01074230(void)
{
  GEN_ENTER(0x1074230u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b04) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b04), REFG(float, 0x1344eec));
  return;
}

/* ref: FUN_01074250 */
GEN_LIB GEN_NOFRAME unsigned int F_01074250(void)
{
  GEN_ENTER(0x1074250u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b0c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b0c), REFG(float, 0x1344fd0));
  return;
}

/* ref: FUN_01074270 */
GEN_LIB GEN_NOFRAME unsigned int F_01074270(void)
{
  GEN_ENTER(0x1074270u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b10) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b10), REFG(float, 0x1345000));
  return;
}

/* ref: FUN_01074290 */
GEN_LIB GEN_NOFRAME unsigned int F_01074290(void)
{
  GEN_ENTER(0x1074290u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b14) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b14), REFG(float, 0x1345290));
  return;
}

/* ref: FUN_010742b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010742b0(void)
{
  GEN_ENTER(0x10742b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b18) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b18), REFG(float, 0x13452c0));
  return;
}

/* ref: FUN_010742d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010742d0(void)
{
  GEN_ENTER(0x10742d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b1c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b1c), REFG(float, 0x13453b0));
  return;
}

/* ref: FUN_010742f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010742f0(void)
{
  GEN_ENTER(0x10742f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b20) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b20), REFG(float, 0x13453e0));
  return;
}

/* ref: FUN_01074310 */
GEN_LIB GEN_NOFRAME unsigned int F_01074310(void)
{
  GEN_ENTER(0x1074310u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b24) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b24), REFG(float, 0x13454c4));
  return;
}

/* ref: FUN_01074330 */
GEN_LIB GEN_NOFRAME unsigned int F_01074330(void)
{
  GEN_ENTER(0x1074330u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b28) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b28), REFG(float, 0x13454f4));
  return;
}

/* ref: FUN_01074350 */
GEN_LIB GEN_NOFRAME unsigned int F_01074350(void)
{
  GEN_ENTER(0x1074350u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b2c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b2c), REFG(float, 0x13455e0));
  return;
}

/* ref: FUN_01074370 */
GEN_LIB GEN_NOFRAME unsigned int F_01074370(void)
{
  GEN_ENTER(0x1074370u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b30) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b30), REFG(float, 0x1345610));
  return;
}

/* ref: FUN_01074390 */
GEN_LIB GEN_NOFRAME unsigned int F_01074390(void)
{
  GEN_ENTER(0x1074390u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b34) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b34), REFG(float, 0x134573c));
  return;
}

/* ref: FUN_010743b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010743b0(void)
{
  GEN_ENTER(0x10743b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b38) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b38), REFG(float, 0x134576c));
  return;
}

/* ref: FUN_010743d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010743d0(void)
{
  GEN_ENTER(0x10743d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b3c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b3c), REFG(float, 0x1345850));
  return;
}

/* ref: FUN_010743f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010743f0(void)
{
  GEN_ENTER(0x10743f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b40) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b40), REFG(float, 0x1345880));
  return;
}

/* ref: FUN_01074410 */
GEN_LIB GEN_NOFRAME unsigned int F_01074410(void)
{
  GEN_ENTER(0x1074410u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b44) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b44), REFG(float, 0x13459e0));
  return;
}

/* ref: FUN_01074430 */
GEN_LIB GEN_NOFRAME unsigned int F_01074430(void)
{
  GEN_ENTER(0x1074430u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b48) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b48), REFG(float, 0x1345a10));
  return;
}

/* ref: FUN_01074450 */
GEN_LIB GEN_NOFRAME unsigned int F_01074450(void)
{
  GEN_ENTER(0x1074450u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b4c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b4c), REFG(float, 0x1345b40));
  return;
}

/* ref: FUN_01074470 */
GEN_LIB GEN_NOFRAME unsigned int F_01074470(void)
{
  GEN_ENTER(0x1074470u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b50) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b50), REFG(float, 0x1345b70));
  return;
}

/* ref: FUN_01074490 */
GEN_LIB GEN_NOFRAME unsigned int F_01074490(void)
{
  GEN_ENTER(0x1074490u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b54) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b54), REFG(float, 0x1345c54));
  return;
}

/* ref: FUN_010744b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010744b0(void)
{
  GEN_ENTER(0x10744b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b58) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b58), REFG(float, 0x1345c84));
  return;
}

/* ref: FUN_010744d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010744d0(void)
{
  GEN_ENTER(0x10744d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b5c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b5c), REFG(float, 0x1345d64));
  return;
}

/* ref: FUN_010744f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010744f0(void)
{
  GEN_ENTER(0x10744f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b60) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b60), REFG(float, 0x1345d94));
  return;
}

/* ref: FUN_01074510 */
GEN_LIB GEN_NOFRAME unsigned int F_01074510(void)
{
  GEN_ENTER(0x1074510u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b64) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b64), REFG(float, 0x1345e70));
  return;
}

/* ref: FUN_01074530 */
GEN_LIB GEN_NOFRAME unsigned int F_01074530(void)
{
  GEN_ENTER(0x1074530u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b68) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b68), REFG(float, 0x1345ea0));
  return;
}

/* ref: FUN_01074550 */
GEN_LIB GEN_NOFRAME unsigned int F_01074550(void)
{
  GEN_ENTER(0x1074550u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b6c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b6c), REFG(float, 0x1345f80));
  return;
}

/* ref: FUN_01074570 */
GEN_LIB GEN_NOFRAME unsigned int F_01074570(void)
{
  GEN_ENTER(0x1074570u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b70) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b70), REFG(float, 0x1345fb0));
  return;
}

/* ref: FUN_01074590 */
GEN_LIB GEN_NOFRAME unsigned int F_01074590(void)
{
  GEN_ENTER(0x1074590u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b74) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b74), REFG(float, 0x1346094));
  return;
}

/* ref: FUN_010745b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010745b0(void)
{
  GEN_ENTER(0x10745b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b78) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b78), REFG(float, 0x13460c4));
  return;
}

/* ref: FUN_010745d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010745d0(void)
{
  GEN_ENTER(0x10745d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b7c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b7c), REFG(float, 0x13461a8));
  return;
}

/* ref: FUN_010745f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010745f0(void)
{
  GEN_ENTER(0x10745f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b80) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b80), REFG(float, 0x13461d8));
  return;
}

/* ref: FUN_01074610 */
GEN_LIB GEN_NOFRAME unsigned int F_01074610(void)
{
  GEN_ENTER(0x1074610u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b84) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b84), REFG(float, 0x13462b4));
  return;
}

/* ref: FUN_01074630 */
GEN_LIB GEN_NOFRAME unsigned int F_01074630(void)
{
  GEN_ENTER(0x1074630u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b88) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b88), REFG(float, 0x13462e4));
  return;
}

/* ref: FUN_01074650 */
GEN_LIB GEN_NOFRAME unsigned int F_01074650(void)
{
  GEN_ENTER(0x1074650u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b8c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b8c), REFG(float, 0x1346410));
  return;
}

/* ref: FUN_01074670 */
GEN_LIB GEN_NOFRAME unsigned int F_01074670(void)
{
  GEN_ENTER(0x1074670u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b90) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b90), REFG(float, 0x1346440));
  return;
}

/* ref: FUN_01074690 */
GEN_LIB GEN_NOFRAME unsigned int F_01074690(void)
{
  GEN_ENTER(0x1074690u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b94) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b94), REFG(float, 0x134659c));
  return;
}

/* ref: FUN_010746b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010746b0(void)
{
  GEN_ENTER(0x10746b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b98) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b98), REFG(float, 0x13465cc));
  return;
}

/* ref: FUN_010746d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010746d0(void)
{
  GEN_ENTER(0x10746d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b9c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5b9c), REFG(float, 0x13466ac));
  return;
}

/* ref: FUN_010746f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010746f0(void)
{
  GEN_ENTER(0x10746f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ba0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ba0), REFG(float, 0x13466dc));
  return;
}

/* ref: FUN_01074710 */
GEN_LIB GEN_NOFRAME unsigned int F_01074710(void)
{
  GEN_ENTER(0x1074710u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ba4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ba4), REFG(float, 0x13467bc));
  return;
}

/* ref: FUN_01074730 */
GEN_LIB GEN_NOFRAME unsigned int F_01074730(void)
{
  GEN_ENTER(0x1074730u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ba8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ba8), REFG(float, 0x13467ec));
  return;
}

/* ref: FUN_01074750 */
GEN_LIB GEN_NOFRAME unsigned int F_01074750(void)
{
  GEN_ENTER(0x1074750u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bac) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bac), REFG(float, 0x13469ec));
  return;
}

/* ref: FUN_01074770 */
GEN_LIB GEN_NOFRAME unsigned int F_01074770(void)
{
  GEN_ENTER(0x1074770u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bb0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bb0), REFG(float, 0x1346a1c));
  return;
}

/* ref: FUN_01074790 */
GEN_LIB GEN_NOFRAME unsigned int F_01074790(void)
{
  GEN_ENTER(0x1074790u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bb4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bb4), REFG(float, 0x1346bb0));
  return;
}

/* ref: FUN_010747b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010747b0(void)
{
  GEN_ENTER(0x10747b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bb8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bb8), REFG(float, 0x1346be0));
  return;
}

/* ref: FUN_010747d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010747d0(void)
{
  GEN_ENTER(0x10747d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bbc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bbc), REFG(float, 0x1346e44));
  return;
}

/* ref: FUN_010747f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010747f0(void)
{
  GEN_ENTER(0x10747f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bc0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bc0), REFG(float, 0x1346e74));
  return;
}

/* ref: FUN_01074810 */
GEN_LIB GEN_NOFRAME unsigned int F_01074810(void)
{
  GEN_ENTER(0x1074810u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bc4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bc4), REFG(float, 0x1346fdc));
  return;
}

/* ref: FUN_01074830 */
GEN_LIB GEN_NOFRAME unsigned int F_01074830(void)
{
  GEN_ENTER(0x1074830u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bc8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bc8), REFG(float, 0x134700c));
  return;
}

/* ref: FUN_01074850 */
GEN_LIB GEN_NOFRAME unsigned int F_01074850(void)
{
  GEN_ENTER(0x1074850u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bcc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bcc), REFG(float, 0x13470b4));
  return;
}

/* ref: FUN_01074870 */
GEN_LIB GEN_NOFRAME unsigned int F_01074870(void)
{
  GEN_ENTER(0x1074870u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bd0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bd0), REFG(float, 0x13470e4));
  return;
}

/* ref: FUN_01074890 */
GEN_LIB GEN_NOFRAME unsigned int F_01074890(void)
{
  GEN_ENTER(0x1074890u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bd4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bd4), REFG(float, 0x134718c));
  return;
}

/* ref: FUN_010748b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010748b0(void)
{
  GEN_ENTER(0x10748b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bd8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bd8), REFG(float, 0x13471bc));
  return;
}

/* ref: FUN_010748d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010748d0(void)
{
  GEN_ENTER(0x10748d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bdc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bdc), REFG(float, 0x13473f0));
  return;
}

/* ref: FUN_010748f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010748f0(void)
{
  GEN_ENTER(0x10748f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5be0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5be0), REFG(float, 0x1347420));
  return;
}

/* ref: FUN_01074910 */
GEN_LIB GEN_NOFRAME unsigned int F_01074910(void)
{
  GEN_ENTER(0x1074910u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5be8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5be8), REFG(float, 0x1347aec));
  return;
}

/* ref: FUN_01074930 */
GEN_LIB GEN_NOFRAME unsigned int F_01074930(void)
{
  GEN_ENTER(0x1074930u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bec) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bec), REFG(float, 0x1347b1c));
  return;
}

/* ref: FUN_01074950 */
GEN_LIB GEN_NOFRAME unsigned int F_01074950(void)
{
  GEN_ENTER(0x1074950u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bf8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bf8), REFG(float, 0x13497f0));
  return;
}

/* ref: FUN_01074970 */
GEN_LIB GEN_NOFRAME unsigned int F_01074970(void)
{
  GEN_ENTER(0x1074970u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5bfc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5bfc), REFG(float, 0x1349820));
  return;
}

/* ref: FUN_01074990 */
GEN_LIB GEN_NOFRAME unsigned int F_01074990(void)
{
  GEN_ENTER(0x1074990u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5c00) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5c00), REFG(float, 0x13499e0));
  return;
}

/* ref: FUN_010749b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010749b0(void)
{
  GEN_ENTER(0x10749b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5c04) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5c04), REFG(float, 0x1349a10));
  return;
}

/* ref: FUN_010749d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010749d0(void)
{
  GEN_ENTER(0x10749d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5c08) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5c08), REFG(float, 0x1349bc4));
  return;
}

/* ref: FUN_010749f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010749f0(void)
{
  GEN_ENTER(0x10749f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5c0c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5c0c), REFG(float, 0x1349bf4));
  return;
}

/* ref: FUN_01074a10 */
GEN_LIB GEN_NOFRAME unsigned int F_01074a10(void)
{
  GEN_ENTER(0x1074a10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5c10) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5c10), REFG(float, 0x1349cdc));
  return;
}

/* ref: FUN_01074a30 */
GEN_LIB GEN_NOFRAME unsigned int F_01074a30(void)
{
  GEN_ENTER(0x1074a30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5c14) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5c14), REFG(float, 0x1349d0c));
  return;
}

/* ref: FUN_01074a50 */
GEN_LIB GEN_NOFRAME unsigned int F_01074a50(void)
{
  GEN_ENTER(0x1074a50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5c18) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5c18), REFG(float, 0x1349e58));
  return;
}

/* ref: FUN_01074a70 */
GEN_LIB GEN_NOFRAME unsigned int F_01074a70(void)
{
  GEN_ENTER(0x1074a70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5c1c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5c1c), REFG(float, 0x1349e88));
  return;
}

/* ref: FUN_01074a90 */
GEN_LIB GEN_NOFRAME unsigned int F_01074a90(void)
{
  GEN_ENTER(0x1074a90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5c20) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5c20), REFG(float, 0x134a190));
  return;
}

/* ref: FUN_01074ab0 */
GEN_LIB GEN_NOFRAME unsigned int F_01074ab0(void)
{
  GEN_ENTER(0x1074ab0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5c24) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5c24), REFG(float, 0x134a1c0));
  return;
}

/* ref: FUN_01074ad0 */
GEN_LIB GEN_NOFRAME uint F_01074ad0(void)
{
  GEN_ENTER(0x1074ad0u, 0u, 0u, 0u, 0u);
  short sVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = (short)REFG(undefined4, 0x134a8d8) + *(short *)&REFG(undefined, 0x159249c);
  sVar3 = (short)((uint)REFG(undefined4, 0x134a8d8) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x159249c) = CONCAT22(sVar1,*(short *)&REFG(undefined, 0x159249c));
  sVar1 = (short)REFG(undefined4, 0x134a8dc) + sVar3;
  sVar4 = (short)((uint)REFG(undefined4, 0x134a8dc) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x15924a0) = CONCAT22(sVar1,sVar3);
  sVar1 = (short)REFG(undefined4, 0x134a8e0) + sVar4;
  sVar3 = (short)((uint)REFG(undefined4, 0x134a8e0) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x15924a4) = CONCAT22(sVar1,sVar4);
  *(int *)&REFG(undefined, 0x15924a8) = CONCAT22(*(undefined2 *)&REFG(undefined, 0x15924aa),sVar3);
  uVar2 = REFG(int, 0x134a8e4) + *(int *)&REFG(undefined, 0x15924a8);
  *(int *)&REFG(undefined, 0x15924a8) = CONCAT22((short)uVar2,sVar3);
  return uVar2;
}

/* ref: FUN_01074b50 */
GEN_LIB GEN_NOFRAME unsigned int F_01074b50(void)
{
  GEN_ENTER(0x1074b50u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x1592498) = REFG(float, 0x134a8d4) * REFG(float, 0x134a8d4);
  return;
}

/* ref: FUN_01074b6c */
GEN_LIB GEN_NOFRAME uint F_01074b6c(void)
{
  GEN_ENTER(0x1074b6cu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00c45afd((undefined *)&REFG(undefined, 0x15d6778) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c95a)));
  return uVar1;
}

/* ref: FUN_01074b82 */
GEN_LIB GEN_NOFRAME uint F_01074b82(void)
{
  GEN_ENTER(0x1074b82u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c96e)));
  return uVar1;
}

/* ref: FUN_01074b8e */
GEN_LIB GEN_NOFRAME uint F_01074b8e(void)
{
  GEN_ENTER(0x1074b8eu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c964)));
  return uVar1;
}

/* ref: FUN_01074b9a */
GEN_LIB GEN_NOFRAME uint F_01074b9a(void)
{
  GEN_ENTER(0x1074b9au, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c978)));
  return uVar1;
}

/* ref: FUN_01074ba6 */
GEN_LIB GEN_NOFRAME uint F_01074ba6(void)
{
  GEN_ENTER(0x1074ba6u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c983)));
  return uVar1;
}

/* ref: FUN_01074bb2 */
GEN_LIB GEN_NOFRAME uint F_01074bb2(void)
{
  GEN_ENTER(0x1074bb2u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c98e)));
  return uVar1;
}

/* ref: FUN_01074bbe */
GEN_LIB GEN_NOFRAME uint F_01074bbe(void)
{
  GEN_ENTER(0x1074bbeu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00c45afd((undefined *)&REFG(undefined4, 0x15d6828) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c999)));
  return uVar1;
}

/* ref: FUN_01074bd4 */
GEN_LIB GEN_NOFRAME uint F_01074bd4(void)
{
  GEN_ENTER(0x1074bd4u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c9a3)));
  return uVar1;
}

/* ref: FUN_01074be0 */
GEN_LIB GEN_NOFRAME uint F_01074be0(void)
{
  GEN_ENTER(0x1074be0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c9b0)));
  return uVar1;
}

/* ref: FUN_01074bf0 */
GEN_LIB GEN_NOFRAME uint F_01074bf0(void)
{
  GEN_ENTER(0x1074bf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  REFG(undefined1, 0x15d8698) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107ca30)));
  return uVar1;
}

/* ref: FUN_01074c10 */
GEN_LIB GEN_NOFRAME uint F_01074c10(void)
{
  GEN_ENTER(0x1074c10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  REFG(undefined1, 0x15d86b4) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107ca10)));
  return uVar1;
}

/* ref: FUN_01074c30 */
GEN_LIB GEN_NOFRAME uint F_01074c30(void)
{
  GEN_ENTER(0x1074c30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00cccb10(&REFG(undefined, 0x15d8644) GEN_EDX_ARG,(float)(float10)1);
  uVar1 = F_00c47de6(((code *)REFP(0x107ca20)));
  return uVar1;
}

/* ref: FUN_01074c50 */
GEN_LIB GEN_NOFRAME uint F_01074c50(void)
{
  GEN_ENTER(0x1074c50u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d871c));
  REFG(undefined1, 0x15d8734) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107cac0)));
  return uVar1;
}

/* ref: FUN_01074c70 */
GEN_LIB GEN_NOFRAME unsigned int F_01074c70(void)
{
  GEN_ENTER(0x1074c70u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x3f;
  puVar1 = &REFG(undefined4, 0x15d8778);
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return 0;
}

/* ref: FUN_01074ca0 */
GEN_LIB GEN_NOFRAME uint F_01074ca0(void)
{
  GEN_ENTER(0x1074ca0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8b88));
  REFG(undefined1, 0x15d8ba0) = 1;
  *(undefined4 *)&REFG(undefined, 0x15d8b74) = 0;
  *(undefined4 *)&REFG(undefined, 0x15d8b70) = 0;
  *(undefined4 *)&REFG(undefined, 0x15d8b7c) = 0;
  *(undefined4 *)&REFG(undefined, 0x15d8b78) = 0;
  uVar1 = F_00c47de6(((code *)REFP(0x107cb20)));
  return uVar1;
}

/* ref: FUN_01074ce0 */
GEN_LIB GEN_NOFRAME uint F_01074ce0(void)
{
  GEN_ENTER(0x1074ce0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
  REFG(undefined1, 0x15d8700) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107ca90)));
  return uVar1;
}

/* ref: FUN_01074d00 */
GEN_LIB GEN_NOFRAME uint F_01074d00(void)
{
  GEN_ENTER(0x1074d00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  REFG(undefined1, 0x15d8750) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107caa0)));
  return uVar1;
}

/* ref: FUN_01074d20 */
GEN_LIB GEN_NOFRAME uint F_01074d20(void)
{
  GEN_ENTER(0x1074d20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  REFG(undefined1, 0x15d876c) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107cab0)));
  return uVar1;
}

/* ref: FUN_01074d40 */
GEN_LIB GEN_NOFRAME uint F_01074d40(void)
{
  GEN_ENTER(0x1074d40u, 0u, 0u, 0u, 0u);
  REFG(int, 0x15d8be0) = (REFG(undefined4, 0x134c7ec) / 100) * 100;
  return REFG(undefined4, 0x134c7ec) * 0x51eb851f;
}

/* ref: FUN_01074d60 */
GEN_LIB GEN_NOFRAME uint F_01074d60(void)
{
  GEN_ENTER(0x1074d60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8be8));
  REFG(undefined1, 0x15d8c00) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107cb80)));
  return uVar1;
}

/* ref: FUN_01074d80 */
GEN_LIB GEN_NOFRAME uint F_01074d80(void)
{
  GEN_ENTER(0x1074d80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  REFG(undefined1, 0x15d8c28) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107cb90)));
  return uVar1;
}

/* ref: FUN_01074da0 */
GEN_LIB GEN_NOFRAME uint F_01074da0(void)
{
  GEN_ENTER(0x1074da0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
  REFG(undefined1, 0x15d8ca0) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107cbd0)));
  return uVar1;
}

/* ref: FUN_01074dc0 */
GEN_LIB GEN_NOFRAME uint F_01074dc0(void)
{
  GEN_ENTER(0x1074dc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00cccb10(&REFG(undefined, 0x15d8cb0) GEN_EDX_ARG,(float)(float10)0);
  uVar1 = F_00c47de6(((code *)REFP(0x107cbc0)));
  return uVar1;
}

/* ref: FUN_01074de0 */
GEN_LIB GEN_NOFRAME uint F_01074de0(void)
{
  GEN_ENTER(0x1074de0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00cccb10(&REFG(undefined, 0x15d8c48) GEN_EDX_ARG,(float)(float10)0);
  uVar1 = F_00c47de6(((code *)REFP(0x107cba0)));
  return uVar1;
}

/* ref: FUN_01074e00 */
GEN_LIB GEN_NOFRAME uint F_01074e00(void)
{
  GEN_ENTER(0x1074e00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  REFG(undefined1, 0x15d8cf0) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107cbb0)));
  return uVar1;
}

/* ref: FUN_01074e20 */
GEN_LIB GEN_NOFRAME uint F_01074e20(void)
{
  GEN_ENTER(0x1074e20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00c47de6(((code *)REFP(0x107cc30)));
  return uVar1;
}

/* ref: FUN_01074e40 */
GEN_LIB GEN_NOFRAME unsigned int F_01074e40(void)
{
  GEN_ENTER(0x1074e40u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d93b4) GEN_EDX_ARG,((char *)REFP(0x1134b40)),&REFG(undefined, 0x15da420),0x44,0,0,0,0,
               &REFG(undefined * PTR32, 0x1134ab8),5,0,0,0,1);
  return;
}

/* ref: FUN_01074e70 */
GEN_LIB GEN_NOFRAME uint F_01074e70(void)
{
  GEN_ENTER(0x1074e70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d30380();
  *(char * PTR32 *)&REFG(undefined, 0x15d93e4) = ((char *)REFP(0x1134b40));
  *(char * PTR32 *)&REFG(undefined, 0x15d93e8) = ((char *)REFP(0x1134b58));
  *(gen_code32 *)&REFG(undefined, 0x15d93ec) = ((code *)REFP(0xd30360));
  *(gen_code32 *)&REFG(undefined, 0x15d93f0) = ((code *)REFP(0xd30350));
  *(uint *)&REFG(undefined, 0x15d93f4) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d93f8) = 0x44;
  return uVar1;
}

/* ref: FUN_01074eb0 */
GEN_LIB GEN_NOFRAME unsigned int F_01074eb0(void)
{
  GEN_ENTER(0x1074eb0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d93fc) GEN_EDX_ARG,((char *)REFP(0x1134c10)),&REFG(undefined, 0x15da420),0x80,0,0,
               &REFG(undefined * PTR32, 0x1134bd4),1,&REFG(undefined * PTR32, 0x1134be8),1,0,0,0,0);
  return;
}

/* ref: FUN_01074ef0 */
GEN_LIB GEN_NOFRAME uint F_01074ef0(void)
{
  GEN_ENTER(0x1074ef0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d313e0();
  *(char * PTR32 *)&REFG(undefined, 0x15d942c) = ((char *)REFP(0x1134c10));
  *(char * PTR32 *)&REFG(undefined, 0x15d9430) = ((char *)REFP(0x1134c24));
  *(gen_code32 *)&REFG(undefined, 0x15d9434) = ((code *)REFP(0xd313b0));
  *(gen_code32 *)&REFG(undefined, 0x15d9438) = ((code *)REFP(0xd313d0));
  *(uint *)&REFG(undefined, 0x15d943c) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9440) = 0x80;
  return uVar1;
}

/* ref: FUN_01074f30 */
GEN_LIB GEN_NOFRAME uint F_01074f30(void)
{
  GEN_ENTER(0x1074f30u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x1350788) = REFG(undefined * PTR32, 0x1350778);
  return (uint)REFG(undefined * PTR32, 0x1350778);
}

/* ref: FUN_01074f40 */
GEN_LIB GEN_NOFRAME unsigned int F_01074f40(void)
{
  GEN_ENTER(0x1074f40u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9444) GEN_EDX_ARG,((char *)REFP(0x1134fac)),&REFG(undefined, 0x15da420),0x28,0,0,&REFG(undefined * PTR32, 0x1134f3c),1,
               &REFG(undefined * PTR32, 0x1350780),6,0,0,0,3);
  return;
}

/* ref: FUN_01074f80 */
GEN_LIB GEN_NOFRAME unsigned int F_01074f80(void)
{
  GEN_ENTER(0x1074f80u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9474) GEN_EDX_ARG,((char *)REFP(0x1134fbc)),&REFG(undefined, 0x15da420),8,0,0,0,0,0,0,0,0,0,0);
  return;
}

/* ref: FUN_01074fb0 */
GEN_LIB GEN_NOFRAME uint F_01074fb0(void)
{
  GEN_ENTER(0x1074fb0u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x1350910) = REFG(undefined * PTR32, 0x1350810);
  *(undefined * PTR32 *)&REFG(undefined, 0x1350928) = REFG(undefined * PTR32, 0x1350814);
  *(undefined * PTR32 *)&REFG(undefined, 0x1350940) = REFG(undefined * PTR32, 0x1350814);
  *(undefined * PTR32 *)&REFG(undefined, 0x1350958) = REFG(undefined * PTR32, 0x1350814);
  return (uint)REFG(undefined * PTR32, 0x1350814);
}

/* ref: FUN_01074fd0 */
GEN_LIB GEN_NOFRAME unsigned int F_01074fd0(void)
{
  GEN_ENTER(0x1074fd0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d94a4) GEN_EDX_ARG,((char *)REFP(0x11354b4)),0,0x1c,0,0,
               &REFG(undefined * PTR32, 0x1135238),2,&REFG(undefined * PTR32, 0x1350848),0xc,0,0,0,0)
  ;
  return;
}

/* ref: FUN_01075000 */
GEN_LIB GEN_NOFRAME unsigned int F_01075000(void)
{
  GEN_ENTER(0x1075000u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d94d4) GEN_EDX_ARG,((char *)REFP(0x1135520)),0,4,0,0,0,0,
               &REFG(undefined * PTR32, 0x1135260),2,0,0,0,0);
  return;
}

/* ref: FUN_01075030 */
GEN_LIB GEN_NOFRAME unsigned int F_01075030(void)
{
  GEN_ENTER(0x1075030u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9504) GEN_EDX_ARG,((char *)REFP(0x1135594)),&REFG(undefined, 0x15d9444),0x84,0,0,0,0,
               &REFG(undefined * PTR32, 0x1135290),0xd,0,0,0,0);
  return;
}

/* ref: FUN_01075070 */
GEN_LIB GEN_NOFRAME uint F_01075070(void)
{
  GEN_ENTER(0x1075070u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d3dd60();
  *(char * PTR32 *)&REFG(undefined, 0x15d9534) = ((char *)REFP(0x1135594));
  *(char * PTR32 *)&REFG(undefined, 0x15d9538) = ((char *)REFP(0x11355b4));
  *(gen_code32 *)&REFG(undefined, 0x15d953c) = ((code *)REFP(0xd3dd40));
  *(gen_code32 *)&REFG(undefined, 0x15d9540) = ((code *)REFP(0xd3dd30));
  *(uint *)&REFG(undefined, 0x15d9544) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9548) = 0x84;
  return uVar1;
}

/* ref: FUN_010750b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010750b0(void)
{
  GEN_ENTER(0x10750b0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d954c) GEN_EDX_ARG,((char *)REFP(0x1135828)),0,0x40,0,0,0,0,
               &REFG(undefined * PTR32, 0x1135730),3,0,0,0,0);
  return;
}

/* ref: FUN_010750e0 */
GEN_LIB GEN_NOFRAME unsigned int F_010750e0(void)
{
  GEN_ENTER(0x10750e0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d957c) GEN_EDX_ARG,((char *)REFP(0x1135874)),0,0x70,0,0,0,0,
               &REFG(undefined * PTR32, 0x1135778),6,0,0,0,0);
  return;
}

/* ref: FUN_01075110 */
GEN_LIB GEN_NOFRAME uint F_01075110(void)
{
  GEN_ENTER(0x1075110u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x1350ab0) = REFG(undefined * PTR32, 0x13509b0);
  return (uint)REFG(undefined * PTR32, 0x13509b0);
}

/* ref: FUN_01075120 */
GEN_LIB GEN_NOFRAME unsigned int F_01075120(void)
{
  GEN_ENTER(0x1075120u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d95ac) GEN_EDX_ARG,((char *)REFP(0x11358c0)),0,0x70,0,0,&REFG(undefined * PTR32, 0x1135718),1,
               &REFG(undefined * PTR32, 0x1350a00),8,&REFG(undefined, 0x1135808),0,0,1);
  return;
}

/* ref: FUN_01075160 */
GEN_LIB GEN_NOFRAME unsigned int F_01075160(void)
{
  GEN_ENTER(0x1075160u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d95dc) GEN_EDX_ARG,((char *)REFP(0x1135a48)),0,8,0,0,0,0,&REFG(undefined * PTR32, 0x1135960),2,
               0,0,0,0);
  return;
}

/* ref: FUN_01075190 */
GEN_LIB GEN_NOFRAME unsigned int F_01075190(void)
{
  GEN_ENTER(0x1075190u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d960c) GEN_EDX_ARG,((char *)REFP(0x1135a84)),&REFG(undefined, 0x15da420),0x54,0,0,0,0,&REFG(undefined * PTR32, 0x1135990),7,0,0,0,3);
  return;
}

/* ref: FUN_010751c0 */
GEN_LIB GEN_NOFRAME uint F_010751c0(void)
{
  GEN_ENTER(0x10751c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d3ea20();
  *(char * PTR32 *)&REFG(undefined, 0x15d963c) = ((char *)REFP(0x1135a84));
  *(char * PTR32 *)&REFG(undefined, 0x15d9640) = ((char *)REFP(0x1135a90));
  *(gen_code32 *)&REFG(undefined, 0x15d9644) = ((code *)REFP(0xd3ea00));
  *(gen_code32 *)&REFG(undefined, 0x15d9648) = ((code *)REFP(0xd3e9c0));
  *(uint *)&REFG(undefined, 0x15d964c) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9650) = 0x54;
  return uVar1;
}

/* ref: FUN_01075200 */
GEN_LIB GEN_NOFRAME unsigned int F_01075200(void)
{
  GEN_ENTER(0x1075200u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9654) GEN_EDX_ARG,((char *)REFP(0x1135ba8)),0,0x10,0,0,0,0,
               &REFG(undefined * PTR32, 0x1135ab0),4,0,0,0,0);
  return;
}

/* ref: FUN_01075230 */
GEN_LIB GEN_NOFRAME unsigned int F_01075230(void)
{
  GEN_ENTER(0x1075230u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9684) GEN_EDX_ARG,((char *)REFP(0x1135c04)),&REFG(undefined, 0x15d9444),0x3c,0,0,0,0,&REFG(undefined * PTR32, 0x1135b10),3,
               0,0,0,0);
  return;
}

/* ref: FUN_01075260 */
GEN_LIB GEN_NOFRAME uint F_01075260(void)
{
  GEN_ENTER(0x1075260u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d3f510();
  *(char * PTR32 *)&REFG(undefined, 0x15d96b4) = ((char *)REFP(0x1135c04));
  *(char * PTR32 *)&REFG(undefined, 0x15d96b8) = ((char *)REFP(0x1135c1c));
  *(gen_code32 *)&REFG(undefined, 0x15d96bc) = ((code *)REFP(0xd3f4f0));
  *(gen_code32 *)&REFG(undefined, 0x15d96c0) = ((code *)REFP(0xd3f4e0));
  *(uint *)&REFG(undefined, 0x15d96c4) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d96c8) = 0x3c;
  return uVar1;
}

/* ref: FUN_010752a0 */
GEN_LIB GEN_NOFRAME unsigned int F_010752a0(void)
{
  GEN_ENTER(0x10752a0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d96cc) GEN_EDX_ARG,((char *)REFP(0x11361f0)),0,0x20,0,0,0,0
               ,&REFG(undefined * PTR32, 0x1136028),8,0,0,0,0);
  return;
}

/* ref: FUN_010752d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010752d0(void)
{
  GEN_ENTER(0x10752d0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d96fc) GEN_EDX_ARG,((char *)REFP(0x1136264)),&REFG(undefined, 0x15d9444),0x94,0,0,
               &REFG(undefined * PTR32, 0x1135fe8),3,&REFG(undefined * PTR32, 0x11360e8),0xb,0,0,0,1);
  return;
}

/* ref: FUN_01075310 */
GEN_LIB GEN_NOFRAME uint F_01075310(void)
{
  GEN_ENTER(0x1075310u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d3f620();
  *(char * PTR32 *)&REFG(undefined, 0x15d972c) = ((char *)REFP(0x1136264));
  *(char * PTR32 *)&REFG(undefined, 0x15d9730) = ((char *)REFP(0x1136288));
  *(gen_code32 *)&REFG(undefined, 0x15d9734) = ((code *)REFP(0xd3f5f0));
  *(gen_code32 *)&REFG(undefined, 0x15d9738) = ((code *)REFP(0xd3f610));
  *(uint *)&REFG(undefined, 0x15d973c) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9740) = 0x94;
  return uVar1;
}

/* ref: FUN_01075350 */
GEN_LIB GEN_NOFRAME unsigned int F_01075350(void)
{
  GEN_ENTER(0x1075350u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9744) GEN_EDX_ARG,((char *)REFP(0x11363a0)),0,0xc,0,0,0,0,&REFG(undefined * PTR32, 0x11362f8),1,0,0,0,0
              );
  return;
}

/* ref: FUN_01075380 */
GEN_LIB GEN_NOFRAME unsigned int F_01075380(void)
{
  GEN_ENTER(0x1075380u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9774) GEN_EDX_ARG,((char *)REFP(0x11363d4)),&REFG(undefined, 0x15da420),0x30,0,0,0,0,&REFG(undefined * PTR32, 0x1136310),6,0,0,0,3
              );
  return;
}

/* ref: FUN_010753b0 */
GEN_LIB GEN_NOFRAME uint F_010753b0(void)
{
  GEN_ENTER(0x10753b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d3f6d0();
  *(char * PTR32 *)&REFG(undefined, 0x15d97a4) = ((char *)REFP(0x11363d4));
  *(char * PTR32 *)&REFG(undefined, 0x15d97a8) = ((char *)REFP(0x11363e4));
  *(gen_code32 *)&REFG(undefined, 0x15d97ac) = ((code *)REFP(0xd3f6a0));
  *(gen_code32 *)&REFG(undefined, 0x15d97b0) = ((code *)REFP(0xd3f6c0));
  *(uint *)&REFG(undefined, 0x15d97b4) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d97b8) = 0x30;
  return uVar1;
}

/* ref: FUN_010753f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010753f0(void)
{
  GEN_ENTER(0x10753f0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d97bc) GEN_EDX_ARG,((char *)REFP(0x1136434)),0,8,0,0,0,0,&REFG(undefined * PTR32, 0x1136404),2,0,0,0,0);
  return;
}

/* ref: FUN_01075420 */
GEN_LIB GEN_NOFRAME unsigned int F_01075420(void)
{
  GEN_ENTER(0x1075420u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d97ec) GEN_EDX_ARG,((char *)REFP(0x11364c8)),0,8,0,0,0,0,&REFG(undefined * PTR32, 0x1136468),2,0,0,0,0)
  ;
  return;
}

/* ref: FUN_01075450 */
GEN_LIB GEN_NOFRAME unsigned int F_01075450(void)
{
  GEN_ENTER(0x1075450u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d981c) GEN_EDX_ARG,((char *)REFP(0x1136508)),0,0x10,0,0,0,0,&REFG(undefined * PTR32, 0x1136498),2,0,0,0,0
              );
  return;
}

/* ref: FUN_01075480 */
GEN_LIB GEN_NOFRAME unsigned int F_01075480(void)
{
  GEN_ENTER(0x1075480u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d984c) GEN_EDX_ARG,((char *)REFP(0x11365c8)),&REFG(undefined, 0x15d9444),0x40,0,0,0,0,
               &REFG(undefined * PTR32, 0x1136544),2,0,0,0,0);
  return;
}

/* ref: FUN_010754b0 */
GEN_LIB GEN_NOFRAME uint F_010754b0(void)
{
  GEN_ENTER(0x10754b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d3fa00();
  *(char * PTR32 *)&REFG(undefined, 0x15d987c) = ((char *)REFP(0x11365c8));
  *(char * PTR32 *)&REFG(undefined, 0x15d9880) = ((char *)REFP(0x11365ec));
  *(gen_code32 *)&REFG(undefined, 0x15d9884) = ((code *)REFP(0xd3f9e0));
  *(gen_code32 *)&REFG(undefined, 0x15d9888) = ((code *)REFP(0xd3f9d0));
  *(uint *)&REFG(undefined, 0x15d988c) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9890) = 0x40;
  return uVar1;
}

/* ref: FUN_010754f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010754f0(void)
{
  GEN_ENTER(0x10754f0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9894) GEN_EDX_ARG,((char *)REFP(0x1136818)),&REFG(undefined, 0x15da420),0x98,0,0,0,0,&REFG(undefined * PTR32, 0x11366a0),
               0xe,0,0,0,1);
  return;
}

/* ref: FUN_01075530 */
GEN_LIB GEN_NOFRAME uint F_01075530(void)
{
  GEN_ENTER(0x1075530u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d3fb70();
  *(char * PTR32 *)&REFG(undefined, 0x15d98c4) = ((char *)REFP(0x1136818));
  *(char * PTR32 *)&REFG(undefined, 0x15d98c8) = ((char *)REFP(0x1136830));
  *(gen_code32 *)&REFG(undefined, 0x15d98cc) = ((code *)REFP(0xd3fb40));
  *(gen_code32 *)&REFG(undefined, 0x15d98d0) = ((code *)REFP(0xd3fb60));
  *(uint *)&REFG(undefined, 0x15d98d4) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d98d8) = 0x98;
  return uVar1;
}

/* ref: FUN_01075570 */
GEN_LIB GEN_NOFRAME unsigned int F_01075570(void)
{
  GEN_ENTER(0x1075570u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d98dc) GEN_EDX_ARG,((char *)REFP(0x113684c)),&REFG(undefined, 0x15da420),0x14,0,0,0,0,
               &REFG(undefined * PTR32, 0x11367f0),1,0,0,0,1);
  return;
}

/* ref: FUN_010755a0 */
GEN_LIB GEN_NOFRAME uint F_010755a0(void)
{
  GEN_ENTER(0x10755a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d3fbf0();
  *(char * PTR32 *)&REFG(undefined, 0x15d990c) = ((char *)REFP(0x113684c));
  *(char * PTR32 *)&REFG(undefined, 0x15d9910) = ((char *)REFP(0x1136870));
  *(gen_code32 *)&REFG(undefined, 0x15d9914) = ((code *)REFP(0xd3fbd0));
  *(gen_code32 *)&REFG(undefined, 0x15d9918) = ((code *)REFP(0xd3fbc0));
  *(uint *)&REFG(undefined, 0x15d991c) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9920) = 0x14;
  return uVar1;
}

/* ref: FUN_010755e0 */
GEN_LIB GEN_NOFRAME unsigned int F_010755e0(void)
{
  GEN_ENTER(0x10755e0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9924) GEN_EDX_ARG,((char *)REFP(0x1136950)),&REFG(undefined, 0x15d9474),0x40,0,0,0,0,
               &REFG(undefined * PTR32, 0x11368b8),4,0,0,0,0);
  return;
}

/* ref: FUN_01075610 */
GEN_LIB GEN_NOFRAME uint F_01075610(void)
{
  GEN_ENTER(0x1075610u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d3ff80();
  *(char * PTR32 *)&REFG(undefined, 0x15d9954) = ((char *)REFP(0x1136950));
  *(char * PTR32 *)&REFG(undefined, 0x15d9958) = ((char *)REFP(0x1136974));
  *(gen_code32 *)&REFG(undefined, 0x15d995c) = ((code *)REFP(0xd3ff60));
  *(gen_code32 *)&REFG(undefined, 0x15d9960) = ((code *)REFP(0xd3ff50));
  *(uint *)&REFG(undefined, 0x15d9964) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9968) = 0x40;
  return uVar1;
}

/* ref: FUN_01075650 */
GEN_LIB GEN_NOFRAME unsigned int F_01075650(void)
{
  GEN_ENTER(0x1075650u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d996c) GEN_EDX_ARG,((char *)REFP(0x1136a40)),&REFG(undefined, 0x15da420),0x60,0,0,0,0,
               &REFG(undefined * PTR32, 0x11369b8),5,0,0,0,2);
  return;
}

/* ref: FUN_01075680 */
GEN_LIB GEN_NOFRAME uint F_01075680(void)
{
  GEN_ENTER(0x1075680u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d402c0();
  *(char * PTR32 *)&REFG(undefined, 0x15d999c) = ((char *)REFP(0x1136a40));
  *(char * PTR32 *)&REFG(undefined, 0x15d99a0) = ((char *)REFP(0x1136a54));
  *(gen_code32 *)&REFG(undefined, 0x15d99a4) = ((code *)REFP(0xd40290));
  *(gen_code32 *)&REFG(undefined, 0x15d99a8) = ((code *)REFP(0xd40280));
  *(uint *)&REFG(undefined, 0x15d99ac) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d99b0) = 0x60;
  return uVar1;
}

/* ref: FUN_010756c0 */
GEN_LIB GEN_NOFRAME unsigned int F_010756c0(void)
{
  GEN_ENTER(0x10756c0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d99b4) GEN_EDX_ARG,((char *)REFP(0x1136aa0)),&REFG(undefined, 0x15da420),0x14,0,0,0,0,
               &REFG(undefined * PTR32, 0x1136a78),1,0,0,0,1);
  return;
}

/* ref: FUN_010756f0 */
GEN_LIB GEN_NOFRAME uint F_010756f0(void)
{
  GEN_ENTER(0x10756f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d404a0();
  *(char * PTR32 *)&REFG(undefined, 0x15d99e4) = ((char *)REFP(0x1136aa0));
  *(char * PTR32 *)&REFG(undefined, 0x15d99e8) = ((char *)REFP(0x1136ac4));
  *(gen_code32 *)&REFG(undefined, 0x15d99ec) = ((code *)REFP(0xd40480));
  *(gen_code32 *)&REFG(undefined, 0x15d99f0) = ((code *)REFP(0xd40470));
  *(uint *)&REFG(undefined, 0x15d99f4) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d99f8) = 0x14;
  return uVar1;
}

/* ref: FUN_01075730 */
GEN_LIB GEN_NOFRAME uint F_01075730(void)
{
  GEN_ENTER(0x1075730u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x1350d30) = REFG(undefined * PTR32, 0x1350cc0);
  return (uint)REFG(undefined * PTR32, 0x1350cc0);
}

/* ref: FUN_01075740 */
GEN_LIB GEN_NOFRAME unsigned int F_01075740(void)
{
  GEN_ENTER(0x1075740u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d99fc) GEN_EDX_ARG,((char *)REFP(0x1136ba8)),&REFG(undefined, 0x15da420),0x2c,0,0,&REFG(undefined * PTR32, 0x1136b6c),
               1,&REFG(undefined * PTR32, 0x1350cc8),5,&REFG(undefined, 0x1136b80),0,0,1);
  return;
}

/* ref: FUN_01075780 */
GEN_LIB GEN_NOFRAME uint F_01075780(void)
{
  GEN_ENTER(0x1075780u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d40580();
  *(char * PTR32 *)&REFG(undefined, 0x15d9a2c) = ((char *)REFP(0x1136ba8));
  *(char * PTR32 *)&REFG(undefined, 0x15d9a30) = ((char *)REFP(0x1136bbc));
  *(gen_code32 *)&REFG(undefined, 0x15d9a34) = ((code *)REFP(0xd40560));
  *(gen_code32 *)&REFG(undefined, 0x15d9a38) = ((code *)REFP(0xd40550));
  *(uint *)&REFG(undefined, 0x15d9a3c) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9a40) = 0x2c;
  return uVar1;
}

/* ref: FUN_010757c0 */
GEN_LIB GEN_NOFRAME uint F_010757c0(void)
{
  GEN_ENTER(0x10757c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d91860();
  *(uint *)&REFG(undefined, 0x13515f0) = uVar1;
  return uVar1;
}

/* ref: FUN_010757d0 */
GEN_LIB GEN_NOFRAME uint F_010757d0(void)
{
  GEN_ENTER(0x10757d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = (uint)REFG(undefined * PTR32 * PTR32, 0x15dff80);
  *(uint *)&REFG(undefined, 0x1351600) = (uint)REFG(undefined * PTR32 * PTR32, 0x15dff80);
  REFG(undefined * PTR32 * PTR32, 0x15dff80) = &REFG(undefined * PTR32, 0x13515f8);
  return uVar1;
}

/* ref: FUN_010757f0 */
GEN_LIB GEN_NOFRAME uint F_010757f0(void)
{
  GEN_ENTER(0x10757f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107cc40)));
  return uVar1;
}

/* ref: FUN_01075800 */
GEN_LIB GEN_NOFRAME uint F_01075800(void)
{
  GEN_ENTER(0x1075800u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107cc50)));
  return uVar1;
}

/* ref: FUN_01075810 */
GEN_LIB GEN_NOFRAME uint F_01075810(void)
{
  GEN_ENTER(0x1075810u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107cc60)));
  return uVar1;
}

/* ref: FUN_01075820 */
GEN_LIB GEN_NOFRAME uint F_01075820(void)
{
  GEN_ENTER(0x1075820u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x15d9a88) = gen_imp_TlsAlloc();
  uVar1 = F_00c47de6(((code *)REFP(0x107cc70)));
  return uVar1;
}

/* ref: FUN_01075840 */
GEN_LIB GEN_NOFRAME uint F_01075840(void)
{
  GEN_ENTER(0x1075840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x15d9a8c) = gen_imp_TlsAlloc();
  uVar1 = F_00c47de6(((code *)REFP(0x107cc80)));
  return uVar1;
}

/* ref: FUN_01075860 */
GEN_LIB GEN_NOFRAME unsigned int F_01075860(void)
{
  GEN_ENTER(0x1075860u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9a90) GEN_EDX_ARG,((char *)REFP(0x1139290)),&REFG(undefined, 0x15da420),8,0,0,0,0,0,0,0,0,0,0);
  return;
}

/* ref: FUN_01075890 */
GEN_LIB GEN_NOFRAME unsigned int F_01075890(void)
{
  GEN_ENTER(0x1075890u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9ac0) GEN_EDX_ARG,((char *)REFP(0x11392a0)),&REFG(undefined, 0x15da420),0xc,0,0,0,0,&REFG(undefined * PTR32, 0x1139170),1,0,0,0
               ,0);
  return;
}

/* ref: FUN_010758c0 */
GEN_LIB GEN_NOFRAME uint F_010758c0(void)
{
  GEN_ENTER(0x10758c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d99e30();
  *(char * PTR32 *)&REFG(undefined, 0x15d9af0) = ((char *)REFP(0x11392a0));
  *(char * PTR32 *)&REFG(undefined, 0x15d9af4) = ((char *)REFP(0x11392b4));
  *(gen_code32 *)&REFG(undefined, 0x15d9af8) = ((code *)REFP(0xd99e00));
  *(gen_code32 *)&REFG(undefined, 0x15d9afc) = ((code *)REFP(0xd99e20));
  *(uint *)&REFG(undefined, 0x15d9b00) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9b04) = 0xc;
  return uVar1;
}

/* ref: FUN_01075900 */
GEN_LIB GEN_NOFRAME unsigned int F_01075900(void)
{
  GEN_ENTER(0x1075900u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9b08) GEN_EDX_ARG,((char *)REFP(0x11392c8)),&REFG(undefined, 0x15d9a90),0x70,0,0,0,0,
               &REFG(undefined * PTR32, 0x1139188),5,0,0,0,1);
  return;
}

/* ref: FUN_01075930 */
GEN_LIB GEN_NOFRAME uint F_01075930(void)
{
  GEN_ENTER(0x1075930u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d99eb0();
  *(char * PTR32 *)&REFG(undefined, 0x15d9b38) = ((char *)REFP(0x11392c8));
  *(char * PTR32 *)&REFG(undefined, 0x15d9b3c) = ((char *)REFP(0x11392dc));
  *(gen_code32 *)&REFG(undefined, 0x15d9b40) = ((code *)REFP(0xd99e90));
  *(gen_code32 *)&REFG(undefined, 0x15d9b44) = ((code *)REFP(0xd99e80));
  *(uint *)&REFG(undefined, 0x15d9b48) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9b4c) = 0x70;
  return uVar1;
}

/* ref: FUN_01075970 */
GEN_LIB GEN_NOFRAME unsigned int F_01075970(void)
{
  GEN_ENTER(0x1075970u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9b50) GEN_EDX_ARG,((char *)REFP(0x113947c)),0,0x10,0,0,0,0,&REFG(undefined * PTR32, 0x11393c8),2,
               0,0,0,0);
  return;
}

/* ref: FUN_010759a0 */
GEN_LIB GEN_NOFRAME unsigned int F_010759a0(void)
{
  GEN_ENTER(0x10759a0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9b80) GEN_EDX_ARG,((char *)REFP(0x11394c8)),0,0xc,0,0,0,0,&REFG(undefined * PTR32, 0x11393f8),1,0,0,0,0);
  return;
}

/* ref: FUN_010759d0 */
GEN_LIB GEN_NOFRAME uint F_010759d0(void)
{
  GEN_ENTER(0x10759d0u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x13518d8) = REFG(undefined * PTR32, 0x1351820);
  return (uint)REFG(undefined * PTR32, 0x1351820);
}

/* ref: FUN_010759e0 */
GEN_LIB GEN_NOFRAME unsigned int F_010759e0(void)
{
  GEN_ENTER(0x10759e0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9bb0) GEN_EDX_ARG,((char *)REFP(0x1139550)),0,0x24,0,0,
               &REFG(undefined * PTR32, 0x1139428),1,&REFG(undefined * PTR32, 0x1351888),9,0,0,0,0);
  return;
}

/* ref: FUN_01075a10 */
GEN_LIB GEN_NOFRAME uint F_01075a10(void)
{
  GEN_ENTER(0x1075a10u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x1351980) = REFG(undefined * PTR32, 0x1351e34);
  return (uint)REFG(undefined * PTR32, 0x1351e34);
}

/* ref: FUN_01075a20 */
GEN_LIB GEN_NOFRAME unsigned int F_01075a20(void)
{
  GEN_ENTER(0x1075a20u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9be0) GEN_EDX_ARG,((char *)REFP(0x1139588)),0,8,0,0,0,0,
               &REFG(undefined * PTR32, 0x1351960),2,0,0,0,0);
  return;
}

/* ref: FUN_01075a50 */
GEN_LIB GEN_NOFRAME unsigned int F_01075a50(void)
{
  GEN_ENTER(0x1075a50u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9c10) GEN_EDX_ARG,((char *)REFP(0x11395d4)),&REFG(undefined, 0x15da420),0x18,0,0,0,0,
               &REFG(undefined * PTR32, 0x113943c),2,0,0,0,0);
  return;
}

/* ref: FUN_01075a80 */
GEN_LIB GEN_NOFRAME uint F_01075a80(void)
{
  GEN_ENTER(0x1075a80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d9a360();
  *(char * PTR32 *)&REFG(undefined, 0x15d9c40) = ((char *)REFP(0x11395d4));
  *(char * PTR32 *)&REFG(undefined, 0x15d9c44) = ((char *)REFP(0x11395f0));
  *(gen_code32 *)&REFG(undefined, 0x15d9c48) = ((code *)REFP(0xd9a340));
  *(gen_code32 *)&REFG(undefined, 0x15d9c4c) = ((code *)REFP(0xd9a2c0));
  *(uint *)&REFG(undefined, 0x15d9c50) = uVar1;
  *(undefined4 *)&REFG(undefined, 0x15d9c54) = 0x18;
  return uVar1;
}

/* ref: FUN_01075ac0 */
GEN_LIB GEN_NOFRAME unsigned int F_01075ac0(void)
{
  GEN_ENTER(0x1075ac0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9c58) GEN_EDX_ARG,((char *)REFP(0x11399c8)),0,0x10,0,0,0,0,&REFG(undefined * PTR32, 0x1139778),4,0,0,0,0)
  ;
  return;
}

/* ref: FUN_01075af0 */
GEN_LIB GEN_NOFRAME unsigned int F_01075af0(void)
{
  GEN_ENTER(0x1075af0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9c88) GEN_EDX_ARG,((char *)REFP(0x11399f8)),0,0x10,0,0,0,0,&REFG(undefined * PTR32, 0x11397d8),4,0,0,0,0
              );
  return;
}

/* ref: FUN_01075b20 */
GEN_LIB GEN_NOFRAME uint F_01075b20(void)
{
  GEN_ENTER(0x1075b20u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x1351b10) = REFG(undefined * PTR32, 0x13519b8);
  return (uint)REFG(undefined * PTR32, 0x13519b8);
}

/* ref: FUN_01075b30 */
GEN_LIB GEN_NOFRAME unsigned int F_01075b30(void)
{
  GEN_ENTER(0x1075b30u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9cb8) GEN_EDX_ARG,((char *)REFP(0x1139a64)),0,0x14,0,0,&REFG(undefined * PTR32, 0x1139850),1,
               &REFG(undefined * PTR32, 0x1351af0),8,0,0,0,2);
  return;
}

/* ref: FUN_01075b60 */
GEN_LIB GEN_NOFRAME uint F_01075b60(void)
{
  GEN_ENTER(0x1075b60u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x1351be8) = REFG(undefined * PTR32, 0x13519bc);
  return (uint)REFG(undefined * PTR32, 0x13519bc);
}

/* ref: FUN_01075b70 */
GEN_LIB GEN_NOFRAME unsigned int F_01075b70(void)
{
  GEN_ENTER(0x1075b70u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9ce8) GEN_EDX_ARG,((char *)REFP(0x1139a84)),0,0xc,0,0,&REFG(undefined * PTR32, 0x1139884),1,
               &REFG(undefined * PTR32, 0x1351bb0),3,0,0,0,0);
  return;
}

/* ref: FUN_01075ba0 */
GEN_LIB GEN_NOFRAME uint F_01075ba0(void)
{
  GEN_ENTER(0x1075ba0u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x1351c00) = REFG(undefined * PTR32, 0x13519c0);
  return (uint)REFG(undefined * PTR32, 0x13519c0);
}

/* ref: FUN_01075bb0 */
GEN_LIB GEN_NOFRAME unsigned int F_01075bb0(void)
{
  GEN_ENTER(0x1075bb0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9d18) GEN_EDX_ARG,((char *)REFP(0x1139aac)),0,1,0,0,&REFG(undefined * PTR32, 0x11398a8),1,
               &REFG(undefined * PTR32, 0x1351bf8),1,0,0,0,0);
  return;
}

/* ref: FUN_01075be0 */
GEN_LIB GEN_NOFRAME uint F_01075be0(void)
{
  GEN_ENTER(0x1075be0u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x1351c18) = REFG(undefined * PTR32, 0x13519c4);
  return (uint)REFG(undefined * PTR32, 0x13519c4);
}

/* ref: FUN_01075bf0 */
GEN_LIB GEN_NOFRAME unsigned int F_01075bf0(void)
{
  GEN_ENTER(0x1075bf0u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9d48) GEN_EDX_ARG,((char *)REFP(0x1139ae4)),0,1,0,0,&REFG(undefined * PTR32, 0x11398e4),1,&REFG(undefined * PTR32, 0x1351c10),1,0,0,0
               ,0);
  return;
}

/* ref: FUN_01075c20 */
GEN_LIB GEN_NOFRAME uint F_01075c20(void)
{
  GEN_ENTER(0x1075c20u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 *)&REFG(undefined, 0x1351c30) = REFG(undefined * PTR32, 0x13519c8);
  return (uint)REFG(undefined * PTR32, 0x13519c8);
}

/* ref: FUN_01075c30 */
GEN_LIB GEN_NOFRAME unsigned int F_01075c30(void)
{
  GEN_ENTER(0x1075c30u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9d78) GEN_EDX_ARG,((char *)REFP(0x1139b08)),0,1,0,0,&REFG(undefined * PTR32, 0x1139928),1,
               &REFG(undefined * PTR32, 0x1351c28),1,0,0,0,0);
  return;
}

/* ref: FUN_01075c60 */
GEN_LIB GEN_NOFRAME unsigned int F_01075c60(void)
{
  GEN_ENTER(0x1075c60u, 0u, 0u, 0u, 0u);
  F_00d92c40(&REFG(undefined, 0x15d9da8) GEN_EDX_ARG,((char *)REFP(0x1139b38)),0,4,0,0,0,0,&REFG(undefined * PTR32, 0x113993c),1,0,0,0,0);
  return;
}

