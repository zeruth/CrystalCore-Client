#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00602a50 */
uint F_00602a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602a50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,900);
  return uVar1;
}

/* ref: FUN_00602a80 */
uint F_00602a80(unsigned int gen_a0)
{
  GEN_ENTER(0x602a80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00602a90 */
uint F_00602a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602a90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00602ac0 */
uint F_00602ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602ac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00602af0 */
uint F_00602af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602af0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00602b20 */
uint F_00602b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602b20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,900);
  return uVar1;
}

/* ref: FUN_00602b70 */
uint F_00602b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 8 + (int)this;
}

/* ref: FUN_00602b90 */
uint F_00602b90(unsigned int gen_a0)
{
  GEN_ENTER(0x602b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00602ba0 */
uint F_00602ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x602ba0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00602bc0 */
uint F_00602bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602bc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00602bf0 */
uint F_00602bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) + param_1 * 4 + (int)this;
}

/* ref: FUN_00602c20 */
uint F_00602c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 8)))) + *(int *)((int)this + 8);
}

/* ref: FUN_00602c50 */
uint F_00602c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x24) + param_1 * 0xc + (int)this;
}

/* ref: FUN_00602c70 */
uint F_00602c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x2c) + param_1 * 0xc + (int)this;
}

/* ref: FUN_00602c90 */
uint F_00602c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 8)))) + *(int *)((int)this + 8);
}

/* ref: FUN_00602ce0 */
uint F_00602ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) + param_1 * 0x18 + (int)this;
}

/* ref: FUN_00602d50 */
uint F_00602d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x18 + (int)this;
}

/* ref: FUN_00602d80 */
uint F_00602d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) + param_1 * 8 + (int)this;
}

/* ref: FUN_00602db0 */
uint F_00602db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602db0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2c + *in_ecx + (int)in_ecx;
}

/* ref: FUN_00602dd0 */
byte F_00602dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602dd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 5 + in_ecx);
}

/* ref: FUN_00602de0 */
uint F_00602de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) + param_1 * 2 + (int)this;
}

/* ref: FUN_00602e00 */
uint F_00602e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602e00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx + (int)in_ecx;
}

/* ref: FUN_00602e50 */
uint F_00602e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 0x14)))) + *(int *)((int)this + 0x14)
  ;
}

/* ref: FUN_00602eb0 */
uint F_00602eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x602eb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00602ec0 */
uint F_00602ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x602ec0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00602ee0 */
uint F_00602ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602ee0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00602f20 */
uint F_00602f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 0x38)))) + *(int *)((int)this + 0x38)
  ;
}

/* ref: FUN_00602f80 */
uint F_00602f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0xc + (int)this;
}

/* ref: FUN_00602fb0 */
uint F_00602fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x602fb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x18;
}

/* ref: FUN_00602fc0 */
uint F_00602fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602fc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,900);
  return uVar1;
}

/* ref: FUN_00603000 */
uint F_00603000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,900);
  return uVar1;
}

/* ref: FUN_00603040 */
uint F_00603040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603040u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00603060 */
uint F_00603060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,900);
  return uVar1;
}

/* ref: FUN_00603090 */
uint F_00603090(unsigned int gen_a0)
{
  GEN_ENTER(0x603090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006030a0 */
uint F_006030a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6030a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *(int *)(in_ecx + 4) + in_ecx;
}

/* ref: FUN_006030d0 */
uint F_006030d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6030d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_006030e0 */
uint F_006030e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6030e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00603110 */
uint F_00603110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603110u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,900);
  return uVar1;
}

/* ref: FUN_00603150 */
uint F_00603150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603150u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,900);
  return uVar1;
}

/* ref: FUN_00603180 */
uint F_00603180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x603180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603190 */
uint F_00603190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603190u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x385);
  return uVar1;
}

/* ref: FUN_006031c0 */
uint F_006031c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6031c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006031d0 */
uint F_006031d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6031d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00603200 */
uint F_00603200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603200u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00603250 */
uint F_00603250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 8 + (int)this;
}

/* ref: FUN_006032c0 */
uint F_006032c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6032c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) + param_1 * 0xc + (int)this;
}

/* ref: FUN_00603300 */
uint F_00603300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x10) + param_1 * 8 + (int)this;
}

/* ref: FUN_00603320 */
uint F_00603320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603320u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[3] = (undefined2)param_2;
  in_ecx[2] = (undefined2)param_2;
  in_ecx[1] = (undefined2)param_2;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603360 */
unsigned int F_00603360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(uint *)this = (uint)(byte)param_1 * 0x1010101;
  *(short *)((int)this + 4) = (short)((uint)(byte)param_1 * 0x1010101);
  *(uint *)((int)this + 6) = (uint)(byte)param_1 * 0x1010101;
  *(short *)((int)this + 10) = (short)((uint)(byte)param_1 * 0x1010101);
  *(uint *)((int)this + 0xc) = (uint)(byte)param_1 * 0x1010101;
  *(short *)((int)this + 0x10) = (short)((uint)(byte)param_1 * 0x1010101);
  return 0;
}

/* ref: FUN_006033b0 */
uint F_006033b0(float gen_a0)
{
  GEN_ENTER(0x6033b0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)((((float10)param_1 + (float10)*(double *)&REFG(undefined, 0x10912a8)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)*(double *)&REFG(undefined, 0x10a3960));
  if (0xffff < (int)uVar1) {
    return 0xffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_006033f0 */
float10 F_006033f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6033f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10a3960)) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x10912a8))));
}

/* ref: FUN_00603420 */
uint F_00603420(float gen_a0)
{
  GEN_ENTER(0x603420u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)((((float10)param_1 + (float10)*(double *)&REFG(undefined, 0x1080228)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)*(double *)&REFG(undefined, 0x10a3968));
  if (0xffff < (int)uVar1) {
    return 0xffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00603460 */
float10 F_00603460(unsigned int gen_a0)
{
  GEN_ENTER(0x603460u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10a3968)) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: FUN_00603490 */
uint F_00603490(float gen_a0)
{
  GEN_ENTER(0x603490u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)((((float10)param_1 + (float10)*(double *)&REFG(undefined, 0x10912a8)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)*(double *)&REFG(undefined, 0x10a3960));
  if (0xffff < (int)uVar1) {
    return 0xffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_006034d0 */
uint F_006034d0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x6034d0u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  iVar1 = (int)((((float10)param_2 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *in_ecx = (short)iVar1;
  iVar1 = (int)((((float10)param_3 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  in_ecx[1] = (short)iVar1;
  uVar2 = (uint)((fVar4 * ((float10)param_4 + fVar3)) / fVar5);
  if (0xffff < (int)uVar2) {
    in_ecx[2] = 0xffff;
    return 0xffff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  in_ecx[2] = (short)uVar2;
  return uVar2;
}

/* ref: FUN_00603570 */
uint F_00603570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_006034d0(in_ecx,*param_2,param_2[1],param_2[2]);
  return uVar1;
}

/* ref: FUN_006035a0 */
uint F_006035a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6035a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((((float10)param_2 + (float10)*(double *)&REFG(undefined, 0x1080228)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)*(double *)&REFG(undefined, 0x10a3968));
  if (0xffff < (int)uVar1) {
    *(undefined2 *)(in_ecx + 6) = 0xffff;
    return 0xffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  *(short *)(in_ecx + 6) = (short)uVar1;
  return uVar1;
}

/* ref: FUN_006035f0 */
uint F_006035f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6035f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[1]);
  F_006034d0((*(int *)&gen_args[0]),*(float *)(*(uint *)&gen_args[1]),*(float *)((*(uint *)&gen_args[1]) + 4),*(float *)((*(uint *)&gen_args[1]) + 8));
  F_00a1e160(&(*(uint *)&gen_args[1]),uVar1 + 0x10);
  uVar1 = (uint)(((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) + (float10)*(double *)&REFG(undefined, 0x1080228)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118)) / (float10)*(double *)&REFG(undefined, 0x10a3968));
  if (0xffff < (int)uVar1) {
    *(undefined2 *)((*(int *)&gen_args[0]) + 6) = 0xffff;
    return 0xffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  *(short *)((*(int *)&gen_args[0]) + 6) = (short)uVar1;
  return uVar1;
}

/* ref: FUN_00603670 */
unsigned int F_00603670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *param_1 = ((float)GEN_TOF((((float10)*(ushort *)((int)(uintptr_t)this) * fVar1) * fVar2 - fVar3)));
  param_1[1] = ((float)GEN_TOF((((float10)*(ushort *)((int)this + 2) * fVar1) * fVar2 - fVar3)));
  param_1[2] = ((float)GEN_TOF((fVar2 * ((float10)*(ushort *)((int)this + 4) * fVar1) - fVar3)));
  return 0;
}

/* ref: FUN_006036d0 */
uint F_006036d0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x6036d0u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  iVar1 = (int)((((float10)param_2 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *in_ecx = (short)iVar1;
  iVar1 = (int)((((float10)param_3 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  in_ecx[1] = (short)iVar1;
  uVar2 = (uint)((fVar4 * ((float10)param_4 + fVar3)) / fVar5);
  if (0xffff < (int)uVar2) {
    in_ecx[2] = 0xffff;
    return 0xffff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  in_ecx[2] = (short)uVar2;
  return uVar2;
}

/* ref: FUN_00603770 */
uint F_00603770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_006036d0(in_ecx,*param_2,param_2[1],param_2[2]);
  return uVar1;
}

/* ref: FUN_00603830 */
uint F_00603830(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x603830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1080228);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a3968);
  iVar1 = (int)((((float10)param_2 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *(short *)(in_ecx + 6) = (short)iVar1;
  iVar1 = (int)((((float10)param_3 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *(short *)(in_ecx + 8) = (short)iVar1;
  uVar2 = (uint)((fVar4 * ((float10)param_4 + fVar3)) / fVar5);
  if (0xffff < (int)uVar2) {
    *(undefined2 *)(in_ecx + 10) = 0xffff;
    return 0xffff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  *(short *)(in_ecx + 10) = (short)uVar2;
  return uVar2;
}

/* ref: FUN_00603920 */
uint F_00603920(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x603920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  iVar1 = (int)((((float10)param_2 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *(short *)(in_ecx + 0xc) = (short)iVar1;
  iVar1 = (int)((((float10)param_3 + fVar3) * fVar4) / fVar5);
  if (iVar1 < 0x10000) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xffff;
  }
  *(short *)(in_ecx + 0xe) = (short)iVar1;
  uVar2 = (uint)((fVar4 * ((float10)param_4 + fVar3)) / fVar5);
  if (0xffff < (int)uVar2) {
    *(undefined2 *)(in_ecx + 0x10) = 0xffff;
    return 0xffff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  *(short *)(in_ecx + 0x10) = (short)uVar2;
  return uVar2;
}

/* ref: FUN_006039c0 */
uint F_006039c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6039c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00603920(in_ecx,*param_2,param_2[1],param_2[2]);
  return uVar1;
}

/* ref: FUN_006039f0 */
uint F_006039f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6039f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_006036d0(this,*param_1,param_1[1],param_1[2]);
  F_00a1e0f0(&(*(float *)(gen_frame + 0x0)),param_1 + 4);
  F_00603830(this,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)));
  uVar1 = F_00603920(this,param_1[8],param_1[9],param_1[10]);
  return uVar1;
}

/* ref: FUN_00603a80 */
unsigned int F_00603a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x603a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *param_1 = ((ushort)(byte)param_2 << 6 | (ushort)param_5 & 0x3f) * 4 | 2;
  param_1[1] = (ushort)param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  return 0;
}

/* ref: FUN_00603ac0 */
ushort F_00603ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x603ac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 2);
}

/* ref: FUN_00603ad0 */
byte F_00603ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  if ((((*(short *)this == *param_1) && (*(short *)((int)this + 2) == param_1[1])) &&
      (*(short *)((int)this + 4) == param_1[2])) && (*(short *)((int)this + 6) == param_1[3])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00603b30 */
byte F_00603b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x603b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(short *)this != (short)param_1) || (*(short *)((int)this + 2) != (short)param_2)) &&
     ((*(short *)((int)this + 4) != (short)param_1 || (*(short *)((int)this + 6) != (short)param_2))
     )) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00603b70 */
uint F_00603b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x603b70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,900);
  return uVar1;
}

/* ref: FUN_00603ba0 */
uint F_00603ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x603ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603bb0 */
uint F_00603bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x603bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603bc0 */
uint F_00603bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x603bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603bd0 */
uint F_00603bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x603bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603be0 */
uint F_00603be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x603be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603bf0 */
uint F_00603bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x603bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00603c10 */
uint F_00603c10(unsigned int gen_a0)
{
  GEN_ENTER(0x603c10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00603c50 */
uint F_00603c50(unsigned int gen_a0)
{
  GEN_ENTER(0x603c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00603c80 */
uint F_00603c80(unsigned int gen_a0)
{
  GEN_ENTER(0x603c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x25)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x25);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00603cb0 */
uint F_00603cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x603cb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00603d00 */
uint F_00603d00(unsigned int gen_a0)
{
  GEN_ENTER(0x603d00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00603d30 */
uint F_00603d30(unsigned int gen_a0)
{
  GEN_ENTER(0x603d30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00603d60 */
uint F_00603d60(unsigned int gen_a0)
{
  GEN_ENTER(0x603d60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x19)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x19);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00603da0 */
uint F_00603da0(unsigned int gen_a0)
{
  GEN_ENTER(0x603da0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00603db0 */
uint F_00603db0(unsigned int gen_a0)
{
  GEN_ENTER(0x603db0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00603e10 */
uint F_00603e10(unsigned int gen_a0)
{
  GEN_ENTER(0x603e10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00603eb0 */
uint F_00603eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x603eb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined * this;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0xa0,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0xa0,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (this != (undefined *)0x0) {
      F_006955c0(this);
    }
    this = (undefined *)((int)this + 0xa0);
  }
  return (uint)piVar1;
}

/* ref: FUN_00603f40 */
uint F_00603f40(unsigned int gen_a0)
{
  GEN_ENTER(0x603f40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x48,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x48,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x18);
    local_8 = param_1;
    do {
      if (puVar3 != (undefined4 *)0x18) {
        *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 7;
        puVar3[3] = puVar3[3] & 0xfffffffd | 1;
        *(byte *)((int)puVar3 + 0x11) = *(byte *)((int)puVar3 + 0x11) & 0xf8 | 8;
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0xffffffff;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(undefined1 *)((int)puVar3 + 0x12) = 0xff;
        *(byte *)((int)puVar3 + 0x13) = *(byte *)((int)puVar3 + 0x13) & 0xfa | 0x7a;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        puVar3[-6] = (*(undefined * PTR32 (*)[68])REFP(0x10a2e6c));
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = REFG(undefined4, 0x1302e54);
        puVar3[9] = REFG(undefined4, 0x1302e58);
        puVar3[10] = REFG(undefined4, 0x1302e5c);
        puVar3[0xb] = REFG(undefined4, 0x1302e60);
      }
      puVar3 = puVar3 + 0x12;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_00604040 */
uint F_00604040(unsigned int gen_a0)
{
  GEN_ENTER(0x604040u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined * this;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (this != (undefined *)0x0) {
      F_00696b10(this);
    }
    this = (undefined *)((int)this + 0x80);
  }
  return (uint)piVar1;
}

/* ref: FUN_006040b0 */
uint F_006040b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6040b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x38,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x38,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x18);
    local_8 = param_1;
    do {
      if (puVar3 != (undefined4 *)0x18) {
        *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 7;
        puVar3[3] = puVar3[3] & 0xfffffffd | 1;
        *(byte *)((int)puVar3 + 0x11) = *(byte *)((int)puVar3 + 0x11) & 0xf8 | 8;
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0xffffffff;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(undefined1 *)((int)puVar3 + 0x12) = 0xff;
        *(byte *)((int)puVar3 + 0x13) = *(byte *)((int)puVar3 + 0x13) & 0xfa | 0x7a;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        puVar3[-6] = (*(undefined * PTR32 (*)[68])REFP(0x10a309c));
        puVar3[6] = 0;
      }
      puVar3 = puVar3 + 0xe;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_00604190 */
uint F_00604190(unsigned int gen_a0)
{
  GEN_ENTER(0x604190u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x38,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x38,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x18);
    local_8 = param_1;
    do {
      if (puVar3 != (undefined4 *)0x18) {
        *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 7;
        puVar3[3] = puVar3[3] & 0xfffffffd | 1;
        *(byte *)((int)puVar3 + 0x11) = *(byte *)((int)puVar3 + 0x11) & 0xf8 | 8;
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0xffffffff;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(undefined1 *)((int)puVar3 + 0x12) = 0xff;
        *(byte *)((int)puVar3 + 0x13) = *(byte *)((int)puVar3 + 0x13) & 0xfa | 0x7a;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        puVar3[-6] = (*(undefined * PTR32 (*)[68])REFP(0x10a2c3c));
        puVar3[6] = 0;
        puVar3[7] = 0;
      }
      puVar3 = puVar3 + 0xe;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_00604270 */
uint F_00604270(unsigned int gen_a0)
{
  GEN_ENTER(0x604270u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x38,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x38,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x18);
    local_8 = param_1;
    do {
      if (puVar3 != (undefined4 *)0x18) {
        *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 7;
        puVar3[3] = puVar3[3] & 0xfffffffd | 1;
        *(byte *)((int)puVar3 + 0x11) = *(byte *)((int)puVar3 + 0x11) & 0xf8 | 8;
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0xffffffff;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(undefined1 *)((int)puVar3 + 0x12) = 0xff;
        *(byte *)((int)puVar3 + 0x13) = *(byte *)((int)puVar3 + 0x13) & 0xfa | 0x7a;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        puVar3[-6] = (*(undefined * PTR32 (*)[68])REFP(0x10a2d54));
        puVar3[6] = 0;
      }
      puVar3 = puVar3 + 0xe;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_00604350 */
uint F_00604350(unsigned int gen_a0)
{
  GEN_ENTER(0x604350u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x60,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x60,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005d83a0(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a33e4));
      this[0x14] = 0;
    }
    this = this + 0x18;
  }
  return (uint)piVar1;
}

/* ref: FUN_006043d0 */
uint F_006043d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6043d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x60,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x60,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005d83a0(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a34fc));
      this[0x14] = 0;
    }
    this = this + 0x18;
  }
  return (uint)piVar1;
}

/* ref: FUN_00604450 */
uint F_00604450(unsigned int gen_a0)
{
  GEN_ENTER(0x604450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x60,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x60,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005d83a0(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a3614));
      this[0x14] = 0;
    }
    this = this + 0x18;
  }
  return (uint)piVar1;
}

/* ref: FUN_006044d0 */
uint F_006044d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6044d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x60,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x60,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005d83a0(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a372c));
      *(undefined1 *)(this + 0x14) = 1;
    }
    this = this + 0x18;
  }
  return (uint)piVar1;
}

/* ref: FUN_00604550 */
unsigned int F_00604550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604550u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x12;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_006045a0 */
unsigned int F_006045a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6045a0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x28;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_006045f0 */
unsigned int F_006045f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6045f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604640 */
unsigned int F_00604640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604640u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604690 */
unsigned int F_00604690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604690u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x12;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_006046e0 */
unsigned int F_006046e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6046e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604730 */
unsigned int F_00604730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604730u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0xe;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604780 */
unsigned int F_00604780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604780u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x28;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_006047d0 */
unsigned int F_006047d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6047d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604820 */
unsigned int F_00604820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604820u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604870 */
unsigned int F_00604870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604870u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_006048c0 */
unsigned int F_006048c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6048c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604910 */
unsigned int F_00604910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604910u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0xe;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604960 */
unsigned int F_00604960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604960u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0xe;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_006049b0 */
unsigned int F_006049b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6049b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x24;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604a00 */
unsigned int F_00604a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604a00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x28;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604a50 */
unsigned int F_00604a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604a50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x24;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604aa0 */
unsigned int F_00604aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604aa0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x18;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604af0 */
unsigned int F_00604af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604af0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x30;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604b40 */
unsigned int F_00604b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604b40u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x28;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604b90 */
unsigned int F_00604b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604b90u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x1c;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604be0 */
unsigned int F_00604be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604be0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604c30 */
unsigned int F_00604c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604c30u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x18;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604c80 */
unsigned int F_00604c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604c80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x24;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604cd0 */
unsigned int F_00604cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604cd0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x24;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604d20 */
unsigned int F_00604d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604d20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x1c;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604d70 */
unsigned int F_00604d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604d70u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x24;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604dc0 */
unsigned int F_00604dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604dc0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x18;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604e10 */
unsigned int F_00604e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604e10u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x18;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604e60 */
unsigned int F_00604e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604e60u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x1c;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604eb0 */
unsigned int F_00604eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604eb0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x20;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604f00 */
unsigned int F_00604f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604f00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x1c;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604f50 */
unsigned int F_00604f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604f50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x1c;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00604fa0 */
unsigned int F_00604fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x604fa0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    for (; param_2 != 0; param_2 = param_2 + -1) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      puVar1 = puVar1 + 0x3c;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,param_1);
  }
  return 0;
}

/* ref: FUN_00605000 */
uint F_00605000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  return param_1;
}

/* ref: FUN_00605020 */
uint F_00605020(unsigned int gen_a0)
{
  GEN_ENTER(0x605020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605030 */
uint F_00605030(unsigned int gen_a0)
{
  GEN_ENTER(0x605030u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605040 */
uint F_00605040(unsigned int gen_a0)
{
  GEN_ENTER(0x605040u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605050 */
uint F_00605050(unsigned int gen_a0)
{
  GEN_ENTER(0x605050u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605060 */
uint F_00605060(unsigned int gen_a0)
{
  GEN_ENTER(0x605060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605070 */
uint F_00605070(unsigned int gen_a0)
{
  GEN_ENTER(0x605070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605080 */
uint F_00605080(unsigned int gen_a0)
{
  GEN_ENTER(0x605080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605090 */
uint F_00605090(unsigned int gen_a0)
{
  GEN_ENTER(0x605090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006050a0 */
uint F_006050a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6050a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006050b0 */
uint F_006050b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6050b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006050c0 */
uint F_006050c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6050c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006050d0 */
uint F_006050d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6050d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006050e0 */
uint F_006050e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6050e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006050f0 */
uint F_006050f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6050f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605100 */
uint F_00605100(unsigned int gen_a0)
{
  GEN_ENTER(0x605100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605110 */
uint F_00605110(unsigned int gen_a0)
{
  GEN_ENTER(0x605110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605120 */
uint F_00605120(unsigned int gen_a0)
{
  GEN_ENTER(0x605120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605130 */
uint F_00605130(unsigned int gen_a0)
{
  GEN_ENTER(0x605130u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605140 */
uint F_00605140(unsigned int gen_a0)
{
  GEN_ENTER(0x605140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605150 */
uint F_00605150(unsigned int gen_a0)
{
  GEN_ENTER(0x605150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605170 */
uint F_00605170(unsigned int gen_a0)
{
  GEN_ENTER(0x605170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605180 */
uint F_00605180(unsigned int gen_a0)
{
  GEN_ENTER(0x605180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605190 */
uint F_00605190(unsigned int gen_a0)
{
  GEN_ENTER(0x605190u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006051a0 */
uint F_006051a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6051a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006051b0 */
uint F_006051b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6051b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006051c0 */
uint F_006051c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6051c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006051d0 */
uint F_006051d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6051d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006051e0 */
uint F_006051e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6051e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006051f0 */
uint F_006051f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6051f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605200 */
uint F_00605200(unsigned int gen_a0)
{
  GEN_ENTER(0x605200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605210 */
uint F_00605210(unsigned int gen_a0)
{
  GEN_ENTER(0x605210u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605220 */
uint F_00605220(unsigned int gen_a0)
{
  GEN_ENTER(0x605220u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605230 */
uint F_00605230(unsigned int gen_a0)
{
  GEN_ENTER(0x605230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605240 */
uint F_00605240(unsigned int gen_a0)
{
  GEN_ENTER(0x605240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605260 */
uint F_00605260(unsigned int gen_a0)
{
  GEN_ENTER(0x605260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605270 */
uint F_00605270(unsigned int gen_a0)
{
  GEN_ENTER(0x605270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605280 */
uint F_00605280(unsigned int gen_a0)
{
  GEN_ENTER(0x605280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605290 */
uint F_00605290(unsigned int gen_a0)
{
  GEN_ENTER(0x605290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006052a0 */
uint F_006052a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6052a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006052b0 */
uint F_006052b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6052b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006052c0 */
uint F_006052c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6052c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006052d0 */
uint F_006052d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6052d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605420 */
unsigned int F_00605420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x605420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00605480 */
unsigned int F_00605480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x605480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_006054c0 */
unsigned int F_006054c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6054c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00605510 */
unsigned int F_00605510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x605510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00605550 */
unsigned int F_00605550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x605550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00605590 */
unsigned int F_00605590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x605590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_006055d0 */
unsigned int F_006055d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6055d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return 0;
}

/* ref: FUN_00605640 */
unsigned int F_00605640(unsigned int gen_a0)
{
  GEN_ENTER(0x605640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_006056a0 */
unsigned int F_006056a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6056a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00605710 */
uint F_00605710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00605730 */
unsigned int F_00605730(unsigned int gen_a0)
{
  GEN_ENTER(0x605730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_006057d0 */
unsigned int F_006057d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6057d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006058b0 */
unsigned int F_006058b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6058b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00605910 */
unsigned int F_00605910(unsigned int gen_a0)
{
  GEN_ENTER(0x605910u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00605970 */
unsigned int F_00605970(unsigned int gen_a0)
{
  GEN_ENTER(0x605970u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006059e0 */
unsigned int F_006059e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6059e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00605a50 */
unsigned int F_00605a50(unsigned int gen_a0)
{
  GEN_ENTER(0x605a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x19) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x19) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x19) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x19) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x19);
    }
    if (*(char *)(*(int *)this + 0x19) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00605ab0 */
unsigned int F_00605ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x605ab0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00605b10 */
unsigned int F_00605b10(unsigned int gen_a0)
{
  GEN_ENTER(0x605b10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00605b70 */
unsigned int F_00605b70(unsigned int gen_a0)
{
  GEN_ENTER(0x605b70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00605bd0 */
unsigned int F_00605bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x605bd0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00605c30 */
unsigned int F_00605c30(unsigned int gen_a0)
{
  GEN_ENTER(0x605c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x91) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x91) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x91) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x91) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x91);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x91);
    }
    if (*(char *)(*(int *)this + 0x91) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00605cb0 */
unsigned int F_00605cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x605cb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00605d10 */
unsigned int F_00605d10(unsigned int gen_a0)
{
  GEN_ENTER(0x605d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x25) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00605d70 */
uint F_00605d70(unsigned int gen_a0)
{
  GEN_ENTER(0x605d70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605d80 */
uint F_00605d80(unsigned int gen_a0)
{
  GEN_ENTER(0x605d80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605d90 */
unsigned int F_00605d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return 0;
}

/* ref: FUN_00605db0 */
uint F_00605db0(unsigned int gen_a0)
{
  GEN_ENTER(0x605db0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605dc0 */
uint F_00605dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x605dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605dd0 */
unsigned int F_00605dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return 0;
}

/* ref: FUN_00605df0 */
uint F_00605df0(unsigned int gen_a0)
{
  GEN_ENTER(0x605df0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605e00 */
uint F_00605e00(unsigned int gen_a0)
{
  GEN_ENTER(0x605e00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605e10 */
uint F_00605e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00605e30 */
uint F_00605e30(unsigned int gen_a0)
{
  GEN_ENTER(0x605e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605e40 */
uint F_00605e40(unsigned int gen_a0)
{
  GEN_ENTER(0x605e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605e50 */
uint F_00605e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00605e70 */
uint F_00605e70(unsigned int gen_a0)
{
  GEN_ENTER(0x605e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605e80 */
uint F_00605e80(unsigned int gen_a0)
{
  GEN_ENTER(0x605e80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605e90 */
uint F_00605e90(unsigned int gen_a0)
{
  GEN_ENTER(0x605e90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605ea0 */
uint F_00605ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00605ec0 */
uint F_00605ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x605ec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605ed0 */
uint F_00605ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x605ed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605ee0 */
uint F_00605ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00605f00 */
uint F_00605f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00605f20 */
uint F_00605f20(unsigned int gen_a0)
{
  GEN_ENTER(0x605f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605f30 */
uint F_00605f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00605f50 */
uint F_00605f50(unsigned int gen_a0)
{
  GEN_ENTER(0x605f50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605f60 */
uint F_00605f60(unsigned int gen_a0)
{
  GEN_ENTER(0x605f60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605f70 */
unsigned int F_00605f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return 0;
}

/* ref: FUN_00605f90 */
uint F_00605f90(unsigned int gen_a0)
{
  GEN_ENTER(0x605f90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605fa0 */
uint F_00605fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x605fa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605fb0 */
uint F_00605fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x605fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00605fd0 */
uint F_00605fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x605fd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605fe0 */
uint F_00605fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x605fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00605ff0 */
uint F_00605ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x605ff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606000 */
uint F_00606000(unsigned int gen_a0)
{
  GEN_ENTER(0x606000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606010 */
uint F_00606010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606030 */
uint F_00606030(unsigned int gen_a0)
{
  GEN_ENTER(0x606030u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606040 */
uint F_00606040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606060 */
uint F_00606060(unsigned int gen_a0)
{
  GEN_ENTER(0x606060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606070 */
uint F_00606070(unsigned int gen_a0)
{
  GEN_ENTER(0x606070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606080 */
uint F_00606080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006060a0 */
uint F_006060a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6060a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006060b0 */
uint F_006060b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6060b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006060c0 */
uint F_006060c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6060c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006060d0 */
uint F_006060d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6060d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006060f0 */
uint F_006060f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6060f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606100 */
uint F_00606100(unsigned int gen_a0)
{
  GEN_ENTER(0x606100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606110 */
uint F_00606110(unsigned int gen_a0)
{
  GEN_ENTER(0x606110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606120 */
uint F_00606120(unsigned int gen_a0)
{
  GEN_ENTER(0x606120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606130 */
uint F_00606130(unsigned int gen_a0)
{
  GEN_ENTER(0x606130u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606140 */
uint F_00606140(unsigned int gen_a0)
{
  GEN_ENTER(0x606140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606160 */
uint F_00606160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606160u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00606190 */
uint F_00606190(unsigned int gen_a0)
{
  GEN_ENTER(0x606190u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006061a0 */
uint F_006061a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6061a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006061c0 */
uint F_006061c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6061c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006061f0 */
uint F_006061f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6061f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606200 */
uint F_00606200(unsigned int gen_a0)
{
  GEN_ENTER(0x606200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606210 */
uint F_00606210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606210u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if (!((float10)*param_1 < (float10)*param_2)) {
    param_2 = param_1;
  }
  return (uint)param_2;
}

/* ref: FUN_00606230 */
uint F_00606230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606230u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if (!((float10)*param_2 < (float10)*param_1)) {
    param_2 = param_1;
  }
  return (uint)param_2;
}

/* ref: FUN_00606250 */
uint F_00606250(unsigned int gen_a0)
{
  GEN_ENTER(0x606250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606270 */
uint F_00606270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006062c0 */
uint F_006062c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6062c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00606300 */
uint F_00606300(unsigned int gen_a0)
{
  GEN_ENTER(0x606300u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606330 */
uint F_00606330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606330u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00606380 */
uint F_00606380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606380u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *in_ecx >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_006063a0 */
byte F_006063a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6063a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = ~('\x01' << ((byte)param_1 & 0x1f)) & *(byte *)this |
          ((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  *(byte *)this = bVar1;
  return bVar1;
}

/* ref: FUN_006063f0 */
uint F_006063f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6063f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606400 */
uint F_00606400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606430 */
uint F_00606430(unsigned int gen_a0)
{
  GEN_ENTER(0x606430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606440 */
uint F_00606440(unsigned int gen_a0)
{
  GEN_ENTER(0x606440u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606450 */
uint F_00606450(unsigned int gen_a0)
{
  GEN_ENTER(0x606450u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606460 */
uint F_00606460(unsigned int gen_a0)
{
  GEN_ENTER(0x606460u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606470 */
uint F_00606470(unsigned int gen_a0)
{
  GEN_ENTER(0x606470u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606480 */
uint F_00606480(unsigned int gen_a0)
{
  GEN_ENTER(0x606480u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606490 */
uint F_00606490(unsigned int gen_a0)
{
  GEN_ENTER(0x606490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006064a0 */
uint F_006064a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6064a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006064b0 */
uint F_006064b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6064b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006064c0 */
uint F_006064c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6064c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006064d0 */
uint F_006064d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6064d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006064e0 */
uint F_006064e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6064e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006064f0 */
uint F_006064f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6064f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606500 */
uint F_00606500(unsigned int gen_a0)
{
  GEN_ENTER(0x606500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606510 */
uint F_00606510(unsigned int gen_a0)
{
  GEN_ENTER(0x606510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606800 */
uint F_00606800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606800u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if ((float10)*param_1 < (float10)*param_2) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00606840 */
unsigned int F_00606840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00606880 */
uint F_00606880(unsigned int gen_a0)
{
  GEN_ENTER(0x606880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606890 */
uint F_00606890(unsigned int gen_a0)
{
  GEN_ENTER(0x606890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006068a0 */
uint F_006068a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6068a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006068f0 */
uint F_006068f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6068f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606900 */
uint F_00606900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606920 */
uint F_00606920(unsigned int gen_a0)
{
  GEN_ENTER(0x606920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606930 */
uint F_00606930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606950 */
uint F_00606950(unsigned int gen_a0)
{
  GEN_ENTER(0x606950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606960 */
uint F_00606960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606980 */
uint F_00606980(unsigned int gen_a0)
{
  GEN_ENTER(0x606980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606990 */
uint F_00606990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006069b0 */
uint F_006069b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6069b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006069c0 */
uint F_006069c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6069c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006069e0 */
uint F_006069e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6069e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006069f0 */
uint F_006069f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6069f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606a10 */
uint F_00606a10(unsigned int gen_a0)
{
  GEN_ENTER(0x606a10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606a20 */
uint F_00606a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606a40 */
uint F_00606a40(unsigned int gen_a0)
{
  GEN_ENTER(0x606a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606a50 */
uint F_00606a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606a70 */
uint F_00606a70(unsigned int gen_a0)
{
  GEN_ENTER(0x606a70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606a80 */
uint F_00606a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606aa0 */
uint F_00606aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x606aa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606ab0 */
uint F_00606ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606ad0 */
uint F_00606ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606af0 */
uint F_00606af0(unsigned int gen_a0)
{
  GEN_ENTER(0x606af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606b00 */
uint F_00606b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606b20 */
uint F_00606b20(unsigned int gen_a0)
{
  GEN_ENTER(0x606b20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606b30 */
uint F_00606b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606b50 */
uint F_00606b50(unsigned int gen_a0)
{
  GEN_ENTER(0x606b50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606b60 */
uint F_00606b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606b80 */
uint F_00606b80(unsigned int gen_a0)
{
  GEN_ENTER(0x606b80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606b90 */
uint F_00606b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606bb0 */
uint F_00606bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x606bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606bc0 */
uint F_00606bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606be0 */
uint F_00606be0(unsigned int gen_a0)
{
  GEN_ENTER(0x606be0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606bf0 */
uint F_00606bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x606bf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606c30 */
unsigned int F_00606c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00606c60 */
uint F_00606c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00606c70 */
uint F_00606c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00606c90 */
unsigned int F_00606c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00606cb0 */
uint F_00606cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00606cd0 */
uint F_00606cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00606cf0 */
unsigned int F_00606cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00606d10 */
unsigned int F_00606d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00606d30 */
uint F_00606d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00606d50 */
uint F_00606d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00606d70 */
uint F_00606d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00606d90 */
uint F_00606d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00606db0 */
uint F_00606db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00606dd0 */
uint F_00606dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x606dd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606de0 */
uint F_00606de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x606de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00606e00 */
uint F_00606e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)in_ecx;
}

/* ref: FUN_00606e60 */
uint F_00606e60(unsigned int gen_a0)
{
  GEN_ENTER(0x606e60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606e70 */
uint F_00606e70(unsigned int gen_a0)
{
  GEN_ENTER(0x606e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606e80 */
uint F_00606e80(unsigned int gen_a0)
{
  GEN_ENTER(0x606e80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606e90 */
uint F_00606e90(unsigned int gen_a0)
{
  GEN_ENTER(0x606e90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00606ea0 */
uint F_00606ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x606ea0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Client::LayoutEngine::IManagerBase::vf4 */
byte F_00606eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606eb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xc) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::LayoutEngine::IManagerBase::vf5 */
byte F_00606ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x606ec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xc);
}

/* ref: FUN_00606f10 */
unsigned int F_00606f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  short sVar1;
  
  sVar1 = 0;
  *(undefined4 *)this = 0;
  *(short *)((int)this + 4) = (short)param_1;
  *(undefined2 *)((int)this + 6) = 0;
  if (1 < param_1) {
    do {
      param_1 = param_1 >> 1;
      sVar1 = sVar1 + 1;
    } while (1 < param_1);
    *(short *)((int)this + 6) = sVar1;
  }
  return 0;
}

/* ref: FUN_00606f40 */
unsigned int F_00606f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x606f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  short sVar1;
  
  sVar1 = 0;
  *(undefined4 *)this = 0;
  *(short *)((int)this + 4) = (short)param_3;
  *(undefined2 *)((int)this + 6) = 0;
  if (1 < param_3) {
    do {
      param_3 = param_3 >> 1;
      sVar1 = sVar1 + 1;
    } while (1 < param_3);
    *(short *)((int)this + 6) = sVar1;
  }
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return 0;
}

/* ref: FUN_00606f90 */
uint F_00606f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606f90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + param_2 * 4)));
}

/* ref: FUN_00606fa0 */
uint F_00606fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606fa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + param_2 * 4)));
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf13 */
uint F_00606ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x0)))));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return (uint)param_1;
}

/* ref: FUN_00607080 */
uint F_00607080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + param_2 * 4)));
}

/* ref: FUN_00607090 */
uint F_00607090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + param_2 * 4)));
}

/* ref: FUN_006070a0 */
unsigned int F_006070a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6070a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0x20);
  param_1[1] = *(undefined4 *)((int)this + 0x24);
  param_1[2] = *(undefined4 *)((int)this + 0x28);
  param_1[4] = *(undefined4 *)((int)this + 0x30);
  param_1[5] = *(undefined4 *)((int)this + 0x34);
  param_1[6] = *(undefined4 *)((int)this + 0x38);
  param_1[7] = *(undefined4 *)((int)this + 0x3c);
  param_1[8] = *(undefined4 *)((int)this + 0x40);
  param_1[9] = *(undefined4 *)((int)this + 0x44);
  param_1[10] = *(undefined4 *)((int)this + 0x48);
  return 0;
}

/* ref: FUN_006070f0 */
unsigned int F_006070f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6070f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x20) = *param_1;
  *(undefined4 *)((int)this + 0x24) = param_1[1];
  *(undefined4 *)((int)this + 0x28) = param_1[2];
  *(undefined4 *)((int)this + 0x30) = param_1[4];
  *(undefined4 *)((int)this + 0x34) = param_1[5];
  *(undefined4 *)((int)this + 0x38) = param_1[6];
  *(undefined4 *)((int)this + 0x3c) = param_1[7];
  *(undefined4 *)((int)this + 0x40) = param_1[8];
  *(undefined4 *)((int)this + 0x44) = param_1[9];
  *(undefined4 *)((int)this + 0x48) = param_1[10];
  return 0;
}

/* ref: FUN_00607150 */
uint F_00607150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x78) + param_2 * 4)));
}

/* ref: FUN_00607160 */
unsigned int F_00607160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  return 0;
}

/* ref: FUN_006071b0 */
uint F_006071b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6071b0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  in_ecx[2] = param_2;
  in_ecx[3] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006071e0 */
uint F_006071e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6071e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if (uVar1 != 0xffffffff) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x30) + 0xf0)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf57 */
uint F_00607220(unsigned int gen_a0)
{
  GEN_ENTER(0x607220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf58 */
uint F_00607230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf59 */
uint F_00607250(unsigned int gen_a0)
{
  GEN_ENTER(0x607250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf60 */
uint F_00607260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x4c) = uVar1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf61 */
uint F_00607290(unsigned int gen_a0)
{
  GEN_ENTER(0x607290u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf64 */
unsigned int F_006072a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6072a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  *(undefined4 *)(this + 0x40) = param_1[4];
  *(undefined4 *)(this + 0x44) = param_1[5];
  *(undefined4 *)(this + 0x48) = param_1[6];
  *(undefined4 *)(this + 0x4c) = param_1[7];
  *(undefined4 *)(this + 0x50) = param_1[8];
  *(undefined4 *)(this + 0x54) = param_1[9];
  *(undefined4 *)(this + 0x58) = param_1[10];
  return 0;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf14 */
uint F_006072f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6072f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf16 */
uint F_00607320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf17 */
uint F_00607350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[4] = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[6] = puVar1[6];
  param_1[7] = puVar1[7];
  param_1[8] = puVar1[8];
  param_1[9] = puVar1[9];
  param_1[10] = puVar1[10];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf58 */
unsigned int F_006073a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6073a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  uVar1 = param_2[2];
  *(undefined4 *)(in_ecx + 0x3c) = *(undefined4 *)(in_ecx + 0x3c);
  *(undefined4 *)(in_ecx + 0x38) = uVar1;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf63 */
uint F_006073d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6073d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *(undefined4 *)&REFG(undefined, 0x1379cd0) = *puVar1;
  *(undefined4 *)&REFG(undefined, 0x1379cd4) = puVar1[1];
  *(undefined4 *)&REFG(undefined, 0x1379cd8) = puVar1[2];
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xec))(this)));
  *(undefined4 *)&REFG(undefined, 0x1379ce0) = *puVar1;
  *(undefined4 *)&REFG(undefined, 0x1379ce4) = puVar1[1];
  *(undefined4 *)&REFG(undefined, 0x1379ce8) = puVar1[2];
  *(undefined4 *)&REFG(undefined, 0x1379cec) = puVar1[3];
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  *(undefined4 *)&REFG(undefined, 0x1379cf0) = *puVar1;
  *(undefined4 *)&REFG(undefined, 0x1379cf4) = puVar1[1];
  *(undefined4 *)&REFG(undefined, 0x1379cf8) = puVar1[2];
  return 0x1379cd0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf64 */
uint F_00607470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xe8))(this,param_1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,param_1 + 0x10);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf13 */
uint F_006074a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6074a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  uVar2 = REFG(float, 0x10a27e4);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  uVar1 = puVar3[2];
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf14 */
uint F_006074e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6074e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf16 */
uint F_00607510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf17 */
uint F_00607540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[4] = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[6] = puVar1[6];
  param_1[7] = puVar1[7];
  param_1[8] = puVar1[8];
  param_1[9] = puVar1[9];
  param_1[10] = puVar1[10];
  return (uint)param_1;
}

/* ref: FUN_00607590 */
uint F_00607590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xa0) + param_2 * 4)));
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf57 */
uint F_006075b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6075b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf58 */
uint F_006075c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6075c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf59 */
uint F_006075e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6075e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf60 */
uint F_006075f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6075f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x4c) = uVar1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf61 */
uint F_00607620(unsigned int gen_a0)
{
  GEN_ENTER(0x607620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf62 */
uint F_00607630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x50) = *param_2;
  *(undefined4 *)(in_ecx + 0x54) = param_2[1];
  *(undefined4 *)(in_ecx + 0x58) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf64 */
unsigned int F_00607650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  *(undefined4 *)(this + 0x40) = param_1[4];
  *(undefined4 *)(this + 0x44) = param_1[5];
  *(undefined4 *)(this + 0x48) = param_1[6];
  *(undefined4 *)(this + 0x4c) = param_1[7];
  *(undefined4 *)(this + 0x50) = param_1[8];
  *(undefined4 *)(this + 0x54) = param_1[9];
  *(undefined4 *)(this + 0x58) = param_1[10];
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf0 */
uint F_006076a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6076a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006076d0 */
uint F_006076d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6076d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_005fe8d0(this,param_1);
  return (uint)this;
}

/* ref: FUN_006076f0 */
uint F_006076f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6076f0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  float * pfVar9;
  float * pfVar10;
  float * pfVar11;
  
  pfVar8 = param_1;
  if (!((float10)*param_1 < (float10)*(float *)param_2)) {
    pfVar8 = (float *)param_2;
  }
  pfVar10 = (float *)(param_2 + 4);
  pfVar1 = (float *)(param_2 + 4);
  pfVar11 = param_1 + 1;
  if (!((float10)param_1[1] < (float10)*pfVar10)) {
    pfVar11 = pfVar1;
  }
  fVar3 = *pfVar11;
  pfVar11 = (float *)(param_2 + 8);
  pfVar2 = (float *)(param_2 + 8);
  pfVar9 = pfVar2;
  if ((float10)param_1[2] < (float10)*pfVar11) {
    pfVar9 = param_1 + 2;
  }
  fVar4 = *pfVar9;
  if ((float10)*(float *)param_2 < (float10)param_1[4]) {
    param_2 = (uint)(param_1 + 4);
  }
  fVar5 = *(float *)param_2;
  pfVar9 = param_1 + 5;
  if (!((float10)*pfVar10 < (float10)param_1[5])) {
    pfVar9 = pfVar1;
  }
  fVar6 = *pfVar9;
  pfVar10 = param_1 + 6;
  if (!((float10)*pfVar11 < (float10)param_1[6])) {
    pfVar10 = pfVar2;
  }
  fVar7 = *pfVar10;
  *param_1 = *pfVar8;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  param_1[4] = fVar5;
  param_1[5] = fVar6;
  param_1[6] = fVar7;
  return (uint)param_1;
}

/* ref: FUN_006077b0 */
unsigned int F_006077b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6077b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)((int)this + 0xc);
  fVar2 = *(float *)((int)this + 4);
  fVar3 = *(float *)((int)this + 8);
  *param_1 = (float)((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this);
  param_1[1] = (float)((float10)fVar2 * (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 * (float10)fVar3);
  param_1[3] = fVar1;
  return 0;
}

/* ref: FUN_00607800 */
uint F_00607800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)((int)this + 4);
  fVar3 = *(float *)((int)this + 8);
  fVar1 = *(float *)((int)this + 0xc);
  *param_1 = ((float)GEN_TOF(SQRT((float10)*(float *)this)));
  param_1[1] = ((float)GEN_TOF(SQRT((float10)fVar2)));
  param_1[2] = ((float)GEN_TOF(SQRT((float10)fVar3)));
  param_1[3] = fVar1;
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Environment::LayoutEnvironment::vf0 */
uint F_00607870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a2ba4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Node::ChildNodeInstance::vf0 */
uint F_006078a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6078a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a2bac));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 8))))(*(int * PTR32 *)(this + 0x10));
  puVar1 = *(undefined4 * PTR32 *)(this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x10) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf6 */
uint F_006078f0(void)
{
  GEN_ENTER(0x6078f0u, 0u, 0u, 0u, 0u);
  return 0x70;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf21 */
byte F_00607900(void)
{
  GEN_ENTER(0x607900u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf22 */
byte F_00607910(void)
{
  GEN_ENTER(0x607910u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf24 */
uint F_00607920(void)
{
  GEN_ENTER(0x607920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf23 */
uint F_00607930(void)
{
  GEN_ENTER(0x607930u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf25 */
unsigned int F_00607940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x607940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf57 */
uint F_00607950(unsigned int gen_a0)
{
  GEN_ENTER(0x607950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf58 */
uint F_00607960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf59 */
uint F_00607980(unsigned int gen_a0)
{
  GEN_ENTER(0x607980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf60 */
uint F_00607990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x4c) = uVar1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf61 */
uint F_006079c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6079c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf62 */
uint F_006079d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6079d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x50) = *param_2;
  *(undefined4 *)(in_ecx + 0x54) = param_2[1];
  *(undefined4 *)(in_ecx + 0x58) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf63 */
uint F_006079f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6079f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf64 */
unsigned int F_00607a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  *(undefined4 *)(this + 0x40) = param_1[4];
  *(undefined4 *)(this + 0x44) = param_1[5];
  *(undefined4 *)(this + 0x48) = param_1[6];
  *(undefined4 *)(this + 0x4c) = param_1[7];
  *(undefined4 *)(this + 0x50) = param_1[8];
  *(undefined4 *)(this + 0x54) = param_1[9];
  *(undefined4 *)(this + 0x58) = param_1[10];
  return 0;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf0 */
uint F_00607a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00607a80 */
uint F_00607a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x40) = *param_1;
  *(undefined4 *)((int)this + 0x44) = param_1[1];
  *(undefined4 *)((int)this + 0x48) = param_1[2];
  *(undefined4 *)((int)this + 0x50) = param_1[4];
  *(undefined4 *)((int)this + 0x54) = param_1[5];
  *(undefined4 *)((int)this + 0x58) = param_1[6];
  *(undefined4 *)((int)this + 0x5c) = param_1[7];
  *(undefined4 *)((int)this + 0x60) = param_1[8];
  *(undefined4 *)((int)this + 100) = param_1[9];
  *(undefined4 *)((int)this + 0x68) = param_1[10];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf6 */
uint F_00607ad0(void)
{
  GEN_ENTER(0x607ad0u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf24 */
uint F_00607ae0(void)
{
  GEN_ENTER(0x607ae0u, 0u, 0u, 0u, 0u);
  return 0;
}

