#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00729c90 */
uint F_00729c90(unsigned int gen_a0)
{
  GEN_ENTER(0x729c90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar2 = uVar1 + 0x13b4;
  iVar3 = 0;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 8),*(undefined1 *)(iVar2 + 9)),
                               *(undefined1 *)(iVar2 + 10)),*(undefined1 *)(iVar2 + 0xb));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729ce0 */
uint F_00729ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x729ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar2 = uVar1 + 0x13b4;
  iVar3 = 0;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 8),*(undefined1 *)(iVar2 + 9)),
                               *(undefined1 *)(iVar2 + 10)),*(undefined1 *)(iVar2 + 0xb));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729d30 */
byte F_00729d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 0xd + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729d80 */
byte F_00729d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 0xc + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729dd0 */
byte F_00729dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 0xb + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729e20 */
byte F_00729e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 10 + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729e70 */
byte F_00729e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 9 + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729ec0 */
byte F_00729ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 8 + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729f10 */
uint F_00729f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x729f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00729f90 */
uint F_00729f90(unsigned int gen_a0)
{
  GEN_ENTER(0x729f90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729fa0 */
uint F_00729fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x729fa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729fb0 */
uint F_00729fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x729fb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729fc0 */
uint F_00729fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x729fc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729fd0 */
uint F_00729fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x729fd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729fe0 */
uint F_00729fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x729fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a060 */
uint F_0072a060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a0e0 */
uint F_0072a0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a0e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a0f0 */
uint F_0072a0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a0f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a100 */
uint F_0072a100(unsigned int gen_a0)
{
  GEN_ENTER(0x72a100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a110 */
uint F_0072a110(unsigned int gen_a0)
{
  GEN_ENTER(0x72a110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a120 */
uint F_0072a120(unsigned int gen_a0)
{
  GEN_ENTER(0x72a120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a130 */
uint F_0072a130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a1b0 */
uint F_0072a1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a230 */
uint F_0072a230(unsigned int gen_a0)
{
  GEN_ENTER(0x72a230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a240 */
uint F_0072a240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a2c0 */
uint F_0072a2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a2c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a2d0 */
uint F_0072a2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a2d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a2e0 */
uint F_0072a2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a360 */
uint F_0072a360(unsigned int gen_a0)
{
  GEN_ENTER(0x72a360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a370 */
uint F_0072a370(unsigned int gen_a0)
{
  GEN_ENTER(0x72a370u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a380 */
uint F_0072a380(unsigned int gen_a0)
{
  GEN_ENTER(0x72a380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a390 */
uint F_0072a390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a410 */
uint F_0072a410(unsigned int gen_a0)
{
  GEN_ENTER(0x72a410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a420 */
uint F_0072a420(unsigned int gen_a0)
{
  GEN_ENTER(0x72a420u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a430 */
uint F_0072a430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a4b0 */
uint F_0072a4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a4b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a4c0 */
uint F_0072a4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72a4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072a4e0 */
unsigned int F_0072a4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72a4e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0072a500 */
uint F_0072a500(unsigned int gen_a0)
{
  GEN_ENTER(0x72a500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a510 */
uint F_0072a510(unsigned int gen_a0)
{
  GEN_ENTER(0x72a510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a520 */
uint F_0072a520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72a520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072a540 */
uint F_0072a540(unsigned int gen_a0)
{
  GEN_ENTER(0x72a540u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a550 */
uint F_0072a550(unsigned int gen_a0)
{
  GEN_ENTER(0x72a550u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a560 */
uint F_0072a560(unsigned int gen_a0)
{
  GEN_ENTER(0x72a560u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a570 */
uint F_0072a570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a5f0 */
uint F_0072a5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a600 */
uint F_0072a600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a680 */
uint F_0072a680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a700 */
uint F_0072a700(unsigned int gen_a0)
{
  GEN_ENTER(0x72a700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a710 */
uint F_0072a710(unsigned int gen_a0)
{
  GEN_ENTER(0x72a710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a720 */
uint F_0072a720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a7a0 */
uint F_0072a7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a820 */
uint F_0072a820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a8a0 */
uint F_0072a8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072ad00 */
byte F_0072ad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e6 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ad30 */
byte F_0072ad30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ad30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e5 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ad60 */
byte F_0072ad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e4 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ad90 */
byte F_0072ad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ad90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e3 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072adc0 */
byte F_0072adc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72adc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e2 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072adf0 */
byte F_0072adf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72adf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e1 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ae20 */
byte F_0072ae20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ae20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e0 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ae50 */
byte F_0072ae50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ae50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1df + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ae80 */
byte F_0072ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ae80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1de + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072aeb0 */
uint F_0072aeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72aeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072af30 */
uint F_0072af30(unsigned int gen_a0)
{
  GEN_ENTER(0x72af30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072af40 */
uint F_0072af40(unsigned int gen_a0)
{
  GEN_ENTER(0x72af40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072af50 */
uint F_0072af50(unsigned int gen_a0)
{
  GEN_ENTER(0x72af50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072af60 */
uint F_0072af60(unsigned int gen_a0)
{
  GEN_ENTER(0x72af60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072af70 */
uint F_0072af70(unsigned int gen_a0)
{
  GEN_ENTER(0x72af70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072afd0 */
uint F_0072afd0(unsigned int gen_a0)
{
  GEN_ENTER(0x72afd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072afe0 */
uint F_0072afe0(unsigned int gen_a0)
{
  GEN_ENTER(0x72afe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072aff0 */
uint F_0072aff0(unsigned int gen_a0)
{
  GEN_ENTER(0x72aff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b000 */
uint F_0072b000(unsigned int gen_a0)
{
  GEN_ENTER(0x72b000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b020 */
uint F_0072b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0072b050 */
uint F_0072b050(unsigned int gen_a0)
{
  GEN_ENTER(0x72b050u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b060 */
uint F_0072b060(unsigned int gen_a0)
{
  GEN_ENTER(0x72b060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b080 */
uint F_0072b080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b080u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0072b0b0 */
uint F_0072b0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b0b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b0c0 */
uint F_0072b0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b0c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b0e0 */
uint F_0072b0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b0e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b0f0 */
uint F_0072b0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b0f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b100 */
uint F_0072b100(unsigned int gen_a0)
{
  GEN_ENTER(0x72b100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b110 */
uint F_0072b110(unsigned int gen_a0)
{
  GEN_ENTER(0x72b110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b120 */
uint F_0072b120(unsigned int gen_a0)
{
  GEN_ENTER(0x72b120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b150 */
uint F_0072b150(unsigned int gen_a0)
{
  GEN_ENTER(0x72b150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b160 */
uint F_0072b160(unsigned int gen_a0)
{
  GEN_ENTER(0x72b160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b170 */
uint F_0072b170(unsigned int gen_a0)
{
  GEN_ENTER(0x72b170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b180 */
uint F_0072b180(unsigned int gen_a0)
{
  GEN_ENTER(0x72b180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b1a0 */
uint F_0072b1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b1a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b1b0 */
uint F_0072b1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b1b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b1c0 */
uint F_0072b1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b1c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b1d0 */
uint F_0072b1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b1d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b210 */
uint F_0072b210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72b210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0072b230 */
uint F_0072b230(unsigned int gen_a0)
{
  GEN_ENTER(0x72b230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b240 */
uint F_0072b240(unsigned int gen_a0)
{
  GEN_ENTER(0x72b240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b260 */
uint F_0072b260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b260u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0072b290 */
uint F_0072b290(unsigned int gen_a0)
{
  GEN_ENTER(0x72b290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b2a0 */
uint F_0072b2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b2a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b2b0 */
uint F_0072b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b2b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b2c0 */
uint F_0072b2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b2c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b2d0 */
uint F_0072b2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b2d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b2e0 */
uint F_0072b2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b2e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b310 */
uint F_0072b310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b310u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0072b3e0 */
uint F_0072b3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b3f0 */
uint F_0072b3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b410 */
uint F_0072b410(unsigned int gen_a0)
{
  GEN_ENTER(0x72b410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b420 */
uint F_0072b420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b480 */
uint F_0072b480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b480u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 1) * 2;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0072b4e0 */
uint F_0072b4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b4e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b4f0 */
uint F_0072b4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b530 */
uint F_0072b530(unsigned int gen_a0)
{
  GEN_ENTER(0x72b530u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b540 */
uint F_0072b540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b570 */
uint F_0072b570(unsigned int gen_a0)
{
  GEN_ENTER(0x72b570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b580 */
uint F_0072b580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b5a0 */
uint F_0072b5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b5a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b5b0 */
uint F_0072b5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b5f0 */
uint F_0072b5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b600 */
uint F_0072b600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b620 */
uint F_0072b620(unsigned int gen_a0)
{
  GEN_ENTER(0x72b620u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b630 */
uint F_0072b630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b680 */
uint F_0072b680(unsigned int gen_a0)
{
  GEN_ENTER(0x72b680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b690 */
uint F_0072b690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b6b0 */
uint F_0072b6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b6b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b6c0 */
uint F_0072b6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b6e0 */
uint F_0072b6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b6e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b6f0 */
uint F_0072b6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b710 */
uint F_0072b710(unsigned int gen_a0)
{
  GEN_ENTER(0x72b710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b720 */
uint F_0072b720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b760 */
uint F_0072b760(unsigned int gen_a0)
{
  GEN_ENTER(0x72b760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b770 */
uint F_0072b770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72b770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0072b790 */
uint F_0072b790(unsigned int gen_a0)
{
  GEN_ENTER(0x72b790u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b7a0 */
uint F_0072b7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b7a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b7b0 */
uint F_0072b7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b7c0 */
uint F_0072b7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b7c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b7d0 */
uint F_0072b7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b7d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b7e0 */
uint F_0072b7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b7e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b7f0 */
uint F_0072b7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b7f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b800 */
uint F_0072b800(unsigned int gen_a0)
{
  GEN_ENTER(0x72b800u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b810 */
uint F_0072b810(unsigned int gen_a0)
{
  GEN_ENTER(0x72b810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b820 */
uint F_0072b820(unsigned int gen_a0)
{
  GEN_ENTER(0x72b820u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b830 */
uint F_0072b830(unsigned int gen_a0)
{
  GEN_ENTER(0x72b830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b840 */
uint F_0072b840(unsigned int gen_a0)
{
  GEN_ENTER(0x72b840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b850 */
uint F_0072b850(unsigned int gen_a0)
{
  GEN_ENTER(0x72b850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b860 */
uint F_0072b860(unsigned int gen_a0)
{
  GEN_ENTER(0x72b860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b870 */
uint F_0072b870(unsigned int gen_a0)
{
  GEN_ENTER(0x72b870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b880 */
uint F_0072b880(unsigned int gen_a0)
{
  GEN_ENTER(0x72b880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b890 */
uint F_0072b890(unsigned int gen_a0)
{
  GEN_ENTER(0x72b890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b8a0 */
uint F_0072b8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b8a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b8b0 */
uint F_0072b8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b8c0 */
uint F_0072b8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b8c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b8d0 */
uint F_0072b8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b8d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b8e0 */
uint F_0072b8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b8f0 */
uint F_0072b8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72b8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_0042ccf0((undefined *)((int)this + 4),param_1 + 2);
  F_0042ccf0((undefined *)((int)this + 0x58),param_1 + 0x2c);
  *(undefined2 *)((int)this + 0xac) = param_1[0x56];
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0x5a);
  return (uint)this;
}

/* ref: FUN_0072b950 */
uint F_0072b950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72b950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  F_0042ccf0((undefined *)((int)this + 8),param_1 + 8);
  *(undefined1 *)((int)this + 0x5c) = param_1[0x5c];
  *(undefined1 *)((int)this + 0x5d) = param_1[0x5d];
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)((int)this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  return (uint)this;
}

/* ref: FUN_0072bc00 */
uint F_0072bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72bc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined1 *)((int)this + 2) = *(undefined1 *)(param_1 + 1);
  *(undefined2 *)((int)this + 4) = param_1[2];
  *(undefined2 *)((int)this + 6) = param_1[3];
  *(undefined2 *)((int)this + 8) = param_1[4];
  *(undefined2 *)((int)this + 10) = param_1[5];
  *(undefined2 *)((int)this + 0xc) = param_1[6];
  *(undefined2 *)((int)this + 0xe) = param_1[7];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0x11) = *(undefined1 *)((int)param_1 + 0x11);
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)((int)this + 0x13) = *(undefined1 *)((int)param_1 + 0x13);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)((int)this + 0x1c) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)((int)this + 0x1d) = *(undefined1 *)((int)param_1 + 0x1d);
  F_0042ccf0((undefined *)((int)this + 0x20),param_1 + 0x10);
  return (uint)this;
}

/* ref: FUN_0072bc90 */
uint F_0072bc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72bc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 2);
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 0x11) = *(undefined1 *)((int)param_1 + 0x11);
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)((int)param_1 + 0x12);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  F_0042ccf0((undefined *)((int)this + 0x1c),param_1 + 7);
  puVar2 = param_1 + 0x1c;
  puVar3 = (undefined4 *)((int)this + 0x70);
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_0072bd00 */
uint F_0072bd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72bd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_0042ccf0((undefined *)((int)this + 8),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0072c0a0 */
uint F_0072c0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72c0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0072c190 */
uint F_0072c190(unsigned int gen_a0)
{
  GEN_ENTER(0x72c190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x1d) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x1d) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x1d) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x1d) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x1d);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x1d);
    }
    if (*(char *)(*(int *)this + 0x1d) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0072c1f0 */
uint F_0072c1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72c1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x31) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x31) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x31) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x31) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x31);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x31);
    }
    if (*(char *)(*(int *)this + 0x31) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0072c250 */
uint F_0072c250(unsigned int gen_a0)
{
  GEN_ENTER(0x72c250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x89) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x89) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x89) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x89) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x89);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x89);
    }
    if (*(char *)(*(int *)this + 0x89) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0072c2d0 */
uint F_0072c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72c2d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0072c310 */
uint F_0072c310(unsigned int gen_a0)
{
  GEN_ENTER(0x72c310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x25) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x25) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x25) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x25) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x25);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x25);
    }
    if (*(char *)(*(int *)this + 0x25) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0072c380 */
uint F_0072c380(unsigned int gen_a0)
{
  GEN_ENTER(0x72c380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
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
      return (uint)this;
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
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0072c3e0 */
uint F_0072c3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  return (uint)this;
}

/* ref: FUN_0072c410 */
uint F_0072c410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_0072c430 */
uint F_0072c430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  return (uint)this;
}

/* ref: FUN_0072c460 */
uint F_0072c460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_0072c480 */
uint F_0072c480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c4a0 */
uint F_0072c4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c4c0 */
uint F_0072c4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = *param_1;
  F_00720450((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_0072c4f0 */
uint F_0072c4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c510 */
uint F_0072c510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  *(undefined4 *)((int)this + 0x10) = param_2[3];
  *(undefined4 *)((int)this + 0x14) = param_2[4];
  return (uint)this;
}

/* ref: FUN_0072c540 */
uint F_0072c540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c560 */
uint F_0072c560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_0072c580 */
uint F_0072c580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c5a0 */
uint F_0072c5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c5c0 */
uint F_0072c5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_0072c600 */
uint F_0072c600(unsigned int gen_a0)
{
  GEN_ENTER(0x72c600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c620 */
uint F_0072c620(unsigned int gen_a0)
{
  GEN_ENTER(0x72c620u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c630 */
uint F_0072c630(unsigned int gen_a0)
{
  GEN_ENTER(0x72c630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c650 */
uint F_0072c650(unsigned int gen_a0)
{
  GEN_ENTER(0x72c650u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c680 */
uint F_0072c680(unsigned int gen_a0)
{
  GEN_ENTER(0x72c680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c6b0 */
uint F_0072c6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72c6b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c6c0 */
uint F_0072c6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72c6c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c6d0 */
uint F_0072c6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x72c6d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c6e0 */
uint F_0072c6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72c6e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c6f0 */
uint F_0072c6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72c6f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c700 */
uint F_0072c700(unsigned int gen_a0)
{
  GEN_ENTER(0x72c700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c710 */
uint F_0072c710(unsigned int gen_a0)
{
  GEN_ENTER(0x72c710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c720 */
uint F_0072c720(unsigned int gen_a0)
{
  GEN_ENTER(0x72c720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c730 */
uint F_0072c730(unsigned int gen_a0)
{
  GEN_ENTER(0x72c730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c770 */
uint F_0072c770(unsigned int gen_a0)
{
  GEN_ENTER(0x72c770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c7a0 */
uint F_0072c7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c7a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_0072c800 */
uint F_0072c800(unsigned int gen_a0)
{
  GEN_ENTER(0x72c800u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c810 */
uint F_0072c810(unsigned int gen_a0)
{
  GEN_ENTER(0x72c810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c820 */
uint F_0072c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c840 */
uint F_0072c840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c860 */
uint F_0072c860(unsigned int gen_a0)
{
  GEN_ENTER(0x72c860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c870 */
uint F_0072c870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c890 */
uint F_0072c890(unsigned int gen_a0)
{
  GEN_ENTER(0x72c890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c8a0 */
uint F_0072c8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c8c0 */
uint F_0072c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c8e0 */
uint F_0072c8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72c8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c8f0 */
uint F_0072c8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c910 */
uint F_0072c910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c930 */
uint F_0072c930(unsigned int gen_a0)
{
  GEN_ENTER(0x72c930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c940 */
uint F_0072c940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c960 */
uint F_0072c960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c980 */
uint F_0072c980(unsigned int gen_a0)
{
  GEN_ENTER(0x72c980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072c990 */
uint F_0072c990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c9b0 */
uint F_0072c9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c9d0 */
uint F_0072c9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072c9f0 */
uint F_0072c9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72c9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072ca10 */
uint F_0072ca10(unsigned int gen_a0)
{
  GEN_ENTER(0x72ca10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072ca20 */
uint F_0072ca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72ca20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072ca40 */
uint F_0072ca40(unsigned int gen_a0)
{
  GEN_ENTER(0x72ca40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072ca50 */
uint F_0072ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72ca50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072ca70 */
uint F_0072ca70(unsigned int gen_a0)
{
  GEN_ENTER(0x72ca70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072ca80 */
uint F_0072ca80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72ca80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072caa0 */
uint F_0072caa0(unsigned int gen_a0)
{
  GEN_ENTER(0x72caa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cab0 */
uint F_0072cab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72cab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072cad0 */
uint F_0072cad0(unsigned int gen_a0)
{
  GEN_ENTER(0x72cad0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cae0 */
uint F_0072cae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72cae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072cb00 */
uint F_0072cb00(unsigned int gen_a0)
{
  GEN_ENTER(0x72cb00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cb10 */
uint F_0072cb10(unsigned int gen_a0)
{
  GEN_ENTER(0x72cb10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cb30 */
uint F_0072cb30(unsigned int gen_a0)
{
  GEN_ENTER(0x72cb30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cb50 */
uint F_0072cb50(unsigned int gen_a0)
{
  GEN_ENTER(0x72cb50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cb60 */
uint F_0072cb60(unsigned int gen_a0)
{
  GEN_ENTER(0x72cb60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cb70 */
uint F_0072cb70(unsigned int gen_a0)
{
  GEN_ENTER(0x72cb70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cb80 */
uint F_0072cb80(unsigned int gen_a0)
{
  GEN_ENTER(0x72cb80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cb90 */
uint F_0072cb90(unsigned int gen_a0)
{
  GEN_ENTER(0x72cb90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cba0 */
uint F_0072cba0(unsigned int gen_a0)
{
  GEN_ENTER(0x72cba0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072cbb0 */
uint F_0072cbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72cbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_1 + 0x54);
  F_0042cbc0((undefined *)((int)this + 0xa8),param_1 + 0xa8);
  F_0042cbc0((undefined *)((int)this + 0xfc),param_1 + 0xfc);
  F_0042cbc0((undefined *)((int)this + 0x150),param_1 + 0x150);
  *(undefined4 *)((int)this + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)((int)this + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)((int)this + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)((int)this + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined1 *)((int)this + 0x1bc) = *(undefined1 *)(param_1 + 0x1bc);
  *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined1 *)((int)this + 0x1c8) = *(undefined1 *)(param_1 + 0x1c8);
  *(undefined1 *)((int)this + 0x1c9) = *(undefined1 *)(param_1 + 0x1c9);
  *(undefined1 *)((int)this + 0x1ca) = *(undefined1 *)(param_1 + 0x1ca);
  F_00720450((undefined *)((int)this + 0x1cc),param_1 + 0x1cc);
  return (uint)this;
}

/* ref: FUN_0072ccb0 */
uint F_0072ccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ccb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined2 *)((int)this + 0x2c) = *(undefined2 *)(param_1 + 0xb);
  F_0042cbc0((undefined *)((int)this + 0x30),param_1 + 0xc);
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined1 *)((int)this + 0x88) = *(undefined1 *)(param_1 + 0x22);
  return (uint)this;
}

/* ref: FUN_0072cd10 */
uint F_0072cd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72cd10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0072cd30 */
unsigned int F_0072cd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72cd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_0072cd50 */
uint F_0072cd50(unsigned int gen_a0)
{
  GEN_ENTER(0x72cd50u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_0072cdb0 */
uint F_0072cdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72cdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_0072ce50 */
uint F_0072ce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ce50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return (uint)param_1;
}

/* ref: FUN_0072cf30 */
uint F_0072cf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72cf30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0072cf40 */
uint F_0072cf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72cf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  F_0042cbc0((undefined *)((int)this + 8),param_1 + 8);
  *(undefined1 *)((int)this + 0x5c) = param_1[0x5c];
  *(undefined1 *)((int)this + 0x5d) = param_1[0x5d];
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  puVar2 = (undefined4 *)(param_1 + 0x7c);
  puVar3 = (undefined4 *)((int)this + 0x7c);
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  return (uint)this;
}

/* ref: FUN_0072cfc0 */
uint F_0072cfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72cfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0072cff0 */
uint F_0072cff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72cff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x18));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0072d020 */
uint F_0072d020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x58));
  F_0042c880((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0072d050 */
uint F_0072d050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x1c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0072d080 */
uint F_0072d080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x20));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0072d0b0 */
uint F_0072d0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0072d0d0 */
uint F_0072d0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  return (uint)this;
}

/* ref: FUN_0072d0f0 */
uint F_0072d0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0072d110 */
uint F_0072d110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0072d130 */
uint F_0072d130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 1);
  F_0042cbc0((undefined *)((int)this + 0x58),param_1 + 0x16);
  *(undefined1 *)((int)this + 0xac) = *(undefined1 *)(param_1 + 0x2b);
  return (uint)this;
}

/* ref: FUN_0072d170 */
uint F_0072d170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_00720450((undefined *)((int)this + 4),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0072d1a0 */
uint F_0072d1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_0072cbb0((undefined *)((int)this + 4),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0072d1d0 */
uint F_0072d1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_0072d1f0 */
uint F_0072d1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)this = *(undefined2 *)param_1;
  iVar1 = 10;
  puVar2 = param_1;
  puVar3 = this;
  while( true ) {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar3 = *puVar2;
  }
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_1 + 0xc);
  F_0042cbc0((undefined *)((int)this + 0x34),param_1 + 0xd);
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  *(undefined1 *)((int)this + 0x8c) = *(undefined1 *)(param_1 + 0x23);
  return (uint)this;
}

/* ref: FUN_0072d250 */
uint F_0072d250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  F_0042cbc0((undefined *)((int)this + 0xc),param_1 + 3);
  return (uint)this;
}

/* ref: FUN_0072d280 */
uint F_0072d280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_0072d2a0 */
uint F_0072d2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0072d2c0 */
uint F_0072d2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0072d2e0 */
uint F_0072d2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0072d300 */
uint F_0072d300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: FUN_0072d320 */
uint F_0072d320(unsigned int gen_a0)
{
  GEN_ENTER(0x72d320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d330 */
uint F_0072d330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0072d340 */
uint F_0072d340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0072d350 */
uint F_0072d350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0072d360 */
uint F_0072d360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0072d370 */
uint F_0072d370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0072d380 */
uint F_0072d380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0072d3a0 */
uint F_0072d3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72d3a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d3b0 */
uint F_0072d3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72d3b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d3c0 */
uint F_0072d3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0072d3e0 */
unsigned int F_0072d3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_0072d400 */
uint F_0072d400(unsigned int gen_a0)
{
  GEN_ENTER(0x72d400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d410 */
uint F_0072d410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072d430 */
uint F_0072d430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072d450 */
uint F_0072d450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072d470 */
uint F_0072d470(unsigned int gen_a0)
{
  GEN_ENTER(0x72d470u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d480 */
uint F_0072d480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072d4a0 */
uint F_0072d4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072d4d0 */
uint F_0072d4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0072d4f0 */
uint F_0072d4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0072d510 */
uint F_0072d510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0072d530 */
uint F_0072d530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return (uint)this;
}

/* ref: FUN_0072d560 */
uint F_0072d560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_0072d5a0 */
uint F_0072d5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return (uint)this;
}

/* ref: FUN_0072d5d0 */
uint F_0072d5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72d5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0072d5f0 */
uint F_0072d5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72d5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d600 */
uint F_0072d600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_0072d620 */
uint F_0072d620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072d640 */
uint F_0072d640(unsigned int gen_a0)
{
  GEN_ENTER(0x72d640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d650 */
uint F_0072d650(unsigned int gen_a0)
{
  GEN_ENTER(0x72d650u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d660 */
uint F_0072d660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072d680 */
uint F_0072d680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_2);
  F_0042cbc0((undefined *)((int)this + 0x58),param_2 + 0x54);
  *(undefined1 *)((int)this + 0xac) = *(undefined1 *)(param_2 + 0xa8);
  return (uint)this;
}

/* ref: FUN_0072d6c0 */
uint F_0072d6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = *param_1;
  F_0072cbb0((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_0072d6f0 */
uint F_0072d6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72d6f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d700 */
uint F_0072d700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = *param_1;
  F_00720450((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_0072d730 */
uint F_0072d730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cc20(this,*param_1,REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x54) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072d760 */
uint F_0072d760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)this = *param_1;
  puVar2 = param_2;
  puVar3 = this;
  for (iVar1 = 10; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x2c) = param_2[10];
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_2 + 0xb);
  F_0042cbc0((undefined *)((int)this + 0x34),param_2 + 0xc);
  *(undefined4 *)((int)this + 0x88) = param_2[0x21];
  *(undefined1 *)((int)this + 0x8c) = *(undefined1 *)(param_2 + 0x22);
  return (uint)this;
}

/* ref: FUN_0072d7d0 */
uint F_0072d7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x72d7d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d7e0 */
uint F_0072d7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0xc),param_2 + 2);
  return (uint)this;
}

/* ref: FUN_0072d810 */
uint F_0072d810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_0072d830 */
uint F_0072d830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072d850 */
uint F_0072d850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072d870 */
uint F_0072d870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_0072d890 */
uint F_0072d890(unsigned int gen_a0)
{
  GEN_ENTER(0x72d890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d8a0 */
uint F_0072d8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72d8a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d8b0 */
uint F_0072d8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72d8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d8c0 */
uint F_0072d8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0072d8e0 */
uint F_0072d8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72d8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d8f0 */
uint F_0072d8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72d8f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d900 */
uint F_0072d900(unsigned int gen_a0)
{
  GEN_ENTER(0x72d900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d910 */
uint F_0072d910(unsigned int gen_a0)
{
  GEN_ENTER(0x72d910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d920 */
uint F_0072d920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0072d940 */
uint F_0072d940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72d940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0072d960 */
uint F_0072d960(unsigned int gen_a0)
{
  GEN_ENTER(0x72d960u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d970 */
uint F_0072d970(unsigned int gen_a0)
{
  GEN_ENTER(0x72d970u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d980 */
uint F_0072d980(unsigned int gen_a0)
{
  GEN_ENTER(0x72d980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d990 */
uint F_0072d990(unsigned int gen_a0)
{
  GEN_ENTER(0x72d990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072d9a0 */
uint F_0072d9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72d9a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072da00 */
uint F_0072da00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72da00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  *(undefined4 *)((int)this + 0x10) = param_2[2];
  *(undefined4 *)((int)this + 0x14) = param_2[3];
  *(undefined4 *)((int)this + 0x18) = param_2[4];
  *(undefined4 *)((int)this + 0x1c) = param_2[5];
  return (uint)this;
}

/* ref: FUN_0072da40 */
uint F_0072da40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72da40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  return (uint)this;
}

/* ref: FUN_0072da70 */
uint F_0072da70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72da70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  *(undefined4 *)((int)this + 0x10) = param_2[3];
  *(undefined4 *)((int)this + 0x14) = param_2[4];
  return (uint)this;
}

/* ref: FUN_0072daa0 */
uint F_0072daa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72daa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072dac0 */
uint F_0072dac0(unsigned int gen_a0)
{
  GEN_ENTER(0x72dac0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072dad0 */
uint F_0072dad0(unsigned int gen_a0)
{
  GEN_ENTER(0x72dad0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072dae0 */
uint F_0072dae0(unsigned int gen_a0)
{
  GEN_ENTER(0x72dae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072db20 */
uint F_0072db20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72db20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined2 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0x58;
    puVar3 = param_3;
    do {
      *puVar3 = *(undefined2 *)(iVar2 + -0x58);
      F_0042ccf0(puVar3 + 2,iVar2 + -0x54);
      F_0042ccf0(puVar3 + 0x2c,iVar2);
      puVar3[0x56] = *(undefined2 *)(iVar2 + 0x54);
      *(undefined4 *)(puVar3 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(puVar3 + 0x5a) = *(undefined4 *)(iVar2 + 0x5c);
      iVar1 = iVar2 + 0x60;
      puVar3 = puVar3 + 0x5c;
      iVar2 = iVar2 + 0xb8;
    } while (iVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_0072db90 */
uint F_0072db90(unsigned int gen_a0)
{
  GEN_ENTER(0x72db90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072dba0 */
uint F_0072dba0(unsigned int gen_a0)
{
  GEN_ENTER(0x72dba0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072dbb0 */
uint F_0072dbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x72dbb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072dbc0 */
uint F_0072dbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x72dbc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072dbd0 */
uint F_0072dbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x72dbd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072dbe0 */
uint F_0072dbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x72dbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x27c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0072dbf0 */
uint F_0072dbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x72dbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x8c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0072dc00 */
uint F_0072dc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72dc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_007300c0((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: FUN_0072dc10 */
uint F_0072dc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x72dc10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x274))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0072dc20 */
uint F_0072dc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x72dc20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0072dc40 */
uint F_0072dc40(unsigned int gen_a0)
{
  GEN_ENTER(0x72dc40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  return uVar1;
}

/* ref: FUN_0072dc60 */
uint F_0072dc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72dc60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::EventHandler::vf137 */
uint F_0072dcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72dcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return *(uint *)(in_ecx + 0x38) >> 0x12 & 1;
}

/* ref: Client::Game::SheetWaiterBase::vf0 */
uint F_0072dce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72dce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0072dd10 */
uint F_0072dd10(unsigned int gen_a0)
{
  GEN_ENTER(0x72dd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined2 * puVar2;
  
  F_0042b630((int)this + 0xc);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_0042e430((undefined *)((int)this + 0xc),&REFG(undefined1, 0x107fc63));
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 0x71) = 0;
  iVar1 = 0;
  puVar2 = (undefined2 *)((int)this + 0x62);
  do {
    *puVar2 = 0;
    *(undefined1 *)((int)this + iVar1 + 0x6c) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 5);
  *(undefined2 *)((int)this + 0x72) = 1;
  return (uint)this;
}

/* ref: FUN_0072dd60 */
uint F_0072dd60(unsigned int gen_a0)
{
  GEN_ENTER(0x72dd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined2 * puVar2;
  undefined * this_00;
  undefined4 * puVar3;
  int local_8;
  
  puVar3 = (undefined4 *)((int)this + 4);
  local_8 = 4;
  this_00 = (undefined *)((int)this + 0x10);
  do {
    F_0042b630(this_00);
    *puVar3 = 0;
    *(undefined4 *)((int)this_00 + -8) = 0;
    *(undefined4 *)((int)this_00 + -4) = 0;
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined1 *)((int)this_00 + 0x54) = 0;
    *(undefined1 *)((int)this_00 + 0x65) = 0;
    iVar1 = 0;
    puVar2 = (undefined2 *)((int)this_00 + 0x56);
    do {
      *puVar2 = 0;
      *(undefined1 *)((int)this_00 + iVar1 + 0x60) = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < 5);
    *(undefined2 *)((int)this_00 + 0x66) = 1;
    puVar3 = puVar3 + 0x1d;
    this_00 = (undefined *)((int)this_00 + 0x74);
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  F_0071d9a0(this);
  return (uint)this;
}

/* ref: FUN_0072de40 */
uint F_0072de40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72de40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x140 + *(int *)(in_ecx + 0x2f8);
}

/* ref: FUN_0072de60 */
uint F_0072de60(unsigned int gen_a0)
{
  GEN_ENTER(0x72de60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 0x18);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x1000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_0042e430((undefined *)((int)this + 0x18),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: FUN_0072df00 */
uint F_0072df00(unsigned int gen_a0)
{
  GEN_ENTER(0x72df00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x10) = 0xe0000000;
  *(undefined4 *)((int)this + 0x30) = 0xe0000000;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x38) = 0xffff;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x43c) = 0;
  pvVar1 = F_00c48350((undefined *)((int)this + 0x40),0,0x3fc);
  return (uint)pvVar1;
}

/* ref: FUN_0072df50 */
uint F_0072df50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72df50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b92fc));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::JournalCallback::vf0 */
uint F_0072df70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72df70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0072dfa0 */
uint F_0072dfa0(unsigned int gen_a0)
{
  GEN_ENTER(0x72dfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 8);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  F_0042e430((undefined *)((int)this + 8),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x68) = 0xffff;
  return (uint)this;
}

/* ref: FUN_0072dfe0 */
uint F_0072dfe0(unsigned int gen_a0)
{
  GEN_ENTER(0x72dfe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  int local_8;
  
  puVar1 = (undefined4 *)((int)this + 8);
  local_8 = 7;
  this_00 = (undefined *)((int)this + 0x10);
  do {
    F_0042b630(this_00);
    *puVar1 = 0;
    puVar1[1] = 0;
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x5c) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0xffff;
    *(undefined4 *)((int)this_00 + 100) = 0;
    *(undefined1 *)((int)this_00 + 0x68) = 0;
    puVar1 = puVar1 + 0x1d;
    this_00 = (undefined *)((int)this_00 + 0x74);
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_0072e070 */
uint F_0072e070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: Client::Game::Event::EventState::vf0 */
uint F_0072e0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0072e0d0 */
uint F_0072e0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + 0xc) = 2;
  F_008e9c10(this);
  *(uint *)((int)this + 0x18) = param_1;
  return param_1;
}

/* ref: FUN_0072e0f0 */
uint F_0072e0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + 0xc) = 4;
  F_008e9c10(this);
  *(uint *)((int)this + 0x18) = param_1;
  return param_1;
}

/* ref: FUN_0072e110 */
uint F_0072e110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + 0xc) = 7;
  F_008e9c10(this);
  *(uint *)((int)this + 0x18) = param_1;
  return param_1;
}

/* ref: Client::Game::Event::TalkCallback::vf1 */
uint F_0072e190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72e190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (*(int *)(this + 0x40) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x40) + 4))))(*(int * PTR32 *)(this + 0x40),param_1,this,param_2,param_3);
    return (uint)param_1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: Client::Game::Event::TalkCallback::vf2 */
uint F_0072e1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72e1f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  *(undefined4 *)(in_ecx + 0x24) = 0x3d;
  *(undefined4 *)(in_ecx + 0x28) = 0x276;
  *(undefined4 *)(in_ecx + 0x2c) = 0;
  *(undefined4 *)(in_ecx + 0x30) = 0;
  *(undefined4 *)(in_ecx + 0x34) = 0x10000;
  return 0;
}

/* ref: Client::Game::Event::TalkCallback::vf0 */
uint F_0072e220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x3c) = (*(undefined * PTR32 (*)[2])REFP(0x10b8b7c));
  *(undefined * PTR32 * PTR32 *)(this + 0x38) = (*(undefined * PTR32 (*)[2])REFP(0x10b8b7c));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: UICallbackBase_VEventHandler_Event_Game_Client_Event::vf0 */
uint F_0072e260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FormatStringCallback_VSelectOkCallback_Event_Game_Client_Event::vf0 */
uint F_0072e290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FormatStringCallback_VSelectYesNoCallback_Event_Game_Client_Event::vf0 */
uint F_0072e2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FormatStringCallback_VSelectYesNoCountCallback_Event_Game_Client_Event::vf0 */
uint F_0072e2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FormatStringCallback_VSelectYesNoCheckCallback_Event_Game_Client_Event::vf0 */
uint F_0072e320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FormatStringCallback_VSelectStringCallback_Event_Game_Client_Event::vf0 */
uint F_0072e350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FormatStringCallback_VSelectIconStringCallback_Event_Game_Client_Event::vf0 */
uint F_0072e380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FormatStringCallback_VSelectListCallback_Event_Game_Client_Event::vf0 */
uint F_0072e3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::ScreenTextCallback::vf1 */
uint F_0072e410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72e410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ScreenTextCallback::vf2 */
uint F_0072e440(unsigned int gen_a0)
{
  GEN_ENTER(0x72e440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined2 *)(in_ecx + 0x20) = 0x101;
  *(undefined1 *)(in_ecx + 0x22) = 0;
  return 0;
}

/* ref: FUN_0072e460 */
uint F_0072e460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72e460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar7 = *(undefined4 *)((int)this + 0x1c);
  uVar5 = (uint)*(byte *)((int)this + 0x20);
  uVar3 = (uint)*(byte *)((int)this + 0x21);
  iVar1 = *piVar2;
  uVar6 = *(undefined4 *)((int)this + 0x18);
  uVar4 = F_0042a990(param_2);
  ((code *)*(gen_code32 *)(iVar1 + 0xdc))(piVar2,0,uVar4,uVar6,uVar5,uVar7,uVar3);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar3;
}

/* ref: Client::Game::Event::ScreenTextCallback::vf0 */
uint F_0072e4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0072e4e0 */
uint F_0072e4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72e4e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9334));
  in_ecx[4] = (*(undefined * PTR32 (*)[3])REFP(0x10b9154));
  in_ecx[5] = in_ecx;
  F_0042b630(in_ecx + 6);
  *(undefined1 *)(in_ecx + 0x1c) = 0;
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::BattleTalkCallback::vf1 */
uint F_0072e510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72e510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_0072e530 */
uint F_0072e530(unsigned int gen_a0)
{
  GEN_ENTER(0x72e530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b9334));
  uVar1 = F_0042c880((undefined *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return (uint)uVar1;
}

/* ref: Client::Game::Event::BattleTalkCallback::vf2 */
uint F_0072e550(unsigned int gen_a0)
{
  GEN_ENTER(0x72e550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined1 *)(in_ecx + 0x70) = 0;
  return 0;
}

/* ref: FUN_0072e560 */
uint F_0072e560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72e560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  fVar5 = (float10)*(int *)((int)this + 0x6c);
  iVar1 = *piVar2;
  if (*(int *)((int)this + 0x6c) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar6 = (float)(fVar5 * (float10)REFG(double, 0x1091858));
  uVar3 = F_0042a990(param_2);
  uVar4 = F_0042a990((int)this + 0x18);
  ((code *)*(gen_code32 *)(iVar1 + 0x108))(piVar2,uVar4,uVar3,(undefined4)gen_fl2bits(fVar6));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar3;
}

/* ref: Client::Game::Event::BattleTalkCallback::vf0 */
uint F_0072e5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b9334));
  F_0042c880(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::PromptCallback::vf1 */
uint F_0072e630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72e630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(this + 4) != 0) {
    if (param_3 < 1) {
      iVar1 = -2;
    }
    else if ((*param_2 & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
    }
    if (((iVar1 == 1) || (iVar1 == -2)) || (iVar1 == -1)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xf4))))(*(int * PTR32 *)(this + 4),0xfffffffe,0);
    }
    else if (param_3 < 2) {
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xf4))))(*(int * PTR32 *)(this + 4),0,uVar2);
    }
    else {
      if ((param_2[0x10] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x14);
      }
      if ((param_2[8] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0xc);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xf0))))(*(int * PTR32 *)(this + 4),0,uVar3,uVar2);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::PromptCallback::vf0 */
uint F_0072e700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::MogLetterCallback::vf1 */
uint F_0072e750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72e750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  
  if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  if ((iVar1 < 0) && (*(int *)(this + 4) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xf8))))(*(int * PTR32 *)(this + 4),iVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::MogLetterCallback::vf0 */
uint F_0072e7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::NpcRepairCallback::vf1 */
uint F_0072e800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72e800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(int *)(this + 4) != 0) {
    if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xfc))))(*(int * PTR32 *)(this + 4),uVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::NpcRepairCallback::vf0 */
uint F_0072e860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::CutSceneReplayCallback::vf1 */
uint F_0072e8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72e8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  if (*(int *)(this + 4) != 0) {
    if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x100))))(*(int * PTR32 *)(this + 4),iVar2);
    bVar1 = iVar2 < 1;
    if (!bVar1) goto LAB_0072e90c;
  }
  F_00a70580(&REFG(undefined, 0x14ac288));
  F_00a6cdf0(1);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
LAB_0072e90c: ;
  *(bool *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::CutSceneReplayCallback::vf0 */
uint F_0072e930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::CompanyChestCallback::vf1 */
uint F_0072e980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72e980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(int *)(this + 4) != 0) {
    if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x104))))(*(int * PTR32 *)(this + 4),uVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::CompanyChestCallback::vf0 */
uint F_0072e9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72e9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::FreeCompanyExchangeCallback::vf1 */
uint F_0072ea30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72ea30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(int *)(this + 4) != 0) {
    if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x108))))(*(int * PTR32 *)(this + 4),uVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::FreeCompanyExchangeCallback::vf0 */
uint F_0072ea90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ea90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::FreeCompanyCrestEditorCallback::vf1 */
uint F_0072eae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72eae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(int *)(this + 4) != 0) {
    if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x10c))))(*(int * PTR32 *)(this + 4),uVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::FreeCompanyCrestEditorCallback::vf0 */
uint F_0072eb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72eb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::FreeCompanyCrestDecalCallback::vf1 */
uint F_0072eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72eb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(int *)(this + 4) != 0) {
    if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x110))))(*(int * PTR32 *)(this + 4),uVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::FreeCompanyCrestDecalCallback::vf0 */
uint F_0072ebf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::MaterializeCallback::vf1 */
uint F_0072ec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72ec40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(int *)(this + 4) != 0) {
    if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x114))))(*(int * PTR32 *)(this + 4),uVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::MaterializeCallback::vf0 */
uint F_0072eca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72eca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::SuspendedMateriaExchangeCallback::vf1 */
uint F_0072ecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72ecf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(int *)(this + 4) != 0) {
    if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x118))))(*(int * PTR32 *)(this + 4),uVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::SuspendedMateriaExchangeCallback::vf0 */
uint F_0072ed50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ed50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::SuspendedMateriaSellCallback::vf1 */
uint F_0072eda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72eda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(int *)(this + 4) != 0) {
    if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x11c))))(*(int * PTR32 *)(this + 4),uVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::SuspendedMateriaSellCallback::vf0 */
uint F_0072ee00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ee00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LegacyItemStorageCallback::vf1 */
uint F_0072ee50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x72ee50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(int *)(this + 4) != 0) {
    if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x120))))(*(int * PTR32 *)(this + 4),uVar1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

