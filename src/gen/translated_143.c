#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf33 */
uint F_00bda9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == 2) {
    uVar2 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0xf,0,0x80);
    return uVar2;
  }
  uVar2 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0xf,1,0x80);
  if ((*(char *)(iVar1 + 0x317) == -0x80) && (iVar1 = iVar1 + 0x2c4, iVar1 != 0)) {
    F_004a63e0(iVar1);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf34 */
byte F_00bdaa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdaa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == 0) {
    F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0xf,0,0x80);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf29 */
uint F_00bdaa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdaa70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint * puVar11;
  uint uVar12;
  float * pfVar13;
  uint * puVar14;
  float10 fVar15;
  
  uVar12 = param_2;
  puVar11 = REFG(uint * PTR32, 0x1371290);
  puVar14 = *(uint * PTR32 *)(param_1 + 0x24);
  if (puVar14[4] != 2) {
    param_2 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(param_2 + 0x30) -
                                       (float10)(longlong)
                                                ((float10)*(float *)(param_2 + 0x30) /
                                                (float10)*(double *)&REFG(undefined, 0x10920b0)) *
                                       (float10)*(double *)&REFG(undefined, 0x10920b0)))));
    fVar15 = ((float10)GEN_TOD(gen_bits2f(param_2)));
    if ((float10)REFG(float, 0x10943cc) < fVar15) {
      param_2 = (uint)gen_fl2bits((float)(fVar15 - (float10)*(double *)&REFG(undefined, 0x10920b0)));
      fVar15 = ((float10)GEN_TOD(gen_bits2f(param_2)));
    }
    if (gen_bits2f(param_2) < REFG(float, 0x10943d0)) {
      param_2 = (uint)gen_fl2bits((float)(fVar15 + (float10)*(double *)&REFG(undefined, 0x10920b0)));
    }
    fVar1 = *(float *)(uVar12 + 0x34);
    ((float *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[1], REFG(float, 0x1087f04));
    ((float *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[0], REFG(float, 0x1090708));
    ((float *)(gen_frame + 0x0))[2] = fVar1;
    pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0));
    }
    fVar1 = *pfVar13;
    fVar2 = *(float *)(uVar12 + 0x38);
    ((float *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[2], REFG(float, 0x1090708));
    ((float *)(gen_frame + 0x0))[0] = fVar2;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar2 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar2 = *pfVar13;
    fVar3 = *(float *)(uVar12 + 0x3c);
    ((float *)(gen_frame + 0x0))[0] = fVar3;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar3 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar3 = *pfVar13;
    fVar4 = *(float *)(uVar12 + 0x40);
    ((float *)(gen_frame + 0x0))[0] = fVar4;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar4 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar4 = *pfVar13;
    fVar5 = *(float *)(uVar12 + 0x44);
    ((float *)(gen_frame + 0x0))[0] = fVar5;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar5 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar5 = *pfVar13;
    fVar6 = *(float *)(uVar12 + 0x48);
    ((float *)(gen_frame + 0x0))[0] = fVar6;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar6 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar6 = *pfVar13;
    fVar7 = *(float *)(uVar12 + 0x2c);
    ((float *)(gen_frame + 0x0))[0] = fVar7;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar7 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar7 = *pfVar13;
    fVar8 = *(float *)(uVar12 + 0x20);
    ((float *)(gen_frame + 0x0))[0] = fVar8;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar8 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar8 = *pfVar13;
    fVar9 = *(float *)(uVar12 + 0x24);
    ((float *)(gen_frame + 0x0))[0] = fVar9;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar9 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar9 = *pfVar13;
    fVar10 = *(float *)(uVar12 + 0x28);
    ((float *)(gen_frame + 0x0))[0] = fVar10;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar10 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar10 = *pfVar13;
    puVar14 = REFG(uint * PTR32, 0x1371290);
    if ((*((char *)GEN_TOP(((int)REFG(uint * PTR32, 0x1371290) + 0x317))) == -0x80) &&
       (puVar14 = REFG(uint * PTR32, 0x1371290) + 0xb1, puVar14 != (uint *)0x0)) {
      *puVar14 = param_2;
      puVar11[0xb5] = (uint)gen_fl2bits(fVar8);
      puVar11[0xb2] = (uint)gen_fl2bits(fVar1);
      puVar11[0xb6] = (uint)gen_fl2bits(fVar9);
      puVar11[0xb3] = (uint)gen_fl2bits(fVar2);
      puVar11[0xb4] = (uint)gen_fl2bits(fVar3);
      puVar11[0xb7] = (uint)gen_fl2bits(fVar10);
      puVar11[0xb8] = (uint)gen_fl2bits(fVar7);
      puVar11[0xb9] = (uint)gen_fl2bits(fVar5);
      puVar11[0xba] = (uint)gen_fl2bits(fVar4);
      puVar11[0xbb] = (uint)gen_fl2bits(fVar6);
    }
  }
  return (uint)puVar14;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf0 */
uint F_00bdad50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdad50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdad80 */
byte F_00bdad80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdad80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(byte *)((uint)(ushort)param_2 + in_ecx);
}

/* ref: FUN_00bdada0 */
float10 F_00bdada0(float gen_a0)
{
  GEN_ENTER(0xbdada0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bdadc0 */
uint F_00bdadc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdadc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109d04));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf7 */
uint F_00bdadf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdadf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x24);
  fVar3 = F_00bd2390(this);
  if ((float10)*(float *)(iVar1 + 0x1c) <= (float10)fVar3) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,7);
    return uVar2;
  }
  return extraout_EAX & 0xffffff00;
}

/* ref: FUN_00bdae20 */
uint F_00bdae20(void)
{
  GEN_ENTER(0xbdae20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int, 0x14c5b08) != 0) {
    uVar1 = F_00406ad0(REFG(int, 0x14c5b08));
    REFG(int, 0x14c5b08) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bdae50 */
uint F_00bdae50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdae50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * pcVar1;
  
  pcVar1 = (char *)((uint)(ushort)param_2 + in_ecx);
  *pcVar1 = *pcVar1 + '\x01';
  return (uint)(ushort)param_2;
}

/* ref: FUN_00bdae60 */
byte F_00bdae60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdae60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)(in_ecx + (uint)(ushort)param_2);
  if (bVar1 != 0) {
    bVar1 = bVar1 - 1;
    *(byte *)(in_ecx + (uint)(ushort)param_2) = bVar1;
  }
  return bVar1;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf25 */
uint F_00bdaea0(void)
{
  GEN_ENTER(0xbdaea0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = (undefined *)0x0;
  if (REFG(void * PTR32, 0x14c5b08) != (undefined *)0x0) {
    pvVar1 = F_00c48350(REFG(void * PTR32, 0x14c5b08),0,0x3c);
  }
  return (uint)pvVar1;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf33 */
unsigned int F_00bdaec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdaec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(this + 0x24);
  if (REFG(int, 0x14c5b08) != 0) {
    this[0x88] = (undefined1)0x0;
    uVar4 = F_00bd3f80(this);
    iVar3 = *(int *)(uVar4 + 0x134);
    *(int *)(uVar4 + 0x134) = iVar3 + 1;
    *(int *)(this + 0x8c) = iVar3;
    if (*(ushort *)(iVar2 + 0x14) != 0xffff) {
      pcVar1 = ((char *)GEN_TOP((REFG(int, 0x14c5b08) + (uint)*(ushort *)(iVar2 + 0x14))));
      *pcVar1 = *pcVar1 + '\x01';
      if ((REFG(int, 0x14c5b08) != 0) &&
         (*(ushort *)(iVar2 + 0x16) <=
          (ushort)*((byte *)GEN_TOP(((uint)*(ushort *)(iVar2 + 0x14) + REFG(int, 0x14c5b08)))))) {
        this[0x88] = (undefined1)0x1;
      }
      if (this[0x88] == (undefined1)0x0) {
        return 0;
      }
    }
    F_004ff5f0(REFG(undefined4, 0x1375aec));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf34 */
byte F_00bdaf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdaf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  char * pcVar2;
  
  if ((REFG(int, 0x14c5b08) != 0) && (*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0x14))) != 0xffff)) {
    pcVar2 = ((char *)GEN_TOP((REFG(int, 0x14c5b08) + (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0x14))))));
    cVar1 = *pcVar2;
    if (cVar1 != '\0') {
      *pcVar2 = cVar1 + -1;
    }
  }
  return 1;
}

/* ref: FUN_00bdaf90 */
uint F_00bdaf90(void)
{
  GEN_ENTER(0xbdaf90u, 0u, 0u, 0u, 0u);
  undefined * _Dst;
  undefined * pvVar1;
  
  if (REFG(void * PTR32, 0x14c5b08) != (undefined *)0x0) {
    F_00406ad0(REFG(void * PTR32, 0x14c5b08));
    REFG(void * PTR32, 0x14c5b08) = (undefined *)0x0;
  }
  _Dst = (undefined *)F_00406b90(0x3c,0,0);
  if (_Dst != (undefined *)0x0) {
    pvVar1 = F_00c48350(_Dst,0,0x3c);
    REFG(void * PTR32, 0x14c5b08) = _Dst;
    return (uint)pvVar1;
  }
  REFG(void * PTR32, 0x14c5b08) = (undefined *)0x0;
  return 0;
}

/* ref: FUN_00bdaff0 */
uint F_00bdaff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdaff0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_edx = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf30 */
uint F_00bdb010(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdb010u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined * this;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  float10 fVar10;
  
  iVar3 = *(int *)((int)param_1 + 0x24);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = param_1;
  uVar6 = F_00bd3f80(param_1);
  if (((uVar6 != 0) && (!((float10)*(float *)(iVar3 + 0x1c) <= (float10)param_2))) &&
     (iVar4 = *(int *)(iVar3 + 0x10), iVar4 != 0)) {
    iVar5 = *(int *)(iVar3 + 0x18);
    iVar7 = (int)param_2 / iVar5;
    ((int *)(gen_frame + 0x2c))[1] = iVar7;
    ((int *)(gen_frame + 0x2c))[0] = iVar7 + 1;
    if (iVar5 < 1) {
      fVar10 = (float10)0;
    }
    else {
      ((int *)(gen_frame + 0x2c))[2] = iVar5;
      ((int *)(gen_frame + 0x2c))[3] = iVar5 * iVar7;
      fVar10 = ((float10)param_2 - (float10)(iVar5 * iVar7)) / (float10)iVar5;
    }
    iVar4 = iVar4 + -1;
    (*(float *)(gen_frame + 0x28)) = (float)fVar10;
    ((int *)(gen_frame + 0x2c))[2] = iVar4;
    ((int *)(gen_frame + 0x2c))[3] = 0;
    piVar8 = ((int *)(gen_frame + 0x2c)) + 1;
    if (iVar4 <= iVar7) {
      piVar8 = ((int *)(gen_frame + 0x2c)) + 2;
    }
    if (*piVar8 < 1) {
      piVar8 = ((int *)(gen_frame + 0x2c)) + 3;
    }
    ((int *)(gen_frame + 0x2c))[1] = iVar4;
    ((int *)(gen_frame + 0x2c))[2] = 0;
    piVar9 = ((int *)(gen_frame + 0x2c));
    if (iVar4 <= iVar7 + 1) {
      piVar9 = ((int *)(gen_frame + 0x2c)) + 1;
    }
    if (*piVar9 < 1) {
      piVar9 = ((int *)(gen_frame + 0x2c)) + 2;
    }
    iVar5 = *piVar9;
    iVar4 = *(int *)(iVar3 + 0xc) + *piVar8 * 0xc;
    uVar1 = *(undefined4 *)(iVar4 + 4 + iVar3);
    uVar2 = *(undefined4 *)(iVar4 + 8 + iVar3);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar4 + iVar3);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
    iVar4 = *(int *)(iVar3 + 0xc) + iVar5 * 0xc;
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar4 + iVar3);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar4 + 4 + iVar3);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar4 + 8 + iVar3);
    uVar6 = F_0054cdb0(&(*(undefined4 *)(gen_frame + 0x10)),(uint)&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x0)),(float)fVar10);
    this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    if (((*(short *)(iVar3 + 0x14) == -1) || (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x88) != '\0')) &&
       (uVar6 = F_00bd3f80((*(undefined * PTR32 *)(gen_frame + 0x3c))), *(int *)(uVar6 + 0xf8) == -1)) {
      uVar6 = F_00bd3f80(this);
      iVar3 = *(int *)((int)this + 0x8c);
      if (*(int *)(uVar6 + 0x130) <= iVar3) {
        uVar6 = F_00bd3f80(this);
        *(int *)(uVar6 + 0x130) = iVar3;
        uVar6 = REFG(undefined4, 0x13712a4);
        *(undefined4 *)(REFG(undefined4, 0x13712a4) + 0x20) = (*(undefined4 *)(gen_frame + 0x10));
        *(undefined4 *)(uVar6 + 0x24) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined4 *)(uVar6 + 0x28) = (*(undefined4 *)(gen_frame + 0x18));
        uVar6 = REFG(undefined4, 0x13712a4);
        *(uint *)(REFG(undefined4, 0x13712a4) + 0x30) = *(uint *)(REFG(undefined4, 0x13712a4) + 0x30) | 2;
        if (REFG(int, 0x13759f4) != 0) {
          uVar6 = F_0068bc00(REFG(int, 0x13759f4),&(*(undefined4 *)(gen_frame + 0x10)));
          return uVar6;
        }
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00bdb1e0 */
uint F_00bdb1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb1e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x130) = param_2;
  return param_2;
}

/* ref: FUN_00bdb200 */
uint F_00bdb200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0xc) + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf0 */
uint F_00bdb220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109d04));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdb250 */
uint F_00bdb250(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109e24));
  puVar1 = (undefined4 *)F_005d7370();
  *(undefined4 *)((int)this + 0x88) = *puVar1;
  *(undefined4 *)((int)this + 0x8c) = puVar1[1];
  *(undefined4 *)((int)this + 0x90) = puVar1[2];
  *(undefined4 *)((int)this + 0x94) = puVar1[3];
  puVar1 = (undefined4 *)F_005d7370();
  *(undefined4 *)((int)this + 0x98) = *puVar1;
  *(undefined4 *)((int)this + 0x9c) = puVar1[1];
  *(undefined4 *)((int)this + 0xa0) = puVar1[2];
  *(undefined4 *)((int)this + 0xa4) = puVar1[3];
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf20 */
uint F_00bdb2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb2c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x24);
  *(undefined4 *)(in_ecx + 0x98) = *(undefined4 *)(uVar1 + 0xc);
  *(undefined4 *)(in_ecx + 0x9c) = *(undefined4 *)(uVar1 + 0x10);
  *(undefined4 *)(in_ecx + 0xa0) = *(undefined4 *)(uVar1 + 0x14);
  *(undefined4 *)(in_ecx + 0xa4) = *(undefined4 *)(uVar1 + 0x18);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf26 */
unsigned int F_00bdb2f0(void)
{
  GEN_ENTER(0xbdb2f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf34 */
byte F_00bdb300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00bdb350 */
uint F_00bdb350(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bdb38e;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bdb379;
  }
  else {
LAB_00bdb379: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bdb38e: ;
  if ((((iVar3 == 0) || (*(char *)(iVar3 + 0x12) != '\0')) ||
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 == (int *)0x0)) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2), uVar4 == 0 ||
       (*(char *)(uVar4 + 0x11) != '\x01')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdb3d0 */
uint F_00bdb3d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdb3d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * this;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  
  this = (undefined *)F_00bdb350((*(undefined * PTR32 *)&gen_args[0]));
  uVar5 = 0;
  if (this != (undefined *)0x0) {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x14)) = 0.0;
    pfVar6 = &(*(float *)&gen_args[1]);
    if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x18));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x14));
    }
    fVar7 = (float10)*pfVar6;
    (*(float *)&gen_args[1]) = (float)((float10)1 - fVar7);
    fVar8 = (float10)(*(float *)&gen_args[1]);
    fVar1 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))))));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) * fVar8)));
    (*(float *)(gen_frame + 0x8)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) * fVar8)));
    (*(float *)(gen_frame + 0xc)) = fVar3;
    fVar4 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))))));
    (*(float *)(gen_frame + 0x10)) = fVar4;
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) * fVar7 + (float10)fVar1)));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) * fVar7 + (float10)fVar2)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) * fVar7 + (float10)fVar3)));
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar7 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) + (float10)fVar4)));
    uVar5 = F_005e45d0(this,&(*(float *)(gen_frame + 0x4)));
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf33 */
uint F_00bdb4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00bdb350(this);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_005dde30(this_00,this + 0x88);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf0 */
uint F_00bdb550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdb580 */
uint F_00bdb580(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109f44));
  *(undefined2 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00bdb5e0 */
uint F_00bdb5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bdb61e;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bdb609;
  }
  else {
LAB_00bdb609: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bdb61e: ;
  if ((((iVar3 == 0) || (*(char *)(iVar3 + 0x12) != '\0')) ||
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 == (int *)0x0)) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2), uVar4 == 0 ||
       (*(char *)(uVar4 + 0x11) != '\x01')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdb660 */
uint F_00bdb660(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdb660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  uVar1 = F_00bdb5e0((*(undefined * PTR32 *)&gen_args[0]));
  uVar2 = 0;
  if (uVar1 != 0) {
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x89))) == '\0') {
      (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x4)) = 0.0;
      pfVar3 = &(*(float *)&gen_args[1]);
      if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
        pfVar3 = &(*(float *)(gen_frame + 0x8));
      }
      if (!(0.0 < *pfVar3)) {
        pfVar3 = &(*(float *)(gen_frame + 0x4));
      }
      fVar4 = (float10)*pfVar3;
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) == '\0') {
        fVar4 = (float10)1 - fVar4;
      }
      (*(float *)&gen_args[1]) = (float)fVar4;
    }
    else if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) == '\0') {
      (*(float *)&gen_args[1]) = 0.0;
    }
    else {
      (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
    }
    uVar2 = F_005e4530(uVar1,(*(float *)&gen_args[1]));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf26 */
uint F_00bdb700(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00bdb5e0(this);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_005e4530(uVar1,(float)(float10)1);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf33 */
uint F_00bdb720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  this[0x88] = (undefined1)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0');
  this[0x89] = (undefined1)(*((short *)GEN_TOP((*(int *)(this + 0x24) + 4))) == 1);
  uVar1 = F_00bdb660(this,(float)(float10)0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf34 */
byte F_00bdb750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bdb660(this,(float)(float10)1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf0 */
uint F_00bdb7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdb820 */
uint F_00bdb820(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a064));
  *(undefined4 *)((int)this + 0x88) = REFG(undefined4, 0x1302e54);
  *(undefined4 *)((int)this + 0x8c) = REFG(undefined4, 0x1302e58);
  *(undefined4 *)((int)this + 0x90) = REFG(undefined4, 0x1302e5c);
  *(undefined4 *)((int)this + 0x94) = REFG(undefined4, 0x1302e60);
  *(undefined4 *)((int)this + 0x98) = REFG(undefined4, 0x1302e54);
  *(undefined4 *)((int)this + 0x9c) = REFG(undefined4, 0x1302e58);
  *(undefined4 *)((int)this + 0xa0) = REFG(undefined4, 0x1302e5c);
  *(undefined4 *)((int)this + 0xa4) = REFG(undefined4, 0x1302e60);
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf26 */
unsigned int F_00bdb890(void)
{
  GEN_ENTER(0xbdb890u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf34 */
byte F_00bdb8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf20 */
uint F_00bdb8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x24);
  uVar1 = *(undefined4 *)(iVar4 + 0x18);
  fVar2 = *(float *)(iVar4 + 0x10);
  fVar3 = *(float *)(iVar4 + 0x14);
  *(float *)(this + 0x98) =
       ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0xc) * (float10)*(float *)(iVar4 + 0xc))));
  *(float *)(this + 0x9c) = (float)((float10)fVar2 * (float10)fVar2);
  fVar2 = (float)((float10)fVar3 * (float10)fVar3);
  *(float *)(this + 0xa0) = fVar2;
  *(undefined4 *)(this + 0xa4) = uVar1;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_00bdb960 */
uint F_00bdb960(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bdb99e;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bdb989;
  }
  else {
LAB_00bdb989: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bdb99e: ;
  if ((((iVar3 == 0) || (*(char *)(iVar3 + 0x12) != '\0')) ||
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 == (int *)0x0)) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2), uVar4 == 0 ||
       (*(char *)(uVar4 + 0x11) != '\x03')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdb9e0 */
uint F_00bdb9e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdb9e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * this;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  
  this = (undefined *)F_00bdb960((*(undefined * PTR32 *)&gen_args[0]));
  uVar5 = 0;
  if (this != (undefined *)0x0) {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x14)) = 0.0;
    pfVar6 = &(*(float *)&gen_args[1]);
    if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x18));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x14));
    }
    fVar7 = (float10)*pfVar6;
    (*(float *)&gen_args[1]) = (float)((float10)1 - fVar7);
    fVar8 = (float10)(*(float *)&gen_args[1]);
    fVar1 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))))));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) * fVar8)));
    (*(float *)(gen_frame + 0x8)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) * fVar8)));
    (*(float *)(gen_frame + 0xc)) = fVar3;
    fVar4 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))))));
    (*(float *)(gen_frame + 0x10)) = fVar4;
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) * fVar7 + (float10)fVar1)));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) * fVar7 + (float10)fVar2)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) * fVar7 + (float10)fVar3)));
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar7 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) + (float10)fVar4)));
    uVar5 = F_005de250(this,&(*(float *)(gen_frame + 0x4)));
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf33 */
uint F_00bdbab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_ecx;
  undefined4 * puVar1;
  
  in_ecx = F_00bdb960(this);
  puVar1 = (undefined4 *)0x0;
  if (in_ecx != 0) {
    puVar1 = (undefined4 *)F_005de230(in_ecx);
    *(undefined4 *)(this + 0x88) = *puVar1;
    *(undefined4 *)(this + 0x8c) = puVar1[1];
    *(undefined4 *)(this + 0x90) = puVar1[2];
    *(undefined4 *)(this + 0x94) = puVar1[3];
  }
  return (uint)puVar1;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf0 */
uint F_00bdbb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdbbc0 */
uint F_00bdbbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdbbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a184));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00bdbc20 */
uint F_00bdbc20(unsigned int gen_a0)
{
  GEN_ENTER(0xbdbc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bdbc5e;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bdbc49;
  }
  else {
LAB_00bdbc49: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bdbc5e: ;
  if ((((iVar3 == 0) || (*(char *)(iVar3 + 0x12) != '\0')) ||
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 == (int *)0x0)) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2), uVar4 == 0 ||
       (*(char *)(uVar4 + 0x11) != '\x03')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdbca0 */
uint F_00bdbca0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdbca0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  piVar1 = (int *)F_00bdbc20((*(undefined * PTR32 *)&gen_args[0]));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = &(*(float *)(gen_frame + 0x4));
    }
    fVar4 = (float10)*pfVar3;
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) != '\0') {
      fVar4 = (float10)1 - fVar4;
    }
    (*(float *)&gen_args[1]) = (float)fVar4;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf26 */
uint F_00bdbd20(unsigned int gen_a0)
{
  GEN_ENTER(0xbdbd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00bdbc20(this);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1,(undefined4)gen_fl2bits((float)(float10)0));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf33 */
uint F_00bdbd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  float10 fVar3;
  
  this[0x88] = (undefined1)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0');
  piVar1 = (int *)F_00bdbc20(this);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (this[0x88] == (undefined1)0x0) {
      fVar3 = (float10)0;
    }
    else {
      fVar3 = (float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8);
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1,(undefined4)gen_fl2bits((float)fVar3));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf34 */
byte F_00bdbda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  float10 fVar2;
  
  piVar1 = (int *)F_00bdbc20(this);
  if (piVar1 != (int *)0x0) {
    if (this[0x88] == (undefined1)0x0) {
      fVar2 = (float10)1;
    }
    else {
      fVar2 = (float10)0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1,(undefined4)gen_fl2bits((float)fVar2));
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf0 */
uint F_00bdbed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdbf00 */
uint F_00bdbf00(unsigned int gen_a0)
{
  GEN_ENTER(0xbdbf00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a2a4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf26 */
unsigned int F_00bdbf20(void)
{
  GEN_ENTER(0xbdbf20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf33 */
uint F_00bdbf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_005e1640();
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar2 = F_00bd30b0(this,0);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf34 */
byte F_00bdbf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbf50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf0 */
uint F_00bdbf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdbfa0 */
uint F_00bdbfa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdbfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a3c4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf26 */
unsigned int F_00bdbfc0(void)
{
  GEN_ENTER(0xbdbfc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf33 */
unsigned int F_00bdbfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b5c930(REFG(undefined4, 0x14c4e90),*(int *)(this + 0x24) + 0xc,0);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf34 */
byte F_00bdbff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf0 */
uint F_00bdc010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc040 */
uint F_00bdc040(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a4e4));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf26 */
uint F_00bdc060(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(this + 0x78);
  uVar5 = uVar4;
  if (uVar4 != 0) goto LAB_00bdc09e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar4 = 0;
    if (iVar2 != 0) goto LAB_00bdc089;
  }
  else {
LAB_00bdc089: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar4 = F_00b595f0(uVar1);
  }
  uVar5 = *(uint *)(this + 0x78);
LAB_00bdc09e: ;
  if ((((uVar5 != 0) && (*(char *)(uVar5 + 0x12) == '\0')) &&
      (piVar3 = *(int * PTR32 *)(uVar5 + 4), piVar3 != (int *)0x0)) &&
     ((uVar4 = piVar3[0x1b], uVar4 == 9 || (uVar4 == 8)))) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xac))(piVar3)));
    uVar4 = 0;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xd4))(piVar3,(undefined4)gen_fl2bits((float)(float10)0));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xe0))(piVar3,1);
    }
  }
  return uVar4;
}

/* ref: FUN_00bdc130 */
uint F_00bdc130(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdc130u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  float * pfVar4;
  bool bVar5;
  int * piVar6;
  float10 fVar7;
  
  iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x78);
  piVar6 = (int *)0x0;
  if (iVar3 == 0) {
    iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)((*(int *)&gen_args[0]) + 4) != 0) {
        *(undefined4 *)((*(int *)&gen_args[0]) + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 4) + 4)));
      }
      iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x6c);
      if (iVar3 != 0) goto LAB_00bdc15f;
    }
    else {
LAB_00bdc15f: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)((*(int *)&gen_args[0]) + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x78);
    if (iVar3 == 0) goto LAB_00bdc194;
  }
  if (((*(char *)(iVar3 + 0x12) == '\0') && (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0))
     && ((piVar2[0x1b] == 9 || (piVar2[0x1b] == 8)))) {
    piVar6 = piVar2;
  }
LAB_00bdc194: ;
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar4 = &(*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
    pfVar4 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar4)) {
    pfVar4 = &(*(float *)(gen_frame + 0x4));
  }
  fVar7 = (float10)*pfVar4;
  if (*(char *)((*(int *)&gen_args[0]) + 0x88) == '\0') {
    fVar7 = (float10)1 - fVar7;
  }
  (*(float *)&gen_args[1]) = (float)fVar7;
  fVar7 = (float10)(*(float *)&gen_args[1]);
  if (!((float10)0 < fVar7)) {
    (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
  }
  bVar5 = (float10)0 < fVar7;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) = bVar5;
  (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(REFG(float, 0x1087f04)) >> 8),bVar5));
  if (piVar6 != (int *)0x0) {
    piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xac))(piVar6)));
    pfVar4 = (float *)0x0;
    if (piVar6 != (int *)0x0) {
      (*(float *)&gen_args[1]) = (float)((float10)1 - (float10)(*(float *)&gen_args[1]));
      ((code *)*(gen_code32 *)(*piVar6 + 0xd4))(piVar6,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
      pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xdc))(piVar6)));
      if ((bool)(char)pfVar4 != bVar5) {
        pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xe0))(piVar6,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x8))))));
      }
    }
  }
  return (uint)pfVar4;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf33 */
uint F_00bdc260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  this[0x88] = (undefined1)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0');
  uVar1 = F_00bdc130(this,(float)(float10)0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf34 */
byte F_00bdc280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bdc130(this,(float)(float10)1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf0 */
uint F_00bdc320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc360 */
float10 F_00bdc360(float gen_a0)
{
  GEN_ENTER(0xbdc360u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bdc380 */
uint F_00bdc380(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a684));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf26 */
unsigned int F_00bdc3a0(void)
{
  GEN_ENTER(0xbdc3a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf34 */
byte F_00bdc3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf33 */
uint F_00bdc3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined3 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  undefined * this_00;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (*(uint *)(gen_frame + 0x8));
  iVar1 = *(int *)(this + 0x24);
  if (*(int *)(iVar1 + 0x10) == 0) {
    uVar6 = F_00bd3ff0(this);
    if (*(int *)(uVar6 + 0x6c) != 2) {
      return uVar6;
    }
    if (*(int *)(uVar6 + 0x88) != 9) {
      return uVar6;
    }
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x80) + 0xb4))))(*(int * PTR32 *)(uVar6 + 0x80))));
  }
  else {
    this_00 = (undefined *)F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14),
                                   CONCAT31((*(undefined3 *)(gen_frame + 0x5)),*(undefined1 *)(iVar1 + 0xd)),
                                   *(int *)(iVar1 + 0x10),0,1);
  }
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar2 = (undefined3)((uint)((int)(uintptr_t)this_00) >> 8);
  uVar8 = ((uint)((int)(uintptr_t)this_00) >> 8) << 8;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
  uVar6 = (*(uint *)(gen_frame + 0x8));
  uVar3 = 0;
  gen_piece_set(&(*(uint *)(gen_frame + 0x8)), 1, 3, (unsigned long long)(SUB43(uVar7,1)));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar1 + 0x18))) {
  case 0: ;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),1);
    uVar8 = CONCAT31(uVar2,1);
    break;
  case 1: ;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),1);
    goto LAB_00bdc458;
  case 2: ;
    (*(uint *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3) << 8;
    uVar8 = CONCAT31(uVar2,1);
    break;
  case 3: ;
    (*(uint *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3) << 8;
LAB_00bdc458: ;
    uVar8 = ((uint)((int)(uintptr_t)this_00) >> 8) << 8;
    break;
  default: ;
    goto switchD_00bdc437_default;
  }
  uVar3 = (undefined1)uVar8;
  uVar6 = (*(uint *)(gen_frame + 0x8));
switchD_00bdc437_default: ;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  cVar4 = (char)uVar8;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar1 + 0x14))) {
  case 0: ;
    bVar5 = F_005d6860(this_00,(cVar4 == '\0') + 2,(*(uint *)(gen_frame + 0x8)));
    return CONCAT31(extraout_var,bVar5);
  case 1: ;
    bVar5 = F_005d6860(this_00,(cVar4 == '\0') + 4,(*(uint *)(gen_frame + 0x8)));
    return CONCAT31(extraout_var_00,bVar5);
  case 2: ;
    bVar5 = F_005d6860(this_00,(cVar4 == '\0') + 6,(*(uint *)(gen_frame + 0x8)));
    return CONCAT31(extraout_var_01,bVar5);
  case 3: ;
    uVar7 = F_005f51d0(this_00,CONCAT31((*(undefined3 *)(gen_frame + 0x5)),uVar3),(*(uint *)(gen_frame + 0x8)));
    return uVar7;
  case 4: ;
    (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)
               (longlong)TRUNC((double)*(int *)(iVar1 + 0x24) * *(double *)&REFG(undefined, 0x110a7a0));
    uVar8 = F_005eb180(this_00,*(undefined4 *)(iVar1 + 0x1c),(*(undefined4 *)(gen_frame + 0x0)));
  }
  return uVar8;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf0 */
uint F_00bdc560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc590 */
float10 F_00bdc590(float gen_a0)
{
  GEN_ENTER(0xbdc590u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bdc5b0 */
uint F_00bdc5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a834));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BgShowHideClip::vf33 */
unsigned int F_00bdc5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_005f3310(*(undefined4 *)(this + 0x24));
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BgShowHideClip::vf34 */
byte F_00bdc5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BgShowHideClip::vf0 */
uint F_00bdc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc640 */
float10 F_00bdc640(float gen_a0)
{
  GEN_ENTER(0xbdc640u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bdc660 */
uint F_00bdc660(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a9d4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf34 */
byte F_00bdc680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00bdc690 */
unsigned int F_00bdc690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdc690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar3 != (undefined *)0x0) goto LAB_00bdc6cd;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00bdc6b8;
  }
  else {
LAB_00bdc6b8: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00bdc6cd: ;
  if (pvVar3 != (undefined *)0x0) {
    pvVar3 = (undefined *)F_00bbaf90(pvVar3);
    if (pvVar3 != (undefined *)0x0) {
      if (param_1 == 0) {
        F_00aa6a50(pvVar3,0,2,param_2);
      }
      else {
        if (param_1 == 1) {
          F_00aa6a50(pvVar3,1,2,param_2);
          return 0;
        }
        if (param_1 == 2) {
          F_00aa6a50(pvVar3,2,2,param_2);
          return 0;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf26 */
unsigned int F_00bdc730(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bdc690(this,(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0xe))),1);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf33 */
unsigned int F_00bdc740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bdc690(this,(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0xe))),
               (uint)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0'));
  return 0;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf0 */
uint F_00bdc770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc7a0 */
float10 F_00bdc7a0(float gen_a0)
{
  GEN_ENTER(0xbdc7a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bdc7c0 */
uint F_00bdc7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ab74));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf34 */
byte F_00bdc7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00bdc7f0 */
uint F_00bdc7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdc7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar2 = *(int *)((int)this + 0x78);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar2 = *(int *)((int)this + 0x6c);
      if (iVar2 != 0) goto LAB_00bdc818;
    }
    else {
LAB_00bdc818: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar2 = *(int *)((int)this + 0x78);
    if (iVar2 != 0) goto LAB_00bdc831;
  }
  else {
LAB_00bdc831: ;
    if (*(char *)(iVar2 + 0x12) == '\0') {
      uVar3 = *(uint *)(iVar2 + 4);
      goto LAB_00bdc83e;
    }
  }
  uVar3 = 0;
LAB_00bdc83e: ;
  iVar2 = *(int *)(uVar3 + 0x88);
  if (iVar2 == 10) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x80) + 0x34))))(*(int * PTR32 *)(uVar3 + 0x80))));
    uVar3 = F_006a0720(this_00,param_1,param_2);
  }
  else if ((iVar2 == 4) || (iVar2 == 5)) {
    uVar3 = F_00bd40a0(this);
    if ((uVar3 != 0) && ((undefined *)(uVar3 + 0x16c0) != (undefined *)0x0)) {
      uVar3 = F_006a0720((undefined *)(uVar3 + 0x16c0),param_1,param_2);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf26 */
uint F_00bdc8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00bdc7f0(this,*((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) + *(int *)(this + 0x24),1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf33 */
uint F_00bdc8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x24);
  uVar2 = F_00bdc7f0(this,*(int *)(iVar1 + 0xc) + iVar1,(uint)(*(char *)(iVar1 + 0x10) != '\0'));
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf0 */
uint F_00bdc900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc930 */
uint F_00bdc930(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ac94));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf25 */
uint F_00bdc960(void)
{
  GEN_ENTER(0xbdc960u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((undefined4 *)(gen_frame + 0x0))[0] = 1;
  uVar1 = F_005f32e0(((undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf20 */
unsigned int F_00bdc9a0(void)
{
  GEN_ENTER(0xbdc9a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf33 */
uint F_00bdc9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005f32e0(*(int *)(this + 0x24) + 0xc);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf34 */
byte F_00bdc9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf0 */
uint F_00bdcaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdcaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ac94));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdcad0 */
float10 F_00bdcad0(float gen_a0)
{
  GEN_ENTER(0xbdcad0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf26 */
unsigned int F_00bdcaf0(void)
{
  GEN_ENTER(0xbdcaf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00bdcb00 */
uint F_00bdcb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xbdcb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  int * piVar1;
  uint in_ecx;
  uint uVar2;
  int iVar3;
  undefined * this;
  
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x6c);
  if (this == (undefined *)0x0) {
    uVar2 = 0;
    if (*(int *)((*(int *)&gen_args[0]) + 4) != 0) {
      uVar2 = *((uint *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 4) + 4)));
      *(uint *)((*(int *)&gen_args[0]) + 0x6c) = uVar2;
    }
    this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x6c);
    if (this == (undefined *)0x0) {
      return uVar2;
    }
  }
  piVar1 = (int *)F_00beb6b0(this);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (*(char *)((*(int *)&gen_args[0]) + 0xb8) != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,&(*(undefined4 *)&gen_args[1]));
    }
    in_ecx = F_00beb670(this);
    uVar2 = in_ecx;
    if (*(char *)((*(int *)&gen_args[0]) + 0xb9) != '\0') {
      if (in_ecx == 0) {
        (*(float *)&gen_args[5]) = (float)((float10)1 - (float10)(*(float *)&gen_args[5]));
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,(undefined4)gen_fl2bits((*(float *)&gen_args[5])));
      }
      else {
        uVar2 = F_00aa0980(in_ecx,(*(float *)&gen_args[5]),1);
      }
    }
    if ((*(char *)((*(int *)&gen_args[0]) + 0xb8) != '\0') && (in_ecx != 0)) {
      iVar3 = 3;
      piVar1 = (int *)(in_ecx + 0x2da0);
      do {
        iVar3 = iVar3 + -1;
        piVar1 = piVar1 + -0x1e8;
        if (piVar1 != (int *)0x0) {
          uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,&(*(undefined4 *)&gen_args[1]));
        }
      } while (iVar3 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_00bdcc00 */
uint F_00bdcc00(unsigned int gen_a0)
{
  GEN_ENTER(0xbdcc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined1 *)((int)this + 0xba) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ae34));
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined2 *)((int)this + 0xb8) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf34 */
byte F_00bdcc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdcc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bdcb00(this,(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(float)(float10)1);
  return 1;
}

/* ref: FUN_00bdccb0 */
uint F_00bdccb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdccb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar2;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    local_14 = REFG(float, 0x1087f04);
    local_10 = REFG(float, 0x1087f04);
    local_c = REFG(float, 0x1087f04);
    param_2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xb4) * (float10)param_2 +
                     (float10)*(float *)(param_1 + 0x94))));
  }
  else {
    fVar2 = (float10)param_2;
    param_2 = REFG(float, 0x1087f04);
    local_14 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x88) +
                      fVar2 * (float10)*(float *)(param_1 + 0xa8))));
    local_10 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xac) * fVar2 +
                      (float10)*(float *)(param_1 + 0x8c))));
    local_c = ((float)GEN_TOF((fVar2 * (float10)*(float *)(param_1 + 0xb0) +
                     (float10)*(float *)(param_1 + 0x90))));
  }
  uVar1 = F_00bdcb00(param_1,(undefined4)gen_fl2bits(local_14),(undefined4)gen_fl2bits(local_10),
                       (undefined4)gen_fl2bits(local_c),(undefined4)gen_fl2bits(REFG(float, 0x1087f04)),
                       param_2);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf33 */
uint F_00bdcd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdcd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  iVar3 = *(int *)(this + 0x2c);
  if (iVar3 == 0x4c) {
    iVar3 = *(int *)(this + 0x24);
    iVar4 = *(int *)(iVar3 + 0xc);
    uVar1 = *(undefined4 *)(iVar4 + 4 + iVar3);
    uVar2 = *(undefined4 *)(iVar4 + 8 + iVar3);
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(iVar4 + iVar3);
    *(undefined4 *)(this + 0x8c) = uVar1;
    uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *(undefined4 *)(this + 0x90) = uVar2;
    *(undefined4 *)(this + 0x94) = uVar5;
    iVar4 = *(int *)(iVar3 + 0x14);
    uVar1 = *(undefined4 *)(iVar3 + 4 + iVar4);
    uVar2 = *(undefined4 *)(iVar3 + 8 + iVar4);
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(iVar3 + iVar4);
    *(undefined4 *)(this + 0x9c) = uVar1;
    *(undefined4 *)(this + 0xa0) = uVar2;
    *(undefined4 *)(this + 0xa4) = uVar5;
    *(undefined2 *)(this + 0xb8) = 1;
    this[0xba] = (undefined1)0x0;
  }
  else if (iVar3 == 0x4d) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
    *(undefined4 *)(this + 0x90) = 0;
    *(undefined4 *)(this + 0x94) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0x10)));
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
    *(undefined4 *)(this + 0xa0) = 0;
    *(undefined4 *)(this + 0xa4) = uVar1;
    *(undefined2 *)(this + 0xb8) = 0x100;
    this[0xba] = (undefined1)0x0;
  }
  else if ((iVar3 == 0x4e) || (iVar3 == 0x4f)) {
    *(undefined4 *)(this + 0x88) = GEN_FLT_TO(*(undefined4 *)(this + 0x88), REFG(float, 0x1087f04));
    *(undefined4 *)(this + 0x8c) = uVar1;
    *(undefined4 *)(this + 0x90) = uVar1;
    *(undefined4 *)(this + 0x94) = uVar1;
    *(undefined4 *)(this + 0x98) = uVar1;
    *(undefined4 *)(this + 0x9c) = uVar1;
    *(undefined4 *)(this + 0xa0) = uVar1;
    *(undefined4 *)(this + 0xa4) = uVar1;
    this[0xb8] = (undefined1)(iVar3 == 0x4e);
    this[0xb9] = (undefined1)(iVar3 == 0x4f);
    this[0xba] = (undefined1)0x1;
  }
  else {
    *(undefined4 *)(this + 0x88) = GEN_FLT_TO(*(undefined4 *)(this + 0x88), REFG(float, 0x1087f04));
    *(undefined4 *)(this + 0x8c) = uVar1;
    *(undefined4 *)(this + 0x90) = uVar1;
    *(undefined4 *)(this + 0x98) = uVar1;
    *(undefined4 *)(this + 0x94) = uVar1;
    *(undefined4 *)(this + 0x9c) = uVar1;
    *(undefined4 *)(this + 0xa0) = uVar1;
    *(undefined4 *)(this + 0xa4) = uVar1;
    *(undefined2 *)(this + 0xb8) = 0;
    this[0xba] = (undefined1)0x0;
  }
  *(float *)(this + 0xa8) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x98) - (float10)*(float *)(this + 0x88))));
  *(float *)(this + 0xac) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x9c) - (float10)*(float *)(this + 0x8c))));
  *(float *)(this + 0xb0) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa0) - (float10)*(float *)(this + 0x90))));
  *(float *)(this + 0xb4) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa4) - (float10)*(float *)(this + 0x94))));
  uVar6 = F_00bdccb0(this,(float)(float10)0);
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf30 */
unsigned int F_00bdd090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdd090u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 extraout_ST0;
  float fVar1;
  
  if ((char)param_3 != '\0') {
    fVar1 = F_00bd2390(param_1);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xa4))(param_1);
    param_3 = (uint)gen_fl2bits((float)((float10)fVar1 / extraout_ST0));
    if ((float10)1 < ((float10)GEN_TOD(gen_bits2f(param_3)))) {
      param_3 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    }
    if (*(char *)((int)param_1 + 0xba) == '\0') {
      F_00bdccb0(param_1,GEN_TOF(gen_bits2f(param_3)));
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf29 */
unsigned int F_00bdd0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd0f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  
  if (*(char *)((*(int *)&gen_args[0]) + 0xba) != '\0') {
    iVar5 = *(int *)((*(uint *)&gen_args[1]) + 0x1c);
    fVar1 = *(float *)(iVar5 + 0x30);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
    pfVar6 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    fVar1 = *pfVar6;
    fVar2 = *(float *)(iVar5 + 0x34);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar2);
    pfVar6 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar2 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
    fVar2 = *pfVar6;
    fVar3 = *(float *)(iVar5 + 0x38);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar3);
    pfVar6 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar3 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
    fVar3 = *pfVar6;
    fVar4 = *(float *)(iVar5 + 0x3c);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar4);
    pfVar6 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar4 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
    F_00bdcb00((*(int *)&gen_args[0]),(undefined4)gen_fl2bits(fVar1),(undefined4)gen_fl2bits(fVar2),
                 (undefined4)gen_fl2bits(fVar3),(undefined4)gen_fl2bits(REFG(float, 0x1087f04)),*pfVar6);
  }
  return 0;
}

/* ref: FUN_00bdd210 */
float10 F_00bdd210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 8 + param_2 * 4);
}

/* ref: FUN_00bdd220 */
uint F_00bdd220(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xbdd220u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x1087f04));
  return (uint)in_ecx;
}

/* ref: FUN_00bdd260 */
float F_00bdd260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((float *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bdd280 */
float F_00bdd280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((float *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf0 */
uint F_00bdd2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdd2e0 */
uint F_00bdd2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd2e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) * 8 ^ *(uint *)(in_ecx + 0x3fc)) & 8;
  *(uint *)(in_ecx + 0x3fc) = *(uint *)(in_ecx + 0x3fc) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00bdd300 */
uint F_00bdd300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2c) = param_2;
  return param_2;
}

/* ref: FUN_00bdd310 */
byte F_00bdd310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x2c) == param_2;
}

/* ref: FUN_00bdd330 */
float10 F_00bdd330(float gen_a0)
{
  GEN_ENTER(0xbdd330u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bdd350 */
uint F_00bdd350(unsigned int gen_a0)
{
  GEN_ENTER(0xbdd350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110afd4));
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf25 */
uint F_00bdd390(unsigned int gen_a0)
{
  GEN_ENTER(0xbdd390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(this + 0x78);
  if (iVar3 == 0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 != 0) goto LAB_00bdd3b5;
    }
    else {
LAB_00bdd3b5: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar3 = *(int *)(this + 0x78);
    if (iVar3 != 0) goto LAB_00bdd3ce;
  }
  else {
LAB_00bdd3ce: ;
    if ((*(char *)(iVar3 + 0x12) == '\0') && (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0))
    {
      ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0);
    }
  }
  uVar4 = *(uint *)(this + 0x78);
  uVar5 = uVar4;
  if (uVar4 != 0) goto LAB_00bdd424;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_00bdd40f;
  }
  else {
LAB_00bdd40f: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar4 = F_00b595f0(uVar1);
  }
  uVar5 = *(uint *)(this + 0x78);
LAB_00bdd424: ;
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 0x3fc) = *(uint *)(uVar5 + 0x3fc) & 0xfffffff7;
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf31 */
uint F_00bdd440(unsigned int gen_a0)
{
  GEN_ENTER(0xbdd440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(in_ecx + 0x78);
  if (uVar3 != 0) {
    *(undefined4 *)(uVar3 + 0x2c) = 0;
    return uVar3;
  }
  iVar2 = *(int *)(in_ecx + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar2 = *(int *)(in_ecx + 0x6c);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_00bdd480;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(in_ecx + 0x78) = uVar1;
  uVar3 = F_00b595f0(uVar1);
LAB_00bdd480: ;
  *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x2c))) = 0;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf32 */
uint F_00bdd490(unsigned int gen_a0)
{
  GEN_ENTER(0xbdd490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x78);
  if (uVar3 != 0) goto LAB_00bdd4ca;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bdd4b5;
  }
  else {
LAB_00bdd4b5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  uVar3 = *(uint *)(this + 0x78);
LAB_00bdd4ca: ;
  if (*(undefined * PTR32 *)(uVar3 + 0x2c) == this) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,5);
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf33 */
uint F_00bdd4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  int iVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  this[0x90] = (undefined1)0x0;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  bVar2 = F_00bd2480(this);
  if (bVar2 == 0) {
    iVar3 = *(int *)(this + 0x78);
    if (iVar3 == 0) {
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 == 0) {
        if (*(int *)(this + 4) != 0) {
          *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
        }
        iVar3 = *(int *)(this + 0x6c);
        if (iVar3 != 0) goto LAB_00bdd56a;
      }
      else {
LAB_00bdd56a: ;
        uVar7 = *(undefined4 *)(iVar3 + 0x20);
        *(undefined4 *)(this + 0x78) = uVar7;
        F_00b595f0(uVar7);
      }
      iVar3 = *(int *)(this + 0x78);
    }
    piVar4 = (int *)F_00bd3ff0(this);
    uVar5 = 0;
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4)));
      uVar5 = 0;
      if (this_00 != (undefined *)0x0) {
        bVar6 = *(char *)((int)this_00 + 0x2e08) != '\0';
        iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
        if (iVar1 < 0x81) {
          if (iVar1 == 0x80) {
            ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
            if (bVar6) {
              F_00aab790(this_00,0,0,0,0,0);
            }
            F_00aa0560(this_00,0x22);
            F_00aaa5b0(this_00,1);
            F_00aa6f20(this_00,0,0);
            F_00aa6f20(this_00,1,1);
            uVar5 = F_00aa2c50(this_00,0,0,0);
            *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
            *(undefined4 *)(this + 0x8c) = 1;
            return uVar5;
          }
          if (iVar1 == 0) {
            *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) | 8;
            uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xa4))(piVar4,0);
            *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) & 0xfffffff7;
            this[0x90] = (undefined1)0x1;
            return uVar5;
          }
          uVar5 = iVar1 - 1;
          if (uVar5 == 0) {
            *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) | 8;
            ((code *)*(gen_code32 *)(*piVar4 + 0xa4))(piVar4,1);
            *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
            this[0x90] = (undefined1)0x1;
            return (uint)this;
          }
        }
        else {
          if (iVar1 < 0x101) {
            if (iVar1 == 0x100) {
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aa6f20(this_00,1,1);
              F_00aabf60(this_00,0);
              uVar5 = F_00aaa5b0(this_00,2);
              *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xf7;
              *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
              return uVar5;
            }
            if (iVar1 == 0x81) {
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aa0560(this_00,3);
              F_00aaa5b0(this_00,1);
              F_00aa6f20(this_00,1,0);
              F_00aa6f20(this_00,0,1);
              uVar5 = F_00aa2c50(this_00,0,0,0);
              *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
              *(undefined4 *)(this + 0x8c) = 2;
              return uVar5;
            }
            if (iVar1 == 0x82) {
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aaa5b0(this_00,1);
              F_00aa6f20(this_00,1,0);
              uVar7 = 0x22;
            }
            else {
              if (iVar1 - 0x83U != 0) {
                return iVar1 - 0x83U;
              }
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aaa5b0(this_00,1);
              F_00aa6f20(this_00,0,0);
              uVar7 = 3;
            }
            F_00aa4150(this_00,uVar7,0,0);
            uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xa4))(piVar4,1);
          }
          else {
            uVar5 = iVar1 - 0x101;
            switch((unsigned int)(uintptr_t)(iVar1)) {
            case 0x101: ;
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aa6f20(this_00,0,1);
              F_00aabf60(this_00,0);
              uVar5 = F_00aaa5b0(this_00,2);
              *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xf7;
              *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
              return uVar5;
            case 0x102: ;
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aa0560(this_00,0x49);
              F_00aa2c50(this_00,0,0,0);
              F_00aaa5b0(this_00,2);
              *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xf7;
              uVar5 = F_00aa6f20(this_00,1,0);
              break;
            case 0x103: ;
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aa0560(this_00,0x43);
              F_00aa2c50(this_00,0,0,0);
              F_00aaa5b0(this_00,2);
              *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xf7;
              uVar5 = F_00aa6f20(this_00,0,0);
              break;
            default: ;
              goto switchD_00bdd84a_caseD_104;
            case 0x180: ;
              uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (!bVar6) {
                uVar5 = F_00aab790(this_00,1,0,0,0,0);
              }
            }
          }
          *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
          this[0x90] = (undefined1)0x1;
        }
      }
    }
switchD_00bdd84a_caseD_104: ;
    return uVar5;
  }
  uVar5 = *(uint *)(this + 0x78);
  if (uVar5 != 0) goto LAB_00bdd53d;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00bdd528;
  }
  else {
LAB_00bdd528: ;
    uVar7 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar7;
    F_00b595f0(uVar7);
  }
  uVar5 = *(uint *)(this + 0x78);
LAB_00bdd53d: ;
  *(undefined * PTR32 *)(uVar5 + 0x2c) = this;
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf34 */
byte F_00bdda30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdda30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  
  if (this[0x90] != (undefined1)0x0) {
    return 1;
  }
  iVar2 = *(int *)(this + 0x78);
  this[0x90] = (undefined1)0x1;
  if (iVar2 != 0) goto LAB_00bdda7b;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bdda66;
  }
  else {
LAB_00bdda66: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *(int *)(this + 0x78);
LAB_00bdda7b: ;
  piVar3 = (int *)F_00bd3ff0(this);
  if ((iVar2 != 0) && (piVar3 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3,1);
    *(uint *)(iVar2 + 0x3fc) = *(uint *)(iVar2 + 0x3fc) | 8;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf7 */
uint F_00bddb10(unsigned int gen_a0)
{
  GEN_ENTER(0xbddb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if (this[0x90] != (undefined1)0x0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  piVar1 = (int *)F_00bd3ff0(this);
  this_00 = (undefined *)0x0;
  if (piVar1 != (int *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1)));
    if ((this_00 != (undefined *)0x0) && (*(int *)(this + 0x8c) != -1)) {
      this_00 = (undefined *)F_00aa02d0(this_00,*(int *)(this + 0x8c),0);
      if ((char)this_00 == '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,7);
        return uVar2;
      }
    }
  }
  return (uint)this_00 & 0xffffff00;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf1 */
byte F_00bddb70(unsigned int gen_a0)
{
  GEN_ENTER(0xbddb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  undefined * this_00;
  byte bVar3;
  int iVar4;
  undefined * this_01;
  
  iVar4 = *(int *)(this + 0x78);
  if (iVar4 == 0) {
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar4 = *(int *)(this + 0x6c);
      if (iVar4 != 0) goto LAB_00bddb96;
    }
    else {
LAB_00bddb96: ;
      uVar1 = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar4 = *(int *)(this + 0x78);
    if (iVar4 == 0) goto LAB_00bddbf8;
  }
  if ((*(char *)(iVar4 + 0x12) == '\0') && (piVar2 = *(int * PTR32 *)(iVar4 + 4), piVar2 != (int *)0x0)) {
    this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2)));
    if ((this_01 != (undefined *)0x0) &&
       (this_00 = *(undefined * PTR32 *)((int)this_01 + 0xec), this_00 != (undefined *)0x0)) {
      if (this[0x88] == (undefined1)0x0) {
        F_00aa2210(this_01);
        this[0x88] = (undefined1)0x1;
      }
      bVar3 = F_006b3620(this_00);
      if (bVar3 != 0) {
        return 0;
      }
    }
  }
LAB_00bddbf8: ;
  bVar3 = F_00bd2590((undefined *)this);
  return bVar3;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf0 */
uint F_00bddc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbddc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110afd4));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bddc40 */
unsigned int F_00bddc40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbddc40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xac) = param_2;
  return 0;
}

/* ref: FUN_00bddc60 */
uint F_00bddc60(unsigned int gen_a0)
{
  GEN_ENTER(0xbddc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b0f4));
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf29 */
uint F_00bddc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbddc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x88);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x50) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x50) + 0xac))) = *(undefined4 *)(param_1 + 0x38);
    uVar1 = F_00befda0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x88) + 0x50))));
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf56 */
unsigned int F_00bddcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbddcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x88) != 0) {
    F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
    F_00bbacc0(((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x88));
    uVar2 = F_00bbaea0(((undefined1 *)(gen_frame + 0x8)),param_1);
    if ((((char)uVar2 != '\0') ||
        (((*(char *)(param_1 + 0x12) == '\0' && (*(int *)(param_1 + 4) != 0)) &&
         (bVar1 = F_00b630d0(*(undefined4 *)(this + 0x88),*(int *)(param_1 + 4)), bVar1 != 0))))
       && (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0)) {
      F_00b63220(*(undefined * PTR32 *)(this + 0x88));
      *(undefined4 *)(this + 0x88) = 0;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf25 */
unsigned int F_00bddd50(unsigned int gen_a0)
{
  GEN_ENTER(0xbddd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_00b63220(*(undefined * PTR32 *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf33 */
uint F_00bddd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbddd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined * this_00;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  
  uVar6 = *(uint *)(this + 0x78);
  iVar2 = *(int *)(this + 0x24);
  if (uVar6 != 0) goto LAB_00bdddd2;
  iVar5 = *(int *)(this + 0x6c);
  if (iVar5 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 != 0) goto LAB_00bdddb5;
  }
  else {
LAB_00bdddb5: ;
    uVar3 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar3;
    F_00b595f0(uVar3);
  }
  uVar6 = *(uint *)(this + 0x78);
  if (uVar6 == 0) {
    return 0;
  }
LAB_00bdddd2: ;
  if (*(char *)(uVar6 + 0x12) == '\0') {
    this_00 = *(undefined * PTR32 *)(uVar6 + 4);
    (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this_00;
    if (this_00 != (undefined *)0x0) {
      *(undefined * PTR32 *)(this + 0x88) = this_00;
      if (*(int *)((int)this_00 + 0x50) != 0) {
        F_00b63220(this_00);
        *(undefined4 *)(this + 0x88) = 0;
      }
      uVar6 = 0xffffffff;
      if ((*(int *)(iVar2 + 0x18) != -1) || (*(int *)(iVar2 + 0x20) != -1)) {
        *(undefined * PTR32 *)(this + 0x88) = (*(undefined * PTR32 *)(gen_frame + 0x9c));
        uVar7 = F_0052ed20(REFG(undefined4, 0x1375b00),*(undefined4 *)(iVar2 + 0x18),0,0);
        uVar8 = F_0052ed20(REFG(undefined4, 0x1375b00),*(undefined4 *)(iVar2 + 0x20),0,0);
        (*(uint *)(gen_frame + 0x98)) = uVar8;
        if ((uVar7 != 0) || (uVar6 = 0, uVar8 != 0)) {
          uVar3 = *(undefined4 *)(iVar2 + 0x30);
          uVar1 = *(undefined4 *)(iVar2 + 0x34);
          (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar2 + 0x2c);
          (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar2 + 0x44);
          (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
          (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
          (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
          uVar3 = *(undefined4 *)(iVar2 + 0x48);
          (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
          uVar1 = *(undefined4 *)(iVar2 + 0x4c);
          (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(iVar2 + 0x38);
          (*(undefined4 *)(gen_frame + 0x34)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
          (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(iVar2 + 0x3c);
          (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
          (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
          (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
          (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
          (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(iVar2 + 0x40);
          F_00a1e0d0(&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x80)));
          (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(iVar2 + 0x50);
          (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(iVar2 + 0x54);
          (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(iVar2 + 0x58);
          F_00a1e0d0(&(*(undefined4 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x80)));
          (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x68));
          (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x74));
          (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x60));
          (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x6c));
          (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x64));
          (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x78));
          (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x70));
          (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)(gen_frame + 0x7c));
          bVar4 = F_00b63030((*(undefined * PTR32 *)(gen_frame + 0x9c)),(uint)*(ushort *)(iVar2 + 0x14),uVar7,&(*(undefined4 *)(gen_frame + 0x0)),
                               (uint)*(ushort *)(iVar2 + 0x1c),(*(uint *)(gen_frame + 0x98)),&(*(undefined4 *)(gen_frame + 0x30)),
                               (uint)*(ushort *)(iVar2 + 0x24),
                               (uint)(*(int *)(iVar2 + 0x28) != 1) * 4 + 2);
          uVar6 = CONCAT31(extraout_var,bVar4);
        }
      }
    }
  }
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf34 */
byte F_00bddfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbddfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((*((char *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == '\0') && (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0))
  {
    F_00b63220(*(undefined * PTR32 *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  return 1;
}

/* ref: FUN_00bddfe0 */
unsigned int F_00bddfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xbddfe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x88) != (undefined *)0x0) {
    F_00b63220(*(undefined * PTR32 *)((int)this + 0x88));
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return 0;
}

/* ref: FUN_00bde000 */
float10 F_00bde000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0x2c + param_2 * 4);
}

/* ref: FUN_00bde010 */
float10 F_00bde010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0x38 + param_2 * 4);
}

/* ref: FUN_00bde020 */
float10 F_00bde020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0x44 + param_2 * 4);
}

/* ref: FUN_00bde030 */
float10 F_00bde030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0x50 + param_2 * 4);
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf0 */
uint F_00bde040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b0f4));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bde070 */
uint F_00bde070(unsigned int gen_a0)
{
  GEN_ENTER(0xbde070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b214));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf26 */
unsigned int F_00bde0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbde0c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x98) = 0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf34 */
byte F_00bde0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde0e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 2) {
    *(undefined4 *)(in_ecx + 0x98) = 0;
    *(undefined4 *)(in_ecx + 0x88) = 0;
  }
  return 1;
}

/* ref: FUN_00bde110 */
uint F_00bde110(unsigned int gen_a0)
{
  GEN_ENTER(0xbde110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bde14e;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bde139;
  }
  else {
LAB_00bde139: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bde14e: ;
  if ((((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) &&
     ((piVar2[0x1b] == 8 || (piVar2[0x1b] == 9)))) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bde180 */
uint F_00bde180(unsigned int gen_a0)
{
  GEN_ENTER(0xbde180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bde1be;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bde1a9;
  }
  else {
LAB_00bde1a9: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bde1be: ;
  if ((((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) &&
     ((piVar2[0x1b] == 8 || (piVar2[0x1b] == 9)))) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xb4))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf33 */
uint F_00bde230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined2 uVar11;
  undefined * pSVar12;
  bool bVar13;
  float10 extraout_ST0;
  float10 fVar14;
  uint uVar10;
  
  uVar9 = F_00bde110(this);
  if (((uVar9 != 0) && (*(char *)(uVar9 + 0x11) == '\x06')) && (*(int *)(uVar9 + 0xa4) != 0)) {
    this_00 = (undefined *)F_00bde180(this);
    bVar7 = F_005db4d0(this_00);
    uVar9 = CONCAT31(extraout_var,bVar7);
    if (bVar7 == 0) {
      iVar4 = *(int *)(this + 0x24);
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xb0))(this);
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 2)) = gen_x87_cw;
      (*(int *)(gen_frame + 0x0)) = (int)(longlong)TRUNC(extraout_ST0);
      fVar14 = (float10)*(double *)&REFG(undefined, 0x10912a8);
      pSVar12 = this + 0x8c;
      fVar3 = ((float)GEN_TOF((((float10)GEN_TOD(((uint)((*(int *)(gen_frame + 0x0)) * 1000) / 0x1e))) / fVar14)));
      *(float *)pSVar12 = fVar3;
      *(float *)(this + 0x90) =
           ((float)GEN_TOF((((float10)GEN_TOD((((uint)*(ushort *)(iVar4 + 0x12) * 1000) / 0x1e))) / fVar14)));
      uVar9 = (uint)*(ushort *)(iVar4 + 0x14) * 1000;
      lVar6 = (ulonglong)uVar9 * 0x88888889;
      fVar1 = *(float *)(this + 0x90);
      bVar5 = GEN_ISNAN(fVar1);
      bVar13 = bVar5 || fVar1 == 0.0;
      uVar11 = (undefined2)((ulonglong)lVar6 >> 0x10);
      uVar8 = (undefined1)lVar6;
      uVar10 = CONCAT22(uVar11,CONCAT11(bVar13 << 6 | bVar5 << 2 | 2U | !(0.0 <= fVar1),uVar8));
      *(undefined4 *)(this + 0x98) = 0;
      *(undefined4 *)(this + 0x88) = 0;
      *(undefined4 *)(this + 0x9c) = 0;
      *(float *)(this + 0x94) = ((float)GEN_TOF(((float10)(uVar9 / 0x1e) / fVar14)));
      if (bVar5 != bVar13) {
        fVar2 = *(float *)(this + 0x94);
        bVar5 = GEN_ISNAN(fVar2);
        bVar13 = bVar5 || fVar2 == 0.0;
        uVar10 = CONCAT22(uVar11,CONCAT11(bVar13 << 6 | bVar5 << 2 | 2U | !(0.0 <= fVar2),uVar8));
        if (bVar5 != bVar13) {
          return uVar10;
        }
      }
      fVar2 = *(float *)(this + 0x94);
      (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar1 + (float10)fVar2);
      if ((float10)(float)((float10)fVar1 + (float10)fVar2) < (float10)*(float *)pSVar12) {
        pSVar12 = (undefined *)&(*(float *)(gen_frame + 0x8));
      }
      *(float *)(this + 0x9c) =
           ((float)GEN_TOF((((float10)*(float *)((int)(uintptr_t)pSVar12) / (float10)fVar3) * (float10)REFG(double, 0x1088108))));
      return uVar10;
    }
  }
  return uVar9;
}

/* ref: FUN_00bde3b0 */
uint F_00bde3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbde3b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  float * pfVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar6 = REFG(float, 0x1087f04);
  fVar1 = *(float *)(in_ecx + 0x90);
  ((float *)(gen_frame + 0x10))[1] = *(float *)(REFG(int, 0x137104c) + 0x1198);
  fVar9 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198);
  pfVar7 = ((float *)GEN_TOP(CONCAT22((short)((uint)REFG(int, 0x137104c) >> 0x10),(ushort)(byte)REFG(int, 0x137104c))));
  ((float *)(gen_frame + 0x10))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x10))[2], REFG(float, 0x1087f04));
  fVar2 = ((float)GEN_TOF((fVar9 + (float10)*(float *)(in_ecx + 0x98))));
  ((float *)(gen_frame + 0x10))[1] = fVar2;
  ((float *)(gen_frame + 0x10))[1] = fVar1;
  *(float *)(in_ecx + 0x98) = fVar2;
  fVar5 = (float10)1;
  if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) && ((float10)fVar2 < (float10)fVar1)) {
    ((float *)(gen_frame + 0x10))[1] = fVar6;
    ((float *)(gen_frame + 0x10))[0] = 0.0;
    pfVar7 = ((float *)(gen_frame + 0x10)) + 2;
    fVar1 = ((float)GEN_TOF((((float10)1 / (float10)fVar1) * (float10)fVar2)));
    ((float *)(gen_frame + 0x10))[2] = fVar1;
    if (!((float10)fVar1 < fVar5)) {
      pfVar7 = ((float *)(gen_frame + 0x10)) + 1;
    }
    if (!(0.0 < *pfVar7)) {
      pfVar7 = ((float *)(gen_frame + 0x10));
    }
    ((float *)(gen_frame + 0x10))[2] = *pfVar7;
  }
  fVar1 = *(float *)(in_ecx + 0x94);
  bVar4 = GEN_ISNAN(fVar1);
  bVar8 = bVar4 || fVar1 == 0.0;
  pfVar7 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)pfVar7) >> 0x10),
                             CONCAT11(bVar8 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar1),(char)pfVar7))));
  ((float *)(gen_frame + 0x10))[0] = fVar1;
  if (bVar4 == bVar8) {
    fVar2 = *(float *)(in_ecx + 0x8c);
    ((float *)(gen_frame + 0x10))[1] = fVar2;
    fVar3 = *(float *)(in_ecx + 0x98);
    (*(float *)(gen_frame + 0xc)) = fVar3;
    fVar10 = (float10)fVar2;
    fVar11 = (float10)fVar3;
    if (fVar10 - (float10)fVar1 < fVar11) {
      (*(float *)(gen_frame + 0xc)) = fVar6;
      ((float *)(gen_frame + 0x10))[0] = 0.0;
      pfVar7 = ((float *)(gen_frame + 0x10)) + 2;
      fVar1 = ((float)GEN_TOF((((float10)1 / (float10)fVar1) * (fVar10 - fVar11))));
      ((float *)(gen_frame + 0x10))[2] = fVar1;
      if (!((float10)fVar1 < fVar5)) {
        pfVar7 = &(*(float *)(gen_frame + 0xc));
      }
      if (!(0.0 < *pfVar7)) {
        pfVar7 = ((float *)(gen_frame + 0x10));
      }
      ((float *)(gen_frame + 0x10))[2] = *pfVar7;
    }
  }
  ((float *)(gen_frame + 0x10))[1] = *(float *)(in_ecx + 0x8c);
  fVar10 = (float10)*(float *)(in_ecx + 0x8c);
  fVar1 = (float)(fVar9 / fVar10);
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar9 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)((float *)(gen_frame + 0x10))[2] + (float10)*(float *)(in_ecx + 0x88))));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x9c) * fVar9 + (float10)fVar1)));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  *(float *)(in_ecx + 0x88) = fVar1;
  if ((GEN_ISNAN((float10)fVar1) || GEN_ISNAN(fVar5)) || (float10)fVar1 <= fVar5) {
    if (fVar10 < (float10)*(float *)(in_ecx + 0x98)) {
      *(float *)(in_ecx + 0x88) = fVar6;
      *(undefined4 *)(in_ecx + 0x98) = 0;
      return (uint)pfVar7;
    }
  }
  else {
    *(float *)(in_ecx + 0x88) = fVar6;
    *(undefined4 *)(in_ecx + 0x98) = 0;
  }
  return (uint)pfVar7;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf28 */
uint F_00bde550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  byte bVar2;
  int * this_00;
  uint uVar3;
  undefined * this_01;
  undefined3 extraout_var = 0;
  int * piVar4;
  bool bVar5;
  float10 fVar6;
  
  this_00 = (int *)F_00bde110(this);
  piVar4 = this_00;
  if (((this_00 != (int *)0x0) && (*(char *)((int)this_00 + 0x11) == '\x06')) &&
     (this_00[0x29] != 0)) {
    uVar3 = F_005f08c0(this_00);
    (*(uint *)(gen_frame + 0x28)) = uVar3;
    piVar4 = (int *)0x0;
    if (uVar3 != 0) {
      this_01 = (undefined *)F_00bde180(this);
      bVar2 = F_005db4d0(this_01);
      piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
      if (bVar2 == 0) {
        iVar1 = *(int *)(this + 0x24);
        (*(int *)(gen_frame + 0x24)) = iVar1;
        F_00bde3b0(this);
        bVar5 = *(char *)(iVar1 + 0x10) != '\0';
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 0)) = bVar5;
        (*(undefined4 *)(gen_frame + 0x2c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x2c)), 1, 3),bVar5);
        F_005d8960((*(uint *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x10)),*(float *)(this + 0x88),(*(undefined4 *)(gen_frame + 0x2c)));
        ((code *)*(gen_code32 *)(*this_00 + 0xe8))(this_00,((undefined1 *)(gen_frame + 0x10)));
        if (*(int *)((*(int *)(gen_frame + 0x24)) + 0xc) == 1) {
          F_005d89f0((*(uint *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x0)),*(float *)(this + 0x88),(*(undefined4 *)(gen_frame + 0x2c)));
        }
        else {
          uVar3 = *(int *)((*(int *)(gen_frame + 0x24)) + 0xc) - 2;
          if (uVar3 != 0) {
            return uVar3;
          }
          fVar6 = F_005e11b0((*(uint *)(gen_frame + 0x28)),*(float *)(this + 0x88),(*(undefined4 *)(gen_frame + 0x2c)));
          F_005fe650(((undefined1 *)(gen_frame + 0x0)),(float)fVar6);
        }
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*this_00 + 0xf0))(this_00,((undefined1 *)(gen_frame + 0x0)))));
      }
    }
  }
  return (uint)piVar4;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf0 */
uint F_00bde680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bde6e0 */
float10 F_00bde6e0(float gen_a0)
{
  GEN_ENTER(0xbde6e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf18 */
uint F_00bde700(unsigned int gen_a0)
{
  GEN_ENTER(0xbde700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x9c) != 0) {
    uVar2 = F_00406b30(*(int *)(this + 0x9c));
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)(this + 0x9c) = 0;
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf25 */
uint F_00bde730(unsigned int gen_a0)
{
  GEN_ENTER(0xbde730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,2);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf35 */
unsigned int F_00bde740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbde740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x94) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x7c))))(*(int * PTR32 *)(this + 0x94));
    if ((char)uVar1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x58))))(*(int * PTR32 *)(this + 0x94),param_2,5);
    }
  }
  return 0;
}

/* ref: FUN_00bde780 */
unsigned int F_00bde780(unsigned int gen_a0)
{
  GEN_ENTER(0xbde780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x94);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x94) + 0x50))))(*(int * PTR32 *)((int)this + 0x94),100);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x94) + 0x78))))(*(int * PTR32 *)((int)this + 0x94),500);
    *(undefined4 *)((int)this + 0x94) = 0;
  }
  return 0;
}

/* ref: FUN_00bde810 */
uint F_00bde810(unsigned int gen_a0)
{
  GEN_ENTER(0xbde810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined2 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b4a4));
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00bde860 */
uint F_00bde860(unsigned int gen_a0)
{
  GEN_ENTER(0xbde860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x94);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b4a4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x94) + 0x50))))(*(int * PTR32 *)((int)this + 0x94),100);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x94) + 0x78))))(*(int * PTR32 *)((int)this + 0x94),500);
    *(undefined4 *)((int)this + 0x94) = 0;
  }
  if (*(int *)((int)this + 0x9c) != 0) {
    F_00406b30(*(int *)((int)this + 0x9c));
  }
  *(undefined4 *)((int)this + 0x9c) = 0;
  uVar2 = F_00bd2e60(this);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf8 */
uint F_00bde8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbde8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0x94);
  this[0x98] = (undefined1)0x0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x50))))(*(int * PTR32 *)(this + 0x94),100);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x78))))(*(int * PTR32 *)(this + 0x94),500);
    *(undefined4 *)(this + 0x94) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x9c) != 0) {
    uVar3 = F_00406b30(*(int *)(this + 0x9c));
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)(this + 0x9c) = 0;
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf19 */
uint F_00bde940(unsigned int gen_a0)
{
  GEN_ENTER(0xbde940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  char * pcVar6;
  char * pcVar7;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(this + 0x2c) == 0x24) {
    bVar2 = F_00b5ca70(REFG(void * PTR32, 0x14c4e90));
    return CONCAT31(extraout_var_00,bVar2 == 0);
  }
  iVar3 = *(int *)(this + 0x2c) + -0x26;
  if (iVar3 != 0) {
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  if (*(int *)(this + 0x9c) == 0) {
    uVar4 = F_00b5cad0(REFG(void * PTR32, 0x14c4e90),*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x24))) + *(int *)(this + 0x24)
                        );
    if (uVar4 == 0) {
      bVar2 = F_00b5ca70(REFG(void * PTR32, 0x14c4e90));
      return CONCAT31(extraout_var,bVar2 == 0);
    }
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar5 != (int *)0x0) {
      uVar9 = 0;
      uVar8 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5)));
      pcVar6 = (char *)F_00460270(this_00,uVar4,uVar8,uVar9);
      if (pcVar6 == (char *)0x0) {
        return 0;
      }
      pcVar7 = pcVar6;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = F_00406bb0(pcVar7 + (1 - (int)(pcVar6 + 1)),0,0);
      *(uint *)(this + 0x9c) = uVar4;
      if (uVar4 != 0) {
        F_00c49908(uVar4,pcVar7 + (1 - (int)(pcVar6 + 1)),pcVar6);
      }
    }
  }
  bVar2 = F_00b5ca70(REFG(void * PTR32, 0x14c4e90));
  if ((bVar2 == 0) && (*(int *)(this + 0x9c) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf7 */
uint F_00bdea40(unsigned int gen_a0)
{
  GEN_ENTER(0xbdea40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  undefined4 extraout_EAX = 0;
  
  if (*(int *)(this + 0x94) == 0) {
LAB_00bdea75: ;
    if ((this[0x90] != (undefined1)0x0) && (this[0x99] == (undefined1)0x0)) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,7);
      return uVar1;
    }
    return CONCAT31((int3)((uint)in_EAX >> 8),this[0x88] == (undefined1)0x0);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x7c))))(*(int * PTR32 *)(this + 0x94));
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x14))))(*(int * PTR32 *)(this + 0x94));
    if ((char)uVar1 == '\0') {
      F_00bde780(this);
      in_EAX = extraout_EAX;
      goto LAB_00bdea75;
    }
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00bdeab0 */
uint F_00bdeab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdeab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  undefined * puVar6;
  int iVar7;
  uint * this_01;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar3 = F_0049c160(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
  if (uVar3 != 0x100) {
    uVar4 = F_00b5cad0(REFG(void * PTR32, 0x14c4e90),param_1);
    uVar3 = 0;
    if (uVar4 != 0) {
      ((float *)(gen_frame + 0x14))[1] = 0.0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
      if (piVar5 == (int *)0x0) {
        F_005a2710(((float *)(gen_frame + 0x14)) + 1,6);
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = &REFG(undefined, 0x110b3e2);
      }
      else {
        uVar9 = 0;
        uVar8 = 0;
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5)));
        puVar6 = (undefined *)F_00460270(this_00,uVar4,uVar8,uVar9);
        F_005a2710(((float *)(gen_frame + 0x14)) + 1,6);
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = puVar6;
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      ((float *)(gen_frame + 0x14))[0] = 0.0;
      (*(float *)(gen_frame + 0x8)) = 0.0;
      (*(float *)(gen_frame + 0xc)) = 0.0;
      (*(float *)(gen_frame + 0x10)) = 0.0;
      if (REFG(int, 0x1370c0c) == 0) {
        uVar3 = F_00bd3f80(this);
        F_00be7fc0(uVar3 + 0x3c,(uint)((float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0xc)),(uint)&(*(float *)(gen_frame + 0x10)));
      }
      else {
        uVar3 = F_00bd3f80(this);
        F_00be7d90(uVar3 + 0x3c,((float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x8)),(uint)&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x10)));
      }
      if ((!GEN_ISNAN(((float *)(gen_frame + 0x14))[0]) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          !(((float *)(gen_frame + 0x14))[0] <= *(float *)&REFG(undefined, 0x1088114))) {
        dVar1 = (double)((float *)(gen_frame + 0x14))[0] * *(double *)&REFG(undefined, 0x1088118);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
        dVar2 = (double)(*(float *)(gen_frame + 0x8)) * *(double *)&REFG(undefined, 0x1088118);
        (*(int *)(gen_frame + 0x2c)) = (int)dVar1;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
        (*(int *)(gen_frame + 0x34)) = (int)dVar2;
        iVar7 = (int)(*(float *)(gen_frame + 0x10));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
        (*(int *)(gen_frame + 0x3c)) = iVar7;
        iVar7 = (int)(*(float *)(gen_frame + 0xc));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),3);
        (*(int *)(gen_frame + 0x44)) = iVar7;
      }
      uVar3 = F_00bd3f80(this);
      F_00be8250((undefined *)(uVar3 + 0x3c),1,((float *)(gen_frame + 0x14)) + 1,6);
      this_01 = &(*(uint *)(gen_frame + 0x48));
      iVar7 = 5;
      do {
        this_01 = this_01 + -2;
        uVar3 = F_005a2670(this_01);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_00bdec70 */
uint F_00bdec70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdec70u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  uint * in_edx = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_00bdec90 */
uint F_00bdec90(unsigned int gen_a0)
{
  GEN_ENTER(0xbdec90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  ushort uVar1;
  undefined * puVar2;
  int * piVar3;
  int * PTR32 * ppiVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  uint * puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar3 = (int *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90));
  (*(int * PTR32 *)(gen_frame + 0x8c)) = piVar3;
  if (*(int *)((int)this + 0x2c) != 0x26) goto LAB_00bdef1a;
  iVar9 = *(int *)((int)this + 0x24);
  (*(int *)(gen_frame + 0x10)) = iVar9;
  piVar3 = *(int * PTR32 *)(iVar9 + 0x10);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x3;
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  if (piVar3 < (int *)0x3) {
    ppiVar4 = &(*(int * PTR32 *)(gen_frame + 0x1c));
    if (piVar3 == (int *)0x0) {
      ppiVar4 = &(*(int * PTR32 *)(gen_frame + 0xc));
    }
  }
  else {
    ppiVar4 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  (*(int * PTR32 *)(gen_frame + 0x1c)) = *ppiVar4;
  pvVar7 = *(undefined * PTR32 *)((int)this + 0x78);
  (*(int * PTR32 *)(gen_frame + 0x14)) = REFG(int * PTR32, 0x14c4e84);
  if (pvVar7 == (undefined *)0x0) {
    iVar9 = *(int *)((int)this + 0x6c);
    if (iVar9 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar9 = *(int *)((int)this + 0x6c);
      if (iVar9 != 0) goto LAB_00bded2e;
    }
    else {
LAB_00bded2e: ;
      uVar13 = *(undefined4 *)(iVar9 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar13;
      F_00b595f0(uVar13);
    }
    pvVar7 = *(undefined * PTR32 *)((int)this + 0x78);
    piVar3 = (int *)0x0;
    if (pvVar7 != (undefined *)0x0) goto LAB_00bded4b;
  }
  else {
LAB_00bded4b: ;
    piVar5 = (int *)F_00bbaf90(pvVar7);
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar5;
    piVar3 = (int *)0x0;
    if ((piVar5 != (int *)0x0) && (piVar3 = (*(int * PTR32 *)(gen_frame + 0x1c)), (*(int * PTR32 *)(gen_frame + 0x1c)) != (int *)0x3)) {
      if (0 < *(int *)((int)this + 0x8c)) {
        puVar2 = (&REFG(undefined * PTR32, 0x110b40c))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x1c)))];
        *(undefined4 *)((int)this + 0xa4) = 0xffffffff;
        (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0xffffffff;
        (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x3c)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x30)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x60)) = 0;
        (*(undefined4 *)(gen_frame + 0x64)) = 0;
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = puVar2;
        *(undefined * PTR32 *)((int)this + 0xa0) = puVar2;
        uVar1 = *(ushort *)(piVar5 + 0x22);
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(undefined4 *)(gen_frame + 0x40)) = 0x1000000;
        uVar6 = F_00b5be60((*(int * PTR32 *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0x10)),(uint)uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,0,&(*(undefined4 *)(gen_frame + 0x20)));
        F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
        return uVar6;
      }
      if (*(char *)((*(int *)(gen_frame + 0x10)) + 0x16) == '\0') {
        *(undefined1 *)((int)this + 0x90) = 1;
      }
      uVar6 = F_00b5cad0(REFG(void * PTR32, 0x14c4e90),*(int *)((*(int *)(gen_frame + 0x10)) + 0x24) + (*(int *)(gen_frame + 0x10)));
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      if ((uVar6 != 0) && (piVar3 != (int *)0x0)) {
        uVar12 = 0;
        uVar11 = 0;
        uVar13 = REFG(undefined4, 0x108cc50);
        pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
        uVar6 = F_00460270(pvVar7,uVar6,uVar11,uVar12);
        F_0042cc20(&(*(undefined4 *)(gen_frame + 0x20)),uVar6,uVar13);
        iVar9 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) * 0xc;
        (*(int * PTR32 *)(gen_frame + 0x1c)) = *(int * PTR32 *)(&REFG(undefined, 0x110b3ac) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) * 0xc);
        uVar6 = F_0042a970(&(*(undefined4 *)(gen_frame + 0x20)));
        if (uVar6 < 0x40) {
          piVar3 = (*(int * PTR32 *)(gen_frame + 0x1c));
          if (0xf < uVar6) {
            piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x110b3b0) + iVar9);
          }
        }
        else {
          piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x110b3b4) + iVar9);
        }
        puVar8 = (uint *)F_00ab2a20(piVar3);
        if (puVar8 != (uint *)0x0) {
          iVar9 = (*puVar8 & 0xffffff) + (int)puVar8;
          *(int *)((int)this + 0xa0) = iVar9;
          (*(int *)(gen_frame + 0x18)) = iVar9;
          *(int * PTR32 *)((int)this + 0xa4) = piVar3;
          uVar1 = *(ushort *)((*(int * PTR32 *)(gen_frame + 0xc)) + 0x22);
          (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar3;
          F_00b5be60((*(int * PTR32 *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0x10)),(uint)uVar1,&(*(int *)(gen_frame + 0x18)),0,0,0);
        }
        uVar10 = F_0042c880(&(*(undefined4 *)(gen_frame + 0x20)));
        F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
        return (uint)uVar10;
      }
      goto LAB_00bdef1a;
    }
  }
  *(undefined1 *)((int)this + 0x90) = 1;
LAB_00bdef1a: ;
  F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)piVar3;
}

/* ref: FUN_00bdef30 */
float F_00bdef30(unsigned int gen_a0)
{
  GEN_ENTER(0xbdef30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  undefined * this_01;
  uint uVar5;
  float10 in_ST0 = 0;
  float10 extraout_ST0 = 0;
  float10 extraout_ST0_00 = 0;
  float10 extraout_ST0_01 = 0;
  
  this_00 = REFG(void * PTR32, 0x14c4e84);
  if (*(int *)((int)this + 0x2c) != 0x26) goto LAB_00bdeff1;
  uVar5 = *((uint *)GEN_TOP((*(int *)((int)this + 0x24) + 0x10)));
  ((int *)(gen_frame + 0x0))[2] = uVar5;
  ((int *)(gen_frame + 0x0))[1] = 3;
  ((int *)(gen_frame + 0x0))[0] = 0;
  if (uVar5 < 3) {
    piVar3 = ((int *)(gen_frame + 0x0)) + 2;
    if (uVar5 == 0) {
      piVar3 = ((int *)(gen_frame + 0x0));
    }
  }
  else {
    piVar3 = ((int *)(gen_frame + 0x0)) + 1;
  }
  iVar1 = *piVar3;
  this_01 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_01 == (undefined *)0x0) {
    iVar4 = *(int *)((int)this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar4 = *(int *)((int)this + 0x6c);
      if (iVar4 != 0) goto LAB_00bdefa0;
    }
    else {
LAB_00bdefa0: ;
      uVar2 = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar2;
      F_00b595f0(uVar2);

    }
    this_01 = *(undefined * PTR32 *)((int)this + 0x78);
    if (this_01 == (undefined *)0x0) goto LAB_00bdeff1;
  }
  uVar5 = F_00bbaf90(this_01);
  in_ST0 = extraout_ST0_00;
  if (((uVar5 != 0) && (iVar1 != 3)) &&
     ((*(int *)((int)this + 0xa4) != -1 || (*(int *)((int)this + 0xa0) != 0)))) {
    F_00b5ad70(this_00,(uint)*(ushort *)(uVar5 + 0x88),(int *)((int)this + 0xa0),0);
    in_ST0 = extraout_ST0_01;
  }
LAB_00bdeff1: ;
  return (float)in_ST0;
}

/* ref: FUN_00bdf000 */
uint F_00bdf000(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
  if (3 < uVar1) {
    return 4;
  }
  if (uVar1 != 0) {
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bdf060 */
uint F_00bdf060(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf060u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  
  piVar2 = REFG(int * PTR32, 0x1379694);
  uVar3 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
  ((uint *)(gen_frame + 0x0))[2] = uVar3;
  ((uint *)(gen_frame + 0x0))[1] = 4;
  ((uint *)(gen_frame + 0x0))[0] = 0;
  if (uVar3 < 4) {
    puVar4 = ((uint *)(gen_frame + 0x0)) + 2;
    if (uVar3 == 0) {
      puVar4 = ((uint *)(gen_frame + 0x0));
    }
  }
  else {
    puVar4 = ((uint *)(gen_frame + 0x0)) + 1;
  }
  uVar3 = *puVar4;
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
    uVar5 = uVar5 & 0xff;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x1c) + uVar3 * 0xc + (*(int *)&gen_args[0]))));
  ((uint *)(gen_frame + 0x0))[2] = uVar5;
  ((uint *)(gen_frame + 0x0))[0] = 0;
  if (uVar5 == 0) {
    puVar4 = ((uint *)(gen_frame + 0x0));
  }
  else {
    puVar4 = (uint *)&(*(int *)&gen_args[0]);
  }
  if (iVar1 == 1) {
    return 0;
  }
  return *puVar4;
}

/* ref: FUN_00bdf120 */
uint F_00bdf120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdf120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined1 * puVar2;
  int * piVar3;
  undefined1 * puVar4;
  int iVar5;
  uint * puVar6;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  *param_1 = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = param_1;
  puVar4 = param_1;
  if (*(int *)((int)this + 0x2c) == 0x26) {
    iVar5 = *(int *)((int)this + 0x24);
    piVar7 = ((int *)GEN_TOP((*(int *)(iVar5 + 0x24) + iVar5)));
    uVar1 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
    ((uint *)(gen_frame + 0xc))[0] = uVar1;
    ((uint *)(gen_frame + 0xc))[1] = 4;
    ((uint *)(gen_frame + 0xc))[2] = 0;
    if (uVar1 < 4) {
      puVar6 = ((uint *)(gen_frame + 0xc));
      if (uVar1 == 0) {
        puVar6 = ((uint *)(gen_frame + 0xc)) + 2;
      }
    }
    else {
      puVar6 = ((uint *)(gen_frame + 0xc)) + 1;
    }
    (*(uint * PTR32 *)(gen_frame + 0x2c)) = puVar6;
    puVar2 = (undefined1 *)F_00bdf060(iVar5);
    puVar4 = puVar2;
    if ((*piVar7 == 0x54584554) && ((char)piVar7[1] == '_')) {
      piVar3 = piVar7;
      do {
        iVar5 = *piVar3;
        piVar3 = (int *)((int)piVar3 + 1);
      } while ((char)iVar5 != '\0');
      puVar4 = ((undefined1 *)GEN_TOP(((int)piVar3 - (int)((int)piVar7 + 1))));
      if ((((undefined1 *)0x1a < puVar4) && (*(char *)((int)piVar7 + 0xe) == '_')) &&
         ((char)piVar7[5] == '_')) {
        iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0xb));
        puVar4 = (undefined1 *)0x0;
        if (iVar5 != 0) {
          iVar5 = F_00c48637((int)(char)piVar7[3]);
          puVar4 = (undefined1 *)0x0;
          if (iVar5 != 0) {
            iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0xd));
            puVar4 = (undefined1 *)0x0;
            if (iVar5 != 0) {
              iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0xf));
              puVar4 = (undefined1 *)0x0;
              if (iVar5 != 0) {
                iVar5 = F_00c48637((int)(char)piVar7[4]);
                puVar4 = (undefined1 *)0x0;
                if (iVar5 != 0) {
                  iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x11));
                  puVar4 = (undefined1 *)0x0;
                  if (iVar5 != 0) {
                    iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x12));
                    puVar4 = (undefined1 *)0x0;
                    if (iVar5 != 0) {
                      iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x13));
                      puVar4 = (undefined1 *)0x0;
                      if (iVar5 != 0) {
                        iVar5 = F_00c486bb((int)*(char *)((int)piVar7 + 0x15));
                        puVar4 = (undefined1 *)0x0;
                        if (iVar5 != 0) {
                          iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x16));
                          puVar4 = (undefined1 *)0x0;
                          if (iVar5 != 0) {
                            iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x17));
                            puVar4 = (undefined1 *)0x0;
                            if (iVar5 != 0) {
                              iVar5 = F_00c48637((int)(char)piVar7[6]);
                              puVar4 = (undefined1 *)0x0;
                              if (iVar5 != 0) {
                                iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x19));
                                puVar4 = (undefined1 *)0x0;
                                if (iVar5 != 0) {
                                  iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x1a));
                                  puVar4 = (undefined1 *)0x0;
                                  if ((iVar5 != 0) &&
                                     (puVar4 = (undefined1 *)
                                               F_00c4c844(piVar7,"TEXT_%6s%3d_%5d_%1x%2d%3d",
                                                          ((undefined1 *)(gen_frame + 0x30)),7,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x24)),
                                                          &(*(undefined4 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x1c))),
                                     puVar4 == &REFG(undefined, 0x6))) {
                                    puVar4 = (undefined1 *)
                                             F_00c472af((*(undefined1 * PTR32 *)(gen_frame + 0x18)),param_2,
                                                                                                                
                                                  "cut/ffxiv/sound/%s/%s%03d/vo_%s%03d_%1x%02d%03d_%c_%s.scd"
                                                  ,((undefined1 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x20)),
                                                  (*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x1c)),
                                                  (-(uint)(puVar2 != (undefined1 *)0x0) & 0xfffffff9
                                                  ) + 0x6d,(&REFG(undefined * PTR32, 0x1345aa4))[(int)(*(*(uint * PTR32 *)(gen_frame + 0x2c)))]);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)puVar4;
}

/* ref: FUN_00bdf390 */
uint F_00bdf390(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar5;
  if (*(int *)((int)this + 0x2c) == 0x26) {
    uVar2 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
    iVar3 = *(int *)((int)this + 0x24);
    uVar6 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
    uVar5 = uVar6 * 3;
    if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x1c) + uVar6 * 0xc + iVar3))) != 0) {
      F_00bdf120(this,((char *)(gen_frame + 0x8)),0x80);
      pcVar7 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = 0;
      if (pcVar7 != ((char *)(gen_frame + 0x8)) + 1) {
        piVar4 = *(int * PTR32 *)((int)this + 0x94);
        if (piVar4 == (int *)0x0) {
          uVar5 = F_004e9a80(uVar2,((char *)(gen_frame + 0x8)),(float)(float10)1,0,0,0);
          if (uVar5 == 0) goto LAB_00bdf459;
        }
        else {
          ((code *)*(gen_code32 *)(*piVar4 + 0x78))(piVar4,500);
          uVar5 = F_004e9a80(uVar2,((char *)(gen_frame + 0x8)),(float)(float10)1,0,0,0);
        }
        *(uint *)((int)this + 0x94) = uVar5;
      }
    }
  }
LAB_00bdf459: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar5;
}

/* ref: FUN_00bdf470 */
uint F_00bdf470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdf470u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  
  uVar2 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
  iVar5 = (*(int *)&gen_args[1]);
  ((int *)(gen_frame + 0x0))[2] = uVar2;
  ((int *)(gen_frame + 0x0))[1] = 4;
  ((int *)(gen_frame + 0x0))[0] = 0;
  if (uVar2 < 4) {
    piVar3 = ((int *)(gen_frame + 0x0)) + 2;
    if (uVar2 == 0) {
      piVar3 = ((int *)(gen_frame + 0x0));
    }
  }
  else {
    piVar3 = ((int *)(gen_frame + 0x0)) + 1;
  }
  iVar1 = *piVar3;
  uVar2 = F_00bdf060((*(int *)&gen_args[1]));
  uVar4 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
  if (*((int *)GEN_TOP((*(int *)(iVar5 + 0x1c) + uVar4 * 0xc + iVar5))) != 0) {
    iVar1 = *(int *)(iVar5 + 0x1c) + iVar1 * 0xc;
    if (uVar2 == 0) {
      iVar5 = *(int *)(iVar1 + 4 + iVar5);
    }
    else {
      iVar5 = *(int *)(iVar1 + 8 + iVar5);
    }
    iVar5 = (iVar5 * 0x1e) / 1000 + -0xf;
    (*(int *)&gen_args[1]) = iVar5;
    puVar6 = (uint *)&(*(int *)&gen_args[1]);
    if (iVar5 < 0x10) {
      puVar6 = &REFG(undefined4, 0x110b418);
    }
    return *puVar6;
  }
  return 0;
}

/* ref: FUN_00bdf540 */
float F_00bdf540(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf540u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  float fVar3;
  
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x94);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x94) + 0x50))))(*(int * PTR32 *)((int)param_1 + 0x94),100);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x94) + 0x78))))(*(int * PTR32 *)((int)param_1 + 0x94),500);
    *(undefined4 *)((int)param_1 + 0x94) = 0;
  }
  fVar3 = F_00bdef30(param_1);
  *(undefined1 *)((int)param_1 + 0x90) = 1;
  return fVar3;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf1 */
byte F_00bdf5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  int iVar2;
  int * piVar3;
  float10 fVar4;
  byte bVar5;
  uint uVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (this[8] != (undefined1)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  bVar5 = F_00bd1fe0(this);
  if (bVar5 != 0) {
    bVar5 = F_00bd2590((undefined *)this);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return bVar5;
  }
  if ((*(int *)(this + 0x2c) == 0x26) &&
     (iVar2 = *(int *)(this + 0x24), this[0x98] == (undefined1)0x0)) {
    if (*(int *)(this + 0x94) == 0) {
      uVar6 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
      if (*((int *)GEN_TOP((*(int *)(iVar2 + 0x1c) + uVar6 * 0xc + iVar2))) != 0) {
        F_00bdf120(this,((char *)(gen_frame + 0x8)),0x80);
        pcVar7 = ((char *)(gen_frame + 0x8));
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (pcVar7 != ((char *)(gen_frame + 0x8)) + 1) {
          fVar4 = (float10)0;
          uVar6 = F_004e96c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),((char *)(gen_frame + 0x8)),(float)(float10)1,0,
                               (float)fVar4,(float)fVar4,(float)fVar4,(float)(float10)1,0,0,0);
          if (uVar6 != 0) {
            *(uint *)(this + 0x94) = uVar6;
          }
        }
      }
    }
    piVar3 = *(int * PTR32 *)(this + 0x94);
    if (piVar3 != (int *)0x0) {
      uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
      if ((char)uVar6 != '\0') {
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return 0;
      }
      this[0x98] = (undefined1)0x1;
    }
  }
  bVar5 = F_00bd2590((undefined *)this);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return bVar5;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf33 */
uint F_00bdf6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdf6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  int iVar5;
  undefined1 MVar6;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    this[0x88] = (undefined1)0x0;
    *(undefined4 *)(this + 0x8c) = 0xffffffff;
    this[0x90] = (undefined1)0x0;
    this[0x99] = (undefined1)0x0;
  }
  if ((*(int *)(this + 0x2c) == 0x26) && (*(int *)(this + 0x9c) == 0)) {
    this[0x90] = (undefined1)0x1;
    return CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  }
  uVar3 = F_00bd3f80(this);
  if (uVar3 == 0) {
    return 0;
  }
  uVar3 = *(int *)(this + 0x2c) - 0x24;
  switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
  case 0x24: ;
    uVar3 = F_00bdeab0(this,*((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) + *(int *)(this + 0x24));
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x25: ;
    uVar3 = F_00bd3f80(this);
    uVar3 = F_00be8250((undefined *)(uVar3 + 0x3c),5,0,0);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x26: ;
    uVar4 = F_00bd3f80(this);
    iVar5 = *(int *)(this + 0x24);
    iVar1 = *(int *)(iVar5 + 0xc);
    if (iVar1 == 0) {
LAB_00bdf79b: ;
      F_00bdf390(this);
      this[0x88] = (undefined1)0x1;
      uVar3 = F_00bdf470(this,iVar5);
      *(uint *)(this + 0x8c) = uVar3;
      this[0x99] = (undefined1)0x0;
      uVar3 = F_00bd40a0(this);
      MVar6 = (undefined1)(uVar3 == 0);
      uVar3 = CONCAT31((int3)(uVar3 >> 8),MVar6);
      this[0x90] = MVar6;
      if ((!(bool)MVar6) && (*(int *)(this + 0x8c) == 0)) {
        this[0x90] = (undefined1)0x1;
      }
    }
    else {
      if (iVar1 == 9) {
        F_00bdeab0(this,*(int *)(iVar5 + 0x24) + iVar5);
        goto LAB_00bdf79b;
      }
      uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),(byte)this[0x7c] >> 4);
      (*(char *)(gen_frame + 0xb)) = '\0';
      if (((byte)this[0x7c] >> 4 & 1) == 0) {
        uVar3 = F_00bd3ff0(this);
        F_00be90c0((undefined *)(uVar4 + 0x3c),iVar5,*(undefined4 *)(this + 0x9c),uVar3);
        *(gen_code32 *)(uVar4 + 0x8c) = ((code *)REFP(0xbdf540));
        *(undefined * PTR32 *)(uVar4 + 0x90) = this;
        F_00bdf390(this);
        this[0x88] = (undefined1)0x1;
        (*(char *)(gen_frame + 0xb)) = '\x01';
        uVar3 = F_00bdf470(this,iVar5);
        *(uint *)(this + 0x8c) = uVar3;
        this[0x99] = (undefined1)(*(char *)(iVar5 + 0x15) != '\0');
      }
      if (*(char *)(iVar5 + 0x15) != '\0') {
        bVar2 = *(byte *)(uVar4 + 0x70) >> 1;
        uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
        if ((bVar2 & 1) == 0) {
          this[0x99] = (undefined1)0x0;
        }
        else {
          uVar3 = F_00bd30b0(this,1);
        }
      }
      if ((*(char *)(gen_frame + 0xb)) == '\0') break;
    }
    if (this[0x88] != (undefined1)0x0) {
      uVar3 = F_00bdec90(this);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    this[0x90] = (undefined1)0x1;
    break;
  case 0x27: ;
  case 0x28: ;
  case 0x29: ;
  case 0x2a: ;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x2f: ;
  case 0x30: ;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
  case 0x37: ;
  case 0x38: ;
  case 0x39: ;
  case 0x3a: ;
  case 0x3b: ;
  case 0x3c: ;
  case 0x3d: ;
  case 0x3e: ;
  case 0x3f: ;
  case 0x40: ;
  case 0x41: ;
  case 0x42: ;
  case 0x43: ;
  case 0x44: ;
  case 0x45: ;
  case 0x46: ;
  case 0x47: ;
  case 0x48: ;
  case 0x49: ;
  case 0x4a: ;
  case 0x4b: ;
  case 0x4c: ;
  case 0x4d: ;
  case 0x4e: ;
  case 0x4f: ;
  case 0x50: ;
  case 0x51: ;
  case 0x52: ;
  case 0x53: ;
  case 0x54: ;
  case 0x55: ;
  case 0x56: ;
  case 0x57: ;
  case 0x58: ;
  case 0x59: ;
  case 0x5a: ;
  case 0x5b: ;
  case 0x5c: ;
  case 0x5d: ;
  case 0x5e: ;
  case 0x5f: ;
  case 0x60: ;
  case 0x61: ;
  case 0x62: ;
  case 99: ;
  case 100: ;
  case 0x65: ;
  case 0x66: ;
  case 0x68: ;
  case 0x69: ;
  case 0x6a: ;
  case 0x6b: ;
    break;
  case 0x34: ;
    uVar3 = F_00bd3f80(this);
    bVar2 = F_00bdfd90(uVar3 + 0x3c);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      uVar3 = F_00bd30b0(this,1);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    break;
  case 0x35: ;
    uVar3 = F_00bd3f80(this);
    if (*(int *)(uVar3 + 0x6c) == 1) {
      uVar3 = F_00bd3f80(this);
      bVar2 = F_00be8e90((undefined *)(uVar3 + 0x3c),1,0);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return CONCAT31(extraout_var_00,bVar2);
    }
    uVar3 = F_00bd3f80(this);
    bVar2 = F_00be8e90((undefined *)(uVar3 + 0x3c),0,0);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return CONCAT31(extraout_var_01,bVar2);
  case 0x36: ;
    iVar5 = *(int *)(this + 0x24);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    iVar5 = *(int *)(iVar5 + 0xc);
    if ((iVar5 < 0) && (*(int *)(REFG(int, 0x1379cb0) + 0x14) != 0)) {
      iVar5 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1379cb0) + 0x14) + 0x18)));
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(int *)(gen_frame + 0x4)) = iVar5;
    uVar3 = F_00bd3f80(this);
    F_00be8250((undefined *)(uVar3 + 0x3c),4,&(*(undefined4 *)(gen_frame + 0x0)),1);
    uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)));
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x67: ;
    uVar4 = F_00bd3f80(this);
    uVar3 = uVar4;
    if (((byte)this[0x7c] >> 4 & 1) == 0) {
      uVar3 = F_00be84a0((undefined *)(uVar4 + 0x3c),*(undefined4 *)(this + 0x24));
    }
    if ((*(byte *)(uVar4 + 0x70) >> 2 & 1) == 0) {
      uVar3 = F_00bd30b0(this,1);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    this[0x90] = (undefined1)0x1;
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x6c: ;
    if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != 1) {
      uVar3 = F_00bd3f80(this);
      uVar3 = F_00be8250((undefined *)(uVar3 + 0x3c),7,0,0);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    uVar3 = F_00bd3f80(this);
    uVar3 = F_00be8250((undefined *)(uVar3 + 0x3c),8,0,0);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  default: ;
    goto switchD_00bdf763_default;
  }
switchD_00bdf763_default: ;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf34 */
uint F_00bdfae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdfae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 extraout_EAX = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  uVar2 = F_00bd3f80(this);
  this_00 = REFG(void * PTR32, 0x14c4ea0);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = *(int *)(this + 0x2c) - 0x24;
    switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
    case 0x24: ;
      uVar3 = F_00bd3f80(this);
      F_00be8e90((undefined *)(uVar3 + 0x3c),1,1);
      return CONCAT31(extraout_var,1);
    case 0x26: ;
      F_00bd3f80(this);
      uVar3 = *(uint *)(this + 0x24);
      if ((((param_1 == 2) || (param_1 == 3)) || (param_1 == 4)) ||
         (((param_1 == 7 && (*(char *)(uVar3 + 0x15) != '\0')) && (*(char *)(uVar3 + 0x16) == '\0'))
         )) {
        if (*(int *)(uVar3 + 0xc) == 0) {
          F_00bde780(this);
          F_00bdef30(this);
          return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
        }
        uVar3 = F_00bd3f80(this);
        F_00be8e90((undefined *)(uVar3 + 0x3c),0,0);
        return CONCAT31(extraout_var_00,1);
      }
      break;
    case 0x36: ;
      uVar3 = F_00bd3f80(this);
      bVar1 = F_00be8e90((undefined *)(uVar3 + 0x3c),4,0);
      return CONCAT31(extraout_var_01,bVar1);
    case 0x67: ;
      uVar3 = F_00bd3f80(this);
      if (this_00 != (undefined *)0x0) {
        F_00b5f440(this_00,0x1000000e,*(byte *)(uVar3 + 0x69) + 1);
      }
      uVar3 = F_00bd3f80(this);
      F_00be8e90((undefined *)(uVar3 + 0x3c),6,0);
      return CONCAT31(extraout_var_02,1);
    }
  }
  return uVar3 & 0xffffff00;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf30 */
float F_00bdfc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdfc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float10 in_ST0 = 0;
  float10 extraout_ST0 = 0;
  float10 extraout_ST1 = 0;
  float fVar1;
  
  if ((*(int *)(this + 0x2c) == 0x26) && (this[0x90] == (undefined1)0x0)) {
    F_00bd3f80(this);
    in_ST0 = extraout_ST0;
    if (0 < *(int *)(this + 0x8c)) {
      fVar1 = F_00bd2390(this);
      in_ST0 = extraout_ST1;
      if ((float10)*(int *)(this + 0x8c) <= (float10)fVar1) {
        fVar1 = F_00bdef30(this);
        in_ST0 = (float10)fVar1;
        this[0x90] = (undefined1)0x1;
      }
    }
  }
  return (float)in_ST0;
}

/* ref: FUN_00bdfce0 */
uint F_00bdfce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdfce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + 0x50) = param_2;
  *(undefined4 *)((int)this + 0x54) = param_1;
  return param_2;
}

/* ref: FUN_00bdfd00 */
uint F_00bdfd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdfd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x1c) + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf0 */
uint F_00bdfd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdfd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bde860(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdfd90 */
byte F_00bdfd90(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfd90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x10) != 0) && ((*(byte *)(in_ecx + 0x34) >> 1 & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bdfdc0 */
uint F_00bdfdc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfdc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b5d4));
  return (uint)this;
}

/* ref: FUN_00bdfde0 */
uint F_00bdfde0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b5d4));
  if (*(undefined * PTR32 *)((int)this + 0x88) != (undefined *)0x0) {
    F_00ba1f90(*(undefined * PTR32 *)((int)this + 0x88));
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  *(undefined1 *)((int)this + 0x8c) = 0;
  uVar1 = F_00bd2e60(this);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf7 */
uint F_00bdfe20(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x88) != 0) {
    uVar1 = F_00ba1950();
    return uVar1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf24 */
unsigned int F_00bdfe40(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_00ba1f90(*(undefined * PTR32 *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  this[0x8c] = (undefined1)0x0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf25 */
unsigned int F_00bdfe70(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfe70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (this[0x8c] != (undefined1)0x0) {
    uVar2 = F_00ba1930();
    if ((char)uVar2 == '\0') {
      bVar1 = F_00ba1940();
      if (bVar1 == 0) goto LAB_00bdfeb7;
    }
    F_00ba1d20(*(undefined * PTR32 *)(this + 0x88));
    this[0x8c] = (undefined1)0x0;
    *(undefined2 *)(this + 0x8e) = 0x101;
    return 0;
  }
LAB_00bdfeb7: ;
  this[0x8e] = (undefined1)0x1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf33 */
unsigned int F_00bdfec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdfec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)(this + 0x88);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  if (*(int *)((int)this_00 + 0x28) == 3) {
    F_00ba1a40(this_00,2,0xffffffff);
  }
  uVar2 = F_00ba1e40(*(undefined * PTR32 *)(this + 0x88));
  if ((char)uVar2 != '\0') {
    if (this[0x8c] == (undefined1)0x0) {
      F_00ba1c30(*(undefined * PTR32 *)(this + 0x88),0);
      this[0x8c] = (undefined1)0x1;
    }
    uVar2 = F_00ba1930();
    if ((char)uVar2 != '\0') {
      return 0;
    }
    bVar1 = F_00ba1940();
    if (bVar1 != 0) {
      return 0;
    }
  }
  F_00bd30b0(this,0);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf34 */
byte F_00bdff40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdff40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if ((*(int *)(this + 0x88) != 0) && (this[0x8c] != (undefined1)0x0)) {
    uVar2 = F_00ba1930();
    if ((char)uVar2 == '\0') {
      bVar1 = F_00ba1940();
      if (bVar1 == 0) goto LAB_00bdff8f;
    }
    F_00ba1d20(*(undefined * PTR32 *)(this + 0x88));
    this[0x8c] = (undefined1)0x0;
    *(undefined2 *)(this + 0x8e) = 0x101;
    return 1;
  }
LAB_00bdff8f: ;
  this[0x8e] = (undefined1)0x1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf35 */
byte F_00bdffa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdffa0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(byte *)(in_ecx + 0x8d) = (byte)param_3;
  return (byte)param_3;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf30 */
unsigned int F_00bdffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdffb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf19 */
uint F_00bdffc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdffc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint in_EAX = 0;
  char * pcVar2;
  uint uVar3;
  char * _Str;
  
  if (*(int *)(this + 0x88) == 0) {
    iVar1 = *(int *)(this + 0x24);
    in_EAX = 0;
    if (iVar1 != 0) {
      _Str = ((char *)GEN_TOP((*(int *)(iVar1 + 0xc) + iVar1)));
      pcVar2 = F_00c46a10(_Str,"manfst20006");
      if (pcVar2 == (char *)0x0) {
        pcVar2 = F_00c46a10(_Str,"00002");
        in_EAX = 0;
        if (pcVar2 == (char *)0x0) goto LAB_00be0010;
      }
      in_EAX = F_00ba1ef0(2,0xffffffff);
      *(uint *)(this + 0x88) = in_EAX;
    }
  }
LAB_00be0010: ;
  if (*(undefined * PTR32 *)(this + 0x88) == (undefined *)0x0) {
    return in_EAX & 0xffffff00;
  }
  uVar3 = F_00ba1e40(*(undefined * PTR32 *)(this + 0x88));
  if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x28))) == 3)) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf0 */
uint F_00be0050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b5d4));
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_00ba1f90(*(undefined * PTR32 *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  this[0x8c] = (undefined1)0x0;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be00a0 */
float10 F_00be00a0(float gen_a0)
{
  GEN_ENTER(0xbe00a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf6 */
unsigned int F_00be00c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe00c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint in_ecx;
  undefined * this_00;
  
  if (this[0x88] == (undefined1)0x0) {
    return 0;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar2 = *(int *)(this + 0x6c);
      if (iVar2 != 0) goto LAB_00be00ee;
    }
    else {
LAB_00be00ee: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    this_00 = *(undefined * PTR32 *)(this + 0x78);
    if (this_00 == (undefined *)0x0) goto LAB_00be0117;
  }
  in_ecx = F_00bbaf90(this_00);
  if (in_ecx != 0) {
    F_00a9fbd0(in_ecx);
  }
LAB_00be0117: ;
  this[0x88] = (undefined1)0x0;
  return 0;
}

/* ref: FUN_00be0120 */
uint F_00be0120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be0161;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00be0148;
  }
  else {
LAB_00be0148: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00be0161: ;
  uVar3 = F_00bc5190(this_00,param_1,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc))));
  return uVar3;
}

/* ref: FUN_00be0180 */
uint F_00be0180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be01be;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00be01a5;
  }
  else {
LAB_00be01a5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00be01be: ;
  uVar4 = F_00bbaf90(this_00);
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = F_00bd2420(this);
  }
  return uVar3;
}

/* ref: FUN_00be01e0 */
uint F_00be01e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbe01e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  code * pcVar3;
  int * piVar4;
  float * pfVar5;
  uint uVar6;
  float * pfVar7;
  undefined * this;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  this = *(undefined * PTR32 *)(param_1 + 0x6c);
  if (this == (undefined *)0x0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar6 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
      *(uint *)(param_1 + 0x6c) = uVar6;
    }
    this = *(undefined * PTR32 *)(param_1 + 0x6c);
    if (this == (undefined *)0x0) {
      return uVar6;
    }
  }
  piVar4 = (int *)F_00beb6b0(this);
  uVar6 = 0;
  if (piVar4 != (int *)0x0) {
    fVar9 = (float10)param_2;
    iVar8 = *(int *)(param_1 + 0x24);
    pfVar7 = ((float *)GEN_TOP((*(int *)(iVar8 + 0xc) + iVar8)));
    pfVar5 = ((float *)GEN_TOP((iVar8 + *(int *)(iVar8 + 0x14))));
    fVar10 = (float10)(float)((float10)1 - fVar9);
    fVar1 = (float)(fVar9 * (float10)*pfVar5 + fVar10 * (float10)*pfVar7);
    fVar2 = pfVar5[1];
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar2 = (float)((float10)pfVar7[1] * fVar10 + (float10)fVar2 * fVar9);
    (*(float *)(gen_frame + 0x18)) = fVar2;
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    fVar2 = (float)((float10)pfVar7[2] * fVar10 + (float10)pfVar5[2] * fVar9);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x10)) = (float)(fVar10 * (float10)pfVar7[3] + (float10)pfVar5[3] * fVar9);
    (*(float *)(gen_frame + 0x8)) = fVar2;
    ((code *)*(gen_code32 *)(*piVar4 + 0x60))(piVar4,&(*(float *)(gen_frame + 0x0)));
    fVar9 = (float10)(*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)1 - fVar9);
    ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4,(undefined4)gen_fl2bits((float)((float10)1 - fVar9)));
    uVar6 = F_00beb670(this);
    if (uVar6 != 0) {
      iVar8 = 3;
      piVar4 = (int *)(uVar6 + 0x2da0);
      do {
        iVar8 = iVar8 + -1;
        piVar4 = piVar4 + -0x1e8;
        if (piVar4 != (int *)0x0) {
          pcVar3 = *(gen_code32 *)(*piVar4 + 0x60);
          (*(float *)(gen_frame + 0x0)) = fVar1;
          (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x18));
          (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x14));
          (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          (*pcVar3)(piVar4,&(*(float *)(gen_frame + 0x0)));
          uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x10))));
        }
      } while (iVar8 != 0);
    }
  }
  return uVar6;
}

/* ref: FUN_00be0340 */
uint F_00be0340(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b774));
  *(undefined1 *)((int)this + 0x88) = 0;
  *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) & 0xffef;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf24 */
uint F_00be0370(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,3);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf33 */
uint F_00be0390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  
  pvVar5 = *(undefined * PTR32 *)(this + 0x78);
  if (pvVar5 == (undefined *)0x0) {
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar2 = *(int *)(this + 0x6c);
      uVar3 = 0;
      if (iVar2 != 0) goto LAB_00be03b5;
    }
    else {
LAB_00be03b5: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      uVar3 = F_00b595f0(uVar1);
    }
    pvVar5 = *(undefined * PTR32 *)(this + 0x78);
    if (pvVar5 == (undefined *)0x0) {
      return uVar3;
    }
  }
  uVar3 = F_00bbaf90(pvVar5);
  if (uVar3 == 0) {
    return 0;
  }
  iVar2 = *(int *)(this + 0x2c);
  if (iVar2 != 0x22) {
    if (iVar2 == 0x38) {
      uVar3 = F_00be01e0(this,(float)(float10)0);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    if (iVar2 == 0x6b) {
      uVar3 = F_00a9fbc0(uVar3);
      this[0x88] = (undefined1)0x1;
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    goto LAB_00be0469;
  }
  pvVar5 = *(undefined * PTR32 *)(this + 0x78);
  iVar2 = *(int *)(this + 0x24);
  if (pvVar5 == (undefined *)0x0) {
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar4 = *(int *)(this + 0x6c);
      if (iVar4 != 0) goto LAB_00be0444;
    }
    else {
LAB_00be0444: ;
      uVar1 = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    pvVar5 = *(undefined * PTR32 *)(this + 0x78);
    uVar3 = 0;
    if (pvVar5 == (undefined *)0x0) goto LAB_00be0469;
  }
  uVar3 = F_00bc3c60(pvVar5,*(undefined4 *)(iVar2 + 0xc));
LAB_00be0469: ;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf34 */
byte F_00be0480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be04ce;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00be04b5;
  }
  else {
LAB_00be04b5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00be04ce: ;
  uVar3 = F_00bbaf90(this_00);
  if (uVar3 != 0) {
    iVar2 = *(int *)(this + 0x2c);
    if (iVar2 == 0x22) {
      iVar2 = *(int *)(this + 0x24);
      uVar3 = F_00a0b580(this);
      if (uVar3 != 0) {
        F_00bc3c90(uVar3,*(undefined4 *)(iVar2 + 0xc));
      }
    }
    else {
      if (iVar2 == 0x38) {
        F_00be01e0(this,(float)(float10)1);
        *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
        return 1;
      }
      if (iVar2 == 0x6b) {
        F_00a9fbd0(uVar3);
        this[0x88] = (undefined1)0x0;
        *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
        return 1;
      }
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf30 */
uint F_00be0550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe0550u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 in_EAX = 0;
  uint uVar1;
  float10 extraout_ST0;
  float fVar2;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(byte *)(param_1 + 0x1f) >> 4);
  if ((((*(byte *)(param_1 + 0x1f) >> 4 & 1) != 0) && (param_1[0xb] == 0x38)) &&
     ((char)param_3 != '\0')) {
    fVar2 = F_00bd2390(param_1);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xa4))(param_1);
    param_3 = (uint)gen_fl2bits((float)((float10)fVar2 / extraout_ST0));
    if ((float10)1 < ((float10)GEN_TOD(gen_bits2f(param_3)))) {
      param_3 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    }
    uVar1 = F_00be01e0(param_1,GEN_TOF(gen_bits2f(param_3)));
  }
  return uVar1;
}

/* ref: FUN_00be05d0 */
float F_00be05d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe05d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((float *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00be05f0 */
float F_00be05f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe05f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((float *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf0 */
uint F_00be0620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b774));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be0660 */
float10 F_00be0660(float gen_a0)
{
  GEN_ENTER(0xbe0660u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00be0680 */
uint F_00be0680(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined, 0x110b914) + param_1 * 0xc);
}

/* ref: FUN_00be06a0 */
uint F_00be06a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe06a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b954));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::LookAtClip2::vf26 */
unsigned int F_00be06c0(void)
{
  GEN_ENTER(0xbe06c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::LookAtClip2::vf33 */
uint F_00be0d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0') {
    uVar1 = F_00be08c0(this);
    return uVar1;
  }
  uVar1 = F_00be06d0(this);
  return uVar1;
}

/* ref: FUN_00be0da0 */
unsigned int F_00be0da0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbe0da0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x10) = param_2;
  return 0;
}

/* ref: FUN_00be0dc0 */
uint F_00be0dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0dc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Clip::LookAtClip2::vf0 */
uint F_00be0de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be0e10 */
float10 F_00be0e10(float gen_a0)
{
  GEN_ENTER(0xbe0e10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf13 */
byte F_00be0e30(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
  }
  if (*(int *)(iVar1 + 0x20) == 0) {
    return 0;
  }
  uVar2 = F_00bccde0(*(int *)(iVar1 + 0x20),*(uint *)(this + 0x24),0,0,0x1e);
  *(uint *)(this + 0xa4) = uVar2;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf7 */
uint F_00be0e70(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  float10 extraout_ST0;
  float fVar2;
  
  bVar1 = GEN_ISNAN(*(float *)(this + 0xb0)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar1 == (bVar1 || *(float *)(this + 0xb0) == *(float *)&REFG(undefined, 0x1088114))) {
    fVar2 = F_00bd2390(this);
    bVar1 = (float10)*(float *)(this + 0xb0) <= (float10)fVar2;
  }
  else {
    fVar2 = F_00bd2390(this);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    bVar1 = extraout_ST0 <= (float10)fVar2;
  }
  if (bVar1) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00be0ed0 */
byte F_00be0ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0ed0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  char cVar2;
  uint uVar3;
  
  cVar1 = (char)param_1[0xb6e];
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  if (((char)param_1[0xb6e] == '\x01') && ((*(byte *)((int)param_1 + 0x2dce) & 0x80) != 0)) {
    return 0xe;
  }
  if (*(char *)((int)param_1 + 0x2dba) == '\x04') {
    return 0xc;
  }
  if (*(char *)((int)param_1 + 0x2dba) == '\x03') {
    return 0xd;
  }
  if (cVar1 == '\0') {
    return 1;
  }
  cVar2 = (char)uVar3;
  if (cVar1 == '\x01') {
    if (cVar2 == '\0') {
      return 2;
    }
    if (cVar2 == '\x01') {
      return 3;
    }
  }
  else if (cVar1 == '\x02') {
    if (cVar2 == '\0') {
      return 4;
    }
    if (cVar2 == '\x01') {
      return 5;
    }
  }
  else if (cVar1 == '\x04') {
    if (cVar2 == '\0') {
      return 6;
    }
    if (cVar2 == '\x01') {
      return 7;
    }
  }
  else if (cVar1 == '\x03') {
    if (cVar2 == '\0') {
      return 10;
    }
    if (cVar2 == '\x01') {
      return 0xb;
    }
  }
  else if (cVar1 == '\x05') {
    if (cVar2 == '\0') {
      return 8;
    }
    if (cVar2 == '\x01') {
      return 9;
    }
  }
  return 0;
}

/* ref: FUN_00be0fd0 */
uint F_00be0fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110baf4));
  *(undefined4 *)((int)this + 0x90) = REFG(undefined4, 0x1302cf0);
  *(undefined4 *)((int)this + 0x94) = REFG(undefined4, 0x1302cf4);
  *(undefined4 *)((int)this + 0x98) = REFG(undefined4, 0x1302cf8);
  *(undefined4 *)((int)this + 0x9c) = REFG(undefined4, 0x1302cfc);
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  return (uint)this;
}

/* ref: FUN_00be1040 */
uint F_00be1040(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbe1040u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(undefined4, 0x1302cf0);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1302cf4);
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(undefined4, 0x1302cf8);
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(undefined4, 0x1302cfc);
  if ((float10)param_3 < (float10)param_2) {
    param_2 = param_3;
  }
  if (*(float *)&REFG(undefined, 0x1088114) < param_3) {
    fVar1 = (float)((float10)param_2 / (float10)param_3);
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar8 = F_00a1d840(REFG(float, 0x1088068),fVar1,REFG(float, 0x1087ef8));
    (*(float *)(gen_frame + 0x3c)) = (float)fVar8;
    fVar1 = *(float *)(param_1 + 0xa0);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    fVar1 = (float)((float10)fVar1 * (float10)(float)fVar8);
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar8 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x38)) = (float)fVar8;
    (*(float *)(gen_frame + 0x14)) = (float)fVar8;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    fVar8 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x38)) = (float)fVar8;
    (*(float *)(gen_frame + 0x1c)) = (float)fVar8;
    puVar4 = (undefined4 *)F_004f6d80(((undefined1 *)(gen_frame + 0x0)),param_1 + 0x90,(uint)&(*(undefined4 *)(gen_frame + 0x10)));
    (*(undefined4 *)(gen_frame + 0x20)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x24)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x28)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = puVar4[3];
  }
  uVar6 = *(uint *)(param_1 + 0x78);
  uVar7 = uVar6;
  if (uVar6 != 0) goto LAB_00be1184;
  iVar5 = *(int *)(param_1 + 0x6c);
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
    }
    iVar5 = *(int *)(param_1 + 0x6c);
    uVar6 = 0;
    if (iVar5 != 0) goto LAB_00be116f;
  }
  else {
LAB_00be116f: ;
    uVar2 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    uVar6 = F_00b595f0(uVar2);
  }
  uVar7 = *(uint *)(param_1 + 0x78);
LAB_00be1184: ;
  if (((uVar7 != 0) && (*(char *)(uVar7 + 0x12) == '\0')) &&
     (piVar3 = *(int * PTR32 *)(uVar7 + 4), piVar3 != (int *)0x0)) {
    uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,&(*(undefined4 *)(gen_frame + 0x20)));
  }
  return uVar6;
}

/* ref: FUN_00be11b0 */
uint F_00be11b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe11b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  byte bVar2;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  float10 extraout_ST0;
  float fVar10;
  
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x6c);
  if (pvVar4 == (undefined *)0x0) {
    uVar5 = 0;
    if (*(int *)((int)this + 4) != 0) {
      uVar5 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *(uint *)((int)this + 0x6c) = uVar5;
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x6c);
    if (pvVar4 == (undefined *)0x0) {
      return uVar5;
    }
  }
  pvVar4 = (undefined *)F_00beb670(pvVar4);
  if (pvVar4 == (undefined *)0x0) {
    return 0;
  }
  bVar3 = F_00be0ed0(pvVar4);
  uVar5 = F_00ab3840((uint)bVar3);
  if (uVar5 == 0) {
    return 0;
  }
  if (((*(byte *)((int)pvVar4 + 0x8f) & 0x40) != 0) && (bVar3 != 1)) {
    *(byte *)((int)pvVar4 + 0x2dd3) = *(byte *)((int)pvVar4 + 0x2dd3) | 0x10;
  }
  uVar8 = *(uint *)((int)this + 0x24);
  if (uVar8 == 0) goto switchD_00be1235_default;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(uVar8 + 0xc))) {
  case 0: ;
    fVar10 = *(float *)(uVar8 + 0x10);
    (*(float *)(gen_frame + 0x8)) = fVar10;
    if (*(float *)&REFG(undefined, 0x1088114) <= fVar10) {
      if (!((double)fVar10 <= *(double *)&REFG(undefined, 0x1106550))) {
        bVar2 = *(byte *)(uVar5 + 0x1a);
        goto LAB_00be12bb;
      }
      fVar10 = (float)*(byte *)(uVar5 + 0x18);
    }
    else if (*(double *)&REFG(undefined, 0x1106548) <= (double)fVar10) {
      fVar10 = (float)*(byte *)(uVar5 + 0x19);
    }
    else {
      fVar10 = (float)*(byte *)(uVar5 + 0x1b);
    }
    break;
  case 1: ;
    bVar2 = *(byte *)(uVar5 + 0x18);
    goto LAB_00be12bb;
  case 2: ;
    fVar10 = (float)*(byte *)(uVar5 + 0x19);
    break;
  case 3: ;
    fVar10 = (float)*(byte *)(uVar5 + 0x1a);
    break;
  case 4: ;
    bVar2 = *(byte *)(uVar5 + 0x1b);
LAB_00be12bb: ;
    uVar8 = (uint)bVar2;
    fVar10 = (float)uVar8;
    break;
  default: ;
    goto switchD_00be1235_default;
  }
  *(float *)((int)this + 0xac) = fVar10;
switchD_00be1235_default: ;
  if (bVar3 != 1) {
    if (*(int *)((int)this + 0xa4) != 0) {
      uVar5 = F_0054d950(this);
      iVar9 = *(int *)((int)this + 0x6c);
      if (iVar9 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar9 = *(int *)((int)this + 0x6c);
      }
      puVar6 = (undefined4 *)
               F_00b5bff0(REFG(void * PTR32, 0x14c4e84),&(*(float *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0xa4),
                            *(undefined4 *)(uVar5 + 0x10c),*(undefined4 *)(iVar9 + 0x20),1,
                            0xffffffff,0,0,uVar5,0x1e,0);
      *(undefined4 *)((int)this + 0xa8) = *puVar6;
      piVar7 = (int *)F_00b5b260(REFG(void * PTR32, 0x14c4e84),(undefined4 *)((int)this + 0xa8));
      uVar8 = 0;
      if (piVar7 != (int *)0x0) {
        extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar7 + 0xb4))(piVar7);
        *(float *)((int)this + 0xb0) = (float)extraout_ST0;
        uVar8 = F_00bcfc00(piVar7,(float)(float10)1);
      }
    }
    return uVar8;
  }
  F_00a1e160(&(*(float *)(gen_frame + 0x4)),(int)this + 0x90);
  F_00aaa5b0(pvVar4,1);
  uVar5 = F_00bd3ff0(this);
  if (*(int *)(uVar5 + 0x6c) == 2) {
    fVar10 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xac) / (float10)*(double *)&REFG(undefined, 0x1088070))));
    (*(float *)(gen_frame + 0x8)) = fVar10;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xa0) + (float10)(*(float *)(gen_frame + 0x4)))));
    (*(float *)(gen_frame + 0x8)) = fVar1;
    uVar5 = F_00bef4c0(*(undefined4 *)(uVar5 + 0x80),fVar1,fVar10);
  }
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0xac);
  return uVar5;
}

/* ref: FUN_00be13f0 */
uint F_00be13f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe13f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  if ((*(uint *)((int)this + 0xa8) & 0xc0000000) != 0) {
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x6c);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
    if (*(int *)((int)this + 4) != 0) {
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *(uint *)((int)this + 0x6c) = uVar3;
    }
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x6c);
    if (pvVar2 == (undefined *)0x0) {
      return uVar3;
    }
  }
  pvVar2 = (undefined *)F_00beb670(pvVar2);
  uVar3 = 0;
  if (pvVar2 != (undefined *)0x0) {
    if ((*(byte *)((int)pvVar2 + 0x8f) & 0x40) != 0) {
      *(byte *)((int)pvVar2 + 0x2dd3) = *(byte *)((int)pvVar2 + 0x2dd3) & 0xef;
    }
    bVar1 = F_00be0ed0(pvVar2);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 1) {
      uVar3 = F_00aaa5b0(pvVar2,0);
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf25 */
uint F_00be1460(unsigned int gen_a0)
{
  GEN_ENTER(0xbe1460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0x78);
  if (uVar4 != 0) goto LAB_00be149e;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00be1485;
  }
  else {
LAB_00be1485: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  uVar4 = *(uint *)(this + 0x78);
  if (uVar4 == 0) {
    return 0;
  }
LAB_00be149e: ;
  if (*(char *)(uVar4 + 0x12) == '\0') {
    piVar2 = *(int * PTR32 *)(uVar4 + 4);
    uVar4 = 0;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,this + 0x90);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
      uVar4 = F_00be13f0(this);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf30 */
uint F_00be14f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe14f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  float fVar6;
  
  fVar6 = F_00bd2390(param_1);
  iVar3 = *(int *)((int)param_1 + 0x78);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)param_1 + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)((int)param_1 + 4) != 0) {
        *(undefined4 *)((int)param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 4) + 4)));
      }
      iVar3 = *(int *)((int)param_1 + 0x6c);
      if (iVar3 != 0) goto LAB_00be1521;
    }
    else {
LAB_00be1521: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)((int)param_1 + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar3 = *(int *)((int)param_1 + 0x78);
    if (iVar3 != 0) goto LAB_00be153a;
  }
  else {
LAB_00be153a: ;
    if ((*(char *)(iVar3 + 0x12) == '\0') && (*(int *)(iVar3 + 4) != 0)) {
      piVar4 = (int *)F_00bd3ff0(param_1);
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4);
      bVar2 = F_00be0ed0(uVar5);
      uVar5 = CONCAT31(extraout_var,bVar2);
      if (bVar2 == 1) goto LAB_00be157c;
    }
  }
  uVar5 = F_00be1040(param_1,fVar6,*(float *)((int)param_1 + 0xac));
LAB_00be157c: ;
  if ((float10)*(float *)((int)param_1 + 0xb0) <= (float10)param_2) {
    uVar5 = F_00be13f0(param_1);
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf33 */
uint F_00be15a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe15a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  }
  piVar1 = (int *)F_00bd3ff0(this);
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1)));
  *(undefined4 *)(this + 0x90) = *puVar2;
  *(undefined4 *)(this + 0x94) = puVar2[1];
  *(undefined4 *)(this + 0x98) = puVar2[2];
  *(undefined4 *)(this + 0x9c) = puVar2[3];
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc))))) {
  case 0: ;
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) ^ REFG(uint, 0x10920d0);
    break;
  case 1: ;
    uVar3 = (uint)gen_fl2bits((float)(REFG(float, 0x109ca60)));
    break;
  case 2: ;
    uVar3 = (uint)gen_fl2bits((float)(REFG(float, 0x109ca64)));
    break;
  case 3: ;
    uVar3 = (uint)gen_fl2bits((float)(REFG(float, 0x109cb20)));
    break;
  case 4: ;
    uVar3 = (uint)gen_fl2bits((float)(REFG(float, 0x110baec)));
    break;
  default: ;
    goto switchD_00be15ed_default;
  }
  *(uint *)(this + 0xa0) = uVar3;
switchD_00be15ed_default: ;
  uVar3 = F_00be11b0(this);
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf34 */
byte F_00be1660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe1660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  F_00be13f0(this);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf35 */
uint F_00be1680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe1680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  undefined4 in_EAX = 0;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  float fVar4;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if ((((byte)this[0x7c] >> 4 & 1) != 0) &&
     (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this), this_00 = REFG(void * PTR32, 0x14c4e84), (char)uVar1 == '\0')
     ) {
    piVar2 = (int *)F_00bd3ff0(this);
    uVar1 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
      uVar1 = 0;
      if (uVar3 != 0) {
        if ((char)param_2 == '\0') {
          uVar3 = F_00b5b260(this_00,this + 0xa8);
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = F_00bcfc00(uVar3,(float)(float10)1);
            return uVar1;
          }
        }
        else {
          F_00be13f0(this);
          F_00be11b0(this);
          uVar3 = F_00b5b260(this_00,this + 0xa8);
          uVar1 = 0;
          if (uVar3 != 0) {
            F_00bcfc00(uVar3,(float)(float10)1);
            fVar4 = F_00bd2390(this);
            F_00b5bc50(this_00,this + 0xa8,fVar4);
            uVar1 = F_00bcfc00(uVar3,(float)(float10)0);
          }
        }
      }
    }
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf0 */
uint F_00be1760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be17b0 */
byte F_00be17b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe17b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x40) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00be17c0 */
float10 F_00be17c0(float gen_a0)
{
  GEN_ENTER(0xbe17c0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00be17e0 */
uint F_00be17e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe17e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110bc94));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  F_00536010();
  uVar2 = F_00bd2e60(this);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf13 */
byte F_00be1820(unsigned int gen_a0)
{
  GEN_ENTER(0xbe1820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
  }
  if (*(int *)(iVar1 + 0x20) == 0) {
    return 0;
  }
  uVar2 = F_00bccde0(*(int *)(iVar1 + 0x20),*(uint *)(this + 0x24),0,0,0x1d);
  *(uint *)(this + 0x150) = uVar2;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf20 */
unsigned int F_00be1860(void)
{
  GEN_ENTER(0xbe1860u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf26 */
uint F_00be1870(unsigned int gen_a0)
{
  GEN_ENTER(0xbe1870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + 0x78);
  if (uVar5 != 0) goto LAB_00be18ae;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00be1895;
  }
  else {
LAB_00be1895: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  uVar5 = *(uint *)(this + 0x78);
  if (uVar5 == 0) {
    return 0;
  }
LAB_00be18ae: ;
  if (*(char *)(uVar5 + 0x12) == '\0') {
    piVar2 = *(int * PTR32 *)(uVar5 + 4);
    uVar5 = 0;
    if (piVar2 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = F_0053be20(this + 0xc0);
        this[0xd4] = (undefined1)0x0;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00be1aa0 */
uint F_00be1aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe1aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110bc94));
  *(undefined4 *)((int)this + 0x88) = 0;
  F_0053bd80((undefined *)((int)this + 0xc0));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf7 */
byte F_00be1ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe1ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  code * pcVar2;
  
  if ((((byte)this[0x7c] >> 4 & 1) != 0) && (piVar1 = *(int * PTR32 *)(this + 0x88), piVar1 != (int *)0x0))
  {
    if ((*(byte *)((int)piVar1 + 0xe) & 1) == 0) {
      pcVar2 = *(gen_code32 *)(*piVar1 + 0x1c);
    }
    else {
      pcVar2 = *(gen_code32 *)(*piVar1 + 0x20);
    }
    (*pcVar2)(piVar1);
    if (this[0xd4] == (undefined1)0x0) {
      return 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,2);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf25 */
uint F_00be1b20(unsigned int gen_a0)
{
  GEN_ENTER(0xbe1b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(this + 0x78);
  if (uVar6 == 0) {
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar4 = *(int *)(this + 0x6c);
      if (iVar4 != 0) goto LAB_00be1b45;
    }
    else {
LAB_00be1b45: ;
      uVar1 = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    uVar6 = *(uint *)(this + 0x78);
    if (uVar6 == 0) goto LAB_00be1b8a;
  }
  if ((*(char *)(uVar6 + 0x12) == '\0') &&
     (piVar2 = *(int * PTR32 *)(uVar6 + 4), uVar6 = 0, piVar2 != (int *)0x0)) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = F_0053be20(this + 0xc0);
      this[0xd4] = (undefined1)0x0;
    }
  }
LAB_00be1b8a: ;
  puVar3 = *(undefined4 * PTR32 *)(this + 0x88);
  if (puVar3 != (undefined4 *)0x0) {
    uVar6 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)(this + 0x88) = 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf30 */
uint F_00be1bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe1bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  int * piVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    bVar1 = F_00bd2480(this);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      (*(int *)(gen_frame + 0x38)) = *(int *)(this + 0x24);
      piVar2 = (int *)F_00bd3ff0(this);
      uVar3 = 0;
      if (piVar2 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
        (*(uint *)(gen_frame + 0x30)) = uVar3;
        if (uVar3 != 0) {
          (*(float *)(gen_frame + 0x3c)) = *(float *)(this + 0x34);
          fVar4 = F_00bd2390(this);
          uVar6 = *(undefined4 *)(this + 0x150);
          (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x3c)));
          fVar4 = *(float *)(this + 0x34);
          (*(float *)(gen_frame + 0x34)) = fVar4;
          iVar5 = (*(int *)(gen_frame + 0x38));
          uVar3 = F_00bd3ff0(this);
          F_00549000(this + 0xc0,*(undefined4 *)(this + 0x88),this,uVar3,iVar5,fVar4,uVar6);
          if ((*(byte *)((*(uint *)(gen_frame + 0x30)) + 0x8f) & 0x40) == 0) {
            uVar3 = F_005490f0(this + 0xc0,(*(float *)(gen_frame + 0x3c)));
            return uVar3;
          }
          uVar3 = F_005490c0(this + 0xc0,(*(float *)(gen_frame + 0x3c)));
          return uVar3;
        }
        fVar4 = F_00bd2390(this);
        fVar4 = ((float)GEN_TOF((((float10)fVar4 / (float10)*(double *)&REFG(undefined, 0x10d4598)) *
                       (float10)*(float *)((*(int *)(gen_frame + 0x38)) + 0x20))));
        (*(float *)(gen_frame + 0x3c)) = fVar4;
        if ((float10)1 < (float10)fVar4) {
          (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
        }
        (*(uint *)(gen_frame + 0x30)) = *piVar2;
        uVar3 = F_00be2070(*(undefined4 *)(this + 0x88),((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x3c)));
        uVar3 = ((code *)*(gen_code32 *)((*(uint *)(gen_frame + 0x30)) + 0x20))(piVar2,uVar3);
      }
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf33 */
unsigned int F_00be1d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe1d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  uint uVar5;
  int * piVar6;
  undefined1 * puVar7;
  int iVar8;
  bool bVar9;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x88);
  iVar8 = *(int *)(this + 0x24);
  (*(int *)(gen_frame + 0x3c)) = iVar8;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x88) = 0;
  }
  if (*(int *)(iVar8 + 100) < 2) {
    return 0;
  }
  bVar9 = *(int *)(iVar8 + 0x30) != 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x38)) + 0)) = bVar9;
  (*(undefined4 *)(gen_frame + 0x38)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x38)), 1, 3),bVar9);
  pvVar4 = (undefined *)F_00406b90(0x14,0,0);
  if (pvVar4 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = F_00c22e00(pvVar4,iVar8 + 0x58,(*(undefined4 *)(gen_frame + 0x38)));
  }
  *(uint *)(this + 0x88) = uVar5;
  piVar6 = (int *)F_00bd3ff0(this);
  if (piVar6 == (int *)0x0) {
    *(undefined4 *)(this + 0x90) = GEN_FLT_TO(*(undefined4 *)(this + 0x90), REFG(float, 0x1302df0));
    *(undefined4 *)(this + 0x94) = GEN_FLT_TO(*(undefined4 *)(this + 0x94), REFG(float, 0x1302df4));
    *(undefined4 *)(this + 0x98) = GEN_FLT_TO(*(undefined4 *)(this + 0x98), REFG(float, 0x1302df8));
    *(undefined4 *)(this + 0xa0) = REFG(undefined4, 0x1302e00);
    *(undefined4 *)(this + 0xa4) = REFG(undefined4, 0x1302e04);
    *(undefined4 *)(this + 0xa8) = REFG(undefined4, 0x1302e08);
    *(undefined4 *)(this + 0xac) = REFG(undefined4, 0x1302e0c);
    *(undefined4 *)(this + 0xb0) = GEN_FLT_TO(*(undefined4 *)(this + 0xb0), REFG(float, 0x1302e10));
    *(undefined4 *)(this + 0xb4) = GEN_FLT_TO(*(undefined4 *)(this + 0xb4), REFG(float, 0x1302e14));
    *(undefined4 *)(this + 0xb8) = GEN_FLT_TO(*(undefined4 *)(this + 0xb8), REFG(float, 0x1302e18));
  }
  else {
    if (*(char *)((*(int *)(gen_frame + 0x3c)) + 0x19) == '\0') {
      puVar7 = ((undefined1 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6)));
    }
    else {
      F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x3c)) + 0x34);
      puVar7 = ((undefined1 *)(gen_frame + 0x0));
    }
    F_006001e0(this + 0x90,puVar7);
    iVar8 = *piVar6;
    *(undefined4 *)(this + 0xb0) = GEN_FLT_TO(*(undefined4 *)(this + 0xb0), REFG(float, 0x1302c60));
    *(undefined4 *)(this + 0xb4) = GEN_FLT_TO(*(undefined4 *)(this + 0xb4), REFG(float, 0x1302c64));
    pcVar2 = *(gen_code32 *)(iVar8 + 8);
    *(undefined4 *)(this + 0xb8) = GEN_FLT_TO(*(undefined4 *)(this + 0xb8), REFG(float, 0x1302c68));
    (*pcVar2)(piVar6,this + 0x90);
    ((code *)*(gen_code32 *)(*piVar6 + 0x10))(piVar6,this + 0xa0);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x4c))(piVar6);
    if (uVar5 != 0) {
      if ((*(byte *)(uVar5 + 0x8f) & 0x40) != 0) {
        *(byte *)(uVar5 + 0x2dd3) = *(byte *)(uVar5 + 0x2dd3) | 0x10;
      }
      if (*(char *)((*(int *)(gen_frame + 0x3c)) + 0x18) == '\0') {
        F_00a9fa40(uVar5,1);
        *(undefined1 *)(uVar5 + 0x2ea7) = 0;
      }
      else {
        F_00a9fa40(uVar5,0);
        *(undefined1 *)(uVar5 + 0x2ea7) = 1;
      }
    }
  }
  this[0x100] = (undefined1)(*(char *)((*(int *)(gen_frame + 0x3c)) + 0x18) != '\0');
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  pvVar4 = *(undefined * PTR32 *)(this + 0x78);
  if (pvVar4 != (undefined *)0x0) goto LAB_00be1f45;
  iVar8 = *(int *)(this + 0x6c);
  if (iVar8 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar8 = *(int *)(this + 0x6c);
    if (iVar8 != 0) goto LAB_00be1f2c;
  }
  else {
LAB_00be1f2c: ;
    uVar3 = *(undefined4 *)(iVar8 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar3;
    F_00b595f0(uVar3);
  }
  pvVar4 = *(undefined * PTR32 *)(this + 0x78);
  if (pvVar4 == (undefined *)0x0) {
    return 0;
  }
LAB_00be1f45: ;
  F_00bc4070(pvVar4,0xffffffff);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf34 */
byte F_00be1f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe1f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  piVar3 = (int *)F_00bd3ff0(this);
  if (piVar3 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3);
    if (uVar4 != 0) {
      fVar6 = *(float *)(this + 0x34);
      uVar1 = *(undefined4 *)(this + 0x88);
      uVar7 = *(undefined4 *)(this + 0x150);
      uVar5 = *(undefined4 *)(this + 0x24);
      uVar4 = F_00bd3ff0(this);
      F_00549000(this + 0xc0,uVar1,this,uVar4,uVar5,fVar6,uVar7);
      F_0053be20(this + 0xc0);
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3);
      if ((*(byte *)(uVar4 + 0x8f) & 0x40) != 0) {
        *(byte *)(uVar4 + 0x2dd3) = *(byte *)(uVar4 + 0x2dd3) & 0xef;
      }
    }
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0x88);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)(this + 0x88) = 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf35 */
unsigned int F_00be2030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe2030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    fVar1 = *(float *)(this + 0x34);
    fVar2 = F_00bd2390(this);
    F_00542550(this + 0xc0,(float)((float10)fVar2 + (float10)fVar1),param_2);
  }
  return 0;
}

/* ref: FUN_00be2070 */
uint F_00be2070(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbe2070u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = (undefined4 *)F_00b66530(param_1,((undefined1 *)(gen_frame + 0x20)),param_3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar1;
  puVar1 = (undefined4 *)F_00b67040(param_1,((undefined1 *)(gen_frame + 0x10)),param_3);
  puVar2 = (undefined4 *)F_00b66e50(param_1,((undefined1 *)(gen_frame + 0x0)),param_3);
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[4] = *puVar1;
  param_2[5] = puVar1[1];
  param_2[6] = puVar1[2];
  param_2[7] = puVar1[3];
  param_2[8] = *(*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  param_2[9] = (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1];
  param_2[10] = (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2];
  return (uint)param_2;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf0 */
uint F_00be2120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe2120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110bc94));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x88) = 0;
  }
  F_00536010();
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be2170 */
float10 F_00be2170(float gen_a0)
{
  GEN_ENTER(0xbe2170u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00be2190 */
uint F_00be2190(unsigned int gen_a0)
{
  GEN_ENTER(0xbe2190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110be34));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf26 */
unsigned int F_00be21b0(void)
{
  GEN_ENTER(0xbe21b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf53 */
uint F_00be21c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe21c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this,(undefined4)gen_fl2bits((float)(float10)0));
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf33 */
unsigned int F_00be21e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe21e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf34 */
byte F_00be21f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe21f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00be2200 */
uint F_00be2200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe2200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = *(uint *)((int)this + 0x24);
  cVar1 = *(char *)(uVar3 + 0x10);
  iVar5 = 2 - (uint)(*(int *)(uVar3 + 0xc) != 1);
  uVar4 = (uint)(*(char *)(uVar3 + 0x12) != '\0');
  if (cVar1 == '\0') {
    if (*(char *)(uVar3 + 0x11) != '\0') {
      ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,uVar4,0,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,uVar4,param_1,iVar5);
  }
  else {
    if (cVar1 == '\x01') {
      if (*(char *)(uVar3 + 0x11) != '\0') {
        ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,uVar4,0,iVar5);
      }
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,uVar4,param_1,iVar5);
      return uVar3;
    }
    if (cVar1 == '\x02') {
      if (param_1 != 0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2,uVar4,0,(iVar5 != 2) + 1);
      }
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2,uVar4,param_1,iVar5);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf25 */
uint F_00be22e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe22e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,1,0,1);
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf0 */
uint F_00be2390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe2390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be2400 */
float10 F_00be2400(float gen_a0)
{
  GEN_ENTER(0xbe2400u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00be2420 */
uint F_00be2420(unsigned int gen_a0)
{
  GEN_ENTER(0xbe2420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x158) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110bfd4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf26 */
unsigned int F_00be2440(unsigned int gen_a0)
{
  GEN_ENTER(0xbe2440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x88);
  if (this_00 != (undefined *)0x0) {
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar1 = *(int *)(this + 0x6c);
    }
    F_00c23840(this_00);
    if (iVar1 != 0) {
      if (*(int *)(this + 0x2c) == 9) {
        F_00c23280(this_00,*(undefined4 *)(this + 0x24),iVar1,(float)(float10)0);
        return 0;
      }
      F_00c236d0(this_00,*(undefined4 *)(this + 0x24),iVar1,(float)(float10)0);
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf33 */
unsigned int F_00be24a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe24a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x88);
  if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0xc0) != '\0')) {
    F_00c23840(this_00);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf34 */
byte F_00be24c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe24c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf32 */
uint F_00be24d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe24d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this,(undefined4)gen_fl2bits((float)(float10)0));
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf53 */
uint F_00be24f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe24f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this,(undefined4)gen_fl2bits((float)(float10)0));
  return uVar1;
}

/* ref: FUN_00be2510 */
uint F_00be2510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe2510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x88);
  if (this_00 != (undefined *)0x0) {
    if (param_1 == 0) {
      uVar1 = F_00c23840(this_00);
      return uVar1;
    }
    in_EAX = F_00c238f0(this_00,0,param_1);
  }
  return in_EAX;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf35 */
unsigned int F_00be2540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe2540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x88);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 != '\0') {
      return 0;
    }
    if ((char)piVar1[0x30] == '\0') {
      return 0;
    }
  }
  if ((char)param_2 == '\0') {
    if (this[0x158] != (undefined1)0x0) {
      if (piVar1 != (int *)0x0) {
        F_00c23070();
      }
      this[0x158] = (undefined1)0x0;
    }
  }
  else if ((this[0x158] == (undefined1)0x0) && (param_1 == 3)) {
    if (piVar1 != (int *)0x0) {
      F_00c23070();
    }
    this[0x158] = (undefined1)0x1;
    return 0;
  }
  return 0;
}

/* ref: FUN_00be25c0 */
unsigned int F_00be25c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe25c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * this_00;
  
  this_00 = *(undefined4 * PTR32 *)((int)this + 0x88);
  while (this_00 != (undefined4 *)0x0) {
    F_00c23840(this_00);
    puVar1 = (undefined4 *)this_00[7];
    ((code *)*(gen_code32 *)*this_00)(this_00,0);
    this_00 = puVar1;
  }
  *(undefined4 *)((int)this + 0x88) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf1 */
byte F_00be2600(unsigned int gen_a0)
{
  GEN_ENTER(0xbe2600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  if (*(int *)(this + 0x88) == 0) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
  if ((byte)uVar1 != 0) {
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
  }
  return (byte)uVar1;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf7 */
byte F_00be2650(unsigned int gen_a0)
{
  GEN_ENTER(0xbe2650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 1;
  for (piVar1 = *(int * PTR32 *)(this + 0x88); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 == '\0') {
      bVar3 = 0;
    }
  }
  return bVar3;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf52 */
uint F_00be2680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe2680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * this_00;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  undefined * pvVar5;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  float fVar6;
  undefined * local_c;
  
  pvVar5 = *(undefined * PTR32 *)(this + 0x70);
  this_00 = *(int * PTR32 *)(this + 0x88);
  local_c = pvVar5;
  if (pvVar5 == (undefined *)0x0) {
    pvVar5 = *(undefined * PTR32 *)(this + 0x6c);
    if (pvVar5 == (undefined *)0x0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      pvVar5 = *(undefined * PTR32 *)(this + 0x6c);
      if (pvVar5 != (undefined *)0x0) goto LAB_00be26b7;
    }
    else {
LAB_00be26b7: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)((int)pvVar5 + 4);
    }
    local_c = *(undefined * PTR32 *)(this + 0x70);
  }
  if (local_c == (undefined *)0x0) {
    return (uint)pvVar5;
  }
  if (this_00 == (int *)0x0) {
    return (uint)pvVar5;
  }
  fVar6 = F_00bd2390(this);
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
  if ((char)uVar3 != '\0') {
    return uVar3;
  }
  bVar2 = F_00bd1fe0(this);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 != 0) {
    if (!(*(float *)&REFG(undefined, 0x1088114) <= fVar6)) {
      return uVar3;
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
    return uVar3;
  }
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar6) {
    if (this[0xc] != (undefined1)0x0) {
      if ((char)this_00[0x30] == '\0') {
        if (*(int *)(this + 0x2c) == 9) {
          piVar4 = (int *)F_0054d950(this);
          if ((((piVar4 != (int *)0x0) && (-1 < piVar4[0x32])) &&
              (bVar2 = F_00bd3f20(this), bVar2 == 0)) &&
             (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x78))(piVar4), (char)uVar3 != '\0')) {
            uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x7c))(piVar4);
            pvVar5 = (undefined *)F_00475fd0(uVar3);
            if (((pvVar5 != (undefined *)0x0) &&
                (pvVar5 = (undefined *)F_00a5f290(pvVar5), pvVar5 != (undefined *)0x0)) &&
               (bVar2 = F_00aa19d0(pvVar5,0,0), bVar2 == 0)) goto LAB_00be2870;
          }
          uVar1 = *(undefined4 *)(this + 0x24);
          uVar3 = F_0054d900(this);
          F_00c23280(this_00,uVar1,uVar3,fVar6);
        }
        else {
          uVar1 = *(undefined4 *)(this + 0x24);
          uVar3 = F_0054d900(this);
          F_00c236d0(this_00,uVar1,uVar3,fVar6);
        }
        F_00c23800(this_00);
        this[0x158] = (undefined1)0x0;
      }
      uVar3 = F_00bc1e50(local_c,0);
      if ((char)uVar3 != '\0') {
        bVar2 = F_00bd3f20(this);
        uVar3 = CONCAT31(extraout_var_00,bVar2);
        if (bVar2 != 0) {
          if (this[0x158] == (undefined1)0x0) {
            F_00c23070();
            this[0x158] = (undefined1)0x1;
          }
          goto LAB_00be285c;
        }
      }
      if (this[0x158] != (undefined1)0x0) {
        F_00c23070();
        this[0x158] = (undefined1)0x0;
      }
    }
  }
  else if (this[0xc] != (undefined1)0x0) {
    if ((char)this_00[0x30] != '\0') {
      uVar3 = F_00c23840(this_00);
    }
    *(undefined4 *)(this + 10) = 0x1000000;
  }
LAB_00be285c: ;
  if ((char)this_00[0x30] == '\0') {
    return uVar3;
  }
  bVar2 = F_00c23880(this_00);
  if (bVar2 == 0) {
    return CONCAT31(extraout_var_01,bVar2);
  }
LAB_00be2870: ;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
  if ((char)uVar3 != '\0') {
    uVar3 = F_00b61910(this_00);
  }
  return uVar3;
}

/* ref: FUN_00be28a0 */
uint F_00be28a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe28a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110bfd4));
  F_00be25c0(this);
  uVar1 = F_00bd2e60(this);
  return uVar1;
}

/* ref: FUN_00be28c0 */
uint F_00be28c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe28c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  if ((int)this + 0x90 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00c23090((int)this + 0x90);
  }
  iVar1 = *(int *)((int)this + 0x24);
  if (*(int *)((int)this + 0x2c) == 9) {
    F_00c23180(this_00,*(int *)(iVar1 + 0xc) + iVar1);
    uVar2 = F_00bd2420(this);
    if ((uVar2 != 0) && (*(char *)(uVar2 + 0x20) != '\0')) {
      iVar3 = *(int *)((int)this + 0x6c);
      if (iVar3 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar3 = *(int *)((int)this + 0x6c);
      }
      F_00c231e0(this_00,uVar2 + 0x30,iVar3);
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar3 = *(int *)((int)this + 0x6c);
    }
    F_00c23280(this_00,iVar1,iVar3,(float)(float10)0);
  }
  else {
    F_00c23180(this_00,*(int *)(iVar1 + 0x10) + iVar1);
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar3 = *(int *)((int)this + 0x6c);
    }
    F_00c236d0(this_00,iVar1,iVar3,(float)(float10)0);
  }
  *(undefined4 *)((int)this_00 + 0x18) = 0;
  *(undefined4 *)((int)this_00 + 0x1c) = *(undefined4 *)((int)this + 0x88);
  if (*(int *)((int)this + 0x88) != 0) {
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x18))) = this_00;
  }
  *(undefined * PTR32 *)((int)this + 0x88) = this_00;
  return (uint)this_00;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf19 */
byte F_00be29b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe29b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  byte bVar5;
  
  bVar5 = 1;
  if (*(int *)(this + 0x88) == 0) {
    F_00be28c0(this);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x88);
  do {
    if (this_00 == (undefined *)0x0) {
      return bVar5;
    }
    iVar2 = *(int *)(this + 0x24);
    if (*(int *)(this + 0x2c) == 9) {
      bVar1 = F_00c23130(this_00,*(int *)(iVar2 + 0xc) + iVar2);
      if (bVar1 == 0) {
        iVar2 = *(int *)(this + 0x74);
        if (iVar2 == 0) {
          piVar4 = *(int * PTR32 *)(this + 0x70);
          if (piVar4 == (int *)0x0) {
            iVar2 = *(int *)(this + 0x6c);
            if (iVar2 == 0) {
              if (*(int *)(this + 4) != 0) {
                *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
              }
              iVar2 = *(int *)(this + 0x6c);
              if (iVar2 != 0) goto LAB_00be2a16;
            }
            else {
LAB_00be2a16: ;
              *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar2 + 4);
            }
            piVar4 = *(int * PTR32 *)(this + 0x70);
            if (piVar4 != (int *)0x0) goto LAB_00be2a23;
          }
          else {
LAB_00be2a23: ;
            uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 100))(piVar4);
            *(uint *)(this + 0x74) = uVar3;
          }
          iVar2 = *(int *)(this + 0x74);
          if (iVar2 == 0) goto LAB_00be2a59;
        }
        if ((*(uint *)(iVar2 + 0x2c) >> 4 & 1) == 0) goto LAB_00be2a59;
        *(undefined1 *)((int)this_00 + 0xc1) = 1;
      }
    }
    else {
      bVar1 = F_00c23130(this_00,*(int *)(iVar2 + 0x10) + iVar2);
      if (bVar1 != 0) goto LAB_00be2a5b;
LAB_00be2a59: ;
      bVar5 = 0;
    }
LAB_00be2a5b: ;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
  } while( true );
}

/* ref: FUN_00be2a80 */
uint F_00be2a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe2a80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00be2a90 */
uint F_00be2a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe2a90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00be2ac0 */
uint F_00be2ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe2ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x18) = (int)this + -0x18;
  }
  *param_1 = (int)this + -0x18;
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf0 */
uint F_00be2af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe2af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110bfd4));
  F_00be25c0(this);
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be2b40 */
float10 F_00be2b40(float gen_a0)
{
  GEN_ENTER(0xbe2b40u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::HitClip::vf16 */
unsigned int F_00be2b70(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbe2b70u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00bd2fb0(param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::HitClip::vf59 */
byte F_00be2b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe2b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this[0x10] != (undefined1)0x0) {
    return 0;
  }
  if (this[0x89] == (undefined1)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,param_1);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
  return 1;
}

/* ref: FUN_00be2be0 */
uint F_00be2be0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe2be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x6c);
  iVar1 = *(int *)((int)this + 0x24);
  if (pvVar3 == (undefined *)0x0) {
    uVar4 = 0;
    if (*(int *)((int)this + 4) != 0) {
      uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *(uint *)((int)this + 0x6c) = uVar4;
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x6c);
    if (pvVar3 == (undefined *)0x0) {
      return uVar4;
    }
  }
  F_00beb760(pvVar3);
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar3 != (undefined *)0x0) goto LAB_00be2c46;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00be2c2d;
  }
  else {
LAB_00be2c2d: ;
    uVar6 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar6;
    F_00b595f0(uVar6);
  }
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar3 == (undefined *)0x0) {
    return 0;
  }
LAB_00be2c46: ;
  pvVar3 = (undefined *)F_00bbaf90(pvVar3);
  uVar4 = 0;
  if (pvVar3 != (undefined *)0x0) {
    iVar2 = *(int *)(iVar1 + 0x10);
    uVar5 = 0;
    uVar6 = 0;
    if (iVar2 == 0) {
      uVar6 = 0;
    }
    else if (iVar2 == 1) {
      uVar6 = 1;
    }
    else if (iVar2 == 2) {
      uVar6 = 2;
    }
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar1 + 0xc))) {
    case 0: ;
      uVar4 = F_00aa7d30(pvVar3,uVar6,1);
      return uVar4;
    case 1: ;
      uVar4 = F_00aa7d30(pvVar3,uVar6,0);
      return uVar4;
    case 2: ;
      uVar4 = F_00aa7d30(pvVar3,uVar6,2);
      return uVar4;
    case 3: ;
      uVar5 = 3;
    }
    uVar4 = F_00aa7d30(pvVar3,uVar6,uVar5);
  }
  return uVar4;
}

/* ref: FUN_00be2ce0 */
uint F_00be2ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe2ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined2 *)((int)this + 0x88) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c174));
  *(undefined4 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::HitClip::vf4 */
byte F_00be2d10(unsigned int gen_a0)
{
  GEN_ENTER(0xbe2d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x10] == (undefined1)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    if (((char)uVar1 == '\0') || (*(int *)(this + 0x58) != 0)) {
      return 0;
    }
    *(undefined4 *)(this + 10) = 0x1000000;
    F_00b61910(this);
  }
  return 1;
}

/* ref: FUN_00be2d40 */
uint F_00be2d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe2d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int iVar9;
  undefined * this_00;
  undefined4 local_8;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x6c);
  if (this_00 == (undefined *)0x0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0x6c);
  }
  piVar8 = *(int * PTR32 *)((int)this + 0x74);
  pvVar2 = this_00;
  if (piVar8 == (int *)0x0) {
    piVar8 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar8 == (int *)0x0) {
      if (this_00 == (undefined *)0x0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        pvVar2 = *(undefined * PTR32 *)((int)this + 0x6c);
        if (pvVar2 != (undefined *)0x0) goto LAB_00be2d94;
      }
      else {
LAB_00be2d94: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)pvVar2 + 4);
      }
      piVar8 = *(int * PTR32 *)((int)this + 0x70);
      if (piVar8 != (int *)0x0) goto LAB_00be2da1;
    }
    else {
LAB_00be2da1: ;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 100))(piVar8)));
      *(undefined * PTR32 *)((int)this + 0x74) = pvVar2;
    }
    piVar8 = *(int * PTR32 *)((int)this + 0x74);
  }
  if (this_00 == (undefined *)0x0) {
    return (uint)pvVar2;
  }
  uVar3 = F_00beb760(this_00);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar2 != (undefined *)0x0) goto LAB_00be2dff;
  iVar9 = *(int *)((int)this + 0x6c);
  if (iVar9 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar9 = *(int *)((int)this + 0x6c);
    if (iVar9 != 0) goto LAB_00be2de2;
  }
  else {
LAB_00be2de2: ;
    uVar1 = *(undefined4 *)(iVar9 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
LAB_00be2dff: ;
  pvVar2 = (undefined *)F_00bbaf90(pvVar2);
  uVar5 = 0;
  if (pvVar2 != (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x2c))) {
    case 0xc: ;
      F_00be2be0(this);
      uVar5 = 0;
      if (*(int *)((int)this + 0x58) != 0) {
        uVar3 = *(int *)((int)this + 0x58) - 1;
        *(uint *)((int)this + 0x58) = uVar3;
        return uVar3;
      }
      break;
    default: ;
      uVar4 = F_00beb790(this_00);
      local_8 = 0;
      uVar5 = ((code *)*(gen_code32 *)(*piVar8 + 0x94))(piVar8);
      if (((*(byte *)(piVar8 + 0x38) & 1) == 0) || (*(int *)((int)this + 0x2c) != 8)) {
        iVar9 = param_2;
        if (uVar5 != 0) {
          local_8 = *(undefined4 *)(uVar5 + 0x40);
        }
        while ((iVar9 != 0 && (iVar9 = iVar9 + -1, *(int *)((int)this + 0x58) != 0))) {
          uVar5 = 0;
          if (uVar4 != 0) {
            do {
              uVar6 = F_00beb7b0(this_00,uVar5);
              uVar7 = F_00beb800(this_00,uVar5);
              switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x2c))) {
              case 3: ;
                F_00a62f70(uVar3,uVar6,local_8,uVar7);
                break;
              case 4: ;
                F_00a622d0(uVar3,uVar6,local_8);
                break;
              case 5: ;
                F_00a622c0(uVar3,uVar6,local_8);
                break;
              case 8: ;
                F_00a62c20(uVar3,uVar6,local_8);
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar4);
          }
          uVar5 = *(uint *)((int)this + 0x58);
          if (uVar5 != 0) {
            uVar5 = uVar5 - 1;
            *(uint *)((int)this + 0x58) = uVar5;
          }
        }
      }
      else if (param_2 != 0) {
        uVar3 = *(uint *)((int)this + 0x58);
        iVar9 = param_2;
        do {
          iVar9 = iVar9 + -1;
          if (uVar3 != 0) {
            uVar3 = uVar3 - 1;
          }
        } while (iVar9 != 0);
        *(uint *)((int)this + 0x58) = uVar3;
        return uVar3;
      }
      break;
    case 0x17: ;
      if (piVar8 != (int *)0x0) {
        piVar8[0x3d] = piVar8[0x3d] + 1;
        *(undefined1 *)((int)this + 0x88) = 1;
      }
      uVar5 = 0;
      if (*(int *)((int)this + 0x58) != 0) {
        uVar3 = *(int *)((int)this + 0x58) - 1;
        *(uint *)((int)this + 0x58) = uVar3;
        return uVar3;
      }
      break;
    case 0x19: ;
      F_00aa2990(pvVar2);
      uVar5 = 0;
      if (*(int *)((int)this + 0x58) != 0) {
        uVar3 = *(int *)((int)this + 0x58) - 1;
        *(uint *)((int)this + 0x58) = uVar3;
        return uVar3;
      }
      break;
    case 0x1a: ;
      F_00aa8460(pvVar2);
      uVar5 = 0;
      if (*(int *)((int)this + 0x58) != 0) {
        uVar3 = *(int *)((int)this + 0x58) - 1;
        *(uint *)((int)this + 0x58) = uVar3;
        return uVar3;
      }
    }
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::HitClip::vf34 */
byte F_00be3000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe3000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if (this[0x89] != (undefined1)0x0) {
    return 0;
  }
  iVar1 = *(int *)(this + 0x58);
  if (iVar1 != 0) {
    if ((param_1 == 5) && ((*(int *)(this + 0x2c) == 0xc || (*(int *)(this + 0x2c) == 0x17)))) {
      if (iVar1 != 0) {
        *(int *)(this + 0x58) = iVar1 + -1;
      }
      return 1;
    }
    F_00be2d40(this,3,iVar1);
  }
  this[0x89] = (undefined1)0x1;
  return 1;
}

/* ref: FUN_00be3060 */
uint F_00be3060(unsigned int gen_a0)
{
  GEN_ENTER(0xbe3060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  iVar6 = *(int *)((int)this + 0x24);
  *(undefined1 *)((int)this + 0x88) = 0;
  if (this_00 == (undefined *)0x0) {
    iVar4 = *(int *)((int)this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar4 = *(int *)((int)this + 0x6c);
      if (iVar4 != 0) goto LAB_00be3097;
    }
    else {
LAB_00be3097: ;
      uVar2 = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar2;
      F_00b595f0(uVar2);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0x78);
    if (this_00 != (undefined *)0x0) goto LAB_00be30b0;
    (*(float *)(gen_frame + 0x38)) = 0.0;
  }
  else {
LAB_00be30b0: ;
    uVar5 = F_00bbaf90(this_00);
    (*(float *)(gen_frame + 0x38)) = gen_bits2f(uVar5);
  }
  iVar4 = (uint)*(ushort *)(iVar6 + 0xe) * 0x7a0 + 0x16c0 + (int)gen_fl2bits((*(float *)(gen_frame + 0x38)));
  if (iVar4 == 0) {
    return (uint)gen_fl2bits((*(float *)(gen_frame + 0x38)));
  }
  if (*(char *)(iVar4 + 0x65) != '\x03') {
    return (uint)gen_fl2bits((*(float *)(gen_frame + 0x38)));
  }
  uVar1 = *(ushort *)(iVar6 + 0xc);
  uVar5 = F_00ab2ae0((uint)uVar1);
  (*(uint *)(gen_frame + 0x34)) = uVar5;
  iVar6 = *(int *)((int)this + 0x70);
  if (iVar6 != 0) goto LAB_00be3128;
  iVar6 = *(int *)((int)this + 0x6c);
  if (iVar6 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar6 = *(int *)((int)this + 0x6c);
    if (iVar6 != 0) goto LAB_00be311f;
  }
  else {
LAB_00be311f: ;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar6 + 4);
  }
  iVar6 = *(int *)((int)this + 0x70);
LAB_00be3128: ;
  F_00bbac80(((undefined1 *)(gen_frame + 0xc)));
  F_00bbac80(((undefined1 *)(gen_frame + 0x20)));
  F_00bbadd0(((undefined1 *)(gen_frame + 0xc)),iVar4);
  fVar3 = (*(float *)(gen_frame + 0x38));
  F_00bbadf0(((undefined1 *)(gen_frame + 0x20)),(uint)*(ushort *)((int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + 0x88),0);
  if (*(char *)(iVar6 + 0x30) == '\0') {
    if (*(char *)(iVar6 + 0x80) == '\0') {
      fVar8 = *(float *)(iVar6 + 0x58);
    }
    else {
      fVar8 = *(float *)(iVar6 + 0x6c);
    }
    (*(float *)(gen_frame + 0x38)) = fVar8;
  }
  else {
    fVar7 = (float10)*(int *)(iVar6 + 0x34);
    if (*(int *)(iVar6 + 0x34) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0x38)) = (float)fVar7;
  }
  uVar5 = F_00b5c120(REFG(undefined4, 0x14c4e84),(*(uint *)(gen_frame + 0x34)),(uint)uVar1,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x20)),1,0xffffffff,0,(*(float *)(gen_frame + 0x38)));
  *(char *)((int)gen_fl2bits(fVar3) + 0x195) = (char)uVar1;
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::HitClip::vf33 */
uint F_00be31c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe31c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00be2d40(this,param_1,1);
  if (*(int *)(this + 0x58) == 0) {
    this[0x89] = (undefined1)0x1;
  }
  return uVar1;
}

/* ref: FUN_00be31f0 */
byte F_00be31f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe31f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x195) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::System::Scheduler::Clip::HitClip::vf0 */
uint F_00be3200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe3200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c174));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be32b0 */
float10 F_00be32b0(float gen_a0)
{
  GEN_ENTER(0xbe32b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00be32d0 */
uint F_00be32d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe32d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_00bd2d80(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined1 *)((int)this + 0x154) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c314));
  *(undefined4 *)((int)this + 0x98) = uVar1;
  *(undefined4 *)((int)this + 0x150) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf63 */
uint F_00be3330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe3330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x9c);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x148) != 0) {
    uVar2 = F_00b5c650(*(int *)(this + 0x148));
    *(undefined4 *)(this + 0x148) = 0;
  }
  this[0x154] = (undefined1)0x0;
  *(undefined4 *)(this + 0x14c) = 0;
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf40 */
uint F_00be3380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe3380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)(this + 10) = 0x1000000;
  if ((char)param_1 != '\0') {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    return uVar2;
  }
  uVar2 = *(uint *)(this + 0x70);
  if (uVar2 != 0) goto LAB_00be33c7;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00be33be;
  }
  else {
LAB_00be33be: ;
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar3 + 4);
  }
  uVar2 = *(uint *)(this + 0x70);
LAB_00be33c7: ;
  if ((*(char *)(uVar2 + 0x80) == '\0') &&
     ((*(int *)(uVar2 + 0x74) == 0 ||
      (bVar1 = *(uint *)(uVar2 + 0x78) < 2, uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1), !bVar1)))) {
    return uVar2 & 0xffffff00;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf9 */
unsigned int F_00be33f0(void)
{
  GEN_ENTER(0xbe33f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf10 */
uint F_00be3400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe3400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)(this + 0x9c);
  if (this_00 != (undefined *)0x0) {
    if (param_1 == 0x12) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
      return uVar2;
    }
    if (param_1 != 0x1a) {
      bVar1 = F_00bc23a0(this_00,param_1);
      return CONCAT31(extraout_var,bVar1);
    }
    if ((*(int *)(this + 0x8c) == 0) && (this[0x88] == (undefined1)0x0)) {
      bVar1 = F_00bc23a0(this_00,0x1a);
      return CONCAT31(extraout_var_00,bVar1);
    }
  }
  return CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),1);
}

/* ref: FUN_00be3460 */
uint F_00be3460(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbe3460u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  int * this;
  code * pcVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  int iVar8;
  bool bVar9;
  bool bVar10;
  float10 fVar11;
  
  uVar7 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar7;
  bVar9 = GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar10 = bVar9 || param_2 == *(float *)&REFG(undefined, 0x1088114);
  uVar7 = CONCAT22((short)(uVar7 >> 0x10),
                   CONCAT11(bVar10 << 6 | bVar9 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= param_2),
                            (char)uVar7));
  if (((bVar9 == bVar10) && (this = (int *)param_1[0x27], this != (int *)0x0)) &&
     (uVar7 = F_00bc1e50(this,0), (char)uVar7 == '\0')) {
    ((code *)*(gen_code32 *)(*param_1 + 0xcc))(param_1,(undefined4)gen_fl2bits(param_2));
    fVar1 = gen_bits2f(param_1[0x26]);
    if ((char)param_1[0x22] == '\0') {
      uVar7 = ((code *)*(gen_code32 *)(*this + 0x1c))(this,0x16,&REFG(undefined, 0x13056c0));
      if ((char)uVar7 == '\0') {
        F_00bc23a0(this,0x1a);
      }
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
    (*(float *)(gen_frame + 0x10)) = gen_bits2f(param_1[0x24]);
    fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_1[0x24]))) +
                   (float10)(float)((float10)fVar1 * (float10)param_2))));
    (*(float *)(gen_frame + 0x14)) = fVar1;
    dVar3 = (double)fVar1;
    fVar11 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar3),
                          (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),&(*(double *)(gen_frame + 0x8)));
    (*(float *)(gen_frame + 0x14)) = (float)fVar11;
    param_1[0x24] = (int)gen_fl2bits((float)fVar11);
    (*(uint *)(gen_frame + 0x28)) = 0;
    fVar1 = (float)(*(double *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0x14)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(float *)(gen_frame + 0x30)) = 0.0;
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x14)) + 2)) = gen_x87_cw;
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT22(gen_x87_cw,(short)(uint)gen_fl2bits(fVar1)));
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    uVar7 = gen_x87_cw | 0xc00;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = gen_bits2f(uVar7);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x28)) = 1;
    (*(double *)(gen_frame + 0x8)) = gen_bits2d((longlong)TRUNC((float10)fVar1));
    lVar5 = (longlong)gen_d2bits((*(double *)(gen_frame + 0x8)));
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x8)) + 0)) = (int)(longlong)TRUNC((float10)fVar1);
    iVar8 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x8)) + 0));
    uVar4 = (*(uint *)(gen_frame + 0x28));
    while ((*(double *)(gen_frame + 0x8)) = gen_bits2d(lVar5), (*(uint *)(gen_frame + 0x28)) = uVar4, iVar8 != 0) {
      param_1[0x23] = param_1[0x23] + 1;
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) {
        fVar1 = gen_bits2f(param_1[0x24]);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x28)) = uVar4 & 0xffffff00;
        if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) goto LAB_00be3586;
      }
      else {
LAB_00be3586: ;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 1;
        (*(uint *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x28)), 1, 3),1);
      }
      (*(float *)(gen_frame + 0x30)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x10)));
      uVar7 = ((code *)*(gen_code32 *)(*this + 0x1c))(this,0x17,&(*(uint *)(gen_frame + 0x28)));
      if ((char)uVar7 == '\0') {
        bVar6 = F_00bc23a0(this,0x1a);
        uVar7 = CONCAT31(extraout_var,bVar6);
      }
      (*(float *)(gen_frame + 0x10)) = 0.0;
      lVar5 = (longlong)gen_d2bits((*(double *)(gen_frame + 0x8)));
      uVar4 = (*(uint *)(gen_frame + 0x28));
    }
    fVar1 = gen_bits2f(param_1[0x24]);
    bVar9 = GEN_ISNAN(fVar1);
    bVar10 = bVar9 || fVar1 == 0.0;
    uVar7 = CONCAT22((short)(uVar7 >> 0x10),
                     CONCAT11(bVar10 << 6 | bVar9 << 2 | 2U | !(0.0 <= fVar1),(char)uVar7));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = fVar1;
    (*(double *)(gen_frame + 0x8)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x8)) + 0))));
    if (bVar9 == bVar10) {
      pcVar2 = *(gen_code32 *)(*this + 0x1c);
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(float *)(gen_frame + 0x20)) = 0.0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0x10)));
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      uVar7 = (*pcVar2)(this,0x19,&(*(undefined4 *)(gen_frame + 0x18)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar7;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf14 */
unsigned int F_00be3610(void)
{
  GEN_ENTER(0xbe3610u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf26 */
uint F_00be3620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbe3620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  this[0x88] = (undefined1)0x0;
  piVar1 = *(int * PTR32 *)(this + 0x9c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf50 */
unsigned int F_00be3650(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbe3650u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint uVar2;
  
  if (*(undefined * PTR32 *)(param_1 + 0x9c) != (undefined *)0x0) {
    uVar2 = F_00bc1e50(*(undefined * PTR32 *)(param_1 + 0x9c),0);
    if ((char)uVar2 == '\0') {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x98) * (float10)param_2)));
      if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0xc) != '\0')) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x9c) + 0x3c))))
                  (*(int * PTR32 *)(param_1 + 0x9c),(undefined4)gen_fl2bits(fVar1));
        F_00bd3280(param_1,fVar1);
        return 0;
      }
      F_00bd3280(param_1,fVar1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x9c) + 0x3c))))
                (*(int * PTR32 *)(param_1 + 0x9c),(undefined4)gen_fl2bits(fVar1));
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf52 */
unsigned int F_00be36d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbe36d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * this;
  uint uVar1;
  
  this = *(int * PTR32 *)(param_1 + 0x9c);
  if (this != (int *)0x0) {
    uVar1 = F_00bc1e50(this,0);
    if ((char)uVar1 == '\0') {
      ((code *)*(gen_code32 *)(*this + 0xc4))(this,(undefined4)gen_fl2bits(param_2));
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf54 */
byte F_00be3710(unsigned int gen_a0)
{
  GEN_ENTER(0xbe3710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  byte bVar2;
  
  this_00 = *(undefined * PTR32 *)(this + 0x9c);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
  bVar1 = F_00bd3380((undefined *)this);
  bVar2 = F_00bc23a0(this_00,0x12);
  return bVar2 != 0 && bVar1 != 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf60 */
uint F_00be3750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe3750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c),0x1e,&(*(undefined4 *)(gen_frame + 0x8)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf56 */
uint F_00be37b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbe37b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x9c) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x40))))
                      (*(int * PTR32 *)(this + 0x9c),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf57 */
unsigned int F_00be37d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe37d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)(this + 0x9c) != 0) {
    F_00bd3530(this,param_1);
    return 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf59 */
byte F_00be37f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbe37f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x9c) == 0) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return (byte)uVar1;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf34 */
uint F_00be3810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe3810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x9c) == 0) {
    return in_EAX & 0xffffff00;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x48))))(*(int * PTR32 *)(this + 0x9c),param_1,0);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf61 */
byte F_00be3850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe3850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (*(undefined * PTR32 *)(this + 0x9c) != (undefined *)0x0) {
    bVar1 = F_00bc28c0(*(undefined * PTR32 *)(this + 0x9c),param_1,param_2);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf62 */
byte F_00be3880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe3880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if ((undefined *)*param_1 == this) {
    *param_1 = 0;
    return 0;
  }
  if ((*(undefined * PTR32 *)(this + 0x9c) != (undefined *)0x0) &&
     (bVar1 = F_00bc2920(*(undefined * PTR32 *)(this + 0x9c),param_1,param_2), bVar1 != 0)) {
    return 1;
  }
  *param_1 = (int)this;
  return 1;
}

/* ref: FUN_00be38d0 */
uint F_00be38d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe38d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x2c) != 7) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x24);
}

/* ref: FUN_00be38e0 */
unsigned int F_00be38e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe38e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(int *)(in_ecx + 0x2c) == 7) && (*(int *)(in_ecx + 0x24) != 0)) &&
     ((*((byte *)GEN_TOP((*(int *)(in_ecx + 0x24) + 0xc))) & 1) != 0)) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00be3910 */
uint F_00be3910(unsigned int gen_a0)
{
  GEN_ENTER(0xbe3910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x9c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c314));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  if (*(int *)((int)this + 0x148) != 0) {
    F_00b5c650(*(int *)((int)this + 0x148));
    *(undefined4 *)((int)this + 0x148) = 0;
  }
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined1 *)((int)this + 0x154) = 0;
  uVar2 = F_00bd2e60(this);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf1 */
byte F_00be3970(unsigned int gen_a0)
{
  GEN_ENTER(0xbe3970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  if ((((*(int *)(this + 0x148) != 0) &&
       (uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x148) + 0x5c))) >> 1, (uVar2 & 1) != 0)) &&
      ((uVar2 & 1) != 0)) || (this[0x154] != (undefined1)0x0)) goto LAB_00be39a7;
  iVar3 = *(int *)(this + 0x70);
  if (iVar3 == 0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 != 0) goto LAB_00be39eb;
    }
    else {
LAB_00be39eb: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar3 + 4);
    }
    iVar3 = *(int *)(this + 0x70);
  }
  if (*(char *)(iVar3 + 0x10) == '\0') {
    piVar1 = *(int * PTR32 *)(this + 0x9c);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((char)uVar2 != '\0') {
        F_00b618f0(this);
        return 1;
      }
    }
    return 0;
  }
LAB_00be39a7: ;
  this[8] = (undefined1)0x1;
  this[9] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x14) = 0;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf2 */
byte F_00be3a30(unsigned int gen_a0)
{
  GEN_ENTER(0xbe3a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0xe] == (undefined1)0x0) {
    if ((((*(int *)(this + 0x148) == 0) ||
         (uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x148) + 0x5c))) >> 1, (uVar2 & 1) == 0)) ||
        ((uVar2 & 1) == 0)) && (this[0x154] == (undefined1)0x0)) {
      if (this[8] == (undefined1)0x0) {
        return 0;
      }
      piVar1 = *(int * PTR32 *)(this + 0x9c);
      if ((piVar1 != (int *)0x0) &&
         (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), (char)uVar2 == '\0')) {
        this[0x12] = (undefined1)0x0;
        return 0;
      }
    }
    *(undefined4 *)(this + 10) = 0x1000000;
    this[0xe] = (undefined1)0x1;
    this[0x12] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
    }
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf3 */
byte F_00be3ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe3ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0xf] != (undefined1)0x0) {
    return 1;
  }
  if ((((*(int *)(this + 0x148) == 0) ||
       (uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x148) + 0x5c))) >> 1, (uVar2 & 1) == 0)) ||
      ((uVar2 & 1) == 0)) && (this[0x154] == (undefined1)0x0)) {
    if (this[8] == (undefined1)0x0) {
      return 0;
    }
    piVar1 = *(int * PTR32 *)(this + 0x9c);
    if ((piVar1 != (int *)0x0) &&
       (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1), (char)uVar2 == '\0')) {
      this[0x13] = (undefined1)0x0;
      return 0;
    }
  }
  this[0xf] = (undefined1)0x1;
  this[0x13] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf4 */
byte F_00be3b30(unsigned int gen_a0)
{
  GEN_ENTER(0xbe3b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0x10] == (undefined1)0x0) {
    if ((((*(int *)(this + 0x148) == 0) ||
         (uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x148) + 0x5c))) >> 1, (uVar2 & 1) == 0)) ||
        ((uVar2 & 1) == 0)) && (this[0x154] == (undefined1)0x0)) {
      if (this[8] == (undefined1)0x0) {
        return 0;
      }
      piVar1 = *(int * PTR32 *)(this + 0x9c);
      if ((piVar1 != (int *)0x0) &&
         (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), (char)uVar2 == '\0')) {
        this[0x14] = (undefined1)0x0;
        return 0;
      }
      *(undefined4 *)(this + 10) = 0x1000000;
      F_00b61910(this);
    }
    else {
      *(undefined4 *)(this + 10) = 0x1000000;
      *(undefined2 *)(this + 0xe) = 0x101;
      this[0x10] = (undefined1)0x1;
      *(undefined2 *)(this + 0x12) = 0;
      this[0x14] = (undefined1)0x0;
      if (*(int *)(this + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
        return 1;
      }
    }
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf5 */
byte F_00be3be0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe3be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0x11] == (undefined1)0x0) {
    if ((((*(int *)(this + 0x148) == 0) ||
         (uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x148) + 0x5c))) >> 1, (uVar2 & 1) == 0)) ||
        ((uVar2 & 1) == 0)) && (this[0x154] == (undefined1)0x0)) {
      if (this[0x10] == (undefined1)0x0) {
LAB_00be3c13: ;
        this[0x15] = (undefined1)0x0;
        return 0;
      }
      piVar1 = *(int * PTR32 *)(this + 0x9c);
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
        if ((char)uVar2 == '\0') goto LAB_00be3c13;
      }
    }
    this[0x11] = (undefined1)0x1;
    this[0x15] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
    }
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf13 */
byte F_00be3c50(unsigned int gen_a0)
{
  GEN_ENTER(0xbe3c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  if (this[0x154] != (undefined1)0x0) {
    return 1;
  }
  piVar6 = *(int * PTR32 *)(this + 0x74);
  if (piVar6 == (int *)0x0) {
    piVar6 = *(int * PTR32 *)(this + 0x70);
    if (piVar6 == (int *)0x0) {
      iVar5 = *(int *)(this + 0x6c);
      if (iVar5 == 0) {
        if (*(int *)(this + 4) != 0) {
          *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
        }
        iVar5 = *(int *)(this + 0x6c);
        if (iVar5 != 0) goto LAB_00be3c9a;
      }
      else {
LAB_00be3c9a: ;
        *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar5 + 4);
      }
      piVar6 = *(int * PTR32 *)(this + 0x70);
      if (piVar6 != (int *)0x0) goto LAB_00be3ca7;
    }
    else {
LAB_00be3ca7: ;
      uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 100))(piVar6);
      *(uint *)(this + 0x74) = uVar3;
    }
    piVar6 = *(int * PTR32 *)(this + 0x74);
  }
  if (*(int *)(this + 0x9c) != 0) goto LAB_00be3e96;
  if (*(int *)(this + 0x14c) == 0) {
    if (*(int *)(this + 0x148) == 0) {
      if (*(int *)(this + 0x2c) == 0) {
        iVar5 = *((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) + *(int *)(this + 0x24);
        if (iVar5 == 0) goto LAB_00be3e0b;
        uVar3 = F_00b5e280(REFG(void * PTR32, 0x14c4e90),0,iVar5,0,1,0);
        *(uint *)(this + 0x148) = uVar3;
      }
      else {
        if (*(int *)(this + 0x2c) != 7) goto LAB_00be3e0b;
        uVar3 = F_0054d900(this);
        pvVar1 = *(undefined * PTR32 *)(uVar3 + 0x20);
        if (piVar6 == (int *)0x0) goto LAB_00be3e0b;
        uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x94))(piVar6);
        if ((uVar3 != 0) && (*(char *)(uVar3 + 0x22) != '\0')) {
LAB_00be3d51: ;
          uVar3 = F_00bbafd0(pvVar1);
          if (uVar3 != 0) {
            piVar6[0x38] = piVar6[0x38] | 8;
            this[0x154] = (undefined1)0x1;
            return 1;
          }
          piVar6[0x38] = piVar6[0x38] | 0x10;
          this[0x154] = (undefined1)0x1;
          return 1;
        }
        this_00 = (undefined *)F_0054d900(this);
        uVar3 = F_00beb6d0(this_00);
        uVar4 = F_00beb700(this_00);
        uVar3 = F_00bccde0(pvVar1,*(uint *)(this + 0x24),uVar3,uVar4,7);
        if (uVar3 == 0) goto LAB_00be3d51;
        piVar6[0x38] = piVar6[0x38] | 4;
        *(uint *)(this + 0x14c) = uVar3;
      }
    }
    if ((*(int *)(this + 0x14c) == 0) && (pvVar1 = *(undefined * PTR32 *)(this + 0x148), pvVar1 != (undefined *)0x0))
    {
      uVar3 = *(uint *)((int)pvVar1 + 0x5c) >> 1;
      if (((uVar3 & 1) != 0) && ((uVar3 & 1) != 0)) {
LAB_00be3e0b: ;
        this[0x154] = (undefined1)0x1;
        return 1;
      }
      bVar2 = F_00bcd860(pvVar1);
      if (bVar2 != 0) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        if (((uint)piVar6[0xb] >> 4 & 1) == 0) {
          return 0;
        }
        *((uint *)GEN_TOP((*(int *)(this + 0x148) + 0x5c))) = *((uint *)GEN_TOP((*(int *)(this + 0x148) + 0x5c))) | 2;
        goto LAB_00be3e0b;
      }
    }
  }
  if (this + 0xa0 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00c23fc0(this + 0xa0);
  }
  *(uint *)(this + 0x9c) = uVar3;
  *(undefined * PTR32 *)(uVar3 + 4) = this;
  iVar5 = *(int *)(this + 0x70);
  if (iVar5 == 0) {
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar5 = *(int *)(this + 0x6c);
      if (iVar5 != 0) goto LAB_00be3e58;
    }
    else {
LAB_00be3e58: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar5 + 4);
    }
    iVar5 = *(int *)(this + 0x70);
  }
  if (*(char *)(iVar5 + 0x30) != '\0') {
    *((undefined1 *)GEN_TOP((*(int *)(this + 0x9c) + 0x30))) = 1;
  }
  if ((*(int *)(this + 0x14c) == 0) && (*(int *)(this + 0x148) != 0)) {
    uVar3 = F_00bc3270(*(undefined * PTR32 *)(this + 0x9c),*(int *)(this + 0x148));
    *(uint *)(this + 0x14c) = uVar3;
  }
LAB_00be3e96: ;
  bVar2 = F_00bc2450(*(undefined * PTR32 *)(this + 0x9c),*(undefined4 *)(this + 0x14c),0);
  if (bVar2 == 0) {
    return 0;
  }
  bVar2 = F_00bc2500(*(undefined * PTR32 *)(this + 0x9c));
  return bVar2;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf49 */
unsigned int F_00be3ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe3ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (this[0x10] == (undefined1)0x0) {
    if (((*(int *)(this + 0x148) != 0) &&
        (uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0x148) + 0x5c))) >> 1, (uVar1 & 1) != 0)) &&
       ((uVar1 & 1) != 0)) {
      F_00b61970(this);
      return 0;
    }
    if (*(int *)(this + 0x9c) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x38))))(*(int * PTR32 *)(this + 0x9c),param_1);
    }
    if (this[8] == (undefined1)0x0) {
      if ((*(int *)(this + 0x148) != 0) || (*(int *)(this + 0x14c) != 0)) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x10c))(this);
      }
      if (this[9] != (undefined1)0x0) {
        ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      }
    }
    F_00bd2200((undefined *)this,param_1);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf17 */
uint F_00be3f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbe3f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_2 != 0) {
    *(int *)(this + 0x14c) = param_2;
    return 0;
  }
  if (param_1 == 0) {
    this[0x154] = (undefined1)0x1;
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
    return 0;
  }
  uVar1 = F_00b5e280(REFG(void * PTR32, 0x14c4e90),*(undefined4 *)(this + 0x2c),param_1,0,param_3,0);
  *(uint *)(this + 0x148) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf67 */
byte F_00be3fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe3fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x14c) == 0) {
    this_00 = *(undefined * PTR32 *)(this + 0x148);
    if (this_00 == (undefined *)0x0) {
      return 1;
    }
    uVar2 = *(uint *)((int)this_00 + 0x5c) >> 1;
    if (((uVar2 & 1) != 0) && ((uVar2 & 1) != 0)) {
      return 1;
    }
    bVar1 = F_00bcd860(this_00);
    if (bVar1 != 0) {
      return 0;
    }
  }
  if (*(int *)(this + 0x9c) != 0) {
    return 1;
  }
  if (this + 0xa0 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00c23fc0(this + 0xa0);
  }
  *(uint *)(this + 0x9c) = uVar2;
  *(undefined * PTR32 *)(uVar2 + 4) = this;
  iVar3 = *(int *)(this + 0x70);
  if (iVar3 != 0) goto LAB_00be405f;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00be4056;
  }
  else {
LAB_00be4056: ;
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar3 + 4);
  }
  iVar3 = *(int *)(this + 0x70);
LAB_00be405f: ;
  if (*(char *)(iVar3 + 0x30) != '\0') {
    *((undefined1 *)GEN_TOP((*(int *)(this + 0x9c) + 0x30))) = 1;
  }
  F_00c23e90(*(undefined * PTR32 *)(this + 0x9c),*(undefined4 *)(this + 0x148),*(undefined4 *)(this + 0x14c));
  return 1;
}

/* ref: FUN_00be40b0 */
float F_00be40b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe40b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  float10 extraout_ST0;
  
  if (((*(int *)((int)this + 0x2c) == 7) && (iVar1 = *(int *)((int)this + 0x24), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0xc) & 1) != 0)) {
    return ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x14) - (float10)*(float *)(iVar1 + 0x10))));
  }
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xb0))(this);
  return (float)extraout_ST0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf21 */
unsigned int F_00be40f0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbe40f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint param_6 = (uint)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  code * pcVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  
  if (param_1[0x27] == 0) {
    return 0;
  }
  iVar7 = param_1[0xb];
  (*(float *)(gen_frame + 0x18)) = 0.0;
  if (iVar7 == 7) {
    iVar7 = param_1[9];
    if ((iVar7 == 0) || ((*(byte *)(iVar7 + 0xc) & 1) == 0)) goto LAB_00be411c;
    fVar2 = *(float *)(iVar7 + 0x14);
    uVar6 = (uint)*(ushort *)(iVar7 + 4);
    (*(float *)(gen_frame + 0x10)) = *(float *)(iVar7 + 0x10);
    fVar1 = (float)((float10)fVar2 - (float10)(*(float *)(gen_frame + 0x10)));
    if ((float10)*(ushort *)(iVar7 + 2) < (float10)param_2) {
      (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)((float)GEN_TOF(((((float10)param_2 - (float10)*(ushort *)(iVar7 + 2)) *
                                          (float10)fVar1) / (float10)uVar6))) + (float10)(*(float *)(gen_frame + 0x10)))));
    }
    (*(float *)(gen_frame + 0x14)) = fVar2;
    if ((GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0)) &&
       (fVar9 = ((float10)GEN_TOD((*(ushort *)(iVar7 + 2) + uVar6))), (float10)param_3 < fVar9)) {
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)fVar2 -
                       (float10)((float)GEN_TOF((((fVar9 - (float10)param_3) * (float10)fVar1) /
                                       (float10)uVar6))))));
    }
    if ((float10)(*(float *)(gen_frame + 0x14)) < (float10)(*(float *)(gen_frame + 0x10))) {
      (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x10));
    }
    F_00bd1f30(param_1,param_2,param_3);
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3, (unsigned long long)((undefined3)((uint)gen_fl2bits(fVar2) >> 8)));
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),1);
    if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
      (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(iVar7 + 4);
      fVar9 = (float10)(*(uint *)(gen_frame + 0x4));
      fVar10 = (float10)fVar1;
      if ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) || fVar10 == fVar9)) {
        param_4 = ((float)GEN_TOF(((fVar10 * (float10)param_4) / fVar9)));
      }
    }
    if (((char)param_6 == '\0') ||
       ((fVar9 = (float10)param_2, bVar8 = GEN_ISNAN(fVar9) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x10))),
        bVar8 != (bVar8 || fVar9 == (float10)(*(float *)(gen_frame + 0x10))) &&
        ((((GEN_ISNAN(param_3) != (GEN_ISNAN(param_3) || param_3 == 0.0) ||
           (bVar8 = GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x14))),
           bVar8 != (bVar8 || (float10)param_3 == (float10)(*(float *)(gen_frame + 0x14))))) &&
          (bVar8 = GEN_ISNAN(fVar9) || GEN_ISNAN((float10)*(ushort *)(iVar7 + 2)),
          bVar8 != (bVar8 || fVar9 == (float10)*(ushort *)(iVar7 + 2)))) &&
         ((GEN_ISNAN(param_3) != (GEN_ISNAN(param_3) || param_3 == 0.0) ||
          (bVar8 = GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)*(ushort *)(iVar7 + 4)),
          bVar8 != (bVar8 || (float10)param_3 == (float10)*(ushort *)(iVar7 + 4))))))))))
    goto LAB_00be43cb;
  }
  else {
    iVar7 = 0;
LAB_00be411c: ;
    F_00bd1f30(param_1,param_2,param_3);
    iVar3 = param_1[9];
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(char)param_5 != '\0');
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xac))(param_1);
    iVar4 = param_1[9];
    (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(iVar3 + 2);
    (*(float *)(gen_frame + 0x14)) = (float)(extraout_ST0 - (float10)(*(uint *)(gen_frame + 0x4)));
    extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
    (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(iVar4 + 2);
    (*(float *)(gen_frame + 0x10)) = (float)(extraout_ST0_00 - (float10)(*(uint *)(gen_frame + 0x4)));
    if ((char)param_6 == '\0') goto LAB_00be43cb;
    if ((!((float10)param_2 < (float10)(*(float *)(gen_frame + 0x10)))) &&
       ((GEN_ISNAN(param_3) != (GEN_ISNAN(param_3) || param_3 == 0.0) ||
        (bVar8 = GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x14))),
        bVar8 != (bVar8 || (float10)param_3 == (float10)(*(float *)(gen_frame + 0x14))))))) {
      if (iVar7 == 0) {
LAB_00be41fa: ;
        if (GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0)) goto LAB_00be43cb;
LAB_00be4207: ;
        if ((char)param_5 == '\0') {
          (*(float *)(gen_frame + 0x14)) = 0.0;
        }
        goto LAB_00be43cb;
      }
      bVar8 = GEN_ISNAN((float10)*(ushort *)(iVar7 + 2)) || GEN_ISNAN((float10)0);
      if (bVar8 != (bVar8 || (float10)*(ushort *)(iVar7 + 2) == (float10)0)) {
        if (GEN_ISNAN(param_3) != (GEN_ISNAN(param_3) || param_3 == 0.0)) goto LAB_00be4207;
        bVar8 = GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)*(ushort *)(iVar7 + 4));
        if (bVar8 != (bVar8 || (float10)param_3 == (float10)*(ushort *)(iVar7 + 4)))
        goto LAB_00be41fa;
      }
    }
  }
  param_6 = param_6 & 0xffffff00;
LAB_00be43cb: ;
  param_1[0x26] = (int)gen_fl2bits(param_4);
  if ((char)param_1[10] != '\0') {
    ((code *)*(gen_code32 *)(*(int *)param_1[0x27] + 0x24))
              ((int *)param_1[0x27],(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x10))),
               (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))),(undefined4)gen_fl2bits(param_4),(*(undefined4 *)(gen_frame + 0xc)),param_6,
               &(*(float *)(gen_frame + 0x18)),param_8);
    fVar2 = (*(float *)(gen_frame + 0x18));
    pcVar5 = *(gen_code32 *)(*param_1 + 0xb0);
    param_1[0x25] = (int)gen_fl2bits((*(float *)(gen_frame + 0x18)));
    extraout_ST0_01 = (*pcVar5)(param_1);
    if ((float10)fVar2 < extraout_ST0_01) {
      extraout_ST0_02 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xb0))(param_1);
      (*(float *)(gen_frame + 0x18)) = (float)extraout_ST0_02;
    }
    fVar2 = gen_bits2f(param_1[0xd]);
    fVar9 = (float10)(*(float *)(gen_frame + 0x18));
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 + fVar9);
    F_00bd2130(param_1,(float)((float10)fVar2 + fVar9));
    if ((float10)*param_7 < (float10)(*(float *)(gen_frame + 0x18))) {
      *param_7 = (*(float *)(gen_frame + 0x18));
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf66 */
uint F_00be4490(unsigned int gen_a0)
{
  GEN_ENTER(0xbe4490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)(this + 0x9c) == 0) {
    return 1;
  }
  if (*(uint *)(this + 0x150) != 0xffffffff) {
    return *(uint *)(this + 0x150);
  }
  piVar4 = *(int * PTR32 *)(this + 0x70);
  if (piVar4 == (int *)0x0) {
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar2 = *(int *)(this + 0x6c);
      if (iVar2 != 0) goto LAB_00be44d4;
    }
    else {
LAB_00be44d4: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar2 + 4);
    }
    piVar4 = *(int * PTR32 *)(this + 0x70);
    if (piVar4 == (int *)0x0) goto LAB_00be44f2;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x74))(piVar4);
  *(uint *)(this + 0x150) = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
LAB_00be44f2: ;
  bVar1 = F_00bd3f20(this);
  if ((bVar1 == 0) && (*(int *)(this + 0x2c) == 7)) {
    uVar3 = F_00a0a270(*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x18))) + *(int *)(this + 0x24));
    if (uVar3 == 0) {
      piVar4 = (int *)F_0054d920(this);
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x74))(piVar4);
      *(uint *)(this + 0x150) = uVar3;
      return uVar3;
    }
    if (*(char *)(uVar3 + 5) != '\0') {
      *(undefined4 *)(this + 0x150) = 0;
      return 0;
    }
  }
  *(undefined4 *)(this + 0x150) = 1;
  return 1;
}

/* ref: FUN_00be4730 */
byte F_00be4730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe4730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar1 = *(int *)((int)this + 0x24);
  if (param_1 < *(ushort *)(iVar1 + 2)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 5;
  if (((iVar2 == 7) && (iVar1 != 0)) && ((*(byte *)(iVar1 + 0xc) & 1) != 0)) {
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
  }
  else {
    uVar3 = 0;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x1c))))(*(int * PTR32 *)((int)this + 0x9c),0x1d,&(*(undefined4 *)(gen_frame + 0x8)));
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 10) = 0x1010000;
  *(undefined4 *)((int)this + 0x90) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 1;
}

/* ref: FUN_00be47e0 */
uint F_00be47e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe47e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  uint uVar3;
  float10 extraout_ST0;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  if ((*(byte *)((int)this + 0x7c) & 1) == 0) {
    iVar1 = *(int *)((int)this + 0x24);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    (*(int *)(gen_frame + 0xc)) = (int)(longlong)TRUNC(extraout_ST0);
    uVar3 = (*(int *)(gen_frame + 0xc)) + (uint)*(ushort *)(iVar1 + 2);
    if ((uVar3 <= param_1) &&
       (uVar3 = F_00bc1e50(*(undefined * PTR32 *)((int)this + 0x9c),0), (char)uVar3 == '\0')) {
      if ((*(int *)((int)this + 0x2c) == 7) &&
         ((*(int *)((int)this + 0x24) != 0 &&
          ((*((uint *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc))) & 0x400) != 0)))) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0x24);
      }
      piVar2 = *(int * PTR32 *)((int)this + 0x9c);
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 6;
      ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,0x1e,&(*(undefined4 *)(gen_frame + 0x18)));
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf33 */
unsigned int F_00be48b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe48b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  float fVar2;
  
  if (*(int *)(this + 0x9c) != 0) {
    if (((*(int *)(this + 0x2c) == 7) && (iVar1 = *(int *)(this + 0x24), iVar1 != 0)) &&
       ((*(byte *)(iVar1 + 0xc) & 1) != 0)) {
      fVar2 = *(float *)(iVar1 + 0x10);
    }
    else {
      fVar2 = 0.0;
    }
    F_00c23c90(*(int *)(this + 0x9c),5,fVar2,*(float *)(this + 0x98));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf11 */
uint F_00be4910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe4910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 CVar1;
  undefined4 * puVar2;
  int * piVar3;
  int in_ecx;
  double dVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint3 extraout_var = 0;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar8 = *param_2;
  uVar9 = param_2[1];
  fVar12 = gen_bits2f(param_2[2]);
  uVar7 = param_2[3];
  dVar4 = *(double *)(param_2 + 2);
  (*(uint *)(gen_frame + 0x1c)) = uVar9;
  (*(uint *)(gen_frame + 0x18)) = uVar8;
  uVar8 = (*(uint *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x20)) = fVar12;
  (*(uint *)(gen_frame + 0x24)) = uVar7;
  (*(bool *)(gen_frame + 0x7)) = true;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar8;
  case 2: ;
    piVar3 = *(int * PTR32 *)(this + 0x9c);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,2,&(*(uint *)(gen_frame + 0x18)));
    }
    uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
LAB_00be499c: ;
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return CONCAT31((int3)(uVar7 >> 8),1);
  default: ;
    piVar3 = *(int * PTR32 *)(this + 0x9c);
    (*(uint *)(gen_frame + 0x18)) = uVar8;
    if (piVar3 == (int *)0x0) goto LAB_00be499c;
    break;
  case 0xe: ;
    puVar2 = *(undefined4 * PTR32 *)(this + 0x9c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
      *(undefined4 *)(this + 0x9c) = 0;
    }
    uVar8 = 0;
    if (*(int *)(this + 0x148) != 0) {
      uVar8 = F_00b5c650(*(int *)(this + 0x148));
      *(undefined4 *)(this + 0x148) = 0;
    }
    *(undefined4 *)(this + 0x14c) = 0;
    this[0x154] = (undefined1)0x0;
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return CONCAT31((int3)(uVar8 >> 8),1);
  case 0xf: ;
    piVar3 = *(int * PTR32 *)(this + 0x9c);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,0xf,&(*(uint *)(gen_frame + 0x18)));
      ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0x9c))))(*(undefined4 * PTR32 *)(this + 0x9c),0);
      *(undefined4 *)(this + 0x9c) = 0;
    }
    if (*(int *)(this + 0x148) != 0) {
      F_00b5c650(*(int *)(this + 0x148));
      *(undefined4 *)(this + 0x148) = 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
    *(undefined4 *)(this + 0x14c) = 0;
    this[0x154] = (undefined1)0x1;
    uVar8 = F_0054d950(this);
    if (uVar8 != 0) {
      *(uint *)(uVar8 + 0xe0) = *(uint *)(uVar8 + 0xe0) | 0x10;
    }
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return CONCAT31((int3)(uVar8 >> 8),1);
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (byte)uVar8;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 2: ;
  case 10: ;
  case 0xf: ;
    ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this);
    break;
  default: ;
    goto switchD_00be4aae_caseD_3;
  case 6: ;
  case 7: ;
    F_00bc2630(piVar3);
    break;
  case 0xb: ;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = gen_bits2f(uVar7);
    CVar1 = this[0x7c];
    (*(uint *)(gen_frame + 0x8)) = uVar8;
    gen_piece_set(&(*(uint *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)(uVar8 >> 8)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = (byte)CVar1 & (byte)(*(uint *)(gen_frame + 0x18)) & 1;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),(byte)CVar1 & (byte)(*(uint *)(gen_frame + 0x18))) & 0xffffff01;
    (*(uint *)(gen_frame + 0xc)) = uVar9;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 0)) = fVar12;
    (*(double *)(gen_frame + 0x10)) = dVar4;
    uVar8 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,param_1,&(*(uint *)(gen_frame + 0x8)));
    (*(bool *)(gen_frame + 0x7)) = (char)uVar8 != '\0';
    uVar8 = F_00bd38a0(this,param_1,(uint)&(*(uint *)(gen_frame + 0x18)));
    cVar6 = (char)uVar8;
    goto LAB_00be4cc1;
  case 0x10: ;
    ((code *)*(gen_code32 *)(*(int *)this + 200))(this,(undefined4)gen_fl2bits(fVar12));
    break;
  case 0x11: ;
    ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this,*(undefined4 *)(this + 0x40));
    break;
  case 0x13: ;
    if (this[0xe] != (undefined1)0x0) goto LAB_00be499c;
    if (this[0xd] == (undefined1)0x0) {
      uVar8 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,0x14,&REFG(undefined, 0x13056c0));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = *(float *)(this + 0x34);
      uVar9 = (uint)((char)uVar8 != '\0');
      (*(double *)(gen_frame + 0x10)) = (double)*(float *)(this + 0x34);
      uVar8 = F_0054d920(this);
      fVar11 = F_00531220(uVar8);
      fVar12 = (float)((float10)(*(double *)(gen_frame + 0x10)) - fVar11);
      (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = fVar12;
      (*(double *)(gen_frame + 0x10)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar12),(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 0)))));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x20)));
      uVar8 = F_0054d900(this);
      in_ecx = *(int *)(uVar8 + 0x20);
      bVar5 = F_00bc3d90(in_ecx,uVar9,0);
      if (bVar5 == 0) break;
      uVar7 = *(uint *)(in_ecx + 0x48 + uVar9 * 0x30);
      fVar11 = (float10)*(int *)(in_ecx + 0x48 + uVar9 * 0x30);
      if ((int)uVar7 < 0) {
        fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar8 = (*(uint *)(gen_frame + 0x18));
      if ((!GEN_ISNAN((float10)(*(float *)(gen_frame + 0x20))) && !GEN_ISNAN(fVar11)) && !((float10)(*(float *)(gen_frame + 0x20)) <= fVar11))
      goto LAB_00be499c;
    }
    else {
      (*(double *)(gen_frame + 0x10)) = (double)fVar12;
      fVar12 = F_00bd2390(this);
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(double *)(gen_frame + 0x10)) - (float10)fVar12);
      uVar8 = (*(uint *)(gen_frame + 0x18));
    }
    goto switchD_00be4aae_caseD_3;
  case 0x16: ;
    if (this[0xd] != (undefined1)0x0) {
      F_00be3460(this,fVar12);
      break;
    }
    bVar10 = (byte)(*(uint *)(gen_frame + 0x18)) != 0;
    if (bVar10) break;
    bVar5 = F_00be4730(this,uVar9);
    goto joined_r0x00be4bbb;
  case 0x17: ;
  case 0x18: ;
    if (this[0xd] != (undefined1)0x0) {
      F_00be3460(this,fVar12);
      break;
    }
    bVar5 = F_00be4730(this,uVar9);
    goto joined_r0x00be4bbb;
  case 0x19: ;
    if (this[0xd] != (undefined1)0x0) {
      F_00be3460(this,fVar12);
    }
    break;
  case 0x1b: ;
    if (this[0xd] == (undefined1)0x0) break;
switchD_00be4aae_caseD_3: ;
    (*(uint *)(gen_frame + 0x18)) = uVar8;
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c),param_1,&(*(uint *)(gen_frame + 0x18)));
    cVar6 = (char)uVar8;
LAB_00be4cc1: ;
    if (cVar6 == '\0') {
LAB_00be4cc5: ;
      (*(bool *)(gen_frame + 0x7)) = false;
    }
    break;
  case 0x1d: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0xe8))(this,uVar9);
    bVar5 = (byte)uVar8;
joined_r0x00be4bbb: ;
    if (bVar5 == 0) break;
    goto LAB_00be4cc5;
  case 0x1e: ;
    ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,uVar9);
  }
  uVar8 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 4: ;
  case 5: ;
    uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    if ((char)uVar8 != '\0') {
      F_00bd41b0(this);
      uVar8 = (uint)extraout_var << 8;
    }
    break;
  case 0x17: ;
  case 0x18: ;
    if (this[0xc] != (undefined1)0x0) {
      uVar8 = F_00be47e0(this,(*(uint *)(gen_frame + 0x1c)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return CONCAT31((int3)(uVar8 >> 8),(*(bool *)(gen_frame + 0x7)));
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf0 */
uint F_00be4dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe4dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x9c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c314));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  if (*(int *)(this + 0x148) != 0) {
    F_00b5c650(*(int *)(this + 0x148));
    *(undefined4 *)(this + 0x148) = 0;
  }
  *(undefined4 *)(this + 0x14c) = 0;
  this[0x154] = (undefined1)0x0;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be4f10 */
uint F_00be4f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe4f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x48) = param_2;
  return param_2;
}

/* ref: FUN_00be4f60 */
uint F_00be4f60(unsigned int gen_a0)
{
  GEN_ENTER(0xbe4f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_00bd2d80(this);
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c434));
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) & 0xffffffe3 | 1;
  *(undefined4 *)((int)this + 0xa0) = uVar1;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf24 */
uint F_00be4fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe4fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,3);
  return uVar1;
}

/* ref: FUN_00be4ff0 */
uint F_00be4ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe4ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_00be5052;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    if (iVar2 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar2 = *(int *)((int)this + 0x6c);
      uVar3 = 0;
      if (iVar2 != 0) goto LAB_00be502d;
    }
    else {
LAB_00be502d: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar1;
      uVar3 = F_00b595f0(uVar1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0x78);
    if (this_00 == (undefined *)0x0) goto LAB_00be5052;
  }
  uVar3 = F_00bc54d0(this_00,*(undefined4 *)((int)this + 0x88));
LAB_00be5052: ;
  *(undefined4 *)((int)this + 0x88) = 0;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf3 */
byte F_00be5060(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0xf) != '\0';
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf41 */
float F_00be5070(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  
  uVar1 = F_00bd3040(this);
  if ((uVar1 & 1) != 0) {
    piVar3 = *(int * PTR32 *)(this + 0x70);
    if (piVar3 == (int *)0x0) {
      iVar2 = *(int *)(this + 0x6c);
      if (iVar2 == 0) {
        if (*(int *)(this + 4) != 0) {
          *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
        }
        iVar2 = *(int *)(this + 0x6c);
        if (iVar2 != 0) goto LAB_00be50a2;
      }
      else {
LAB_00be50a2: ;
        *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar2 + 4);
      }
      piVar3 = *(int * PTR32 *)(this + 0x70);
    }
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar3 + 0xbc))(piVar3);
    fVar5 = (float10)(float)extraout_ST0;
    bVar4 = GEN_ISNAN(fVar5) || GEN_ISNAN((float10)0);
    if (bVar4 == (bVar4 || fVar5 == (float10)0)) goto LAB_00be50d2;
  }
  fVar5 = (float10)*(float *)(this + 0x38);
LAB_00be50d2: ;
  return (float)fVar5;
}

/* ref: FUN_00be50e0 */
float F_00be50e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe50e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  
  uVar1 = F_00bd3040(this);
  if ((uVar1 & 1) != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 == (int *)0x0) {
      iVar2 = *(int *)((int)this + 0x6c);
      if (iVar2 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar2 = *(int *)((int)this + 0x6c);
        if (iVar2 != 0) goto LAB_00be5112;
      }
      else {
LAB_00be5112: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar2 + 4);
      }
      piVar3 = *(int * PTR32 *)((int)this + 0x70);
    }
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar3 + 0xc0))(piVar3,*(undefined4 *)((int)this + 0x38));
    fVar5 = (float10)(float)extraout_ST0;
    bVar4 = GEN_ISNAN(fVar5) || GEN_ISNAN((float10)0);
    if (bVar4 == (bVar4 || fVar5 == (float10)0)) goto LAB_00be514d;
  }
  fVar5 = (float10)*(float *)((int)this + 0x38);
LAB_00be514d: ;
  return (float)fVar5;
}

/* ref: FUN_00be5160 */
float F_00be5160(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  
  if ((*(byte *)((int)this + 0x90) & 0x10) != 0) {
    return (float)(float10)0;
  }
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xac))(this);
  return (float)extraout_ST0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf25 */
unsigned int F_00be5180(void)
{
  GEN_ENTER(0xbe5180u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf26 */
uint F_00be5190(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0xc] != (undefined1)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,2);
    this[0xc] = (undefined1)0x0;
    this[0xd] = (undefined1)0x1;
    this[10] = (undefined1)0x0;
    this[0xb] = (undefined1)0x0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,2);
  *(uint *)(this + 0x90) = *(uint *)(this + 0x90) & 0xfffffff7;
  this[0xa5] = (undefined1)0x0;
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf68 */
unsigned int F_00be51e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe51e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x88) != 0) {
    F_00c1f460(*(int *)(in_ecx + 0x88));
    return 0;
  }
  return 0;
}

/* ref: FUN_00be5220 */
float F_00be5220(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double dVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x88) != (undefined *)0x0) {
    dVar1 = F_00c1f480(*(undefined * PTR32 *)((int)this + 0x88));
    return (float)dVar1;
  }
  return (float)(float10)0;
}

/* ref: FUN_00be5240 */
float F_00be5240(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  float10 extraout_ST0;
  float fVar3;
  
  iVar2 = *(int *)((int)this + 0x70);
  if (iVar2 != 0) goto LAB_00be527b;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00be5268;
  }
  else {
LAB_00be5268: ;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar2 + 4);
  }
  iVar2 = *(int *)((int)this + 0x70);
  if (iVar2 == 0) {
    return (float)(float10)0;
  }
LAB_00be527b: ;
  if (*(char *)(iVar2 + 0x30) == '\0') {
    if (*(char *)(iVar2 + 0x80) == '\0') {
      fVar3 = *(float *)(iVar2 + 0x58);
    }
    else {
      fVar3 = *(float *)(iVar2 + 0x6c);
    }
    fVar1 = *(float *)((int)this + 0x34);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa8))(this);
    return ((float)GEN_TOF(((float10)(fVar3 - fVar1) - extraout_ST0)));
  }
  if (*(char *)((int)this + 0xd) == '\0') {
    return REFG(float, 0x1090708);
  }
  return *(float *)((int)this + 0x44);
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf57 */
unsigned int F_00be52e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe52e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    return 0;
  }
  if ((((param_2 == 6) && ((*(byte *)(param_1 + 0x90) & 0x10) != 0)) &&
      (*(int *)(param_1 + 0x88) != 0)) && (*((int *)GEN_TOP((*(int *)(param_1 + 0x88) + 0x28))) != 1)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) goto LAB_00be5341;
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
    }
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 != 0) goto LAB_00be5338;
  }
  else {
LAB_00be5338: ;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = *(int *)(param_1 + 0x70);
LAB_00be5341: ;
  if (*(char *)(iVar1 + 0x30) == '\0') {
    if (*(char *)(iVar1 + 0x80) == '\0') {
      param_2 = *(uint *)(iVar1 + 0x58);
    }
    else {
      param_2 = *(uint *)(iVar1 + 0x6c);
    }
  }
  else {
    fVar2 = (float10)*(int *)(iVar1 + 0x34);
    if (*(int *)(iVar1 + 0x34) < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    param_2 = (uint)gen_fl2bits((float)fVar2);
  }
  if ((float10)*(float *)(param_1 + 0x34) <= ((float10)GEN_TOD(gen_bits2f(param_2)))) {
    *(undefined4 *)(param_1 + 0x30) = 2;
  }
  return 0;
}

/* ref: FUN_00be5390 */
uint F_00be5390(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbe5390u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 local_8;
  
  iVar1 = *(int *)((int)param_1 + 0x70);
  if (iVar1 != 0) goto LAB_00be53c2;
  iVar1 = *(int *)((int)param_1 + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)((int)param_1 + 4) != 0) {
      *(undefined4 *)((int)param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 4) + 4)));
    }
    iVar1 = *(int *)((int)param_1 + 0x6c);
    if (iVar1 != 0) goto LAB_00be53b9;
  }
  else {
LAB_00be53b9: ;
    *(undefined4 *)((int)param_1 + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = *(int *)((int)param_1 + 0x70);
LAB_00be53c2: ;
  local_8 = 0;
  if (iVar1 != 0) {
    local_8 = *(undefined4 *)(iVar1 + 0x28);
  }
  F_00c1f1f0(*(undefined4 *)((int)param_1 + 0x88),param_2,local_8);
  uVar2 = F_00be4ff0(param_1);
  return uVar2;
}

/* ref: FUN_00be5410 */
uint F_00be5410(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  float10 extraout_ST0;
  float local_8;
  
  if (*(int *)((int)this + 0x88) != 0) {
    if ((*(byte *)((int)this + 0x90) & 0x10) == 0) {
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xac))(this);
      local_8 = (float)extraout_ST0;
    }
    else {
      local_8 = 0.0;
    }
    F_00c1f3e0(*(undefined4 *)((int)this + 0x88),local_8);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x22))) = 1;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be5493;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00be547e;
  }
  else {
LAB_00be547e: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00be5493: ;
  uVar3 = F_00bc3f70(this_00,this);
  return uVar3;
}

/* ref: FUN_00be54a0 */
byte F_00be54a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe54a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x88) != 0) && (*((char *)GEN_TOP((*(int *)(in_ecx + 0x88) + 0x23))) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf37 */
unsigned int F_00be54c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbe54c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(param_1 + 0xa0) = param_2;
  if ((*(int *)(param_1 + 0x88) != 0) && (*(char *)(param_1 + 0xc) != '\0')) {
    F_00c1f440(*(int *)(param_1 + 0x88),param_2);
  }
  return 0;
}

/* ref: FUN_00be5500 */
unsigned int F_00be5500(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbe5500u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  F_00c1f3a0(*(undefined4 *)(param_1 + 0x88),param_2);
  return 0;
}

/* ref: FUN_00be5520 */
double F_00be5520(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  float10 extraout_ST0;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 != (int *)0x0) goto LAB_00be556e;
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_00be5550;
    }
    else {
LAB_00be5550: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 != (int *)0x0) goto LAB_00be555d;
  }
  else {
LAB_00be555d: ;
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
    *(uint *)((int)this + 0x74) = uVar2;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 == (int *)0x0) {
    return (double)*(float *)((int)this + 0x9c);
  }
LAB_00be556e: ;
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3);
  return (double)((float)GEN_TOF((extraout_ST0 * (float10)*(float *)((int)this + 0x9c))));
}

/* ref: FUN_00be55a0 */
uint F_00be55a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe55a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int in_ecx;
  
  in_ecx = *(int *)((int)this + 0x6c);
  if (in_ecx == 0) {
    uVar1 = 0;
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *(uint *)((int)this + 0x6c) = uVar1;
    }
    in_ecx = *(int *)((int)this + 0x6c);
    if (in_ecx == 0) {
      return uVar1;
    }
  }
  this_00 = (undefined *)F_00beb690(in_ecx);
  uVar1 = F_00bccc10(this_00,*(undefined4 *)((int)this + 0x8c));
  *(uint *)((int)this + 0xb0) = uVar1;
  uVar1 = F_00bcd040(this_00,*(undefined4 *)((int)this + 0x8c),(int)this + 0xa8,(int)this + 0xac);
  *(undefined1 *)((int)this + 0xa7) = 1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf63 */
unsigned int F_00be5600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe5600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x88);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x23) == '\0') {
      F_00c1f1f0(iVar1,(float)(float10)0,(undefined4)gen_fl2bits((float)(float10)0));
    }
    F_00be4ff0(this);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf12 */
unsigned int F_00be5630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xbe5630u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
  *(int *)(param_1 + 0x8c) = iVar1 + param_2;
  F_00bd2f00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf16 */
unsigned int F_00be5670(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbe5670u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
  *(int *)(param_1 + 0x8c) = iVar1 + param_2;
  F_00bd2fb0(param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00be56a0 */
float F_00be56a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe56a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  bool bVar5;
  double dVar6;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar4 != (int *)0x0) goto LAB_00be56d5;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00be56cc;
  }
  else {
LAB_00be56cc: ;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar2 + 4);
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x70);
LAB_00be56d5: ;
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x6c))(piVar4);
  if (uVar3 == 0) {
    dVar6 = F_00be5520(this);
    return (float)dVar6;
  }
  fVar1 = *(float *)(uVar3 + 0x98);
  dVar6 = F_00be5520(this);
  bVar5 = GEN_ISNAN((double)fVar1) || GEN_ISNAN(dVar6);
  if (bVar5 != (bVar5 || (double)fVar1 == dVar6)) {
    return (float)(float10)1;
  }
  fVar1 = *(float *)(uVar3 + 0x98);
  dVar6 = F_00be5520(this);
  return (float)((float10)dVar6 / (float10)fVar1);
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf33 */
unsigned int F_00be5740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe5740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * this_00;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * this_01;
  undefined4 uVar5;
  double dVar6;
  float fVar7;
  
  if ((*(int *)(this + 0x6c) == 0) && (*(int *)(this + 4) != 0)) {
    *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
  }
  this_00 = *(int * PTR32 *)(this + 0x70);
  if (this_00 == (int *)0x0) {
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar1 = *(int *)(this + 0x6c);
      if (iVar1 != 0) goto LAB_00be5780;
    }
    else {
LAB_00be5780: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    this_00 = *(int * PTR32 *)(this + 0x70);
  }
  iVar1 = *(int *)(this + 0x74);
  if (iVar1 == 0) {
    piVar2 = this_00;
    if (this_00 == (int *)0x0) {
      iVar1 = *(int *)(this + 0x6c);
      if (iVar1 == 0) {
        if (*(int *)(this + 4) != 0) {
          *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
        }
        iVar1 = *(int *)(this + 0x6c);
        if (iVar1 != 0) goto LAB_00be57b2;
      }
      else {
LAB_00be57b2: ;
        *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
      }
      piVar2 = *(int * PTR32 *)(this + 0x70);
      if (piVar2 != (int *)0x0) goto LAB_00be57bf;
    }
    else {
LAB_00be57bf: ;
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2);
      *(uint *)(this + 0x74) = uVar3;
    }
    iVar1 = *(int *)(this + 0x74);
  }
  this_01 = *(undefined * PTR32 *)(this + 0x78);
  if (this_01 != (undefined *)0x0) goto LAB_00be580c;
  iVar4 = *(int *)(this + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 != 0) goto LAB_00be57f7;
  }
  else {
LAB_00be57f7: ;
    uVar5 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar5;
    F_00b595f0(uVar5);
  }
  this_01 = *(undefined * PTR32 *)(this + 0x78);
LAB_00be580c: ;
  piVar2 = *(int * PTR32 *)(this + 0xb4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,this);
    *(undefined4 *)(this + 0xb4) = 0;
  }
  if (*(int *)(this + 0x88) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,0xb);
  }
  uVar5 = *(undefined4 *)(this + 0x5c);
  if ((((byte)this[0x90] & 0x10) != 0) &&
     (uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x74))(this_00), uVar3 == 0)) {
    uVar5 = 0;
  }
  uVar3 = F_00bc5440(this_01);
  *(uint *)(this + 0x88) = uVar3;
  *(undefined * PTR32 *)(uVar3 + 0x48) = this;
  if ((*(char * PTR32 *)(this + 0x8c) != (char *)0x0) && (**(char * PTR32 *)(this + 0x8c) != '\0')) {
    if (iVar1 == 0) {
      fVar7 = gen_bits2f(this_00[10]);
      uVar3 = 0xffffffff;
    }
    else {
      fVar7 = gen_bits2f(this_00[10]);
      uVar3 = F_00bcfbe0(iVar1);
    }
    F_00c1eeb0(*(undefined4 *)(this + 0x88),uVar5,uVar3,fVar7);
    fVar7 = *(float *)(this + 0xa0);
    if (((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
         ((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar7 == REFG(float, 0x1087f04))) ||
       ((uVar3 = F_00bd2420(this), uVar3 != 0 &&
        (fVar7 = *(float *)(uVar3 + 0xc),
        (GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
        ((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar7 == REFG(float, 0x1087f04)))))) {
      F_00c1f440(*(undefined4 *)(this + 0x88),fVar7);
    }
    *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 4;
    uVar3 = F_00bc1e50(this_00,0);
    if ((char)uVar3 == '\0') {
      dVar6 = F_00be5520(this);
      if (GEN_ISNAN(dVar6) == (GEN_ISNAN(dVar6) || dVar6 == 1.0)) {
        dVar6 = F_00be5520(this);
        F_00c1f3a0(*(undefined4 *)(this + 0x88),(float)dVar6);
      }
      this[0xa4] = (undefined1)0x0;
    }
    else {
      F_00c1f3a0(*(undefined4 *)(this + 0x88),(float)(float10)0);
      this[0xa4] = (undefined1)0x1;
    }
    *(uint *)(this + 0x90) = *(uint *)(this + 0x90) & 0xfffffff7;
    this[0xa6] = (undefined1)0x1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf36 */
unsigned int F_00be5990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe5990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  double dVar1;
  
  if (((*(int *)(this + 0x88) != 0) && (this[0xc] != (undefined1)0x0)) &&
     (this[0xa4] == (undefined1)0x0)) {
    dVar1 = F_00be5520(this);
    F_00c1f3a0(*(undefined4 *)(this + 0x88),(float)dVar1);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf35 */
unsigned int F_00be59d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe59d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  double dVar1;
  
  if ((*(int *)((int)param_1 + 0x88) != 0) && (*(char *)((int)param_1 + 0xc) != '\0')) {
    if ((char)param_3 == '\0') {
      if (*(char *)((int)param_1 + 0xa4) != '\0') {
        dVar1 = F_00be5520(param_1);
        F_00c1f3a0(*(undefined4 *)((int)param_1 + 0x88),(float)dVar1);
        *(undefined1 *)((int)param_1 + 0xa4) = 0;
      }
    }
    else if (*(char *)((int)param_1 + 0xa4) == '\0') {
      F_00c1f3a0(*(int *)((int)param_1 + 0x88),(float)(float10)0);
      *(undefined1 *)((int)param_1 + 0xa4) = 1;
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00be5a40 */
uint F_00be5a40(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0xa7) == '\0') {
    F_00be55a0(this);
  }
  return *(uint *)((int)this + 0xa8);
}

/* ref: FUN_00be5a60 */
uint F_00be5a60(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0xa7) == '\0') {
    F_00be55a0(this);
  }
  return *(uint *)((int)this + 0xac);
}

/* ref: FUN_00be5a80 */
uint F_00be5a80(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0xa7) == '\0') {
    F_00be55a0(this);
  }
  return *(uint *)((int)this + 0xb0);
}

/* ref: FUN_00be5aa0 */
uint F_00be5aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c434));
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x23) == '\0') {
      F_00c1f1f0(iVar1,(float)(float10)0,(undefined4)gen_fl2bits((float)(float10)0));
    }
    F_00be4ff0(this);
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xb4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,this);
  }
  uVar3 = F_00bd2e60(this);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf48 */
uint F_00be5af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe5af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x88);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x28) == 1)) {
    this[0xa6] = (undefined1)0x0;
    return uVar1;
  }
  if (((char)param_1 == '\0') || (uVar1 = param_1, ((byte)this[0x7c] & 1) == 0)) {
    uVar1 = F_00bd3200((undefined *)this,param_1);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf21 */
uint F_00be5b30(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbe5b30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0_01;
  double dVar8;
  
  F_00bd1f30(param_1,param_2,param_3);
  param_1[0x24] = param_1[0x24] & 0xffffffef;
  fVar2 = 9.18327e-41;
  param_1[0x27] = (int)gen_fl2bits(param_4);
  *(ushort *)(param_1 + 0x1f) = *(ushort *)(param_1 + 0x1f) & 0xfffe;
  if ((char)param_6 != '\0') {
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xa8))(param_1); dVar8 = extraout_ST0;
    fVar6 = (float10)0;
    bVar4 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN(fVar6);
    bVar5 = bVar4 || extraout_ST0 == fVar6;
    uVar3 = (undefined2)((ulonglong)gen_d2bits(dVar8) >> 0x10);
    fVar2 = gen_bits2f(CONCAT22(uVar3,CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U |
                                               !(fVar6 <= extraout_ST0),
                                               (char)(ulonglong)gen_d2bits(dVar8))));
    if (bVar4 != bVar5) {
      bVar4 = GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
      bVar5 = bVar4 || param_3 == *(float *)&REFG(undefined, 0x1088114);
      fVar2 = gen_bits2f(CONCAT22(uVar3,CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U |
                                                 !(*(float *)&REFG(undefined, 0x1088114) <= param_3),
                                                 (char)(ulonglong)gen_d2bits(dVar8))));
      if (bVar4 == bVar5) {
        extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xac))(param_1); dVar8 = extraout_ST0_00;
        fVar6 = (float10)param_3;
        bVar4 = GEN_ISNAN(extraout_ST0_00) || GEN_ISNAN(fVar6);
        bVar5 = bVar4 || extraout_ST0_00 == fVar6;
        fVar2 = gen_bits2f(CONCAT22((short)((ulonglong)gen_d2bits(dVar8) >> 0x10),
                                    CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U |
                                             !(fVar6 <= extraout_ST0_00),
                                             (char)(ulonglong)gen_d2bits(dVar8))));
        if (bVar4 == bVar5) goto LAB_00be5c16;
      }
      if ((char)param_5 != '\0') {
        bVar4 = GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
        bVar5 = bVar4 || param_3 == *(float *)&REFG(undefined, 0x1088114);
        fVar2 = gen_bits2f(CONCAT22((short)((uint)gen_fl2bits(fVar2) >> 0x10),
                                    CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U |
                                             !(*(float *)&REFG(undefined, 0x1088114) <= param_3),
                                             (char)(uint)gen_fl2bits(fVar2))));
        if (bVar4 == bVar5) {
          if (*(char *)((int)param_1 + 0xa7) == '\0') {
            fVar2 = gen_bits2f(F_00be55a0(param_1));
          }
          fVar6 = (float10)param_1[0x2c];
          if (param_1[0x2c] < 0) {
            fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          fVar7 = (float10)param_3;
          bVar4 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7);
          bVar5 = bVar4 || fVar6 == fVar7;
          fVar2 = gen_bits2f(CONCAT22((short)((uint)gen_fl2bits(fVar2) >> 0x10),
                                      CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar7 <= fVar6),
                                               (char)(uint)gen_fl2bits(fVar2))));
          if (bVar4 == bVar5) goto LAB_00be5c16;
        }
      }
      param_1[0x24] = param_1[0x24] | 0x10;
      *(ushort *)(param_1 + 0x1f) = *(ushort *)(param_1 + 0x1f) | 1;
    }
  }
LAB_00be5c16: ;
  if ((char)param_1[10] != '\0') {
    fVar1 = gen_bits2f(param_1[0xd]);
    extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xa4))(param_1); fVar2 = extraout_ST0_01;
    if ((float10)*param_7 < (float10)(float)(extraout_ST0_01 + (float10)fVar1)) {
      *param_7 = (float)(extraout_ST0_01 + (float10)fVar1);
    }
  }
  return (uint)gen_fl2bits(fVar2);
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf22 */
double F_00be5c50(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * this_00;
  uint uVar2;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float10 extraout_ST0_00;
  double dVar5;
  float local_8;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (((char)uVar2 != '\0') || (*(int *)(this + 4) == 0)) {
    return 0.0;
  }
  if (((byte)this[0x90] & 0x10) == 0) {
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xac))(this);
    local_8 = (float)extraout_ST0;
    bVar3 = GEN_ISNAN((float10)local_8) || GEN_ISNAN((float10)0);
    if (bVar3 == (bVar3 || (float10)local_8 == (float10)0)) goto LAB_00be5cc2;
  }
  if (this[0xa7] == (undefined1)0x0) {
    F_00be55a0(this);
  }
  fVar4 = (float10)*(int *)(this + 0xb0);
  if (*(int *)(this + 0xb0) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  local_8 = (float)fVar4;
LAB_00be5cc2: ;
  if ((this[0xc] == (undefined1)0x0) ||
     (this_00 = *(undefined * PTR32 *)(this + 0x88), this_00 == (undefined *)0x0)) {
    uVar2 = F_0054d950(this);
    if (*(char *)(uVar2 + 0x30) == '\0') {
      if (*(char *)(uVar2 + 0x80) == '\0') {
        fVar1 = *(float *)(uVar2 + 0x58);
      }
      else {
        fVar1 = *(float *)(uVar2 + 0x6c);
      }
    }
    else {
      fVar4 = (float10)*(int *)(uVar2 + 0x34);
      if (*(int *)(uVar2 + 0x34) < 0) {
        fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar1 = (float)fVar4;
    }
    extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xb4))(this);
    fVar4 = (extraout_ST0_00 + (float10)local_8) - (float10)fVar1;
  }
  else {
    if (*(int *)((int)this_00 + 0x28) == 0) {
      uVar2 = F_00be5a80(this);
      dVar5 = (double)(int)uVar2;
      if ((int)uVar2 < 0) {
        dVar5 = dVar5 + (double)*(float *)&REFG(undefined, 0x1088110);
      }
      return dVar5;
    }
    uVar2 = F_00bc3ab0(this_00);
    if ((char)uVar2 == '\0') {
      return (double)*(float *)((int)this_00 + 0x38);
    }
    dVar5 = F_00c1f480(this_00);
    fVar4 = (float10)local_8 - (float10)dVar5;
  }
  if (!((float)fVar4 <= 0.0)) {
    return (double)(float)fVar4;
  }
  return 0.0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf23 */
uint F_00be5d90(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if ((char)uVar2 != '\0') {
    return uVar2;
  }
  if (*(int *)(this + 4) == 0) {
    return uVar2;
  }
  if (((byte)this[0x90] & 0x10) == 0) {
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xac))(this);
    (*(float *)(gen_frame + 0x8)) = (float)extraout_ST0;
    fVar4 = (float10)(float)extraout_ST0;
    bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN((float10)0);
    if (bVar3 == (bVar3 || fVar4 == (float10)0)) goto LAB_00be5e02;
  }
  if (this[0xa7] == (undefined1)0x0) {
    F_00be55a0(this);
  }
  fVar4 = (float10)*(int *)(this + 0xb0);
  if (*(int *)(this + 0xb0) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x8)) = (float)fVar4;
LAB_00be5e02: ;
  uVar2 = *(uint *)(this + 0x88);
  if ((uVar2 == 0) || (*(int *)(uVar2 + 0x28) != 0)) {
    F_00c51c40((uint)(ulonglong)gen_d2bits((double)*(float *)(this + 0x44)),
                 (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x44)) >> 0x20),&(*(double *)(gen_frame + 0x0)));
    fVar4 = (float10)(*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0x8)) = (float)(*(double *)(gen_frame + 0x0));
    fVar1 = (float)(fVar4 - (float10)(float)(*(double *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x8)) = fVar1;
    if ((float10)fVar1 <= (float10)0) {
      return extraout_EAX;
    }
    return extraout_EAX;
  }
  if (this[0xa7] == (undefined1)0x0) {
    uVar2 = F_00be55a0(this);
  }
  if (-1 < *(int *)(this + 0xb0)) {
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00be5e90 */
byte F_00be5e90(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be5ecf;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00be5eba;
  }
  else {
LAB_00be5eba: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00be5ecf: ;
  if (*(char *)((int)this + 0xa7) == '\0') {
    F_00be55a0(this);
  }
  bVar2 = F_00bc4bb0(this_00,*(undefined4 *)((int)this + 0x8c),*(undefined4 *)((int)this + 0xac));
  return bVar2;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf5 */
byte F_00be5f00(unsigned int gen_a0)
{
  GEN_ENTER(0xbe5f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  uint uVar1;
  undefined * this_00;
  
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x10] == (undefined1)0x0) {
    return 0;
  }
  in_ecx = *(int *)(this + 0x88);
  if (in_ecx != 0) {
    if (((*(int *)(in_ecx + 0xc) != 0) || (*(int *)(in_ecx + 0x58) != 0)) &&
       ((*(char *)(in_ecx + 0x23) == '\0' || (uVar1 = F_00bc3ab0(in_ecx), (char)uVar1 == '\0'))))
    {
      return 0;
    }
    uVar1 = *(uint *)(in_ecx + 0x1c);
    F_00be4ff0(this);
    F_00bc38a0(this);
    if (((uVar1 >> 1 & 1) != 0) && (this_00 = (undefined *)F_0054d920(this), this_00 != (undefined *)0x0)) {
      F_00bc33b0(this_00,(uint)((byte)this[0x7c] & 1));
    }
  }
  this[0x11] = (undefined1)0x1;
  this[0x15] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
  }
  return 1;
}

/* ref: FUN_00be6290 */
uint F_00be6290(unsigned int gen_a0)
{
  GEN_ENTER(0xbe6290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  undefined * this_01;
  undefined1 * puVar5;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = this;
  if (((*(byte *)((int)this + 0x7c) & 1) != 0) && (uVar4 = F_00bd3040(this), (uVar4 & 0x400) != 0)
     ) {
    return uVar4;
  }
  iVar1 = *(int *)((int)this + 0x88);
  if ((((*(int *)(iVar1 + 0x50) == 1) || (*(int *)(iVar1 + 0x50) == 2)) &&
      (*(char *)(iVar1 + 0x21) == '\0')) && (*(char *)(iVar1 + 0x20) == '\0')) {
    if (*(int *)((int)this + 0x6c) == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      if (*(int *)((int)this + 0x6c) == 0) goto LAB_00be638a;
    }
    this_00 = (undefined *)F_00a0b580(this);
    this_01 = (undefined *)F_0054d950(this);
    if ((this_01 == (undefined *)0x0) || (*(int *)((int)this_01 + 0x244) != 0x4a)) {
      bVar3 = *((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x30)));
      uVar4 = F_00bc3c20(this_00);
      puVar5 = (undefined1 *)F_00a09fe0((uint)bVar3,uVar4);
      if ((*((int *)GEN_TOP((*(int *)((int)this + 0x88) + 0x54))) == 0x10) &&
         (puVar5 == (undefined1 *)0xffffffff)) {
        puVar5 = &REFG(undefined, 0xa);
        goto LAB_00be632b;
      }
    }
    else {
      bVar3 = F_00bcfe30(this_01,&(*(undefined1 * PTR32 *)(gen_frame + 0x8)));
      puVar5 = (*(undefined1 * PTR32 *)(gen_frame + 0x8));
      if (bVar3 == 0) goto LAB_00be638a;
    }
    if (-1 < (int)puVar5) {
LAB_00be632b: ;
      F_00be5390(this,(float)(int)puVar5);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
      return uVar4;
    }
  }
LAB_00be638a: ;
  if ((*(byte *)((int)this + 0x90) & 1) != 0) {
    pcVar2 = *(gen_code32 *)(*(int *)this + 0xa0);
    *(undefined1 *)((int)this + 0xa5) = 1;
    uVar4 = (*pcVar2)(this,1);
    return uVar4;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,8);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf34 */
byte F_00be63d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe63d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  double dVar5;
  float local_8;
  
  if (*(int *)(this + 0x88) == 0) {
    return 0;
  }
  dVar5 = F_00be5520(this);
  local_8 = (float)dVar5;
  bVar4 = GEN_ISNAN((float10)local_8) || GEN_ISNAN((float10)0);
  if (bVar4 != (bVar4 || (float10)local_8 == (float10)0)) {
    local_8 = REFG(float, 0x1087f04);
  }
  F_00c1f3a0(*(undefined4 *)(this + 0x88),local_8);
  if ((param_1 != 6) && (param_1 != 7)) {
    if (((param_1 == 2) || (param_1 == 3)) || (param_1 == 5)) {
      uVar3 = 0;
      uVar2 = F_0054d950(this);
      if (uVar2 != 0) {
        uVar3 = *(uint *)(uVar2 + 0x1d8);
      }
    }
    else {
      F_0054d900(this);
      this_00 = (undefined *)F_00a0b580(this);
      uVar3 = 0;
      if (param_1 == 1) {
        bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x88) + 0x30)));
        uVar3 = F_00bc3c20(this_00);
        uVar3 = F_00a09fe0((uint)bVar1,uVar3);
      }
      else if (param_1 == 9) {
        bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x88) + 0x30)));
        uVar3 = F_00bc3c20(this_00);
        uVar3 = F_00a09fe0((uint)bVar1,uVar3);
      }
    }
    uVar2 = F_0054d920(this);
    F_00c1f1f0(*(undefined4 *)(this + 0x88),(float)(int)uVar3,*(undefined4 *)(uVar2 + 0x28));
    F_00be4ff0(this);
    return 1;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x54))) == 0x10) {
    F_00be6290(this);
  }
  return 0;
}

/* ref: FUN_00be6510 */
uint F_00be6510(unsigned int gen_a0)
{
  GEN_ENTER(0xbe6510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 extraout_ST0;
  double dVar2;
  float fVar3;
  
  uVar1 = *(uint *)((int)this + 0x88);
  if ((*(int *)(uVar1 + 0x28) != 0) &&
     (((*(int *)(uVar1 + 0x54) != 0x10 || (uVar1 = F_0054d950(this), uVar1 == 0)) ||
      (*(int *)(uVar1 + 0x244) != 0x4a)))) {
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x88) + 0x22))) == '\0') {
      fVar3 = F_00bd2390(this);
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this); dVar2 = extraout_ST0;
      if (!(extraout_ST0 <= (float10)fVar3)) {
        return (uint)(ulonglong)gen_d2bits(dVar2);
      }
    }
    uVar1 = F_00be6290(this);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf49 */
unsigned int F_00be6580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  bool bVar6;
  undefined * pHVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if ((((((char)param_1 == '\0') && (this[0xd] == (undefined1)0x0)) &&
       (((byte)this[0x90] & 8) == 0)) &&
      ((uVar4 = F_0054d950(this), uVar4 != 0 && (*(int *)(uVar4 + 0xdc) == 0)))) &&
     (((*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_00bcfbe0(uVar4), -1 < (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) &&
      (pvVar5 = (undefined *)F_00a0b580(this), pvVar5 != (undefined *)0x0)))) {
    uVar1 = *(undefined4 *)(uVar4 + 0x1e0);
    pHVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    uVar4 = F_00be5a60(this);
    bVar3 = F_00bc46a0(pvVar5,uVar1,uVar4,pHVar7);
    if (bVar3 != 0) {
      pvVar5 = (undefined *)F_0054d920(this);
      F_00bc33b0(pvVar5,(uint)((byte)this[0x7c] & 1));
      *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 8;
    }
  }
  iVar2 = *(int *)(this + 0x88);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x23) != '\0')) {
    if ((((byte)this[0x90] & 8) == 0) && (this[0xa6] != (undefined1)0x0)) {
      pvVar5 = (undefined *)F_0054d920(this);
      if (pvVar5 != (undefined *)0x0) {
        F_00bc33b0(pvVar5,(uint)((byte)this[0x7c] & 1));
      }
      *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 8;
    }
    bVar6 = GEN_ISNAN(*(float *)(iVar2 + 0x38)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    if ((bVar6 != (bVar6 || *(float *)(iVar2 + 0x38) == *(float *)&REFG(undefined, 0x1088114))) &&
       (F_00be4ff0(this), this[0xa6] != (undefined1)0x0)) {
      F_00bc38a0(this);
    }
  }
  if (this[0x10] == (undefined1)0x0) {
    if ((iVar2 != 0) && (this[0xa6] != (undefined1)0x0)) {
      F_00be6510(this);
    }
    if (this[0xc] != (undefined1)0x0) {
      if (*(int *)(this + 0x88) != 0) {
        pvVar5 = (undefined *)F_0054d920(this);
        uVar4 = F_00bc1e50(pvVar5,0);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3),(char)uVar4)));
        F_00be59d0(this,4,(uint)(*(undefined * PTR32 *)(gen_frame + 0x8)));
        F_00bd2200((undefined *)this,param_1);
        return 0;
      }
      F_00bc38a0(this);
    }
    F_00bd2200((undefined *)this,param_1);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf0 */
uint F_00be6700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c434));
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x23) == '\0') {
      F_00c1f1f0(iVar1,(float)(float10)0,(undefined4)gen_fl2bits((float)(float10)0));
    }
    F_00be4ff0(this);
  }
  piVar2 = *(int * PTR32 *)(this + 0xb4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,this);
  }
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be6770 */
float10 F_00be6770(float gen_a0)
{
  GEN_ENTER(0xbe6770u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00be6790 */
uint F_00be6790(unsigned int gen_a0)
{
  GEN_ENTER(0xbe6790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c5d4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::RootTranslateClip::vf33 */
unsigned int F_00be67c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe67c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be67fa;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00be67e5;
  }
  else {
LAB_00be67e5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00be67fa: ;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00bbaf90(this_00);
    if (uVar3 != 0) {
      F_00aa1a30(uVar3,(float)(float10)0);
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::RootTranslateClip::vf34 */
byte F_00be6820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::RootTranslateClip::vf29 */
uint F_00be6830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6830u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined * this;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  this = *(undefined * PTR32 *)(param_1 + 0x78);
  fVar1 = *((float *)GEN_TOP((*(int *)(param_2 + 0x1c) + 0x10)));
  if (this == (undefined *)0x0) {
    iVar3 = *(int *)(param_1 + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
      }
      iVar3 = *(int *)(param_1 + 0x6c);
      if (iVar3 != 0) goto LAB_00be6869;
    }
    else {
LAB_00be6869: ;
      uVar2 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      F_00b595f0(uVar2);
    }
    this = *(undefined * PTR32 *)(param_1 + 0x78);
    if (this != (undefined *)0x0) goto LAB_00be6882;
    piVar6 = (int *)0x0;
  }
  else {
LAB_00be6882: ;
    if (*(char *)((int)this + 0x12) == '\0') {
      piVar6 = *(int * PTR32 *)((int)this + 4);
    }
    else {
      piVar6 = (int *)0x0;
    }
  }
  if (this == (undefined *)0x0) {
    iVar3 = *(int *)(param_1 + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
      }
      iVar3 = *(int *)(param_1 + 0x6c);
      if (iVar3 != 0) goto LAB_00be68b6;
    }
    else {
LAB_00be68b6: ;
      uVar2 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      F_00b595f0(uVar2);
    }
    this = *(undefined * PTR32 *)(param_1 + 0x78);
    if (this == (undefined *)0x0) {
      uVar4 = 0;
      goto LAB_00be68da;
    }
  }
  uVar4 = F_00bbaf90(this);
LAB_00be68da: ;
  if (piVar6 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x84))(piVar6,(undefined4)gen_fl2bits(fVar1));
    return uVar4;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = F_00aa1a50(uVar4,fVar1);
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::RootTranslateClip::vf0 */
uint F_00be6910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c5d4));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be6940 */
uint F_00be6940(unsigned int gen_a0)
{
  GEN_ENTER(0xbe6940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c6f4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::TransformClip::vf33 */
unsigned int F_00be6970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::TransformClip::vf34 */
byte F_00be6980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::TransformClip::vf29 */
uint F_00be6990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  
  iVar5 = *(int *)(this + 0x78);
  if (iVar5 != 0) goto LAB_00be69e7;
  iVar5 = *(int *)(this + 0x6c);
  if (iVar5 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 != 0) goto LAB_00be69d2;
  }
  else {
LAB_00be69d2: ;
    uVar4 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar4;
    F_00b595f0(uVar4);
  }
  iVar5 = *(int *)(this + 0x78);
LAB_00be69e7: ;
  if (iVar5 == 0) {
    (*(int * PTR32 *)(gen_frame + 0x7c)) = (int *)0x0;
  }
  else if (*(char *)(iVar5 + 0x12) == '\0') {
    (*(int * PTR32 *)(gen_frame + 0x7c)) = *(int * PTR32 *)(iVar5 + 4);
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x7c)) = (int *)0x0;
  }
  uVar6 = *((uint *)GEN_TOP((*(int *)(this + 0x24) + 0x10)));
  iVar5 = *(int *)(param_1 + 0x1c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = (undefined4 *)0x0;
  (*(float * PTR32 *)(gen_frame + 0x74)) = (float *)0x0;
  (*(float * PTR32 *)(gen_frame + 0x70)) = (float *)0x0;
  (*(uint *)(gen_frame + 0x60)) = uVar6;
  if ((uVar6 & 1) != 0) {
    (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar5 + 8);
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar5 + 0xc);
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar5 + 0x10);
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = &(*(undefined4 *)(gen_frame + 0x30));
  }
  if ((uVar6 & 2) != 0) {
    fVar1 = *(float *)(iVar5 + 0x18);
    (*(float *)(gen_frame + 0x6c)) = fVar1;
    (*(float *)(gen_frame + 0x68)) = *(float *)(iVar5 + 0x1c);
    fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar5 + 0x14) * (float10)*(double *)&REFG(undefined, 0x110c810))));
    (*(float * PTR32 *)(gen_frame + 0x74)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar3 = (float)((float10)fVar3 * (float10)REFG(double, 0x1088108));
    (*(float * PTR32 *)(gen_frame + 0x74)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar7 = ((float10)GEN_TOD(fsin((float10)fVar3)));
    (*(float *)(gen_frame + 0x64)) = (float)fVar7;
    ((float *)(gen_frame + 0x50))[0] = (float)fVar7;
    ((float *)(gen_frame + 0x50))[1] = 0.0;
    ((float *)(gen_frame + 0x50))[2] = 0.0;
    fVar7 = ((float10)GEN_TOD(fcos((float10)fVar3)));
    (*(float *)(gen_frame + 0x64)) = (float)fVar7;
    ((float *)(gen_frame + 0x50))[3] = (float)fVar7;
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
      (*(float *)(gen_frame + 0x64)) = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x110c810));
      F_0054d030(((float *)(gen_frame + 0x50)),(float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x110c810)));
    }
    if ((GEN_ISNAN((*(float *)(gen_frame + 0x68))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN((*(float *)(gen_frame + 0x68))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || (*(float *)(gen_frame + 0x68)) == *(float *)&REFG(undefined, 0x1088114))) {
      (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x68)) * (float10)*(double *)&REFG(undefined, 0x110c810));
      F_0054d0f0(((float *)(gen_frame + 0x50)),(float)((float10)(*(float *)(gen_frame + 0x68)) * (float10)*(double *)&REFG(undefined, 0x110c810)));
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x7c)),((float *)(gen_frame + 0x50)));
    (*(float * PTR32 *)(gen_frame + 0x74)) = ((float *)(gen_frame + 0x50));
  }
  if (((*(uint *)(gen_frame + 0x60)) & 4) != 0) {
    fVar1 = *(float *)(iVar5 + 0x24);
    fVar3 = *(float *)(iVar5 + 0x28);
    fVar2 = *(float *)(iVar5 + 0x2c);
    (*(float *)(gen_frame + 0x40)) = fVar1;
    (*(float *)(gen_frame + 0x44)) = fVar3;
    (*(float *)(gen_frame + 0x48)) = fVar2;
    if ((GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) ||
       ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10b9490))) !=
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10b9490))) || fVar1 == REFG(float, 0x10b9490)))) {
      (*(float *)(gen_frame + 0x40)) = REFG(float, 0x10947f8);
    }
    if ((GEN_ISNAN(fVar3) != (GEN_ISNAN(fVar3) || fVar3 == 0.0)) ||
       ((GEN_ISNAN(fVar3) || GEN_ISNAN(REFG(float, 0x10b9490))) !=
        ((GEN_ISNAN(fVar3) || GEN_ISNAN(REFG(float, 0x10b9490))) || fVar3 == REFG(float, 0x10b9490)))) {
      (*(float *)(gen_frame + 0x44)) = REFG(float, 0x10947f8);
    }
    if ((GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0)) ||
       ((GEN_ISNAN(fVar2) || GEN_ISNAN(REFG(float, 0x10b9490))) !=
        ((GEN_ISNAN(fVar2) || GEN_ISNAN(REFG(float, 0x10b9490))) || fVar2 == REFG(float, 0x10b9490)))) {
      (*(float *)(gen_frame + 0x48)) = REFG(float, 0x10947f8);
    }
    (*(float * PTR32 *)(gen_frame + 0x70)) = &(*(float *)(gen_frame + 0x40));
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x78)) != (undefined4 *)0x0) {
    if (((*(float * PTR32 *)(gen_frame + 0x70)) != (float *)0x0) && ((*(float * PTR32 *)(gen_frame + 0x74)) != (float *)0x0)) {
      F_004f7210(((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x78)),(*(float * PTR32 *)(gen_frame + 0x74)),(*(float * PTR32 *)(gen_frame + 0x70)));
      uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x7c)),((undefined1 *)(gen_frame + 0x0)));
      return uVar6;
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 8))((*(int * PTR32 *)(gen_frame + 0x7c)),(*(undefined4 * PTR32 *)(gen_frame + 0x78)));
  }
  if ((*(float * PTR32 *)(gen_frame + 0x74)) != (float *)0x0) {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x7c)),(*(float * PTR32 *)(gen_frame + 0x74)));
  }
  uVar6 = 0;
  if ((*(float * PTR32 *)(gen_frame + 0x70)) != (float *)0x0) {
    uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x7c)),(*(float * PTR32 *)(gen_frame + 0x70)));
  }
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::TransformClip::vf0 */
uint F_00be6c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c6f4));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be6c60 */
uint F_00be6c60(unsigned int gen_a0)
{
  GEN_ENTER(0xbe6c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c81c));
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf63 */
unsigned int F_00be6c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x88);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x88);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x88) = 0;
    }
    *(undefined4 *)(this + 0x88) = 0;
  }
  return 0;
}

/* ref: FUN_00be6cc0 */
uint F_00be6cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe6cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c81c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x88);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x88) = 0;
    }
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  uVar3 = F_00bd2e60(this);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf1 */
byte F_00be6d10(unsigned int gen_a0)
{
  GEN_ENTER(0xbe6d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  if (*(int *)(this + 0x88) == 0) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x80,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_00696b10(pvVar1);
    }
    *(undefined * PTR32 *)(this + 0x88) = pvVar1;
    F_00696b50(pvVar1);
    *((byte *)GEN_TOP((*(int *)(this + 0x88) + 100))) = *((byte *)GEN_TOP((*(int *)(this + 0x88) + 100))) & 0xfe;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x10))))(*(int * PTR32 *)(this + 0x88));
  if (*((char *)GEN_TOP((*(int *)(this + 0x88) + 0x65))) == '\x03') {
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf33 */
uint F_00be6db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6db0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x88);
  if (uVar1 != 0) {
    *(byte *)(uVar1 + 100) = *(byte *)(uVar1 + 100) | 1;
  }
  F_00c21a00();
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf34 */
byte F_00be6dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * pbVar1;
  
  F_00c21a10();
  if (*(int *)(this + 0x88) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 0x88) + 100)));
    *pbVar1 = *pbVar1 & 0xfe;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf29 */
uint F_00be6e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined * this_00;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  uint uVar9;
  undefined4 uVar10;
  float * pfVar11;
  float10 fVar12;
  float10 fVar13;
  
  (*(int *)(gen_frame + 0x6c)) = *(int *)(this + 0x24);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar5 = *((int *)GEN_TOP((*(int *)(param_1 + 0x18) + 8)));
  if (0 < iVar5) {
    (*(float *)(gen_frame + 0x5c)) = 0.0;
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1094880);
    (*(float *)(gen_frame + 0x54)) = 0.0;
    (*(float *)(gen_frame + 0x48)) = 0.0;
    (*(float *)(gen_frame + 0x40)) = 0.0;
    (*(float *)(gen_frame + 0x38)) = 0.0;
    pfVar11 = (float *)(iVar4 + 0x40);
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1094884);
    (*(float * PTR32 *)(gen_frame + 0x64)) = pfVar11;
    (*(int *)(gen_frame + 0x60)) = iVar5;
    do {
      fVar13 = (float10)0;
      pfVar8 = pfVar11;
      if (!(fVar13 < (float10)*pfVar11)) {
        pfVar8 = &(*(float *)(gen_frame + 0x5c));
      }
      if ((GEN_ISNAN(REFG(float, 0x1094880)) || GEN_ISNAN(*pfVar8)) || (REFG(float, 0x1094880) < *pfVar8 || REFG(uint, 0x1094880) == *pfVar8)
         ) {
        pfVar8 = &(*(float *)(gen_frame + 0x58));
      }
      (*(float *)(gen_frame + 0x4c)) = *pfVar8;
      pfVar6 = pfVar11 + -4;
      if (!(fVar13 < (float10)pfVar11[-4])) {
        pfVar6 = &(*(float *)(gen_frame + 0x54));
      }
      if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar6)) || (REFG(float, 0x1087f04) < *pfVar6 || REFG(uint, 0x1087f04) == *pfVar6)
         ) {
        pfVar6 = &(*(float *)(gen_frame + 0x50));
      }
      fVar1 = *pfVar6;
      pfVar6 = pfVar11 + -3;
      fVar12 = (float10)*pfVar8;
      (*(float *)(gen_frame + 0x68)) = (float)(fVar12 * (float10)fVar1);
      if (!(fVar13 < (float10)pfVar11[-3])) {
        pfVar6 = &(*(float *)(gen_frame + 0x48));
      }
      if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar6)) || (REFG(float, 0x1087f04) < *pfVar6 || REFG(uint, 0x1087f04) == *pfVar6)
         ) {
        pfVar6 = &(*(float *)(gen_frame + 0x44));
      }
      pfVar8 = pfVar11 + -2;
      (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar6 * fVar12);
      if (!(fVar13 < (float10)pfVar11[-2])) {
        pfVar8 = &(*(float *)(gen_frame + 0x40));
      }
      if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar8)) || (REFG(float, 0x1087f04) < *pfVar8 || REFG(uint, 0x1087f04) == *pfVar8)
         ) {
        pfVar8 = &(*(float *)(gen_frame + 0x3c));
      }
      pfVar7 = pfVar11 + -1;
      (*(float *)(gen_frame + 0x2c)) = (float)(fVar12 * (float10)*pfVar8);
      if (!(fVar13 < (float10)pfVar11[-1])) {
        pfVar7 = &(*(float *)(gen_frame + 0x38));
      }
      if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar7)) || (REFG(float, 0x1087f04) < *pfVar7 || REFG(uint, 0x1087f04) == *pfVar7)
         ) {
        pfVar7 = &(*(float *)(gen_frame + 0x34));
      }
      fVar13 = (float10)(float)(fVar12 * (float10)fVar1);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar13 * fVar13);
      (*(float *)(gen_frame + 0x24)) = *pfVar7;
      fVar13 = (float10)(float)((float10)*pfVar6 * fVar12);
      (*(float *)(gen_frame + 0x1c)) = (float)(fVar13 * fVar13);
      fVar13 = (float10)(float)(fVar12 * (float10)*pfVar8);
      (*(float *)(gen_frame + 0x20)) = (float)(fVar13 * fVar13);
      (*(float * PTR32 *)(gen_frame + 0x64)) = pfVar11;
      F_004eeed0(&(*(undefined4 *)(gen_frame + 0x0)),(uint)(pfVar11 + 0x24));
      iVar4 = *(int *)(this + 0x88);
      *(float *)(iVar4 + 0x30) = pfVar11[0x30];
      fVar1 = REFG(float, 0x1087f04);
      *(float *)(iVar4 + 0x34) = pfVar11[0x31];
      *(float *)(iVar4 + 0x38) = pfVar11[0x32];
      *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
      iVar4 = *(int *)(this + 0x88);
      *(undefined4 *)(iVar4 + 0x40) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)(iVar4 + 0x44) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)(iVar4 + 0x48) = (*(undefined4 *)(gen_frame + 0x8));
      *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
      *(undefined4 *)(iVar4 + 0x4c) = (*(undefined4 *)(gen_frame + 0xc));
      iVar4 = *(int *)(this + 0x88);
      *(float *)(iVar4 + 0x50) = fVar1;
      *(float *)(iVar4 + 0x54) = fVar1;
      *(float *)(iVar4 + 0x58) = fVar1;
      *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
      cVar3 = *(char *)((int)pfVar11 + -0x3b);
      uVar10 = 0;
      if (cVar3 == '\x03') {
        uVar10 = 1;
      }
      else if (cVar3 == '\x04') {
        uVar10 = 2;
      }
      else if (cVar3 == '\x05') {
        uVar10 = 3;
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 0xc))) = uVar10;
      iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70)));
      *(float *)(iVar4 + 0x14) = (*(float *)(gen_frame + 0x18));
      *(float *)(iVar4 + 0x18) = (*(float *)(gen_frame + 0x1c));
      *(float *)(iVar4 + 0x1c) = (*(float *)(gen_frame + 0x20));
      *(float *)(iVar4 + 0x20) = (*(float *)(gen_frame + 0x24));
      iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70)));
      pfVar8 = &(*(float *)(gen_frame + 0x68));
      *(float *)(iVar4 + 0x74) = pfVar11[2];
      fVar2 = *(float *)((*(int *)(gen_frame + 0x6c)) + 0x14);
      (*(float *)(gen_frame + 0x68)) = fVar2;
      if (!(REFG(double, 0x1094800) < (double)fVar2)) {
        pfVar8 = &(*(float *)(gen_frame + 0x28));
      }
      *(float *)(iVar4 + 0x50) = *pfVar8;
      *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) =
           (ushort)(*(char *)((*(int *)(gen_frame + 0x6c)) + 0x12) != '\0') * 4 |
           *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) & 0xfffb;
      *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) =
           (ushort)(*(char *)((*(int *)(gen_frame + 0x6c)) + 0x11) != '\0') << 3 |
           *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) & 0xfff7;
      *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) =
           (ushort)(*(char *)((*(int *)(gen_frame + 0x6c)) + 0x10) != '\0') |
           *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) & 0xfffe;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 0x58))) = 1;
      this_00 = *(undefined * PTR32 *)(this + 0x88);
      *((float *)GEN_TOP((*(int *)((int)this_00 + 0x70) + 0x70))) = fVar1;
      F_0068b3c0(this_00,1);
      pfVar11 = (*(float * PTR32 *)(gen_frame + 0x64)) + 100;
      iVar4 = (*(int *)(gen_frame + 0x60)) + -1;
      (*(int *)(gen_frame + 0x60)) = iVar4;
      (*(float * PTR32 *)(gen_frame + 0x64)) = pfVar11;
    } while (iVar4 != 0);
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x10))))(*(int * PTR32 *)(this + 0x88));
  uVar9 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x18))))(*(int * PTR32 *)(this + 0x88));
  return uVar9;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf0 */
uint F_00be7130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c81c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x88);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x88) = 0;
    }
    *(undefined4 *)(this + 0x88) = 0;
  }
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be7190 */
byte F_00be7190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7190u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0xa0) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_00be71c0 */
uint F_00be71c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe71c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xb0) = param_2;
  return param_2;
}

/* ref: FUN_00be71d0 */
float10 F_00be71d0(float gen_a0)
{
  GEN_ENTER(0xbe71d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00be71f0 */
uint F_00be71f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe71f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c9bc));
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf26 */
unsigned int F_00be7230(void)
{
  GEN_ENTER(0xbe7230u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf7 */
uint F_00be7240(unsigned int gen_a0)
{
  GEN_ENTER(0xbe7240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 extraout_ST0;
  double dVar2;
  float fVar3;
  
  uVar1 = *(uint *)(this + 0x24);
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x5c) == '\0')) {
LAB_00be7256: ;
    return uVar1 & 0xffffff00;
  }
  fVar3 = F_00bd2390(this);
  if (!((float10)fVar3 < (float10)0)) {
    fVar3 = F_00bd2390(this);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    uVar1 = (uint)(ulonglong)gen_d2bits(dVar2); dVar2 = extraout_ST0;
    if (!(extraout_ST0 <= (float10)fVar3)) goto LAB_00be7256;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,7);
  return uVar1;
}

/* ref: FUN_00be72a0 */
uint F_00be72a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbe72a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = (undefined *)0x0;
  if ((param_1 == -1) && (param_2 == -1)) {
    return 0;
  }
  uVar2 = F_0052ed20(REFG(void * PTR32, 0x1375b00),param_1,0,0);
  uVar3 = F_0052ed20(REFG(void * PTR32, 0x1375b00),param_2,0,0);
  if ((uVar2 != 0) || (uVar3 != 0)) {
    this_00 = (undefined *)F_0052f4b0(REFG(void * PTR32, 0x1375b00));
    bVar1 = F_00b63030(this_00,0,uVar2,&REFG(float, 0x1302df0),param_3,uVar3,&REFG(float, 0x1302df0),param_4,param_5);
    if (bVar1 != 0) {
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x50) + 0xb0))) = this;
    }
  }
  return (uint)this_00;
}

/* ref: FUN_00be7340 */
uint F_00be7340(unsigned int gen_a0)
{
  GEN_ENTER(0xbe7340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x8c);
  iVar3 = 3;
  do {
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar1 = F_0052f4f0(REFG(void * PTR32, 0x1375b00),*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00be7380 */
uint F_00be7380(unsigned int gen_a0)
{
  GEN_ENTER(0xbe7380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c9bc));
  piVar2 = (int *)((int)this + 0x8c);
  iVar3 = 3;
  do {
    if (*piVar2 != 0) {
      F_0052f4f0(REFG(void * PTR32, 0x1375b00),*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = F_00bd2e60(this);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf34 */
byte F_00be73c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe73c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pCVar2;
  int iVar3;
  
  pCVar2 = this + 0x8c;
  iVar3 = 3;
  do {
    if (*(int *)pCVar2 != 0) {
      F_0052f4f0(REFG(void * PTR32, 0x1375b00),*(int *)pCVar2);
      *(int *)pCVar2 = 0;
    }
    pCVar2 = pCVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = F_00bd3f80(this);
  if (uVar1 != 0) {
    F_00bd3f80(this);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf25 */
uint F_00be7410(unsigned int gen_a0)
{
  GEN_ENTER(0xbe7410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = F_00bd3f80(this);
  if (uVar1 != 0) {
    uVar1 = F_00bd3f80(this);
    this_00 = *(undefined * PTR32 *)(uVar1 + 0x38);
    if (this_00 != (undefined *)0x0) {
      *(undefined1 *)((int)this_00 + 0x144) = 0;
      F_00beb300(this_00);
    }
    uVar1 = F_00be7340(this);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00be7440 */
uint F_00be7440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbe7440u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[3]) * 4 + 0x8c)));
  if (piVar3 != (int *)0x0) {
    if (((char)(*(uint *)&gen_args[4]) == '\x01') ||
       ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) & 1 << ((byte)(*(int *)&gen_args[3]) & 0x1f)) == 0)) {
      (*(uint *)&gen_args[4]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[4]), 1, 3),(char)(*(uint *)(piVar3[0x14] + 0xa0) >> 2)) & 0xffffff01;
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3);
      piVar3 = (int *)F_00c21d70((*(undefined * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar2,(*(uint *)&gen_args[4]));
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) | 1 << ((byte)(*(int *)&gen_args[3]) & 0x1f);
    return (uint)piVar3;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x150))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x150))), REFG(float, 0x1087f04));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x154))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x164))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x168))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x178))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x188))) = 0;
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf33 */
uint F_00be7530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  float * in_ecx;
  float fVar1;
  int iVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  F_00c219f0();
  F_00c22060(*(undefined4 *)(this + 0x20),(float)(float10)0);
  this[0x88] = (undefined1)0x1;
  this_00 = (undefined *)F_00bd3f80(this);
  if (this_00 != (undefined *)0x0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    bVar3 = F_00b60790(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    while (bVar3 != 0) {
      if (((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x2c) == 1) && ((*(undefined * PTR32 *)(gen_frame + 0x4)) != this)) &&
         ((*(undefined * PTR32 *)(gen_frame + 0x4))[0xc] != (undefined1)0x0)) {
        ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0xec))((*(undefined * PTR32 *)(gen_frame + 0x4)),10);
      }
      bVar3 = F_00b60790(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    }
  }
  iVar2 = *(int *)(this + 0x24);
  if (((*(char *)(REFG(int, 0x1371290) + 0x310) == '\x01') &&
      (in_ecx = (float *)(REFG(int, 0x1371290) + 0x28c), in_ecx != (float *)0x0)) &&
     ((fVar1 = *in_ecx, GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0) &&
      (0.0 < *(float *)(REFG(int, 0x1371290) + 0x290))))) {
    F_004ada80(in_ecx);
  }
  fVar1 = *(float *)(this + 0x34);
  if (GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    F_004ade20();
  }
  REFG(undefined1, 0x1301314) = 1;
  uVar4 = F_00c21b30(*(undefined * PTR32 *)(this + 0x20));
  *(undefined4 *)(this + 0xa0) = 0;
  if (*(int *)(this + 0x9c) == 0) {
    uVar4 = F_00be72a0(this,*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x24),
                         *(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x28),
                         (uint)(*(int *)(iVar2 + 0x2c) != 1) * 4 + 2);
    *(uint *)(this + 0x8c) = uVar4;
    uVar4 = F_00be72a0(this,*(undefined4 *)(iVar2 + 0x48),*(undefined4 *)(iVar2 + 0x50),
                         *(undefined4 *)(iVar2 + 0x4c),*(undefined4 *)(iVar2 + 0x54),2);
    *(uint *)(this + 0x90) = uVar4;
    uVar4 = F_00be72a0(this,*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x3c),
                         *(undefined4 *)(iVar2 + 0x38),*(undefined4 *)(iVar2 + 0x40),2);
    *(uint *)(this + 0x94) = uVar4;
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
    if (*(int *)(this + 0x8c) != 0) {
      *(undefined4 *)(this + 0x9c) = 1;
    }
    if (*(int *)(this + 0x90) != 0) {
      *(uint *)(this + 0x9c) = *(uint *)(this + 0x9c) | 2;
    }
    if (uVar4 != 0) {
      *(uint *)(this + 0x9c) = *(uint *)(this + 0x9c) | 4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return uVar4;
}

/* ref: FUN_00be7710 */
uint F_00be7710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  
  uVar7 = F_00bd3f80(this);
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = F_00bd3f80(this);
    uVar7 = *(uint *)(uVar8 + 0x38);
    if (uVar7 != 0) {
      uVar8 = F_00c21a20(param_1,2);
      if (uVar8 != 0) {
        (*(float *)(gen_frame + 0x0)) = *(float *)(uVar8 + 0x100);
        (*(float *)(gen_frame + 0x4)) = *(float *)(uVar8 + 0x104);
        (*(float *)(gen_frame + 0x8)) = *(float *)(uVar8 + 0x108);
        *(float *)(uVar7 + 0x40) = (*(float *)(gen_frame + 0x0));
        *(float *)(uVar7 + 0x44) = (*(float *)(gen_frame + 0x4));
        *(float *)(uVar7 + 0x48) = (*(float *)(gen_frame + 0x8));
        *(uint *)(uVar7 + 0x34) = *(uint *)(uVar7 + 0x34) | 2;
      }
      uVar8 = F_00c21a20(param_1,3);
      if (uVar8 != 0) {
        uVar1 = *(undefined4 *)(uVar8 + 0x104);
        uVar2 = *(undefined4 *)(uVar8 + 0x108);
        *(undefined4 *)(uVar7 + 0x70) = *(undefined4 *)(uVar8 + 0x100);
        *(undefined4 *)(uVar7 + 0x74) = uVar1;
        *(undefined4 *)(uVar7 + 0x78) = uVar2;
      }
      uVar8 = F_00c21a20(param_1,4);
      if (uVar8 != 0) {
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(uVar8 + 0x100) - (float10)(*(float *)(gen_frame + 0x0)))));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(uVar8 + 0x104) - (float10)(*(float *)(gen_frame + 0x4)))));
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(uVar8 + 0x108) - (float10)(*(float *)(gen_frame + 0x8)))));
        F_0046f390(&(*(float *)(gen_frame + 0x10)));
        *(float *)(uVar7 + 0x80) = (*(float *)(gen_frame + 0x10));
        *(float *)(uVar7 + 0x84) = (*(float *)(gen_frame + 0x14));
        *(float *)(uVar7 + 0x88) = (*(float *)(gen_frame + 0x18));
      }
      fVar3 = ((float)GEN_TOF((((float10)*(float *)((int)param_1 + 0x34) * (float10)*(double *)&REFG(undefined, 0x1080228))
                     / (float10)*(double *)&REFG(undefined, 0x1080220))));
      (*(float *)(gen_frame + 0x24)) = fVar3;
      *(float *)(uVar7 + 0xd4) = ((float)GEN_TOF(-(float10)fVar3));
      fVar3 = ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x110cad8) / (float10)*(float *)((int)param_1 + 0x30))));
      (*(float *)(gen_frame + 0x24)) = fVar3;
      fVar9 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,5)));
      (*(float *)(gen_frame + 0x24)) = (float)fVar9;
      fVar9 = (float10)(float)fVar9;
      fVar3 = (float)(fVar9 + fVar9);
      (*(float *)(gen_frame + 0x2c)) = fVar3;
      fVar9 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
      if (*(int *)(REFG(int, 0x1370b90) + 0x90) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar4 = (float)fVar9;
      (*(float *)(gen_frame + 0x24)) = fVar4;
      fVar9 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
      if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar5 = (float)fVar9;
      (*(float *)(gen_frame + 0x28)) = fVar5;
      if ((float10)fVar4 / (float10)fVar5 < (float10)*(double *)&REFG(undefined, 0x10968c8)) {
        fVar3 = (float)((float10)fVar3 * (float10)REFG(double, 0x1088108));
        (*(float *)(gen_frame + 0x2c)) = fVar3;
        fVar9 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,4)));
        (*(float *)(gen_frame + 0x2c)) = (float)fVar9;
        fVar3 = ((float)GEN_TOF((((float10)(float)fVar9 * (float10)*(double *)&REFG(undefined, 0x10968a8)) /
                       (float10)*(double *)&REFG(undefined, 0x109cac0))));
        (*(float *)(gen_frame + 0x2c)) = fVar3;
        fVar3 = ((float)GEN_TOF((((float10)fVar3 * (float10)fVar5) / (float10)fVar4)));
        (*(float *)(gen_frame + 0x24)) = fVar3;
        fVar9 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,5)));
        (*(float *)(gen_frame + 0x24)) = (float)fVar9;
        fVar9 = (float10)(float)fVar9;
        (*(float *)(gen_frame + 0x2c)) = (float)(fVar9 + fVar9);
      }
      *((float *)GEN_TOP((*(int *)(uVar7 + 0xd0) + 0xa4))) = (*(float *)(gen_frame + 0x2c));
      if ((*(uint *)(uVar7 + 0xd8) >> 1 & 1) == 0) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar7 + 0xd0) + 0xa8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*(int *)(uVar7 + 0xd0) + 0xa8))), REFG(float, 0x1096cd4));
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar7 + 0x10) + 0x10))))(uVar7 + 0x10);
      *(undefined1 *)(uVar7 + 0x144) = 1;
      uVar8 = uVar7;
    }
  }
  return uVar8;
}

/* ref: FUN_00be7940 */
byte F_00be7940(unsigned int gen_a0)
{
  GEN_ENTER(0xbe7940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined * this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int * piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int * piVar10;
  int * piVar11;
  undefined4 uVar12;
  int local_c;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x20);
  piVar10 = *(int * PTR32 *)((int)this_00 + 0x1c);
  iVar7 = *(int *)((int)this + 0x24);
  bVar4 = false;
  bVar2 = false;
  bVar3 = false;
  local_c = 0;
  piVar11 = piVar10;
  if (0 < *((int *)GEN_TOP((*(int *)((int)this_00 + 0x18) + 8)))) {
    do {
      piVar6 = (int *)0x0;
      if (*piVar11 != -1) {
        piVar6 = piVar10 + *piVar11 * 100;
      }
      cVar1 = (char)piVar11[1];
      if (cVar1 == '\x01') {
        if (!bVar4) {
          bVar4 = true;
          uVar9 = (uint)(*(int *)(iVar7 + 0x30) == 0);
          uVar12 = 0;
          goto LAB_00be79e9;
        }
      }
      else if (cVar1 == '\x02') {
        if (!bVar3) {
          bVar3 = true;
          uVar9 = (uint)(*(int *)(iVar7 + 0x44) == 0);
          uVar12 = 2;
          goto LAB_00be79e9;
        }
      }
      else if ((cVar1 == '\x03') && (!bVar2)) {
        bVar2 = true;
        uVar9 = (uint)(*(int *)(iVar7 + 0x58) == 0);
        uVar12 = 1;
LAB_00be79e9: ;
        F_00be7440(this,piVar11,piVar6,uVar12,uVar9);
      }
      F_00c21cb0(this_00,local_c);
      local_c = local_c + 1;
      piVar11 = piVar11 + 100;
    } while (local_c < *((int *)GEN_TOP((*(int *)((int)this_00 + 0x18) + 8))));
  }
  F_00be7710(this,this_00);
  iVar7 = *(int *)((int)this + 0x74);
  if (iVar7 == 0) {
    piVar10 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar10 == (int *)0x0) {
      iVar7 = *(int *)((int)this + 0x6c);
      if (iVar7 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar7 = *(int *)((int)this + 0x6c);
        if (iVar7 != 0) goto LAB_00be7a4d;
      }
      else {
LAB_00be7a4d: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar7 + 4);
      }
      piVar10 = *(int * PTR32 *)((int)this + 0x70);
      if (piVar10 != (int *)0x0) goto LAB_00be7a5a;
    }
    else {
LAB_00be7a5a: ;
      uVar9 = ((code *)*(gen_code32 *)(*piVar10 + 100))(piVar10);
      *(uint *)((int)this + 0x74) = uVar9;
    }
    iVar7 = *(int *)((int)this + 0x74);
    iVar8 = 0;
    if (iVar7 == 0) goto LAB_00be7a78;
  }
  iVar8 = 0;
  if (*(int *)(iVar7 + 0xdc) != 0) {
    iVar8 = *((int *)GEN_TOP((*(int *)(iVar7 + 0xdc) + 4)));
  }
LAB_00be7a78: ;
  iVar7 = *(int *)(iVar8 + 0x38);
  bVar5 = 0;
  if (iVar7 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar7 + 0x10) + 0x10))))(iVar7 + 0x10);
    bVar5 = 1;
    if (*(char *)((int)this + 0x88) == '\x01') {
      *(undefined1 *)((int)this + 0x88) = 0;
      *(undefined1 *)(REFG(int, 0x1370c1c) + 5) = 1;
    }
  }
  return bVar5;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf29 */
uint F_00be7ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x9c) == 0) {
    uVar2 = F_00be7710(this,param_1);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
    if (this[0x88] == (undefined1)0x1) {
      this[0x88] = (undefined1)0x0;
      *(undefined1 *)(REFG(int, 0x1370c1c) + 5) = 1;
      return uVar2;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(this + 0x8c) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x8c) + 0x50))) + 0xac))) = uVar1;
    }
    uVar2 = *(uint *)(this + 0x90);
    if (uVar2 != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x50) + 0xac))) = uVar1;
    }
    if (*(int *)(this + 0x94) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x94) + 0x50))) + 0xac))) = uVar1;
    }
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf69 */
uint F_00be7b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  undefined * this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined * pCVar5;
  int * piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int * piVar10;
  int * piVar11;
  undefined4 uVar12;
  int local_c;
  
  iVar8 = 0;
  pCVar5 = this + 0x8c;
  do {
    if (*(int *)pCVar5 == param_1) break;
    iVar8 = iVar8 + 1;
    pCVar5 = pCVar5 + 4;
  } while (iVar8 < 3);
  pCVar5 = this + 0x98;
  *(uint *)pCVar5 = *(uint *)pCVar5 ^ 1 << ((byte)iVar8 & 0x1f);
  if ((*(uint *)pCVar5 != 0) && (*(uint *)(this + 0x98) != *(uint *)(this + 0x9c))) {
    return *(uint *)(this + 0x98);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x20);
  piVar10 = *(int * PTR32 *)((int)this_00 + 0x1c);
  iVar8 = *(int *)(this + 0x24);
  bVar4 = false;
  bVar2 = false;
  bVar3 = false;
  local_c = 0;
  piVar11 = piVar10;
  if (0 < *((int *)GEN_TOP((*(int *)((int)this_00 + 0x18) + 8)))) {
    do {
      piVar6 = (int *)0x0;
      if (*piVar11 != -1) {
        piVar6 = piVar10 + *piVar11 * 100;
      }
      cVar1 = (char)piVar11[1];
      if (cVar1 == '\x01') {
        if (!bVar4) {
          bVar4 = true;
          uVar9 = (uint)(*(int *)(iVar8 + 0x30) == 0);
          uVar12 = 0;
          goto LAB_00be7c20;
        }
      }
      else if (cVar1 == '\x02') {
        if (!bVar3) {
          bVar3 = true;
          uVar9 = (uint)(*(int *)(iVar8 + 0x44) == 0);
          uVar12 = 2;
          goto LAB_00be7c20;
        }
      }
      else if ((cVar1 == '\x03') && (!bVar2)) {
        bVar2 = true;
        uVar9 = (uint)(*(int *)(iVar8 + 0x58) == 0);
        uVar12 = 1;
LAB_00be7c20: ;
        F_00be7440(this,piVar11,piVar6,uVar12,uVar9);
      }
      F_00c21cb0(this_00,local_c);
      local_c = local_c + 1;
      piVar11 = piVar11 + 100;
    } while (local_c < *((int *)GEN_TOP((*(int *)((int)this_00 + 0x18) + 8))));
  }
  F_00be7710(this,this_00);
  iVar8 = *(int *)(this + 0x74);
  if (iVar8 == 0) {
    piVar10 = *(int * PTR32 *)(this + 0x70);
    if (piVar10 == (int *)0x0) {
      iVar8 = *(int *)(this + 0x6c);
      if (iVar8 == 0) {
        if (*(int *)(this + 4) != 0) {
          *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
        }
        iVar8 = *(int *)(this + 0x6c);
        if (iVar8 != 0) goto LAB_00be7c86;
      }
      else {
LAB_00be7c86: ;
        *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar8 + 4);
      }
      piVar10 = *(int * PTR32 *)(this + 0x70);
      if (piVar10 != (int *)0x0) goto LAB_00be7c93;
    }
    else {
LAB_00be7c93: ;
      uVar9 = ((code *)*(gen_code32 *)(*piVar10 + 100))(piVar10);
      *(uint *)(this + 0x74) = uVar9;
    }
    iVar8 = *(int *)(this + 0x74);
    iVar7 = 0;
    if (iVar8 == 0) goto LAB_00be7cb1;
  }
  iVar7 = 0;
  if (*(int *)(iVar8 + 0xdc) != 0) {
    iVar7 = *((int *)GEN_TOP((*(int *)(iVar8 + 0xdc) + 4)));
  }
LAB_00be7cb1: ;
  iVar8 = *(int *)(iVar7 + 0x38);
  uVar9 = 0;
  if ((iVar8 != 0) &&
     (uVar9 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar8 + 0x10) + 0x10))))(iVar8 + 0x10),
     this[0x88] == (undefined1)0x1)) {
    this[0x88] = (undefined1)0x0;
    *(undefined1 *)(REFG(int, 0x1370c1c) + 5) = 1;
  }
  return uVar9;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf0 */
uint F_00be7cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00be7380(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be7d20 */
float10 F_00be7d20(float gen_a0)
{
  GEN_ENTER(0xbe7d20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Control::UIControl::vf2 */
unsigned int F_00be7d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbe7d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00be7d50 */
uint F_00be7d50(unsigned int gen_a0)
{
  GEN_ENTER(0xbe7d50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1);
    if (uVar1 != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1)));
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      return uVar1;
    }
  }
  return 0x110cb62;
}

/* ref: FUN_00be7d90 */
byte F_00be7d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbe7d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  if (REFG(void * PTR32, 0x1370c0c) == (undefined *)0x0) {
    return 0;
  }
  bVar2 = F_00410ab0(REFG(void * PTR32, 0x1370c0c),&(*(int *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x0)));
  if ((bVar2 == 0) ||
     (bVar2 = F_00410ac0(REFG(void * PTR32, 0x1370c0c),&(*(float *)(gen_frame + 0x10)),&(*(int *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0x18))), bVar2 == 0))
  goto LAB_00be7f4b;
  iVar3 = (int)gen_fl2bits((*(float *)(gen_frame + 0x14))) - (int)gen_fl2bits((*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(iVar3);
  fVar5 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0xc)) = (float)fVar5;
  fVar5 = (float10)(float)fVar5;
  fVar6 = (float10)(*(int *)(gen_frame + 0x8));
  if ((*(int *)(gen_frame + 0x8)) < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *param_2 = (float)(fVar5 / fVar6);
  iVar3 = (*(int *)(gen_frame + 0x18)) - (*(int *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(iVar3);
  fVar6 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0xc)) = (float)fVar6;
  fVar6 = (float10)(float)fVar6;
  fVar7 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x0)));
  if ((int)gen_fl2bits((*(float *)(gen_frame + 0x0))) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *param_3 = (float)(fVar6 / fVar7);
  fVar7 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
  if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = *(float *)(REFG(int, 0x1370b90) + 0x90);
  (*(float *)(gen_frame + 0xc)) = (float)fVar7;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar8 = (float10)(int)gen_fl2bits(fVar1);
  if ((int)gen_fl2bits(fVar1) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x0)) = (float)fVar8;
  fVar9 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar10 = (float10)(float)fVar8;
  fVar8 = (float10)0;
  if ((*(float *)(gen_frame + 0x10)) == 0.0) {
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x14));
    fVar11 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x14)));
    if ((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) < 0) {
      fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar11 = fVar10 - fVar11;
    if ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar8)) && !(fVar11 <= fVar8)) goto LAB_00be7ebc;
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1090718);
  }
  else {
LAB_00be7ebc: ;
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x10));
    fVar11 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x10)));
    if ((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) < 0) {
      fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar5 = (fVar11 + (fVar5 / fVar9) * (float10)*(double *)&REFG(undefined, 0x1090718)) / (fVar10 / fVar9);
  }
  *param_5 = (float)fVar5;
  fVar5 = (float10)(float)fVar7;
  if ((*(int *)(gen_frame + 0x4)) == 0) {
    fVar7 = (float10)(*(int *)(gen_frame + 0x18));
    if ((*(int *)(gen_frame + 0x18)) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if (!(fVar8 < fVar5 - fVar7)) {
      *(float *)param_4 = (float)*(double *)&REFG(undefined, 0x110cb68);
      goto LAB_00be7f4b;
    }
  }
  fVar7 = (float10)(*(int *)(gen_frame + 0x4));
  if ((*(int *)(gen_frame + 0x4)) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)param_4 =
       ((float)GEN_TOF(((fVar7 + (fVar6 / fVar9) * (float10)*(double *)&REFG(undefined, 0x110cb68)) / (fVar5 / fVar9))));
LAB_00be7f4b: ;
  fVar5 = (float10)*param_2;
  bVar4 = GEN_ISNAN((float10)*(float *)(param_1 + 0x1c)) || GEN_ISNAN(fVar5);
  if ((((bVar4 != (bVar4 || (float10)*(float *)(param_1 + 0x1c) == fVar5)) &&
       (bVar4 = GEN_ISNAN((float10)*(float *)(param_1 + 0x20)) || GEN_ISNAN((float10)*param_3),
       bVar4 != (bVar4 || (float10)*(float *)(param_1 + 0x20) == (float10)*param_3))) &&
      (bVar4 = GEN_ISNAN((float10)*(float *)(param_1 + 0x24)) || GEN_ISNAN((float10)*param_5),
      bVar4 != (bVar4 || (float10)*(float *)(param_1 + 0x24) == (float10)*param_5))) &&
     (bVar4 = GEN_ISNAN((float10)*(float *)(param_1 + 0x28)) || GEN_ISNAN((float10)*(float *)param_4),
     bVar4 != (bVar4 || (float10)*(float *)(param_1 + 0x28) == (float10)*(float *)param_4))) {
    return 0;
  }
  *(float *)(param_1 + 0x1c) = *param_2;
  *(float *)(param_1 + 0x20) = *param_3;
  *(float *)(param_1 + 0x24) = *param_5;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)param_4;
  return 1;
}

/* ref: FUN_00be7fc0 */
byte F_00be7fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbe7fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  float10 fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int local_1c;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar7 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
  if (*(int *)(REFG(int, 0x1370b90) + 0x90) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  local_c = (float)fVar7;
  fVar7 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
  if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  local_10 = (float)fVar7;
  fVar7 = (float10)local_c;
  local_8 = 0.0;
  local_14 = 0.0;
  fVar8 = (float10)local_10;
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10968c8);
  if (fVar9 < fVar7 / fVar8) {
    local_c = (float)(fVar9 * fVar8);
    local_8 = ((float)GEN_TOF(((fVar7 - (float10)local_c) * (float10)REFG(double, 0x1088108))));
  }
  else {
    local_10 = (float)(fVar7 / fVar9);
    local_14 = ((float)GEN_TOF(((fVar8 - (float10)local_10) * (float10)REFG(double, 0x1088108))));
  }
  local_1c = (int)(longlong)TRUNC((float10)local_8);
  iVar2 = local_1c;
  local_1c = (int)(longlong)TRUNC((float10)local_14);
  iVar3 = local_1c;
  local_1c = (int)(longlong)TRUNC((float10)local_c + (float10)local_8);
  iVar4 = local_1c;
  iVar5 = local_1c - iVar2;
  local_1c = (int)(longlong)TRUNC((float10)local_14 + (float10)local_10);
  fVar9 = (float10)iVar5;
  if (iVar5 < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)param_2 = (float)((float10)(float)fVar9 / (float10)*(double *)&REFG(undefined, 0x10c5fd0));
  fVar10 = (float10)(local_1c - iVar3);
  if (local_1c - iVar3 < 0) {
    fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *param_3 = (float)((float10)(float)fVar10 / (float10)*(double *)&REFG(undefined, 0x110cb70));
  fVar11 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar1 = (float10)0;
  if (iVar2 == 0) {
    fVar12 = (float10)iVar4;
    if (iVar4 < 0) {
      fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if ((!GEN_ISNAN(fVar7 - fVar12) && !GEN_ISNAN(fVar1)) && !(fVar7 - fVar12 <= fVar1)) goto LAB_00be814b;
    fVar7 = (float10)*(double *)&REFG(undefined, 0x1090718);
  }
  else {
LAB_00be814b: ;
    fVar12 = (float10)iVar2;
    if (iVar2 < 0) {
      fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar7 = (fVar12 + ((float10)(float)fVar9 / fVar11) * (float10)*(double *)&REFG(undefined, 0x1090718)) /
            (fVar7 / fVar11);
  }
  *(float *)param_5 = (float)fVar7;
  if (iVar3 == 0) {
    fVar7 = (float10)local_1c;
    if (local_1c < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if (!(fVar1 < fVar8 - fVar7)) {
      fVar7 = (float10)*(double *)&REFG(undefined, 0x110cb68);
      goto LAB_00be81c6;
    }
  }
  fVar7 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar7 = (fVar7 + ((float10)(float)fVar10 / fVar11) * (float10)*(double *)&REFG(undefined, 0x110cb68)) /
          (fVar8 / fVar11);
LAB_00be81c6: ;
  fVar8 = (float10)(float)fVar7;
  *param_4 = (float)fVar7;
  fVar7 = (float10)*(float *)param_2;
  bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x1c)) || GEN_ISNAN(fVar7);
  if ((((bVar6 != (bVar6 || (float10)*(float *)(param_1 + 0x1c) == fVar7)) &&
       (bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x20)) || GEN_ISNAN((float10)*param_3),
       bVar6 != (bVar6 || (float10)*(float *)(param_1 + 0x20) == (float10)*param_3))) &&
      (bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x24)) || GEN_ISNAN((float10)*(float *)param_5),
      bVar6 != (bVar6 || (float10)*(float *)(param_1 + 0x24) == (float10)*(float *)param_5))) &&
     (bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x28)) || GEN_ISNAN(fVar8),
     bVar6 != (bVar6 || (float10)*(float *)(param_1 + 0x28) == fVar8))) {
    return 0;
  }
  *(float *)(param_1 + 0x1c) = *(float *)param_2;
  *(float *)(param_1 + 0x20) = *param_3;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)param_5;
  *(float *)(param_1 + 0x28) = *param_4;
  return 1;
}

