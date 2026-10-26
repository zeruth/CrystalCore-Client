#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0091cef0 */
uint F_0091cef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91cef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x2c0,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_007ae8d0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0091cf60 */
unsigned int F_0091cf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91cf60u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0091cf80 */
uint F_0091cf80(unsigned int gen_a0)
{
  GEN_ENTER(0x91cf80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091cf90 */
uint F_0091cf90(unsigned int gen_a0)
{
  GEN_ENTER(0x91cf90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091cfa0 */
uint F_0091cfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91cfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x194,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_005903f0(this_00);
    *(byte *)((int)this_00 + 0xfb) = *(byte *)((int)this_00 + 0xfb) | 8;
    *(byte *)((int)this_00 + 0xfa) = *(byte *)((int)this_00 + 0xfa) | 0x40;
    this_00[0x48] = this_00[0x48] | 4;
    *this_00 = (*(undefined * PTR32 (*)[62])REFP(0x10d1e9c));
    this_00[0x60] = 0;
    this_00[0x61] = 0;
    this_00[0x62] = 0;
    this_00[99] = 0;
    *(undefined1 *)(this_00 + 100) = 0;
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0091d040 */
uint F_0091d040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91d040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x194,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_005903f0(this_00);
    *(byte *)((int)this_00 + 0xfb) = *(byte *)((int)this_00 + 0xfb) | 8;
    *(byte *)((int)this_00 + 0xfa) = *(byte *)((int)this_00 + 0xfa) | 0x40;
    *this_00 = (*(undefined * PTR32 (*)[62])REFP(0x10d1f9c));
    this_00[0x60] = 0;
    this_00[0x61] = 0;
    this_00[0x62] = 0;
    this_00[99] = 0;
    this_00[100] = 0;
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0091d0e0 */
uint F_0091d0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91d0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x278,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_007c7290(this_00);
    *this_00 = (*(undefined * PTR32 (*)[64])REFP(0x10d35bc));
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0091d150 */
uint F_0091d150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91d150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x278,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_007c7290(this_00);
    *this_00 = (*(undefined * PTR32 (*)[64])REFP(0x10d36c4));
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0091d1c0 */
uint F_0091d1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d1c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d1d0 */
uint F_0091d1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d1d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d1e0 */
uint F_0091d1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d1e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d1f0 */
uint F_0091d1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d1f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d200 */
uint F_0091d200(unsigned int gen_a0)
{
  GEN_ENTER(0x91d200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d210 */
uint F_0091d210(unsigned int gen_a0)
{
  GEN_ENTER(0x91d210u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d230 */
uint F_0091d230(unsigned int gen_a0)
{
  GEN_ENTER(0x91d230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d240 */
uint F_0091d240(unsigned int gen_a0)
{
  GEN_ENTER(0x91d240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d330 */
uint F_0091d330(unsigned int gen_a0)
{
  GEN_ENTER(0x91d330u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d340 */
uint F_0091d340(unsigned int gen_a0)
{
  GEN_ENTER(0x91d340u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d350 */
uint F_0091d350(unsigned int gen_a0)
{
  GEN_ENTER(0x91d350u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d360 */
uint F_0091d360(unsigned int gen_a0)
{
  GEN_ENTER(0x91d360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d370 */
uint F_0091d370(unsigned int gen_a0)
{
  GEN_ENTER(0x91d370u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d380 */
uint F_0091d380(unsigned int gen_a0)
{
  GEN_ENTER(0x91d380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d390 */
uint F_0091d390(unsigned int gen_a0)
{
  GEN_ENTER(0x91d390u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d3a0 */
uint F_0091d3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d3a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d3b0 */
uint F_0091d3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d3b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d3c0 */
uint F_0091d3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d3c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d3d0 */
uint F_0091d3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d3d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d3e0 */
uint F_0091d3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d3f0 */
uint F_0091d3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d400 */
uint F_0091d400(unsigned int gen_a0)
{
  GEN_ENTER(0x91d400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d410 */
uint F_0091d410(unsigned int gen_a0)
{
  GEN_ENTER(0x91d410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d420 */
uint F_0091d420(unsigned int gen_a0)
{
  GEN_ENTER(0x91d420u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d430 */
uint F_0091d430(unsigned int gen_a0)
{
  GEN_ENTER(0x91d430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d440 */
uint F_0091d440(unsigned int gen_a0)
{
  GEN_ENTER(0x91d440u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d450 */
uint F_0091d450(unsigned int gen_a0)
{
  GEN_ENTER(0x91d450u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d460 */
uint F_0091d460(unsigned int gen_a0)
{
  GEN_ENTER(0x91d460u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d470 */
uint F_0091d470(unsigned int gen_a0)
{
  GEN_ENTER(0x91d470u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d480 */
uint F_0091d480(unsigned int gen_a0)
{
  GEN_ENTER(0x91d480u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d490 */
uint F_0091d490(unsigned int gen_a0)
{
  GEN_ENTER(0x91d490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d4a0 */
uint F_0091d4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d4a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d4b0 */
uint F_0091d4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d4b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d4c0 */
uint F_0091d4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d4c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d4d0 */
uint F_0091d4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d4d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d4e0 */
uint F_0091d4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d4e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d500 */
uint F_0091d500(unsigned int gen_a0)
{
  GEN_ENTER(0x91d500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d510 */
uint F_0091d510(unsigned int gen_a0)
{
  GEN_ENTER(0x91d510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d520 */
uint F_0091d520(unsigned int gen_a0)
{
  GEN_ENTER(0x91d520u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d530 */
uint F_0091d530(unsigned int gen_a0)
{
  GEN_ENTER(0x91d530u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d670 */
uint F_0091d670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91d670u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0091d780 */
uint F_0091d780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91d780u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0091d850 */
uint F_0091d850(unsigned int gen_a0)
{
  GEN_ENTER(0x91d850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d860 */
uint F_0091d860(unsigned int gen_a0)
{
  GEN_ENTER(0x91d860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d8a0 */
uint F_0091d8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d8a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d8b0 */
uint F_0091d8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d8c0 */
uint F_0091d8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d8c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d8d0 */
uint F_0091d8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d8d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d8e0 */
uint F_0091d8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d8f0 */
uint F_0091d8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d8f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d900 */
uint F_0091d900(unsigned int gen_a0)
{
  GEN_ENTER(0x91d900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d930 */
uint F_0091d930(unsigned int gen_a0)
{
  GEN_ENTER(0x91d930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d940 */
uint F_0091d940(unsigned int gen_a0)
{
  GEN_ENTER(0x91d940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d950 */
uint F_0091d950(unsigned int gen_a0)
{
  GEN_ENTER(0x91d950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d960 */
uint F_0091d960(unsigned int gen_a0)
{
  GEN_ENTER(0x91d960u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d970 */
uint F_0091d970(unsigned int gen_a0)
{
  GEN_ENTER(0x91d970u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d980 */
uint F_0091d980(unsigned int gen_a0)
{
  GEN_ENTER(0x91d980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d990 */
uint F_0091d990(unsigned int gen_a0)
{
  GEN_ENTER(0x91d990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d9a0 */
uint F_0091d9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d9a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d9b0 */
uint F_0091d9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d9b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091d9c0 */
uint F_0091d9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91d9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(undefined1 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d39ec));
  return (uint)this;
}

/* ref: FUN_0091da10 */
uint F_0091da10(unsigned int gen_a0)
{
  GEN_ENTER(0x91da10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(undefined1 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d3aec));
  return (uint)this;
}

/* ref: FUN_0091da60 */
uint F_0091da60(unsigned int gen_a0)
{
  GEN_ENTER(0x91da60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[65])REFP(0x10d3bec));
  return (uint)this;
}

/* ref: FUN_0091dac0 */
uint F_0091dac0(unsigned int gen_a0)
{
  GEN_ENTER(0x91dac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0056c270((undefined *)((int)this + 0x18));
  F_0042b630((int)this + 0x80);
  return (uint)this;
}

/* ref: FUN_0091dae0 */
uint F_0091dae0(unsigned int gen_a0)
{
  GEN_ENTER(0x91dae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042c880((undefined *)((int)this + 0x80));
  uVar1 = F_00560340((undefined *)((int)this + 0x18));
  return uVar1;
}

/* ref: FUN_0091db00 */
uint F_0091db00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91db00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_0091db20 */
uint F_0091db20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91db20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  F_0042ccf0((undefined *)((int)this + 0x10),param_1 + 4);
  F_0042ccf0((undefined *)((int)this + 100),param_1 + 0x19);
  *(undefined1 *)((int)this + 0xb8) = *(undefined1 *)(param_1 + 0x2e);
  *(undefined1 *)((int)this + 0xb9) = *(undefined1 *)((int)param_1 + 0xb9);
  *(undefined4 *)((int)this + 0xbc) = param_1[0x2f];
  *(undefined4 *)((int)this + 0xc0) = param_1[0x30];
  return (uint)this;
}

/* ref: FUN_0091db90 */
uint F_0091db90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91db90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  F_0042ccf0((undefined *)((int)this + 0x28),param_1 + 10);
  *(undefined4 *)((int)this + 0x7c) = param_1[0x1f];
  F_0042ccf0((undefined *)((int)this + 0x80),param_1 + 0x20);
  return (uint)this;
}

/* ref: FUN_0091dc00 */
uint F_0091dc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91dc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  F_0042ccf0((undefined *)((int)this + 0x14),param_1 + 5);
  F_0042ccf0((undefined *)((int)this + 0x68),param_1 + 0x1a);
  *(undefined4 *)((int)this + 0xbc) = param_1[0x2f];
  return (uint)this;
}

/* ref: FUN_0091dc60 */
uint F_0091dc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91dc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  return (uint)this;
}

/* ref: FUN_0091ddd0 */
uint F_0091ddd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ddd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0091ddf0 */
uint F_0091ddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ddf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0091de10 */
uint F_0091de10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91de10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0091de40 */
uint F_0091de40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91de40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0091de60 */
uint F_0091de60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91de60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(param_1);
  return uVar1;
}

/* ref: FUN_0091de80 */
uint F_0091de80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91de80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0091de90 */
uint F_0091de90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91de90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0091dea0 */
uint F_0091dea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91dea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  *(undefined4 *)this = *param_1;
  puVar3 = param_1 + 2;
  iVar1 = 8 - (int)puVar3;
  *(undefined4 *)((int)this + 4) = param_1[1];
  param_1 = (undefined4 *)0x9;
  do {
    F_00560a60((undefined *)((int)this + iVar1 + (int)puVar3),puVar3);
    puVar3 = puVar3 + 2;
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (-1 < (int)param_1);
  F_0042cbc0((undefined *)((int)this + 0x58),puVar2 + 0x16);
  *(undefined4 *)((int)this + 0xac) = puVar2[0x2b];
  F_0042cbc0((undefined *)((int)this + 0xb0),puVar2 + 0x2c);
  *(undefined4 *)((int)this + 0x104) = puVar2[0x41];
  return (uint)this;
}

/* ref: FUN_0091df30 */
uint F_0091df30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91df30u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0091df90 */
byte F_0091df90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91df90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0091dfd0 */
byte F_0091dfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91dfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0091dff0 */
uint F_0091dff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91dff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0091e000 */
uint F_0091e000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91e000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0091e020 */
unsigned int F_0091e020(unsigned int gen_a0)
{
  GEN_ENTER(0x91e020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0091e090 */
unsigned int F_0091e090(unsigned int gen_a0)
{
  GEN_ENTER(0x91e090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0091e0f0 */
uint F_0091e0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e0f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e100 */
uint F_0091e100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91e100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091e120 */
uint F_0091e120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x1e0,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_0079ddc0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0091e190 */
uint F_0091e190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x1e4,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_0079fbd0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0091e200 */
uint F_0091e200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x1c8,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_005903f0(this_00);
    *(byte *)((int)this_00 + 0xfa) = *(byte *)((int)this_00 + 0xfa) | 0x40;
    *this_00 = (*(undefined * PTR32 (*)[62])REFP(0x10ca5cc));
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0091e280 */
uint F_0091e280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x248,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_007a55a0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0091e2f0 */
uint F_0091e2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x210,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_007a5860(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0091e360 */
uint F_0091e360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x248,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_007a6100(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0091e3d0 */
uint F_0091e3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x2c0,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_007a8c80(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0091e440 */
uint F_0091e440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x2c8,0,uVar1,uVar2);
  if (this_00 != (undefined4 *)0x0) {
    F_005903f0(this_00);
    *this_00 = (*(undefined * PTR32 (*)[62])REFP(0x10ccc4c));
    F_0090a490(this_00 + 0x60);
    *(byte *)((int)this_00 + 0xf9) = *(byte *)((int)this_00 + 0xf9) | 0x44;
    *(byte *)((int)this_00 + 0xfa) = *(byte *)((int)this_00 + 0xfa) | 0x40;
    F_005a8d00(this_00,param_2,param_3);
    uVar1 = F_0057fac0(this,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((code *)*(gen_code32 *)*this_00)(this_00,1);
  }
  return 0;
}

/* ref: FUN_0091e4d0 */
uint F_0091e4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x6e8,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_007ab8a0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0091e540 */
uint F_0091e540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(800,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_007aba60(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0091e5b0 */
uint F_0091e5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91e5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = (undefined *)F_00406bd0(0x1bc,0,uVar1,uVar2);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  this_01 = (undefined4 *)F_007b70d0(this_00);
  if (this_01 != (undefined4 *)0x0) {
    F_005a8d00(this_01,param_2,param_3);
    uVar1 = F_0057fac0(this,this_01,param_1);
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)*this_01)(this_01,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_0091e620 */
uint F_0091e620(unsigned int gen_a0)
{
  GEN_ENTER(0x91e620u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e670 */
uint F_0091e670(unsigned int gen_a0)
{
  GEN_ENTER(0x91e670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e6c0 */
uint F_0091e6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e6c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e6d0 */
uint F_0091e6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e6d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e6e0 */
uint F_0091e6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e6e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e6f0 */
uint F_0091e6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e6f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e700 */
uint F_0091e700(unsigned int gen_a0)
{
  GEN_ENTER(0x91e700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e710 */
uint F_0091e710(unsigned int gen_a0)
{
  GEN_ENTER(0x91e710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e720 */
uint F_0091e720(unsigned int gen_a0)
{
  GEN_ENTER(0x91e720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e730 */
uint F_0091e730(unsigned int gen_a0)
{
  GEN_ENTER(0x91e730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e740 */
uint F_0091e740(unsigned int gen_a0)
{
  GEN_ENTER(0x91e740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e750 */
uint F_0091e750(unsigned int gen_a0)
{
  GEN_ENTER(0x91e750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e760 */
uint F_0091e760(unsigned int gen_a0)
{
  GEN_ENTER(0x91e760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e770 */
uint F_0091e770(unsigned int gen_a0)
{
  GEN_ENTER(0x91e770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e780 */
uint F_0091e780(unsigned int gen_a0)
{
  GEN_ENTER(0x91e780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e790 */
uint F_0091e790(unsigned int gen_a0)
{
  GEN_ENTER(0x91e790u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e7a0 */
uint F_0091e7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e7a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e7b0 */
uint F_0091e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e7c0 */
uint F_0091e7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e7c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e7d0 */
uint F_0091e7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e7d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e7e0 */
uint F_0091e7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e7e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e7f0 */
uint F_0091e7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e7f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e800 */
uint F_0091e800(unsigned int gen_a0)
{
  GEN_ENTER(0x91e800u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e810 */
uint F_0091e810(unsigned int gen_a0)
{
  GEN_ENTER(0x91e810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e820 */
uint F_0091e820(unsigned int gen_a0)
{
  GEN_ENTER(0x91e820u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e830 */
uint F_0091e830(unsigned int gen_a0)
{
  GEN_ENTER(0x91e830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e840 */
uint F_0091e840(unsigned int gen_a0)
{
  GEN_ENTER(0x91e840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e850 */
uint F_0091e850(unsigned int gen_a0)
{
  GEN_ENTER(0x91e850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e860 */
uint F_0091e860(unsigned int gen_a0)
{
  GEN_ENTER(0x91e860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e870 */
uint F_0091e870(unsigned int gen_a0)
{
  GEN_ENTER(0x91e870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e880 */
uint F_0091e880(unsigned int gen_a0)
{
  GEN_ENTER(0x91e880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e890 */
uint F_0091e890(unsigned int gen_a0)
{
  GEN_ENTER(0x91e890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e8a0 */
uint F_0091e8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e8a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e8b0 */
uint F_0091e8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091e8c0 */
uint F_0091e8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91e8c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091ea40 */
uint F_0091ea40(unsigned int gen_a0)
{
  GEN_ENTER(0x91ea40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091ea50 */
uint F_0091ea50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91ea50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091ea70 */
uint F_0091ea70(unsigned int gen_a0)
{
  GEN_ENTER(0x91ea70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091ea80 */
uint F_0091ea80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91ea80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091eaa0 */
uint F_0091eaa0(unsigned int gen_a0)
{
  GEN_ENTER(0x91eaa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091eab0 */
uint F_0091eab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91eab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091ead0 */
uint F_0091ead0(unsigned int gen_a0)
{
  GEN_ENTER(0x91ead0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091eae0 */
uint F_0091eae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91eae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091eb00 */
uint F_0091eb00(unsigned int gen_a0)
{
  GEN_ENTER(0x91eb00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091eb10 */
uint F_0091eb10(unsigned int gen_a0)
{
  GEN_ENTER(0x91eb10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091eb20 */
uint F_0091eb20(unsigned int gen_a0)
{
  GEN_ENTER(0x91eb20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091eb30 */
uint F_0091eb30(unsigned int gen_a0)
{
  GEN_ENTER(0x91eb30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091eb40 */
uint F_0091eb40(unsigned int gen_a0)
{
  GEN_ENTER(0x91eb40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091eb80 */
uint F_0091eb80(unsigned int gen_a0)
{
  GEN_ENTER(0x91eb80u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_0091eba0 */
uint F_0091eba0(unsigned int gen_a0)
{
  GEN_ENTER(0x91eba0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_0091ebc0 */
uint F_0091ebc0(unsigned int gen_a0)
{
  GEN_ENTER(0x91ebc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_0091ebe0 */
unsigned int F_0091ebe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ebe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  }
  return 0;
}

/* ref: FUN_0091ec20 */
unsigned int F_0091ec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ec20u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_0091ec50 */
unsigned int F_0091ec50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91ec50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_0091ec80 */
unsigned int F_0091ec80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91ec80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_0091ecb0 */
unsigned int F_0091ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return 0;
}

/* ref: FUN_0091edc0 */
uint F_0091edc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91edc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0091ee60 */
uint F_0091ee60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ee60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0091ee70 */
uint F_0091ee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ee70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0091ee90 */
uint F_0091ee90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ee90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0091eec0 */
uint F_0091eec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91eec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 2) = param_1[1];
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)((int)param_1 + 5);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)((int)this + 7) = *(undefined1 *)((int)param_1 + 7);
  F_0042cbc0((undefined *)((int)this + 8),param_1 + 4);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x2e);
  return (uint)this;
}

/* ref: FUN_0091ef10 */
uint F_0091ef10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ef10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0091ef40 */
uint F_0091ef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ef40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x80));
  F_00560340((undefined *)((int)this + 0x18));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0091ef70 */
uint F_0091ef70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91ef70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x68));
  F_0042c880((undefined *)((int)this + 0x14));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0091efa0 */
uint F_0091efa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91efa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0091efd0 */
uint F_0091efd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91efd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0091f000 */
uint F_0091f000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  F_0042cbc0((undefined *)((int)this + 0x10),param_1 + 4);
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  return (uint)this;
}

/* ref: FUN_0091f040 */
uint F_0091f040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0091f060 */
uint F_0091f060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0091f080 */
unsigned int F_0091f080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  puVar2 = param_1 + 2;
  puVar3 = (undefined4 *)((int)this + 8);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_0091f0b0 */
unsigned int F_0091f0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 2);
  return 0;
}

/* ref: FUN_0091f110 */
uint F_0091f110(unsigned int gen_a0)
{
  GEN_ENTER(0x91f110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f130 */
uint F_0091f130(unsigned int gen_a0)
{
  GEN_ENTER(0x91f130u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f150 */
uint F_0091f150(unsigned int gen_a0)
{
  GEN_ENTER(0x91f150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f1d0 */
uint F_0091f1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f1d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f1f0 */
uint F_0091f1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f1f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f210 */
uint F_0091f210(unsigned int gen_a0)
{
  GEN_ENTER(0x91f210u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f2a0 */
uint F_0091f2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f2a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f340 */
uint F_0091f340(unsigned int gen_a0)
{
  GEN_ENTER(0x91f340u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f360 */
uint F_0091f360(unsigned int gen_a0)
{
  GEN_ENTER(0x91f360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f370 */
uint F_0091f370(unsigned int gen_a0)
{
  GEN_ENTER(0x91f370u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f380 */
uint F_0091f380(unsigned int gen_a0)
{
  GEN_ENTER(0x91f380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f390 */
uint F_0091f390(unsigned int gen_a0)
{
  GEN_ENTER(0x91f390u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f3a0 */
uint F_0091f3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f3a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f3b0 */
uint F_0091f3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f3b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f3c0 */
uint F_0091f3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f3c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f3e0 */
uint F_0091f3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f3f0 */
uint F_0091f3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f410 */
uint F_0091f410(unsigned int gen_a0)
{
  GEN_ENTER(0x91f410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f420 */
uint F_0091f420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f440 */
unsigned int F_0091f440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f440u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_0091f460 */
unsigned int F_0091f460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_0091f480 */
unsigned int F_0091f480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_0091f4a0 */
unsigned int F_0091f4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_0091f4c0 */
unsigned int F_0091f4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_0091f4e0 */
uint F_0091f4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x91f4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0091f500 */
uint F_0091f500(unsigned int gen_a0)
{
  GEN_ENTER(0x91f500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f510 */
uint F_0091f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f530 */
uint F_0091f530(unsigned int gen_a0)
{
  GEN_ENTER(0x91f530u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f540 */
uint F_0091f540(unsigned int gen_a0)
{
  GEN_ENTER(0x91f540u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f550 */
uint F_0091f550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f570 */
uint F_0091f570(unsigned int gen_a0)
{
  GEN_ENTER(0x91f570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f580 */
uint F_0091f580(unsigned int gen_a0)
{
  GEN_ENTER(0x91f580u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f590 */
uint F_0091f590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f5b0 */
uint F_0091f5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f5b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f5c0 */
uint F_0091f5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f5c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f5d0 */
uint F_0091f5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f5f0 */
uint F_0091f5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f600 */
uint F_0091f600(unsigned int gen_a0)
{
  GEN_ENTER(0x91f600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f610 */
uint F_0091f610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f630 */
uint F_0091f630(unsigned int gen_a0)
{
  GEN_ENTER(0x91f630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f640 */
uint F_0091f640(unsigned int gen_a0)
{
  GEN_ENTER(0x91f640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f650 */
uint F_0091f650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f670 */
uint F_0091f670(unsigned int gen_a0)
{
  GEN_ENTER(0x91f670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f680 */
uint F_0091f680(unsigned int gen_a0)
{
  GEN_ENTER(0x91f680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f690 */
uint F_0091f690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f6b0 */
uint F_0091f6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f6b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f6c0 */
uint F_0091f6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f6c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f6d0 */
uint F_0091f6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f6f0 */
uint F_0091f6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f6f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f700 */
uint F_0091f700(unsigned int gen_a0)
{
  GEN_ENTER(0x91f700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f710 */
uint F_0091f710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f730 */
uint F_0091f730(unsigned int gen_a0)
{
  GEN_ENTER(0x91f730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f740 */
uint F_0091f740(unsigned int gen_a0)
{
  GEN_ENTER(0x91f740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f750 */
uint F_0091f750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f770 */
uint F_0091f770(unsigned int gen_a0)
{
  GEN_ENTER(0x91f770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f780 */
uint F_0091f780(unsigned int gen_a0)
{
  GEN_ENTER(0x91f780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f790 */
uint F_0091f790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f7b0 */
uint F_0091f7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f7c0 */
uint F_0091f7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f7c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f7d0 */
uint F_0091f7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f7f0 */
uint F_0091f7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f7f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f800 */
uint F_0091f800(unsigned int gen_a0)
{
  GEN_ENTER(0x91f800u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f810 */
uint F_0091f810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f830 */
uint F_0091f830(unsigned int gen_a0)
{
  GEN_ENTER(0x91f830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f840 */
uint F_0091f840(unsigned int gen_a0)
{
  GEN_ENTER(0x91f840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f850 */
uint F_0091f850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f870 */
uint F_0091f870(unsigned int gen_a0)
{
  GEN_ENTER(0x91f870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f880 */
uint F_0091f880(unsigned int gen_a0)
{
  GEN_ENTER(0x91f880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f890 */
uint F_0091f890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f8b0 */
uint F_0091f8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f8c0 */
uint F_0091f8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f8c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f8d0 */
uint F_0091f8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f8f0 */
uint F_0091f8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f8f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f900 */
uint F_0091f900(unsigned int gen_a0)
{
  GEN_ENTER(0x91f900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f910 */
uint F_0091f910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f930 */
uint F_0091f930(unsigned int gen_a0)
{
  GEN_ENTER(0x91f930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f940 */
uint F_0091f940(unsigned int gen_a0)
{
  GEN_ENTER(0x91f940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f950 */
uint F_0091f950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f970 */
uint F_0091f970(unsigned int gen_a0)
{
  GEN_ENTER(0x91f970u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f980 */
uint F_0091f980(unsigned int gen_a0)
{
  GEN_ENTER(0x91f980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f990 */
uint F_0091f990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f9b0 */
uint F_0091f9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f9b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f9c0 */
uint F_0091f9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f9c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091f9d0 */
uint F_0091f9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91f9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091f9f0 */
uint F_0091f9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x91f9f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fa00 */
uint F_0091fa00(unsigned int gen_a0)
{
  GEN_ENTER(0x91fa00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fa10 */
uint F_0091fa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91fa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0091fa30 */
uint F_0091fa30(unsigned int gen_a0)
{
  GEN_ENTER(0x91fa30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fa40 */
uint F_0091fa40(unsigned int gen_a0)
{
  GEN_ENTER(0x91fa40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fa50 */
uint F_0091fa50(unsigned int gen_a0)
{
  GEN_ENTER(0x91fa50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fa60 */
uint F_0091fa60(unsigned int gen_a0)
{
  GEN_ENTER(0x91fa60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fa70 */
uint F_0091fa70(unsigned int gen_a0)
{
  GEN_ENTER(0x91fa70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fa80 */
uint F_0091fa80(unsigned int gen_a0)
{
  GEN_ENTER(0x91fa80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fa90 */
uint F_0091fa90(unsigned int gen_a0)
{
  GEN_ENTER(0x91fa90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091faa0 */
uint F_0091faa0(unsigned int gen_a0)
{
  GEN_ENTER(0x91faa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fab0 */
uint F_0091fab0(unsigned int gen_a0)
{
  GEN_ENTER(0x91fab0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fac0 */
uint F_0091fac0(unsigned int gen_a0)
{
  GEN_ENTER(0x91fac0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fad0 */
uint F_0091fad0(unsigned int gen_a0)
{
  GEN_ENTER(0x91fad0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fae0 */
uint F_0091fae0(unsigned int gen_a0)
{
  GEN_ENTER(0x91fae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091faf0 */
uint F_0091faf0(unsigned int gen_a0)
{
  GEN_ENTER(0x91faf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb00 */
uint F_0091fb00(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb10 */
uint F_0091fb10(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb20 */
uint F_0091fb20(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb30 */
uint F_0091fb30(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb40 */
uint F_0091fb40(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb50 */
uint F_0091fb50(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb60 */
uint F_0091fb60(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb70 */
uint F_0091fb70(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb80 */
uint F_0091fb80(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb90 */
uint F_0091fb90(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fba0 */
uint F_0091fba0(unsigned int gen_a0)
{
  GEN_ENTER(0x91fba0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fbb0 */
uint F_0091fbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x91fbb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fbc0 */
uint F_0091fbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x91fbc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fc00 */
unsigned int F_0091fc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x91fc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0x14);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0x14);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1[3] = param_4[3];
  puVar1[4] = param_4[4];
  return 0;
}

/* ref: FUN_0091fcb0 */
unsigned int F_0091fcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x91fcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0x14);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0x14);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1[3] = param_4[3];
  puVar1[4] = param_4[4];
  return 0;
}

/* ref: FUN_0091fd60 */
uint F_0091fd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x91fd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar4 = (iVar2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
    uVar3 = (*param_5)(puVar1,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar2 * 8) = *puVar1;
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = puVar1[1];
    iVar2 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar2 * 8) = *param_4;
  uVar3 = param_4[1];
  *(uint *)(param_1 + 4 + iVar2 * 8) = uVar3;
  return uVar3;
}

/* ref: FUN_0091fdd0 */
unsigned int F_0091fdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91fdd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -8) {
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -2;
  }
  return 0;
}

/* ref: FUN_0091fe00 */
uint F_0091fe00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x91fe00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * pvVar5;
  
  iVar1 = param_2;
  while (param_3 < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    iVar4 = iVar3 * 0x6c + param_1;
    uVar2 = (*param_5)(iVar4,param_4);
    if ((char)uVar2 == '\0') break;
    pvVar5 = (undefined *)(iVar1 * 0x6c + param_1);
    F_0042ccf0(pvVar5,iVar4);
    *(undefined4 *)((int)pvVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)((int)pvVar5 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)((int)pvVar5 + 0x5c) = *(undefined4 *)(iVar4 + 0x5c);
    *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined4 *)((int)pvVar5 + 100) = *(undefined4 *)(iVar4 + 100);
    *(undefined4 *)((int)pvVar5 + 0x68) = *(undefined4 *)(iVar4 + 0x68);
    iVar1 = iVar3;
  }
  pvVar5 = (undefined *)(iVar1 * 0x6c + param_1);
  F_0042ccf0(pvVar5,param_4);
  *(undefined4 *)((int)pvVar5 + 0x54) = *(undefined4 *)(param_4 + 0x54);
  *(undefined4 *)((int)pvVar5 + 0x58) = *(undefined4 *)(param_4 + 0x58);
  *(undefined4 *)((int)pvVar5 + 0x5c) = *(undefined4 *)(param_4 + 0x5c);
  *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)(param_4 + 0x60);
  uVar2 = *(uint *)(param_4 + 100);
  *(uint *)((int)pvVar5 + 100) = uVar2;
  *(undefined4 *)((int)pvVar5 + 0x68) = *(undefined4 *)(param_4 + 0x68);
  return uVar2;
}

/* ref: FUN_0091feb0 */
uint F_0091feb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91feb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  undefined * this;
  
  if (param_1 != param_2) {
    puVar2 = param_2 + 0x16;
    pvVar3 = param_3;
    do {
      this = (undefined *)((int)pvVar3 - 0x6c);
      F_0042ccf0(this,puVar2 + -0x31);
      *(undefined4 *)((int)pvVar3 - 0x18) = puVar2[-0x1c];
      *(undefined4 *)((int)pvVar3 - 0x14) = puVar2[-0x1b];
      *(undefined4 *)((int)pvVar3 - 0x10) = puVar2[-0x1a];
      *(undefined4 *)((int)pvVar3 - 0xc) = puVar2[-0x19];
      *(undefined4 *)((int)pvVar3 - 8) = puVar2[-0x18];
      puVar1 = puVar2 + -0x31;
      *(undefined4 *)((int)pvVar3 - 4) = puVar2[-0x17];
      puVar2 = puVar2 + -0x1b;
      pvVar3 = this;
    } while (puVar1 != param_1);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_0091ff10 */
unsigned int F_0091ff10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x91ff10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * pvVar5;
  
  iVar1 = param_2;
  while (param_3 < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    iVar4 = iVar3 * 0x68 + param_1;
    uVar2 = (*param_5)(iVar4,param_4);
    if ((char)uVar2 == '\0') break;
    pvVar5 = (undefined *)(iVar1 * 0x68 + param_1);
    F_0042ccf0(pvVar5,iVar4);
    *(undefined4 *)((int)pvVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)((int)pvVar5 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)((int)pvVar5 + 0x5c) = *(undefined4 *)(iVar4 + 0x5c);
    *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined1 *)((int)pvVar5 + 100) = *(undefined1 *)(iVar4 + 100);
    iVar1 = iVar3;
  }
  pvVar5 = (undefined *)(iVar1 * 0x68 + param_1);
  F_0042ccf0(pvVar5,param_4);
  *(undefined4 *)((int)pvVar5 + 0x54) = *(undefined4 *)(param_4 + 0x54);
  *(undefined4 *)((int)pvVar5 + 0x58) = *(undefined4 *)(param_4 + 0x58);
  *(undefined4 *)((int)pvVar5 + 0x5c) = *(undefined4 *)(param_4 + 0x5c);
  *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)(param_4 + 0x60);
  *(undefined1 *)((int)pvVar5 + 100) = *(undefined1 *)(param_4 + 100);
  return 0;
}

/* ref: FUN_0091ffb0 */
uint F_0091ffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91ffb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  undefined * this;
  
  if (param_1 != param_2) {
    puVar2 = param_2 + 0x16;
    pvVar3 = param_3;
    do {
      this = (undefined *)((int)pvVar3 - 0x68);
      F_0042ccf0(this,puVar2 + -0x30);
      *(undefined4 *)((int)pvVar3 - 0x14) = puVar2[-0x1b];
      *(undefined4 *)((int)pvVar3 - 0x10) = puVar2[-0x1a];
      *(undefined4 *)((int)pvVar3 - 0xc) = puVar2[-0x19];
      *(undefined4 *)((int)pvVar3 - 8) = puVar2[-0x18];
      puVar1 = puVar2 + -0x30;
      *(undefined1 *)((int)pvVar3 - 4) = *(undefined1 *)(puVar2 + -0x17);
      puVar2 = puVar2 + -0x1a;
      pvVar3 = this;
    } while (puVar1 != param_1);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00920010 */
uint F_00920010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920010u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_009200a0 */
uint F_009200a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9200a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_009200d0 */
uint F_009200d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9200d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar4 = (iVar2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
    uVar3 = (*param_5)(puVar1,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar2 * 8) = *puVar1;
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = puVar1[1];
    iVar2 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar2 * 8) = *param_4;
  uVar3 = param_4[1];
  *(uint *)(param_1 + 4 + iVar2 * 8) = uVar3;
  return uVar3;
}

/* ref: FUN_00920150 */
unsigned int F_00920150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920150u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0xc);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return 0;
}

/* ref: FUN_009201f0 */
uint F_009201f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9201f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_00920270 */
uint F_00920270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x920270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_009202a0 */
uint F_009202a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9202a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_00920330 */
uint F_00920330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x920330u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_00920360 */
uint F_00920360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920360u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_009203f0 */
uint F_009203f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9203f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_00920420 */
uint F_00920420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920420u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_009204b0 */
uint F_009204b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9204b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_009204e0 */
uint F_009204e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9204e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009204f0 */
uint F_009204f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9204f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00920510 */
unsigned int F_00920510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920510u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0x18);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    puVar2[5] = puVar1[5];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0x18);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1[3] = param_4[3];
  puVar1[4] = param_4[4];
  puVar1[5] = param_4[5];
  return 0;
}

/* ref: FUN_009205c0 */
unsigned int F_009205c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9205c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  
  iVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x18) {
    *(undefined4 *)(iVar1 + -0x18) = *(undefined4 *)(iVar2 + -0x18);
    *(undefined4 *)(iVar1 + -0x14) = *(undefined4 *)(iVar2 + -0x14);
    *(undefined4 *)(iVar1 + -0x10) = *(undefined4 *)(iVar2 + -0x10);
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + -0xc);
    *(undefined4 *)(iVar1 + -8) = *(undefined4 *)(iVar2 + -8);
    *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(iVar2 + -4);
    iVar1 = iVar1 + -0x18;
  }
  return 0;
}

/* ref: FUN_00920610 */
unsigned int F_00920610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920610u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0xc);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return 0;
}

/* ref: FUN_009206b0 */
unsigned int F_009206b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9206b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = param_2;
  while (param_3 < iVar1) {
    iVar5 = (iVar1 + -1) / 2;
    puVar4 = (undefined4 *)(iVar5 * 0x10 + param_1);
    uVar2 = (*param_5)(puVar4,param_4);
    if ((char)uVar2 == '\0') break;
    puVar3 = (undefined4 *)(iVar1 * 0x10 + param_1);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    puVar3[3] = puVar4[3];
    iVar1 = iVar5;
  }
  puVar4 = (undefined4 *)(iVar1 * 0x10 + param_1);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  puVar4[2] = param_4[2];
  puVar4[3] = param_4[3];
  return 0;
}

/* ref: FUN_00920750 */
unsigned int F_00920750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920750u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0xc);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return 0;
}

/* ref: FUN_009207f0 */
unsigned int F_009207f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9207f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = param_2;
  while (param_3 < iVar1) {
    iVar5 = (iVar1 + -1) / 2;
    puVar4 = (undefined4 *)(iVar5 * 0x10 + param_1);
    uVar2 = (*param_5)(puVar4,param_4);
    if ((char)uVar2 == '\0') break;
    puVar3 = (undefined4 *)(iVar1 * 0x10 + param_1);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    puVar3[3] = puVar4[3];
    iVar1 = iVar5;
  }
  puVar4 = (undefined4 *)(iVar1 * 0x10 + param_1);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  puVar4[2] = param_4[2];
  puVar4[3] = param_4[3];
  return 0;
}

/* ref: FUN_00920890 */
unsigned int F_00920890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920890u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0x14);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0x14);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1[3] = param_4[3];
  puVar1[4] = param_4[4];
  return 0;
}

/* ref: FUN_00920930 */
uint F_00920930(unsigned int gen_a0)
{
  GEN_ENTER(0x920930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920940 */
uint F_00920940(unsigned int gen_a0)
{
  GEN_ENTER(0x920940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920950 */
uint F_00920950(unsigned int gen_a0)
{
  GEN_ENTER(0x920950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920960 */
uint F_00920960(unsigned int gen_a0)
{
  GEN_ENTER(0x920960u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920970 */
uint F_00920970(unsigned int gen_a0)
{
  GEN_ENTER(0x920970u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920980 */
uint F_00920980(unsigned int gen_a0)
{
  GEN_ENTER(0x920980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920990 */
uint F_00920990(unsigned int gen_a0)
{
  GEN_ENTER(0x920990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009209a0 */
uint F_009209a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9209a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009209b0 */
uint F_009209b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9209b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009209c0 */
uint F_009209c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9209c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009209d0 */
uint F_009209d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9209d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009209e0 */
uint F_009209e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9209e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00922f80((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_009209f0 */
uint F_009209f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9209f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00920a00 */
uint F_00920a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x920a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x118))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00920a10 */
uint F_00920a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00924ae0((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_00920a20 */
uint F_00920a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00923170((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_00920a30 */
uint F_00920a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00924b20((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_00920a40 */
uint F_00920a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00922f10((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_00920a50 */
uint F_00920a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00922fd0((undefined *)((int)this + -0x180),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00920a60 */
byte F_00920a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0x14) = *(uint *)(in_ecx + 0x14) | 0x80000;
  *(byte *)(in_ecx + 0x15) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00920a80 */
unsigned int F_00920a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_2 = *in_ecx;
  uVar2 = REFG(float, 0x1087f04);
  param_2[1] = in_ecx[1];
  param_2[2] = 0;
  uVar1 = in_ecx[2];
  param_2[6] = 0;
  param_2[4] = uVar1;
  param_2[8] = 0;
  uVar1 = in_ecx[3];
  param_2[9] = 0;
  param_2[5] = uVar1;
  param_2[10] = uVar2;
  uVar1 = in_ecx[4];
  param_2[0xe] = 0;
  param_2[0xc] = uVar1;
  param_2[0xd] = in_ecx[5];
  return 0;
}

/* ref: FUN_00920ae0 */
uint F_00920ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (this == (undefined *)0x0) {
    F_00568010((undefined *)0x0,param_1);
    return param_1;
  }
  F_00568010(*(undefined * PTR32 *)((int)this + 0x70),param_1);
  return param_1;
}

/* ref: FUN_00920b10 */
uint F_00920b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x920b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  this_00 = (undefined *)0x0;
  if (this != (undefined *)0x0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x70);
  }
  uVar1 = F_005840a0(this_00,param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00920b40 */
uint F_00920b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (this == (undefined *)0x0) {
    bVar1 = F_0055a220((undefined *)0x0,param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0055a220(*(undefined * PTR32 *)((int)this + 0x70),param_1);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00920b60 */
uint F_00920b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (this == (undefined *)0x0) {
    uVar1 = F_0055a260((undefined *)0x0,param_1);
    return uVar1;
  }
  uVar1 = F_0055a260(*(undefined * PTR32 *)((int)this + 0x70),param_1);
  return uVar1;
}

/* ref: FUN_00920b80 */
uint F_00920b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00559c60(*(undefined * PTR32 *)((int)this + 0x6c),param_1);
  return uVar1;
}

/* ref: FUN_00920b90 */
unsigned int F_00920b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00577aa0(*(undefined * PTR32 *)((int)this + 0x6c),param_1);
  return 0;
}

/* ref: FUN_00920c00 */
unsigned int F_00920c00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x920c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(REFG(int, 0x137104c) + 0x25f4);
  if ((char)param_1 != '\0') {
    F_0049b7d0(iVar1,1,param_2,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
    return 0;
  }
  do {
    F_0049b7d0(iVar1,0,param_2,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
  } while (0 < *(int *)(iVar1 + 0x54));
  return 0;
}

/* ref: FUN_00920ca0 */
uint F_00920ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x920ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00975680(this_00);
    return *(int *)((int)this + 8) - uVar1;
  }
  uVar2 = F_0046ff40();
  return *(int *)((int)this + 8) - (int)(uVar2 / 1000);
}

/* ref: FUN_00920cf0 */
uint F_00920cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentInterface::vf13 */
unsigned int F_00920d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf14 */
unsigned int F_00920d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x920d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf15 */
unsigned int F_00920d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00920d50 */
uint F_00920d50(unsigned int gen_a0)
{
  GEN_ENTER(0x920d50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2f00(param_1);
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: FUN_00920d80 */
uint F_00920d80(unsigned int gen_a0)
{
  GEN_ENTER(0x920d80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2e40(param_1);
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: FUN_00920db0 */
uint F_00920db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920db0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x34 + *(int *)(in_ecx + 0x5c);
}

/* ref: FUN_00920dc0 */
uint F_00920dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x920dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042b630(this);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar1 = F_0042a990(this);
  *(uint *)((int)this + 100) = uVar1;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_00920e00 */
uint F_00920e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x920e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::RegionParam::vf1 */
uint F_00920e20(unsigned int gen_a0)
{
  GEN_ENTER(0x920e20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Client::UI2::Agent::AgentMap::RegionParam::vf2 */
uint F_00920e30(unsigned int gen_a0)
{
  GEN_ENTER(0x920e30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00920e40 */
unsigned int F_00920e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x920e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_5;
  return 0;
}

/* ref: Client::UI2::Agent::AgentMap::AreaParam::vf1 */
uint F_00920e70(unsigned int gen_a0)
{
  GEN_ENTER(0x920e70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Client::UI2::Agent::AgentMap::AreaParam::vf2 */
uint F_00920e80(unsigned int gen_a0)
{
  GEN_ENTER(0x920e80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00920e90 */
uint F_00920e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x920e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::FloorParam::vf1 */
uint F_00920ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x920ec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Client::UI2::Agent::AgentMap::FloorParam::vf2 */
uint F_00920ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x920ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Client::UI2::Agent::AgentMap::RegionParam::vf0 */
uint F_00920ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::AreaParam::vf0 */
uint F_00920f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::FloorParam::vf0 */
uint F_00920f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00920f70 */
uint F_00920f70(unsigned int gen_a0)
{
  GEN_ENTER(0x920f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00920fd0 */
byte F_00920fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x920fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  if (*(char *)((int)this + 0x19f) != '\x01') {
    uVar3 = 0;
    if (*(int *)((int)this + 0x184) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x184) + 0x70)));
    }
    uVar2 = F_0055a350(uVar3);
    if (((char)uVar2 != '\x01') || (*(char *)((int)this + 0x19c) != '\0')) {
      if (*(char *)((int)this + 0x19d) == '\x01') {
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1a0) - (float10)REFG(double, 0x1088130))));
        (*(float *)(gen_frame + 0x8)) = fVar1;
        *(float *)((int)this + 0x1a0) = fVar1;
      }
      return 0;
    }
    uVar3 = 0;
    if (*(int *)((int)this + 400) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
    }
    uVar2 = F_0055a2d0(uVar3);
    if ((char)uVar2 == '\x01') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400),0);
    }
    if (*(int *)((int)this + 0x198) != 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = 3;
      (*(undefined4 *)(gen_frame + 0x4)) = 4;
      uVar2 = F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x0)));
      if ((char)uVar2 == '\0') {
        F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),1);
        iVar4 = *(int *)((int)this + 0x198) + 1;
        (*(float *)(gen_frame + 0x8)) = gen_bits2f(iVar4);
        fVar5 = (float10)iVar4;
        if (iVar4 < 0) {
          fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        *(float *)((int)this + 0x1a0) = (float)fVar5;
        *(undefined1 *)((int)this + 0x19c) = 1;
      }
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)));
      return 0;
    }
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  return 1;
}

/* ref: FUN_009210f0 */
byte F_009210f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9210f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(char *)((int)this + 0x19f) != '\x01') && (*(char *)((int)this + 0x19c) != '\0')) {
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 5;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    uVar2 = 0;
    if (*(int *)((int)this + 400) != 0) {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
    }
    uVar1 = F_0055a2d0(uVar2);
    if ((char)uVar1 == '\x01') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))(*(int * PTR32 *)((int)this + 0x184),0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400),1);
      F_0059dde0(*(undefined * PTR32 *)((int)this + 400),0);
    }
    uVar2 = 0;
    if (*(int *)((int)this + 400) != 0) {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
    }
    uVar1 = F_0055a2d0(uVar2);
    if ((char)uVar1 == '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))(*(int * PTR32 *)((int)this + 0x184),1);
    }
    *(undefined1 *)((int)this + 0x19c) = 0;
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
    return 0;
  }
  return 1;
}

/* ref: FUN_009211c0 */
uint F_009211c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9211c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00921220 */
uint F_00921220(unsigned int gen_a0)
{
  GEN_ENTER(0x921220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_009212d0 */
uint F_009212d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9212d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0078f910(this,param_1,param_2,0,0);
  return uVar1;
}

/* ref: FUN_009212f0 */
uint F_009212f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9212f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = *(int *)((int)this + uVar3 * 4);
    this_00 = (undefined *)0x0;
    if (iVar1 != 0) {
      this_00 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    uVar2 = F_0055a300(this_00,param_1);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  return uVar2;
}

/* ref: Client::UI2::AddonFishingNote::TreeList::vf2 */
uint F_00921340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x921340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonFishingNote::TreeList::vf0 */
uint F_00921350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonScreenLog::AddonChild::vf0 */
uint F_009213d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9213d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00921400 */
uint F_00921400(unsigned int gen_a0)
{
  GEN_ENTER(0x921400u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  *in_ecx = 0;
  puVar2 = in_ecx + 1;
  iVar1 = 2;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    F_0042b630(puVar2 + 4);
    puVar2 = puVar2 + 0x19;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630(in_ecx + 0x51);
  return (uint)in_ecx;
}

/* ref: FUN_00921450 */
uint F_00921450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x921450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x7c))))(*(int * PTR32 *)((int)this + 400));
  iVar1 = *(int *)((int)this + 400);
  if (uVar2 != 0) {
    if (iVar1 != 0) {
      F_0055a300(*(undefined * PTR32 *)(iVar1 + 0x70),param_1);
      uVar2 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
      return uVar2;
    }
    F_0055a300((undefined *)0x0,param_1);
    uVar2 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
    return uVar2;
  }
  this_00 = (undefined *)0x0;
  if (iVar1 != 0) {
    this_00 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  uVar2 = F_0055a300(this_00,0);
  if ((char)param_2 == '\0') {
    if ((char)param_3 == '\0') {
      return uVar2;
    }
    uVar3 = *(undefined4 *)((int)this + 0x4dc);
  }
  else {
    uVar3 = *(undefined4 *)((int)this + 0x4d8);
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x194),uVar3);
  uVar2 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),1);
  return uVar2;
}

/* ref: FUN_00921500 */
uint F_00921500(unsigned int gen_a0)
{
  GEN_ENTER(0x921500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  ulonglong uVar4;
  
  *(undefined4 *)this = 0;
  if (*(int *)((int)this + 4) != 0) {
    F_00406810(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x54);
      F_0042c880(this_00);
    }
    uVar4 = F_00406b30((int *)(iVar1 + -4));
    uVar3 = (uint)uVar4;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar3;
}

/* ref: FUN_00921570 */
uint F_00921570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x14) = 0xff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)this = 9999;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  uVar1 = F_00760f10(this,param_1,0);
  return uVar1;
}

/* ref: FUN_009215b0 */
uint F_009215b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9215b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_009215e0 */
uint F_009215e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9215e0u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined2 * in_ecx_00;
  
  iVar1 = 8;
  in_ecx_00 = in_ecx + 0x10;
  do {
    F_0042b630(in_ecx_00);
    in_ecx_00 = in_ecx_00 + 0x30;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630(in_ecx + 0x1c2);
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 6) = 0;
  in_ecx[8] = 0;
  *(undefined1 *)(in_ecx + 9) = 0;
  *(undefined1 *)(in_ecx + 0x1ba) = 0;
  *(undefined4 *)(in_ecx + 0x1bc) = 0;
  *(undefined4 *)(in_ecx + 0x1be) = 0;
  in_ecx[0x1c0] = 0;
  F_0042aca0(in_ecx + 0x1c2);
  return (uint)in_ecx;
}

/* ref: FUN_00921650 */
uint F_00921650(unsigned int gen_a0)
{
  GEN_ENTER(0x921650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x60) = 0;
  pvVar1 = F_00c48350((undefined *)((int)this + 100),0,0x32c);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  return (uint)pvVar1;
}

/* ref: FUN_00921680 */
uint F_00921680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 100 + (int)this);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((bVar1 & 1) == 0) {
    *(byte *)(param_1 + 100 + (int)this) = bVar1 | 1;
    uVar2 = (uint)(bVar1 >> 1);
    *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + uVar2;
  }
  return uVar2;
}

/* ref: FUN_009216a0 */
uint F_009216a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9216a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_0042b630((int)this + 4);
  *(undefined4 *)((int)this + 0x60) = 0;
  F_00c48350((undefined *)((int)this + 100),0,0x32c);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: FUN_00921730 */
unsigned int F_00921730(unsigned int gen_a0)
{
  GEN_ENTER(0x921730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined2 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined2 *)((int)this + 0x84) = 0;
  return 0;
}

/* ref: FUN_009217f0 */
byte F_009217f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9217f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 == 5;
}

/* ref: Client::UI2::Agent::AgentRecommendList::ListItemFate::vf0 */
uint F_00921800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRecommendList::ListItemMonsterNote::vf0 */
uint F_00921830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 0x6c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRecommendList::ListItemContents::vf0 */
uint F_00921870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009218a0 */
unsigned int F_009218a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9218a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x68);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x68) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_009218d0 */
unsigned int F_009218d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9218d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x68);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x68) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentModule::vf0 */
uint F_00921900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pAVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c4410));
  pAVar2 = this + 0xc;
  iVar3 = 0x65;
  do {
    puVar1 = *(undefined4 * PTR32 *)pAVar2;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(int *)pAVar2 = 0;
    }
    pAVar2 = pAVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf21 */
byte F_00921950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00921960 */
uint F_00921960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00953300((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00921970 */
uint F_00921970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x1400 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_00921990 */
uint F_00921990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x1800 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_009219b0 */
uint F_009219b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9219b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x1c00 + param_2 * 4);
  return (uint)param_1;
}

