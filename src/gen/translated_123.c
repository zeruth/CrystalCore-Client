#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ae70b0 */
uint F_00ae70b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae70b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      REFG(undefined4, 0x14c0cc3) = 1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00ae70d0 */
unsigned int F_00ae70d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae70d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if (bVar1 != 0) {
      REFG(undefined4, 0x14c0cc3) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00ae70f0 */
byte F_00ae70f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae70f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x420) = 0;
  REFG(undefined1, 0x14c0a40) = 0;
  return 0;
}

/* ref: FUN_00ae7100 */
float10 F_00ae7100(unsigned int gen_a0)
{
  GEN_ENTER(0xae7100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)(int)(param_1 + 100);
  if ((int)(param_1 + 100) < 0) {
    fVar1 = fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float10)(float)(fVar1 / (float10)*(double *)&REFG(undefined, 0x1088118));
}

/* ref: FUN_00ae7130 */
uint F_00ae7130(void)
{
  GEN_ENTER(0xae7130u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x1375bbc) != 0) {
    return 0;
  }
  return REFG(undefined4, 0x1375b90);
}

/* ref: FUN_00ae7160 */
byte F_00ae7160(void)
{
  GEN_ENTER(0xae7160u, 0u, 0u, 0u, 0u);
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar1 != 0) {
    uVar2 = F_00b6afa0();
    if (uVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae7180 */
uint F_00ae7180(unsigned int gen_a0)
{
  GEN_ENTER(0xae7180u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  undefined4 * puVar1;
  
  this = (undefined *)F_00b6afa0();
  puVar1 = (undefined4 *)F_00a5feb0(this);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00ae7230 */
byte F_00ae7230(void)
{
  GEN_ENTER(0xae7230u, 0u, 0u, 0u, 0u);
  if ((REFG(int, 0x1375b64) != 2) && (REFG(int, 0x1375b64) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae7250 */
uint F_00ae7250(unsigned int gen_a0)
{
  GEN_ENTER(0xae7250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar1 != 0) {
    uVar2 = F_00b6afa0();
    if ((uVar2 != 0) && (*(char *)((int)this + 0xb0) != '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae7280 */
byte F_00ae7280(unsigned int gen_a0)
{
  GEN_ENTER(0xae7280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar1 != 0) {
    uVar2 = F_00b6afa0();
    if (((uVar2 != 0) && (*(char *)((int)this + 0xb0) != '\0')) &&
       (*(char *)((int)this + 0x14) != '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae72e0 */
uint F_00ae72e0(unsigned int gen_a0)
{
  GEN_ENTER(0xae72e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  undefined4 * puVar1;
  
  this = (undefined *)F_00b6afa0();
  puVar1 = (undefined4 *)F_00a5feb0(this);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00ae7310 */
uint F_00ae7310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x230) + 0x19;
  *param_1 = *(undefined4 *)((int)this + iVar1 * 0x10);
  param_1[1] = *(undefined4 *)((int)this + iVar1 * 0x10 + 4);
  param_1[2] = *(undefined4 *)((int)this + iVar1 * 0x10 + 8);
  return (uint)param_1;
}

/* ref: FUN_00ae7340 */
byte F_00ae7340(unsigned int gen_a0)
{
  GEN_ENTER(0xae7340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x18) != '\0') && (*(int *)(in_ecx + 0x238) == *(int *)(in_ecx + 0x234)))
  {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae73e0 */
unsigned int F_00ae73e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae73e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((*(char *)(in_ecx + 0x14) == '\0') && ((char)param_2 != '\0')) {
    *(undefined1 *)(in_ecx + 0x14) = 1;
  }
  if ((*(char *)(in_ecx + 0x15) == '\0') && ((char)param_3 != '\0')) {
    *(undefined1 *)(in_ecx + 0x15) = 1;
  }
  return 0;
}

/* ref: FUN_00ae7420 */
byte F_00ae7420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  bool bVar1;
  
  *(undefined1 *)(in_ecx + 0x22) = 1;
  bVar1 = param_2 != (undefined4 *)0x0;
  if (bVar1) {
    *(undefined4 *)(in_ecx + 0x24) = *param_2;
  }
  *(bool *)(in_ecx + 0x28) = bVar1;
  return bVar1;
}

/* ref: FUN_00ae7440 */
unsigned int F_00ae7440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x176) = 1;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined1 *)((int)this + 0x177) = 1;
    *(undefined4 *)((int)this + 0x178) = *param_1;
    return 0;
  }
  *(undefined1 *)((int)this + 0x177) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  return 0;
}

/* ref: FUN_00ae7490 */
uint F_00ae7490(unsigned int gen_a0)
{
  GEN_ENTER(0xae7490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b6afa0();
  return uVar1;
}

/* ref: FUN_00ae75d0 */
byte F_00ae75d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae75d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(double *)&REFG(undefined, 0x10944e0) <= (double)*(byte *)(in_ecx + 0x156)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae76b0 */
byte F_00ae76b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae76b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae7720 */
byte F_00ae7720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae7720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  *(byte *)(in_ecx + 4) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_00ae7740 */
unsigned int F_00ae7740(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7740u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  return 0;
}

/* ref: FUN_00ae7790 */
float10 F_00ae7790(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0xae7790u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm5 = (float)gen_a4;
  float in_xmm7 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float10 fVar1;
  
  fVar1 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x1092098));
  return (float10)((float)GEN_TOF(((float10)param_7 * (float10)param_8 +
                         ((float10)param_9 * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar1)));
}

/* ref: FUN_00ae77d0 */
float10 F_00ae77d0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xae77d0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm5 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  float fVar1;
  float10 fVar2;
  float in_xmm0;
  
  fVar1 = REFG(float, 0x1339b94);
  in_xmm0 = REFG(float, 0x1339b94);
  if (param_6 != 0) {
    in_xmm0 = *(float *)param_6;
  }
  fVar2 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x1092098));
  return (float10)((float)GEN_TOF((((float10)(float)fVar2 * (float10)REFG(double, 0x1094890)) /
                         ((float10)fVar1 + (float10)fVar1))));
}

/* ref: FUN_00ae7830 */
byte F_00ae7830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7830u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  float * pfVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    pfVar1 = (float *)(param_1 + 0xb4);
    do {
      bVar3 = GEN_ISNAN((float10)pfVar1[-1]) || GEN_ISNAN((float10)*(float *)(param_2 + 0xc));
      if ((((((bVar3 != (bVar3 || (float10)pfVar1[-1] == (float10)*(float *)(param_2 + 0xc))) &&
             (bVar3 = GEN_ISNAN((float10)*pfVar1) || GEN_ISNAN((float10)*(float *)(param_2 + 0x10)),
             bVar3 != (bVar3 || (float10)*pfVar1 == (float10)*(float *)(param_2 + 0x10)))) &&
            (bVar3 = GEN_ISNAN((float10)pfVar1[1]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x14)),
            bVar3 != (bVar3 || (float10)pfVar1[1] == (float10)*(float *)(param_2 + 0x14)))) &&
           ((bVar3 = GEN_ISNAN((float10)pfVar1[0xb]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x18)),
            bVar3 != (bVar3 || (float10)pfVar1[0xb] == (float10)*(float *)(param_2 + 0x18)) &&
            (bVar3 = GEN_ISNAN((float10)pfVar1[0xc]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x1c)),
            bVar3 != (bVar3 || (float10)pfVar1[0xc] == (float10)*(float *)(param_2 + 0x1c)))))) &&
          ((bVar3 = GEN_ISNAN((float10)pfVar1[0xd]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x20)),
           bVar3 != (bVar3 || (float10)pfVar1[0xd] == (float10)*(float *)(param_2 + 0x20)) &&
           ((bVar3 = GEN_ISNAN((float10)pfVar1[0x17]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x24)),
            bVar3 != (bVar3 || (float10)pfVar1[0x17] == (float10)*(float *)(param_2 + 0x24)) &&
            (bVar3 = GEN_ISNAN((float10)pfVar1[0x18]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x28)),
            bVar3 != (bVar3 || (float10)pfVar1[0x18] == (float10)*(float *)(param_2 + 0x28))))))))
         && (bVar3 = GEN_ISNAN((float10)pfVar1[0x19]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x2c)),
            bVar3 != (bVar3 || (float10)pfVar1[0x19] == (float10)*(float *)(param_2 + 0x2c)))) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      pfVar1 = pfVar1 + 4;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  return 0;
}

/* ref: FUN_00ae7a40 */
byte F_00ae7a40(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7a40u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(double *)&REFG(undefined, 0x1094810) < (double)(float)((float10)param_1 - (float10)param_2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae7a70 */
unsigned int F_00ae7a70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7a70u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)((int)param_1 + 0x28) = param_2;
  if ((*(int *)((int)param_1 + 0x14) == 3) && (param_2 <= 0.0)) {
    *(undefined4 *)((int)param_1 + 0x14) = 4;
    F_00af8d90(param_1,4,3);
  }
  return 0;
}

/* ref: FUN_00ae7aa0 */
uint F_00ae7aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((*(char *)(in_ecx + 0xa6) != '\0') &&
     (((char)param_2 == '\0' || (*(char *)(in_ecx + 0xcc) != '\0')))) {
    return in_ecx + 0xd0;
  }
  return in_ecx + 0x80;
}

/* ref: FUN_00ae7ad0 */
byte F_00ae7ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xae7ad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) &&
      (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x10))), in_ecx_00 != 0)) &&
     (bVar1 = F_00a9f620(in_ecx_00), bVar1 != 0)) {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x14) != 0) && (*(char *)(in_ecx + 0x5b) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae7b00 */
unsigned int F_00ae7b00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7b00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(char *)(in_ecx + 0x49) != '\0') {
    *(float *)(in_ecx + 0x40) = param_2;
    *(undefined1 *)(in_ecx + 0x48) = 1;
  }
  return 0;
}

/* ref: FUN_00ae7ba0 */
float10 F_00ae7ba0(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xae7ba0u, 0u, 0u, 0u, 0u);
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = F_00c4d590(in_xmm3,in_xmm5,in_xmm6,(float10)param_4);
  return (float10)(float)fVar1;
}

/* ref: FUN_00ae7bc0 */
byte F_00ae7bc0(float gen_a0)
{
  GEN_ENTER(0xae7bc0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c51673((double)param_1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_1),
                       (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
  return uVar2 == 0;
}

/* ref: FUN_00ae7c10 */
uint F_00ae7c10(float gen_a0)
{
  GEN_ENTER(0xae7c10u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint local_c;
  
  local_c = (uint)(longlong)TRUNC((double)param_1 * *(double *)&REFG(undefined, 0x10912a8));
  return local_c;
}

/* ref: FUN_00ae7c40 */
unsigned int F_00ae7c40(unsigned int gen_a0)
{
  GEN_ENTER(0xae7c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return 0;
}

/* ref: FUN_00ae7c60 */
byte F_00ae7c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7c60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if ((float10)*(float *)&REFG(undefined, 0x10ebbe8) <
      (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)param_2[2] +
                      ((float10)*(float *)param_1 * (float10)*param_2 +
                      (float10)*(float *)(param_1 + 4) * (float10)param_2[1]))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae7ca0 */
uint F_00ae7ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xae7ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 1;
  }
  (*(float *)(gen_frame + 0x70)) = *param_4;
  (*(float *)(gen_frame + 0x74)) = *param_3;
  fVar3 = (float10)(*(float *)(gen_frame + 0x74));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x70)) - fVar3);
  (*(float *)(gen_frame + 0x78)) = param_4[1];
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x20));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = param_3[1];
  fVar4 = (float10)param_3[1];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x78)) - fVar4);
  (*(float *)(gen_frame + 0x58)) = param_4[2];
  (*(float *)(gen_frame + 0x5c)) = param_3[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x58)) - (float10)(*(float *)(gen_frame + 0x5c)));
  fVar5 = (float10)(*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
  fVar6 = (float10)(*(float *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x60)) = *param_5;
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - fVar3);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = param_5[1];
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) - fVar4)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = param_5[2];
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) - (float10)(*(float *)(gen_frame + 0x5c)))));
  fVar7 = (float10)(*(float *)(gen_frame + 0x30));
  (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x30));
  fVar8 = (float10)(*(float *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x34));
  fVar9 = (float10)(*(float *)(gen_frame + 0x38));
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x38));
  (*(float *)(gen_frame + 0x6c)) = *param_2;
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x6c)) - fVar3);
  (*(float *)(gen_frame + 0x68)) = param_2[1];
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - fVar4);
  (*(float *)(gen_frame + 0x64)) = param_2[2];
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)(gen_frame + 0x5c)));
  (*(float *)(gen_frame + 0x7c)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) * fVar6 +
                    ((float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x34)) * fVar5))));
  (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) * fVar9 +
                    ((float10)(*(float *)(gen_frame + 0x30)) * fVar7 + (float10)(*(float *)(gen_frame + 0x34)) * fVar8))));
  if (((float10)(*(float *)(gen_frame + 0x7c)) <= (float10)0) && ((*(float *)(gen_frame + 0x5c)) <= 0.0)) {
    *param_1 = (*(float *)(gen_frame + 0x74));
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return (uint)param_1;
  }
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x6c)) - (float10)(*(float *)(gen_frame + 0x70)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x78)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)(gen_frame + 0x58)));
  (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) * fVar6 +
                    ((float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x34)) * fVar5))));
  (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) * fVar9 +
                    ((float10)(*(float *)(gen_frame + 0x30)) * fVar7 + (float10)(*(float *)(gen_frame + 0x34)) * fVar8))));
  fVar3 = (float10)(*(float *)(gen_frame + 0x78));
  if (((float10)0 < fVar3) && ((float10)(*(float *)(gen_frame + 0x74)) <= fVar3)) {
    *param_1 = (*(float *)(gen_frame + 0x70));
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    return (uint)param_1;
  }
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x74)) * (float10)(*(float *)(gen_frame + 0x7c)) - (float10)(*(float *)(gen_frame + 0x5c)) * fVar3);
  if ((((float10)(*(float *)(gen_frame + 0x58)) <= (float10)0) && (0.0 <= (*(float *)(gen_frame + 0x7c)))) && ((*(float *)(gen_frame + 0x78)) <= 0.0)) {
    (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x7c)) / ((float10)(*(float *)(gen_frame + 0x7c)) - (float10)(*(float *)(gen_frame + 0x78))))));
    uVar2 = F_004bd830(&(*(float *)(gen_frame + 0x0)),(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)),&(*(float *)(gen_frame + 0x10)));
    F_004bd670(param_1,param_3,uVar2);
    return (uint)param_1;
  }
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x6c)) - (float10)(*(float *)(gen_frame + 0x60)));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)))));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)))));
  fVar3 = (float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)))));
  fVar4 = (float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x20)) + fVar3 * fVar5) + fVar4 * fVar6)))
  ;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = ((float)GEN_TOF(((fVar3 * fVar8 + (float10)(*(float *)(gen_frame + 0x30)) * fVar7) + fVar4 * fVar9)));
  fVar3 = (float10)0;
  fVar4 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4));
  fVar5 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4));
  if ((fVar3 <= fVar4) && (fVar5 <= fVar4)) {
    *param_1 = (*(float *)(gen_frame + 0x60));
    param_1[1] = param_5[1];
    param_1[2] = param_5[2];
    return (uint)param_1;
  }
  fVar6 = (float10)(*(float *)(gen_frame + 0x5c));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = (float)(fVar6 * fVar5 - fVar4 * (float10)(*(float *)(gen_frame + 0x7c)));
  fVar7 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4));
  if (((fVar7 <= fVar3) && (0.0 <= (*(float *)(gen_frame + 0x5c)))) && ((*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) <= 0.0)) {
    (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = ((float)GEN_TOF((fVar6 / (fVar6 - fVar4))));
    uVar2 = F_004bd830(&(*(float *)(gen_frame + 0x10)),(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)),&(*(float *)(gen_frame + 0x0)));
    F_004bd670(param_1,param_3,uVar2);
    return (uint)param_1;
  }
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = (float)((float10)(*(float *)(gen_frame + 0x78)) * fVar4 - fVar5 * (float10)(*(float *)(gen_frame + 0x74)));
  fVar6 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4));
  if (fVar6 <= fVar3) {
    fVar3 = (float10)(*(float *)(gen_frame + 0x74)) - (float10)(*(float *)(gen_frame + 0x78));
    if (((float10)0 <= fVar3) && ((*(double *)(gen_frame + 0x48)) = (double)(fVar5 - fVar4), (float10)0 <= fVar5 - fVar4))
    {
      (*(double *)(gen_frame + 0x50)) = (double)fVar3;
      uVar2 = F_0046f4a0(&(*(float *)(gen_frame + 0x0)),param_5,param_4);
      fVar1 = ((float)GEN_TOF(((float10)(*(double *)(gen_frame + 0x50)) / ((float10)(*(double *)(gen_frame + 0x48)) + (float10)(*(double *)(gen_frame + 0x50))))));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar1;
      (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
      uVar2 = F_004bd830(&(*(float *)(gen_frame + 0x10)),fVar1,uVar2);
      F_004bd670(param_1,param_4,uVar2);
      return (uint)param_1;
    }
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = ((float)GEN_TOF(((float10)1 / ((float10)(*(float *)(gen_frame + 0x58)) + (fVar6 + fVar7)))));
  fVar3 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x50)) + 4)) = (float)(fVar3 * fVar7);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = (float)((float10)(*(float *)(gen_frame + 0x58)) * fVar3);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar6 * fVar3);
  fVar4 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4));
  (*(float *)(gen_frame + 0x10)) = (float)(fVar4 * (float10)*param_5);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)param_5[1] * fVar4);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar4 * (float10)param_5[2]);
  fVar5 = (float10)(float)(fVar3 * fVar7);
  (*(float *)(gen_frame + 0x30)) = (float)(fVar5 * (float10)*param_4);
  (*(float *)(gen_frame + 0x34)) = (float)((float10)param_4[1] * fVar5);
  (*(float *)(gen_frame + 0x38)) = (float)(fVar5 * (float10)param_4[2]);
  fVar3 = (float10)(float)(fVar6 * fVar3);
  (*(float *)(gen_frame + 0x20)) = (float)(fVar3 * (float10)*param_3);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)param_3[1] * fVar3);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar3 * (float10)param_3[2]);
  (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)(float)(fVar3 * (float10)*param_3) +
                    (float10)(float)(fVar5 * (float10)*param_4))));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)(float)((float10)param_3[1] * fVar3) +
                    (float10)(float)((float10)param_4[1] * fVar5))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)) =
       ((float)GEN_TOF(((float10)(float)(fVar3 * (float10)param_3[2]) +
              (float10)(float)(fVar5 * (float10)param_4[2]))));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x40)) + (float10)(float)(fVar4 * (float10)*param_5))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x44)) + (float10)(float)((float10)param_5[1] * fVar4))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)) + (float10)(float)(fVar4 * (float10)param_5[2]))));
  *param_1 = (*(float *)(gen_frame + 0x20));
  param_1[1] = (*(float *)(gen_frame + 0x24));
  param_1[2] = (*(float *)(gen_frame + 0x28));
  return (uint)param_1;
}

/* ref: FUN_00ae8170 */
byte F_00ae8170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xae8170u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  fVar6 = (float10)REFG(double, 0x1094890);
  fVar7 = (float10)((float)GEN_TOF((((float10)(float)((float10)param_3[1] * fVar6) * (float10)param_2[1] +
                           (float10)(float)((float10)*param_3 * fVar6) * (float10)*param_2) +
                          (float10)(float)(fVar6 * (float10)param_3[2]) * (float10)param_2[2])));
  fVar5 = (float10)0;
  if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) != ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) {
    return 0;
  }
  fVar6 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)(float)((float10)param_4[1] -
                                                             (float10)param_1[1]) *
                                             (float10)(float)((float10)param_3[1] * fVar6) +
                                            (float10)(float)((float10)*param_4 - (float10)*param_1)
                                            * (float10)(float)((float10)*param_3 * fVar6)) +
                                           (float10)(float)((float10)param_4[2] -
                                                           (float10)param_1[2]) *
                                           (float10)(float)(fVar6 * (float10)param_3[2])))) / fVar7)));
  if ((fVar6 < fVar5) && (param_6 != (undefined1 *)0x0)) {
    *param_6 = 1;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  *param_5 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)((float10)*param_2 * fVar6))));
  param_5[1] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)((float10)fVar1 * fVar6))));
  param_5[2] = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)(fVar6 * (float10)fVar2))));
  return 1;
}

/* ref: FUN_00ae82c0 */
unsigned int F_00ae82c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xae82c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  if ((char)param_1 != '\0') {
    return 0;
  }
  return 0;
}

/* ref: FUN_00ae8330 */
uint F_00ae8330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  ulonglong uVar1;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x24)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x28)) = param_1[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = param_1[3];
    (*(undefined4 *)(gen_frame + 0x34)) = param_1[5];
    (*(undefined4 *)(gen_frame + 0x30)) = param_1[4];
    (*(undefined4 *)(gen_frame + 0x8)) = 0x19a;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
    F_00974e00(this,&(*(undefined4 *)(gen_frame + 0x8)),-(uint)(param_2 != 0) & 0x19a,param_2);
  }
  REFG(undefined1, 0x14c0ce4) = 0;
  *(ulonglong *)&REFG(undefined, 0x14c0ce8) = F_00427d90();
  uVar1 = *(ulonglong *)&REFG(undefined, 0x14c0ce8) >> 8;
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31((int3)uVar1,1);
}

/* ref: FUN_00ae8400 */
uint F_00ae8400(void)
{
  GEN_ENTER(0xae8400u, 0u, 0u, 0u, 0u);
  REFG(undefined1, 0x14c0a66) = 0;
  *(undefined4 *)&REFG(undefined, 0x14c0af8) = 0xe0000000;
  *(undefined4 *)&REFG(undefined, 0x14c0afc) = 0;
  return 0;
}

/* ref: FUN_00ae8430 */
float F_00ae8430(void)
{
  GEN_ENTER(0xae8430u, 0u, 0u, 0u, 0u);
  float fVar1;
  
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x10ebd20))) && !(fVar1 <= REFG(float, 0x10ebd20))) {
    return REFG(float, 0x10ebd20);
  }
  return fVar1;
}

/* ref: FUN_00ae8460 */
float10 F_00ae8460(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xae8460u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)param_8;
  fVar3 = (float10)param_7;
  if (fVar2 <= fVar3) {
    return (float10)param_5;
  }
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10c6318);
  fVar4 = (float10)(float)(fVar2 * (float10)*(double *)&REFG(undefined, 0x109ca50));
  if (fVar3 < fVar4) {
    return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) / fVar4))) *
                           (float10)(float)((float10)param_6 * fVar1))));
  }
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,
                       (float10)((float)GEN_TOF((((float10)((float)GEN_TOF(((fVar3 - fVar4) / (fVar2 - fVar4)))) *
                                        (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108)))))
  ;
  param_7 = (float)fVar2;
  if ((float10)1 < (float10)param_7) {
    param_7 = REFG(float, 0x1087f04);
  }
  fVar2 = (float10)(float)((float10)param_6 * fVar1);
  param_7 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)param_6 - fVar2) * (float10)param_7 +
                                    fVar2))) - ((float10)param_6 - (float10)param_5))));
  if ((float10)((float)GEN_TOF(ABS((float10)param_5))) < (float10)((float)GEN_TOF(ABS((float10)param_7)))) {
    param_7 = param_5;
  }
  return (float10)param_7;
}

/* ref: FUN_00ae8560 */
byte F_00ae8560(unsigned int gen_a0)
{
  GEN_ENTER(0xae8560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x1cc) == '\0') && (*(char *)(in_ecx + 0x1cd) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae8580 */
byte F_00ae8580(unsigned int gen_a0)
{
  GEN_ENTER(0xae8580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
      ) && (REFG(char, 0x14c0a65) != '\0')) {
    return 1;
  }
  return *(byte *)(in_ecx + 0x1cd);
}

/* ref: FUN_00ae85b0 */
byte F_00ae85b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae85b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((((*(int *)(in_ecx + 0x10) == 0) ||
       (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
     (*(char *)(in_ecx + 0x1cc) == '\0')) {
    return 0;
  }
  if (*(int *)(in_ecx + 0x6c) == 7) {
    return 1;
  }
  return *(byte *)(in_ecx + 0x3d);
}

/* ref: FUN_00ae85f0 */
byte F_00ae85f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae85f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  char cVar2;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8615;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8615: ;
  cVar2 = '\x01';
  if (*(int *)(in_ecx + 0x6c) != 7) {
    cVar2 = *(char *)(in_ecx + 0x3d);
  }
  return cVar2 == '\0';
}

/* ref: FUN_00ae8630 */
byte F_00ae8630(unsigned int gen_a0)
{
  GEN_ENTER(0xae8630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
      ) && (REFG(char, 0x14c0a64) != '\0')) {
    return 0;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    if (((*(int *)(in_ecx + 0x10) != 0) &&
        (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)) && (REFG(char, 0x14c0a65) != '\0')) {
      return 1;
    }
    if (*(char *)(in_ecx + 0x1cd) != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae8680 */
byte F_00ae8680(unsigned int gen_a0)
{
  GEN_ENTER(0xae8680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae86a5;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae86a5: ;
  return *(int *)(in_ecx + 0x6c) - 4U < 4;
}

/* ref: FUN_00ae86c0 */
byte F_00ae86c0(unsigned int gen_a0)
{
  GEN_ENTER(0xae86c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae86e5;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae86e5: ;
  return *(int *)(in_ecx + 0x6c) - 5U < 2;
}

/* ref: FUN_00ae8700 */
byte F_00ae8700(unsigned int gen_a0)
{
  GEN_ENTER(0xae8700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8725;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8725: ;
  return *(int *)(in_ecx + 0x6c) == 7;
}

/* ref: FUN_00ae8740 */
byte F_00ae8740(unsigned int gen_a0)
{
  GEN_ENTER(0xae8740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8765;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8765: ;
  return *(byte *)(in_ecx + 0x66);
}

/* ref: FUN_00ae8770 */
byte F_00ae8770(unsigned int gen_a0)
{
  GEN_ENTER(0xae8770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a65) != '\0')) goto LAB_00ae8795;
  }
  if (*(char *)(in_ecx + 0x1cd) == '\0') {
    return 0;
  }
LAB_00ae8795: ;
  return *(byte *)(in_ecx + 0x67);
}

/* ref: FUN_00ae87a0 */
byte F_00ae87a0(unsigned int gen_a0)
{
  GEN_ENTER(0xae87a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x69);
}

/* ref: FUN_00ae87c0 */
byte F_00ae87c0(unsigned int gen_a0)
{
  GEN_ENTER(0xae87c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x204) != 0;
}

/* ref: FUN_00ae87f0 */
byte F_00ae87f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae87f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x204) == 0) {
    return 0;
  }
  return *(int *)(in_ecx + 0x204) == 5;
}

/* ref: FUN_00ae8810 */
byte F_00ae8810(unsigned int gen_a0)
{
  GEN_ENTER(0xae8810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x204);
  if ((iVar1 != 0) && (((iVar1 == 3 || (iVar1 == 4)) || (iVar1 == 2)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae8860 */
uint F_00ae8860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8860u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_00ae8880 */
uint F_00ae8880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x70) = param_2;
  return param_2;
}

/* ref: FUN_00ae8890 */
byte F_00ae8890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae8890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    bVar1 = F_00ae6300(param_2);
    break;
  case 1: ;
    bVar1 = F_00ae6320(param_2);
    break;
  case 2: ;
    bVar1 = F_00ae6340(param_2);
    break;
  case 3: ;
    bVar1 = F_00ae6390(param_2);
    break;
  case 4: ;
    bVar1 = F_00ae63e0(param_2);
    break;
  case 5: ;
    bVar1 = F_00ae6440(param_2);
    break;
  case 6: ;
    bVar1 = F_00ae6490(param_2);
    break;
  case 7: ;
    bVar1 = F_00ae64e0(param_2);
    break;
  case 8: ;
    bVar1 = F_00ae6540(param_2);
    break;
  case 9: ;
    bVar1 = F_00ae6560(param_2);
    break;
  case 10: ;
    bVar1 = F_00ae65b0(param_2);
    break;
  case 0xb: ;
    bVar1 = F_00ae6600(param_2);
    break;
  case 0xc: ;
    bVar1 = F_00ae6620(param_2);
    break;
  case 0xd: ;
    bVar1 = F_00ae6640(param_2);
    break;
  case 0xe: ;
    bVar1 = F_00ae6660(param_2);
    break;
  case 0xf: ;
    bVar1 = F_00ae6680(param_2);
    break;
  case 0x10: ;
    bVar1 = F_00ae66c0(param_2);
    break;
  default: ;
    goto switchD_00ae88a7_default;
  }
  if (bVar1 == 0) {
switchD_00ae88a7_default: ;
    if ((param_1 == 0) && (uVar2 = F_00ae6e80(this), param_2 == uVar2)) {
      return 1;
    }
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00ae89a0 */
byte F_00ae89a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae89a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  do {
    uVar1 = F_00aa0210(*(undefined4 *)((int)this + 0x10),uVar3,0);
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      if (uVar1 == 3) {
        return 1;
      }
      if (uVar1 == 0x22) {
        return 1;
      }
LAB_00ae8b33: ;
      uVar2 = F_00ae6e80(this);
      bVar4 = uVar1 == uVar2;
      goto LAB_00ae8b3d;
    case 1: ;
      if (uVar1 == 0xd) {
        return 1;
      }
      bVar4 = uVar1 == 0x29;
      goto LAB_00ae8b3d;
    case 2: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x11: ;
      case 0x12: ;
      case 0x13: ;
      case 0x2d: ;
      case 0x2e: ;
      case 0x2f: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 3: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x14: ;
      case 0x15: ;
      case 0x30: ;
      case 0x31: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 4: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x16: ;
      case 0x1e: ;
      case 0x32: ;
      case 0x3a: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 5: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x19: ;
      case 0x1a: ;
      case 0x1b: ;
      case 0x2e: ;
      case 0x35: ;
      case 0x37: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 6: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x1c: ;
      case 0x1d: ;
      case 0x38: ;
      case 0x39: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 7: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0xe: ;
      case 0xf: ;
      case 0x17: ;
      case 0x18: ;
      case 0x2a: ;
      case 0x2b: ;
      case 0x33: ;
      case 0x34: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 8: ;
      if (uVar1 == 0x10) {
        return 1;
      }
      bVar4 = uVar1 == 0x2c;
      goto LAB_00ae8b3d;
    case 9: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 7: ;
      case 8: ;
      case 9: ;
      case 10: ;
      case 0xb: ;
      case 0xc: ;
      case 0x23: ;
      case 0x24: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 10: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 7: ;
      case 8: ;
      case 0x23: ;
      case 0x24: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 0xb: ;
      if (uVar1 == 0x1f) {
        return 1;
      }
      bVar4 = uVar1 == 0x3b;
      goto LAB_00ae8b3d;
    case 0xc: ;
      if (uVar1 == 0x20) {
        return 1;
      }
      bVar4 = uVar1 == 0x3c;
      goto LAB_00ae8b3d;
    case 0xd: ;
      if (uVar1 == 0x21) {
        return 1;
      }
      bVar4 = uVar1 == 0x3d;
      goto LAB_00ae8b3d;
    case 0xe: ;
      if (uVar1 == 0x1e) {
        return 1;
      }
      bVar4 = uVar1 == 0x3a;
      goto LAB_00ae8b3d;
    case 0xf: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x40: ;
      case 0x41: ;
      case 0x46: ;
      case 0x47: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 0x10: ;
      if (uVar1 == 0x41) {
        return 1;
      }
      bVar4 = uVar1 == 0x47;
LAB_00ae8b3d: ;
      if (bVar4) {
switchD_00ae8b1a_caseD_40: ;
        return 1;
      }
      break;
    default: ;
      if (param_1 == 0) goto LAB_00ae8b33;
    }
    uVar3 = uVar3 + 1;
    if (0xd < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00ae8d00 */
byte F_00ae8d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae6600(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00ae6620(param_2);
    if (bVar1 == 0) {
      bVar1 = F_00ae6640(param_2);
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_00ae8d40 */
byte F_00ae8d40(unsigned int gen_a0)
{
  GEN_ENTER(0xae8d40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae6600(param_1);
  return bVar1 != 0;
}

/* ref: FUN_00ae8d60 */
byte F_00ae8d60(unsigned int gen_a0)
{
  GEN_ENTER(0xae8d60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae6620(param_1);
  return bVar1 != 0;
}

/* ref: FUN_00ae8d80 */
byte F_00ae8d80(unsigned int gen_a0)
{
  GEN_ENTER(0xae8d80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae6640(param_1);
  return bVar1 != 0;
}

/* ref: FUN_00ae8da0 */
byte F_00ae8da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8da0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae6320(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00ae6340(param_2);
    if (bVar1 == 0) {
      bVar1 = F_00ae6390(param_2);
      if (bVar1 == 0) {
        bVar1 = F_00ae63e0(param_2);
        if (bVar1 == 0) {
          bVar1 = F_00ae6440(param_2);
          if (bVar1 == 0) {
            bVar1 = F_00ae6490(param_2);
            if (bVar1 == 0) {
              bVar1 = F_00ae64e0(param_2);
              if (bVar1 == 0) {
                bVar1 = F_00ae6540(param_2);
                if (bVar1 == 0) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_00ae8e20 */
byte F_00ae8e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae64e0(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00ae6540(param_2);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ae8e50 */
byte F_00ae8e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae6340(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00ae6440(param_2);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ae8e80 */
byte F_00ae8e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8e80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae6390(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00ae6490(param_2);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ae8eb0 */
byte F_00ae8eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xae8eb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae65b0(param_1);
  return bVar1 != 0;
}

/* ref: FUN_00ae8ed0 */
byte F_00ae8ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xae8ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae6660(param_1);
  return bVar1 != 0;
}

/* ref: FUN_00ae8ef0 */
byte F_00ae8ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xae8ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  REFG(undefined4, 0x14c0a72) = 1;
  REFG(undefined4, 0x14c0a78) = param_1 != (undefined4 *)0x0;
  if (REFG(undefined4, 0x14c0a78)) {
    *(undefined4 *)&REFG(undefined, 0x14c0a74) = *param_1;
  }
  return REFG(undefined4, 0x14c0a78);
}

/* ref: FUN_00ae8f20 */
unsigned int F_00ae8f20(void)
{
  GEN_ENTER(0xae8f20u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x14c0bc4) = 1;
  return 0;
}

/* ref: FUN_00ae8f30 */
uint F_00ae8f30(unsigned int gen_a0)
{
  GEN_ENTER(0xae8f30u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  REFG(undefined4, 0x14c0bc6) = 1;
  if (param_1 != (undefined4 *)0x0) {
    REFG(undefined4, 0x14c0bc7) = 1;
    *(undefined4 *)&REFG(undefined, 0x14c0bc8) = *param_1;
    return (uint)param_1;
  }
  REFG(undefined4, 0x14c0bc7) = 0;
  *(undefined4 *)&REFG(undefined, 0x14c0bc8) = 0;
  return (uint)param_1;
}

/* ref: FUN_00ae8f70 */
unsigned int F_00ae8f70(void)
{
  GEN_ENTER(0xae8f70u, 0u, 0u, 0u, 0u);
  if (REFG(char, 0x14c0a68) != '\0') {
    *(undefined4 *)&REFG(undefined, 0x14c0af8) = REFG(undefined4, 0x14c0af0);
    *(undefined4 *)&REFG(undefined, 0x14c0afc) = REFG(undefined4, 0x14c0af4);
  }
  return 0;
}

/* ref: FUN_00ae8f90 */
byte F_00ae8f90(unsigned int gen_a0)
{
  GEN_ENTER(0xae8f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8fb5;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8fb5: ;
  return *(byte *)(in_ecx + 0x66);
}

/* ref: FUN_00ae8fc0 */
byte F_00ae8fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xae8fc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((((*(int *)(in_ecx + 0x10) != 0) &&
       (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)) && (REFG(char, 0x14c0a64) != '\0')) ||
     (bVar1 = REFG(undefined1, 0x14c0bcc), *(char *)(in_ecx + 0x1cc) != '\0')) {
    if ((((*(int *)(in_ecx + 0x10) == 0) ||
         (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
       (*(char *)(in_ecx + 0x1cc) == '\0')) {
      return 0;
    }
    bVar1 = 1;
    if (*(int *)(in_ecx + 0x6c) != 7) {
      return *(byte *)(in_ecx + 0x3d);
    }
  }
  return bVar1;
}

/* ref: FUN_00ae9020 */
byte F_00ae9020(unsigned int gen_a0)
{
  GEN_ENTER(0xae9020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((((*(int *)(in_ecx + 0x10) != 0) &&
        (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)) && (REFG(char, 0x14c0a64) != '\0')) ||
      (*(char *)(in_ecx + 0x1cc) != '\0')) && (*(int *)(in_ecx + 0x6c) - 4U < 4)) {
    return 1;
  }
  if ((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0))
  {
    if ((*(int *)(in_ecx + 0x10) != 0) &&
       ((bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0 && (REFG(char, 0x14c0a64) != '\0')))) {
      return 0;
    }
    if (((((*(char *)(in_ecx + 0x1cc) == '\0') && (REFG(char, 0x14c0a6b) != '\0')) && (REFG(char, 0x14c0a67) == '\0'))
        && ((REFG(char, 0x14c0a68) == '\0' && (REFG(char, 0x14c0a69) == '\0')))) && (REFG(char, 0x14c0a6a) == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae90c0 */
float10 F_00ae90c0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae90c0u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte bVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  
  fVar3 = REFG(float, 0x10ebc30);
  dVar2 = *(double *)&REFG(undefined, 0x1094818);
  bVar4 = false;
  if (GEN_ISNAN(param_2) == (GEN_ISNAN(param_2) || param_2 == 0.0)) {
    if (((*(double *)&REFG(undefined, 0x1094818) < (double)param_2) &&
        (param_2 = REFG(float, 0x10ebc40), (*(byte *)(param_3 + 2) & 0x40) == 0)) &&
       (param_2 = REFG(float, 0x10ebc30), (char)*(byte *)(param_3 + 2) < '\0')) {
      param_2 = REFG(float, 0x1339b24);
    }
    *(float *)(param_1 + 0x444) = param_2;
  }
  else {
    param_2 = *(float *)(param_1 + 0x444);
    bVar4 = true;
  }
  bVar1 = *(byte *)(param_3 + 3);
  bVar5 = (bVar1 & 1) != 0;
  if ((*(char *)(param_1 + 0x1cc) == '\0') && (*(char *)(param_1 + 0x1cd) == '\0')) {
    fVar6 = (float10)((float)GEN_TOF(((float10)*(byte *)(param_3 + 4) / (float10)REFG(double, 0x10944b8))));
    bVar4 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)0);
    if (bVar4 != (bVar4 || fVar6 == (float10)0)) {
      return (float10)param_2;
    }
    if (bVar5) {
      param_2 = fVar3;
    }
  }
  else if ((bVar1 & 2) != 0 || ((bVar1 & 4) != 0 || bVar5)) {
    param_3 = (uint)gen_fl2bits(((float)GEN_TOF((((float10)*(float *)(param_1 + 0x4c) -
                                        (float10)*(float *)(param_1 + 0x80)) -
                                       (float10)*(double *)&REFG(undefined, 0x1094810)))));
    if (((float10)GEN_TOD(gen_bits2f(param_3))) < (float10)0) {
      param_3 = 0;
    }
    if (!bVar4) {
      param_3 = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)param_2));
    }
    param_2 = gen_bits2f(param_3);
  }
  if (dVar2 < (double)param_2) {
    param_2 = REFG(float, 0x10ebc34);
  }
  return (float10)param_2;
}

/* ref: FUN_00ae9200 */
unsigned int F_00ae9200(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae9200u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(char *)(in_ecx + 0x359) != '\0') {
    *(float *)(in_ecx + 0x350) = param_2;
    *(undefined1 *)(in_ecx + 0x358) = 1;
  }
  return 0;
}

/* ref: FUN_00ae9230 */
uint F_00ae9230(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae9230u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  float10 fVar2;
  
  fVar2 = (float10)((float)GEN_TOF(ABS((float10)param_2)));
  if (fVar2 <= (float10)(float)((float10)*(float *)&REFG(undefined, 0x1339b50) * (float10)*(double *)&REFG(undefined, 0x1080228)
                               )) {
    return (-(uint)((char)param_3 != '\0') & 3) + 1;
  }
  if ((char)param_3 == '\0') {
    uVar1 = 1;
    if ((float10)*(float *)&REFG(undefined, 0x1339b4c) < fVar2) {
      uVar1 = 2;
      if (!(*(float *)&REFG(undefined, 0x1088114) < param_2)) {
        uVar1 = 3;
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        F_00a9f620(*(int *)(param_1 + 0x10));
      }
    }
    return uVar1;
  }
  if ((float10)(float)((float10)*(double *)&REFG(undefined, 0x1080228) * (float10)*(float *)&REFG(undefined, 0x1339b54)) < fVar2
     ) {
    return 7;
  }
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_2 <= *(float *)&REFG(undefined, 0x1088114))) {
    return 5;
  }
  return 6;
}

/* ref: FUN_00ae9300 */
uint F_00ae9300(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae9300u, gen_a0, 0u, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0))
  {
    if (REFG(char, 0x14c0bc2) != '\0') {
      return 0xb;
    }
    if (REFG(char, 0x14c0a6b) == '\0') goto LAB_00ae9359;
  }
  if ((float10)((float)GEN_TOF(ABS((float10)param_2))) <= (float10)*(float *)&REFG(undefined, 0x1339b84)) {
    return 0xb;
  }
LAB_00ae9359: ;
  uVar2 = 1;
  if ((float10)param_2 < -(float10)*(float *)&REFG(undefined, 0x14c0a4c)) {
    uVar2 = 2;
  }
  if ((char)param_3 == '\0') {
    if ((float10)*(float *)&REFG(undefined, 0x1339b4c) < (float10)((float)GEN_TOF(ABS((float10)param_2)))) {
      uVar2 = 3;
      if (!(*(float *)&REFG(undefined, 0x1088114) < param_2)) {
        uVar2 = 4;
      }
      if (*(int *)(in_ecx + 0x10) != 0) {
        F_00a9f620(*(int *)(in_ecx + 0x10));
      }
    }
  }
  else if (*(float *)&REFG(undefined, 0x1088114) < param_2) {
    uVar2 = 9;
  }
  else {
    uVar2 = 10;
  }
  if ((char)param_4 != '\0') {
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 1: ;
      return 5;
    case 2: ;
      return 6;
    case 3: ;
      return 7;
    case 4: ;
      uVar2 = 8;
    }
  }
  return uVar2;
}

/* ref: FUN_00ae9430 */
uint F_00ae9430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae9430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00ae9490 */
float F_00ae9490(unsigned int gen_a0)
{
  GEN_ENTER(0xae9490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar2 = F_00a9f620(*(int *)((int)this + 0x10));
    if (bVar2 != 0) goto LAB_00ae94bb;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (uVar3 == 1) {
LAB_00ae94bb: ;
      return *((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc0)));
    }
  }
  return (float)(float10)0;
}

/* ref: FUN_00ae94d0 */
uint F_00ae94d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae94d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00ae94f0 */
float10 F_00ae94f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae94f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0xc0))) +
                                          (float10)REFG(float, 0x1339ba4)))) * (float10)REFG(double, 0x1088108))));
}

/* ref: FUN_00ae9520 */
float F_00ae9520(unsigned int gen_a0)
{
  GEN_ENTER(0xae9520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int in_ecx;
  int * piVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  
  fVar3 = REFG(float, 0x1339ba4);
  in_ecx = *(int *)((int)this + 0x10);
  fVar1 = *(float *)(in_ecx + 0xc0);
  if (in_ecx != 0) {
    bVar4 = F_00a9f620(in_ecx);
    if (bVar4 != 0) goto LAB_00ae956b;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar2 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if (uVar5 == 1) {
LAB_00ae956b: ;
      return ((float)GEN_TOF((((float10)fVar1 + (float10)fVar3) + (float10)REFG(double, 0x1091858))));
    }
  }
  return REFG(float, 0x1339af4);
}

/* ref: FUN_00ae95a0 */
uint F_00ae95a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae95a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + 0x374) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x378) = *(undefined4 *)(param_1 + 8);
  return param_1;
}

/* ref: FUN_00ae95c0 */
unsigned int F_00ae95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae95c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x88);
  }
  *(undefined4 *)((int)this + 0x374) = uVar1;
  *(undefined4 *)((int)this + 0x378) = *(undefined4 *)(param_1 + 0x84);
  return 0;
}

/* ref: FUN_00ae9670 */
byte F_00ae9670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae9670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
  bVar1 = F_00551a90(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),param_2,&(*(undefined4 *)(gen_frame + 0x0)),2);
  return bVar1;
}

/* ref: FUN_00ae96c0 */
byte F_00ae96c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae96c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 4))))(*(int * PTR32 *)((int)this + 0x10));
  if (uVar2 != 1) {
    return 0;
  }
  if (((*(int *)((int)this + 0x10) == 0) ||
      (bVar1 = F_00a9f620(*(int *)((int)this + 0x10)), bVar1 == 0)) || (param_1 != (undefined *)0x0)) {
    if (param_2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
    }
  }
  else if (param_2 == (undefined4 *)0x0) {
    return REFG(undefined1, 0x14a73a4);
  }
  (*(undefined4 *)(gen_frame + 0x50)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x54)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x58)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0x64)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x68)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x6c)) = param_2[2];
  bVar1 = F_00551a90(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),((int *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x64)),2);
  if ((bVar1 != 0) && (uVar2 = 0, (*(uint *)(gen_frame + 0x48)) != 0)) {
    do {
      if (((*(byte *)(((int *)(gen_frame + 0x8))[uVar2] + 0x44) & 8) != 0) &&
         ((piVar3 = (int *)F_005f32a0(0x2b,((int *)(gen_frame + 0x8))[uVar2]), piVar3 != (int *)0x0 &&
          ((*(byte *)((int)piVar3 + 0x96) & 1) != 0)))) {
        if (param_1 != (undefined *)0x0) {
          uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xfc))(piVar3);
          F_006001e0(param_1,uVar2);
        }
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(uint *)(gen_frame + 0x48)));
  }
  return 0;
}

/* ref: FUN_00ae97f0 */
uint F_00ae97f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae97f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ae9810 */
uint F_00ae9810(unsigned int gen_a0)
{
  GEN_ENTER(0xae9810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ae9840 */
uint F_00ae9840(void)
{
  GEN_ENTER(0xae9840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0x32;
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xb0);
    uVar1 = *(uint *)(uVar1 + 0x14);
  }
  return uVar1;
}

/* ref: FUN_00ae9860 */
byte F_00ae9860(void)
{
  GEN_ENTER(0xae9860u, 0u, 0u, 0u, 0u);
  if (((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) && (*(int *)(REFG(int, 0x1375b90) + 0xe0) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae9970 */
byte F_00ae9970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xae9970u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  (*(float *)(gen_frame + 0x1c)) = *param_1;
  (*(float *)(gen_frame + 0x18)) = param_1[1];
  (*(float *)(gen_frame + 0x14)) = param_1[2];
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*param_2 - (float10)*param_1);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_2[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)param_2[2] - (float10)param_1[2]);
  F_004bd580(&(*(float *)(gen_frame + 0x0)));
  if ((float10)param_4 < (float10)REFG(float, 0x1339b38)) {
    *param_3 = (*(float *)(gen_frame + 0x1c));
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return 0;
  }
  fVar2 = (float10)(*(float *)(gen_frame + 0x0));
  fVar3 = (float10)(float)((float10)param_4 * (float10)*(double *)&REFG(undefined, 0x1094818));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar3 * fVar2);
  fVar4 = (float10)(*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar4 * fVar3);
  fVar1 = (float10)(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar3 * fVar1);
  *param_3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x1c)) + (float10)(float)(fVar3 * fVar2))));
  param_3[1] = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) + (float10)(float)(fVar4 * fVar3))));
  param_3[2] = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) + (float10)(float)(fVar3 * fVar1))));
  return 1;
}

/* ref: FUN_00ae9ae0 */
float10 F_00ae9ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae9ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  float fVar2;
  float local_8;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10)));
  local_8 = 0.0;
  if (((iVar1 == 0) || ((*(byte *)(iVar1 + 0x2dd2) >> 2 & 1) == 0)) || ((char)param_2 != '\0')) {
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 4: ;
      if ((char)param_2 == '\0') {
        local_8 = *(float *)(param_1 + 0x34);
      }
      else {
        local_8 = *(float *)(param_1 + 0x38);
      }
      break;
    case 5: ;
    case 6: ;
      if ((char)param_2 == '\0') {
        local_8 = *(float *)(param_1 + 0x3c);
      }
      else {
        local_8 = *(float *)(param_1 + 0x40);
      }
      break;
    case 7: ;
      local_8 = *(float *)(param_1 + 0x44);
    }
  }
  else {
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 4: ;
      local_8 = *(float *)(param_1 + 0x48);
      break;
    case 5: ;
    case 6: ;
      local_8 = *(float *)(param_1 + 0x4c);
      break;
    case 7: ;
      local_8 = *(float *)(param_1 + 0x50);
    }
  }
  fVar2 = F_00aa07e0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))));
  return (float10)(float)((float10)fVar2 * (float10)local_8);
}

/* ref: FUN_00ae9bc0 */
unsigned int F_00ae9bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae9bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((char)param_2 != '\0') {
    return 0;
  }
  return 0;
}

/* ref: FUN_00ae9bf0 */
unsigned int F_00ae9bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae9bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  if ((char)param_3 != '\0') {
    return 0;
  }
  if ((char)param_2 != '\0') {
    return 0;
  }
  return 0;
}

/* ref: FUN_00ae9c70 */
byte F_00ae9c70(void)
{
  GEN_ENTER(0xae9c70u, 0u, 0u, 0u, 0u);
  byte bVar1;
  undefined * this;
  
  this = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
  bVar1 = F_00a34b70(this,0x118);
  if (bVar1 != 0) {
    return 1;
  }
  return REFG(int, 0x1375b64) == 3;
}

/* ref: FUN_00ae9ca0 */
byte F_00ae9ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xae9ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
  bVar1 = F_00a34970(this_00,0x12e);
  if (bVar1 == 0) {
    bVar1 = F_0053bd10(&REFG(undefined, 0x1375b30));
    if (((bVar1 == 0) || (*(char *)((int)this + 0x14) == '\0')) &&
       (*(char *)((int)this + 0x174) == '\0')) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ae9d10 */
byte F_00ae9d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae9d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
  bVar1 = F_00a34970(this_00,0x129);
  if ((bVar1 != 0) || (*(char *)((int)this + 0x176) != '\0')) {
    if ((char)param_1 == '\0') {
      return 1;
    }
    uVar2 = F_00b6afa0();
    if ((uVar2 != 0) &&
       (uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), uVar3 = F_00b6afa0(), uVar3 != uVar2
       )) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae9d70 */
byte F_00ae9d70(unsigned int gen_a0)
{
  GEN_ENTER(0xae9d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x17) != '\0') {
    uVar2 = F_00b6afa0();
    if (uVar2 != 0) {
      bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ae9da0 */
uint F_00ae9da0(unsigned int gen_a0)
{
  GEN_ENTER(0xae9da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  bool bVar3;
  uint uVar2;
  
  this_00 = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
  bVar1 = F_00a34970(this_00,0x130);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    bVar3 = *(char *)((int)this + 0x16) == '\0';
    uVar2 = CONCAT31(extraout_var,bVar3);
    *(bool *)((int)this + 0x16) = bVar3;
    if ((*(char *)((int)this + 0x17) != '\0') && (*(int *)((int)this + 0x164) != 4)) {
      *(bool *)((int)this + 0x1c) = bVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_00ae9de0 */
uint F_00ae9de0(unsigned int gen_a0)
{
  GEN_ENTER(0xae9de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  int * piVar3;
  
  this_00 = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
  bVar1 = F_00a34b70(this_00,2);
  if ((bVar1 == 0) && (*(char *)((int)this + 0x274) != '\0')) {
    *(undefined1 *)((int)this + 0x274) = 0;
  }
  bVar1 = F_00a34970(this_00,2);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 != 0) && (*(char *)((int)this + 0x14) == '\0')) {
    uVar2 = F_00b6afa0();
    if (uVar2 == 0) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x88))(piVar3);
      if ((char)uVar2 == '\0') {
        *(undefined1 *)((int)this + 0x274) = 1;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00ae9e50 */
unsigned int F_00ae9e50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae9e50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar2 = false;
  if ((((((float10)REFG(float, 0x1339b38) <
          (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x34) - (float10)param_2)))
                             )))) && (bVar2 = true, *(char *)(iVar1 + 0x67) != '\0')) &&
       (*(undefined1 *)(iVar1 + 0x67) = 0, *(char *)(param_1 + 0x1a) == '\0')) &&
      ((bVar3 = GEN_ISNAN(*(float *)(iVar1 + 0x50)) || GEN_ISNAN(REFG(float, 0x10ebbf0)),
       bVar3 == (bVar3 || *(float *)(iVar1 + 0x50) == REFG(float, 0x10ebbf0)) && (2 < *(int *)(iVar1 + 0x58)))
      )) && (*(int *)(iVar1 + 0x58) < 6)) {
    *(float *)(iVar1 + 0x50) = REFG(float, 0x10ebbf0);
  }
  if ((*(char *)(param_1 + 0x15) == '\0') || (bVar2)) {
    *(undefined4 *)(iVar1 + 0x38) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))) + 0xb0)));
  }
  return 0;
}

/* ref: FUN_00ae9ee0 */
byte F_00ae9ee0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae9ee0u, gen_a0, 0u, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  
  *(undefined1 *)(in_ecx + 0x2a) = 1;
  *(float *)(in_ecx + 0x144) = param_2;
  bVar1 = 0;
  if (param_3 != 0) {
    bVar1 = *(byte *)(param_3 + 4);
    *(byte *)(in_ecx + 0x14c) = bVar1;
  }
  return bVar1;
}

/* ref: FUN_00ae9f10 */
byte F_00ae9f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae9f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  int * this_00;
  uint uVar3;
  float * pfVar4;
  
  if (param_1 != -0x20000000) {
    this_00 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,param_2);
    if (this_00 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0xb8))(this_00);
      if (((char)uVar3 != '\0') && (this_00 != REFG(undefined4, 0x1379694))) {
        pfVar4 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
        fVar1 = *pfVar4;
        fVar2 = pfVar4[2];
        pfVar4 = (float *)F_00a5feb0(this_00);
        if (!(*(double *)&REFG(undefined, 0x1088070) <
             (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar4 - (float10)fVar1
                                                                  ) *
                                                  (float10)(float)((float10)*pfVar4 - (float10)fVar1
                                                                  ) +
                                                 (float10)(float)((float10)pfVar4[2] -
                                                                 (float10)fVar2) *
                                                 (float10)(float)((float10)pfVar4[2] -
                                                                 (float10)fVar2))))))))) {
          *(undefined1 *)((int)this + 0x175) = 1;
          *(int *)((int)this + 0xa0) = param_1;
          *(undefined4 *)((int)this + 0xa4) = param_2;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00ae9ff0 */
double F_00ae9ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xae9ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  float local_8;
  
  local_8 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0)));
  if (*(char *)((int)this + 0x18) == '\0') {
    if (*(char *)((int)this + 0x17) == '\0') goto LAB_00aea060;
    uVar2 = F_00b6afa0();
    if (uVar2 == 0) goto LAB_00aea060;
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if (bVar1 == 0) goto LAB_00aea060;
    uVar2 = F_00b6afa0();
  }
  else {
    if (*(int *)((int)this + 0xa0) == -0x20000000) goto LAB_00aea060;
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),*(undefined4 *)((int)this + 0xa4))
    ;
  }
  if (uVar2 != 0) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(uVar2 + 0xc0) + (float10)local_8)));
  }
LAB_00aea060: ;
  return (double)local_8;
}

/* ref: FUN_00aea070 */
uint F_00aea070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaea070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  
  (*(float *)(gen_frame + 0x5c)) = *param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = this;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_3 - (float10)*param_1);
  (*(float *)(gen_frame + 0x58)) = param_1[2];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)param_3[2] - (float10)param_1[2]);
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x18));
  fVar6 = (float10)0 * (float10)0;
  (*(double *)(gen_frame + 0x48)) = (double)fVar6;
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18)) +
                    (fVar6 + (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10))))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x54)))));
  fVar6 = (float10)0;
  fVar7 = (float10)(*(float *)(gen_frame + 0x54));
  bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
  bVar5 = bVar4 || fVar7 == fVar6;
  pfVar3 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)param_3) >> 0x10),
                             CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= fVar7),(char)param_3
                                     ))));
  if (bVar4 == bVar5) {
    uVar2 = F_004bd580(&(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x34)) = 0.0;
    (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0x18)) = (float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x18));
    (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(double *)(gen_frame + 0x48))) +
                      (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18)))));
    (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x54)))));
    fVar6 = (float10)0;
    fVar7 = (float10)(*(float *)(gen_frame + 0x54));
    bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
    bVar5 = bVar4 || fVar7 == fVar6;
    pfVar3 = ((float *)GEN_TOP(CONCAT22((short)(uVar2 >> 0x10),
                               CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= fVar7),(char)uVar2
                                       ))));
    if (bVar4 == bVar5) {
      F_004bd580(&(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x14)) = 0.0;
      (*(float *)(gen_frame + 0x0)) = (float)((float10)*param_4 - (float10)(*(float *)(gen_frame + 0x5c)));
      (*(float *)(gen_frame + 0x8)) = (float)((float10)param_4[2] - (float10)(*(float *)(gen_frame + 0x58)));
      (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x0));
      (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x8));
      (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(double *)(gen_frame + 0x48))) +
                        (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)))));
      (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x54)))));
      fVar6 = (float10)0;
      fVar7 = (float10)(*(float *)(gen_frame + 0x54));
      bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
      bVar5 = bVar4 || fVar7 == fVar6;
      pfVar3 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)param_4) >> 0x10),
                                 CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= fVar7),
                                          (char)param_4))));
      if (bVar4 == bVar5) {
        pfVar3 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x10)));
        fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x30)) +
                        (float10)(*(float *)(gen_frame + 0x24)) * (float10)(*(float *)(gen_frame + 0x34))) +
                       (float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x38)))));
        (*(float *)(gen_frame + 0x54)) = fVar1;
        (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x18)) +
                          ((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x20)) +
                          (float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x24))))));
        if ((float10)(*(float *)(gen_frame + 0x54)) <= (float10)fVar1) {
          F_0046f4a0(&(*(float *)(gen_frame + 0x10)),param_4,param_1);
          (*(float *)(gen_frame + 0x0)) = 0.0;
          (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x8)) = 0.0;
          F_00ae74d0(REFG(float, 0x1339b64),&(*(float *)(gen_frame + 0x10)),param_5,&(*(float *)(gen_frame + 0x0)));
          pfVar3 = (float *)F_004bd670(&(*(float *)(gen_frame + 0x0)),param_1,&(*(float *)(gen_frame + 0x10)));
          *param_2 = *pfVar3;
          param_2[1] = pfVar3[1];
          param_2[2] = pfVar3[2];
        }
      }
    }
  }
  return (uint)pfVar3;
}

/* ref: FUN_00aea290 */
byte F_00aea290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaea290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  F_00afef80(param_2,&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x44)),((float *)(gen_frame + 0x48)));
  (*(float *)(gen_frame + 0x54)) = param_1[1];
  (*(float *)(gen_frame + 0x50)) = *param_1;
  (*(float *)(gen_frame + 0x58)) = param_1[2];
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0))) +
                     (float10)REFG(float, 0x1339ba4)) + (float10)param_1[1])));
  fVar2 = (float10)REFG(double, 0x1094890);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)param_2 + 0xc);
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x40)) * fVar2);
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)param_2 + 0x10);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)param_2 + 0x14);
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar2);
  (*(float *)(gen_frame + 0x38)) = (float)(fVar2 * (float10)((float *)(gen_frame + 0x48))[0]);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x40)) * fVar2);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar2);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar2 * (float10)((float *)(gen_frame + 0x48))[0]);
  bVar1 = F_00ae8170(&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)),0);
  if (bVar1 != 0) {
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x58)));
    fVar2 = (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x54)));
    fVar3 = (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x50)));
    fVar4 = (float10)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2))));
    (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x6c)))));
    if ((float10)(*(float *)(gen_frame + 0x6c)) < (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0))))
    {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aea410 */
unsigned int F_00aea410(void)
{
  GEN_ENTER(0xaea410u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00aea4b0 */
byte F_00aea4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaea4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)((int)this + 0x10);
  if ((((*(int *)(iVar1 + 0x204) == 0) || (*(int *)(iVar1 + 0x204) == 5)) &&
      (*(char *)((int)this + 0x1a) == '\0')) &&
     (((*(char *)((int)this + 0x29) == '\0' && (*(char *)(iVar1 + 0x1cc) == '\0')) &&
      (*(char *)(iVar1 + 0x1cd) == '\0')))) {
    if ((char)param_1 == '\0') {
LAB_00aea50c: ;
      return *((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x359))) == '\0';
    }
    if (*(char *)((int)this + 0x273) == '\0') {
      bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30);
      if (bVar2 != 0) goto LAB_00aea50c;
    }
  }
  return 0;
}

/* ref: FUN_00aea520 */
byte F_00aea520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaea520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)(iVar1 + 0x204);
  if ((((iVar2 == 0) || (iVar2 == 5)) || (iVar2 == 1)) &&
     (((*(char *)((int)this + 0x1a) == '\0' && (*(char *)((int)this + 0x29) == '\0')) &&
      ((*(char *)(iVar1 + 0x1cc) == '\0' && (*(char *)(iVar1 + 0x1cd) == '\0')))))) {
    if ((char)param_1 == '\0') {
LAB_00aea581: ;
      return *((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x359))) == '\0';
    }
    if (*(char *)((int)this + 0x273) == '\0') {
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30);
      if (bVar3 != 0) goto LAB_00aea581;
    }
  }
  return 0;
}

/* ref: FUN_00aea5a0 */
byte F_00aea5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaea5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  char * pcVar4;
  
  if ((((*(char *)((int)this + 0x1a) == '\0') && (*(char *)((int)this + 0x29) == '\0')) &&
      (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cc))) == '\0')) &&
     (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cd))) == '\0')) {
    if ((char)param_1 == '\0') {
LAB_00aea5ec: ;
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1);
      if (uVar3 != 0) {
        pcVar4 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1)));
        if (*pcVar4 != '\0') {
          piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
          uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1);
          if (uVar3 != 0) {
            piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1);
            if (*(char *)(uVar3 + 1) == '\x04') {
              return 0;
            }
          }
        }
      }
      return *((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x359))) == '\0';
    }
    if (*(char *)((int)this + 0x273) == '\0') {
      bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30);
      if (bVar2 != 0) goto LAB_00aea5ec;
    }
  }
  return 0;
}

/* ref: FUN_00aea660 */
byte F_00aea660(unsigned int gen_a0)
{
  GEN_ENTER(0xaea660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((((*(char *)((int)this + 0x1a) == '\0') && (*(char *)((int)this + 0x29) == '\0')) &&
      (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cc))) == '\0')) &&
     (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cd))) == '\0')) {
    if ((*(char *)((int)this + 0x273) == '\0') &&
       (bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30), bVar1 != 0)) {
      return 1;
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0x188))) == '\x03') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aea800 */
unsigned int F_00aea800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaea800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (((param_1 != 0) && (*(char *)((int)this + 0x18) != '\0')) && (param_2 == 3)) {
    if (*(int *)((int)this + 0xa0) == -0x20000000) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),
                           *(undefined4 *)((int)this + 0xa4));
    }
    if (uVar1 == param_1) {
      *(undefined1 *)((int)this + 0x260) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00aea850 */
uint F_00aea850(unsigned int gen_a0)
{
  GEN_ENTER(0xaea850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 4);
  uVar3 = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x65) != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x10) + 0x48))))(*(undefined4 *)(iVar1 + 0x34));
    }
    uVar3 = *(uint *)((int)this + 4);
    *(undefined4 *)(uVar3 + 0x34) = 0;
    *(undefined4 *)(uVar3 + 0x38) = 0;
    uVar2 = REFG(float, 0x10ebbf0);
    *(undefined1 *)(uVar3 + 0x3c) = 0;
    *(undefined4 *)(uVar3 + 0x48) = uVar2;
    *(undefined4 *)(uVar3 + 0x50) = uVar2;
    *(undefined4 *)(uVar3 + 0x58) = 0;
    *(undefined1 *)(uVar3 + 0x5d) = 0;
    *(undefined1 *)(uVar3 + 0x65) = 0;
    *(undefined1 *)(uVar3 + 0x67) = 0;
    *(undefined4 *)(uVar3 + 0x70) = 0;
    if ((*(char *)((int)this + 8) == '\0') && (*(char *)((int)this + 9) == '\0')) {
      uVar3 = F_00afbac0(*(undefined * PTR32 *)((int)this + 4));
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00aea910 */
uint F_00aea910(unsigned int gen_a0)
{
  GEN_ENTER(0xaea910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  double dVar3;
  float * pfVar4;
  
  if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
    pfVar4 = (float *)F_00a5feb0(REFG(undefined4, 0x1379694));
    fVar1 = *pfVar4;
    fVar2 = pfVar4[2];
    pfVar4 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))));
    dVar3 = (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)*pfVar4)
                                                 * (float10)(float)((float10)fVar1 -
                                                                   (float10)*pfVar4) +
                                                (float10)(float)((float10)fVar2 - (float10)pfVar4[2]
                                                                ) *
                                                (float10)(float)((float10)fVar2 - (float10)pfVar4[2]
                                                                )))))));
    if ((double)*(float *)&REFG(undefined, 0x10ebc54) <= dVar3) {
      return 9;
    }
    if ((!GEN_ISNAN(dVar3) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x10943d8))) && !(dVar3 < *(double *)&REFG(undefined, 0x10943d8))) {
      return 6;
    }
  }
  return 3;
}

/* ref: FUN_00aea9e0 */
uint F_00aea9e0(void)
{
  GEN_ENTER(0xaea9e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf);
    if (*(int *)(uVar1 + 0x14) != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aeaa10 */
uint F_00aeaa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaeaa10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    this_00 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf);
    bVar1 = F_00414a40(this_00,param_1,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00aeaa40 */
unsigned int F_00aeaa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaeaa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(char *)(param_1 + 0x82) != '\0') {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0x84);
    return 0;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0x84);
  return 0;
}

/* ref: FUN_00aeaa80 */
uint F_00aeaa80(unsigned int gen_a0)
{
  GEN_ENTER(0xaeaa80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      REFG(undefined1, 0x14c0ba6) = 0;
      F_00a4a760(&REFG(undefined, 0x14a7360),0x20,0);
      uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),0x2d,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00aeaac0 */
unsigned int F_00aeaac0(unsigned int gen_a0)
{
  GEN_ENTER(0xaeaac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(float *)((int)this + 0x1c) = *(float *)((int)this + 0x18);
  if (*(int *)((int)this + 0x14) != 0) {
    *(float *)((int)this + 0x18) =
         ((float)GEN_TOF((((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 0x18)
                 ) + (float10)0)));
    *(float *)((int)this + 0x20) =
         ((float)GEN_TOF((((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 0x20)
                 ) + (float10)0)));
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x68))) != '\0') {
      *(float *)((int)this + 0x54) =
           ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                  (float10)*(float *)((int)this + 0x54))));
    }
  }
  return 0;
}

/* ref: FUN_00aeab30 */
byte F_00aeab30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaeab30u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  int iVar8;
  
  bVar7 = F_00ae7830(param_1,param_4);
  if (bVar7 == 0) {
    F_00afef80(param_4,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    iVar8 = *(int *)(param_1 + 0x10) + 5;
    *(undefined4 *)(param_1 + iVar8 * 0x10) = (*(undefined4 *)(gen_frame + 0x0));
    *(undefined4 *)(param_1 + 4 + iVar8 * 0x10) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)(param_1 + 8 + iVar8 * 0x10) = ((undefined4 *)(gen_frame + 0x8))[0];
    fVar3 = param_3[1];
    fVar4 = param_2[1];
    fVar5 = param_3[2];
    fVar6 = param_2[2];
    iVar8 = *(int *)(param_1 + 0x10) + 8;
    *(float *)(param_1 + iVar8 * 0x10) = (float)((float10)*param_3 - (float10)*param_2);
    *(float *)(param_1 + 4 + iVar8 * 0x10) = (float)((float10)fVar3 - (float10)fVar4);
    *(float *)(param_1 + 8 + iVar8 * 0x10) = (float)((float10)fVar5 - (float10)fVar6);
    uVar1 = *(undefined4 *)((int)param_4 + 0x10);
    uVar2 = *(undefined4 *)((int)param_4 + 0x14);
    iVar8 = *(int *)(param_1 + 0x10) + 0xb;
    *(undefined4 *)(param_1 + iVar8 * 0x10) = *(undefined4 *)((int)param_4 + 0xc);
    *(undefined4 *)(param_1 + 4 + iVar8 * 0x10) = uVar1;
    *(undefined4 *)(param_1 + 8 + iVar8 * 0x10) = uVar2;
    uVar1 = *(undefined4 *)((int)param_4 + 0x1c);
    uVar2 = *(undefined4 *)((int)param_4 + 0x20);
    iVar8 = *(int *)(param_1 + 0x10) + 0xe;
    *(undefined4 *)(param_1 + iVar8 * 0x10) = *(undefined4 *)((int)param_4 + 0x18);
    *(undefined4 *)(param_1 + 4 + iVar8 * 0x10) = uVar1;
    *(undefined4 *)(param_1 + 8 + iVar8 * 0x10) = uVar2;
    uVar1 = *(undefined4 *)((int)param_4 + 0x28);
    uVar2 = *(undefined4 *)((int)param_4 + 0x2c);
    iVar8 = *(int *)(param_1 + 0x10) + 0x11;
    bVar7 = (char)iVar8 * '\x02';
    *(undefined4 *)(param_1 + iVar8 * 0x10) = *(undefined4 *)((int)param_4 + 0x24);
    *(undefined4 *)(param_1 + 4 + iVar8 * 0x10) = uVar1;
    *(undefined4 *)(param_1 + 8 + iVar8 * 0x10) = uVar2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return bVar7;
}

/* ref: FUN_00aeac60 */
unsigned int F_00aeac60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaeac60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * pfVar1;
  
  if (((*(float *)(param_3 + 4) < 0.0) &&
      (!GEN_ISNAN(*(float *)(param_2 + 4)) && !(*(float *)(param_2 + 4) <= 0.0))) ||
     ((0.0 < *(float *)(param_3 + 4) &&
      (pfVar1 = (float *)(param_2 + 4), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0))))) {
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if ((float10)((float)GEN_TOF(ABS((float10)*(float *)(param_2 + 4)))) <
      (float10)((float)GEN_TOF(ABS((float10)*(float *)(param_3 + 4))))) {
    *(float *)(param_3 + 4) = *(float *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00aead10 */
uint F_00aead10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaead10u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int in_ecx_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x10) != 0) &&
     (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x10))), in_ecx_00 != 0)) {
    bVar1 = F_00a9f620(in_ecx_00);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  uVar2 = in_ecx + 0xd0;
  *(undefined4 *)(in_ecx + 0x98) = *(undefined4 *)(param_2 + 4);
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    uVar2 = in_ecx + 0x80;
  }
  *(undefined4 *)(uVar2 + 0x18) = *(undefined4 *)(param_2 + 4);
  return uVar2;
}

/* ref: FUN_00aead60 */
byte F_00aead60(unsigned int gen_a0)
{
  GEN_ENTER(0xaead60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if ((*(char *)(in_ecx + 0xa6) == '\0') ||
     (iVar1 = in_ecx + 0xd0, *(char *)(in_ecx + 0xcc) == '\0')) {
    iVar1 = in_ecx + 0x80;
  }
  if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar1 + 0x10)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aeae60 */
float10 F_00aeae60(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xaeae60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  float10 extraout_ST0;
  
  uVar1 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))));
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(uVar1 + 4);
  *(float *)(param_1 + 0x4c) = param_2;
  *(float *)(param_1 + 0x50) = param_3;
  return extraout_ST0;
}

/* ref: FUN_00aeae90 */
byte F_00aeae90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaeae90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  
  if (((char)param_2 != '\0') && (*(char *)(in_ecx + 0xa4) == '\0')) {
    if ((char)param_3 != '\0') {
      return 1;
    }
    if ((*(int *)(in_ecx + 0x14) == 0) && (bVar1 = F_00aead60(in_ecx), bVar1 == 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aeaed0 */
byte F_00aeaed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaeaed0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  
  if (*(char *)(in_ecx + 0xa5) == '\0') {
    if ((char)param_3 == '\0') {
      if ((*(char *)(in_ecx + 0xa6) == '\0') ||
         (iVar1 = in_ecx + 0xd0, *(char *)(in_ecx + 0xcc) == '\0')) {
        iVar1 = in_ecx + 0x80;
      }
      if ((((*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar1 + 0x10)) && (*(int *)(in_ecx + 0x14) == 0))
          && (*(char *)(in_ecx + 0x94) == '\0')) ||
         (((*(int *)(in_ecx + 0x14) != 0 && (*(char *)(in_ecx + 0x59) == '\0')) &&
          (*(int *)(in_ecx + 0x14) == 3)))) {
        return 1;
      }
    }
    else if ((*(char *)(in_ecx + 0xa4) != '\0') && (*(char *)(in_ecx + 0x94) == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aeaf60 */
byte F_00aeaf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaeaf60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if (((char)param_2 == '\0') &&
     (((*(char *)(in_ecx + 0xa4) != '\0' || (*(char *)(in_ecx + 0xa5) != '\0')) &&
      (*(char *)(in_ecx + 0xa6) == '\0')))) {
    if ((*(int *)(in_ecx + 0x14) == 0) && (bVar1 = F_00aead60(in_ecx), bVar1 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00aeafa0 */
uint F_00aeafa0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xaeafa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  float in_xmm1 = (float)gen_a2;
  float in_xmm2 = (float)gen_a3;
  float in_xmm3 = (float)gen_a4;
  float in_xmm5 = (float)gen_a5;
  float in_xmm7 = (float)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float * pfVar7;
  uint uVar8;
  float10 fVar9;
  
  fVar9 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x1092098));
  fVar1 = ((float)GEN_TOF((((float10)(float)fVar9 * (float10)REFG(double, 0x1094890)) /
                 ((float10)REFG(float, 0x1339b94) + (float10)REFG(float, 0x1339b94)))));
  pfVar7 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x10))));
  iVar6 = *(int *)(in_ecx + 0x14);
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  fVar4 = param_9[1];
  fVar5 = param_9[2];
  fVar9 = (float10)REFG(double, 0x1088108);
  *param_8 = ((float)GEN_TOF(((float10)(float)((float10)*param_9 + (float10)*pfVar7) * fVar9)));
  param_8[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar4 + (float10)fVar2) * fVar9)));
  param_8[2] = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar5 + (float10)fVar3))));
  if (iVar6 != 0) {
    param_8[1] = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x44) + (float10)fVar1)));
    return (uint)param_8;
  }
  uVar8 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x10))));
  param_8[1] = ((float)GEN_TOF(((float10)*(float *)(uVar8 + 4) + (float10)fVar1)));
  return (uint)param_8;
}

/* ref: FUN_00aeb090 */
uint F_00aeb090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaeb090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(undefined4 *)(in_ecx + 0x18) = 0xe0000000;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x20) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0x24) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x28) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0x30) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0x34) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x38) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0x48) = 0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  *(undefined4 *)(in_ecx + 0x44) = 0;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00aeb110 */
uint F_00aeb110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xaeb110u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  int in_ecx;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  uVar2 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(float *)(param_1 + 0x44) = param_4;
  if ((uVar2 != 0) && (in_ecx = *(int *)(uVar2 + 0x10), in_ecx != 0)) {
    bVar1 = F_00a9f620(in_ecx);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar2 = F_00a9f870(in_ecx,*(float *)(param_1 + 0x44));
    }
  }
  return uVar2;
}

/* ref: FUN_00aeb160 */
uint F_00aeb160(unsigned int gen_a0)
{
  GEN_ENTER(0xaeb160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 != 0xe0000000) {
    uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),uVar1,*(undefined4 *)((int)this + 0x1c));
  }
  return uVar1;
}

/* ref: FUN_00aeb1c0 */
uint F_00aeb1c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaeb1c0u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))), iVar1 != 0)) {
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2e)) = 0;
    (*(undefined2 *)(gen_frame + 0x32)) = 0;
    (*(undefined1 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined1 *)(gen_frame + 0x2c)) = (undefined1)param_4;
    (*(undefined1 *)(gen_frame + 0x2d)) = (undefined1)param_4;
    (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x10ebbf0);
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10ebbf0);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10ebbf0);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x10ebbf0);
    (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10ebbf0);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    uVar2 = F_00a9f7c0(iVar1,*param_2,param_2[1],param_2[2],param_3,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar2;
}

/* ref: FUN_00aeb260 */
float10 F_00aeb260(float gen_a0)
{
  GEN_ENTER(0xaeb260u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  int local_c;
  
  iVar1 = F_00c51673((double)param_1);
  if (iVar1 == 0) {
    uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_1),
                         (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
    if (uVar2 != 0) {
      fVar3 = (float10)param_1;
      if (fVar3 <= (float10)*(double *)&REFG(undefined, 0x109c9b8)) {
        local_c = (int)(longlong)
                       TRUNC(((float10)*(double *)&REFG(undefined, 0x1080228) - fVar3) /
                             (float10)*(float *)&REFG(undefined, 0x1339aec));
        fVar4 = (float10)local_c;
        if (local_c < 0) {
          fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        return (float10)(float)(fVar4 * (float10)*(float *)&REFG(undefined, 0x1339aec) + fVar3);
      }
      if ((float10)*(double *)&REFG(undefined, 0x1080228) < fVar3) {
        local_c = (int)(longlong)
                       TRUNC((fVar3 + (float10)*(double *)&REFG(undefined, 0x1080228)) /
                             (float10)*(float *)&REFG(undefined, 0x1339aec));
        fVar4 = (float10)local_c;
        if (local_c < 0) {
          fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        return (float10)(float)(fVar3 - fVar4 * (float10)*(float *)&REFG(undefined, 0x1339aec));
      }
      return fVar3;
    }
  }
  return (float10)0;
}

/* ref: FUN_00aeb350 */
float10 F_00aeb350(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xaeb350u, 0u, 0u, 0u, 0u);
  float in_xmm2 = (float)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm4 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float fVar2;
  
  fVar2 = REFG(float, 0x1087f04);
  if (((!GEN_ISNAN(param_4) && !GEN_ISNAN(REFG(float, 0x1087f04))) && !(param_4 <= REFG(float, 0x1087f04))) ||
     (fVar2 = REFG(float, 0x10ebbf0), param_4 < REFG(float, 0x10ebbf0))) {
    param_4 = fVar2;
  }
  fVar1 = F_00c4c8d0(in_xmm2,in_xmm3,in_xmm4,(float10)param_4);
  fVar1 = F_00aeb260((float)fVar1);
  return fVar1;
}

/* ref: FUN_00aeb3a0 */
float10 F_00aeb3a0(float gen_a0)
{
  GEN_ENTER(0xaeb3a0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c4f340((float10)param_1);
  fVar1 = F_00aeb260((float)fVar1);
  return fVar1;
}

/* ref: FUN_00aeb3c0 */
float10 F_00aeb3c0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xaeb3c0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00c4d1fa((float10)param_2);
  fVar1 = F_00aeb260((float)fVar1);
  return fVar1;
}

/* ref: FUN_00aeb3f0 */
float10 F_00aeb3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xaeb3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c4f340((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)
                                                  param_1 * (float10)*(float *)param_1 +
                                                  (float10)*(float *)(param_1 + 8) *
                                                  (float10)*(float *)(param_1 + 8))))))) /
                                       (float10)*(float *)(param_1 + 4)))));
  fVar1 = F_00aeb260((float)fVar1);
  return fVar1;
}

/* ref: FUN_00aeb440 */
uint F_00aeb440(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xaeb440u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if ((GEN_ISNAN(param_6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(param_6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_6 == *(float *)&REFG(undefined, 0x1088114))) {
    bVar1 = F_005519a0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),param_4,param_6,param_1,param_2,
                         (undefined4)gen_fl2bits(param_3),1,param_5);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_005518b0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),param_4,param_1,param_2,
                       (undefined4)gen_fl2bits(param_3),1,param_5);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00aeb4b0 */
byte F_00aeb4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xaeb4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  memcpy(&gen_args[8], &gen_a8, sizeof gen_a8);
  byte bVar1;
  
  if ((GEN_ISNAN((*(float *)&gen_args[8])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN((*(float *)&gen_args[8])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || (*(float *)&gen_args[8]) == *(float *)&REFG(undefined, 0x1088114))) {
    bVar1 = F_005517f0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),(*(uint *)&gen_args[6]),(*(float *)&gen_args[8]),&(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[4]),
                         (undefined4)gen_fl2bits((*(float *)&gen_args[5])),1,(*(undefined4 *)&gen_args[7]));
    return bVar1;
  }
  bVar1 = F_00551620(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),(*(uint *)&gen_args[6]),&(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[4]),(*(float *)&gen_args[5]),1,
                       (*(undefined4 *)&gen_args[7]));
  return bVar1;
}

/* ref: FUN_00aeb520 */
byte F_00aeb520(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xaeb520u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 * puVar2;
  
  if ((GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_3 == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  (*(uint *)(gen_frame + 0x24)) = 0;
  do {
    if ((*(uint *)(gen_frame + 0x24)) == 0) {
      (*(undefined4 *)(gen_frame + 0x14)) = 0x2000;
      (*(undefined4 *)(gen_frame + 0x18)) = 0x2000;
      puVar2 = &(*(undefined4 *)(gen_frame + 0x14));
    }
    else {
      (*(undefined4 *)(gen_frame + 0xc)) = 0x2800;
      (*(undefined4 *)(gen_frame + 0x10)) = 0x2000;
      puVar2 = &(*(undefined4 *)(gen_frame + 0xc));
    }
    if ((GEN_ISNAN(param_5) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(param_5) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_5 == *(float *)&REFG(undefined, 0x1088114))) {
      bVar1 = F_005519a0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),param_4,param_5,param_1,param_2,
                           (undefined4)gen_fl2bits(param_3),1,puVar2);
    }
    else {
      bVar1 = F_005518b0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),param_4,param_1,param_2,
                           (undefined4)gen_fl2bits(param_3),1,puVar2);
    }
    if ((*(uint *)(gen_frame + 0x24)) == 0) {
      if (bVar1 == 0) {
        return 0;
      }
      if ((*(uint *)(param_4 + 0x3c) >> 0xb & 1) == 0) break;
      bVar1 = 0;
      (*(char *)(gen_frame + 0x2b)) = '\x01';
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_4 + 4);
      (*(uint *)(gen_frame + 0x1c)) = *(uint *)(param_4 + 0x3c);
    }
    else if ((*(char *)(gen_frame + 0x2b)) != '\0') {
      *(char *)(param_4 + 0x82) = (*(char *)(gen_frame + 0x2b));
      *(undefined4 *)(param_4 + 0x84) = (*(undefined4 *)(gen_frame + 0x20));
      *(uint *)(param_4 + 0x88) = (*(uint *)(gen_frame + 0x1c));
    }
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 1;
  } while ((*(uint *)(gen_frame + 0x24)) < 2);
  if (bVar1 == 0) {
    return 0;
  }
  *(undefined1 *)(param_4 + 0x62) = 0;
  return 1;
}

/* ref: FUN_00aeb700 */
uint F_00aeb700(unsigned int gen_a0)
{
  GEN_ENTER(0xaeb700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint in_EAX = 0;
  undefined4 uVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0x69) != '\0') && (*(char *)((int)this + 0x6a) == '\0')) {
    uVar2 = 0;
    do {
      in_EAX = F_00aa0210(*(undefined4 *)((int)this + 0x10),uVar2,0);
      if ((in_EAX == 0x41) || (in_EAX == 0x47)) goto LAB_00aeb756;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xe);
    this_00 = *(undefined * PTR32 *)((int)this + 0x10);
    if ((this_00 == (undefined *)0x0) || (uVar1 = 0x47, (*(byte *)((int)this_00 + 0x2dd2) >> 2 & 1) == 0)
       ) {
      uVar1 = 0x41;
    }
    in_EAX = F_00aa4270(this_00,uVar1,0,0);
  }
LAB_00aeb756: ;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  uVar1 = REFG(float, 0x10ebbf0);
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x3d) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x66) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  return in_EAX;
}

/* ref: FUN_00aeb940 */
unsigned int F_00aeb940(unsigned int gen_a0)
{
  GEN_ENTER(0xaeb940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  bool bVar4;
  
  if ((*(char *)((int)this + 0x69) != '\0') && (*(char *)((int)this + 0x6a) == '\0')) {
    uVar3 = 0;
    do {
      uVar1 = F_00aa0210(*(undefined4 *)((int)this + 0x10),uVar3,0);
      if ((uVar1 == 0x41) || (uVar1 == 0x47)) goto LAB_00aeb9f5;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xe);
    bVar4 = GEN_ISNAN(*(float *)((int)this + 0x4c)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
    if ((((bVar4 == (bVar4 || *(float *)((int)this + 0x4c) == REFG(float, 0x10ebbf0))) &&
         (2 < *(int *)((int)this + 0x54))) && (*(int *)((int)this + 0x54) < 6)) &&
       ((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x4c) -
                        (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x110) *
                                        (float10)*(float *)((int)this + 0x4c))))))) <=
        (float10)REFG(float, 0x10ebc40))) {
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      if ((this_00 == (undefined *)0x0) ||
         (uVar2 = 0x47, (*(byte *)((int)this_00 + 0x2dd2) >> 2 & 1) == 0)) {
        F_00aa4270(this_00,0x41,0,0);
        return 0;
      }
    }
    else {
LAB_00aeb9f5: ;
      uVar3 = 0;
      do {
        uVar1 = F_00aa0210(*(undefined4 *)((int)this + 0x10),uVar3,0);
        switch((unsigned int)(uintptr_t)(uVar1)) {
        case 0x40: ;
        case 0x41: ;
        case 0x46: ;
        case 0x47: ;
          goto switchD_00aeba11_caseD_40;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0xe);
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      if ((this_00 == (undefined *)0x0) ||
         (uVar2 = 0x46, (*(byte *)((int)this_00 + 0x2dd2) >> 2 & 1) == 0)) {
        uVar2 = 0x40;
      }
    }
    F_00aa4270(this_00,uVar2,0,0);
switchD_00aeba11_caseD_40: ;
  }
  return 0;
}

/* ref: FUN_00aeba60 */
unsigned int F_00aeba60(unsigned int gen_a0)
{
  GEN_ENTER(0xaeba60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  byte bVar2;
  bool bVar3;
  float fVar4;
  
  if (((((*(int *)(in_ecx + 0x10) != 0) &&
        (bVar2 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar2 != 0)) && (REFG(char, 0x14c0a64) != '\0')) ||
      (*(char *)(in_ecx + 0x1cc) != '\0')) &&
     (((bVar3 = GEN_ISNAN(*(float *)(in_ecx + 0x4c)) || GEN_ISNAN(REFG(float, 0x10ebbf0)),
       bVar3 == (bVar3 || *(float *)(in_ecx + 0x4c) == REFG(float, 0x10ebbf0)) &&
       (2 < *(int *)(in_ecx + 0x54))) && (*(int *)(in_ecx + 0x54) < 6)))) {
    *(float *)(in_ecx + 0x114) = *(float *)(in_ecx + 0x110);
    fVar1 = *(float *)(in_ecx + 0x4c);
    fVar4 = REFG(float, 0x1087f04);
    if (((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
         ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) &&
       (fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) / (float10)fVar1
                                        ))) + (float10)*(float *)(in_ecx + 0x110)))),
       !((float10)1 < (float10)fVar1))) {
      fVar4 = fVar1;
    }
    *(float *)(in_ecx + 0x110) = fVar4;
  }
  if ((((((*(int *)(in_ecx + 0x10) != 0) &&
         (bVar2 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar2 != 0)) && (REFG(char, 0x14c0a65) != '\0')) ||
       (*(char *)(in_ecx + 0x1cd) != '\0')) &&
      ((fVar1 = *(float *)(in_ecx + 0x50),
       (GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
       ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0)) && (2 < *(int *)(in_ecx + 0x58))
       ))) && (*(int *)(in_ecx + 0x58) < 6)) {
    if (((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
         ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) &&
       (fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) / (float10)fVar1
                                        ))) + (float10)*(float *)(in_ecx + 0x1b0)))),
       !((float10)1 < (float10)fVar1))) {
      *(float *)(in_ecx + 0x1b0) = fVar1;
      return 0;
    }
    *(float *)(in_ecx + 0x1b0) = REFG(float, 0x1087f04);
  }
  return 0;
}

/* ref: FUN_00aebbc0 */
float10 F_00aebbc0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaebbc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm7 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  float fVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float uStack_8;
  
  fVar7 = REFG(float, 0x10ebd20);
  uStack_8 = 0.0;
  if (*(char *)(param_5 + 0x3c) != '\0') {
    return (float10)param_4;
  }
  fVar1 = *(float *)(param_5 + 0x20);
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
    fVar7 = *(float *)(param_5 + 0x2c);
    if ((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
        ((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar7 == REFG(float, 0x10ebbf0))) {
      iVar2 = *(int *)(param_5 + 0x34);
      if (iVar2 == 1) {
        fVar5 = F_00ae8460(fVar7,0.0,in_xmm3,in_xmm7,param_4,*(float *)(in_ecx + 0x1d0),
                             *(float *)(in_ecx + 0x80),fVar7);
        return (float10)(float)fVar5;
      }
      if (((((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
             ((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar7 == REFG(float, 0x10ebbf0))) && (2 < iVar2)) &&
          (iVar2 < 6)) && (0.0 <= *(float *)(in_ecx + 0x110))) {
        fVar5 = F_0054fbe0(in_ecx + 0x84,*(float *)(in_ecx + 0x110),1);
        fVar6 = F_0054fbe0(in_ecx + 0x84,*(float *)(in_ecx + 0x114),1);
        return (float10)((float)GEN_TOF(ABS((float10)(float)((float10)(double)fVar5 - fVar6))));
      }
    }
    else if (*(int *)(in_ecx + 0x10) != 0) {
      bVar3 = F_00a9f620(*(int *)(in_ecx + 0x10));
      if ((bVar3 != 0) && (REFG(char, 0x14c0a64) != '\0')) {
        fVar7 = F_00ae8430();
        uStack_8 = (float)((float10)fVar7 * (float10)*(float *)&REFG(undefined, 0x14c0a7c));
      }
    }
    return (float10)uStack_8;
  }
  bVar4 = GEN_ISNAN(*(float *)(param_5 + 0x24)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
  if (bVar4 != (bVar4 || *(float *)(param_5 + 0x24) == REFG(float, 0x10ebbf0))) {
    if (REFG(float, 0x10ebd20) < *(float *)(REFG(int, 0x137104c) + 0x1198)) {
      return (float10)(float)((float10)REFG(float, 0x10ebd20) * (float10)fVar1);
    }
    return (float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)fVar1)));
  }
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  if (REFG(float, 0x10ebd20) < fVar1) {
    fVar5 = F_00ae6fc0(in_ecx);
    return (float10)(float)(fVar5 * (float10)fVar7);
  }
  fVar5 = F_00ae6fc0(in_ecx);
  return (float10)(float)(fVar5 * (float10)fVar1);
}

/* ref: FUN_00aebdd0 */
byte F_00aebdd0(unsigned int gen_a0)
{
  GEN_ENTER(0xaebdd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((((bVar1 != 0) && (REFG(char, 0x14c0a40) != '\0')) && (*(char *)(in_ecx + 0x420) != '\0')) &&
       (((*((byte *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x8e))) & 0x40) == 0 ||
        ((*(int *)(in_ecx + 0x204) != 0 && (*(char *)(in_ecx + 0x24a) == '\0')))))) {
      return REFG(char, 0x14a7383) == '\0';
    }
  }
  return 0;
}

/* ref: FUN_00aebe30 */
uint F_00aebe30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaebe30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (((((bVar1 != 0) && (REFG(char, 0x14c0a40) != '\0')) && (*(char *)((int)this + 0x420) != '\0')) &&
        ((in_EAX = *(uint *)((int)this + 0x10), (*(byte *)(in_EAX + 0x8e) & 0x40) == 0 ||
         ((*(int *)((int)this + 0x204) != 0 && (*(char *)((int)this + 0x24a) == '\0')))))) &&
       (REFG(char, 0x14a7383) == '\0')) {
      uVar2 = F_00ae8330(param_1,param_2);
      return uVar2;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00aebea0 */
unsigned int F_00aebea0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaebea0u, gen_a0, 0u, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if (bVar1 != 0) {
      REFG(undefined4, 0x14c0a7a) = 1;
      *(float *)&REFG(undefined, 0x14c0b94) = param_2;
      if (param_3 != 0) {
        REFG(undefined4, 0x14c0b9c) = *(undefined1 *)(param_3 + 4);
      }
    }
  }
  return 0;
}

/* ref: FUN_00aebee0 */
uint F_00aebee0(unsigned int gen_a0)
{
  GEN_ENTER(0xaebee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
      ) && (REFG(char, 0x14c0a64) != '\0')) {
    return 1;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    if (((*(int *)(in_ecx + 0x10) != 0) &&
        (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)) && (REFG(char, 0x14c0a65) != '\0')) {
      return 1;
    }
    if (*(char *)(in_ecx + 0x1cd) == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00aebf40 */
byte F_00aebf40(unsigned int gen_a0)
{
  GEN_ENTER(0xaebf40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((((*(int *)(in_ecx + 0x10) == 0) ||
        (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
      (*(char *)(in_ecx + 0x1cc) == '\0')) &&
     ((((*(int *)(in_ecx + 0x10) != 0 && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
        ) && (REFG(char, 0x14c0a65) != '\0')) || (*(char *)(in_ecx + 0x1cd) != '\0')))) {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 0x70))) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 4: ;
    case 9: ;
    case 10: ;
    case 0xb: ;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aebfc0 */
byte F_00aebfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xaebfc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00aebf40(in_ecx);
  if ((bVar1 != 0) && (*(char *)(in_ecx + 0x5d) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aec010 */
byte F_00aec010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaec010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae9f10(&REFG(undefined, 0x14c0a50),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00aec030 */
uint F_00aec030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaec030u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (((param_1 != 0) && (REFG(char, 0x14c0a68) != '\0')) && (param_2 == 3)) {
    if (REFG(int, 0x14c0af0) == -0x20000000) {
      in_EAX = 0;
    }
    else {
      in_EAX = F_00a354d0(&REFG(undefined4, 0x14a31f0),REFG(int, 0x14c0af0),REFG(undefined4, 0x14c0af4));
    }
    if (in_EAX == param_1) {
      REFG(undefined4, 0x14c0cb0) = 1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00aec080 */
uint F_00aec080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaec080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  undefined * this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_ecx_00;
  undefined4 in_ecx_01;
  undefined4 in_ecx_02;
  bool bVar10;
  float fVar11;
  
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  uVar7 = F_00aa0250(*(undefined4 *)((int)this + 0x10),0,0);
  uVar8 = F_00aa0290(*(undefined4 *)((int)this + 0x10),0,0);
  bVar10 = uVar7 != 0;
  if (bVar10) {
    uVar8 = F_00aa0210(*(undefined4 *)((int)this + 0x10),0,0);
  }
  if (*(int *)((int)this + 0x10) == 0) {
    (*(uint *)(gen_frame + 0x0)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3) << 8;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),*((byte *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2dd2))) >> 2) &
               0xffffff01;
  }
  uVar7 = F_00ae6ab0(uVar8,(*(uint *)(gen_frame + 0x0)));
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  bVar5 = false;
  if (*(char *)((int)this + 0x69) != '\0') goto LAB_00aec2de;
  if ((*(int *)((int)this + 0x204) != 0) &&
     ((*(char *)((int)this + 0x68) == '\0' || (!(*(float *)((int)this + 0x244) <= REFG(float, 0x10ebd80))))))
  {
    switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x204))) {
    case 1: ;
      bVar6 = F_00ae6a90(this);
      uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x1f;
      break;
    case 2: ;
    case 3: ;
    case 4: ;
      bVar6 = F_00ae6600(uVar8);
      if ((bVar6 == 0) || (!bVar10)) {
        bVar6 = F_00ae6a90(this);
        uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x20;
      }
      break;
    case 5: ;
      bVar6 = F_00ae8d00(this,uVar8);
      if ((bVar6 != 0) && (bVar6 = F_00ae6620(uVar8), bVar6 != 0)) {
        bVar6 = F_00ae6a90(this);
        uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x21;
        break;
      }
      goto LAB_00aec2de;
    }
    goto switchD_00aec13f_default;
  }
  uVar9 = F_00aebee0(this);
  if ((char)uVar9 == '\0') goto LAB_00aec2de;
  bVar6 = F_00aebf40(this);
  if (bVar6 != 0) {
    bVar4 = true;
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x70))) {
    case 1: ;
      uVar9 = F_00aa0210(*(undefined4 *)((int)this + 0x10),0,0);
      if (uVar9 != 0xb) {
        uVar7 = 9;
      }
      break;
    case 2: ;
      uVar9 = F_00aa0210(*(undefined4 *)((int)this + 0x10),0,0);
      if (uVar9 != 0xc) {
        uVar7 = 10;
      }
      break;
    case 3: ;
      uVar7 = 0xb;
      break;
    case 4: ;
      uVar7 = 0xc;
      break;
    case 9: ;
      bVar6 = F_00ae6a90(this);
      uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 7;
      break;
    case 10: ;
      bVar6 = F_00ae6a90(this);
      uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 8;
      break;
    case 0xb: ;
      goto LAB_00aec285;
    }
    goto switchD_00aec13f_default;
  }
LAB_00aec285: ;
  bVar4 = false;
  bVar6 = F_00ae8740(this);
  if (bVar6 == 0) {
    bVar6 = F_00ae6970(this);
    if (bVar6 != 0) {
      switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x6c))) {
      case 1: ;
      case 2: ;
      case 3: ;
      case 4: ;
        bVar6 = F_00ae85f0(this);
        if (bVar6 != 0) {
          bVar2 = false;
          bVar6 = F_00ae8e50(this,uVar8);
          if ((((((bVar6 == 0) ||
                 (bVar6 = F_00ae6a90(this), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x19)) ||
                (bVar6 = F_00ae6a90(((undefined4)(uint)(this))), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x1a)) ||
               (bVar6 = F_00ae6a90(in_ecx_00), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x1b)) &&
              ((bVar6 = F_00ae6320(uVar8), bVar6 == 0 && (bVar6 = F_00ae6640(uVar8), bVar6 == 0)
               ))) && (bVar6 = F_00ae8e20(this,uVar8), bVar6 == 0)) {
            bVar6 = F_00ae6440(uVar8);
            if (bVar6 == 0) {
              bVar6 = F_00ae63e0(uVar8);
              if (bVar6 == 0) {
                switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x6c))) {
                case 1: ;
                case 4: ;
                  bVar6 = F_00ae6a90(this);
                  uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x19;
                  break;
                case 2: ;
                  bVar6 = F_00ae6a90(this);
                  uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x1b;
                  break;
                case 3: ;
                  bVar6 = F_00ae6a90(this);
                  uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x1a;
                }
                bVar6 = F_00aa0390(*(undefined * PTR32 *)((int)this + 0x10),uVar7,0);
                if (bVar6 == 0) goto LAB_00aec4c0;
              }
            }
            else if (!bVar10) goto LAB_00aec4c4;
          }
          else {
LAB_00aec4c0: ;
            bVar5 = true;
LAB_00aec4c4: ;
            bVar2 = true;
          }
          bVar6 = F_00ae6660(uVar8);
          if (bVar6 == 0) {
            uVar9 = F_0071ce90(*(undefined * PTR32 *)((int)this + 0x10),0x32);
            if ((char)uVar9 == '\0') goto LAB_00aec4ed;
          }
          else {
            uVar9 = F_0071ce90(*(undefined * PTR32 *)((int)this + 0x10),0x32);
            if ((char)uVar9 != '\0') {
LAB_00aec4ed: ;
              if (!bVar2) break;
            }
          }
          uVar7 = F_0071ce90(*(undefined * PTR32 *)((int)this + 0x10),0x32);
          if ((char)uVar7 == '\0') {
            bVar6 = F_00ae6a90(this);
            uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x16;
          }
          else {
            bVar6 = F_00ae6a90(this);
            uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x1e;
            bVar5 = true;
          }
          break;
        }
        bVar6 = F_00ae85b0(this);
        if (bVar6 == 0) break;
        bVar6 = F_00ae8e50(this,uVar8);
        if ((((bVar6 == 0) ||
             (bVar6 = F_00ae6a90(this), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x11)) ||
            ((bVar6 = F_00ae6a90(in_ecx_01), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x12 ||
             (bVar6 = F_00ae6a90(in_ecx_02), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x13)))) &&
           (((bVar6 = F_00ae63e0(uVar8), bVar6 == 0 && (bVar6 = F_00ae6640(uVar8), bVar6 == 0))
            && (bVar6 = F_00ae8e20(this,uVar8), bVar6 == 0)))) {
          bVar6 = F_00ae6340(uVar8);
          if (bVar6 == 0) {
            bVar6 = F_00ae6320(uVar8);
            if (bVar6 != 0) break;
            switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x6c))) {
            case 1: ;
            case 4: ;
              bVar6 = F_00ae6a90(this);
              uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x11;
              break;
            case 2: ;
              bVar6 = F_00ae6a90(this);
              uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x13;
              break;
            case 3: ;
              bVar6 = F_00ae6a90(this);
              uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x12;
            }
            bVar6 = F_00aa0390(*(undefined * PTR32 *)((int)this + 0x10),uVar7,0);
            if (bVar6 != 0) break;
            goto LAB_00aec664;
          }
          if (bVar10) break;
        }
        else {
LAB_00aec664: ;
          bVar5 = true;
        }
        bVar6 = F_00ae6a90(this);
        uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0xd;
        break;
      case 5: ;
        bVar6 = F_00ae85f0(this);
        if (bVar6 == 0) {
          bVar6 = F_00ae85b0(this);
          if (bVar6 != 0) {
            bVar6 = F_00ae6a90(this);
            uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0xe;
          }
        }
        else {
          bVar6 = F_00ae6a90(this);
          uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x17;
        }
        break;
      case 6: ;
        bVar6 = F_00ae85f0(this);
        if (bVar6 == 0) {
          bVar6 = F_00ae85b0(this);
          if (bVar6 != 0) {
            bVar6 = F_00ae6a90(this);
            uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0xf;
          }
        }
        else {
          bVar6 = F_00ae6a90(this);
          uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x18;
        }
        break;
      case 7: ;
        bVar6 = F_00ae6a90(this);
        uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x10;
      }
      goto switchD_00aec13f_default;
    }
  }
  else {
    bVar6 = F_00ae6300(uVar8);
    if ((bVar6 != 0) || (uVar9 = F_00ae6e80(this), uVar8 == uVar9)) goto switchD_00aec13f_default;
    bVar6 = F_00ae64e0(uVar8);
    if ((bVar6 == 0) && (bVar6 = F_00ae6540(uVar8), bVar6 == 0)) {
      bVar6 = F_00ae85f0(this);
      if (bVar6 == 0) {
        bVar2 = true;
      }
      else {
        bVar3 = true;
      }
    }
  }
LAB_00aec2de: ;
  bVar4 = false;
  bVar6 = F_00ae6390(uVar8);
  if ((bVar6 == 0) && (bVar6 = F_00ae6490(uVar8), bVar6 == 0)) {
    bVar6 = F_00ae6340(uVar8);
    if (((bVar6 != 0) || (bVar6 = F_00ae6320(uVar8), bVar6 != 0)) || (bVar2)) {
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      if ((this_00 == (undefined *)0x0) ||
         (uVar7 = 0x30, (*(byte *)((int)this_00 + 0x2dd2) >> 2 & 1) == 0)) {
        uVar7 = 0x14;
      }
      bVar6 = F_00aa0390(this_00,uVar7,0);
      if (bVar6 != 0) goto switchD_00aec13f_default;
      bVar5 = true;
    }
    else {
      bVar6 = F_00ae6440(uVar8);
      if (((bVar6 != 0) || (bVar6 = F_00ae63e0(uVar8), bVar6 != 0)) || (bVar3)) {
        bVar6 = F_00ae6a90(this);
        uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x1c;
        bVar6 = F_00aa0390(*(undefined * PTR32 *)((int)this + 0x10),uVar7,0);
        if (bVar6 != 0) goto switchD_00aec13f_default;
        bVar5 = true;
      }
    }
  }
  else if (bVar10) goto switchD_00aec13f_default;
  uVar7 = F_00ae6e80(this);
switchD_00aec13f_default: ;
  if (((uVar8 != uVar7) &&
      ((bVar6 = F_00ae6390(uVar8), bVar6 != 0 || (bVar6 = F_00ae6490(uVar8), bVar6 != 0)))) &&
     ((bVar6 = F_00ae6390(uVar7), bVar6 != 0 || (bVar6 = F_00ae6490(uVar7), bVar6 != 0)))) {
    uVar7 = F_00ae6e80(this);
    bVar5 = true;
  }
  bVar6 = F_00ae65b0(uVar7);
  if (bVar6 == 0) {
    bVar6 = F_00ae65b0(uVar8);
    if ((bVar6 != 0) &&
       ((bVar6 = F_00ae6300(uVar7), bVar6 != 0 || (uVar9 = F_00ae6e80(this), uVar7 == uVar9))))
    {
      if (0.0 < *(float *)((int)this + 0x440)) {
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x440) -
                       (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
        fVar11 = 0.0;
        if (!((float10)fVar1 < (float10)0)) {
          fVar11 = fVar1;
        }
        *(float *)((int)this + 0x440) = fVar11;
        uVar7 = uVar8;
      }
    }
  }
  else {
    *(undefined4 *)((int)this + 0x440) = 0;
  }
  if ((param_1 != (undefined1 *)0x0) && (uVar8 != uVar7)) {
    if ((bVar4) && (bVar6 = F_00ae8da0(this,uVar8), bVar6 != 0)) {
      *param_1 = 1;
    }
    bVar6 = F_00ae64e0(uVar7);
    if (((bVar6 != 0) || (bVar6 = F_00ae6540(uVar7), bVar6 != 0)) &&
       ((bVar6 = F_00ae8da0(this,uVar8), bVar6 != 0 || (bVar6 = F_00ae6640(uVar8), bVar6 != 0)))
       ) {
      *param_1 = 1;
    }
    if ((bVar5) &&
       ((bVar6 = F_00ae8da0(this,uVar8), bVar6 != 0 || (bVar6 = F_00ae6640(uVar8), bVar6 != 0)))
       ) {
      *param_1 = 1;
    }
  }
  return uVar7;
}

/* ref: FUN_00aec930 */
byte F_00aec930(unsigned int gen_a0)
{
  GEN_ENTER(0xaec930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (*(int *)(in_ecx + 0x10) == 0) {
LAB_00aec94e: ;
    if (*(char *)(in_ecx + 0x1cc) == '\0') goto LAB_00aec95f;
  }
  else {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 == 0) || (REFG(char, 0x14c0a64) == '\0')) goto LAB_00aec94e;
  }
  if (*(char *)(in_ecx + 0x66) != '\0') {
    bVar2 = 1;
  }
LAB_00aec95f: ;
  bVar1 = F_00ae8fc0(in_ecx);
  if (bVar1 != 0) {
    bVar2 = bVar2 | 2;
  }
  bVar1 = F_00ae9020(in_ecx);
  if (bVar1 != 0) {
    bVar2 = bVar2 | 4;
  }
  if (*(char *)(in_ecx + 0x69) != '\0') {
    bVar2 = bVar2 | 8;
  }
  return bVar2;
}

/* ref: FUN_00aec990 */
uint F_00aec990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xaec990u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  int in_ecx;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x328) = param_2;
  uVar2 = *(uint *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x32c) = param_3;
  *(float *)(param_1 + 0x354) = param_4;
  if ((uVar2 != 0) && (in_ecx = *(int *)(uVar2 + 0x10), in_ecx != 0)) {
    bVar1 = F_00a9f620(in_ecx);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar2 = F_00a9f870(in_ecx,*(float *)(param_1 + 0x354));
    }
  }
  return uVar2;
}

/* ref: FUN_00aec9f0 */
float10 F_00aec9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaec9f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  float10 extraout_ST0;
  
  fVar1 = *(float *)param_2;
  iVar4 = F_00c51673((double)fVar1);
  if (iVar4 == 0) {
    dVar2 = (double)fVar1;
    uVar5 = F_00c51657((int)(ulonglong)gen_d2bits(dVar2),
                         (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    if (uVar5 != 0) {
      fVar1 = *(float *)(param_2 + 4);
      iVar4 = F_00c51673((double)fVar1);
      if (iVar4 == 0) {
        dVar2 = (double)fVar1;
        uVar5 = F_00c51657((int)(ulonglong)gen_d2bits(dVar2),
                             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
        if (uVar5 != 0) {
          fVar1 = *(float *)(param_2 + 8);
          iVar4 = F_00c51673((double)fVar1);
          if (iVar4 == 0) {
            dVar2 = (double)fVar1;
            F_00c51657((int)(ulonglong)gen_d2bits(dVar2),
                         (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
          }
        }
      }
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x2dd3))) & 2) != 0) {
    bVar3 = F_00a9fa30(*(int *)(param_1 + 0x10));
    if (bVar3 == 1) {
      F_00a5feb0(*(undefined * PTR32 *)(param_1 + 0x10));
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x40))))(*(int * PTR32 *)(param_1 + 0x10));
  return extraout_ST0;
}

/* ref: FUN_00aecc90 */
byte F_00aecc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaecc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if ((char)param_1 == '\0') {
    if (*(int *)((int)this + 0x204) == 0) {
      if ((*(char *)((int)this + 0x296) == '\0') ||
         (iVar1 = (int)this + 0x2c0, *(char *)((int)this + 700) == '\0')) {
        iVar1 = (int)this + 0x270;
      }
      if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar1 + 0x10)) {
        return 0;
      }
    }
    else if (*(int *)((int)this + 0x204) != 5) {
      return 0;
    }
  }
  if (((char)param_2 == '\0') && ((REFG(char, 0x14c0a40) == '\0' || (*(char *)((int)this + 0x420) == '\0'))))
  {
    return 0;
  }
  return *(char *)((int)this + 0x422) == '\0';
}

/* ref: FUN_00aecec0 */
uint F_00aecec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xaecec0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_3 == 3) {
    (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10ebc40);
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10928e4);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10ebc34);
    (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10ebcec);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
    F_0054e4e0((undefined *)(param_1 + 0x128),&(*(undefined4 *)(gen_frame + 0x8)),4);
    puVar1 = &(*(undefined4 *)(gen_frame + 0x18));
  }
  else if (param_3 == 4) {
    (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10ebd3c);
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10928e4);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10ac050);
    (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10ebcec);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
    F_0054e4e0((undefined *)(param_1 + 0x128),&(*(undefined4 *)(gen_frame + 0x8)),4);
    puVar1 = &(*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    if (param_3 != 5) goto LAB_00aed03e;
    (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x10ebbec);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10928e4);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10ac050);
    (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x10ebcec);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    F_0054e4e0((undefined *)(param_1 + 0x128),&(*(undefined4 *)(gen_frame + 0x18)),4);
    puVar1 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  F_0054e4e0((undefined *)(param_1 + 0x16c),puVar1,4);
LAB_00aed03e: ;
  *(undefined4 *)(param_2 + 0x28) = REFG(float, 0x10ebbf0);
  *(float *)(param_2 + 0x30) = param_4;
  *(float *)(param_2 + 0x18) = param_5;
  *(uint *)(param_2 + 0x38) = param_3;
  *(float *)(param_1 + 0x1bc) = param_5;
  *(float *)(param_1 + 0x1c0) = param_6;
  *(float *)(param_1 + 0x1b0) = param_7;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return param_3;
}

/* ref: FUN_00aed0a0 */
uint F_00aed0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaed0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x82) == '\0') {
    uVar2 = *(undefined4 *)(param_2 + 0x3c);
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x88);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)((int)this + 0x374) = uVar2;
  *(undefined4 *)((int)this + 0x378) = uVar1;
  F_00affb20((undefined *)((int)this + 0x380),param_2);
  *(undefined4 *)((int)this + 0x410) = *param_1;
  *(undefined4 *)((int)this + 0x414) = param_1[1];
  *(undefined4 *)((int)this + 0x418) = param_1[2];
  if (*(int *)(param_2 + 0x44) != 0) {
    param_1 = (undefined4 *)F_00c9f0c0(*(int *)(param_2 + 0x44) + 0x58,(int)this + 0x454);
  }
  return (uint)param_1;
}

/* ref: FUN_00aed220 */
float10 F_00aed220(float gen_a0)
{
  GEN_ENTER(0xaed220u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00aeb260(param_1);
  return fVar1;
}

/* ref: FUN_00aed240 */
uint F_00aed240(void)
{
  GEN_ENTER(0xaed240u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf);
    if (*(int *)(uVar1 + 0x14) != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aed270 */
byte F_00aed270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaed270u, gen_a0, gen_a1, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  byte bVar1;
  
  if ((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) {
    F_00690d40((undefined *)(REFG(int, 0x1375b90) + 0x10),&(*(undefined4 *)(gen_frame + 0x0)),(int)*param_1,(int)param_1[1]);
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x90)) = 0;
    (*(undefined4 *)(gen_frame + 0x94)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc4)) = (*(undefined4 *)(gen_frame + 0x0));
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined2 *)(gen_frame + 0xa0)) = 0;
    (*(undefined1 *)(gen_frame + 0xa2)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc8)) = (*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0xcc)) = (*(undefined4 *)(gen_frame + 0x8));
    (*(undefined4 *)(gen_frame + 0xb8)) = (*(undefined4 *)(gen_frame + 0x10));
    (*(undefined4 *)(gen_frame + 0xbc)) = (*(undefined4 *)(gen_frame + 0x14));
    (*(undefined4 *)(gen_frame + 0xc0)) = (*(undefined4 *)(gen_frame + 0x18));
    bVar1 = F_00aeb520(&(*(undefined4 *)(gen_frame + 0xc4)),&(*(undefined4 *)(gen_frame + 0xb8)),REFG(float, 0x10ebcac),&(*(undefined4 *)(gen_frame + 0x20)),(float)(float10)0);
    if (bVar1 != 0) {
      *param_2 = (*(undefined4 *)(gen_frame + 0x20));
      param_2[1] = (*(undefined4 *)(gen_frame + 0x24));
      param_2[2] = (*(undefined4 *)(gen_frame + 0x28));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aed710 */
byte F_00aed710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaed710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  float10 fVar2;
  
  if (*(char *)(param_4 + 0x62) == '\0') {
    fVar2 = (float10)REFG(float, 0x1339b5c) + (float10)*(double *)&REFG(undefined, 0x109ce00);
  }
  else {
    fVar2 = (float10)REFG(float, 0x1339b58) + (float10)*(double *)&REFG(undefined, 0x108bec8);
  }
  bVar1 = F_00ae9970(param_1,param_2,param_3,((float)GEN_TOF(((float10)*(float *)(param_4 + 0x40) - fVar2))))
  ;
  return bVar1;
}

/* ref: FUN_00aed770 */
uint F_00aed770(unsigned int gen_a0)
{
  GEN_ENTER(0xaed770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00aeb700(*(undefined * PTR32 *)((int)this + 0x10));
  if ((*(char *)((int)this + 0x14) == '\0') && (*(char *)((int)this + 0x15) == '\0')) {
    uVar1 = F_00afcf00(this);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00aed7a0 */
unsigned int F_00aed7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaed7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int * this_00;
  int iVar2;
  float * pfVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  
  if (*(char *)((int)this + 0x18) == '\0') {
    return 0;
  }
  if ((*(int *)((int)this + 0xa0) == -0x20000000) ||
     (this_00 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),
                                    *(undefined4 *)((int)this + 0xa4)), this_00 == (int *)0x0)) {
    if ((*(char *)((int)this + 0x260) == '\0') || (*(int *)((int)this + 0x244) == 3))
    goto LAB_00aedb33;
    (*(float *)(gen_frame + 0x20)) = *(float *)((int)this + 0x250);
    (*(float *)(gen_frame + 0x24)) = *(float *)((int)this + 0x254);
    (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 600);
    (*(float *)(gen_frame + 0x30)) = 0.0;
    (*(float *)(gen_frame + 0x34)) = 0.0;
    (*(float *)(gen_frame + 0x38)) = 0.0;
    if (*(int *)((int)this + 0x234) != -1) {
      iVar2 = *(int *)((int)this + 0x234) + 0x19;
      (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + iVar2 * 0x10);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + iVar2 * 0x10 + 4);
      (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)((int)this + iVar2 * 0x10 + 8));
      pfVar3 = (float *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x10)));
      (*(float *)(gen_frame + 0x30)) = *pfVar3;
      (*(float *)(gen_frame + 0x34)) = pfVar3[1];
      (*(float *)(gen_frame + 0x38)) = pfVar3[2];
    }
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30))
                      );
    (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x48)))));
    fVar8 = (float10)(*(float *)(gen_frame + 0x48));
    bVar7 = GEN_ISNAN(fVar8) || GEN_ISNAN((float10)0);
    if (bVar7 != (bVar7 || fVar8 == (float10)0)) {
      uVar4 = F_00ae9430(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x0)));
      pfVar3 = (float *)F_0046f4a0(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),uVar4);
      (*(float *)(gen_frame + 0x30)) = *pfVar3;
      (*(float *)(gen_frame + 0x34)) = pfVar3[1];
      (*(float *)(gen_frame + 0x38)) = pfVar3[2];
    }
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30))
                      );
    (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x48)))));
    fVar9 = (float10)(*(float *)(gen_frame + 0x48));
    fVar8 = (float10)0;
    bVar7 = GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8);
    if (bVar7 == (bVar7 || fVar9 == fVar8)) {
      (*(float *)(gen_frame + 0x34)) = (float)fVar8;
      F_004bd580(&(*(float *)(gen_frame + 0x30)));
      fVar8 = (float10)*(double *)&REFG(undefined, 0x10944e0);
      (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x30)) * fVar8);
      (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar8);
      (*(float *)(gen_frame + 0x38)) = (float)(fVar8 * (float10)(*(float *)(gen_frame + 0x38)));
    }
    fVar11 = 4.2039e-45;
    pfVar3 = &(*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x30)) + (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x34)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x28)));
LAB_00aedb2b: ;
    F_00aea6c0(this,pfVar3,(undefined4)gen_fl2bits(fVar11));
  }
  else {
    puVar5 = (undefined4 *)F_00a5feb0(this_00);
    *(undefined4 *)((int)this + 0x250) = *puVar5;
    (*(float *)(gen_frame + 0x4c)) = 0.0;
    *(undefined4 *)((int)this + 0x254) = puVar5[1];
    *(undefined4 *)((int)this + 600) = puVar5[2];
    (*(float *)(gen_frame + 0x48)) = *(float *)((int)this + 0x240);
    if ((GEN_ISNAN((*(float *)(gen_frame + 0x48))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
        ((GEN_ISNAN((*(float *)(gen_frame + 0x48))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x48)) == REFG(float, 0x10ebbf0))) {
      *(undefined4 *)((int)this + 0x240) = *(undefined4 *)(REFG(int, 0x137104c) + 0x1198);
LAB_00aedb20: ;
      fVar11 = (*(float *)(gen_frame + 0x4c));
      pfVar3 = (float *)F_00a5feb0(this_00);
      goto LAB_00aedb2b;
    }
    (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)(*(float *)(gen_frame + 0x48)))));
    *(float *)((int)this + 0x240) = (*(float *)(gen_frame + 0x48));
    if ((float10)REFG(float, 0x10ebd08) <= (float10)(*(float *)(gen_frame + 0x48))) {
      uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0xb8))(this_00);
      if ((char)uVar4 != '\0') {
        uVar4 = F_00a5f290(this_00);
        bVar1 = F_00a9fcd0(uVar4);
        if (bVar1 != 0) {
          uVar4 = F_00a5f290(this_00);
          bVar1 = F_00a9fce0(uVar4);
          if (bVar1 != 0) goto LAB_00aeda85;
        }
      }
      (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x240) - (float10)*(double *)&REFG(undefined, 0x10ec498))))
      ;
      if ((float10)REFG(float, 0x10ebd08) < (float10)(*(float *)(gen_frame + 0x48))) {
        *(float *)((int)this + 0x240) = REFG(float, 0x10ebd08);
      }
      else {
        *(float *)((int)this + 0x240) = (*(float *)(gen_frame + 0x48));
      }
      goto LAB_00aedb20;
    }
LAB_00aeda85: ;
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0xb8))(this_00);
    if ((char)uVar4 != '\0') {
      uVar4 = F_00a5f290(this_00);
      uVar4 = F_00a9fcc0(uVar4);
      if ((char)uVar4 == '\0') {
        uVar4 = F_00a5f290(this_00);
        bVar1 = F_00a9fcd0(uVar4);
        if (bVar1 != 0) {
          uVar4 = F_00a5f290(this_00);
          bVar1 = F_00a9fce0(uVar4);
          if (bVar1 != 0) goto LAB_00aedacf;
        }
      }
      else {
LAB_00aedacf: ;
        uVar4 = F_00a5f290(this_00);
        uVar4 = F_00a9fcc0(uVar4);
        if ((char)uVar4 == '\0') {
          uVar4 = F_00a5f290(this_00);
          bVar1 = F_00a9fcd0(uVar4);
          if (bVar1 != 0) {
            uVar4 = F_00a5f290(this_00);
            bVar1 = F_00a9fce0(uVar4);
            if (bVar1 != 0) {
              (*(float *)(gen_frame + 0x4c)) = 1.4013e-45;
            }
          }
        }
        else {
          (*(float *)(gen_frame + 0x4c)) = 2.8026e-45;
        }
        if ((*(float *)(gen_frame + 0x4c)) != gen_bits2f(*(int *)((int)this + 0x244))) goto LAB_00aedb20;
      }
    }
  }
LAB_00aedb33: ;
  if (*(int *)((int)this + 0x23c) == *(int *)((int)this + 0x238)) goto LAB_00aedca3;
  pfVar3 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
  (*(float *)(gen_frame + 0x20)) = *pfVar3;
  (*(float *)(gen_frame + 0x28)) = pfVar3[2];
  iVar2 = *(int *)((int)this + 0x230) + 0x19;
  (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + iVar2 * 0x10);
  (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + iVar2 * 0x10 + 8);
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)*pfVar3);
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)pfVar3[2]);
  fVar8 = (float10)(*(float *)(gen_frame + 0x30));
  fVar9 = (float10)(*(float *)(gen_frame + 0x38));
  (*(float *)(gen_frame + 0x48)) = (float)(fVar9 * fVar9 + fVar8 * fVar8);
  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x48)))));
  if (!((double)(*(float *)(gen_frame + 0x48)) <= *(double *)&REFG(undefined, 0x10a1b58))) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x204)));
    if ((iVar2 != 0) && (((iVar2 == 3 || (iVar2 == 4)) || (iVar2 == 2)))) {
      (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0x80);
      (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0x88);
      fVar8 = (float10)*(float *)((int)this + 0x80);
      fVar9 = (float10)*(float *)((int)this + 0x88);
      (*(float *)(gen_frame + 0x4c)) = (float)(fVar9 * fVar9 + fVar8 * fVar8);
      (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x4c)))));
      fVar8 = (float10)(*(float *)(gen_frame + 0x4c));
      if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN((float10)(*(float *)(gen_frame + 0x48)))) && !(fVar8 <= (float10)(*(float *)(gen_frame + 0x48))))
      goto LAB_00aedc76;
    }
    (*(float *)(gen_frame + 0x20)) = *(float *)((int)this + 0x80);
    (*(float *)(gen_frame + 0x24)) = *(float *)((int)this + 0x84);
    (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 0x88);
    if (*(char *)((int)this + 0x155) == '\0') goto LAB_00aedca3;
    fVar8 = (float10)*(float *)((int)this + 0x80);
    fVar9 = (float10)*(float *)((int)this + 0x84);
    fVar10 = (float10)*(float *)((int)this + 0x88);
    (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
    (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x48)))));
    if (!((float10)(*(float *)(gen_frame + 0x48)) <= (float10)*(float *)&REFG(undefined, 0x10ebd18))) goto LAB_00aedca3;
  }
LAB_00aedc76: ;
  *(int *)((int)this + 0x23c) = *(int *)((int)this + 0x238);
  if (((*(char *)((int)this + 0x260) != '\0') && (*(int *)((int)this + 0x244) == 3)) &&
     (*(int *)((int)this + 0x238) == *(int *)((int)this + 0x234))) {
    *(undefined1 *)((int)this + 0x260) = 0;
  }
LAB_00aedca3: ;
  iVar2 = *(int *)((int)this + 0x230);
  if ((iVar2 == *(int *)((int)this + 0x238)) && (iVar2 == *(int *)((int)this + 0x23c))) {
    if (*(int *)((int)this + 0x238) == -1) {
      *(undefined4 *)((int)this + 0x238) = 0;
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      iVar2 = 0;
    }
    iVar6 = *(int *)((int)this + 0x234) + 1;
    if (9 < iVar6) {
      iVar6 = 0;
    }
    if (iVar2 != iVar6) {
      *(int *)((int)this + 0x230) = iVar2;
    }
  }
  return 0;
}

/* ref: FUN_00aedd00 */
byte F_00aedd00(unsigned int gen_a0)
{
  GEN_ENTER(0xaedd00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  
  this = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
  uVar2 = F_00a34e80(this,1);
  uVar3 = F_00a34e80(this,0);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (short)uVar3;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = (short)uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((short)uVar2,(short)uVar3);
  bVar1 = F_00aed270(&(*(undefined4 *)(gen_frame + 0x8)),param_1);
  return bVar1;
}

/* ref: FUN_00aedd50 */
byte F_00aedd50(unsigned int gen_a0)
{
  GEN_ENTER(0xaedd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (((*(char *)((int)this + 0x17) != '\0') && (uVar2 = F_00b6afa0(), uVar2 != 0)) &&
     (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 != 0)) {
    return 1;
  }
  if (((*(char *)((int)this + 0x18) == '\0') && (*(char *)((int)this + 0x19) == '\0')) &&
     (*(char *)((int)this + 0x1a) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00aedd90 */
byte F_00aedd90(unsigned int gen_a0)
{
  GEN_ENTER(0xaedd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (((*(char *)((int)this + 0x17) != '\0') && (uVar2 = F_00b6afa0(), uVar2 != 0)) &&
     (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 != 0)) {
    return 1;
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aeddc0 */
byte F_00aeddc0(unsigned int gen_a0)
{
  GEN_ENTER(0xaeddc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  
  pvVar2 = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
  bVar1 = F_00431b80(pvVar2);
  if ((bVar1 != 0) || (*(char *)((int)this + 0x22) != '\0')) {
    return 1;
  }
  pvVar2 = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
  bVar1 = F_00a34970(pvVar2,0x129);
  if (((bVar1 != 0) || (*(char *)((int)this + 0x176) != '\0')) &&
     ((uVar3 = F_00b6afa0(), uVar3 != 0 &&
      (uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), uVar4 = F_00b6afa0(), uVar4 != uVar3)
      ))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aede40 */
byte F_00aede40(unsigned int gen_a0)
{
  GEN_ENTER(0xaede40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x17) == '\0') {
    return 0;
  }
  uVar2 = F_00b6afa0();
  if ((uVar2 != 0) && (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00aede70 */
uint F_00aede70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaede70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  int iVar4;
  
  if (*(char *)((int)this + 0x17) == '\0') {
LAB_00aede93: ;
    if (*(char *)((int)this + 0x18) == '\0') goto LAB_00aedf08;
  }
  else {
    uVar2 = F_00b6afa0();
    if (uVar2 == 0) goto LAB_00aede93;
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if (bVar1 == 0) goto LAB_00aede93;
  }
  if (*(char *)((int)this + 0x17) != '\0') {
    uVar2 = F_00b6afa0();
    if (uVar2 != 0) {
      bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      if (bVar1 != 0) {
        this_00 = (undefined *)F_00b6afa0();
        puVar3 = (undefined4 *)F_00a5feb0(this_00);
        *param_1 = *puVar3;
        param_1[1] = puVar3[1];
        param_1[2] = puVar3[2];
        return (uint)param_1;
      }
    }
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    iVar4 = *(int *)((int)this + 0x230) + 0x19;
    *param_1 = *(undefined4 *)((int)this + iVar4 * 0x10);
    param_1[1] = *(undefined4 *)((int)this + iVar4 * 0x10 + 4);
    param_1[2] = *(undefined4 *)((int)this + iVar4 * 0x10 + 8);
    return (uint)param_1;
  }
LAB_00aedf08: ;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00aedf40 */
uint F_00aedf40(unsigned int gen_a0)
{
  GEN_ENTER(0xaedf40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if ((((*(char *)((int)this + 0x17) == '\0') || (uVar2 = F_00b6afa0(), uVar2 == 0)) ||
      (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 == 0)) && (*(char *)((int)this + 0x18) == '\0')) {
    return 0;
  }
  if (((*(char *)((int)this + 0x17) != '\0') && (uVar2 = F_00b6afa0(), uVar2 != 0)) &&
     (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 != 0)) {
    uVar2 = F_00b6afa0();
    return uVar2;
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    if (*(int *)((int)this + 0xa0) != -0x20000000) {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),
                           *(undefined4 *)((int)this + 0xa4));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00aedfc0 */
byte F_00aedfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xaedfc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  float * pfVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_14;
  
  iVar4 = *(int *)((int)this + 0x230);
  if (iVar4 != *(int *)((int)this + 0x234)) {
    do {
      pfVar2 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      fVar5 = (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + (iVar4 + 0x19) * 0x10 + 8))) -
                              (float10)pfVar2[2])));
      fVar6 = (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + (iVar4 + 0x19) * 0x10))) -
                              (float10)*pfVar2)));
      local_14 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0)));
      if (*(char *)((int)this + 0x18) == '\0') {
        if (*(char *)((int)this + 0x17) != '\0') {
          uVar3 = F_00b6afa0();
          if (uVar3 != 0) {
            bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
            if (bVar1 != 0) {
              uVar3 = F_00b6afa0();
              goto LAB_00aee090;
            }
          }
        }
      }
      else if (*(int *)((int)this + 0xa0) != -0x20000000) {
        uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),
                             *(undefined4 *)((int)this + 0xa4));
LAB_00aee090: ;
        if (uVar3 != 0) {
          local_14 = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 0xc0) + (float10)local_14)));
        }
      }
      fVar5 = (float10)((float)GEN_TOF(SQRT((float10)(float)(fVar6 * fVar6 + fVar5 * fVar5))));
      if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN((float10)local_14 + (float10)*(double *)&REFG(undefined, 0x10ec4a0))) &&
          !(fVar5 < (float10)local_14 + (float10)*(double *)&REFG(undefined, 0x10ec4a0))) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      if (9 < iVar4) {
        iVar4 = 0;
      }
    } while (iVar4 != *(int *)((int)this + 0x234));
  }
  return 0;
}

/* ref: FUN_00aee0e0 */
byte F_00aee0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaee0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  uint uVar6;
  float * pfVar7;
  undefined * this_00;
  float * pfVar8;
  float10 fVar9;
  double dVar10;
  
  uVar6 = F_00aedf40(this);
  if (uVar6 == 0) {
    if ((*(char *)((int)this + 0x18) != '\0') && (*(char *)((int)this + 0x260) != '\0')) {
      return 1;
    }
  }
  else {
    pfVar7 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    this_00 = (undefined *)F_00aedf40(this);
    pfVar8 = (float *)F_00a5feb0(this_00);
    fVar1 = *pfVar8;
    fVar2 = *pfVar7;
    fVar3 = pfVar8[2];
    fVar4 = pfVar7[2];
    dVar10 = F_00ae9ff0(this);
    fVar9 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2)
                                                  * (float10)(float)((float10)fVar1 - (float10)fVar2
                                                                    ) +
                                                 (float10)(float)((float10)fVar3 - (float10)fVar4) *
                                                 (float10)(float)((float10)fVar3 - (float10)fVar4)))))))
    ;
    if ((!GEN_ISNAN(fVar9) && !GEN_ISNAN((float10)dVar10 + (float10)*(double *)&REFG(undefined, 0x10ec4a0))) &&
        !(fVar9 < (float10)dVar10 + (float10)*(double *)&REFG(undefined, 0x10ec4a0))) {
      return 1;
    }
    if (((*(char *)((int)this + 0x18) != '\0') &&
        (*(int *)((int)this + 0x238) != *(int *)((int)this + 0x234))) &&
       (bVar5 = F_00aedfc0(this), bVar5 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aee1c0 */
byte F_00aee1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaee1c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf);
    if (((*(int *)(uVar1 + 0x14) != 0) &&
        (((REFG(int, 0x1375bbc) != 0 || (REFG(int, 0x1375b90) == 0)) || (*(int *)(REFG(int, 0x1375b90) + 0xe0) != 0)))) &&
       (*(char *)(in_ecx + 0x17) == '\0')) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00aee270 */
byte F_00aee270(unsigned int gen_a0)
{
  GEN_ENTER(0xaee270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if ((*(char *)(in_ecx + 0x17) != '\0') && (REFG(int, 0x137104c) != 0)) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf);
    if (*(int *)(uVar1 + 0x14) != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aee2a0 */
uint F_00aee2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaee2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  char cVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar6;
  
  *(undefined1 *)((int)this + 0x19) = 0;
  if (*(char *)((int)this + 0x17) == '\0') {
LAB_00aee2cc: ;
    uVar3 = in_EAX & 0xffffff00;
  }
  else {
    uVar3 = F_00b6afa0();
    in_EAX = 0;
    if (uVar3 == 0) goto LAB_00aee2cc;
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) goto LAB_00aee2cc;
    uVar3 = CONCAT31(extraout_var,1);
  }
  cVar2 = (char)uVar3;
  *(char *)((int)this + 0x17) = cVar2;
  if ((char)param_1 == '\0') {
    if (cVar2 != '\0') {
      *(undefined1 *)((int)this + 0x17) = 0;
    }
    if (*(char *)((int)this + 0x18) != '\0') {
      *(undefined1 *)((int)this + 0x18) = 0;
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar6 = 0x35;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      uVar3 = F_0046a630(this_00,uVar6);
      *(undefined1 *)((int)this + 0x1a) = 0;
      *(undefined1 *)((int)this + 0x275) = 0;
      return uVar3;
    }
  }
  else if (cVar2 != '\0') {
    uVar5 = F_00b6afa0();
    uVar3 = 0;
    if (uVar5 != 0) {
      bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      uVar3 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) goto LAB_00aee32f;
    }
    *(undefined1 *)((int)this + 0x17) = 0;
  }
LAB_00aee32f: ;
  *(undefined1 *)((int)this + 0x1a) = 0;
  *(undefined1 *)((int)this + 0x275) = 0;
  return uVar3;
}

/* ref: FUN_00aee340 */
uint F_00aee340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaee340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  undefined * this;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined1 * puVar2;
  float10 fVar3;
  double dVar4;
  
  bVar1 = F_00aea5a0(param_1,0);
  this = REFG(undefined4, 0x1375b90);
  puVar2 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  if ((((bVar1 != 0) && (REFG(int, 0x1375bbc) == 0)) && (REFG(undefined4, 0x1375b90) != (undefined *)0x0)) &&
     ((*(char *)((int)param_1 + 0x22) != '\0' &&
      ((bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 == 0 ||
       (puVar2 = (undefined1 *)F_00b6afa0(), puVar2 == (undefined1 *)0x0)))))) {
    *(undefined1 *)param_2 = 1;
    if (*(char *)((int)param_1 + 0x28) != '\0') {
      fVar3 = F_00aeb260(*(float *)((int)param_1 + 0x24));
      *param_3 = (float)fVar3;
      *param_4 = 1;
      return (uint)param_4;
    }
    dVar4 = F_00b6c830(this);
    fVar3 = F_00aeb260((float)((float10)dVar4 + (float10)*(double *)&REFG(undefined, 0x1080228)));
    *param_3 = (float)fVar3;
    *param_4 = 1;
    puVar2 = param_4;
  }
  return (uint)puVar2;
}

/* ref: FUN_00aee570 */
uint F_00aee570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaee570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  float fVar1;
  float * pfVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined * pvVar4;
  undefined3 extraout_var_00 = 0;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float local_14;
  
  bVar3 = F_00aea5a0(this,0);
  pfVar6 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
  if (bVar3 != 0) {
    pvVar4 = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
    bVar3 = F_00a34970(pvVar4,0x129);
    if ((bVar3 != 0) ||
       (pfVar6 = ((float *)GEN_TOP(CONCAT31(extraout_var_00,bVar3))), *(char *)((int)this + 0x176) != '\0')) {
      uVar5 = F_00b6afa0();
      pfVar6 = (float *)0x0;
      if (uVar5 != 0) {
        pfVar2 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
        pfVar6 = (float *)F_00b6afa0();
        if (pfVar6 != pfVar2) {
          if (*(char *)((int)this + 0x177) == '\0') {
            uVar5 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
            fVar1 = *(float *)(uVar5 + 8);
            pvVar4 = (undefined *)F_00b6afa0();
            uVar5 = F_00a5feb0(pvVar4);
            fVar7 = F_00c4d1fa((float10)((float)GEN_TOF(((float10)*(float *)(uVar5 + 8) - (float10)fVar1))));
            fVar7 = F_00aeb260((float)fVar7);
            local_14 = (float)fVar7;
          }
          else {
            local_14 = *(float *)((int)this + 0x178);
            *(undefined1 *)((int)this + 0x177) = 0;
          }
          *param_1 = 1;
          fVar7 = F_00aeb260(local_14);
          *param_2 = (float)fVar7;
          *param_3 = 1;
          *(undefined1 *)((int)this + 0x272) = 1;
          pfVar6 = param_2;
        }
      }
    }
    if (*(char *)((int)this + 0x2a) != '\0') {
      *param_1 = 1;
      fVar7 = F_00aeb260(*(float *)((int)this + 0x144));
      *param_2 = (float)fVar7;
      *param_3 = *(undefined1 *)((int)this + 0x14c);
      *(undefined1 *)((int)this + 0x272) = 1;
      pfVar6 = param_2;
    }
  }
  return (uint)pfVar6;
}

/* ref: FUN_00aeece0 */
float F_00aeece0(unsigned int gen_a0)
{
  GEN_ENTER(0xaeece0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  float10 fVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
  this_01 = (undefined *)F_00b6afa0();
  uVar2 = F_00a5feb0(this_01);
  fVar1 = *(float *)(uVar2 + 8);
  uVar2 = F_00a5feb0(this_00);
  fVar3 = F_00c4d1fa((float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(uVar2 + 8)))));
  fVar3 = F_00aeb260((float)fVar3);
  return (float)fVar3;
}

/* ref: FUN_00aef7c0 */
byte F_00aef7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaef7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined * this_00;
  uint uVar6;
  undefined4 uVar7;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
  uVar7 = 0x2f;
  bVar3 = false;
  bVar2 = false;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1)));
  bVar4 = F_00b7aac0(this_00,uVar7);
  if (bVar4 == 0) {
    F_00424770(REFG(undefined4, 0x137104c));
    bVar4 = *(byte *)((int)this + 0x16);
    if (*(char *)((int)this + 0x274) != '\0') {
      bVar4 = 1;
      bVar3 = false;
      bVar2 = true;
    }
  }
  else {
    bVar4 = 1;
    bVar3 = true;
    bVar2 = false;
  }
  if ((((*(char *)((int)this + 0x17) == '\0') && (*(char *)((int)this + 0x18) == '\0')) &&
      (*(char *)((int)this + 0x19) == '\0')) && (*(char *)((int)this + 0x1a) == '\0')) {
    return bVar4;
  }
  if (*(char *)((int)this + 0x1a) != '\0') {
    return *(byte *)((int)this + 299);
  }
  if (!bVar3) {
    if (((*(char *)((int)this + 0x17) == '\0') ||
        ((uVar6 = F_00b6afa0(), uVar6 != 0 && (bVar5 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar5 != 0))))
       && (bVar5 = F_00ae9d70(this), bVar5 == 0)) {
      return bVar4;
    }
    if ((*(char *)((int)this + 0x14) != '\0') && (!bVar2)) {
      return *(byte *)((int)this + 0x1c);
    }
    return bVar4;
  }
  return bVar4;
}

/* ref: FUN_00aef890 */
unsigned int F_00aef890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaef890u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  float10 fVar2;
  
  if ((char)param_2 != '\0') {
    fVar2 = F_00aeb260(*(float *)(param_1 + 0xd0));
    uVar1 = F_00ae9230(*(undefined4 *)(param_1 + 0x10),(float)fVar2,param_3);
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x6c))) = uVar1;
  }
  return 0;
}

/* ref: FUN_00aef8e0 */
unsigned int F_00aef8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaef8e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int in_ecx;
  byte bVar5;
  uint uVar6;
  float10 fVar7;
  uint local_8;
  
  iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x10);
  if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
    fVar1 = *(float *)(iVar3 + 0x34);
    iVar4 = *(int *)(iVar3 + 0x10);
    fVar2 = *(float *)(iVar4 + 0xb0);
    uVar6 = local_8 >> 8;
    local_8 = local_8 & 0xffffff00;
    if (((char)(*(uint *)&gen_args[1]) == '\0') &&
       ((((iVar4 == 0 || (bVar5 = F_00a9f620(iVar4), bVar5 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
        (*(char *)(iVar3 + 0x1cc) == '\0')))) {
      local_8 = CONCAT31((int3)uVar6,1);
    }
    if ((*(char *)(iVar3 + 0x5d) != '\0') && (*(char *)((*(int *)&gen_args[0]) + 0x172) == '\0')) {
      *(undefined1 *)((*(int *)&gen_args[0]) + 0x172) = 1;
    }
    iVar4 = *(int *)((*(int *)&gen_args[0]) + 0x10);
    in_ecx = *(int *)(iVar4 + 0x10);
    if (((in_ecx == 0) || (bVar5 = F_00a9f620(in_ecx), bVar5 == 0)) || (REFG(char, 0x14c0a64) == '\0')) {
      (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),*(undefined1 *)(iVar4 + 0x1cc));
    }
    else {
      (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),1);
    }
    fVar7 = F_00aeb260((float)((float10)fVar1 - (float10)fVar2));
    uVar6 = F_00ae9300(*(undefined4 *)((*(int *)&gen_args[0]) + 0x10),(float)fVar7,local_8,(*(undefined4 *)&gen_args[2]));
    *(uint *)(iVar3 + 0x70) = uVar6;
    return 0;
  }
  return 0;
}

/* ref: FUN_00aef9b0 */
unsigned int F_00aef9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaef9b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  byte bVar8;
  uint uVar9;
  undefined * this_00;
  uint uVar10;
  float * pfVar11;
  bool bVar12;
  float10 fVar13;
  double dVar14;
  
  iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != '\0') &&
      ((*(float *)&REFG(undefined, 0x1088114) < *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) || (*(char *)(iVar4 + 100) != '\0')))
      ) && (((iVar5 = *(int *)(iVar4 + 0x204), iVar5 == 0 ||
             (((iVar5 != 3 && (iVar5 != 4)) && (iVar5 != 2)))) || (*(char *)(iVar4 + 0x24b) != '\0')
            ))) {
    if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17))) == '\0') && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == '\0')) &&
       ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19))) == '\0' && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a))) == '\0')))) {
LAB_00aefaec: ;
      if ((byte)(*(undefined4 *)&gen_args[1]) == 0) {
LAB_00aefaee: ;
        *(undefined1 *)(iVar4 + 0x66) = 1;
        bVar12 = GEN_ISNAN(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78)))) || GEN_ISNAN(REFG(float, 0x10ebbf0));
        if (bVar12 == (bVar12 || *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) == REFG(float, 0x10ebbf0))) goto LAB_00aefb41;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
        *(undefined1 *)(iVar4 + 100) = 0;
      }
    }
    else {
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x164))));
      bVar8 = F_00aedd90((*(undefined * PTR32 *)&gen_args[0]));
      if ((bVar8 != 0) && ((*(float *)(gen_frame + 0x1c)) == 0.0)) {
        if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != '\0') {
          bVar8 = F_00ae7340((*(undefined * PTR32 *)&gen_args[0]));
          if (bVar8 == 0) {
            if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c)))) ||
               (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x230))) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))))) goto LAB_00aefa88;
          }
          else if (*(char *)(iVar4 + 100) != '\0') goto LAB_00aefa88;
          goto LAB_00aefaee;
        }
LAB_00aefa88: ;
        uVar9 = F_00aedf40((*(undefined * PTR32 *)&gen_args[0]));
        if (uVar9 != 0) {
          uVar9 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x10))));
          this_00 = (undefined *)F_00aedf40((*(undefined * PTR32 *)&gen_args[0]));
          uVar10 = F_00a5feb0(this_00);
          F_0046f4a0(&(*(float *)(gen_frame + 0x0)),uVar10,uVar9);
          (*(float *)(gen_frame + 0x1c)) = F_0054cd20(&(*(float *)(gen_frame + 0x0)));
          dVar14 = F_00ae9ff0((*(undefined * PTR32 *)&gen_args[0]));
          if ((float10)(*(float *)(gen_frame + 0x1c)) <= (float10)dVar14 + (float10)REFG(double, 0x1088130)) {
            (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = F_00aee0e0((*(undefined * PTR32 *)&gen_args[0]));
            goto LAB_00aefaec;
          }
        }
      }
    }
  }
  iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x204)));
  if (iVar5 == 0) {
    return 0;
  }
  if (((iVar5 != 3) && (iVar5 != 4)) && (iVar5 != 2)) {
    return 0;
  }
  if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x24b))) != '\0') {
    return 0;
  }
LAB_00aefb41: ;
  iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x204)));
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  if ((iVar5 == 0) ||
     ((((iVar5 != 3 && (iVar5 != 4)) && (iVar5 != 2)) ||
      (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x24b))) != '\0')))) {
    (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80)));
    (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88)));
  }
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)) +
                    ((float10)0 * (float10)0 + (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0))))));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x1c)))));
  fVar13 = (float10)(*(float *)(gen_frame + 0x1c));
  bVar12 = GEN_ISNAN(fVar13) || GEN_ISNAN((float10)0);
  if (bVar12 == (bVar12 || fVar13 == (float10)0)) {
    pfVar11 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x10))));
    fVar1 = *pfVar11;
    fVar13 = (float10)(*(float *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 + fVar13);
    fVar2 = pfVar11[1];
    fVar7 = (float10)*(double *)&REFG(undefined, 0x108bec8);
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 + fVar7);
    fVar3 = pfVar11[2];
    fVar6 = (float10)(*(float *)(gen_frame + 0x8));
    *(undefined1 *)(iVar4 + 0x30) = 1;
    *(undefined1 *)(iVar4 + 100) = 1;
    (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar3 + fVar6);
    *(float *)(iVar4 + 0x20) = (float)((float10)fVar1 + fVar13);
    *(float *)(iVar4 + 0x24) = (float)((float10)fVar2 + fVar7);
    *(float *)(iVar4 + 0x28) = (float)((float10)fVar3 + fVar6);
  }
  return 0;
}

/* ref: FUN_00aefdf0 */
byte F_00aefdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaefdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  
  bVar1 = F_00aea290(this,param_1,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  if ((param_3 != 0) && (bVar1 = F_00aea290(this,param_1,param_3), bVar1 == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00aefe70 */
uint F_00aefe70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaefe70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int * piVar1;
  uint uVar2;
  float10 fVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (((uVar2 == 1) && (*(char *)(param_1 + 8) != '\0')) && (param_5 != (float *)0x0)) {
    fVar3 = F_00aeb260(*param_5);
    param_4 = (float)fVar3;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = F_00ae9230(*(undefined4 *)(param_1 + 4),param_4,param_3);
    *(uint *)(param_2 + 0x4c) = uVar2;
    return uVar2;
  }
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return 0;
}

/* ref: FUN_00aefee0 */
uint F_00aefee0(unsigned int gen_a0)
{
  GEN_ENTER(0xaefee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0xa6) == '\0') ||
     (iVar1 = (int)this + 0xd0, *(char *)((int)this + 0xcc) == '\0')) {
    iVar1 = (int)this + 0x80;
  }
  if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar1 + 0x10)) {
    uVar2 = F_00a65a30(this,0);
    return uVar2;
  }
  uVar2 = F_00a65a30(this,1);
  return uVar2;
}

/* ref: FUN_00af04a0 */
uint F_00af04a0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaf04a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  float in_xmm1 = (float)gen_a2;
  float in_xmm2 = (float)gen_a3;
  float in_xmm3 = (float)gen_a4;
  float in_xmm5 = (float)gen_a5;
  float in_xmm7 = (float)gen_a6;
  int param_8 = (int)gen_a7;
  int iVar1;
  ulonglong uVar2;
  
  if (*(char *)(in_ecx + 0xa4) == '\0') {
    F_00af5b90(in_ecx,in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,param_8,0,(float)(float10)0,
                 0);
  }
  iVar1 = in_ecx + 0xd0;
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    iVar1 = in_ecx + 0x80;
  }
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_8 + 4);
  iVar1 = in_ecx + 0xd0;
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    iVar1 = in_ecx + 0x80;
  }
  *(undefined1 *)(iVar1 + 0x25) = 1;
  iVar1 = in_ecx + 0xd0;
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    iVar1 = in_ecx + 0x80;
  }
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_8 + 4);
  uVar2 = F_00427d90();
  *(ulonglong *)(in_ecx + 0x78) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00af0530 */
uint F_00af0530(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaf0530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  float in_xmm1 = (float)gen_a2;
  float in_xmm2 = (float)gen_a3;
  float in_xmm3 = (float)gen_a4;
  float in_xmm5 = (float)gen_a5;
  float in_xmm7 = (float)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  cVar1 = *(char *)(in_ecx + 0xa4);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  if ((cVar1 != '\0') || (*(char *)(in_ecx + 0xa5) != '\0')) {
    iVar4 = in_ecx + 0xd0;
    if (*(char *)(in_ecx + 0xa6) == '\0') {
      iVar4 = in_ecx + 0x80;
    }
    if ((cVar1 == '\0') &&
       ((*(char *)(iVar4 + 0x24) != '\0' ||
        ((*(int *)(in_ecx + 0x14) == 0 && (bVar2 = F_00aead60(in_ecx), bVar2 == 0)))))) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x1c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x1c)), 1, 3),1);
      (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_8[1]))) -
                         (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x24))))));
      if (*(double *)&REFG(undefined, 0x1094810) < (double)(*(float *)(gen_frame + 0xc))) {
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x1c)), 1, 3) << 8;
      }
      F_00af5b90(in_ecx,in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,param_8,(*(uint *)(gen_frame + 0x1c)),
                   (float)(float10)0,0);
    }
    if (((*(char *)(in_ecx + 0xa5) == '\0') && (*(char *)(in_ecx + 0xa4) != '\0')) &&
       (*(char *)(in_ecx + 0x94) == '\0')) {
      F_00aeafa0(in_ecx,in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,((undefined1 *)(gen_frame + 0x0)),param_8);
      F_00af04a0(in_ecx,in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,((undefined1 *)(gen_frame + 0x0)));
    }
    iVar4 = in_ecx + 0xd0;
    if (*(char *)(in_ecx + 0xa6) == '\0') {
      iVar4 = in_ecx + 0x80;
    }
    iVar5 = in_ecx + 0xd0;
    *(undefined4 *)(iVar4 + 0x30) = *param_8;
    *(undefined4 *)(iVar4 + 0x34) = param_8[1];
    *(undefined4 *)(iVar4 + 0x38) = param_8[2];
    cVar1 = *(char *)(in_ecx + 0xa6);
    if (cVar1 == '\0') {
      iVar5 = in_ecx + 0x80;
    }
    if (*(int *)(iVar5 + 0x40) == 0 && *(int *)(iVar5 + 0x44) == 0) {
      iVar4 = in_ecx + 0xd0;
      if (cVar1 == '\0') {
        iVar4 = in_ecx + 0x80;
      }
      *(undefined4 *)(iVar4 + 0x48) = REFG(float, 0x10ebc30);
    }
    else {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      iVar4 = in_ecx + 0xd0;
      if (cVar1 == '\0') {
        iVar4 = in_ecx + 0x80;
      }
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar4 + 0x40);
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(*(undefined4 *)(iVar4 + 0x44));
      uVar6 = F_00427d90();
      uVar7 = (ulonglong)(*(uint *)(gen_frame + 0x1c)) << 0x20;
      if (CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0xc))),(*(undefined4 *)(gen_frame + 0x8))) < uVar6) {
        iVar4 = in_ecx + 0xd0;
        if (*(char *)(in_ecx + 0xa6) == '\0') {
          iVar4 = in_ecx + 0x80;
        }
        (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar4 + 0x40);
        (*(float *)(gen_frame + 0xc)) = gen_bits2f(*(undefined4 *)(iVar4 + 0x44));
        uVar7 = F_00427d90();
        uVar7 = uVar7 - (longlong)CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0xc))),(*(undefined4 *)(gen_frame + 0x8)));
      }
      uVar3 = (uint)(uVar7 >> 0x20);
      iVar4 = in_ecx + 0xd0;
      if (*(char *)(in_ecx + 0xa6) == '\0') {
        iVar4 = in_ecx + 0x80;
      }
      (*(undefined4 *)(gen_frame + 0x8)) = (int)uVar7;
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar3 & 0x7fffffff);
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar3 & 0x80000000);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      *(float *)(iVar4 + 0x48) =
           ((float)GEN_TOF(((-(float10)(longlong)(((ulonglong)uVar3 & 0x80000000) << 0x20) +
                   (float10)(uVar7 & 0x7fffffffffffffff)) / (float10)*(double *)&REFG(undefined, 0x10912a8))));
    }
    iVar4 = in_ecx + 0xd0;
    if (*(char *)(in_ecx + 0xa6) == '\0') {
      iVar4 = in_ecx + 0x80;
    }
    *(undefined4 *)(iVar4 + 0x18) = param_8[1];
    uVar7 = F_00427d90();
    *(ulonglong *)(in_ecx + 0x78) = uVar7;
    uVar3 = in_ecx + 0xd0;
    if (*(char *)(in_ecx + 0xa6) == '\0') {
      uVar3 = in_ecx + 0x80;
    }
    *(undefined1 *)(uVar3 + 0x26) = 1;
  }
  return uVar3;
}

/* ref: FUN_00af0900 */
byte F_00af0900(unsigned int gen_a0)
{
  GEN_ENTER(0xaf0900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float10 fVar1;
  
  if (!(*(float *)(param_1 + 4) <= 0.0)) {
    fVar1 = F_00aeb3f0(param_1);
    if (!((float10)REFG(float, 0x1339ba0) <= (float10)(float)fVar1)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00af0940 */
byte F_00af0940(unsigned int gen_a0)
{
  GEN_ENTER(0xaf0940u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  float10 fVar2;
  
  bVar1 = F_00afef80(param_1,((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x8)));
  if ((bVar1 != 0) && (!((*(float *)(gen_frame + 0x4)) <= 0.0))) {
    fVar2 = F_00aeb3f0((uint)((undefined1 *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x1c)) = (float)fVar2;
    if (!((float10)REFG(float, 0x1339ba0) <= (float10)(float)fVar2)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00af09b0 */
byte F_00af09b0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xaf09b0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  undefined4 * puVar2;
  
  if ((GEN_ISNAN(param_6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(param_6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_6 == *(float *)&REFG(undefined, 0x1088114))) {
    (*(uint *)(gen_frame + 0x78)) = 0;
    do {
      if ((*(uint *)(gen_frame + 0x78)) == 0) {
        (*(undefined4 *)(gen_frame + 0x60)) = 0x2000;
        (*(undefined4 *)(gen_frame + 0x64)) = 0x2000;
        puVar2 = &(*(undefined4 *)(gen_frame + 0x60));
      }
      else {
        (*(undefined4 *)(gen_frame + 0x68)) = 0x2800;
        (*(undefined4 *)(gen_frame + 0x6c)) = 0x2000;
        puVar2 = &(*(undefined4 *)(gen_frame + 0x68));
      }
      (*(float *)(gen_frame + 0x50)) = param_1;
      (*(float *)(gen_frame + 0x54)) = param_2;
      (*(float *)(gen_frame + 0x58)) = param_3;
      (*(float *)(gen_frame + 0x5c)) = param_4;
      if ((GEN_ISNAN(param_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
          ((GEN_ISNAN(param_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_8 == *(float *)&REFG(undefined, 0x1088114))) {
        bVar1 = F_005517f0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),(uint)param_7,param_8,&(*(float *)(gen_frame + 0x50)),
                             param_5,(undefined4)gen_fl2bits(param_6),1,puVar2);
      }
      else {
        bVar1 = F_00551620(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),param_7,&(*(float *)(gen_frame + 0x50)),param_5,
                             param_6,1,puVar2);
      }
      if ((*(uint *)(gen_frame + 0x78)) == 0) {
        if (bVar1 == 0) {
          return 0;
        }
        if (((uint)param_7[0xf] >> 0xb & 1) == 0) break;
        (*(undefined4 *)(gen_frame + 0x20)) = *param_7;
        (*(undefined4 *)(gen_frame + 0x24)) = param_7[1];
        (*(undefined4 *)(gen_frame + 0x28)) = param_7[2];
        (*(undefined4 *)(gen_frame + 0x30)) = param_7[3];
        (*(undefined4 *)(gen_frame + 0x34)) = param_7[4];
        (*(undefined4 *)(gen_frame + 0x38)) = param_7[5];
        (*(undefined4 *)(gen_frame + 0x40)) = param_7[6];
        (*(undefined4 *)(gen_frame + 0x44)) = param_7[7];
        (*(undefined4 *)(gen_frame + 0x48)) = param_7[8];
        (*(undefined4 *)(gen_frame + 0x10)) = param_7[9];
        (*(undefined4 *)(gen_frame + 0x14)) = param_7[10];
        (*(byte *)(gen_frame + 0x7f)) = 0;
        (*(char *)(gen_frame + 0x7e)) = '\x01';
        (*(undefined4 *)(gen_frame + 0x18)) = param_7[0xb];
        F_00ae7ca0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x10)),0);
        (*(undefined4 *)(gen_frame + 0x74)) = (*(undefined4 *)(gen_frame + 0x4));
        (*(undefined4 *)(gen_frame + 0x70)) = param_7[0xf];
        bVar1 = (*(byte *)(gen_frame + 0x7f));
      }
      else if ((*(char *)(gen_frame + 0x7e)) != '\0') {
        *(char *)((int)param_7 + 0x82) = (*(char *)(gen_frame + 0x7e));
        param_7[0x21] = (*(undefined4 *)(gen_frame + 0x74));
        param_7[0x22] = (*(undefined4 *)(gen_frame + 0x70));
      }
      (*(uint *)(gen_frame + 0x78)) = (*(uint *)(gen_frame + 0x78)) + 1;
    } while ((*(uint *)(gen_frame + 0x78)) < 2);
    if (bVar1 != 0) {
      *(undefined1 *)((int)param_7 + 0x62) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00af1c50 */
float10 F_00af1c50(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaf1c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm7 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  float fVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  
  iVar2 = *(int *)(param_5 + 0x50);
  local_c = REFG(float, 0x1087f04);
  local_8 = 0.0;
  if (((iVar2 != 3) && (iVar2 != 7)) && ((iVar2 == 4 || ((iVar2 == 8 || (param_4 < 0.0)))))) {
    local_c = REFG(float, 0x10ebbf0);
  }
  if (*(char *)(param_5 + 0x3d) != '\0') {
    return (float10)param_4;
  }
  fVar1 = *(float *)(param_5 + 0x28);
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
    fVar4 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)fVar1;
  }
  else {
    fVar1 = *(float *)(param_5 + 0x30);
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
      iVar2 = *(int *)(param_5 + 0x38);
      if (iVar2 != 1) {
        if ((((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
              ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) && (2 < iVar2)) &&
           ((iVar2 < 6 && (0.0 <= *(float *)(in_ecx + 0x1b0))))) {
          fVar1 = *(float *)(in_ecx + 0x1bc);
          fVar4 = F_00aeb260(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x1c0) - (float10)fVar1))));
          param_4 = (float)fVar4;
          if ((float10)local_c * (float10)param_4 < (float10)0) {
            fVar4 = (float10)(float)((float10)param_4 * (float10)REFG(double, 0x1094890));
            fVar5 = ((float10)*(double *)&REFG(undefined, 0x1080228) - (float10)((float)GEN_TOF(ABS(fVar4)))) *
                    (float10)local_c;
            param_4 = ((float)GEN_TOF(((fVar5 + fVar5) + fVar4)));
          }
          fVar4 = F_0054e630(in_ecx + 0x16c,*(float *)(in_ecx + 0x1b0),1);
          fVar4 = F_00aeb260((float)((float10)(float)fVar4 * (float10)param_4 + (float10)fVar1));
          fVar4 = F_00aeb260(((float)GEN_TOF(((float10)(float)fVar4 -
                                      (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0xb0)))))));
          return (float10)(float)fVar4;
        }
        goto LAB_00af1e81;
      }
      fVar4 = F_00ae8460(fVar1,0.0,in_xmm3,in_xmm7,param_4,*(float *)(in_ecx + 0x1d4),
                           *(float *)(in_ecx + 0x80),fVar1);
      fVar4 = (float10)((float)GEN_TOF(ABS(fVar4)));
    }
    else {
      if (((*(int *)(in_ecx + 0x10) == 0) ||
          (bVar3 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar3 == 0)) || (REFG(char, 0x14c0a65) == '\0'))
      goto LAB_00af1e81;
      fVar4 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)*(float *)&REFG(undefined, 0x14c0a80);
    }
  }
  local_8 = (float)fVar4;
  if ((GEN_ISNAN(local_c) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
      ((GEN_ISNAN(local_c) || GEN_ISNAN(REFG(float, 0x1087f04))) || local_c == REFG(float, 0x1087f04))) {
    local_8 = (float)((float10)local_c * (float10)local_8);
  }
LAB_00af1e81: ;
  return (float10)local_8;
}

/* ref: FUN_00af1e90 */
uint F_00af1e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaf1e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined4 * puVar4;
  uint uVar5;
  char * pcVar6;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar2 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar2);
    if (((((bVar2 != 0) && (REFG(char, 0x14c0a40) != '\0')) && (*(char *)((int)this + 0x420) != '\0')) &&
        (((*((byte *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x10) + 0x8e))) & 0x40) == 0 ||
         ((*(int *)((int)this + 0x204) != 0 && (*(char *)((int)this + 0x24a) == '\0')))))) &&
       (REFG(char, 0x14a7383) == '\0')) {
      puVar4 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
      (*(undefined4 *)(gen_frame + 0x10)) = *puVar4;
      uVar5 = F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(uVar5 + 4);
      uVar5 = F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(uVar5 + 8);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0)));
      ((byte *)(gen_frame + 0x4))[4] = (byte)REFG(float, 0x14c0b20);
      ((byte *)(gen_frame + 0x4))[5] = (*(undefined1 *)((char *)&REFG(float, 0x14c0b20) + 1));
      ((byte *)(gen_frame + 0x4))[6] = (*(undefined1 *)((char *)&REFG(float, 0x14c0b20) + 2));
      ((byte *)(gen_frame + 0x4))[7] = (*(undefined1 *)((char *)&REFG(float, 0x14c0b20) + 3));
      bVar2 = F_00aec930(this);
      ((byte *)(gen_frame + 0x4))[8] = bVar2 | (byte)param_1;
      bVar3 = 0;
      if (*(char *)((int)this + 0x359) != '\0') {
        bVar3 = 8;
      }
      ((byte *)(gen_frame + 0x4))[9] = bVar3 | (byte)param_2;
      ((byte *)(gen_frame + 0x4))[10] = 0;
      ((byte *)(gen_frame + 0x4))[10] = 0;
      if (param_3 == 1) {
        piVar1 = *(int * PTR32 *)((int)this + 0x10);
        uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1);
        if (uVar5 != 0) {
          pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1)));
          if (*pcVar6 != '\0') {
            param_3 = 0;
            goto LAB_00af1f8c;
          }
        }
        REFG(undefined4, 0x14c0cd0) = ((byte *)(gen_frame + 0x4))[8];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cd0) + 0)) = ((byte *)(gen_frame + 0x4))[9];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cd0) + 1)) = ((byte *)(gen_frame + 0x4))[10];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cd0) + 2)) = ((byte *)(gen_frame + 0x4))[0xb];
        REFG(undefined4, 0x14c0cc8) = ((byte *)(gen_frame + 0x4))[0];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cc8) + 0)) = ((byte *)(gen_frame + 0x4))[1];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cc8) + 1)) = ((byte *)(gen_frame + 0x4))[2];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cc8) + 2)) = ((byte *)(gen_frame + 0x4))[3];
        REFG(undefined4, 0x14c0ccc) = ((byte *)(gen_frame + 0x4))[4];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0ccc) + 0)) = ((byte *)(gen_frame + 0x4))[5];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0ccc) + 1)) = ((byte *)(gen_frame + 0x4))[6];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0ccc) + 2)) = ((byte *)(gen_frame + 0x4))[7];
        *(undefined4 *)&REFG(undefined, 0x14c0cdc) = (*(undefined4 *)(gen_frame + 0x18));
        *(undefined4 *)&REFG(undefined, 0x14c0cd4) = (*(undefined4 *)(gen_frame + 0x10));
        *(undefined4 *)&REFG(undefined, 0x14c0cd8) = (*(undefined4 *)(gen_frame + 0x14));
        REFG(undefined1, 0x14c0ce4) = 1;
        return CONCAT31((int3)((uint)(*(undefined4 *)(gen_frame + 0x18)) >> 8),1);
      }
LAB_00af1f8c: ;
      uVar5 = F_00ae8330(((byte *)(gen_frame + 0x4)),param_3);
      return uVar5;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00af1ff0 */
uint F_00af1ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf1ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00af1e90(this,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_00af2010 */
uint F_00af2010(void)
{
  GEN_ENTER(0xaf2010u, 0u, 0u, 0u, 0u);
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined * this;
  undefined4 uVar4;
  
  REFG(undefined1, 0x14c0a69) = 0;
  if (REFG(char, 0x14c0a67) != '\0') {
    uVar2 = F_00b6afa0();
    in_EAX = 0;
    if (uVar2 != 0) {
      bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      in_EAX = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar2 = CONCAT31(extraout_var,1);
        goto LAB_00af203e;
      }
    }
  }
  uVar2 = in_EAX & 0xffffff00;
LAB_00af203e: ;
  REFG(char, 0x14c0a67) = (char)uVar2;
  if (REFG(char, 0x14c0a67) != '\0') {
    REFG(char, 0x14c0a67) = '\0';
  }
  if (REFG(char, 0x14c0a68) != '\0') {
    REFG(char, 0x14c0a68) = '\0';
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x35;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
    uVar2 = F_0046a630(this,uVar4);
  }
  REFG(undefined4, 0x14c0cc5) = 0;
  REFG(undefined1, 0x14c0a6a) = 0;
  return uVar2;
}

/* ref: FUN_00af2090 */
unsigned int F_00af2090(void)
{
  GEN_ENTER(0xaf2090u, 0u, 0u, 0u, 0u);
  if (REFG(char, 0x14c0ce4) != '\0') {
    F_00aebe30(REFG(undefined4, 0x14c0a60),&REFG(undefined, 0x14c0cc8),1);
  }
  return 0;
}

/* ref: FUN_00af20c0 */
uint F_00af20c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaf20c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00af0770(param_1 + 0x310,param_2);
  return uVar1;
}

/* ref: FUN_00af2210 */
float10 F_00af2210(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaf2210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST1;
  float local_8;
  
  fVar3 = (float10)param_2;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1080228);
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  local_8 = 0.0;
  if (*(int *)(param_1 + 0x204) != 0) {
    if ((float10)((float)GEN_TOF(ABS(fVar3))) < (float10)(float)((float10)*(float *)&REFG(undefined, 0x1339b50) * fVar4)) {
      uVar2 = 4;
    }
    else if ((float10)((float)GEN_TOF(ABS(fVar3))) < (float10)(float)((float10)*(float *)&REFG(undefined, 0x1339b54) * fVar4)
            ) {
      if (0.0 < param_2) {
        uVar2 = 5;
      }
      else {
        uVar2 = 6;
      }
    }
    else {
      uVar2 = 7;
    }
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 4: ;
    fVar4 = (float10)*(float *)&REFG(undefined, 0x1339b50) * fVar4;
    if ((float10)(float)fVar4 < (float10)((float)GEN_TOF(ABS(fVar3)))) {
      if (0.0 < param_2) {
        local_8 = (float)(fVar4 * (float10)REFG(float, 0x1087f04));
      }
      else {
        local_8 = (float)(fVar4 * (float10)REFG(float, 0x10ebbf0));
      }
    }
    else {
      local_8 = param_2;
    }
    break;
  case 5: ;
    if (0.0 < param_2) {
      fVar4 = F_00aeb260((float)(fVar3 - (float10)*(double *)&REFG(undefined, 0x1094620)));
      local_8 = (float)fVar4;
    }
    break;
  case 6: ;
    if (param_2 < 0.0) {
      fVar4 = F_00aeb260((float)(fVar3 + (float10)*(double *)&REFG(undefined, 0x1094620)));
      local_8 = (float)fVar4;
    }
    break;
  case 7: ;
    if (!((double)((float)GEN_TOF(ABS(fVar3))) < *(double *)&REFG(undefined, 0x1094620))) {
      fVar5 = (float10)*(float *)&REFG(undefined, 0x1339b54) * fVar4;
      if ((double)((float)GEN_TOF(ABS(fVar3))) < (double)(float)fVar5) {
        if (0.0 < param_2) {
          fVar3 = (float10)(float)((float10)REFG(float, 0x1087f04) * fVar5);
        }
        else {
          fVar3 = (float10)(float)((float10)REFG(float, 0x10ebbf0) * fVar5);
        }
      }
      fVar4 = F_00aeb260((float)(fVar3 - fVar4));
      local_8 = (float)fVar4;
    }
  }
  fVar4 = F_00aeb260(((float)GEN_TOF(((float10)local_8 -
                              (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xe0)))))));
  *(float *)(param_1 + 0x448) = local_8;
  fVar1 = REFG(float, 0x1087f04);
  *(float *)(param_1 + 0x44c) = (float)fVar4;
  *(float *)(param_1 + 0x450) = fVar1;
  return extraout_ST1;
}

/* ref: FUN_00af2460 */
uint F_00af2460(unsigned int gen_a0)
{
  GEN_ENTER(0xaf2460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  int in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined2 uVar7;
  uint uVar6;
  bool bVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_c;
  
  if (*(int *)((int)this + 0x10) == 0) {
LAB_00af24af: ;
    if (*(int *)((int)this + 0x10) != 0) {
      bVar5 = F_00a9f620(*(int *)((int)this + 0x10));
      in_EAX = CONCAT31(extraout_var_00,bVar5);
      if ((bVar5 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00af2515;
    }
    if (*(char *)((int)this + 0x1cc) != '\0') goto LAB_00af2515;
  }
  else {
    bVar5 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar5);
    if (bVar5 == 0) goto LAB_00af24af;
    fVar1 = *(float *)((int)this + 0x450);
    in_EAX = CONCAT22((short)((uint3)extraout_var >> 8),(ushort)bVar5);
    if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) ||
       ((in_EAX = *(int *)((int)this + 0x204), in_EAX != 0 &&
        (((in_EAX == 3 || (in_EAX == 4)) || (in_EAX == 2)))))) goto LAB_00af2515;
  }
  iVar4 = *(int *)((int)this + 0x10);
  fVar1 = *(float *)(iVar4 + 0xe0);
  uVar7 = (undefined2)((uint)iVar4 >> 0x10);
  in_EAX = CONCAT22(uVar7,(ushort)(byte)iVar4);
  if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) &&
     (fVar2 = *(float *)((int)this + 0x448), in_EAX = CONCAT22(uVar7,(ushort)(byte)iVar4),
     GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0))) {
    *(uint *)((int)this + 0x44c) = (uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0);
    *(undefined4 *)((int)this + 0x448) = 0;
  }
LAB_00af2515: ;
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  fVar2 = *(float *)((int)this + 0x448);
  fVar10 = (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe0)));
  fVar3 = (float)((float10)fVar2 - fVar10);
  fVar12 = (float10)0;
  fVar11 = (float10)fVar3;
  bVar8 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar12);
  bVar9 = bVar8 || fVar11 == fVar12;
  bVar5 = bVar9 << 6 | bVar8 << 2 | 2U | !(fVar12 <= fVar11);
  if (bVar8 == bVar9) {
    bVar8 = GEN_ISNAN(fVar1);
    bVar9 = bVar8 || fVar1 == 0.0;
    bVar5 = bVar9 << 6 | bVar8 << 2 | 2U | !(0.0 <= fVar1);
    if (bVar8 == bVar9) {
      local_c = ((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 /
                                                            (float10)*(double *)&REFG(undefined, 0x10ec498)) *
                                           (float10)*(float *)((int)this + 0x44c)))))));
      if (!GEN_ISNAN(fVar3) && !(0.0 <= fVar3)) {
        local_c = (float)((float10)local_c * (float10)REFG(double, 0x1094890));
      }
      fVar12 = F_00aeb260((float)(fVar10 + (float10)local_c));
      fVar12 = (float10)(float)fVar12;
      if (((0.0 < fVar3) && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN((float10)fVar2)) && !(fVar12 <= (float10)fVar2)))
         || ((fVar3 < 0.0 && (fVar12 < (float10)fVar2)))) {
        fVar12 = (float10)fVar2;
      }
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x18))))
                        ((undefined4)gen_fl2bits((float)fVar12));
      return uVar6;
    }
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar5,(char)in_EAX));
}

/* ref: FUN_00af2610 */
uint F_00af2610(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaf2610u, gen_a0, 0u, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined4 param_14 = (undefined4)gen_a13;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00af0bb0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12,param_13,param_14);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00af2660 */
byte F_00af2660(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaf2660u, gen_a0, 0u, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  bVar1 = F_00af0bb0(param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x4)),REFG(float, 0x10ebbf0),param_4,&(*(undefined1 *)(gen_frame + 0xb)),0,0,0,0,0,3,0);
  return bVar1 != 0;
}

/* ref: FUN_00af26b0 */
byte F_00af26b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xaf26b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  float10 fVar4;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(float *)(gen_frame + 0xd8)) = *param_1;
  (*(float *)(gen_frame + 0xd4)) = param_1[1];
  (*(float *)(gen_frame + 0xdc)) = param_1[2];
  (*(float *)(gen_frame + 0x9c)) = (*(float *)(gen_frame + 0xd8));
  (*(float *)(gen_frame + 0xb0)) = (float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0xd8)));
  (*(float *)(gen_frame + 0xa4)) = (*(float *)(gen_frame + 0xd8));
  (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0xb0));
  (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0xd4));
  (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0xdc));
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)param_2[1] - (float10)(*(float *)(gen_frame + 0xd4)));
  (*(float *)(gen_frame + 0xc4)) = (*(float *)(gen_frame + 0xb4));
  (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0xd4));
  (*(float *)(gen_frame + 0xac)) = (*(float *)(gen_frame + 0xdc));
  (*(float *)(gen_frame + 0xb8)) = (float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0xdc)));
  ((float *)(gen_frame + 0xc8))[0] = (*(float *)(gen_frame + 0xb8));
  (*(float *)(gen_frame + 0xd8)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xb8)) * (float10)(*(float *)(gen_frame + 0xb8)) +
                    ((float10)(*(float *)(gen_frame + 0xb4)) * (float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0xb0)) * (float10)(*(float *)(gen_frame + 0xb0))))))
  ;
  (*(float *)(gen_frame + 0xd8)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0xd8)))));
  F_004bd580(&(*(float *)(gen_frame + 0xc0)));
  (*(float *)(gen_frame + 0xb4)) = (*(float *)(gen_frame + 0xc0));
  (*(float *)(gen_frame + 0xb8)) = (*(float *)(gen_frame + 0xc4));
  (*(float *)(gen_frame + 0xbc)) = ((float *)(gen_frame + 0xc8))[0];
  (*(float *)(gen_frame + 0xdc)) = 0.0;
  (*(float *)(gen_frame + 0xd4)) = 0.0;
  if (GEN_ISNAN(param_4) == (GEN_ISNAN(param_4) || param_4 == 0.0)) {
    bVar1 = true;
    if (0.0 < REFG(float, 0x1339b58)) {
      (*(float *)(gen_frame + 0xdc)) = (float)((float10)REFG(float, 0x1339b58) + (float10)*(double *)&REFG(undefined, 0x108bec8));
    }
  }
  else {
    bVar1 = false;
    if (0.0 < REFG(float, 0x1339b5c)) {
      (*(float *)(gen_frame + 0xdc)) = (float)((float10)REFG(float, 0x1339b5c) + (float10)0);
    }
    fVar4 = (float10)*(double *)&REFG(undefined, 0x109ce00);
    (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0x9c)) - (float10)(*(float *)(gen_frame + 0xc0)) * fVar4);
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0xa0)) - (float10)(*(float *)(gen_frame + 0xc4)) * fVar4);
    (*(float *)(gen_frame + 0xac)) = (float)((float10)(*(float *)(gen_frame + 0x98)) - (float10)((float *)(gen_frame + 0xc8))[0] * fVar4);
    (*(float *)(gen_frame + 0xd4)) = (float)(fVar4 + (float10)0);
  }
  (*(float *)(gen_frame + 0xdc)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xdc)) + (float10)(*(float *)(gen_frame + 0xd8))) + (float10)(*(float *)(gen_frame + 0xd4)))));
  if (GEN_ISNAN(param_8) == (GEN_ISNAN(param_8) || param_8 == 0.0)) {
    (*(float *)(gen_frame + 0xdc)) = (float)((float10)(*(float *)(gen_frame + 0xdc)) + (float10)param_8);
  }
  if (bVar1) {
    bVar2 = F_00af09b0((*(float *)(gen_frame + 0xa4)),(*(float *)(gen_frame + 0xa8)),(*(float *)(gen_frame + 0xac)),param_4,&(*(float *)(gen_frame + 0xb4)),(*(float *)(gen_frame + 0xdc)),&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  }
  else {
    bVar2 = F_00aeb520(&(*(float *)(gen_frame + 0xa4)),&(*(float *)(gen_frame + 0xb4)),(*(float *)(gen_frame + 0xdc)),&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  }
  if ((bVar2 != 0) && (!((float10)(*(float *)(gen_frame + 0xd4)) + (float10)(*(float *)(gen_frame + 0xd8)) < (float10)(*(float *)(gen_frame + 0x40))))) {
    bVar2 = F_00afef80(&(*(undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc0)),&(*(float *)(gen_frame + 0xc4)),((float *)(gen_frame + 0xc8)));
    if (bVar2 == 0) {
      uVar3 = 0;
    }
    else {
      if (param_5 != (float *)0x0) {
        *param_5 = (*(float *)(gen_frame + 0xc0));
        param_5[1] = (*(float *)(gen_frame + 0xc4));
        param_5[2] = ((float *)(gen_frame + 0xc8))[0];
      }
      uVar3 = 1;
    }
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = uVar3;
    }
    if (param_7 != (undefined *)0x0) {
      F_00affb20(param_7,&(*(undefined4 *)(gen_frame + 0x0)));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00af2a00 */
byte F_00af2a00(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xaf2a00u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float10 fVar1;
  byte bVar2;
  float10 fVar3;
  
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_4 + (float10)REFG(float, 0x1339ba4));
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*param_2 + fVar1);
  fVar3 = (float10)(float)((float10)param_4 + (float10)REFG(float, 0x1339ba4));
  (*(float *)(gen_frame + 0x24)) = (float)(fVar3 + (float10)param_2[1]);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)param_2[2] + fVar1);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_2 + fVar1);
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)param_2[2] + fVar1);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*param_1 + fVar1);
  (*(float *)(gen_frame + 0x24)) = (float)(fVar3 + (float10)param_1[1]);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar1 + (float10)param_1[2]);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*param_1 + fVar1);
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar1 + (float10)param_1[2]);
  bVar2 = F_00af26b0(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),param_3,param_4,param_5,param_6,param_7,param_8);
  return bVar2;
}

/* ref: FUN_00af2ad0 */
unsigned int F_00af2ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xaf2ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    *(undefined1 *)((int)this + 0x155) = *(undefined1 *)((int)this + 0x154);
    *(undefined1 *)((int)this + 0x154) = 0;
    if ((((*(char *)((int)this + 0x1a) != '\0') || (*(char *)((int)this + 0x29) != '\0')) ||
        (*(char *)(iVar1 + 0x1cc) != '\0')) || (*(char *)(iVar1 + 0x1cd) != '\0')) {
      if ((*(char *)((int)this + 0x14) != '\0') && (*(char *)(iVar1 + 100) == '\0')) {
        F_00affeb0(this);
      }
      if ((*(char *)((int)this + 0x15) != '\0') && (*(char *)(iVar1 + 0x65) == '\0')) {
        F_00affe40(this);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00af2b40 */
unsigned int F_00af2b40(unsigned int gen_a0)
{
  GEN_ENTER(0xaf2b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  longlong lVar1;
  float fVar2;
  ulonglong uVar3;
  
  if (*(char *)((int)this + 0x294) != '\0') {
    if (0.0 < *(float *)((int)this + 0x290)) {
      fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x290) -
                     (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
      if ((float10)fVar2 < (float10)0) {
        fVar2 = 0.0;
      }
      *(float *)((int)this + 0x290) = fVar2;
    }
    fVar2 = *(float *)((int)this + 0x290);
    if (GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0)) {
      lVar1 = *(longlong *)((int)this + 0x298);
      uVar3 = F_00427d90();
      lVar1 = uVar3 - lVar1;
      if ((((int)((ulonglong)lVar1 >> 0x20) != 0) || (100 < (uint)lVar1)) &&
         (*(char *)((int)this + 0x294) != '\0')) {
        F_00aebe30(*(undefined * PTR32 *)((int)this + 0x10),(int)this + 0x278,1);
      }
    }
  }
  return 0;
}

/* ref: FUN_00af2bf0 */
unsigned int F_00af2bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf2bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  iVar2 = REFG(int, 0x1375b90);
  if (REFG(int, 0x1375bbc) != 0) {
    *(undefined1 *)((int)this + 0x271) = 0;
    return 0;
  }
  if (REFG(int, 0x1375b90) == 0) {
    *(undefined1 *)((int)this + 0x271) = 0;
    return 0;
  }
  if ((((REFG(int, 0x137104c) == 0) ||
       (uVar6 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf), *(int *)(uVar6 + 0x14) == 0
       )) || ((REFG(int, 0x1375bbc) == 0 && ((REFG(int, 0x1375b90) != 0 && (*(int *)(REFG(int, 0x1375b90) + 0xe0) == 0))))))
     || (*(char *)((int)this + 0x17) != '\0')) {
    if (*(int *)(iVar2 + 0x14c) != 1) {
      *(undefined4 *)(iVar2 + 0x14c) = 1;
    }
  }
  else if (*(int *)(iVar2 + 0x14c) != 0) {
    *(undefined4 *)(iVar2 + 0x14c) = 0;
  }
  bVar3 = 0;
  if (((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) && (*(int *)(REFG(int, 0x1375b90) + 0xe0) == 0)) {
    bVar3 = *(byte *)((int)this + 0x271) | (byte)param_1;
  }
  *(byte *)(iVar2 + 0x151) = bVar3;
  bVar5 = 0;
  bVar3 = bVar5;
  if (((REFG(int, 0x1375bbc) != 0) || (REFG(int, 0x1375b90) == 0)) || (*(int *)(REFG(int, 0x1375b90) + 0xe0) != 0)) {
    bVar4 = F_00aee1c0(this);
    if (bVar4 == 0) {
      bVar5 = F_00ae8680(*(undefined4 *)((int)this + 0x10));
      if (((bVar5 != 0) &&
          ((bVar5 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar5 == 0 || (uVar6 = F_00b6afa0(), uVar6 == 0))
          )) && (*(char *)((int)this + 0x1a) == '\0')) {
        *(undefined4 *)(iVar2 + 0x14c) = 1;
        bVar3 = 1;
      }
    }
    else {
      bVar1 = false;
      if ((*(int *)((int)this + 0x164) == 0) &&
         (bVar4 = F_00ae8630(*(undefined4 *)((int)this + 0x10)), bVar4 != 0)) {
        bVar1 = true;
      }
      if ((((*(char *)((int)this + 0x17) != '\0') && (REFG(int, 0x137104c) != 0)) &&
          (uVar6 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf),
          *(int *)(uVar6 + 0x14) != 0)) && (*(char *)((int)this + 0x173) != '\0')) {
        bVar1 = true;
      }
      if ((*(char *)((int)this + 0x19) != '\0') || (bVar1)) {
        *(undefined4 *)(iVar2 + 0x14c) = 0;
      }
      else {
        bVar4 = F_005374c0(&REFG(undefined4, 0x1375bc0));
        bVar3 = (byte)param_1;
        if (((bVar4 != 0) && (uVar6 = F_00b6afa0(), uVar6 != 0)) &&
           (bVar3 = bVar5, *(int *)(iVar2 + 0x14c) != 0)) {
          *(undefined4 *)(iVar2 + 0x14c) = 0;
        }
      }
    }
  }
  if (*(int *)((int)this + 0x150) == 0) goto switchD_00af2db2_default;
  switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x150))) {
  case 1: ;
    *(undefined4 *)(iVar2 + 0x14c) = 0;
    bVar3 = 1;
    break;
  case 2: ;
    *(undefined4 *)(iVar2 + 0x14c) = 0;
    goto LAB_00af2de3;
  case 3: ;
    *(undefined4 *)(iVar2 + 0x14c) = 1;
    bVar3 = 1;
    break;
  case 4: ;
    *(undefined4 *)(iVar2 + 0x14c) = 1;
LAB_00af2de3: ;
    bVar3 = 0;
  }
switchD_00af2db2_default: ;
  *(byte *)(iVar2 + 0x150) = bVar3;
  *(undefined1 *)((int)this + 0x271) = 0;
  return 0;
}

/* ref: FUN_00af2e30 */
byte F_00af2e30(unsigned int gen_a0)
{
  GEN_ENTER(0xaf2e30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if ((((REFG(int, 0x137104c) != 0) &&
       (uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf), *(int *)(uVar1 + 0x14) != 0
       )) && ((REFG(int, 0x1375bbc) != 0 || ((REFG(int, 0x1375b90) == 0 || (*(int *)(REFG(int, 0x1375b90) + 0xe0) != 0))))))
     && (*(char *)(in_ecx + 0x17) == '\0')) {
    return REFG(undefined1, 0x1379689);
  }
  return 1;
}

/* ref: FUN_00af2e80 */
float10 F_00af2e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf2e80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  float10 fVar5;
  float local_8;
  
  cVar4 = *(char *)(param_1 + 0x171);
  local_8 = 0.0;
  if (param_3 != 0) {
    cVar4 = *(char *)param_3;
  }
  bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar2 != 0) {
    uVar3 = F_00b6afa0();
    if (uVar3 != 0) {
      return (float10)*(float *)(param_1 + 0x68);
    }
  }
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0x17) != '\0') {
      return (float10)*(float *)(param_1 + 100);
    }
    bVar2 = F_00aee1c0(param_1);
    if (bVar2 != 0) {
      fVar1 = *(float *)(param_1 + 0x60);
      uVar3 = F_00ae9840();
      fVar5 = (float10)(int)(uVar3 + 100);
      if ((int)(uVar3 + 100) < 0) {
        fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      return (float10)((float)GEN_TOF(((float10)(float)(fVar5 / (float10)*(double *)&REFG(undefined, 0x1088118)) *
                             (float10)fVar1)));
    }
    uVar3 = F_00aed240();
    if (uVar3 != 1) goto LAB_00af2f41;
  }
  local_8 = *(float *)(param_1 + 0x5c);
LAB_00af2f41: ;
  return (float10)local_8;
}

/* ref: FUN_00af3450 */
byte F_00af3450(unsigned int gen_a0)
{
  GEN_ENTER(0xaf3450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (((bVar1 != 0) && (uVar2 = F_00b6afa0(), uVar2 != 0)) &&
     (*(char *)((int)this + 0xb0) != '\0')) {
    return 1;
  }
  if ((((REFG(int, 0x137104c) != 0) &&
       (uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf), *(int *)(uVar2 + 0x14) != 0
       )) && ((REFG(int, 0x1375bbc) != 0 || ((REFG(int, 0x1375b90) == 0 || (*(int *)(REFG(int, 0x1375b90) + 0xe0) != 0))))))
     && (*(char *)((int)this + 0x17) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00af3740 */
uint F_00af3740(unsigned int gen_a0)
{
  GEN_ENTER(0xaf3740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  double dVar3;
  byte bVar4;
  undefined3 extraout_var = 0;
  undefined * this_00;
  float * pfVar5;
  uint uVar6;
  
  bVar4 = F_00aeddc0(this);
  pfVar5 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
  if (bVar4 == 0) {
    pfVar5 = *(float * PTR32 *)((int)this + 0xa0);
    if (pfVar5 != (float *)0xe0000000) {
      this_00 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),pfVar5,*(undefined4 *)((int)this + 0xa4));
      pfVar5 = (float *)0x0;
      if (this_00 != (undefined *)0x0) {
        pfVar5 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
        fVar1 = *pfVar5;
        fVar2 = pfVar5[2];
        pfVar5 = (float *)F_00a5feb0(this_00);
        dVar3 = (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar5 -
                                                                     (float10)fVar1) *
                                                     (float10)(float)((float10)*pfVar5 -
                                                                     (float10)fVar1) +
                                                    (float10)(float)((float10)pfVar5[2] -
                                                                    (float10)fVar2) *
                                                    (float10)(float)((float10)pfVar5[2] -
                                                                    (float10)fVar2)))))));
        if ((!GEN_ISNAN(dVar3) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x1090718))) && !(dVar3 <= *(double *)&REFG(undefined, 0x1090718)))
        goto LAB_00af3794;
        goto LAB_00af37f8;
      }
    }
    if (*(char *)((int)this + 0x260) != '\0') {
LAB_00af37f8: ;
      uVar6 = F_00af34c0(this);
      return uVar6;
    }
  }
LAB_00af3794: ;
  return CONCAT31((int3)((uint)((int)(uintptr_t)pfVar5) >> 8),1);
}

/* ref: FUN_00af3810 */
unsigned int F_00af3810(unsigned int gen_a0)
{
  GEN_ENTER(0xaf3810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  undefined4 uVar6;
  
  iVar1 = *(int *)((int)this + 0x10);
  if ((((*(char *)((int)this + 0x17) != '\0') || (*(char *)((int)this + 0x18) != '\0')) ||
      (*(char *)((int)this + 0x19) != '\0')) || (*(char *)((int)this + 0x1a) != '\0')) {
    pvVar3 = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
    if ((*(char *)((int)this + 0x19) != '\0') && (bVar2 = F_00aeddc0(this), bVar2 != 0)) {
      *(undefined1 *)((int)this + 0x19) = 0;
    }
    if ((*(char *)((int)this + 0x17) != '\0') && (uVar4 = F_00af34c0(this), (char)uVar4 != '\0'))
    {
      *(undefined1 *)((int)this + 0x17) = 0;
    }
    if ((*(char *)((int)this + 0x18) != '\0') && (uVar4 = F_00af3740(this), (char)uVar4 != '\0'))
    {
      *(undefined1 *)((int)this + 0x18) = 0;
      piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar6 = 0x35;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
      F_0046a630(this_00,uVar6);
    }
    bVar2 = F_00431c10(pvVar3);
    if (bVar2 == 0) {
      pvVar3 = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
      bVar2 = F_00a34b70(pvVar3,0x118);
      if ((bVar2 == 0) && (REFG(int, 0x1375b64) != 3)) {
        *(undefined1 *)((int)this + 0x275) = 1;
      }
    }
  }
  if (((((*(char *)((int)this + 0x17) != '\0') || (*(char *)((int)this + 0x18) != '\0')) ||
       (*(char *)((int)this + 0x19) != '\0')) || (*(char *)((int)this + 0x1a) != '\0')) &&
     (*(char *)(iVar1 + 100) == '\0')) {
    if (*(char *)((int)this + 0x19) != '\0') {
      *(undefined1 *)((int)this + 0x19) = 0;
      return 0;
    }
    if ((*(char *)((int)this + 0x1a) != '\0') && (*(char *)(iVar1 + 0x65) == '\0')) {
      *(undefined1 *)((int)this + 0x1a) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00af39f0 */
uint F_00af39f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf39f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX = 0;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  int iVar6;
  float10 fVar7;
  
  iVar6 = *(int *)((int)this + 0x10) + 0x20;
  (*(int *)(gen_frame + 0x28)) = iVar6;
  if (*(char *)((int)this + 0x14) == '\0') {
    return in_EAX & 0xffffff00;
  }
  (*(byte *)(gen_frame + 0x2f)) = 0;
  if ((((*(char *)((int)this + 0x170) != '\0') &&
       (*(undefined1 *)((int)this + 0x170) = 0, *(char *)((int)this + 0x1a) == '\0')) &&
      (bVar2 = F_00aedd50(this), bVar2 != 0)) &&
     (((*(byte *)(gen_frame + 0x2f)) = 1, *(char *)((int)this + 0x18) != '\0' && (bVar2 = F_00aee0e0(this), bVar2 == 0)
      ))) {
    (*(byte *)(gen_frame + 0x2f)) = bVar2;
  }
  if (((((*(char *)((int)this + 0x17) != '\0') && (uVar4 = F_00b6afa0(), uVar4 != 0)) &&
       (bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar2 != 0)) ||
      ((*(char *)((int)this + 0x18) == '\0' &&
       ((*(char *)((int)this + 0x19) != '\0' || (*(char *)((int)this + 0x1a) != '\0')))))) &&
     ((*(char *)((int)this + 0x18) == '\0' &&
      ((*(char *)((int)this + 0x1a) == '\0' || (*(char *)((int)this + 0x12a) != '\0')))))) {
    iVar1 = *(int *)((int)this + 0x10);
    iVar6 = *(int *)(iVar1 + 0x10);
    if ((((iVar6 != 0) && ((bVar2 = F_00a9f620(iVar6), bVar2 != 0 && (REFG(char, 0x14c0a64) != '\0')))) ||
        (iVar6 = (*(int *)(gen_frame + 0x28)), *(char *)(iVar1 + 0x1cc) != '\0')) &&
       (bVar2 = F_00ae8680(*(undefined4 *)((int)this + 0x10)), iVar6 = (*(int *)(gen_frame + 0x28)), bVar2 == 0)) {
      uVar4 = F_00ae9430(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x0)));
      F_0046f4a0(((float *)(gen_frame + 0x10)),(int)this + 0xc0,uVar4);
      fVar7 = F_00aeb3c0(((float *)(gen_frame + 0x10))[0],(*(float *)(gen_frame + 0x18)));
      (*(float *)(gen_frame + 0x24)) = (float)fVar7;
      if (*(char *)((*(int *)(gen_frame + 0x28)) + 0x45) == '\0') {
        (*(float *)(gen_frame + 0x20)) = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xb0)));
        (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x20)));
        fVar7 = F_00aeb260((*(float *)(gen_frame + 0x20)));
        (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(ABS(fVar7)));
      }
      else {
        (*(float *)(gen_frame + 0x20)) = *(float *)((*(int *)(gen_frame + 0x28)) + 0x14);
        (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x24)) - (float10)*(float *)((*(int *)(gen_frame + 0x28)) + 0x14))));
        fVar7 = F_00aeb260((*(float *)(gen_frame + 0x20)));
        (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(ABS(fVar7)));
      }
      (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x20));
      iVar6 = (*(int *)(gen_frame + 0x28));
      if ((!GEN_ISNAN((*(float *)(gen_frame + 0x20))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x10ebd18))) &&
          !((*(float *)(gen_frame + 0x20)) <= *(float *)&REFG(undefined, 0x10ebd18))) {
        (*(byte *)(gen_frame + 0x2f)) = 1;
      }
    }
  }
  bVar3 = F_00aef7c0(this);
  uVar4 = CONCAT31(extraout_var,bVar3);
  bVar2 = 1;
  if (*(int *)(iVar6 + 0x4c) != 7) {
    bVar2 = *(byte *)(iVar6 + 0x1d);
  }
  if (bVar2 == bVar3) {
LAB_00af3bdf: ;
    if (((*(char *)((int)this + 0x1a) != '\0') && (*(char *)((int)this + 300) != '\0')) &&
       (*(char *)((int)this + 0x12a) == '\0')) goto LAB_00af3bfd;
  }
  else {
    if (*(char *)((int)this + 0x17) != '\0') {
      uVar5 = F_00b6afa0();
      uVar4 = 0;
      if (uVar5 == 0) goto LAB_00af3bc9;
      bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      uVar4 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 == 0) goto LAB_00af3bc9;
LAB_00af3bdb: ;
      (*(byte *)(gen_frame + 0x2f)) = 1;
      goto LAB_00af3bdf;
    }
LAB_00af3bc9: ;
    if (((*(char *)((int)this + 0x18) != '\0') || (*(char *)((int)this + 0x19) != '\0')) ||
       (*(char *)((int)this + 0x1a) != '\0')) goto LAB_00af3bdb;
  }
  if ((*(byte *)(gen_frame + 0x2f)) == 0) {
    return uVar4;
  }
LAB_00af3bfd: ;
  *param_1 = 1;
  *param_2 = *(undefined4 *)((int)this + 0xc0);
  param_2[1] = *(undefined4 *)((int)this + 0xc4);
  param_2[2] = *(undefined4 *)((int)this + 200);
  return (uint)param_2;
}

/* ref: FUN_00af3c30 */
float10 F_00af3c30(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaf3c30u, gen_a0, 0u, 0u, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  float10 extraout_ST0;
  
  bVar1 = F_00aef7c0(param_1);
  *(byte *)param_4 = bVar1;
  if ((((*(char *)((int)param_1 + 0x17) == '\0') && (*(char *)((int)param_1 + 0x18) == '\0')) &&
      (*(char *)((int)param_1 + 0x19) == '\0')) &&
     ((*(char *)((int)param_1 + 0x1a) == '\0' && (*(int *)((int)param_1 + 0x164) == 4)))) {
    if ((double)((float)GEN_TOF(SQRT((float10)(float)((float10)param_3 * (float10)param_3 +
                                            (float10)param_2 * (float10)param_2)))) <=
        *(double *)&REFG(undefined, 0x1090b18)) {
      if (*(int *)((int)param_1 + 0x15c) != 0) {
        *(int *)((int)param_1 + 0x15c) = *(int *)((int)param_1 + 0x15c) + -1;
      }
      if (*(int *)((int)param_1 + 0x15c) == 0) {
        *(undefined1 *)param_4 = 1;
        return extraout_ST0;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x15c) = 5;
    }
  }
  return extraout_ST0;
}

/* ref: FUN_00af46b0 */
unsigned int F_00af46b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaf46b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  float10 fVar2;
  
  if ((char)param_2 != '\0') {
    fVar2 = F_00aeb260(*(float *)(param_1 + 0xd0));
    uVar1 = F_00ae9230(*(undefined4 *)(param_1 + 0x10),(float)fVar2,param_4);
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x6c))) = uVar1;
  }
  F_00aef8e0(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00af4710 */
unsigned int F_00af4710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf4710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (((((*(char *)((int)this + 0x14) != '\0') && ((char)param_1 == '\0')) &&
       (bVar3 = GEN_ISNAN(*(float *)((int)this + 0x2c)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
       bVar3 != (bVar3 || *(float *)((int)this + 0x2c) == *(float *)&REFG(undefined, 0x1088114)))) &&
      ((iVar2 = *(int *)(iVar1 + 0x204), iVar2 == 0 ||
       ((((iVar2 != 3 && (iVar2 != 4)) && (iVar2 != 2)) || (*(char *)(iVar1 + 0x24b) != '\0'))))))
     && (*(char *)(iVar1 + 100) == '\0')) {
    F_00affeb0(this);
  }
  if (((*(char *)((int)this + 0x15) != '\0') && ((char)param_2 == '\0')) &&
     (*(char *)(iVar1 + 0x65) == '\0')) {
    F_00affe40(this);
  }
  return 0;
}

/* ref: FUN_00af4790 */
byte F_00af4790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xaf4790u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  (*(int *)(gen_frame + 0xa4)) = param_1;
  bVar1 = F_00a9fc70(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))));
  if (bVar1 == 0) {
    (*(float *)(gen_frame + 0xa0)) = *param_2;
    (*(float *)(gen_frame + 0x90)) = (float)((float10)*param_3 - (float10)(*(float *)(gen_frame + 0xa0)));
    (*(float *)(gen_frame + 0x94)) = (float)((float10)param_3[1] - (float10)param_2[1]);
    (*(float *)(gen_frame + 0x98)) = (float)((float10)param_3[2] - (float10)param_2[2]);
    fVar2 = (float10)(float)((float10)param_3[1] - (float10)param_2[1]);
    fVar3 = (float10)(float)((float10)*param_3 - (float10)(*(float *)(gen_frame + 0xa0)));
    fVar4 = (float10)(float)((float10)param_3[2] - (float10)param_2[2]);
    (*(float *)(gen_frame + 0xa8)) = ((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2))));
    (*(float *)(gen_frame + 0xa8)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0xa8)))));
    if ((float10)(*(float *)(gen_frame + 0xa8)) <= (float10)REFG(float, 0x10ebbe4)) {
      *param_3 = (*(float *)(gen_frame + 0xa0));
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
    }
    else {
      if ((GEN_ISNAN(param_7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN(param_7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || param_7 == REFG(float, 0x10ebbf0))) {
        param_7 = REFG(float, 0x1339ba0);
      }
      (*(undefined2 *)(gen_frame + 0x60)) = 0;
      (*(undefined1 *)(gen_frame + 0x62)) = 0;
      (*(undefined2 *)(gen_frame + 0x80)) = 0;
      (*(undefined1 *)(gen_frame + 0x82)) = 0;
      (*(undefined4 *)(gen_frame + 0x88)) = 0;
      (*(char *)(gen_frame + 0xaf)) = '\0';
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x50)) = 0;
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      (*(undefined4 *)(gen_frame + 0x58)) = 0;
      (*(undefined4 *)(gen_frame + 0x70)) = 0;
      (*(undefined4 *)(gen_frame + 0x74)) = 0;
      (*(undefined4 *)(gen_frame + 0x78)) = 0;
      (*(undefined4 *)(gen_frame + 0x84)) = 0;
      (*(float *)(gen_frame + 0xa8)) = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xa4)) + 0x10) + 0x10))) + 0xc0)));
      bVar1 = F_00af2a00(param_2,param_3,param_7,(*(float *)(gen_frame + 0xa8)),&(*(float *)(gen_frame + 0x90)),&(*(char *)(gen_frame + 0xaf)),&(*(undefined4 *)(gen_frame + 0x0)),
                           (float)(float10)0);
      if (bVar1 != 0) {
        if ((char)param_6 == '\0') {
          *(undefined1 *)((*(int *)(gen_frame + 0xa4)) + 0x154) = 1;
        }
        *param_3 = *param_2;
        param_3[1] = param_2[1];
        param_3[2] = param_2[2];
        if (((*(char *)(gen_frame + 0xaf)) != '\0') && (param_4 != (undefined *)0x0)) {
          F_00affb20(param_4,&(*(undefined4 *)(gen_frame + 0x0)));
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00af5870 */
uint F_00af5870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xaf5870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float * pfVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  float10 fVar4;
  float10 fVar5;
  
  uVar3 = 0;
  if ((*param_3 == '\0') &&
     (pfVar1 = (float *)((int)this + 0x28), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)))
  {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined2 *)(gen_frame + 0x60)) = 0;
    (*(undefined1 *)(gen_frame + 0x62)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(float *)(gen_frame + 0x74)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(char *)(gen_frame + 0x9f)) = '\0';
    if (*(char *)((int)this + 0x5b) != '\0') {
      (*(float *)(gen_frame + 0x98)) = gen_bits2f(param_2[1]);
      (*(undefined * PTR32 *)(gen_frame + 0x94)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)this + 100))));
      fVar4 = (float10)*(float *)((int)this + 100);
      fVar5 = ((float10)GEN_TOD(gen_bits2f(param_2[1])));
      if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 <= fVar4)) {
        return 0;
      }
      if (fVar5 <= fVar4) {
        (*(char *)(gen_frame + 0x9f)) = '\x01';
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x94)) = *(undefined * PTR32 *)((int)this + 0x10);
    (*(float *)(gen_frame + 0x98)) = F_00ae9520(*(undefined * PTR32 *)((int)this + 0x10));
    (*(undefined * PTR32 *)(gen_frame + 0x94)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9490((*(undefined * PTR32 *)(gen_frame + 0x94))))));
    bVar2 = F_00af0bb0(param_2,(*(float *)(gen_frame + 0x98)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x94))))),&(*(float *)(gen_frame + 0x98)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0
                         ,0,3,0);
    if (bVar2 == 0) {
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      return (uint)param_1;
    }
    if (((*(char *)(gen_frame + 0x9f)) == '\0') &&
       ((!(((float10)GEN_TOD(gen_bits2f(param_2[1]))) <= (float10)(*(float *)(gen_frame + 0x98)) + (float10)*(double *)&REFG(undefined, 0x108bec8))
        || ((((((char)(*(undefined2 *)(gen_frame + 0x80)) != '\0' &&
               (uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)))),
               !((float10)(*(float *)(gen_frame + 0x74)) <= (float10)*(float *)(uVar3 + 4)))) ||
              (uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)))),
              !((float10)(*(float *)(gen_frame + 0x98)) <= (float10)*(float *)(uVar3 + 4)))) ||
             (bVar2 = F_00af0940(&(*(undefined4 *)(gen_frame + 0x0))), bVar2 == 0)) && (REFG(char, 0x14c0ba6) == '\0')))))) {
      bVar2 = F_00ae75d0(&REFG(undefined, 0x14c0a50));
      if (bVar2 == 0) {
        return CONCAT31(extraout_var,bVar2);
      }
    }
    *param_3 = '\x01';
    uVar3 = F_00affb20(param_4,&(*(undefined4 *)(gen_frame + 0x0)));
    param_2[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x98)));
    if (*(char *)((int)this + 0x5b) != '\0') {
      *param_2 = *(undefined4 *)((int)this + 0x60);
      param_2[1] = *(undefined4 *)((int)this + 100);
      param_2[2] = *(undefined4 *)((int)this + 0x68);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00af5ac0 */
uint F_00af5ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xaf5ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char * param_5 = (char *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  float * pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  char * pcVar6;
  
  pcVar6 = param_3;
  if ((((*param_3 == '\0') &&
       (pfVar1 = (float *)((int)this + 0x28), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0))
       ) && ((*(char *)((int)this + 0x5b) == '\0' ||
             (!((float10)*(float *)((int)this + 100) < ((float10)GEN_TOD(gen_bits2f(param_2[1])))))))) &&
     ((char)param_4 != '\0')) {
    bVar5 = F_00af0940(param_5);
    pcVar6 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
    if (bVar5 != 0) {
      fVar4 = *(float *)(param_5 + 4);
      uVar2 = *(undefined4 *)param_5;
      uVar3 = *(undefined4 *)(param_5 + 8);
      pcVar6 = param_5;
      if (((float10)GEN_TOD(gen_bits2f(param_2[1]))) <= (float10)fVar4 + (float10)*(double *)&REFG(undefined, 0x108bec8)) {
        *param_3 = '\x01';
        if (*(char *)((int)this + 0x5b) != '\0') {
          *param_2 = *(undefined4 *)((int)this + 0x60);
          param_2[1] = *(undefined4 *)((int)this + 100);
          param_2[2] = *(undefined4 *)((int)this + 0x68);
          return (uint)param_5;
        }
        *param_2 = uVar2;
        param_2[1] = (undefined4)gen_fl2bits(fVar4);
        param_2[2] = uVar3;
      }
    }
  }
  return (uint)pcVar6;
}

/* ref: FUN_00af5b90 */
uint F_00af5b90(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8, float gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xaf5b90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  float in_xmm1 = (float)gen_a2;
  float in_xmm2 = (float)gen_a3;
  float in_xmm3 = (float)gen_a4;
  float in_xmm5 = (float)gen_a5;
  float in_xmm7 = (float)gen_a6;
  int param_8 = (int)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  float param_10 = (float)gen_a9;
  int param_11 = (int)gen_a10;
  int iVar1;
  ulonglong uVar2;
  
  if ((char)param_11 == '\0') {
    iVar1 = in_ecx + 0xd0;
    if (*(char *)(in_ecx + 0xa6) == '\0') {
      iVar1 = in_ecx + 0x80;
    }
    if (*(char *)(iVar1 + 0x24) != '\0') {
      F_00af0530(in_ecx,in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,param_8);
    }
  }
  iVar1 = in_ecx + 0xd0;
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    iVar1 = in_ecx + 0x80;
  }
  *(undefined1 *)(iVar1 + 0x14) = (undefined1)param_9;
  iVar1 = in_ecx + 0xd0;
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    iVar1 = in_ecx + 0x80;
  }
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_8 + 4);
  iVar1 = in_ecx + 0xd0;
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    iVar1 = in_ecx + 0x80;
  }
  *(undefined1 *)(iVar1 + 0x24) = 1;
  iVar1 = in_ecx + 0xd0;
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    iVar1 = in_ecx + 0x80;
  }
  *(float *)(iVar1 + 0x10) = param_10;
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    param_11 = in_ecx + 0x80;
  }
  else {
    param_11 = in_ecx + 0xd0;
  }
  uVar2 = F_00427d90();
  *(ulonglong *)(param_11 + 0x40) = uVar2 + (longlong)((double)param_10 * *(double *)&REFG(undefined, 0x10912a8));
  iVar1 = in_ecx + 0xd0;
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    iVar1 = in_ecx + 0x80;
  }
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_8 + 4);
  uVar2 = F_00427d90();
  *(ulonglong *)(in_ecx + 0x78) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00af5cb0 */
uint F_00af5cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xaf5cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = (*(uint *)(gen_frame + 0x4)) >> 8;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
      if (*(int *)((int)this + 0x14) == 2) {
        (*(uint *)(gen_frame + 0x4)) = CONCAT31((int3)uVar2,0x10);
      }
      if (*(char *)((int)this + 0x5b) != '\0') {
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),0x41);
      }
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),(*(uint *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),0);
    }
  }
  return uVar2;
}

/* ref: FUN_00af5d10 */
uint F_00af5d10(unsigned int gen_a0)
{
  GEN_ENTER(0xaf5d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,2,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00af5d40 */
uint F_00af5d40(unsigned int gen_a0)
{
  GEN_ENTER(0xaf5d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,4,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00af5d70 */
uint F_00af5d70(unsigned int gen_a0)
{
  GEN_ENTER(0xaf5d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x49) = 0;
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      if (*(char *)((int)this + 0x4b) != '\0') {
        uVar2 = F_00aeb1c0(this,(int)this + 0x30,*(float *)((int)this + 0x44),0);
      }
    }
    else {
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,0x10,0);
      REFG(undefined1, 0x14c0cc0) = 1;
    }
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xe0000000;
  *(undefined4 *)((int)this + 0x20) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x24) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x28) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  return uVar2;
}

/* ref: FUN_00af6450 */
byte F_00af6450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xaf6450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  uint param_11 = (uint)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (REFG(char, 0x14c0a40) == '\0') {
    return 0;
  }
  ((float *)(gen_frame + 0x8))[0] = 0.0;
  ((float *)(gen_frame + 0x8))[1] = F_00ae9520(param_1);
  uVar4 = 0;
  while( true ) {
    if (((*(int *)((int)param_1 + 0x10) == 0) ||
        (bVar2 = F_00a9f620(*(int *)((int)param_1 + 0x10)), bVar2 == 0)) &&
       ((piVar1 = *(int * PTR32 *)((int)param_1 + 0x10), piVar1 == (int *)0x0 ||
        (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1), uVar3 != 1)))) {
      (*(float *)(gen_frame + 0x28)) = 0.0;
    }
    else {
      (*(float *)(gen_frame + 0x28)) = *((float *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0xc0)));
    }
    in_ecx = *(int *)((int)param_1 + 0x10);
    ((float *)(gen_frame + 0x8))[3] = *(float *)(in_ecx + 0xc0);
    ((float *)(gen_frame + 0x8))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[2], REFG(float, 0x1339ba4));
    if (((in_ecx == 0) || (bVar2 = F_00a9f620(in_ecx), bVar2 == 0)) &&
       ((piVar1 = *(int * PTR32 *)((int)param_1 + 0x10), piVar1 == (int *)0x0 ||
        (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1), uVar3 != 1)))) {
      (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1339af4);
    }
    else {
      (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF((((float10)((float *)(gen_frame + 0x8))[3] + (float10)((float *)(gen_frame + 0x8))[2]) + (float10)REFG(double, 0x1091858))));
    }
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x24)) + (float10)param_4) + (float10)((float *)(gen_frame + 0x8))[uVar4])));
    bVar2 = F_00af0bb0(param_2,(*(float *)(gen_frame + 0x18)),(*(float *)(gen_frame + 0x28)),param_3,param_5,0,0,param_6,0,0,0,0,3,param_10);
    if (bVar2 == 0) {
      return 0;
    }
    if (param_9 == (float *)0x0) {
      uVar3 = F_00a5feb0(*(undefined * PTR32 *)((int)param_1 + 0x10));
      (*(float *)(gen_frame + 0x20)) = *(float *)(uVar3 + 4);
    }
    else {
      (*(float *)(gen_frame + 0x20)) = *param_9;
    }
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x18)) = (float)((float10)*param_3 - (float10)(*(float *)(gen_frame + 0x20)));
    if ((char)param_11 != '\0') {
      return 1;
    }
    if ((char)param_7 == '\0') break;
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x24) - (float10)(*(float *)(gen_frame + 0x20)))));
    if ((!((float10)REFG(float, 0x10928e4) < (float10)(*(float *)(gen_frame + 0x1c)))) || (!((*(float *)(gen_frame + 0x18)) < REFG(float, 0x109cb08)))) {
      if (((!GEN_ISNAN(REFG(float, 0x109cb08)) && !GEN_ISNAN((*(float *)(gen_frame + 0x1c)))) &&
           (!(REFG(float, 0x109cb08) < (*(float *)(gen_frame + 0x1c))) && REFG(uint, 0x109cb08) != (*(float *)(gen_frame + 0x1c)))) &&
         ((!GEN_ISNAN((*(float *)(gen_frame + 0x18))) && !GEN_ISNAN(REFG(float, 0x10928e4))) && !((*(float *)(gen_frame + 0x18)) <= REFG(float, 0x10928e4)))) {
        return 0;
      }
      break;
    }
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      return 0;
    }
  }
  if ((float10)REFG(float, 0x10ebd70) < (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x18)))))) {
    return 0;
  }
  if (((GEN_ISNAN(param_8) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
       ((GEN_ISNAN(param_8) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || param_8 == REFG(float, 0x10ebbf0))) &&
     ((float10)param_8 < (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x18))))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00af6670 */
uint F_00af6670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf6670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  
  bVar2 = F_0054ccb0((undefined *)((int)this + 0x410),param_1);
  if (bVar2 != 0) {
    return CONCAT31(extraout_var,bVar2);
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  if ((*(int *)((int)this + 0x10) == 0) ||
     (bVar2 = F_00a9f620(*(int *)((int)this + 0x10)), bVar2 == 0)) {
    (*(float *)(gen_frame + 0x98)) = 0.0;
    piVar1 = *(int * PTR32 *)((int)this + 0x10);
    if (piVar1 == (int *)0x0) goto LAB_00af6780;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (uVar3 != 1) {
      (*(float *)(gen_frame + 0x98)) = 0.0;
      goto LAB_00af6780;
    }
  }
  (*(float *)(gen_frame + 0x98)) = *((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc0)));
LAB_00af6780: ;
  (*(float *)(gen_frame + 0x9c)) = F_00ae9520(this);
  bVar2 = F_00af0bb0(param_1,(*(float *)(gen_frame + 0x9c)),(*(float *)(gen_frame + 0x98)),&(*(float *)(gen_frame + 0x9c)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0);
  uVar3 = CONCAT31(extraout_var_00,bVar2);
  if (bVar2 != 0) {
    uVar3 = F_00aed0a0(this,param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return uVar3;
}

/* ref: FUN_00af67f0 */
uint F_00af67f0(unsigned int gen_a0)
{
  GEN_ENTER(0xaf67f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int * piVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined3 extraout_var = 0;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(char *)(gen_frame + 0x82)) = '\0';
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(uint *)(gen_frame + 0x88)) = 0;
  if ((*(int *)((int)this + 0x10) == 0) ||
     (bVar2 = F_00a9f620(*(int *)((int)this + 0x10)), bVar2 == 0)) {
    (*(float *)(gen_frame + 0xa4)) = 0.0;
    piVar1 = *(int * PTR32 *)((int)this + 0x10);
    if (piVar1 == (int *)0x0) goto LAB_00af68f6;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (uVar3 != 1) {
      (*(float *)(gen_frame + 0xa4)) = 0.0;
      goto LAB_00af68f6;
    }
  }
  (*(float *)(gen_frame + 0xa4)) = *((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc0)));
LAB_00af68f6: ;
  in_ecx = *(int *)((int)this + 0x10);
  (*(float *)(gen_frame + 0xac)) = *(float *)(in_ecx + 0xc0);
  (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1339ba4);
  if (((in_ecx == 0) || (bVar2 = F_00a9f620(in_ecx), bVar2 == 0)) &&
     ((piVar1 = *(int * PTR32 *)((int)this + 0x10), piVar1 == (int *)0x0 ||
      (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1), uVar3 != 1)))) {
    (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1339af4);
  }
  else {
    (*(float *)(gen_frame + 0xac)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xac)) + (float10)(*(float *)(gen_frame + 0xa8))) + (float10)REFG(double, 0x1091858))));
  }
  puVar4 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
  (*(undefined4 *)(gen_frame + 0x90)) = *puVar4;
  (*(undefined4 *)(gen_frame + 0x94)) = puVar4[1];
  (*(undefined4 *)(gen_frame + 0x98)) = puVar4[2];
  bVar2 = F_00af0bb0(&(*(undefined4 *)(gen_frame + 0x90)),(*(float *)(gen_frame + 0xac)),(*(float *)(gen_frame + 0xa4)),&(*(float *)(gen_frame + 0xa8)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0)
  ;
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 != 0) {
    if ((*(char *)(gen_frame + 0x82)) == '\0') {
      (*(uint *)(gen_frame + 0x88)) = (*(uint *)(gen_frame + 0x3c));
    }
    *(uint *)((int)this + 0x374) = (*(uint *)(gen_frame + 0x88));
    *(undefined4 *)((int)this + 0x378) = (*(undefined4 *)(gen_frame + 0x84));
    uVar3 = (*(uint *)(gen_frame + 0x88));
  }
  return uVar3;
}

/* ref: FUN_00af6a20 */
uint F_00af6a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaf6a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  char cVar1;
  uint uVar2;
  uint local_8;
  
  cVar1 = *(char *)((int)this + 0x17);
  local_8 = (uint)this & 0xffffff00;
  F_00af3810(this);
  if ((*(char *)((int)this + 0x17) != cVar1) && (*(char *)((int)this + 0x17) == '\0')) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),1);
  }
  F_00aee3f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  F_00af3920(this,param_3,param_4);
  F_00aee570(this,param_3,param_4,param_7);
  F_00aee6d0(this,param_1,param_2);
  F_00aee900(this,param_1,param_2,local_8);
  if (((*(char *)((int)this + 0x173) != '\0') && (*(char *)((int)this + 0x14) != '\0')) &&
     (*(char *)((int)this + 0x171) == '\0')) {
    *(undefined1 *)((int)this + 0x173) = 0;
  }
  uVar2 = F_00af39f0(this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00af6ad0 */
float10 F_00af6ad0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, float gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaf6ad0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  uint param_11 = (uint)gen_a10;
  float param_12 = (float)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined4 param_14 = (undefined4)gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00af3cc0(param_1,param_2,param_3,param_5,param_6,param_9,param_10,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00af4260(param_1,(undefined4)gen_fl2bits(param_3),&(*(undefined4 *)(gen_frame + 0x0)),param_5,param_6,param_7,param_9,
               param_10,param_13);
  fVar1 = F_00af43e0(param_1,param_4,&(*(undefined4 *)(gen_frame + 0x0)),param_5,param_6,param_8,param_11,param_12,param_14)
  ;
  if (*(char *)((int)param_1 + 0x1a) != '\0') {
    *(undefined4 *)((int)param_1 + 0x150) = *(undefined4 *)((int)param_1 + 0x134);
    return fVar1;
  }
  *(undefined4 *)((int)param_1 + 0x150) = 0;
  return fVar1;
}

/* ref: FUN_00af8600 */
byte F_00af8600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaf8600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined * param_9 = (undefined *)(uintptr_t)gen_a9;
  char * param_10 = (char *)(uintptr_t)gen_a10;
  undefined1 * param_11 = (undefined1 *)(uintptr_t)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  undefined4 param_13 = (undefined4)gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float * pfVar1;
  float fVar2;
  byte bVar3;
  undefined * pvVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0xe8)) = this;
  if (*(char *)((int)this + 0x5b) != '\0') {
    return 0;
  }
  (*(float *)(gen_frame + 0xd0)) = (float)((float10)*param_2 - (float10)*param_1);
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)param_2[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)param_2[2] - (float10)param_1[2]);
  (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0xd0));
  (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0xd4));
  (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0xd8));
  (*(undefined * PTR32 *)(gen_frame + 0x104)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xd8)) * (float10)(*(float *)(gen_frame + 0xd8)) +
                            ((float10)(*(float *)(gen_frame + 0xd4)) * (float10)(*(float *)(gen_frame + 0xd4)) +
                            (float10)(*(float *)(gen_frame + 0xd0)) * (float10)(*(float *)(gen_frame + 0xd0)))))))));
  (*(undefined * PTR32 *)(gen_frame + 0x104)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104)))))))))));
  (*(char *)(gen_frame + 0xf2)) = '\0';
  (*(char *)(gen_frame + 0xf3)) = '\0';
  (*(char *)(gen_frame + 0x10e)) = '\0';
  (*(byte *)(gen_frame + 0x10f)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0xec)) = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0)));
  (*(undefined * PTR32 *)(gen_frame + 0x108)) = (*(undefined * PTR32 *)(gen_frame + 0xec));
  (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xec))))) + (float10)(float)REFG(float, 0x1339ba4)))));
  (*(undefined * PTR32 *)(gen_frame + 0xfc)) = (*(undefined * PTR32 *)(gen_frame + 0xec));
  (*(undefined * PTR32 *)(gen_frame + 0xf4)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1339ba4)));
  (*(byte *)(gen_frame + 0x10d)) = F_00af2a00(param_1,param_2,(float)(float10)0,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xec))))),&(*(float *)(gen_frame + 0xb0)),&(*(char *)(gen_frame + 0xf2)),
                          param_5,(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xec))))) + (float10)(float)REFG(float, 0x1339ba4)));
  fVar9 = (float10)0;
  bVar3 = F_00af26b0(param_1,param_2,(float)fVar9,(float)fVar9,&(*(float *)(gen_frame + 0xb0)),&(*(char *)(gen_frame + 0xf3)),param_6,
                       (float)fVar9);
  fVar9 = (float10)0;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0)) = bVar3;
  (*(undefined * PTR32 *)(gen_frame + 0xf8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0xf8)), 1, 3),bVar3)));
  if ((char)param_12 != '\0') {
    (*(undefined * PTR32 *)(gen_frame + 0xec)) = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10) + 0x10))) + 0xc0)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = (*(undefined * PTR32 *)(gen_frame + 0xec));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xec))))) + (float10)(float)REFG(float, 0x1339ba4)))));
    fVar6 = (float10)REFG(double, 0x1088108);
    (*(float *)(gen_frame + 0xb4)) = ((float)GEN_TOF(((float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xec))))) + (float10)(float)REFG(float, 0x1339ba4)) *
                      fVar6)));
    (*(float *)(gen_frame + 0xd0)) = (float)((float10)*param_2 + fVar9);
    fVar7 = (float10)(*(float *)(gen_frame + 0xb4));
    (*(float *)(gen_frame + 0xd4)) = (float)(fVar7 + (float10)param_2[1]);
    (*(float *)(gen_frame + 0xd8)) = (float)((float10)param_2[2] + fVar9);
    (*(float *)(gen_frame + 0xa0)) = (float)((float10)*param_2 + fVar9);
    (*(float *)(gen_frame + 0xa4)) = (*(float *)(gen_frame + 0xd4));
    ((float *)(gen_frame + 0xa8))[0] = (float)((float10)param_2[2] + fVar9);
    (*(float *)(gen_frame + 0xd0)) = (float)((float10)*param_1 + fVar9);
    (*(float *)(gen_frame + 0xd4)) = (float)(fVar7 + (float10)param_1[1]);
    (*(float *)(gen_frame + 0xd8)) = (float)((float10)param_1[2] + fVar9);
    (*(float *)(gen_frame + 0xb0)) = (float)((float10)*param_1 + fVar9);
    (*(float *)(gen_frame + 0xb4)) = (*(float *)(gen_frame + 0xd4));
    (*(float *)(gen_frame + 0xb8)) = (float)((float10)param_1[2] + fVar9);
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4)))))))));
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4)))))) * fVar6)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar6 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xec)))))))));
    (*(byte *)(gen_frame + 0x10f)) = F_00af26b0(&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0xa0)),(float)(float10)0,
                            (float)(fVar6 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xec)))))),&(*(float *)(gen_frame + 0xd0)),&(*(char *)(gen_frame + 0x10e)),param_7,
                            fVar2);
    if (((*(byte *)(gen_frame + 0x10f)) != 0) &&
       (bVar5 = GEN_ISNAN(*(float *)((int)param_7 + 0x40)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
       bVar5 != (bVar5 || *(float *)((int)param_7 + 0x40) == *(float *)&REFG(undefined, 0x1088114)))) {
      (*(byte *)(gen_frame + 0x10f)) = 0;
    }
  }
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0xf8));
  fVar9 = (float10)0;
  fVar6 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104)))));
  fVar7 = (float10)REFG(float, 0x1339b58);
  (*(undefined * PTR32 *)(gen_frame + 0xcc)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0xc8)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0xf4)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0xec)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0x108)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(byte *)(gen_frame + 0xf0)) = (*(byte *)(gen_frame + 0x10d));
  (*(byte *)(gen_frame + 0xf1)) = (*(byte *)(gen_frame + 0x10f));
  if ((*(byte *)(gen_frame + 0x10d)) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0xfc)) = *(undefined * PTR32 *)((int)param_5 + 0x40);
    if (fVar6 + fVar9 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc)))))) {
      (*(byte *)(gen_frame + 0x10d)) = 0;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xcc)) = (*(undefined * PTR32 *)(gen_frame + 0xfc));
    }
    (*(undefined * PTR32 *)(gen_frame + 0xcc)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xcc))))) - (fVar7 + fVar9)))))));
    (*(undefined * PTR32 *)(gen_frame + 0xec)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc))))) - (fVar7 + fVar9)))))));
  }
  if ((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) != '\0') {
    (*(undefined * PTR32 *)(gen_frame + 0xfc)) = *(undefined * PTR32 *)((int)param_6 + 0x40);
    if (fVar6 + (float10)*(double *)&REFG(undefined, 0x109ce00) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc)))))) {
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0xf8)) = (undefined *)((uint)pvVar4 & 0xffffff00);
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xc8)) = (*(undefined * PTR32 *)(gen_frame + 0xfc));
    }
    (*(undefined * PTR32 *)(gen_frame + 0xc8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xc8))))) -
                              ((float10)REFG(float, 0x1339b5c) + (float10)*(double *)&REFG(undefined, 0x109ce00))))))));
  }
  if ((*(byte *)(gen_frame + 0x10f)) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0xfc)) = *(undefined * PTR32 *)((int)param_7 + 0x40);
    fVar8 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc)))));
    if (fVar6 + fVar9 < fVar8) {
      (*(byte *)(gen_frame + 0x10f)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(float)REFG(float, 0x10ec4c0) - (fVar7 + fVar9)))))));
      (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar8 - (fVar7 + fVar9)))))));
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = (*(undefined * PTR32 *)(gen_frame + 0xfc));
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc))))) - (fVar7 + fVar9)))))));
      (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar8 - (fVar7 + fVar9)))))));
    }
  }
  if ((((*(byte *)(gen_frame + 0x10d)) == 0) && ((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) == '\0')) && ((*(byte *)(gen_frame + 0x10f)) == 0)) {
    (*(byte *)(gen_frame + 0x103)) = (*(byte *)(gen_frame + 0x10f));
  }
  else {
    (*(byte *)(gen_frame + 0x103)) = 1;
    fVar9 = (float10)REFG(float, 0x1339b38) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xcc)))));
    if ((fVar9 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xc8)))))) && (fVar9 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))))) {
      *param_4 = (uint)param_5;
    }
    else {
      pvVar4 = param_7;
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) + (float10)REFG(float, 0x1339b38) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xc8))))))) {
        pvVar4 = param_6;
      }
      *param_4 = (uint)pvVar4;
    }
    if (((((*(byte *)(gen_frame + 0x10d)) != 0) && ((*(char *)(gen_frame + 0xf2)) == '\0')) || (((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) != '\0' && ((*(char *)(gen_frame + 0xf3)) == '\0')))
        ) || (((*(byte *)(gen_frame + 0x10f)) != 0 && ((*(char *)(gen_frame + 0x10e)) == '\0')))) {
      return 1;
    }
  }
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  if (((*(byte *)(gen_frame + 0x103)) != 0) && (*param_10 == '\0')) {
    F_00aed710(param_1,param_2,param_3,*param_4);
  }
  if (((undefined *)*param_4 == param_6) &&
     (pfVar1 = (float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x28),
     !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0))) {
    F_00af5ac0((*(undefined * PTR32 *)(gen_frame + 0xe8)),param_1,param_2,param_10,(*(undefined * PTR32 *)(gen_frame + 0xf8)),param_6,param_13);
    if (*param_10 == '\0') {
      if ((((*(byte *)(gen_frame + 0x10d)) == 0) && ((*(byte *)(gen_frame + 0x10f)) == 0)) && (bVar3 = F_00af0940(param_6), bVar3 != 0)) {
        *param_11 = 1;
      }
    }
    else {
      F_00a64e00(((undefined1 *)(gen_frame + 0x0)));
      (*(undefined * PTR32 *)(gen_frame + 0xfc)) = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10);
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9520(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10)))));
      (*(undefined * PTR32 *)(gen_frame + 0xfc)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9490((*(undefined * PTR32 *)(gen_frame + 0xfc))))));
      bVar3 = F_00af0bb0(param_2,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc))))),&(*(undefined * PTR32 *)(gen_frame + 0xfc)),REFG(float, 0x10ebbf0),0,0,
                           ((undefined1 *)(gen_frame + 0x0)),0,0,0,0,3,0);
      if (bVar3 != 0) {
        F_00affb20(param_9,((undefined1 *)(gen_frame + 0x0)));
      }
    }
  }
  if (((*param_10 == '\0') && ((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) == '\0')) && (((*(byte *)(gen_frame + 0xf0)) != 0 || ((*(byte *)(gen_frame + 0xf1)) != 0)))) {
    if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xec))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x108)))))) {
      (*(undefined * PTR32 *)(gen_frame + 0xf8)) = param_5;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xf8)) = param_7;
    }
    bVar3 = F_00af0940((*(undefined * PTR32 *)(gen_frame + 0xf8)));
    if (bVar3 != 0) {
      F_00afef80((*(undefined * PTR32 *)(gen_frame + 0xf8)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xa4)),((float *)(gen_frame + 0xa8)));
      (*(float *)(gen_frame + 0xb0)) = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0xc);
      (*(float *)(gen_frame + 0xb4)) = gen_bits2f(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x10));
      (*(char *)(gen_frame + 0x10e)) = '\0';
      (*(float *)(gen_frame + 0xb8)) = gen_bits2f(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x14));
      bVar3 = F_00ae8170(param_1,&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0xd0)),&(*(char *)(gen_frame + 0x10e)));
      if (bVar3 != 0) {
        F_0046f4a0(&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0xd0)),param_1);
        (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_004bd280(&(*(float *)(gen_frame + 0x90))))));
        if (0.0 < (*(float *)(gen_frame + 0x94))) {
          if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x44) != 0) &&
             (fVar2 = *((float *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x44) + 0x50))),
             GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0))) {
            *param_10 = '\x01';
            F_00affb20(param_9,(*(undefined * PTR32 *)(gen_frame + 0xf8)));
            F_00a64e00(((undefined1 *)(gen_frame + 0x0)));
            pvVar4 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10);
            (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9520(pvVar4))));
            (*(undefined * PTR32 *)(gen_frame + 0x104)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9490(pvVar4))));
            bVar3 = F_00af0bb0(param_2,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x108))))),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104))))),&(*(undefined * PTR32 *)(gen_frame + 0x104)),REFG(float, 0x10ebbf0),0,0,
                                 ((undefined1 *)(gen_frame + 0x0)),0,0,0,0,3,0);
            if (bVar3 != 0) {
              param_2[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104)))));
              F_00affb20(param_9,((undefined1 *)(gen_frame + 0x0)));
              return (*(byte *)(gen_frame + 0x103));
            }
          }
        }
        else if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x108))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104)))))) {
          (*(undefined * PTR32 *)(gen_frame + 0x104)) = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10);
          (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9520(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10)))));
          (*(undefined * PTR32 *)(gen_frame + 0x104)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9490((*(undefined * PTR32 *)(gen_frame + 0x104))))));
          bVar3 = F_00af0bb0(&(*(float *)(gen_frame + 0xd0)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x108))))),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104))))),&(*(undefined * PTR32 *)(gen_frame + 0xf4)),REFG(float, 0x10ebbf0),0,0,
                               0,0,0,0,0,3,0);
          if ((bVar3 != 0) &&
             (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) < (float10)(*(float *)(gen_frame + 0xd4)) - (float10)REFG(float, 0x1339b38)))) {
            *param_10 = '\x01';
            F_00affb20(param_9,(*(undefined * PTR32 *)(gen_frame + 0xf8)));
            (*(undefined * PTR32 *)(gen_frame + 0x104)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) - (float10)param_3[1]))));
            if (((float10)1 < (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) - (float10)param_3[1])) &&
               ((*(char *)(gen_frame + 0x10e)) != '\0')) {
              *param_2 = *param_1;
              param_2[1] = param_1[1];
              param_2[2] = param_1[2];
              return (*(byte *)(gen_frame + 0x103));
            }
            *param_2 = (*(float *)(gen_frame + 0xd0));
            param_2[2] = (*(float *)(gen_frame + 0xd8));
            param_2[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4)))));
          }
        }
      }
    }
  }
  return (*(byte *)(gen_frame + 0x103));
}

/* ref: FUN_00af8d90 */
unsigned int F_00af8d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf8d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  bool bVar6;
  float fVar7;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    F_00aefee0(this);
    goto LAB_00af8e11;
  case 1: ;
  case 2: ;
    if (param_1 == 2) {
      if (((*(int *)((int)this + 0x10) != 0) &&
          (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
         (bVar3 = F_00a9f620(iVar1), bVar3 != 0)) {
        *(float *)&REFG(undefined, 0x14c0a7c) =
             (float)((float10)*(float *)&REFG(undefined, 0x14c0a7c) * (float10)*(double *)&REFG(undefined, 0x10919f0));
      }
      *(undefined1 *)((int)this + 0x59) = 1;
    }
    F_00af5cb0(this);
    break;
  case 3: ;
  case 4: ;
    if (param_2 == 1) {
      (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1339b98);
      fVar7 = *(float *)((int)this + 0x5c);
      fVar2 = (*(float *)(gen_frame + 0x1c));
      if (GEN_ISNAN(fVar7) == (GEN_ISNAN(fVar7) || fVar7 == 0.0)) {
        (*(float *)(gen_frame + 0x1c)) = fVar7;
        *(undefined4 *)((int)this + 0x5c) = 0;
        fVar2 = (*(float *)(gen_frame + 0x1c));
      }
    }
    else {
      fVar2 = *(float *)&REFG(undefined, 0x10ebbcc);
      if (param_2 != 2) break;
    }
    F_00ae7a70(this,fVar2);
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(*(undefined4 *)((int)this + 0x28));
    uVar4 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar4 + 4);
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(float *)((int)this + 0x50) = (*(float *)(gen_frame + 0x1c));
    if (((*(int *)((int)this + 0x10) != 0) &&
        (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
       (bVar3 = F_00a9f620(iVar1), bVar3 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x14c0ae0);
      (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x14c0ae8);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      fVar7 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x0)));
      bVar6 = GEN_ISNAN((float10)fVar7) || GEN_ISNAN((float10)0);
      if (bVar6 == (bVar6 || (float10)fVar7 == (float10)0)) {
        F_004bd580(&(*(undefined4 *)(gen_frame + 0x0)));
      }
      *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)((int)this + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    break;
  case 5: ;
    if (*(char *)((int)this + 0x5b) == '\0') {
      (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x44);
      uVar4 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      if ((float10)REFG(double, 0x10944b8) <= (float10)(*(float *)(gen_frame + 0x1c)) - (float10)*(float *)(uVar4 + 4)) {
        F_00aa3ff0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))),100,0);
      }
    }
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x68))) = 0;
    if ((((*(int *)((int)this + 0x10) != 0) &&
         (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
        (bVar3 = F_00a9f620(iVar1), bVar3 != 0)) &&
       (bVar3 = F_00ae8560(*(undefined4 *)((int)this + 0x10)), bVar3 == 0)) {
      puVar5 = (undefined4 *)F_00aeff30(this,&(*(undefined4 *)(gen_frame + 0x0)));
      *(undefined4 *)&REFG(undefined, 0x14c0ad0) = *puVar5;
      *(undefined4 *)&REFG(undefined, 0x14c0ad4) = puVar5[1];
      *(undefined4 *)&REFG(undefined, 0x14c0ad8) = puVar5[2];
      REFG(undefined1, 0x14c0bc0) = 1;
    }
    F_00af5d10(this);
    goto LAB_00af8e11;
  }
  if ((param_1 == 3) || (param_1 == 4)) {
    if (param_2 == 2) {
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x18);
      return 0;
    }
    *(float *)((int)this + 0x20) =
         ((float)GEN_TOF(((float10)*(float *)((int)this + 0x18) - (float10)*(double *)&REFG(undefined, 0x10ec4c8))));
  }
  else {
LAB_00af8e11: ;
    if (param_2 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00af9030 */
uint F_00af9030(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, float gen_a10)
{
  GEN_ENTER(0xaf9030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  float in_xmm1 = (float)gen_a2;
  float in_xmm2 = (float)gen_a3;
  float in_xmm3 = (float)gen_a4;
  float in_xmm5 = (float)gen_a5;
  float in_xmm7 = (float)gen_a6;
  uint param_8 = (uint)gen_a7;
  uint param_9 = (uint)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  float param_11 = (float)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  bool bVar1;
  uint uVar2;
  float fVar3;
  byte bVar4;
  undefined4 * puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  fVar3 = (*(float *)(gen_frame + 0x34));
  uVar2 = (*(uint *)(gen_frame + 0x30));
  uVar6 = (*(uint *)(gen_frame + 0x2c));
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 0;
  (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)gen_fl2bits(fVar3) & 0xffffff00);
  if ((param_8 & 0x20) != 0) {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar3) >> 8),1));
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = uVar6 & 0xffffff00;
  (*(char *)(gen_frame + 0x3e)) = '\0';
  (*(char *)(gen_frame + 0x3f)) = '\0';
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x30)) = uVar2 & 0xffffff00;
  if ((param_9 & 1) == 0) {
    if ((param_9 & 4) != 0) {
      (*(char *)(gen_frame + 0x3f)) = '\x01';
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
      (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x34)), 1, 3),1));
      goto LAB_00af90a6;
    }
    if ((param_9 & 2) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x30)) = CONCAT31((int3)(uVar2 >> 8),1);
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
      (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x34)), 1, 3),1));
      goto LAB_00af90a6;
    }
    if ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0') goto LAB_00af90a6;
  }
  else {
    if ((param_8 & 0x10) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x2c)) = CONCAT31((int3)(uVar6 >> 8),1);
    }
    (*(char *)(gen_frame + 0x3e)) = '\x01';
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x34)), 1, 3),1));
LAB_00af90a6: ;
    (*(undefined4 *)(gen_frame + 0x10)) = *param_10;
    (*(undefined4 *)(gen_frame + 0x14)) = param_10[1];
    in_xmm0 = gen_bits2f(param_10[2]);
    (*(float *)(gen_frame + 0x18)) = in_xmm0;
    bVar4 = F_00ae96c0(*(undefined * PTR32 *)(in_ecx + 0x10),0,&(*(undefined4 *)(gen_frame + 0x10)));
    if (bVar4 != 0) {
      if ((*(char *)(gen_frame + 0x3e)) != '\0') {
        (*(char *)(gen_frame + 0x3e)) = '\0';
      }
      if ((*(char *)(gen_frame + 0x3f)) != '\0') {
        (*(char *)(gen_frame + 0x3f)) = '\0';
      }
    }
  }
  if (*(char *)(in_ecx + 0x70) != '\0') {
    if ((*(char *)(gen_frame + 0x3e)) != '\0') {
      (*(char *)(gen_frame + 0x3e)) = '\0';
    }
    if ((*(char *)(gen_frame + 0x3f)) != '\0') {
      (*(char *)(gen_frame + 0x3f)) = '\0';
    }
  }
  if ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0') {
    uVar7 = F_00427d90();
    *(ulonglong *)(in_ecx + 0x78) = uVar7;
  }
  (*(char *)(gen_frame + 0x3d)) = '\0';
  (*(char *)(gen_frame + 0x3c)) = '\0';
  (*(char *)(gen_frame + 0x3b)) = '\0';
  if ((param_8 & 0xc0) == 0) {
LAB_00af9209: ;
    if (*(char *)(in_ecx + 0xa6) != '\0') goto LAB_00af9212;
    uVar6 = in_ecx + 0x80;
  }
  else {
    if ((((*(char *)(gen_frame + 0x3e)) == '\0') && ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0')) && (*(char *)(in_ecx + 0xa4) == '\0')) {
      if (((*(char *)(gen_frame + 0x3f)) != '\0') ||
         ((*(int *)(in_ecx + 0x14) == 0 && (bVar4 = F_00aead60(in_ecx), bVar4 == 0)))) {
        (*(char *)(gen_frame + 0x3d)) = '\x01';
        (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_10[1]))) -
                          (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x24))))));
        bVar1 = !(*(double *)&REFG(undefined, 0x1094810) < (double)(*(float *)(gen_frame + 0x28)));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = bVar1;
        (*(uint *)(gen_frame + 0x2c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x2c)), 1, 3),bVar1);
        goto LAB_00af9187;
      }
LAB_00af918d: ;
      bVar4 = F_00aeaed0(in_ecx,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x34))),(*(uint *)(gen_frame + 0x30)));
      if (bVar4 != 0) {
        (*(char *)(gen_frame + 0x3c)) = '\x01';
        puVar5 = (undefined4 *)
                 F_00aeafa0(in_ecx,in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,&(*(undefined4 *)(gen_frame + 0x10)),
                              param_10);
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar5;
        (*(undefined4 *)(gen_frame + 0x4)) = puVar5[1];
        in_xmm0 = gen_bits2f(puVar5[2]);
        (*(float *)(gen_frame + 0x8)) = in_xmm0;
      }
    }
    else {
LAB_00af9187: ;
      if ((*(char *)(gen_frame + 0x3f)) == '\0') goto LAB_00af918d;
    }
    if ((((char)(*(uint *)(gen_frame + 0x30)) != '\0') || ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0')) ||
       ((*(char *)(in_ecx + 0xa4) == '\0' && (*(char *)(in_ecx + 0xa5) == '\0'))))
    goto LAB_00af9209;
    if (*(char *)(in_ecx + 0xa6) == '\0') {
      if ((*(int *)(in_ecx + 0x14) != 0) || (bVar4 = F_00aead60(in_ecx), bVar4 != 0)) {
        (*(char *)(gen_frame + 0x3b)) = '\x01';
      }
      goto LAB_00af9209;
    }
LAB_00af9212: ;
    uVar6 = in_ecx + 0xd0;
  }
  *(undefined4 *)(uVar6 + 0x18) = param_10[1];
  if ((*(char *)(gen_frame + 0x3e)) == '\0') {
    param_11 = in_xmm0;
    if ((*(char *)(gen_frame + 0x3d)) != '\0') {
      param_11 = 0.0;
      goto LAB_00af9247;
    }
  }
  else {
    if ((*(char *)(gen_frame + 0x3d)) != '\0') {
      param_11 = 0.0;
    }
LAB_00af9247: ;
    (*(float *)(gen_frame + 0x34)) = param_11;
    uVar6 = F_00af5b90(in_ecx,param_11,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,param_10,(*(uint *)(gen_frame + 0x2c)),
                         param_11,0);
  }
  if ((*(char *)(gen_frame + 0x3f)) == '\0') {
    if ((*(char *)(gen_frame + 0x3c)) == '\0') goto LAB_00af9287;
    puVar5 = &(*(undefined4 *)(gen_frame + 0x0));
  }
  else {
    puVar5 = param_10;
    if ((*(char *)(gen_frame + 0x3c)) != '\0') {
      puVar5 = &(*(undefined4 *)(gen_frame + 0x0));
    }
  }
  uVar6 = F_00af04a0(in_ecx,param_11,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,puVar5);
LAB_00af9287: ;
  if (((char)(*(uint *)(gen_frame + 0x30)) != '\0') || ((*(char *)(gen_frame + 0x3b)) != '\0')) {
    uVar6 = F_00af0530(in_ecx,param_11,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,param_10);
  }
  return uVar6;
}

/* ref: FUN_00af98d0 */
uint F_00af98d0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xaf98d0u, gen_a0, 0u, 0u, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  
  uVar2 = 0;
  if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x204))) == 0) {
      if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x296))) == '\0') ||
         (iVar4 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c0, *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 700))) == '\0')) {
        iVar4 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270;
      }
      if (0.0 <= *(float *)(iVar4 + 0x10)) {
        return 0;
      }
    }
    else if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x204))) != 5) {
      return 0;
    }
  }
  if (((REFG(char, 0x14c0a40) != '\0') && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x420))) != '\0')) &&
     (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x422))) == '\0')) {
    if ((((char)(*(uint *)&gen_args[4]) == '\0') &&
        ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 0 ||
         (bVar1 = F_00a9f620(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))), bVar1 == 0)))) &&
       (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) != '\0')) {
      (*(undefined4 *)&gen_args[5]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[5]), 1, 3),1);
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined2 *)(gen_frame + 0x60)) = 0;
    (*(undefined1 *)(gen_frame + 0x62)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    puVar3 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
    (*(undefined4 *)(gen_frame + 0xa0)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0xa4)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0xa8)) = puVar3[2];
    bVar1 = F_00af6450((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xa0)),&(*(undefined4 *)(gen_frame + 0x9c)),(*(float *)&gen_args[6]),(*(float *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[5]),(*(float *)&gen_args[2]),0,0,
                         (*(uint *)&gen_args[4]));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      puVar3 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
      (*(undefined4 *)(gen_frame + 0xa0)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0xa8)) = puVar3[2];
      (*(undefined4 *)(gen_frame + 0xa4)) = (*(undefined4 *)(gen_frame + 0x9c));
      F_00aec9f0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0xa0)));
      puVar3 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
      (*(undefined4 *)(gen_frame + 0xa0)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0xa4)) = puVar3[1];
      (*(undefined4 *)(gen_frame + 0xa8)) = puVar3[2];
      uVar2 = F_00aed0a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xa0)),&(*(undefined4 *)(gen_frame + 0x0)));
    }
  }
  return uVar2;
}

/* ref: FUN_00af9b10 */
unsigned int F_00af9b10(unsigned int gen_a0)
{
  GEN_ENTER(0xaf9b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 100) != '\0') {
      F_00aec9f0(iVar1,iVar1 + 0x20);
    }
    F_00af98d0(*(undefined4 *)((int)this + 4),REFG(float, 0x10ebd70),REFG(float, 0x10ebbec),0,0,0,(float)(float10)0);
    F_00aeb700(*(undefined * PTR32 *)((int)this + 4));
    if ((*(char *)((int)this + 8) == '\0') && (*(char *)((int)this + 9) == '\0')) {
      F_00afbac0(*(undefined * PTR32 *)((int)this + 4));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00af9b80 */
uint F_00af9b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf9b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int * piVar2;
  undefined * this_00;
  float10 fVar3;
  bool bVar4;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  float fVar8;
  
  if (1 < REFG(undefined4, 0x14c0a44)) {
    return in_EAX;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x204)));
  if (iVar1 != 0) {
    if (iVar1 == 3) {
      return 3;
    }
    if (iVar1 == 4) {
      return 4;
    }
    if (iVar1 == 2) {
      return 2;
    }
  }
  if (*(char *)((int)this + 0x1c) == '\0') {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
  (*(char *)(gen_frame + 0x5f)) = '\0';
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if (((uVar6 == 8) &&
      (uVar6 = F_00aa3470(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10)))), uVar6 != 0)) &&
     (*(char *)(uVar6 + 0x2e09) != '\0')) {
    (*(char *)(gen_frame + 0x5f)) = '\x01';
  }
  (*(char *)(gen_frame + 0x5e)) = '\0';
  if (((*(char *)(gen_frame + 0x5f)) == '\0') &&
     ((*(char *)((int)this + 0x1c) != '\0' ||
      (uVar6 = *(uint *)((int)this + 0x18), uVar7 = F_00aea910(this), uVar6 < uVar7)))) {
    bVar5 = F_00ae96c0(*(undefined * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x0)),0);
    if (bVar5 == 0) {
      return CONCAT31(extraout_var,bVar5);
    }
    (*(char *)(gen_frame + 0x5e)) = '\x01';
  }
  uVar6 = (*(uint *)(gen_frame + 0x54));
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x10ebd70);
  *(undefined4 *)((int)this + 0x18) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x54)) = uVar6 & 0xffffff00;
  uVar7 = (*(uint *)(gen_frame + 0x54));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = 0.0;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = 0.0;
  gen_piece_set(&(*(uint *)(gen_frame + 0x54)), 1, 3, (unsigned long long)(SUB43(uVar6,1)));
  if ((*(char *)(gen_frame + 0x5f)) == '\0') {
    if ((*(char *)(gen_frame + 0x5e)) == '\0') {
      (*(uint *)(gen_frame + 0x54)) = uVar7;
      bVar5 = F_00ae6930(*(undefined * PTR32 *)((int)this + 4));
      if (bVar5 != 0) {
        uVar6 = F_00ae9430(*(undefined * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x30)));
        (*(float *)(gen_frame + 0x58)) = F_00ae95f0(param_1,uVar6);
      }
      bVar5 = F_00ae6930(*(undefined * PTR32 *)((int)this + 4));
      if (bVar5 == 0) {
        bVar4 = (*(float *)(gen_frame + 0x58)) < REFG(float, 0x10ebbf0);
        fVar8 = REFG(float, 0x10ebbf0);
      }
      else {
        bVar4 = (double)(*(float *)(gen_frame + 0x58)) < REFG(double, 0x1094800);
        fVar8 = REFG(float, 0x10ebcd0);
      }
      if (bVar4) {
        (*(float *)(gen_frame + 0x58)) = fVar8;
      }
    }
    else {
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x54)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x54)), 1, 3),1);
      fVar8 = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar8;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((float10)fVar8 - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)))));
      (*(double *)(gen_frame + 0x48)) = (double)fVar8;
      uVar6 = F_00ae9430(this_00,((undefined1 *)(gen_frame + 0x30)));
      (*(double *)(gen_frame + 0x48)) = (*(double *)(gen_frame + 0x48)) - (double)*(float *)(uVar6 + 4);
      fVar8 = F_00ae9520(this_00);
      fVar3 = (float10)(*(double *)(gen_frame + 0x48));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = (float)(fVar3 - (float10)fVar8);
    }
  }
  else {
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x10ebd4c);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x54)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x54)), 1, 3),1);
  }
  uVar6 = F_00af98d0(*(undefined4 *)((int)this + 4),(*(float *)(gen_frame + 0x50)),(*(float *)(gen_frame + 0x58)),0,(*(uint *)(gen_frame + 0x54)),0,(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4))
                      );
  REFG(undefined4, 0x14c0a44) = REFG(undefined4, 0x14c0a44) + 1;
  return uVar6;
}

/* ref: FUN_00af9d80 */
byte F_00af9d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaf9d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  char * param_5 = (char *)(uintptr_t)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  int in_ecx;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x288)) = this;
  (*(byte *)(gen_frame + 0x28d)) = 0;
  (*(float *)(gen_frame + 0x270)) = (float)((float10)*param_2 - (float10)*param_1);
  (*(float *)(gen_frame + 0x274)) = (float)((float10)param_2[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0x278)) = (float)((float10)param_2[2] - (float10)param_1[2]);
  fVar5 = (float10)(float)((float10)param_2[1] - (float10)param_1[1]);
  fVar6 = (float10)(float)((float10)*param_2 - (float10)*param_1);
  fVar7 = (float10)(float)((float10)param_2[2] - (float10)param_1[2]);
  (*(float *)(gen_frame + 0x280)) = ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5))));
  fVar8 = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x280)))));
  (*(float *)(gen_frame + 0x280)) = fVar8;
  if ((param_5 != (char *)0x0) && (*param_5 != '\x01')) {
    *param_5 = '\0';
  }
  if (fVar8 <= REFG(float, 0x10ebbe4)) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return 0;
  }
  (*(float *)(gen_frame + 0x270)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x140)) = 0;
  (*(undefined4 *)(gen_frame + 0x144)) = 0;
  (*(undefined4 *)(gen_frame + 0x148)) = 0;
  (*(undefined4 *)(gen_frame + 0x14c)) = 0;
  (*(undefined4 *)(gen_frame + 0x150)) = 0;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x15c)) = 0;
  (*(undefined4 *)(gen_frame + 0x160)) = 0;
  (*(undefined4 *)(gen_frame + 0x164)) = 0;
  (*(undefined4 *)(gen_frame + 0x168)) = 0;
  (*(undefined4 *)(gen_frame + 0x16c)) = 0;
  (*(undefined4 *)(gen_frame + 0x170)) = 0;
  (*(undefined4 *)(gen_frame + 0x174)) = 0;
  (*(undefined4 *)(gen_frame + 0x178)) = 0;
  (*(undefined4 *)(gen_frame + 0x190)) = 0;
  (*(undefined4 *)(gen_frame + 0x194)) = 0;
  (*(undefined4 *)(gen_frame + 0x198)) = 0;
  (*(undefined2 *)(gen_frame + 0x1a0)) = 0;
  (*(undefined1 *)(gen_frame + 0x1a2)) = 0;
  (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
  (*(undefined2 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined1 *)(gen_frame + 0x1c2)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1ec)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined4 *)(gen_frame + 0x200)) = 0;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined4 *)(gen_frame + 0x220)) = 0;
  (*(undefined4 *)(gen_frame + 0x224)) = 0;
  (*(undefined4 *)(gen_frame + 0x228)) = 0;
  (*(undefined2 *)(gen_frame + 0x230)) = 0;
  (*(undefined1 *)(gen_frame + 0x232)) = 0;
  (*(undefined4 *)(gen_frame + 0x240)) = 0;
  (*(undefined4 *)(gen_frame + 0x244)) = 0;
  (*(undefined4 *)(gen_frame + 0x248)) = 0;
  (*(undefined2 *)(gen_frame + 0x250)) = 0;
  (*(undefined1 *)(gen_frame + 0x252)) = 0;
  (*(undefined4 *)(gen_frame + 0x254)) = 0;
  (*(undefined4 *)(gen_frame + 0x258)) = 0;
  in_ecx = *((int *)GEN_TOP(((int)gen_fl2bits(*(float *)((int)this + 0x10)) + 0x10)));
  (*(float *)(gen_frame + 0x278)) = param_2[2];
  (*(char *)(gen_frame + 0x28f)) = '\0';
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x280)) + 0)) = 1;
  (*(float *)(gen_frame + 0x280)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar8) >> 8),1));
  (*(char *)(gen_frame + 0x28c)) = '\0';
  (*(float *)(gen_frame + 0x26c)) = 0.0;
  (*(float *)(gen_frame + 0x274)) = param_1[1];
  (*(float *)(gen_frame + 0x284)) = *(float *)((int)this + 0x10);
  if ((in_ecx == 0) || (bVar2 = F_00a9f620(in_ecx), bVar2 == 0)) {
    fVar8 = 0.0;
    piVar1 = *(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x284))) + 0x10);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if (uVar3 == 1) goto LAB_00afa010;
      fVar8 = 0.0;
    }
  }
  else {
LAB_00afa010: ;
    fVar8 = *((float *)GEN_TOP((*(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0x284))) + 0x10) + 0xc0)));
  }
  (*(float *)(gen_frame + 0x284)) = fVar8;
  (*(float *)(gen_frame + 0x268)) = F_00ae9520(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x288)) + 0x10));
  bVar2 = F_00af0bb0(&(*(float *)(gen_frame + 0x270)),(*(float *)(gen_frame + 0x268)),(*(float *)(gen_frame + 0x284)),&(*(float *)(gen_frame + 0x26c)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x1d0)),0,0,0,0,3,0)
  ;
  fVar8 = (*(float *)(gen_frame + 0x280));
  if (bVar2 == 0) {
    *param_2 = *param_1;
    param_2[2] = param_1[2];
  }
  else {
    if (((float10)param_2[1] < (float10)(*(float *)(gen_frame + 0x26c))) &&
       ((!GEN_ISNAN(*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x288)) + 0x28)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        !(*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x288)) + 0x28) <= *(float *)&REFG(undefined, 0x1088114)))) {
      if ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x230)) + 1)) == '\0') goto LAB_00afa0bd;
      if ((char)(*(undefined2 *)(gen_frame + 0x230)) == '\0') {
        (*(char *)(gen_frame + 0x28c)) = '\x01';
      }
    }
    if ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x230)) + 1)) != '\0') {
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x280)) + 0)) = 0;
      (*(float *)(gen_frame + 0x280)) = gen_bits2f((uint)gen_fl2bits(fVar8) & 0xffffff00);
    }
  }
LAB_00afa0bd: ;
  bVar2 = F_0054ccb0(param_2,param_1);
  if (bVar2 == 0) {
    (*(float *)(gen_frame + 0x270)) = *param_1;
    (*(float *)(gen_frame + 0x274)) = param_1[1];
    (*(float *)(gen_frame + 0x278)) = param_1[2];
    (*(float *)(gen_frame + 0x284)) = 0.0;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    (*(undefined4 *)(gen_frame + 0xbc)) = 0;
    (*(undefined4 *)(gen_frame + 0xc0)) = 0;
    (*(undefined4 *)(gen_frame + 0xc4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    (*(undefined4 *)(gen_frame + 0xd4)) = 0;
    (*(undefined4 *)(gen_frame + 0xd8)) = 0;
    (*(undefined4 *)(gen_frame + 0xdc)) = 0;
    (*(undefined4 *)(gen_frame + 0xe0)) = 0;
    (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    (*(undefined4 *)(gen_frame + 0xe8)) = 0;
    (*(undefined4 *)(gen_frame + 0x100)) = 0;
    (*(undefined4 *)(gen_frame + 0x104)) = 0;
    (*(undefined4 *)(gen_frame + 0x108)) = 0;
    (*(undefined2 *)(gen_frame + 0x110)) = 0;
    (*(undefined1 *)(gen_frame + 0x112)) = 0;
    (*(undefined4 *)(gen_frame + 0x120)) = 0;
    (*(undefined4 *)(gen_frame + 0x124)) = 0;
    (*(undefined4 *)(gen_frame + 0x128)) = 0;
    (*(undefined2 *)(gen_frame + 0x130)) = 0;
    (*(undefined1 *)(gen_frame + 0x132)) = 0;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x138)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x90)) = 0;
    (*(undefined4 *)(gen_frame + 0x94)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined2 *)(gen_frame + 0xa0)) = 0;
    (*(undefined1 *)(gen_frame + 0xa2)) = 0;
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1ec)) = 0;
    (*(undefined4 *)(gen_frame + 0x1f0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1f4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
    (*(undefined4 *)(gen_frame + 0x200)) = 0;
    (*(undefined4 *)(gen_frame + 0x204)) = 0;
    (*(undefined4 *)(gen_frame + 0x208)) = 0;
    (*(undefined4 *)(gen_frame + 0x220)) = 0;
    (*(undefined4 *)(gen_frame + 0x224)) = 0;
    (*(undefined4 *)(gen_frame + 0x228)) = 0;
    (*(undefined2 *)(gen_frame + 0x230)) = 0;
    (*(undefined1 *)(gen_frame + 0x232)) = 0;
    (*(undefined2 *)(gen_frame + 0x250)) = 0;
    (*(undefined1 *)(gen_frame + 0x252)) = 0;
    (*(undefined4 *)(gen_frame + 0x258)) = 0;
    (*(char *)(gen_frame + 0x28e)) = '\0';
    (*(undefined4 *)(gen_frame + 0x240)) = 0;
    (*(undefined4 *)(gen_frame + 0x244)) = 0;
    (*(undefined4 *)(gen_frame + 0x248)) = 0;
    (*(undefined4 *)(gen_frame + 0x254)) = 0;
    bVar2 = F_00af8600((*(undefined * PTR32 *)(gen_frame + 0x288)),param_1,param_2,&(*(float *)(gen_frame + 0x270)),&(*(float *)(gen_frame + 0x284)),&(*(undefined4 *)(gen_frame + 0xb0)),&(*(undefined4 *)(gen_frame + 0x20)),
                         &(*(undefined4 *)(gen_frame + 0x1d0)),param_4,&(*(undefined4 *)(gen_frame + 0x140)),&(*(char *)(gen_frame + 0x28f)),&(*(char *)(gen_frame + 0x28e)),
                         (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x280))),param_7);
    if ((bVar2 == 0) && ((*(char *)(gen_frame + 0x28f)) == '\0')) {
      if ((*(char *)(gen_frame + 0x28c)) != '\0') {
        *param_2 = (*(float *)(gen_frame + 0x270));
        param_2[1] = (*(float *)(gen_frame + 0x274));
        param_2[2] = (*(float *)(gen_frame + 0x278));
        REFG(undefined1, 0x14c0cc6) = 1;
      }
    }
    else {
      if ((char)param_7 == '\0') {
        REFG(undefined1, 0x14c0ba4) = 1;
      }
      if ((*(char *)(gen_frame + 0x28f)) == '\0') {
        if ((*(char *)(gen_frame + 0x28e)) == '\0') {
          if (param_4 < 3) {
            F_00af0130((*(undefined * PTR32 *)(gen_frame + 0x288)),&(*(float *)(gen_frame + 0x270)),param_2,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x284))));
            if (param_3 != 0) {
              F_00aeab30(param_3,&(*(float *)(gen_frame + 0x270)),param_2,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x284))));
            }
            bVar2 = F_00af9d80((*(undefined * PTR32 *)(gen_frame + 0x288)),&(*(float *)(gen_frame + 0x270)),param_2,param_3,param_4 + 1,param_5,param_6,
                                 param_7);
            return bVar2;
          }
          if ((param_3 != 0) &&
             (bVar2 = F_00afa520((*(undefined * PTR32 *)(gen_frame + 0x288)),&(*(float *)(gen_frame + 0x270)),param_2,param_3,((undefined1 *)(gen_frame + 0x10))), bVar2 != 0)) {
            pfVar4 = (float *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x270)),((undefined1 *)(gen_frame + 0x10)));
            *param_2 = *pfVar4;
            param_2[1] = pfVar4[1];
            param_2[2] = pfVar4[2];
            bVar2 = F_00af9d80((*(undefined * PTR32 *)(gen_frame + 0x288)),&(*(float *)(gen_frame + 0x270)),param_2,0,0,param_5,param_6,param_7);
            return bVar2;
          }
          *param_2 = (*(float *)(gen_frame + 0x270));
          param_2[1] = (*(float *)(gen_frame + 0x274));
          param_2[2] = (*(float *)(gen_frame + 0x278));
        }
        (*(byte *)(gen_frame + 0x28d)) = 1;
      }
    }
  }
  F_00af5870((*(undefined * PTR32 *)(gen_frame + 0x288)),param_1,param_2,&(*(char *)(gen_frame + 0x28f)),&(*(undefined4 *)(gen_frame + 0x140)),param_4,param_7);
  if (param_5 != (char *)0x0) {
    *param_5 = (*(char *)(gen_frame + 0x28f));
  }
  if (((*(char *)(gen_frame + 0x28f)) != '\0') && (param_6 != (undefined *)0x0)) {
    F_00affb20(param_6,&(*(undefined4 *)(gen_frame + 0x140)));
  }
  return (*(byte *)(gen_frame + 0x28d));
}

/* ref: FUN_00afa520 */
byte F_00afa520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafa520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  byte bVar2;
  float * pfVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) - (float10)param_1[1])));
  (*(byte *)(gen_frame + 0x5f)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) - (float10)param_1[2])));
  do {
    if ((*(uint *)(gen_frame + 0x38)) == 0) {
      pfVar3 = (float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28);
      if (GEN_ISNAN(*pfVar3) || (0.0 < *pfVar3 || *pfVar3 == 0.0)) {
        param_4[1] = (*(float *)(gen_frame + 0x24));
        *param_4 = 0.0;
        param_4[2] = 0.0;
        goto LAB_00afa6b5;
      }
    }
    else {
      if ((*(uint *)(gen_frame + 0x38)) == 1) {
        uVar4 = 0;
        *param_4 = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
        if (*(int *)(param_3 + 0x10) != 0) {
          pfVar3 = (float *)(param_3 + 0x58);
          do {
            uVar4 = uVar4 + 1;
            *param_4 = (float)((float10)pfVar3[-2] + (float10)*param_4);
            param_4[1] = (float)((float10)pfVar3[-1] + (float10)param_4[1]);
            param_4[2] = (float)((float10)*pfVar3 + (float10)param_4[2]);
            pfVar3 = pfVar3 + 4;
          } while (uVar4 < *(uint *)(param_3 + 0x10));
        }
        fVar6 = (float10)*(int *)(param_3 + 0x10);
        if (*(int *)(param_3 + 0x10) < 0) {
          fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = (float)fVar6;
        fVar6 = (float10)(float)fVar6;
        fVar8 = (float)((float10)*param_4 / fVar6);
        (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar8;
        (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar8),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 0))));
        *param_4 = fVar8;
        (*(float *)(gen_frame + 0x54)) = (float)((float10)param_4[1] / fVar6);
        param_4[1] = (*(float *)(gen_frame + 0x54));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = (float)((float10)param_4[2] / fVar6);
        param_4[2] = (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4));
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) * (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) +
                          ((float10)fVar8 * (float10)fVar8 + (float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x54))))))
        ;
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x34)))));
        fVar6 = (float10)(*(float *)(gen_frame + 0x34));
        bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)0);
        if (bVar5 == (bVar5 || fVar6 == (float10)0)) {
          (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) * (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) +
                            ((float10)fVar8 * (float10)fVar8 + (float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x54))
                            ))));
          (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x34)))));
          (*(float *)(gen_frame + 0x34)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0x34)));
          fVar6 = (float10)(*(float *)(gen_frame + 0x34));
          (*(float *)(gen_frame + 0x34)) = (float)(fVar6 * (float10)*param_4);
          fVar7 = (float10)*(double *)&REFG(undefined, 0x10947d0);
          *param_4 = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)*param_4) * fVar7)));
          (*(float *)(gen_frame + 0x34)) = (float)(fVar6 * (float10)param_4[1]);
          param_4[1] = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)param_4[1]) * fVar7)));
          (*(float *)(gen_frame + 0x34)) = (float)((float10)param_4[2] * fVar6);
          param_4[2] = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)param_4[2] * fVar6))));
        }
      }
      else if ((*(uint *)(gen_frame + 0x38)) == 2) {
        *param_4 = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
        fVar8 = *(float *)(param_3 + 0x84);
        uVar4 = 0;
        (*(float *)(gen_frame + 0x3c)) = fVar8;
        if (*(int *)(param_3 + 0x10) != 0) {
          pfVar3 = (float *)(param_3 + 0x88);
          do {
            *param_4 = (float)((float10)pfVar3[-2] + (float10)*param_4);
            param_4[1] = (float)((float10)pfVar3[-1] + (float10)param_4[1]);
            param_4[2] = (float)((float10)*pfVar3 + (float10)param_4[2]);
            fVar1 = pfVar3[-1];
            (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = fVar1;
            (*(double *)(gen_frame + 0x40)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x40)) + 0))));
            if ((float10)(*(float *)(gen_frame + 0x3c)) < (float10)fVar1) {
              (*(float *)(gen_frame + 0x3c)) = fVar1;
              fVar8 = fVar1;
            }
            uVar4 = uVar4 + 1;
            pfVar3 = pfVar3 + 4;
          } while (uVar4 < *(uint *)(param_3 + 0x10));
        }
        fVar6 = (float10)*(int *)(param_3 + 0x10);
        if (*(int *)(param_3 + 0x10) < 0) {
          fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)(gen_frame + 0x34)) = (float)fVar6;
        param_4[1] = fVar8;
        fVar6 = (float10)(float)fVar6;
        *param_4 = (float)((float10)*param_4 / fVar6);
        param_4[2] = (float)((float10)param_4[2] / fVar6);
      }
LAB_00afa6b5: ;
      pfVar3 = (float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28);
      if (!GEN_ISNAN(*pfVar3) && (!(0.0 < *pfVar3) && *pfVar3 != 0.0)) {
        fVar6 = (float10)param_4[2] * (float10)param_4[2];
        (*(double *)(gen_frame + 0x48)) = (double)fVar6;
        fVar7 = (float10)*param_4 * (float10)*param_4;
        (*(double *)(gen_frame + 0x40)) = (double)fVar7;
        (*(float *)(gen_frame + 0x34)) = (float)(fVar7 + fVar6);
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x34)))));
        fVar6 = (float10)(*(float *)(gen_frame + 0x34));
        bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)0);
        if (bVar5 == (bVar5 || fVar6 == (float10)0)) {
          (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF((((float10)0 * (float10)0 + (float10)(*(double *)(gen_frame + 0x40))) + (float10)(*(double *)(gen_frame + 0x48)))));
          (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x34)))));
          (*(float *)(gen_frame + 0x34)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0x34)));
          fVar6 = (float10)(*(float *)(gen_frame + 0x34));
          (*(float *)(gen_frame + 0x34)) = (float)(fVar6 * (float10)*param_4);
          fVar7 = (float10)*(double *)&REFG(undefined, 0x10947d0);
          *param_4 = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)*param_4) * fVar7)));
          (*(float *)(gen_frame + 0x34)) = (float)(fVar6 * (float10)*(double *)&REFG(undefined, 0x108bec8));
          param_4[1] = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)*(double *)&REFG(undefined, 0x108bec8)) * fVar7)));
          (*(float *)(gen_frame + 0x34)) = (float)((float10)param_4[2] * fVar6);
          param_4[2] = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)param_4[2] * fVar6))));
        }
      }
      if (((param_4[1] < 0.0) && (!GEN_ISNAN((*(float *)(gen_frame + 0x24))) && !((*(float *)(gen_frame + 0x24)) <= 0.0))) ||
         ((0.0 < param_4[1] && ((*(float *)(gen_frame + 0x24)) < 0.0)))) {
        param_4[1] = 0.0;
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x30) = 0;
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x34) = 0;
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x38) = 0;
      }
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(ABS((float10)param_4[1])));
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x24)))));
      if ((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x24))))) < (float10)((float)GEN_TOF(ABS((float10)param_4[1])))) {
        param_4[1] = (*(float *)(gen_frame + 0x24));
      }
      fVar8 = param_4[1];
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar8;
      (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar8),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 0))));
      fVar1 = *param_4;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = fVar1;
      (*(double *)(gen_frame + 0x40)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x40)) + 0))));
      (*(float *)(gen_frame + 0x54)) = param_4[2];
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF((((float10)fVar8 * (float10)fVar8 + (float10)fVar1 * (float10)fVar1) +
                        (float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x54)))));
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x34)))));
      fVar6 = (float10)(*(float *)(gen_frame + 0x34));
      bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)0);
      if (bVar5 == (bVar5 || fVar6 == (float10)0)) {
        (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)*param_1);
        (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar8 + (float10)param_1[1]);
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x54)) + (float10)param_1[2]);
        (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 + (float10)*param_1);
        (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar8 + (float10)param_1[1]);
        (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x54)) + (float10)param_1[2]);
        bVar2 = F_00af9d80((*(undefined * PTR32 *)(gen_frame + 0x58)),param_1,&(*(float *)(gen_frame + 0x0)),0,0,0,0,1);
        if (bVar2 == 0) {
          return 1;
        }
      }
    }
    (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + 1;
    if (2 < (*(uint *)(gen_frame + 0x38))) {
      if (0.0 <= *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28)) {
        *param_4 = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
      }
      return (*(byte *)(gen_frame + 0x5f));
    }
  } while( true );
}

/* ref: FUN_00afa930 */
unsigned int F_00afa930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafa930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (param_1 != iVar1) {
    *(int *)((int)this + 0x14) = param_1;
    F_00af8d90(this,param_1,iVar1);
  }
  return 0;
}

/* ref: FUN_00afa950 */
unsigned int F_00afa950(unsigned int gen_a0)
{
  GEN_ENTER(0xafa950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 5) {
    *(undefined4 *)((int)this + 0x14) = 5;
    if (*(char *)((int)this + 0x5b) == '\0') {
      (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x44);
      uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      if ((float10)REFG(double, 0x10944b8) <= (float10)(*(float *)(gen_frame + 0x1c)) - (float10)*(float *)(uVar3 + 4)) {
        F_00aa3ff0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))),100,0);
      }
    }
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x68))) = 0;
    if ((*(int *)((int)this + 0x10) != 0) &&
       (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), in_ecx != 0)) {
      bVar2 = F_00a9f620(in_ecx);
      if (bVar2 != 0) {
        bVar2 = F_00ae8560(*(undefined4 *)((int)this + 0x10));
        if (bVar2 == 0) {
          puVar4 = (undefined4 *)F_00aeff30(this,((undefined1 *)(gen_frame + 0x0)));
          *(undefined4 *)&REFG(undefined, 0x14c0ad0) = *puVar4;
          *(undefined4 *)&REFG(undefined, 0x14c0ad4) = puVar4[1];
          *(undefined4 *)&REFG(undefined, 0x14c0ad8) = puVar4[2];
          REFG(undefined1, 0x14c0bc0) = 1;
        }
      }
    }
    F_00af5d10(this);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00afaa40 */
unsigned int F_00afaa40(unsigned int gen_a0)
{
  GEN_ENTER(0xafaa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    F_00aefee0(this);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00afaa70 */
byte F_00afaa70(unsigned int gen_a0)
{
  GEN_ENTER(0xafaa70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  
  fVar6 = *(float *)&REFG(undefined, 0x10ebbcc);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 == 1) {
    if (!(*(float *)&REFG(undefined, 0x10ebc7c) <= *(float *)((int)this + 0x20))) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x14) = 3;
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1339b98);
    fVar6 = *(float *)((int)this + 0x5c);
    if (GEN_ISNAN(fVar6) == (GEN_ISNAN(fVar6) || fVar6 == 0.0)) {
      (*(float *)(gen_frame + 0x18)) = fVar6;
      *(undefined4 *)((int)this + 0x5c) = 0;
    }
    F_00ae7a70(this,(*(float *)(gen_frame + 0x18)));
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)((int)this + 0x28));
    uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar3 + 4);
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(float *)((int)this + 0x50) = (*(float *)(gen_frame + 0x18));
    if (((*(int *)((int)this + 0x10) != 0) &&
        (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
       (bVar2 = F_00a9f620(iVar1), bVar2 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x14c0ae0);
      (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x14c0ae8);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      fVar6 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x0)));
      bVar4 = GEN_ISNAN((float10)fVar6) || GEN_ISNAN((float10)0);
      if (bVar4 == (bVar4 || (float10)fVar6 == (float10)0)) {
        F_004bd580(&(*(undefined4 *)(gen_frame + 0x0)));
      }
      *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)((int)this + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    fVar5 = (float10)*(float *)((int)this + 0x18) - (float10)*(double *)&REFG(undefined, 0x10ec4c8);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 5) {
        return 0;
      }
      if (!(*(float *)&REFG(undefined, 0x10ebc7c) <= *(float *)((int)this + 0x20))) {
        return 0;
      }
      *(undefined4 *)((int)this + 0x14) = 0;
      F_00aefee0(this);
      goto LAB_00afac98;
    }
    *(undefined4 *)((int)this + 0x14) = 4;
    F_00ae7a70(this,fVar6);
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)((int)this + 0x28));
    uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar3 + 4);
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(float *)((int)this + 0x50) = (*(float *)(gen_frame + 0x18));
    if (((*(int *)((int)this + 0x10) != 0) &&
        (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
       (bVar2 = F_00a9f620(iVar1), bVar2 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x14c0ae0);
      (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x14c0ae8);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      fVar6 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x0)));
      bVar4 = GEN_ISNAN((float10)fVar6) || GEN_ISNAN((float10)0);
      if (bVar4 == (bVar4 || (float10)fVar6 == (float10)0)) {
        F_004bd580(&(*(undefined4 *)(gen_frame + 0x0)));
      }
      *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)((int)this + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    fVar5 = (float10)*(float *)((int)this + 0x18);
  }
  *(float *)((int)this + 0x20) = (float)fVar5;
LAB_00afac98: ;
  (*(byte *)(gen_frame + 0x1f)) = 1;
  F_00afaa70(this);
  return (*(byte *)(gen_frame + 0x1f));
}

/* ref: FUN_00afacb0 */
uint F_00afacb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafacb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    (*(bool *)(gen_frame + 0x1f)) = *(int *)((int)this + 0x14) == 5;
    if ((*(char *)((int)this + 0xa6) == '\0') ||
       (iVar2 = (int)this + 0xd0, *(char *)((int)this + 0xcc) == '\0')) {
      iVar2 = (int)this + 0x80;
    }
    F_00a65a30(this,(uint)!(*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar2 + 0x10)));
    if ((*(bool *)(gen_frame + 0x1f)) == false) {
      if (param_1 == (undefined4 *)0x0) {
        F_00af98d0(*(undefined4 *)((int)this + 0x10),REFG(float, 0x10ebbf0),REFG(float, 0x10ebbf0),1,0,0,
                     (float)(float10)0);
      }
      else {
        iVar2 = *(int *)((int)this + 0x10);
        (*(undefined4 *)(gen_frame + 0x18)) = *param_1;
        puVar3 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)(iVar2 + 0x10));
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
        (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
        (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x18));
        F_00aec9f0(iVar2,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
    uVar4 = *(uint *)((int)this + 0x10);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 0x10) != 0)) {
      bVar1 = F_00a9f620(*(int *)(uVar4 + 0x10));
      uVar4 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar4 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,2,0);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00afae00 */
unsigned int F_00afae00(unsigned int gen_a0)
{
  GEN_ENTER(0xafae00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)(iVar1 + 100) == '\0')) {
      *(undefined1 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined1 *)((int)this + 0x1c) = 0;
      F_00af9b10(this);
    }
    if ((*(char *)((int)this + 9) != '\0') && (*(char *)(iVar1 + 0x65) == '\0')) {
      *(undefined1 *)((int)this + 9) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
      F_00aea850(this);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00afaf00 */
uint F_00afaf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafaf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float * pfVar1;
  int in_ecx;
  float fVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar4;
  undefined3 extraout_var_01 = 0;
  float10 fVar5;
  float10 fVar6;
  
  uVar4 = *(uint *)((int)this + 0x10);
  if ((uVar4 != 0) && (*(int *)(uVar4 + 0x10) != 0)) {
    bVar3 = F_00a9f620(*(int *)(uVar4 + 0x10));
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 != 0) {
      return uVar4;
    }
  }
  if (*(int *)((int)this + 0x14) != 4) {
    return uVar4;
  }
  uVar4 = 0;
  if (*(int *)((int)this + 0x10) == 0) {
LAB_00afaf65: ;
    if (*(int *)((int)this + 0x14) == 0) goto LAB_00afb01f;
    if (*(char *)((int)this + 0x5b) == '\0') {
      (*(undefined4 *)(gen_frame + 0xc0)) = *(undefined4 *)((int)this + 0xb0);
      (*(float *)(gen_frame + 0xc4)) = *(float *)((int)this + 0xb4);
      (*(undefined4 *)(gen_frame + 0xc8)) = *(undefined4 *)((int)this + 0xb8);
      if (*(char *)((int)this + 0xa6) == '\0') {
        return uVar4;
      }
      (*(float *)(gen_frame + 0xdc)) = *(float *)((int)this + 0x18);
      (*(float *)(gen_frame + 0xd8)) = *(float *)((int)this + 200);
      fVar5 = (float10)*(float *)((int)this + 200);
      fVar6 = (float10)*(float *)((int)this + 0x18);
      pfVar1 = (float *)((int)this + 0x20);
      if ((!GEN_ISNAN(REFG(float, 0x10ebc30)) && !GEN_ISNAN(*pfVar1)) &&
          (!(REFG(float, 0x10ebc30) < *pfVar1) && REFG(uint, 0x10ebc30) != *pfVar1)) {
        return uVar4;
      }
      if (!(fVar5 <= fVar6)) {
        return uVar4;
      }
      fVar5 = fVar5 - fVar6;
      if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN((float10)*(double *)&REFG(undefined, 0x1094878))) &&
          !(fVar5 < (float10)*(double *)&REFG(undefined, 0x1094878))) {
        return uVar4;
      }
      uVar4 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      if ((float10)*(float *)&REFG(undefined, 0x1339b74) + (float10)(*(float *)(gen_frame + 0xc4)) < (float10)*(float *)(uVar4 + 4)) {
        return uVar4;
      }
      goto LAB_00afb066;
    }
  }
  else {
    in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
    uVar4 = 0;
    if (in_ecx == 0) goto LAB_00afaf65;
    bVar3 = F_00a9f620(in_ecx);
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 == 0) goto LAB_00afaf65;
LAB_00afb01f: ;
    if (*(char *)((int)this + 0x5b) == '\0') {
      return uVar4;
    }
  }
  (*(float *)(gen_frame + 0xc4)) = *(float *)((int)this + 100);
  (*(undefined4 *)(gen_frame + 0xc8)) = *(undefined4 *)((int)this + 0x68);
  (*(undefined4 *)(gen_frame + 0xc0)) = *(undefined4 *)((int)this + 0x60);
  if (!(((float10)GEN_TOD(gen_bits2f(param_1[1]))) <= (float10)(*(float *)(gen_frame + 0xc4)))) {
    return uVar4;
  }
  *param_1 = *(undefined4 *)((int)this + 0x60);
  param_1[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc4)));
  param_1[2] = (*(undefined4 *)(gen_frame + 0xc8));
LAB_00afb066: ;
  F_00afa950(this);
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined2 *)(gen_frame + 0x90)) = 0;
  (*(undefined1 *)(gen_frame + 0x92)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined2 *)(gen_frame + 0xb0)) = 0;
  (*(undefined1 *)(gen_frame + 0xb2)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(float *)(gen_frame + 0xd8)) = F_00ae9520(*(undefined * PTR32 *)((int)this + 0x10));
  fVar2 = (*(float *)(gen_frame + 0xdc));
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0xdc)) + 0)) = 0;
  (*(float *)(gen_frame + 0xdc)) = gen_bits2f((uint)gen_fl2bits(fVar2) & 0xffffff00);
  bVar3 = F_00ae96c0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x0)),0);
  if (bVar3 != 0) {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0xdc)) + 0)) = 1;
    (*(float *)(gen_frame + 0xdc)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0xdc)), 1, 3),1));
    (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0xd8)) + (float10)*(double *)&REFG(undefined, 0x10944e0));
  }
  bVar3 = F_00af6450(*(undefined4 *)((int)this + 0x10),&(*(undefined4 *)(gen_frame + 0xc0)),&(*(float *)(gen_frame + 0xdc)),(*(float *)(gen_frame + 0xd8)),REFG(float, 0x10ebbf0),
                       &(*(undefined4 *)(gen_frame + 0x30)),1,REFG(float, 0x10ebd3c),&(*(float *)(gen_frame + 0xc4)),0,(uint)gen_fl2bits((*(float *)(gen_frame + 0xdc))));
  if (bVar3 == 0) {
    bVar3 = F_00ae7ad0(this);
    if (bVar3 == 0) {
      return CONCAT31(extraout_var_01,bVar3);
    }
    param_1[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc4)));
    return CONCAT31(extraout_var_01,bVar3);
  }
  bVar3 = F_00ae7ad0(this);
  if (bVar3 != 0) {
    param_1[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xdc)));
  }
  uVar4 = F_00aed0a0(*(undefined * PTR32 *)((int)this + 0x10),param_1,&(*(undefined4 *)(gen_frame + 0x30)));
  return uVar4;
}

/* ref: FUN_00afb5c0 */
uint F_00afb5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xafb5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  
  F_00afb490(this);
  iVar1 = *(int *)((int)this + 0x14);
  uVar2 = extraout_EAX;
  if (iVar1 != 1) {
    *(undefined4 *)((int)this + 0x14) = 1;
    uVar2 = F_00af5cb0(this);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00afb6c0 */
uint F_00afb6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xafb6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if ((*(int *)((int)this + 0x14) != 0) && (*(char *)((int)this + 0x70) == '\0')) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0xec);
    F_00afacb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  if (*(char *)((int)this + 0x94) == '\0') {
    F_00afb490(this);
    iVar1 = *(int *)((int)this + 0x14);
    if (iVar1 != 1) {
      *(undefined4 *)((int)this + 0x14) = 1;
      F_00af5cb0(this);
      if (iVar1 != 5) {
        *(undefined4 *)((int)this + 0x20) = 0;
      }
    }
  }
  else {
    F_00afb5f0(this);
  }
  uVar2 = REFG(float, 0x10ebbf0);
  *(undefined4 *)((int)this + 0xe0) = REFG(float, 0x10ebbf0);
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0xf6) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = uVar2;
  *(undefined1 *)((int)this + 0x11c) = 0;
  *(undefined1 *)((int)this + 0xcc) = 1;
  return 0;
}

/* ref: FUN_00afb860 */
uint F_00afb860(unsigned int gen_a0)
{
  GEN_ENTER(0xafb860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  byte bVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar5 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  *(undefined4 *)((int)this + 0x430) = *puVar5;
  *(undefined4 *)((int)this + 0x434) = uVar1;
  *(undefined4 *)((int)this + 0x438) = uVar2;
  *(float *)((int)this + 0x20c) = *(float *)((int)this + 0x208);
  if (*(int *)((int)this + 0x204) != 0) {
    *(float *)((int)this + 0x208) =
         ((float)GEN_TOF((((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                 (float10)*(float *)((int)this + 0x208)) + (float10)0)));
    *(float *)((int)this + 0x210) =
         ((float)GEN_TOF((((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                 (float10)*(float *)((int)this + 0x210)) + (float10)0)));
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x200) + 0x68))) != '\0') {
      *(float *)((int)this + 0x244) =
           ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                  (float10)*(float *)((int)this + 0x244))));
    }
  }
  if (*(int *)((int)this + 0x10) == 0) {
LAB_00afb924: ;
    if (*(char *)((int)this + 0x1cc) == '\0') {
      if (*(int *)((int)this + 0x10) != 0) {
        bVar4 = F_00a9f620(*(int *)((int)this + 0x10));
        if ((bVar4 != 0) && (REFG(char, 0x14c0a65) != '\0')) goto LAB_00afb94f;
      }
      if (*(char *)((int)this + 0x1cd) == '\0') goto LAB_00afb98b;
    }
  }
  else {
    bVar4 = F_00a9f620(*(int *)((int)this + 0x10));
    if ((bVar4 == 0) || (REFG(char, 0x14c0a64) == '\0')) goto LAB_00afb924;
  }
LAB_00afb94f: ;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 0x80)
                 )));
  *(float *)((int)this + 0x80) = fVar3;
  if ((float10)REFG(float, 0x10ec4c0) < (float10)fVar3) {
    *(float *)((int)this + 0x80) = REFG(float, 0x10ec4c0);
  }
LAB_00afb98b: ;
  if (*(int *)((int)this + 0x10) != 0) {
    bVar4 = F_00a9f620(*(int *)((int)this + 0x10));
    if (bVar4 != 0) {
      F_00af2ad0(&REFG(undefined, 0x14c0a50));
    }
  }
  uVar6 = *(uint *)((int)this + 0x1c8);
  if (uVar6 != 0) {
    if ((*(char *)((int)this + 0x1cc) != '\0') && (*(char *)(uVar6 + 100) == '\0')) {
      *(undefined1 *)((int)this + 0x1cc) = 0;
      *(undefined4 *)((int)this + 0x1dc) = 0;
      *(undefined1 *)((int)this + 0x1e0) = 0;
      *(undefined4 *)((int)this + 0x1d0) = 0;
      *(undefined4 *)((int)this + 0x1d8) = 0;
      F_00af9b10((undefined *)((int)this + 0x1c4));
    }
    if ((*(char *)((int)this + 0x1cd) != '\0') && (*(char *)(uVar6 + 0x65) == '\0')) {
      *(undefined1 *)((int)this + 0x1cd) = 0;
      *(undefined4 *)((int)this + 0x1d4) = 0;
      uVar6 = F_00aea850((undefined *)((int)this + 0x1c4));
    }
  }
  *(undefined4 *)((int)this + 0x450) = 0;
  return uVar6;
}

/* ref: FUN_00afbac0 */
uint F_00afbac0(unsigned int gen_a0)
{
  GEN_ENTER(0xafbac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar2 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar2);
    if ((bVar2 != 0) && ((REFG(char, 0x14c0a64) != '\0' || (REFG(char, 0x14c0a65) != '\0')))) {
      in_EAX = F_00afff50(&REFG(undefined, 0x14c0a50));
    }
  }
  if ((*(char *)((int)this + 0x1cc) != '\0') || (*(char *)((int)this + 0x1cd) != '\0')) {
    *(undefined1 *)((int)this + 0x1cc) = 0;
    *(undefined4 *)((int)this + 0x1d0) = 0;
    *(undefined4 *)((int)this + 0x1d8) = 0;
    *(undefined4 *)((int)this + 0x1dc) = 0;
    *(undefined1 *)((int)this + 0x1e0) = 0;
    F_00af9b10((undefined *)((int)this + 0x1c4));
    *(undefined1 *)((int)this + 0x1cd) = 0;
    *(undefined4 *)((int)this + 0x1d4) = 0;
    in_EAX = F_00aea850((undefined *)((int)this + 0x1c4));
  }
  uVar1 = REFG(float, 0x10ebbf0);
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined2 *)((int)this + 0x65) = 0;
  *(undefined1 *)((int)this + 0x67) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x80) = uVar1;
  return in_EAX;
}

/* ref: FUN_00afbbd0 */
uint F_00afbbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafbbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = F_00afbac0(this);
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && ((char)param_1 != '\0')) {
      uVar2 = F_00aee2a0(&REFG(undefined, 0x14c0a50),0);
    }
  }
  return uVar2;
}

/* ref: FUN_00afbcd0 */
unsigned int F_00afbcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xafbcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined1 * param_5 = (undefined1 *)(uintptr_t)gen_a5;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a6;
  undefined1 * param_7 = (undefined1 *)(uintptr_t)gen_a7;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  float10 fVar8;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  F_00aef9b0(this,param_1);
  cVar7 = (char)param_1;
  if ((*(char *)((int)this + 0x14) == '\0') && (cVar7 != '\0')) {
    *(undefined1 *)((int)this + 0x14) = 1;
  }
  if ((*(char *)((int)this + 0x15) == '\0') && ((char)param_2 != '\0')) {
    *(undefined1 *)((int)this + 0x15) = 1;
  }
  F_00af4710(this,param_1,param_2);
  if (cVar7 != '\0') {
    fVar8 = F_00aeb260(*(float *)((int)this + 0xd0));
    uVar6 = F_00ae9230(*(undefined4 *)((int)this + 0x10),(float)fVar8,param_4);
    *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6c))) = uVar6;
  }
  F_00aef8e0(this,param_1,param_2);
  if ((*(char *)((int)this + 0x273) != '\0') ||
     (bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30), bVar4 == 0)) {
    iVar2 = *(int *)((int)this + 0x10);
    iVar3 = *(int *)(iVar2 + 0x204);
    if (((iVar3 == 0) || ((iVar3 == 5 || (iVar3 == 1)))) &&
       ((*(char *)((int)this + 0x1a) == '\0' &&
        ((((*(char *)((int)this + 0x29) == '\0' && (*(char *)(iVar2 + 0x1cc) == '\0')) &&
          (*(char *)(iVar2 + 0x1cd) == '\0')) && (*(char *)(iVar2 + 0x359) == '\0')))))) {
      bVar4 = F_00aea660(this);
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      F_00afbac0(this_00);
      iVar2 = *(int *)((int)this_00 + 0x10);
      if (((iVar2 != 0) && (bVar5 = F_00a9f620(iVar2), bVar5 != 0)) && (bVar4 == 0)) {
        F_00aee2a0(&REFG(undefined, 0x14c0a50),0);
      }
    }
  }
  if ((*(char *)(iVar1 + 100) != '\0') && (param_5 != (undefined1 *)0x0)) {
    *param_5 = 1;
  }
  if ((*(char *)(iVar1 + 0x65) != '\0') && (param_6 != (undefined1 *)0x0)) {
    *param_6 = 1;
  }
  if (((char)param_3 != '\0') && (param_7 != (undefined1 *)0x0)) {
    *param_7 = 1;
  }
  if (((cVar7 != '\0') || ((char)param_2 != '\0')) || (*(char *)((int)this + 0x2b) != '\0')) {
    F_00a9fd20(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))),(uint)*(byte *)(iVar1 + 100),
                 (uint)*(byte *)(iVar1 + 0x65),param_3,param_1,param_2,
                 (uint)*(byte *)((int)this + 0x2b));
  }
  if (*(int *)(iVar1 + 0x60) == 0) {
    *(undefined4 *)(iVar1 + 0x60) = 1;
  }
  return 0;
}

/* ref: FUN_00afbe90 */
uint F_00afbe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafbe90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  undefined * this_00;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x10);
  iVar1 = *(int *)(uVar3 + 0x204);
  if (((iVar1 == 0) || (((iVar1 != 3 && (iVar1 != 4)) && (iVar1 != 2)))) ||
     (*(char *)(uVar3 + 0x24b) != '\0')) {
    (*(undefined4 *)(gen_frame + 0x90)) = *param_2;
    (*(undefined4 *)(gen_frame + 0x94)) = param_2[1];
    (*(undefined4 *)(gen_frame + 0x98)) = param_2[2];
    (*(char *)(gen_frame + 0xae)) = '\0';
    (*(char *)(gen_frame + 0xaf)) = '\0';
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined2 *)(gen_frame + 0x60)) = 0;
    (*(undefined1 *)(gen_frame + 0x62)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    bVar2 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x90)),param_1);
    if (bVar2 == 0) {
      F_00af6bb0(this,param_1,&(*(undefined4 *)(gen_frame + 0x90)),param_2,&(*(char *)(gen_frame + 0xae)),&(*(char *)(gen_frame + 0xaf)),&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0);
    }
    bVar2 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x90)),param_1);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      F_00aec9f0(*(undefined4 *)((int)this + 0x10),(uint)&(*(undefined4 *)(gen_frame + 0x90)));
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      if ((*(char *)(gen_frame + 0xae)) != '\0') {
        F_00afb5f0((undefined *)((int)this_00 + 0x1f0));
        return extraout_EAX;
      }
      if ((*(char *)(gen_frame + 0xaf)) != '\0') {
        F_00afba90(this_00);
        return extraout_EAX_00;
      }
      uVar3 = F_00aed0a0(this_00,&(*(undefined4 *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x0)));
    }
  }
  return uVar3;
}

/* ref: FUN_00afcd60 */
float10 F_00afcd60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xafcd60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  byte bVar1;
  float10 extraout_ST0;
  float10 fVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (bVar1 = F_00a9f620(*(int *)(param_1 + 0x10)), bVar1 != 0)) {
    return extraout_ST0;
  }
  fVar2 = F_00afc4f0(param_1 + 0x1c4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return fVar2;
}

/* ref: FUN_00afcdc0 */
float10 F_00afcdc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafcdc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float10 fVar1;
  
  fVar1 = F_00afc8a0(param_1 + 0x1c4,param_2,(undefined4)gen_fl2bits(param_3),param_4,param_5);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return fVar1;
}

/* ref: FUN_00afce30 */
unsigned int F_00afce30(unsigned int gen_a0)
{
  GEN_ENTER(0xafce30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar6 = F_00aea5a0(this,0);
    uVar5 = (*(uint *)(gen_frame + 0x14));
    uVar4 = (*(uint *)(gen_frame + 0x10));
    uVar3 = (*(uint *)(gen_frame + 0xc));
    if (bVar6 != 0) {
      if (*(char *)((int)this + 0x22) != '\0') {
        (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10ebbf0);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x14)) = uVar5 & 0xffffff00;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x10)) = uVar4 & 0xffffff00;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
        (*(uint *)(gen_frame + 0xc)) = uVar3 & 0xffffff00;
        F_00aee340(this,(uint)&(*(uint *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x10)));
        F_00af43e0(this,(float)(float10)0,&REFG(float, 0x1375ac0),0,0,(*(uint *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0xc)));
        uVar1 = *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 100)));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = uVar1;
        (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),uVar1);
        bVar6 = F_00ae8680(*(int *)((int)this + 0x10));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = bVar6;
        (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),bVar6);
        F_00afbcd0(this,(*(uint *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),0,(*(uint *)(gen_frame + 0x10)),0,0,0);
        F_00af6310(*(undefined * PTR32 *)((int)this + 0x10));
        F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,0,1);
      }
      fVar2 = REFG(float, 0x10ebbf0);
      *(undefined1 *)((int)this + 0x22) = 0;
      *(float *)((int)this + 0x24) = fVar2;
      *(undefined1 *)((int)this + 0x28) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00afcf00 */
uint F_00afcf00(unsigned int gen_a0)
{
  GEN_ENTER(0xafcf00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    in_EAX = F_00afbac0(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined1 *)((int)this + 0x19) = 0;
  if (*(char *)((int)this + 0x17) == '\0') {
LAB_00afcf35: ;
    uVar3 = in_EAX & 0xffffff00;
  }
  else {
    uVar3 = F_00b6afa0();
    in_EAX = 0;
    if (uVar3 == 0) goto LAB_00afcf35;
    bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    in_EAX = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) goto LAB_00afcf35;
    uVar3 = CONCAT31(extraout_var,1);
  }
  *(char *)((int)this + 0x17) = (char)uVar3;
  if ((char)uVar3 != '\0') {
    uVar4 = F_00b6afa0();
    uVar3 = 0;
    if (uVar4 != 0) {
      bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) goto LAB_00afcf58;
    }
    *(undefined1 *)((int)this + 0x17) = 0;
  }
LAB_00afcf58: ;
  uVar1 = REFG(float, 0x10ebbf0);
  *(undefined1 *)((int)this + 0x1a) = 0;
  *(undefined1 *)((int)this + 0x275) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x108) = uVar1;
  *(undefined4 *)((int)this + 0x10c) = uVar1;
  *(undefined4 *)((int)this + 0x110) = uVar1;
  *(undefined4 *)((int)this + 0x114) = uVar1;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined1 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  return uVar3;
}

/* ref: FUN_00afd000 */
uint F_00afd000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafd000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined * this_00;
  bool bVar11;
  
  uVar9 = (*(uint *)(gen_frame + 0x49));
  uVar8 = (*(uint *)(gen_frame + 0x45));
  uVar7 = (*(uint *)(gen_frame + 0x3c));
  uVar6 = (*(uint *)(gen_frame + 0x30));
  uVar5 = (*(uint *)(gen_frame + 0x28));
  uVar4 = (*(uint *)(gen_frame + 0x24));
  uVar3 = (*(uint *)(gen_frame + 0x1c));
  uVar2 = (*(uint *)(gen_frame + 0x18));
  if (param_1 != (char *)0x0) {
    *param_1 = '\0';
  }
  if (param_2 != (char *)0x0) {
    *param_2 = '\0';
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (((iVar1 == 0) || (*(char *)(iVar1 + 0x1cc) != '\0')) || (*(char *)(iVar1 + 0x1cd) != '\0')) {
    return 0;
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x45)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x45)) = uVar8 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = uVar7 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x49)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x49)) = uVar9 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x24)) = uVar4 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x30)) = uVar6 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar5 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x18)) = uVar2 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar3 & 0xffffff00;
  (*(float *)(gen_frame + 0x34)) = 0.0;
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(float *)(gen_frame + 0x40)) = REFG(float, 0x10ebbf0);
  F_00afbc10(this,&(*(uint *)(gen_frame + 0x1c)));
  this_00 = (undefined *)F_00424770(REFG(undefined4, 0x137104c));
  bVar10 = F_00a34970(this_00,0x130);
  if (bVar10 != 0) {
    bVar11 = *(char *)((int)this + 0x16) == '\0';
    *(bool *)((int)this + 0x16) = bVar11;
    if ((*(char *)((int)this + 0x17) != '\0') && (*(int *)((int)this + 0x164) != 4)) {
      *(bool *)((int)this + 0x1c) = bVar11;
    }
  }
  F_00af6a20(this,&(*(uint *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x49)),&(*(float *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x45)),&(*(uint *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x30)));
  F_00aeed60(this,(uint)&(*(float *)(gen_frame + 0x34)),(uint)&(*(float *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x2c)),(uint)&(*(uint *)(gen_frame + 0x45)),&(*(uint *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x0)),
               &(*(uint *)(gen_frame + 0x49)),&(*(float *)(gen_frame + 0x40)));
  F_00aee340(this,(uint)&(*(uint *)(gen_frame + 0x49)),&(*(float *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x30)));
  F_00aef6e0(this,(uint)&(*(uint *)(gen_frame + 0x45)));
  F_00ae9de0(this);
  uVar3 = (*(uint *)(gen_frame + 0x45));
  uVar2 = (*(uint *)(gen_frame + 0x20));
  if (((GEN_ISNAN((*(float *)(gen_frame + 0x34))) == (GEN_ISNAN((*(float *)(gen_frame + 0x34))) || (*(float *)(gen_frame + 0x34)) == 0.0)) ||
      (GEN_ISNAN((*(float *)(gen_frame + 0x38))) == (GEN_ISNAN((*(float *)(gen_frame + 0x38))) || (*(float *)(gen_frame + 0x38)) == 0.0))) ||
     ((GEN_ISNAN((*(float *)(gen_frame + 0x2c))) == (GEN_ISNAN((*(float *)(gen_frame + 0x2c))) || (*(float *)(gen_frame + 0x2c)) == 0.0) ||
      (((char)(*(uint *)(gen_frame + 0x3c)) != '\0' || ((char)(*(uint *)(gen_frame + 0x49)) != '\0')))))) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x20)) = uVar2 & 0xffffff00;
    F_00af3c30(this,(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(uint)&(*(uint *)(gen_frame + 0x20)));
    F_00af6ad0(this,(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x20)),uVar3,(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x0)),
                 (*(uint *)(gen_frame + 0x49)),(*(float *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x28)),&(*(uint *)(gen_frame + 0x18)));
  }
  (*(char *)(gen_frame + 0x4f)) = '\0';
  (*(char *)(gen_frame + 0x4e)) = '\0';
  (*(undefined1 *)(gen_frame + 0x4d)) = 0;
  F_00afbcd0(this,(*(uint *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x1c)),uVar3,&(*(char *)(gen_frame + 0x4f)),&(*(char *)(gen_frame + 0x4e)),&(*(undefined1 *)(gen_frame + 0x4d)));
  if (((char)(*(uint *)(gen_frame + 0x28)) != '\0') && ((char)(*(uint *)(gen_frame + 0x45)) != '\0')) {
    F_00af2210(*(undefined4 *)((int)this + 0x10),*(float *)((int)this + 0xd0));
  }
  if (param_1 != (char *)0x0) {
    *param_1 = (*(char *)(gen_frame + 0x4f));
  }
  if (param_2 != (char *)0x0) {
    *param_2 = (*(char *)(gen_frame + 0x4e));
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (*(undefined1 *)(gen_frame + 0x4d));
  }
  *(undefined2 *)((int)this + 0x174) = 0;
  *(undefined1 *)((int)this + 0x176) = 0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  if (((*(char *)(gen_frame + 0x4f)) == '\0') && ((*(char *)(gen_frame + 0x4e)) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00afd2a0 */
byte F_00afd2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafd2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab2840((uint)(byte)param_1);
  if (uVar1 != 0) {
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(uVar1 + 0x20);
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(uVar1 + 0x24);
    *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(uVar1 + 0x28);
    *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(uVar1 + 0x2c);
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(uVar1 + 0x30);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar1 + 0x50);
    *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(uVar1 + 0x54);
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(uVar1 + 0x58);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(uVar1 + 0x18);
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(uVar1 + 0x1c);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(uVar1 + 0x34);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(uVar1 + 0x38);
    *(undefined4 *)((int)this + 100) = *(undefined4 *)(uVar1 + 0x3c);
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(uVar1 + 0x40);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(uVar1 + 0x44);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(uVar1 + 0x48);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(uVar1 + 0x4c);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(uVar1 + 0x14);
  }
  *(undefined1 *)((int)this + 0xb0) = 1;
  if ((byte)param_1 == 0) {
    F_00afca20(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1f0))));
  }
  return uVar1 != 0;
}

/* ref: FUN_00afd360 */
uint F_00afd360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafd360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
  }
  (*(undefined4 *)(gen_frame + 0x40)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x44)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x48)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x50)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x54)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x58)) = param_1[2];
  if (param_2 == (float *)0x0) {
    (*(float *)(gen_frame + 0x6c)) = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xb0)));
  }
  else {
    (*(float *)(gen_frame + 0x6c)) = *param_2;
    fVar3 = F_00aeb260(*param_2);
    (*(float *)(gen_frame + 0x6c)) = (float)fVar3;
  }
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)((int)this + 0x2c);
  F_00afcf00(this);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x29) = 1;
  *(undefined4 *)((int)this + 0xf0) = (*(undefined4 *)(gen_frame + 0x50));
  *(undefined4 *)((int)this + 0xf4) = (*(undefined4 *)(gen_frame + 0x54));
  *(undefined4 *)((int)this + 0xf8) = (*(undefined4 *)(gen_frame + 0x58));
  *(float *)((int)this + 0x100) = (*(float *)(gen_frame + 0x6c));
  if (param_3 != 0) {
    F_00afee90(((undefined1 *)(gen_frame + 0x8)),param_3);
    F_00ae5a80((undefined *)((int)this + 0x104),((undefined1 *)(gen_frame + 0x8)));
  }
  uVar2 = F_00afd000(this,0,0,0);
  if ((*(char *)((int)this + 0x14) != '\0') || (*(char *)((int)this + 0x15) != '\0')) {
    *(undefined4 *)(iVar1 + 0x60) = 4;
  }
  if (*(char *)((int)this + 0x14) != '\0') {
    *(undefined4 *)((int)this + 0x2c) = (*(undefined4 *)(gen_frame + 0x68));
    uVar2 = param_3;
    if ((param_3 != 0) && (*(char *)(param_3 + 0x2a) != '\0')) {
      *(undefined1 *)(iVar1 + 0x69) = 1;
      *(undefined1 *)(iVar1 + 0x6a) = *(undefined1 *)(param_3 + 0x2b);
    }
  }
  return uVar2;
}

/* ref: FUN_00afd4c0 */
uint F_00afd4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafd4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_0054ccb0(param_1,param_2);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar2 = F_00afbe90(this,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00afd620 */
byte F_00afd620(unsigned int gen_a0)
{
  GEN_ENTER(0xafd620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  byte bVar2;
  float * pfVar3;
  undefined4 * puVar4;
  
  if (((*(int *)((int)this + 0x10) != 0) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
     (bVar2 = F_00a9f620(iVar1), bVar2 != 0)) {
    if (REFG(char, 0x14c0a40) == '\0') {
      return 0;
    }
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x420))) == '\0') {
      return 0;
    }
  }
  iVar1 = *(int *)((int)this + 0x14);
  if ((iVar1 != 0) && (((iVar1 == 3 || (iVar1 == 4)) || (iVar1 == 2)))) {
    pfVar3 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    (*(float *)(gen_frame + 0x24)) = pfVar3[1];
    (*(float *)(gen_frame + 0x20)) = *pfVar3;
    (*(float *)(gen_frame + 0x28)) = pfVar3[2];
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) + (float10)pfVar3[1])));
    if (((*(char *)((int)this + 0x5b) == '\0') && (*(int *)((int)this + 0x10) != 0)) &&
       ((iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0 &&
        (bVar2 = F_00a9f620(iVar1), bVar2 != 0)))) {
      F_00aeff30(this,&(*(float *)(gen_frame + 0x10)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x18)) + (float10)(*(float *)(gen_frame + 0x28)));
    }
    puVar4 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x4)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x8)) = puVar4[2];
    pfVar3 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    (*(float *)(gen_frame + 0x10)) = *pfVar3;
    (*(float *)(gen_frame + 0x14)) = pfVar3[1];
    (*(float *)(gen_frame + 0x18)) = pfVar3[2];
    F_00afcc90(this,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)));
    pfVar3 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    (*(float *)(gen_frame + 0x10)) = *pfVar3;
    (*(float *)(gen_frame + 0x14)) = pfVar3[1];
    (*(float *)(gen_frame + 0x18)) = pfVar3[2];
    bVar2 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)));
    if (bVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00afd7d0 */
uint F_00afd7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafd7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(float *)(gen_frame + 0xc)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if (param_3 != 0) {
    F_00ae5a80(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),param_3);
  }
  if ((*(int *)((int)this + 0x10) == 0) ||
     (bVar1 = F_00a9f620(*(int *)((int)this + 0x10)), bVar1 == 0)) {
    if ((((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0xc)) == REFG(float, 0x10ebbf0))) &&
        ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
         ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x18)) == REFG(float, 0x10ebbf0)))) ||
       (((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 2)) == '\0' &&
        (((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x14)) == REFG(float, 0x10ebbf0)) &&
         ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x1c)) == REFG(float, 0x10ebbf0)))))))) {
      if (((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
           ((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0xc)) == REFG(float, 0x10ebbf0))) &&
         ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x18)) == REFG(float, 0x10ebbf0)))) {
        (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1339b14);
        (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1339b1c);
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
      }
      if ((((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 2)) == '\0') &&
          ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
           ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x14)) == REFG(float, 0x10ebbf0)))) &&
         ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x1c)) == REFG(float, 0x10ebbf0)))) {
        (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1339b20);
        (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10ebc44);
        (*(undefined4 *)(gen_frame + 0x28)) = 4;
      }
    }
    F_00afc050((undefined *)((int)this + 0x1c4),param_1,param_2,4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    uVar2 = extraout_EAX;
  }
  else {
    uVar2 = F_00afd360(&REFG(undefined, 0x14c0a50),param_1,param_2,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  return uVar2;
}

/* ref: FUN_00afd950 */
uint F_00afd950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafd950u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10ebbf0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if ((*(int *)&gen_args[2]) != 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((*(int *)&gen_args[2]) + 4);
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((*(int *)&gen_args[2]) + 8);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((*(int *)&gen_args[2]) + 0x10);
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((*(int *)&gen_args[2]) + 0xc);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x2c)) + 1)) = *(byte *)((*(int *)&gen_args[2]) + 0x14);
    (*(int *)(gen_frame + 0x2c)) = (uint)*(byte *)((*(int *)&gen_args[2]) + 0x14) << 8;
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)((*(int *)&gen_args[2]) + 0x18);
  }
  uVar1 = F_00afd7d0((*(undefined * PTR32 *)&gen_args[0]),0,&(*(undefined4 *)&gen_args[1]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00afd9f0 */
uint F_00afd9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafd9f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
    bVar1 = F_00a9f620(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      if (!GEN_ISNAN((*(float *)&gen_args[3])) && !(0.0 <= (*(float *)&gen_args[3]))) {
        (*(float *)&gen_args[3]) = 0.0;
      }
      F_00afacb0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f0))),0);
      (*(undefined4 *)(gen_frame + 0x24)) = 3;
      (*(undefined4 *)(gen_frame + 0x28)) = 3;
      (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x10ebbf0);
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10ebbf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10ebbf0);
      (*(undefined1 *)(gen_frame + 0x33)) = (undefined1)(*(undefined4 *)&gen_args[4]);
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined2 *)(gen_frame + 0x30)) = 0;
      (*(undefined1 *)(gen_frame + 0x34)) = 0;
      (*(float *)(gen_frame + 0x18)) = (*(float *)&gen_args[3]);
      (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
      (*(undefined4 *)(gen_frame + 0x38)) = 2;
      (*(undefined1 *)(gen_frame + 0x32)) = 1;
      in_EAX = F_00afd7d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return in_EAX;
}

/* ref: FUN_00afdcb0 */
uint F_00afdcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafdcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((REFG(char, 0x14c0a40) != '\0') && (*(char *)((int)this + 0x420) != '\0')) {
    uVar1 = F_00afd000(&REFG(undefined, 0x14c0a50),param_1,param_2,param_3);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00afdce0 */
uint F_00afdce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafdce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      bVar1 = F_00afd2a0(&REFG(undefined, 0x14c0a50),param_1);
      return CONCAT31(extraout_var_00,bVar1);
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00afdd10 */
uint F_00afdd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafdd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined4 * puVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (bVar1 = F_00a9f620(*(int *)((int)this + 0x10)), bVar1 != 0)) {
    bVar1 = F_0054ccb0(param_1,param_2);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var_00,bVar1);
    }
    uVar3 = F_00afbe90(&REFG(undefined, 0x14c0a50),param_1,param_2);
    return uVar3;
  }
  puVar2 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0x10))));
  (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = puVar2[2];
  bVar1 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x0)),param_2);
  if (bVar1 != 0) {
    return CONCAT31(extraout_var,bVar1);
  }
  puVar2 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0x10))));
  (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = puVar2[2];
  F_00aec9f0(*(undefined4 *)((int)this + 0x1c8),param_2);
  uVar3 = F_00af9b80((undefined *)((int)this + 0x1c4),&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00afde00 */
uint F_00afde00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafde00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  
  F_00aff630(this);
  uVar3 = REFG(float, 0x10ebd70);
  uVar1 = REFG(float, 0x10ebc48);
  if (param_1 == 0) {
    F_00a4a760(&REFG(undefined, 0x14a7360),0x20,0);
    uVar5 = F_00a4a760(&REFG(undefined, 0x14a7360),0x2d,0);
    return uVar5;
  }
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  uVar2 = REFG(float, 0x10ebc08);
  *(undefined4 *)((int)this + 0x34) = uVar3;
  uVar1 = REFG(float, 0x10928e4);
  *(undefined4 *)((int)this + 0x40) = uVar2;
  uVar3 = REFG(float, 0x10ebc4c);
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  uVar1 = REFG(float, 0x1339afc);
  *(undefined4 *)((int)this + 0x58) = uVar3;
  uVar3 = REFG(float, 0x1339b0c);
  *(undefined4 *)((int)this + 0x48) = uVar1;
  uVar1 = REFG(float, 0x1339b00);
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  uVar3 = REFG(float, 0x1339b08);
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  uVar1 = REFG(float, 0x1339b04);
  *(undefined4 *)((int)this + 0x60) = uVar3;
  uVar3 = REFG(float, 0x14c0a48);
  *(undefined4 *)((int)this + 0x50) = uVar1;
  uVar1 = REFG(float, 0x10ebd00);
  *(undefined4 *)((int)this + 100) = uVar3;
  uVar3 = REFG(float, 0x1339b10);
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x68) = uVar3;
  uVar3 = REFG(float, 0x10ebc50);
  *(undefined4 *)((int)this + 0x70) = uVar1;
  uVar1 = REFG(float, 0x10ebc24);
  *(undefined4 *)((int)this + 0x6c) = uVar3;
  *(undefined4 *)((int)this + 0x74) = uVar3;
  *(undefined4 *)((int)this + 0x78) = uVar1;
  bVar4 = F_00afd2a0(this,(uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0x2e08))));
  return CONCAT31(extraout_var,bVar4);
}

/* ref: FUN_00afe1c0 */
uint F_00afe1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafe1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)((int)param_1 + 0x14) != 0) {
    uVar2 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10))));
    (*(float *)(gen_frame + 0x38)) = *(float *)(uVar2 + 4);
    F_00afacb0(param_1,&(*(float *)(gen_frame + 0x38)));
  }
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x10ebd90);
  uVar2 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10))));
  if ((float10)*(float *)(uVar2 + 4) < (float10)*(float *)(param_2 + 4)) {
    uVar2 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF((((float10)*(float *)(param_2 + 4) - (float10)*(float *)(uVar2 + 4)) +
                     (float10)*(double *)&REFG(undefined, 0x1094560))));
  }
  fVar1 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)REFG(float, 0x1339b94) * (float10)*(double *)&REFG(undefined, 0x10944c0)) *
                                      (float10)(*(float *)(gen_frame + 0x38))))))));
  *(undefined1 *)((int)param_1 + 0x5b) = 1;
  *(float *)((int)param_1 + 0x5c) = fVar1;
  F_00afb490(param_1);
  (*(float *)(gen_frame + 0x34)) = gen_bits2f(*(int *)((int)param_1 + 0x14));
  if (*(int *)((int)param_1 + 0x14) != 1) {
    *(undefined4 *)((int)param_1 + 0x14) = 1;
    F_00af5cb0(param_1);
    if ((*(float *)(gen_frame + 0x34)) != 7.00649e-45) {
      *(undefined4 *)((int)param_1 + 0x20) = 0;
    }
  }
  (*(float *)(gen_frame + 0x34)) = (float)(-(float10)fVar1 / (float10)REFG(float, 0x1339b94));
  uVar2 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10))));
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10ebbf0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  fVar3 = (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 4) -
                          (float10)((float)GEN_TOF(((float10)*(float *)(uVar2 + 4) + (float10)(*(float *)(gen_frame + 0x38))))))));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined1 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((fVar3 + fVar3) / (float10)REFG(float, 0x1339b94)))))))
                    + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(undefined4 *)(gen_frame + 0x1c)) = 3;
  uVar2 = F_00afd7d0(*(undefined * PTR32 *)((int)param_1 + 0x10),param_2,0,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)param_1 + 0x60) = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_1 + 100) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)param_1 + 0x68) = *(undefined4 *)(param_2 + 8);
  return uVar2;
}

/* ref: FUN_00afe350 */
uint F_00afe350(unsigned int gen_a0)
{
  GEN_ENTER(0xafe350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      F_00afcf00(&REFG(undefined, 0x14c0a50));
      in_EAX = F_00afde00(&REFG(undefined, 0x14c0a50),this);
    }
  }
  return in_EAX;
}

/* ref: FUN_00afe380 */
uint F_00afe380(void)
{
  GEN_ENTER(0xafe380u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00aff630(&REFG(undefined, 0x14c0a50));
  F_00a4a760(&REFG(undefined, 0x14a7360),0x20,0);
  uVar1 = F_00a4a760(&REFG(undefined, 0x14a7360),0x2d,0);
  REFG(undefined1, 0x14c0a40) = 0;
  return uVar1;
}

/* ref: FUN_00afe3b0 */
unsigned int F_00afe3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xafe3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    if (bVar1 != 0) {
      F_00afce30(&REFG(undefined, 0x14c0a50));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00afe900 */
uint F_00afe900(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xafe900u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int in_ecx;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  F_00afdab0(param_1,param_2,param_3,0);
  if ((*(int *)(param_1 + 0x200) != 0) &&
     (in_ecx = *((int *)GEN_TOP((*(int *)(param_1 + 0x200) + 0x10))), in_ecx != 0)) {
    bVar1 = F_00a9f620(in_ecx);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 4);
  uVar2 = param_1 + 0x2c0;
  if (*(char *)(param_1 + 0x296) == '\0') {
    uVar2 = param_1 + 0x270;
  }
  *(undefined4 *)(uVar2 + 0x18) = *(undefined4 *)(param_2 + 4);
  return uVar2;
}

/* ref: FUN_00afe960 */
uint F_00afe960(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xafe960u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00afe1c0(param_1 + 0x1f0,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00afe980 */
float F_00afe980(unsigned int gen_a0)
{
  GEN_ENTER(0xafe980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  fVar1 = F_00afdf30((undefined *)((int)this + 0x1f0));
  return fVar1;
}

/* ref: FUN_00afe990 */
unsigned int F_00afe990(unsigned int gen_a0)
{
  GEN_ENTER(0xafe990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00afe9d7;
  }
  if (*(char *)((int)this + 0x1cc) == '\0') {
    if (*(int *)((int)this + 0x10) != 0) {
      bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
      if ((bVar1 != 0) && (REFG(char, 0x14c0a65) != '\0')) goto LAB_00afe9d7;
    }
    if (*(char *)((int)this + 0x1cd) == '\0') {
      return 0;
    }
  }
LAB_00afe9d7: ;
  F_00afe3d0(this);
  F_00af6310(this);
  return 0;
}

/* ref: FUN_00afe9f0 */
unsigned int F_00afe9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafe9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined * this_00;
  byte bVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    *param_1 = 0;
    *param_2 = 0;
    bVar1 = F_00afd620(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1f0))));
    *param_2 = bVar1;
    if (((*(char *)((int)this + 0x14) != '\0') || (*(char *)((int)this + 0x15) != '\0')) &&
       ((this_00 = *(undefined * PTR32 *)((int)this + 0x10), *(char *)((int)this_00 + 100) != '\0' ||
        (*(char *)((int)this_00 + 0x65) != '\0')))) {
      F_00afe990(this_00);
      *param_1 = 1;
    }
    F_00af2bf0(this,(uint)*param_1);
  }
  return 0;
}

/* ref: FUN_00afea50 */
unsigned int F_00afea50(unsigned int gen_a0)
{
  GEN_ENTER(0xafea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    if ((*(char *)((int)this + 8) != '\0') || (*(char *)((int)this + 9) != '\0')) {
      F_00afe990(*(undefined * PTR32 *)((int)this + 4));
    }
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x204))) != 0) {
      in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
      if ((in_ecx != 0) && (bVar1 = F_00a9f620(in_ecx), bVar1 != 0)) {
        return 0;
      }
      F_00afd620(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 0x1f0))));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00afeaa0 */
unsigned int F_00afeaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xafeaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    if ((*(char *)((int)this + 0x14) != '\0') || (*(char *)((int)this + 0x15) != '\0')) {
      bVar5 = GEN_ISNAN(*(float *)(iVar1 + 0x80)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
      if (bVar5 != (bVar5 || *(float *)(iVar1 + 0x80) == REFG(float, 0x10ebbf0))) {
        *(undefined4 *)(iVar1 + 0x80) = 0;
      }
      if (*(char *)((int)this + 0x14) != '\0') {
        F_00af2f50(this);
      }
      if (*(char *)((int)this + 0x15) != '\0') {
        F_00af3110(this);
      }
    }
    (*(char *)(gen_frame + 0xb)) = '\0';
    (*(char *)(gen_frame + 0xa)) = '\0';
    F_00afe9f0(this,&(*(char *)(gen_frame + 0xb)),&(*(char *)(gen_frame + 0xa)));
    if (*(int *)((int)this + 0x158) != 0) {
      *(int *)((int)this + 0x158) = *(int *)((int)this + 0x158) + -1;
    }
    if ((((*(char *)(gen_frame + 0xb)) != '\0') || ((*(char *)(gen_frame + 0xa)) != '\0')) || (*(char *)((int)this + 0x272) != '\0')) {
      uVar2 = (*(uint *)(gen_frame + 0x6)) >> 8;
      (*(uint *)(gen_frame + 0x6)) = (*(uint *)(gen_frame + 0x6)) & 0xffffff00;
      if (((*(char *)(gen_frame + 0xb)) == '\0') && ((*(char *)(gen_frame + 0xa)) == '\0')) {
        (*(uint *)(gen_frame + 0x6)) = CONCAT31((int3)uVar2,0x20);
      }
      F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,(*(uint *)(gen_frame + 0x6)),1);
      if (*(char *)((int)this + 0x14) != '\0') {
        iVar1 = *(int *)((int)this + 0x10);
        if ((((*(int *)(iVar1 + 0x10) == 0) ||
             (bVar3 = F_00a9f620(*(int *)(iVar1 + 0x10)), bVar3 == 0)) || (REFG(char, 0x14c0a64) == '\0'))
           && (*(char *)(iVar1 + 0x1cc) == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
          if (*(int *)(iVar1 + 0x6c) != 7) {
            uVar4 = *(undefined1 *)(iVar1 + 0x3d);
          }
        }
        *(undefined1 *)((int)this + 0x17c) = uVar4;
      }
      *(undefined1 *)((int)this + 0x272) = 0;
    }
    F_00af2b40(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_00afebb0 */
unsigned int F_00afebb0(unsigned int gen_a0)
{
  GEN_ENTER(0xafebb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * this_00;
  int in_ecx;
  byte bVar2;
  float fVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  if (*(char *)((int)this + 8) == '\0') {
LAB_00afec27: ;
    if (*(char *)((int)this + 9) == '\0') goto LAB_00afec32;
  }
  else {
    fVar3 = *(float *)((int)this_00 + 0x40);
    if (((GEN_ISNAN(fVar3) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
         ((GEN_ISNAN(fVar3) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar3 == REFG(float, 0x10ebbf0))) &&
       (fVar1 = *(float *)((int)this_00 + 0x44),
       (GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
       ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0)))) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)fVar1 +
                     (float10)*(float *)((int)this + 0x14))));
      if (!((float10)fVar3 < (float10)fVar1)) {
        fVar3 = fVar1;
      }
      *(float *)((int)this + 0x14) = fVar3;
    }
    if (*(char *)((int)this + 8) == '\0') goto LAB_00afec27;
  }
  F_00afe990(this_00);
LAB_00afec32: ;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x204))) != 0) {
    in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
    if ((in_ecx != 0) && (bVar2 = F_00a9f620(in_ecx), bVar2 != 0)) {
      return 0;
    }
    F_00afd620(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 0x1f0))));
  }
  return 0;
}

/* ref: FUN_00afec70 */
uint F_00afec70(unsigned int gen_a0)
{
  GEN_ENTER(0xafec70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  F_00af92b0((undefined *)((int)this + 0x310));
  F_00af94c0(this);
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    if ((bVar1 != 0) && ((REFG(char, 0x14c0a40) == '\0' || (*(char *)((int)this + 0x420) == '\0'))))
    goto LAB_00afed44;
  }
  F_00aeba60(this);
  puVar2 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
  (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = puVar2[2];
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((int)this + 0x218);
  F_00afd4f0((undefined *)((int)this + 0x1f0));
  F_00afebb0((undefined *)((int)this + 0x1c4));
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    if (bVar1 != 0) {
      F_00afeaa0(&REFG(undefined, 0x14c0a50));
    }
  }
  F_00af5360((undefined *)((int)this + 0x1f0),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x1c)));
LAB_00afed44: ;
  uVar3 = F_00af2460(this);
  return uVar3;
}

/* ref: FUN_00afed60 */
uint F_00afed60(unsigned int gen_a0)
{
  GEN_ENTER(0xafed60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00afb860(this);
  uVar1 = F_00afec70(this);
  return uVar1;
}

/* ref: FUN_00afed70 */
byte F_00afed70(unsigned int gen_a0)
{
  GEN_ENTER(0xafed70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar1 != 2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    if (uVar1 != 3) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00afede0 */
unsigned int F_00afede0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafede0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)((int)this + 7) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 8);
  return 0;
}

/* ref: FUN_00afee10 */
uint F_00afee10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafee10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00afee60 */
unsigned int F_00afee60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafee60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec470));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return 0;
}

/* ref: FUN_00afee90 */
unsigned int F_00afee90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafee90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)((int)this + 0x25) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)((int)this + 0x26) = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)((int)this + 0x27) = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)((int)this + 0x28) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x29) = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)((int)this + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)((int)this + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return 0;
}

/* ref: FUN_00afef20 */
uint F_00afef20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafef20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00afef40 */
unsigned int F_00afef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafef40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0x19a;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined4 *)((int)this + 0x20) = param_1[2];
  *(undefined4 *)((int)this + 0x24) = param_1[3];
  *(undefined4 *)((int)this + 0x28) = param_1[4];
  *(undefined4 *)((int)this + 0x2c) = param_1[5];
  return 0;
}

/* ref: FUN_00afef80 */
byte F_00afef80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafef80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  byte bVar2;
  bool bVar3;
  float10 fVar4;
  
  fVar4 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x58) *
                                                (float10)*(float *)((int)this + 0x58) +
                                               ((float10)*(float *)((int)this + 0x50) *
                                                (float10)*(float *)((int)this + 0x50) +
                                               (float10)*(float *)((int)this + 0x54) *
                                               (float10)*(float *)((int)this + 0x54))))))));
  bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN((float10)0);
  if ((bVar3 == (bVar3 || fVar4 == (float10)0)) ||
     (bVar2 = F_00c9f380(this,param_1,param_2,param_3), bVar2 == 0)) {
    *param_1 = *(float *)((int)this + 0x50);
    *param_2 = *(float *)((int)this + 0x54);
    *param_3 = *(float *)((int)this + 0x58);
    return 1;
  }
  fVar1 = *param_1;
  if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    return 1;
  }
  fVar1 = *param_2;
  if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    return 1;
  }
  fVar1 = *param_3;
  if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aff050 */
uint F_00aff050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x50);
  param_2[1] = *(undefined4 *)(in_ecx + 0x54);
  param_2[2] = *(undefined4 *)(in_ecx + 0x58);
  return (uint)param_2;
}

/* ref: FUN_00aff070 */
uint F_00aff070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff070u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x50) = *param_2;
  *(undefined4 *)(in_ecx + 0x54) = param_2[1];
  *(undefined4 *)(in_ecx + 0x58) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff090 */
uint F_00aff090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x70);
  param_2[1] = *(undefined4 *)(in_ecx + 0x74);
  param_2[2] = *(undefined4 *)(in_ecx + 0x78);
  return (uint)param_2;
}

/* ref: FUN_00aff0b0 */
uint F_00aff0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = *param_2;
  *(undefined4 *)(in_ecx + 0x74) = param_2[1];
  *(undefined4 *)(in_ecx + 0x78) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff0d0 */
uint F_00aff0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00aff150 */
uint F_00aff150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)((int)this + 0x25) = *(undefined1 *)(param_1 + 0x14);
    uVar1 = *(uint *)(param_1 + 0x18);
    *(uint *)((int)this + 0x30) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00aff250 */
uint F_00aff250(unsigned int gen_a0)
{
  GEN_ENTER(0xaff250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  
  *(undefined4 *)(in_ecx + 0x10) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0x14) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x18) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0x20) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0x24) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x28) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0x30) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0x34) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x38) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0x40) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0x44) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x48) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0x50) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0x54) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x58) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0x60) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 100) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x68) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0x70) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0x74) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x78) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0x80) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0x84) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x88) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0x90) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0x94) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0x98) = REFG(float, 0x1375ac8);
  *(undefined4 *)(in_ecx + 0xa0) = REFG(float, 0x1375ac0);
  *(undefined4 *)(in_ecx + 0xa4) = REFG(float, 0x1375ac4);
  *(undefined4 *)(in_ecx + 0xa8) = REFG(float, 0x1375ac8);
  uVar1 = REFG(float, 0x10ebbf0);
  *(undefined4 *)(in_ecx + 0xb0) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0xb4) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0xb8) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0xbc) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0xc0) = uVar1;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  *(undefined4 *)(in_ecx + 0xd4) = 0;
  *(undefined4 *)(in_ecx + 0xd8) = 0;
  *(undefined1 *)(in_ecx + 0xe0) = 0;
  return 0;
}

/* ref: FUN_00aff450 */
unsigned int F_00aff450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff450u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_2 + 1) * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return 0;
}

/* ref: FUN_00aff480 */
uint F_00aff480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xd0) = *param_2;
  *(undefined4 *)(in_ecx + 0xd4) = param_2[1];
  *(undefined4 *)(in_ecx + 0xd8) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff4d0 */
unsigned int F_00aff4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    return 0;
  }
  return 0;
}

/* ref: FUN_00aff4f0 */
unsigned int F_00aff4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    return 0;
  }
  return 0;
}

/* ref: FUN_00aff520 */
unsigned int F_00aff520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff520u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    return 0;
  }
  return 0;
}

/* ref: FUN_00aff540 */
unsigned int F_00aff540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((char)param_3 != '\0') {
    return 0;
  }
  if ((char)param_2 != '\0') {
    return 0;
  }
  return 0;
}

/* ref: FUN_00aff5d0 */
uint F_00aff5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff5d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff5f0 */
unsigned int F_00aff5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaff5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[14];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  F_00ae5a80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),&(*(undefined4 *)&gen_args[1]));
  return 0;
}

/* ref: FUN_00aff620 */
byte F_00aff620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff620u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(byte *)(in_ecx + 0xc) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_00aff630 */
unsigned int F_00aff630(unsigned int gen_a0)
{
  GEN_ENTER(0xaff630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10ebbf0);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x17) = 0;
  *(undefined2 *)((int)this + 0x1b) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x19) = 0;
  *(undefined1 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  uVar1 = REFG(float, 0x10ebd80);
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined2 *)((int)this + 0x154) = 0;
  *(undefined1 *)((int)this + 0x156) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined1 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x173) = 0;
  *(undefined1 *)((int)this + 0x177) = 0;
  *(undefined1 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined2 *)((int)this + 0x274) = 0;
  *(undefined1 *)((int)this + 0x276) = 0;
  *(undefined4 *)((int)this + 0x290) = uVar1;
  *(undefined1 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  return 0;
}

/* ref: FUN_00aff750 */
uint F_00aff750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x80) = *param_2;
  *(undefined4 *)(in_ecx + 0x84) = param_2[1];
  *(undefined4 *)(in_ecx + 0x88) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff780 */
uint F_00aff780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x90) = *param_2;
  *(undefined4 *)(in_ecx + 0x94) = param_2[1];
  *(undefined4 *)(in_ecx + 0x98) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff7b0 */
uint F_00aff7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff7b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xc0) = *param_2;
  *(undefined4 *)(in_ecx + 0xc4) = param_2[1];
  *(undefined4 *)(in_ecx + 200) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff7f0 */
unsigned int F_00aff7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaff7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_1 * 3 + 0xb + param_2) * 0x10 + (int)this)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return 0;
}

/* ref: FUN_00aff820 */
unsigned int F_00aff820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff820u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_2 + 5) * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return 0;
}

/* ref: FUN_00aff850 */
unsigned int F_00aff850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff850u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_2 + 8) * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return 0;
}

/* ref: FUN_00aff880 */
uint F_00aff880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff8a0 */
uint F_00aff8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff8a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff8c0 */
uint F_00aff8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff8c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x60) = *param_2;
  *(undefined4 *)(in_ecx + 100) = param_2[1];
  *(undefined4 *)(in_ecx + 0x68) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff8e0 */
uint F_00aff8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff8e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x410) = *param_2;
  *(undefined4 *)(in_ecx + 0x414) = param_2[1];
  *(undefined4 *)(in_ecx + 0x418) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff910 */
uint F_00aff910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaff910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x430) = *param_2;
  *(undefined4 *)(in_ecx + 0x434) = param_2[1];
  *(undefined4 *)(in_ecx + 0x438) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff940 */
uint F_00aff940(unsigned int gen_a0)
{
  GEN_ENTER(0xaff940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x10ebc40);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10928e4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10ebc34);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x10ebcec);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  F_0054e4e0((undefined *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x18)),4);
  uVar1 = F_0054e4e0((undefined *)((int)this + 0x48),&(*(undefined4 *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00aff9e0 */
uint F_00aff9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaff9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x10ebd3c);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10928e4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10ac050);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x10ebcec);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  F_0054e4e0((undefined *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x18)),4);
  uVar1 = F_0054e4e0((undefined *)((int)this + 0x48),&(*(undefined4 *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00affa80 */
uint F_00affa80(unsigned int gen_a0)
{
  GEN_ENTER(0xaffa80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x10ebbec);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10928e4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10ac050);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x10ebcec);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  F_0054e4e0((undefined *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x18)),4);
  uVar1 = F_0054e4e0((undefined *)((int)this + 0x48),&(*(undefined4 *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00affb20 */
uint F_00affb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaffb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  F_00555960(this,param_1);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = uVar2;
  *(undefined1 *)((int)this + 0x60) = *(undefined1 *)(param_1 + 0x60);
  *(undefined1 *)((int)this + 0x61) = *(undefined1 *)(param_1 + 0x61);
  *(undefined1 *)((int)this + 0x62) = *(undefined1 *)(param_1 + 0x62);
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x78) = uVar2;
  *(undefined1 *)((int)this + 0x80) = *(undefined1 *)(param_1 + 0x80);
  *(undefined1 *)((int)this + 0x81) = *(undefined1 *)(param_1 + 0x81);
  *(undefined1 *)((int)this + 0x82) = *(undefined1 *)(param_1 + 0x82);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  return (uint)this;
}

/* ref: FUN_00affc20 */
uint F_00affc20(unsigned int gen_a0)
{
  GEN_ENTER(0xaffc20u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10ec468));
  F_00aff250(in_ecx);
  return (uint)in_ecx;
}

/* ref: FUN_00affcd0 */
uint F_00affcd0(unsigned int gen_a0)
{
  GEN_ENTER(0xaffcd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10ebbf0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec488))
  ;
  *(undefined4 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ec478));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104) =
       (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x108) = uVar1;
  *(undefined4 *)((int)this + 0x10c) = uVar1;
  *(undefined4 *)((int)this + 0x110) = uVar1;
  *(undefined4 *)((int)this + 0x114) = uVar1;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ec480));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined1 *)((int)this + 0x14c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ec470));
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x180) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ec468));
  F_00aff250((undefined4 *)((int)this + 0x180));
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xac) = 0;
  F_00aff630(this);
  return (uint)this;
}

/* ref: FUN_00affe40 */
uint F_00affe40(unsigned int gen_a0)
{
  GEN_ENTER(0xaffe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x15) = 0;
  *(undefined1 *)((int)this + 0x1b) = 0;
  *(undefined2 *)((int)this + 0x171) = 0;
  *(undefined4 *)(uVar2 + 0x34) = 0;
  *(undefined4 *)(uVar2 + 0x38) = 0;
  uVar1 = REFG(float, 0x10ebbf0);
  *(undefined1 *)(uVar2 + 0x3c) = 0;
  *(undefined4 *)(uVar2 + 0x48) = uVar1;
  *(undefined4 *)(uVar2 + 0x50) = uVar1;
  *(undefined4 *)(uVar2 + 0x58) = 0;
  *(undefined1 *)(uVar2 + 0x5d) = 0;
  *(undefined1 *)(uVar2 + 0x65) = 0;
  *(undefined1 *)(uVar2 + 0x67) = 0;
  *(undefined4 *)(uVar2 + 0x70) = 0;
  if ((*(char *)((int)this + 0x14) == '\0') && (*(char *)((int)this + 0x15) == '\0')) {
    uVar2 = F_00afcf00(this);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00affea0 */
uint F_00affea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaffea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00affb20((undefined *)((int)this + 0x380),param_1);
  return uVar1;
}

/* ref: FUN_00affeb0 */
uint F_00affeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xaffeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined1 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined1 *)((int)this + 0x170) = 0;
  *(undefined1 *)((int)this + 0x173) = 0;
  uVar1 = F_00aeb700(*(undefined * PTR32 *)((int)this + 0x10));
  if ((*(char *)((int)this + 0x14) == '\0') && (*(char *)((int)this + 0x15) == '\0')) {
    uVar1 = F_00afcf00(this);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00afff50 */
uint F_00afff50(unsigned int gen_a0)
{
  GEN_ENTER(0xafff50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  F_00affeb0(this);
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x15) = 0;
  *(undefined1 *)((int)this + 0x1b) = 0;
  *(undefined2 *)((int)this + 0x171) = 0;
  *(undefined4 *)(uVar2 + 0x34) = 0;
  *(undefined4 *)(uVar2 + 0x38) = 0;
  uVar1 = REFG(float, 0x10ebbf0);
  *(undefined1 *)(uVar2 + 0x3c) = 0;
  *(undefined4 *)(uVar2 + 0x48) = uVar1;
  *(undefined4 *)(uVar2 + 0x50) = uVar1;
  *(undefined4 *)(uVar2 + 0x58) = 0;
  *(undefined1 *)(uVar2 + 0x5d) = 0;
  *(undefined1 *)(uVar2 + 0x65) = 0;
  *(undefined1 *)(uVar2 + 0x67) = 0;
  *(undefined4 *)(uVar2 + 0x70) = 0;
  if ((*(char *)((int)this + 0x14) == '\0') && (*(char *)((int)this + 0x15) == '\0')) {
    uVar2 = F_00afcf00(this);
    return uVar2;
  }
  return uVar2;
}

/* ref: Component::Log::LogModuleInterface::vf0 */
uint F_00afffd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafffd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10ec4e0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Log::LogModule::vf2 */
unsigned int F_00b00010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((*(int *)(this + 8) != param_1) || (*(int *)(this + 0xc) != param_2)) {
    *(int *)(this + 8) = param_1;
    *(int *)(this + 0xc) = param_2;
  }
  return 0;
}

/* ref: Component::Log::LogModule::vf3 */
uint F_00b00030(unsigned int gen_a0)
{
  GEN_ENTER(0xb00030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x14) - 1;
}

/* ref: Component::Log::LogModule::vf4 */
uint F_00b00040(unsigned int gen_a0)
{
  GEN_ENTER(0xb00040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x14) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Component::Log::LogModule::vf5 */
uint F_00b00050(unsigned int gen_a0)
{
  GEN_ENTER(0xb00050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x14);
  if (29999 < uVar1) {
    uVar1 = 30000;
  }
  return uVar1;
}

/* ref: Component::Log::LogModule::vf6 */
uint F_00b00060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = F_0042a970(param_1);
  uVar3 = F_0042a990(param_1);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x1c))(this,uVar3,uVar2);
  return uVar2;
}

/* ref: Component::Log::LogModule::vf8 */
uint F_00b00090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00090u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[2]));
  if (uVar1 != 0) {
    F_0042cc20((*(undefined * PTR32 *)&gen_args[1]),uVar1,(*(undefined4 *)&gen_args[2]));
    return (uint)(*(undefined * PTR32 *)&gen_args[1]);
  }
  F_0042cc20((*(undefined * PTR32 *)&gen_args[1]),&REFG(undefined, 0x10ec4d8),REFG(undefined4, 0x108cc50));
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00b000e0 */
uint F_00b000e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb000e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  undefined4 * puVar3;
  
  this_00 = (undefined *)F_00406b90(0x40,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00bca4f0(this_00,*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0xc),
                         param_2);
    puVar2 = (uint *)F_00b01b50((undefined *)((int)this + 0x1c),param_1);
    *puVar2 = uVar1;
    return (uint)puVar2;
  }
  puVar3 = (undefined4 *)F_00b01b50((undefined *)((int)this + 0x1c),param_1);
  *puVar3 = 0;
  return (uint)puVar3;
}

/* ref: Component::Log::LogModule::vf9 */
uint F_00b00140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  if (((int)param_1 < 0) && (param_1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this), (int)param_1 < 0)) {
    return 0;
  }
  if ((int)param_1 < *(int *)(this + 0x14)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    uVar1 = uVar1 - param_1;
    uVar2 = *(int *)(this + 0x38) - *(int *)(this + 0x34) >> 2;
    if (uVar1 < uVar2) {
      iVar3 = (uVar2 - uVar1) + -1;
      if (iVar3 == 0) {
        uVar1 = **(uint * PTR32 *)(this + 0x34);
      }
      else {
        uVar1 = *((int *)GEN_TOP((*(int *)(this + 0x34) + iVar3 * 4))) -
                *((int *)GEN_TOP((*(int *)(this + 0x34) + -4 + iVar3 * 4)));
      }
      *param_2 = uVar1;
      if (iVar3 != 0) {
        return *((int *)GEN_TOP((*(int *)(this + 0x34) + -4 + iVar3 * 4))) + *(int *)(this + 0x44);
      }
      return *(uint *)(this + 0x44);
    }
    uVar1 = (uVar1 - uVar2) / 1000;
    if (uVar1 < 0x1e) {
      puVar4 = (undefined4 *)F_00b01b50(this + 0x1c,uVar1);
      this_00 = (undefined *)*puVar4;
      if (this_00 != (undefined *)0x0) {
        uVar1 = F_00bca310(this_00,param_1);
        *param_2 = uVar1;
        uVar1 = F_00bca340(this_00,param_1);
        return uVar1;
      }
      F_00b000e0(this,uVar1,*(int *)(this + 0x10) - uVar1);
    }
  }
  return 0;
}

/* ref: FUN_00b00230 */
unsigned int F_00b00230(unsigned int gen_a0)
{
  GEN_ENTER(0xb00230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * this_00;
  int * piVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)((int)this + 0x1c) != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c))), puVar2 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar2;
  }
  uVar1 = (*(int *)((int)this + 0x2c) + *(int *)((int)this + 0x28)) - 1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  uVar3 = uVar1 >> 2;
  if (*(uint *)(iVar5 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar5 + 8);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4))) != 0) {
    piVar4 = (int *)F_00b01bc0((undefined *)((int)this + 0x1c));
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  if ((*(int *)((int)this + 0x2c) != 0) &&
     (iVar5 = *(int *)((int)this + 0x2c) + -1, *(int *)((int)this + 0x2c) = iVar5, iVar5 == 0)) {
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0x10);
  this_00 = (undefined *)F_00406b90(0x40,0,0);
  if (this_00 == (undefined *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_00bca5d0(this_00,*(undefined4 *)((int)this + 8),
                                   *(undefined4 *)((int)this + 0xc),(*(undefined * PTR32 *)(gen_frame + 0x8)),
                                   *(int *)((int)this + 0x14) -
                                   (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34) >> 2),
                                   *(int *)((int)this + 0x14),(int)this + 0x34);
  }
  F_00b02190((undefined *)((int)this + 0x1c),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return 0;
}

/* ref: FUN_00b00320 */
unsigned int F_00b00320(unsigned int gen_a0)
{
  GEN_ENTER(0xb00320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34) >> 2 != 0) {
    F_00b00230(this);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  for (uVar5 = *(uint *)((int)this + 0x28);
      uVar5 != *(int *)((int)this + 0x2c) + *(int *)((int)this + 0x28); uVar5 = uVar5 + 1) {
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    uVar3 = uVar5 >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + (uVar5 & 3) * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  F_00b00f20((undefined *)((int)this + 0x1c));
  iVar4 = *(int *)((int)this + 0x34);
  if (iVar4 != *(int *)((int)this + 0x38)) {
    F_00c46e20(iVar4,*(int *)((int)this + 0x38),0);
    *(int *)((int)this + 0x38) = iVar4;
  }
  iVar4 = *(int *)((int)this + 0x44);
  if (iVar4 != *(int *)((int)this + 0x48)) {
    F_00c46e20(iVar4,*(int *)((int)this + 0x48),0);
    *(int *)((int)this + 0x48) = iVar4;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_00b003f0 */
uint F_00b003f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb003f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * this_00;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10ec50c));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  this_00 = (undefined4 *)((int)this + 0x1c);
  *this_00 = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c2);
  *this_00 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 * PTR32 *)*this_00 = this_00;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  F_00b02320((undefined4 *)((int)this + 0x44),0x3e800);
  F_00b02210(this_00,0x1e);
  return (uint)this;
}

/* ref: Component::Log::LogModule::vf1 */
unsigned int F_00b00480(unsigned int gen_a0)
{
  GEN_ENTER(0xb00480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b00320(this);
  F_00b02210(this + 0x1c,0x1e);
  return 0;
}

/* ref: FUN_00b004a0 */
uint F_00b004a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb004a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10ec50c));
  if (*(int *)((int)this + 0x2c) != 0) {
    F_00b00320(this);
  }
  iVar1 = *(int *)((int)this + 0x44);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x4c) - iVar1,0x135);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  iVar1 = *(int *)((int)this + 0x34);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x3c) - iVar1 >> 2) * 4,0x135);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  F_00b00f20((undefined *)((int)this + 0x1c));
  uVar2 = F_00429760(*(undefined4 *)((int)this + 0x1c),8,0x2c2);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10ec4e0));
  return (uint)uVar2;
}

/* ref: Component::Log::LogModule::vf7 */
uint F_00b00530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00530u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
  iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x44)));
  iVar4 = (*(int *)&gen_args[2]) + (iVar1 - iVar2);
  F_00b024b0((*(undefined * PTR32 *)&gen_args[0]) + 0x44,iVar4);
  F_00c46aa0(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + (iVar1 - iVar2),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]));
  (*(int *)&gen_args[2]) = iVar4;
  F_00b02520((*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(int *)&gen_args[2]));
  uVar3 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = uVar3 + 1;
  if (29999 < uVar3) {
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 1;
  }
  if (999 < (uint)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38))) - *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) >> 2)) {
    F_00b00230((*(undefined * PTR32 *)&gen_args[0]));
    F_00b02060((*(undefined * PTR32 *)&gen_args[0]) + 0x34);
  }
  return uVar3;
}

/* ref: FUN_00b00610 */
uint F_00b00610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00610u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2c2);
  return uVar1;
}

/* ref: FUN_00b00660 */
uint F_00b00660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x135);
  return (uint)uVar1;
}

/* ref: FUN_00b006a0 */
uint F_00b006a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb006a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c2);
  return (uint)uVar1;
}

/* ref: FUN_00b006e0 */
uint F_00b006e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb006e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2c2);
  return uVar1;
}

/* ref: FUN_00b00710 */
uint F_00b00710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c2);
  return (uint)uVar1;
}

/* ref: FUN_00b00750 */
uint F_00b00750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x135);
  return (uint)uVar1;
}

/* ref: FUN_00b00780 */
uint F_00b00780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00780u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00b00790 */
uint F_00b00790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00790u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00b007c0 */
uint F_00b007c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb007c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x2c2);
  return uVar1;
}

/* ref: FUN_00b007f0 */
uint F_00b007f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb007f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x2c2);
  return (uint)uVar1;
}

/* ref: FUN_00b00830 */
uint F_00b00830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00b00850 */
uint F_00b00850(unsigned int gen_a0)
{
  GEN_ENTER(0xb00850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b00890 */
uint F_00b00890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00890u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00b008a0 */
uint F_00b008a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb008a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00b008e0 */
uint F_00b008e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb008e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b00930 */
uint F_00b00930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x135);
  return uVar1;
}

/* ref: FUN_00b00950 */
uint F_00b00950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00950u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b009e0 */
uint F_00b009e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb009e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x135);
  return uVar1;
}

/* ref: FUN_00b00a20 */
uint F_00b00a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00a20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b00ae0 */
uint F_00b00ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xb00ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b00af0 */
uint F_00b00af0(unsigned int gen_a0)
{
  GEN_ENTER(0xb00af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b00b00 */
uint F_00b00b00(unsigned int gen_a0)
{
  GEN_ENTER(0xb00b00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b00ba0 */
byte F_00b00ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00b00bd0 */
uint F_00b00bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00b00bf0 */
uint F_00b00bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00bf0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b00c20 */
uint F_00b00c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00c20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  if (param_2 == 0) {
    return *(uint *)*in_ecx;
  }
  piVar1 = (int *)(*in_ecx + param_2 * 4);
  return *piVar1 - piVar1[-1];
}

/* ref: FUN_00b00c40 */
uint F_00b00c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 0) {
    return *(uint *)((int)this + 0x10);
  }
  return *(int *)(*(int *)this + -4 + param_1 * 4) + *(int *)((int)this + 0x10);
}

/* ref: FUN_00b00cc0 */
unsigned int F_00b00cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b00ce0 */
unsigned int F_00b00ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b00d30 */
uint F_00b00d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)this;
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

/* ref: FUN_00b00d70 */
uint F_00b00d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00d70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b00da0 */
uint F_00b00da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00da0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b00db0 */
uint F_00b00db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b00dc0 */
byte F_00b00dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b00de0 */
uint F_00b00de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b00df0 */
byte F_00b00df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b00e10 */
unsigned int F_00b00e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b00e40 */
unsigned int F_00b00e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b00e70 */
unsigned int F_00b00e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00e70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b00f00 */
byte F_00b00f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00b00f20 */
uint F_00b00f20(unsigned int gen_a0)
{
  GEN_ENTER(0xb00f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x2c2);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x2c2);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b00fa0 */
uint F_00b00fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xb00fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x2c2);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b01010 */
unsigned int F_00b01010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return 0;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00b01050 */
unsigned int F_00b01050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b01070 */
unsigned int F_00b01070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b010b0 */
uint F_00b010b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb010b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00b010d0 */
uint F_00b010d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb010d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b010e0 */
byte F_00b010e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb010e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b01100 */
uint F_00b01100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b01110 */
byte F_00b01110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b01130 */
unsigned int F_00b01130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b01150 */
unsigned int F_00b01150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01180 */
unsigned int F_00b01180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b011a0 */
unsigned int F_00b011a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb011a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b011c0 */
unsigned int F_00b011c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb011c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

