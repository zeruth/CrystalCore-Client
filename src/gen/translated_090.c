#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00928b00 */
uint F_00928b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00928b20 */
uint F_00928b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928b60 */
uint F_00928b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x34;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928ba0 */
uint F_00928ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00928bc0 */
uint F_00928bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928c10 */
uint F_00928c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928c60 */
uint F_00928c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x39) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x39) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_00928ce0 */
uint F_00928ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xd;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928d30 */
uint F_00928d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928d80 */
uint F_00928d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x60;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928dd0 */
uint F_00928dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928e10 */
uint F_00928e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928e50 */
uint F_00928e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928f00 */
uint F_00928f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00928f20 */
uint F_00928f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xd4;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928f60 */
uint F_00928f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928fa0 */
uint F_00928fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00928ff0 */
uint F_00928ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x928ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929040 */
uint F_00929040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929080 */
uint F_00929080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_009290c0 */
uint F_009290c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9290c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929100 */
uint F_00929100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929140 */
uint F_00929140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929170 */
uint F_00929170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_009291b0 */
uint F_009291b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9291b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929200 */
uint F_00929200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929240 */
uint F_00929240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929280 */
uint F_00929280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_009292d0 */
uint F_009292d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9292d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929300 */
uint F_00929300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929310 */
uint F_00929310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00929330 */
uint F_00929330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929340 */
uint F_00929340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929350 */
uint F_00929350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00929370 */
uint F_00929370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00929380 */
uint F_00929380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_009293c0 */
uint F_009293c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9293c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929400 */
uint F_00929400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00929420 */
uint F_00929420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_00929470 */
uint F_00929470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_009294c0 */
uint F_009294c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9294c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009294e0 */
uint F_009294e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9294e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929520 */
uint F_00929520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929570 */
uint F_00929570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc0;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_009295b0 */
uint F_009295b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9295b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009295c0 */
uint F_009295c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9295c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_009295f0 */
uint F_009295f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9295f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00929600 */
uint F_00929600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x68;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929640 */
uint F_00929640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00929650 */
uint F_00929650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x6c;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929690 */
uint F_00929690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009296a0 */
uint F_009296a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9296a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_009296d0 */
uint F_009296d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9296d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009296f0 */
uint F_009296f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9296f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00929730 */
uint F_00929730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929740 */
unsigned int F_00929740(unsigned int gen_a0)
{
  GEN_ENTER(0x929740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00929790 */
uint F_00929790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009297a0 */
unsigned int F_009297a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9297a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_009297f0 */
uint F_009297f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9297f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00929800 */
uint F_00929800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00929820 */
uint F_00929820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00929860 */
uint F_00929860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929870 */
unsigned int F_00929870(unsigned int gen_a0)
{
  GEN_ENTER(0x929870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_009298c0 */
uint F_009298c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9298c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009298d0 */
uint F_009298d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9298d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_009298f0 */
uint F_009298f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9298f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00929930 */
uint F_00929930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929940 */
uint F_00929940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929950 */
uint F_00929950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929960 */
uint F_00929960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929970 */
uint F_00929970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929980 */
uint F_00929980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929990 */
uint F_00929990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009299a0 */
uint F_009299a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9299a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xd4;
  return (uint)in_ecx;
}

/* ref: FUN_009299e0 */
uint F_009299e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9299e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009299f0 */
uint F_009299f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9299f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929a00 */
uint F_00929a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929a10 */
uint F_00929a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929a10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x54;
  return (uint)in_ecx;
}

/* ref: FUN_00929a30 */
uint F_00929a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929a40 */
uint F_00929a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929a40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xd;
  return (uint)in_ecx;
}

/* ref: FUN_00929a60 */
uint F_00929a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929a70 */
uint F_00929a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929a70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 3;
  return (uint)in_ecx;
}

/* ref: FUN_00929a90 */
uint F_00929a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929aa0 */
uint F_00929aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929aa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x60;
  return (uint)in_ecx;
}

/* ref: FUN_00929ac0 */
uint F_00929ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929ad0 */
uint F_00929ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00929af0 */
uint F_00929af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b00 */
uint F_00929b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_00929b20 */
uint F_00929b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b30 */
uint F_00929b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929b30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_00929b50 */
uint F_00929b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b60 */
uint F_00929b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b70 */
uint F_00929b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b80 */
uint F_00929b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929b90 */
uint F_00929b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929ba0 */
uint F_00929ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929bb0 */
uint F_00929bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929bc0 */
uint F_00929bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929bd0 */
uint F_00929bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929be0 */
uint F_00929be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929bf0 */
uint F_00929bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929c00 */
uint F_00929c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929c10 */
uint F_00929c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929c20 */
uint F_00929c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929c30 */
uint F_00929c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929c40 */
uint F_00929c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00929cf0 */
uint F_00929cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00910c10(this);
  return (uint)param_1;
}

/* ref: FUN_00929e00 */
uint F_00929e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00914400(this);
  return (uint)param_1;
}

/* ref: FUN_00929e20 */
byte F_00929e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929e60 */
byte F_00929e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929e80 */
uint F_00929e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x929e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00929ec0 */
byte F_00929ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929ee0 */
byte F_00929ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929f00 */
byte F_00929f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929f20 */
byte F_00929f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929f40 */
byte F_00929f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929f60 */
byte F_00929f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929f80 */
byte F_00929f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929fa0 */
byte F_00929fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929fc0 */
byte F_00929fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00929fe0 */
byte F_00929fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x929fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a000 */
byte F_0092a000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a020 */
byte F_0092a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a040 */
byte F_0092a040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a060 */
byte F_0092a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a080 */
byte F_0092a080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a0a0 */
byte F_0092a0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a0c0 */
byte F_0092a0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a0e0 */
byte F_0092a0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a100 */
byte F_0092a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a120 */
byte F_0092a120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a140 */
byte F_0092a140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a160 */
byte F_0092a160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0092a180 */
uint F_0092a180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0092a1e0 */
uint F_0092a1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0092a240 */
uint F_0092a240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x21) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0092a2a0 */
uint F_0092a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0092a300 */
uint F_0092a300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0092a360 */
uint F_0092a360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0092a3c0 */
uint F_0092a3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0092a420 */
uint F_0092a420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x92a420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0092a480 */
uint F_0092a480(unsigned int gen_a0)
{
  GEN_ENTER(0x92a480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009159a0(this);
  return (uint)this;
}

/* ref: FUN_0092a490 */
uint F_0092a490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_0092a4d0 */
uint F_0092a4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00561490(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0092a510 */
uint F_0092a510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0092a550 */
uint F_0092a550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0092a590 */
uint F_0092a590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_2);
  return (uint)this;
}

/* ref: FUN_0092a5c0 */
uint F_0092a5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x92a5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00561490(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0092a600 */
uint F_0092a600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92a600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917470(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092a790 */
uint F_0092a790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92a790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009174e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092a920 */
uint F_0092a920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92a920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917550(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092aab0 */
uint F_0092aab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92aab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009175c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092ac40 */
uint F_0092ac40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92ac40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917630(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092add0 */
uint F_0092add0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92add0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009176a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092af60 */
uint F_0092af60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92af60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917710(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b0f0 */
uint F_0092b0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917780(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b280 */
uint F_0092b280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009177f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b410 */
uint F_0092b410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917860(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b5a0 */
uint F_0092b5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009178d0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b730 */
uint F_0092b730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917940(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092b8c0 */
uint F_0092b8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92b8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009179b0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092ba50 */
uint F_0092ba50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92ba50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917a20(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092bbe0 */
uint F_0092bbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92bbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917a90(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092bd70 */
uint F_0092bd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92bd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917b40(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092bf00 */
uint F_0092bf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92bf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917bb0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c090 */
uint F_0092c090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917c20(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c220 */
uint F_0092c220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917c90(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c3b0 */
uint F_0092c3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917d00(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c540 */
uint F_0092c540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917d70(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c6d0 */
uint F_0092c6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917de0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c860 */
uint F_0092c860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917e50(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092c9f0 */
uint F_0092c9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92c9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917ec0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092cb80 */
uint F_0092cb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92cb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917f70(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092cd10 */
uint F_0092cd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92cd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00917fe0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092cea0 */
uint F_0092cea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92cea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918050(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092d030 */
uint F_0092d030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92d030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009180c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092d1c0 */
uint F_0092d1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92d1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918130(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092d350 */
uint F_0092d350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92d350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009181a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092d4e0 */
uint F_0092d4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92d4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918210(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092d670 */
uint F_0092d670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92d670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918280(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092d800 */
uint F_0092d800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92d800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009182f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092d990 */
uint F_0092d990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92d990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918360(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092db20 */
uint F_0092db20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92db20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009183d0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092dcb0 */
uint F_0092dcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92dcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918470(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092de40 */
uint F_0092de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92de40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009184e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092dfd0 */
uint F_0092dfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92dfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918550(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092e160 */
uint F_0092e160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92e160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009185c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092e2f0 */
uint F_0092e2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92e2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918670(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092e480 */
uint F_0092e480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92e480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009186e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092e610 */
uint F_0092e610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92e610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918750(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092e7a0 */
uint F_0092e7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92e7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918800(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092e930 */
uint F_0092e930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92e930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918870(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092eac0 */
uint F_0092eac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92eac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009188e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092ec50 */
uint F_0092ec50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92ec50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918950(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092ede0 */
uint F_0092ede0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92ede0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009189c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092ef70 */
uint F_0092ef70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92ef70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918a30(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092f100 */
uint F_0092f100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92f100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918aa0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092f290 */
uint F_0092f290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92f290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918b10(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092f420 */
uint F_0092f420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92f420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918b80(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092f5b0 */
uint F_0092f5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92f5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918bf0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092f740 */
uint F_0092f740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92f740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918c80(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092f8d0 */
uint F_0092f8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92f8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918d10(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092fa60 */
uint F_0092fa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92fa60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918d80(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092fbf0 */
uint F_0092fbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92fbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918df0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092fd80 */
uint F_0092fd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92fd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918e80(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0092ff10 */
uint F_0092ff10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x92ff10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918f00(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009300a0 */
uint F_009300a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9300a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918f70(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00930230 */
uint F_00930230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x930230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00918fe0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009303c0 */
uint F_009303c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9303c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919050(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00930550 */
uint F_00930550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x930550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009190c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009306e0 */
uint F_009306e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9306e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919130(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00930870 */
uint F_00930870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x930870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009191a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00930a00 */
uint F_00930a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x930a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919210(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00930b90 */
uint F_00930b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x930b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919280(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00930d20 */
uint F_00930d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x930d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009192f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00930eb0 */
uint F_00930eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x930eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919380(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00931040 */
uint F_00931040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x931040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009193f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009311d0 */
uint F_009311d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9311d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919460(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00931360 */
uint F_00931360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x931360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009194d0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009314f0 */
uint F_009314f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9314f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919540(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00931680 */
uint F_00931680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x931680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009195b0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00931810 */
uint F_00931810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x931810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919620(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009319a0 */
uint F_009319a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9319a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919690(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00931b30 */
uint F_00931b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x931b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919700(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00931cc0 */
uint F_00931cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x931cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919780(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00931e50 */
uint F_00931e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x931e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919810(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00931fe0 */
uint F_00931fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x931fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919890(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00932170 */
uint F_00932170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x932170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919900(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00932300 */
uint F_00932300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x932300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919970(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00932490 */
uint F_00932490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x932490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_009199e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00932620 */
uint F_00932620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x932620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919a50(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009327b0 */
uint F_009327b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9327b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919ad0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00932940 */
uint F_00932940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x932940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919b40(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00932ad0 */
uint F_00932ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x932ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919bb0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00932c60 */
uint F_00932c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x932c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919c20(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00932df0 */
uint F_00932df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x932df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919c90(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00932f80 */
uint F_00932f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x932f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919d20(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00933110 */
uint F_00933110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x933110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919d90(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009332a0 */
uint F_009332a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9332a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919e00(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00933430 */
uint F_00933430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x933430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919e70(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009335c0 */
uint F_009335c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9335c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919ee0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00933750 */
uint F_00933750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x933750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919f50(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009338e0 */
uint F_009338e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9338e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_00919fc0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00933a70 */
uint F_00933a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x933a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a030(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00933c00 */
uint F_00933c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x933c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a0a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00933d90 */
uint F_00933d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x933d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a110(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00933f20 */
uint F_00933f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x933f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a180(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009340b0 */
uint F_009340b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9340b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a1f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00934240 */
uint F_00934240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x934240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a260(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009343d0 */
uint F_009343d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9343d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a2d0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00934560 */
uint F_00934560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x934560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a380(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009346f0 */
uint F_009346f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9346f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a410(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00934880 */
uint F_00934880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x934880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a4a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00934a10 */
uint F_00934a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x934a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a510(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00934ba0 */
uint F_00934ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x934ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a590(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00934d30 */
uint F_00934d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x934d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a610(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00934ec0 */
uint F_00934ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x934ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a680(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00935050 */
uint F_00935050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x935050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a710(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009351e0 */
uint F_009351e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9351e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a780(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00935370 */
uint F_00935370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x935370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a7f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00935500 */
uint F_00935500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x935500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a860(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00935690 */
uint F_00935690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x935690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a900(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00935820 */
uint F_00935820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x935820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091a990(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009359b0 */
uint F_009359b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9359b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091aa00(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00935b40 */
uint F_00935b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x935b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091aa70(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00935cd0 */
uint F_00935cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x935cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091aae0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00935e60 */
uint F_00935e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x935e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091ab50(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00935ff0 */
uint F_00935ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x935ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091abc0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00936180 */
uint F_00936180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x936180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091ac30(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00936310 */
uint F_00936310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x936310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091aca0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009364a0 */
uint F_009364a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9364a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091ad10(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00936630 */
uint F_00936630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x936630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091adc0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009367c0 */
uint F_009367c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9367c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091ae30(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00936950 */
uint F_00936950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x936950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091aea0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00936ae0 */
uint F_00936ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x936ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091af10(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00936c70 */
uint F_00936c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x936c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091afb0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00936e00 */
uint F_00936e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x936e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b020(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00936f90 */
uint F_00936f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x936f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b0c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00937120 */
uint F_00937120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x937120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b160(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009372b0 */
uint F_009372b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9372b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b200(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00937440 */
uint F_00937440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x937440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b270(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009375d0 */
uint F_009375d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9375d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b2e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00937760 */
uint F_00937760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x937760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b380(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009378f0 */
uint F_009378f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9378f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b400(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00937a80 */
uint F_00937a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x937a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b470(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00937c10 */
uint F_00937c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x937c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b500(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00937da0 */
uint F_00937da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x937da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b590(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00937f30 */
uint F_00937f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x937f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b620(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009380c0 */
uint F_009380c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9380c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b690(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00938250 */
uint F_00938250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x938250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b700(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009383e0 */
uint F_009383e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9383e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b770(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00938570 */
uint F_00938570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x938570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b7e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00938700 */
uint F_00938700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x938700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b880(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00938890 */
uint F_00938890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x938890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b8f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00938a20 */
uint F_00938a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x938a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b960(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00938bb0 */
uint F_00938bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x938bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091b9d0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00938d40 */
uint F_00938d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x938d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091ba70(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00938ed0 */
uint F_00938ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x938ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091bae0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00939060 */
uint F_00939060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x939060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091bb50(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009391f0 */
uint F_009391f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9391f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091bbc0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00939380 */
uint F_00939380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x939380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091bc30(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00939510 */
uint F_00939510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x939510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091bca0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009396a0 */
uint F_009396a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9396a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091bd10(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00939830 */
uint F_00939830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x939830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091bdb0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009399c0 */
uint F_009399c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9399c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091be50(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00939b50 */
uint F_00939b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x939b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091bee0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00939ce0 */
uint F_00939ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x939ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091bf50(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00939e70 */
uint F_00939e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x939e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091bfc0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093a000 */
uint F_0093a000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93a000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c030(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093a190 */
uint F_0093a190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93a190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c0a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093a320 */
uint F_0093a320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93a320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c140(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093a4b0 */
uint F_0093a4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93a4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c1f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093a640 */
uint F_0093a640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93a640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c2a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093a7d0 */
uint F_0093a7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93a7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c310(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093a960 */
uint F_0093a960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93a960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c380(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093aaf0 */
uint F_0093aaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93aaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c3f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093ac80 */
uint F_0093ac80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93ac80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c460(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093ae10 */
uint F_0093ae10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93ae10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c4e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093afa0 */
uint F_0093afa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93afa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c550(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093b130 */
uint F_0093b130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93b130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c5c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093b2c0 */
uint F_0093b2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93b2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c630(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093b450 */
uint F_0093b450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93b450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c6d0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093b5e0 */
uint F_0093b5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93b5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c760(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093b770 */
uint F_0093b770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93b770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c800(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093b900 */
uint F_0093b900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x93b900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0091c880(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0093ba90 */
uint F_0093ba90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x93ba90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x916da0));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_0093bac0 */
uint F_0093bac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x916dc0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_0093bae0 */
uint F_0093bae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(uint *)this = (uint)*param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0093bb00 */
uint F_0093bb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bb00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(uint *)this = (uint)*param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0093bb20 */
uint F_0093bb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bb20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0093bb40 */
uint F_0093bb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 8);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_0093bb80 */
uint F_0093bb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bb80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x916de0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_0093bba0 */
uint F_0093bba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x93bba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x916e00));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_0093bbd0 */
uint F_0093bbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x93bbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x916e20));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_0093bc00 */
uint F_0093bc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x93bc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x916e40));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_0093bc30 */
uint F_0093bc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x916e60));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_0093bc50 */
uint F_0093bc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_0093bc70 */
uint F_0093bc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093bcb0 */
uint F_0093bcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093bcf0 */
uint F_0093bcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093bd30 */
uint F_0093bd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093bd70 */
uint F_0093bd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bd70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093bdb0 */
uint F_0093bdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93bdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093bdf0 */
uint F_0093bdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93bdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091cbd0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093be80 */
uint F_0093be80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93be80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091cc40(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093bf10 */
uint F_0093bf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93bf10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091ccb0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093bfa0 */
uint F_0093bfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93bfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091cd20(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c030 */
uint F_0093c030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c070 */
uint F_0093c070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091cd90(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c100 */
uint F_0093c100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c140 */
uint F_0093c140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x93c140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0093c150 */
uint F_0093c150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00561490(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c190 */
uint F_0093c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00561490(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c1d0 */
uint F_0093c1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c210 */
uint F_0093c210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c250 */
uint F_0093c250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c290 */
uint F_0093c290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00561490(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c2d0 */
uint F_0093c2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c310 */
uint F_0093c310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c350 */
uint F_0093c350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c390 */
uint F_0093c390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c3d0 */
uint F_0093c3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93c3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00561490(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0093c410 */
uint F_0093c410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091cef0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c4a0 */
uint F_0093c4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x93c4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0093c4c0 */
uint F_0093c4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x93c4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0093c4e0 */
uint F_0093c4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c880(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c570 */
uint F_0093c570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091cfa0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c600 */
uint F_0093c600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091d040(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c690 */
uint F_0093c690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c140(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c720 */
uint F_0093c720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c1f0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c7b0 */
uint F_0093c7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c2a0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c840 */
uint F_0093c840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c310(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c8d0 */
uint F_0093c8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c380(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c960 */
uint F_0093c960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c3f0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093c9f0 */
uint F_0093c9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93c9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c460(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093ca80 */
uint F_0093ca80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93ca80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c4e0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093cb10 */
uint F_0093cb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93cb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c550(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093cba0 */
uint F_0093cba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93cba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c5c0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093cc30 */
uint F_0093cc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93cc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091d0e0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093ccc0 */
uint F_0093ccc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93ccc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091d150(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093cd50 */
uint F_0093cd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93cd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091bee0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093cde0 */
uint F_0093cde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93cde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091bf50(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093ce70 */
uint F_0093ce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93ce70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091bfc0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093cf00 */
uint F_0093cf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93cf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c030(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: FUN_0093cf90 */
uint F_0093cf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x93cf90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_0057f860(this,param_1);
  if ((piVar2 == (int *)0x0) || ((*(byte *)((int)piVar2 + 0xfb) & 8) == 0)) {
    piVar2 = (int *)F_0091c0a0(this,param_1,param_2,param_3);
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar2 + 0x13a);
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
      return (uint)*(byte *)((int)piVar2 + 0x13a);
    }
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0093d020 */
unsigned int F_0093d020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0093d040 */
unsigned int F_0093d040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_0093d0a0 */
unsigned int F_0093d0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0093d0c0 */
unsigned int F_0093d0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0093d0e0 */
uint F_0093d0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0093d110 */
unsigned int F_0093d110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0093d140 */
unsigned int F_0093d140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00560a60(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_0093d190 */
uint F_0093d190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return (uint)param_2;
}

/* ref: FUN_0093d1c0 */
uint F_0093d1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return (uint)param_2;
}

/* ref: FUN_0093d1f0 */
uint F_0093d1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_0093d220 */
uint F_0093d220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_0093d250 */
uint F_0093d250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_0093d280 */
uint F_0093d280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_0093d2b0 */
uint F_0093d2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0093d2d0 */
unsigned int F_0093d2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x93d2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

