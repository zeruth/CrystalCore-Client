#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_007aca30 */
uint F_007aca30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7aca30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint in_EAX = 0;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint3 uVar7;
  byte * pbVar8;
  uint uVar9;
  undefined1 * this_00;
  bool bVar10;
  float10 fVar11;
  
  if (*(int *)(*(undefined * PTR32 *)&gen_args[0]) == 0) {
    return in_EAX;
  }
  if ((*(uint *)&gen_args[3]) < 2) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  else {
    fVar11 = (float10)(int)(*(uint *)&gen_args[3]);
    if ((int)(*(uint *)&gen_args[3]) < 0) {
      fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (float)(fVar11 / (float10)*(double *)&REFG(undefined, 0x1088118));
  }
  uVar9 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) & 0xffff;
  (*(uint *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[3]), 1, 3),(char)(*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) >> 0x11)) & 0xffffff01;
  if ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0) {
    pbVar8 = &REFG(undefined1, 0x10be9df);
    pbVar3 = (*(byte * PTR32 *)&gen_args[2]);
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_007acab0: ;
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_007acab5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_007acab0;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_007acab5: ;
    if ((iVar4 != 0) && (uVar9 - 1 < 4)) {
      uVar5 = 1;
      goto LAB_007acaca;
    }
  }
  uVar5 = 0;
LAB_007acaca: ;
  *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (char)uVar5;
  if ((char)uVar5 == '\0') {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar9 != 9) - 1 & (uint)(*(byte * PTR32 *)&gen_args[2]);
  }
  else {
    (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[4]);
    piVar2 = *(int * PTR32 *)((*(int *)&gen_args[1]) + 0x38);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    (*(byte * PTR32 *)(gen_frame + 0x8)) = (*(byte * PTR32 *)&gen_args[2]);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    pbVar3 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x14)),0x2a,2,&(*(undefined4 *)(gen_frame + 0x4)))));
    if ((*pbVar3 & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(pbVar3 + 4);
    }
    F_0058c140(*(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),uVar6);
    F_005a2670(((undefined1 *)(gen_frame + 0x14)));
    uVar9 = F_007ac7d0((*(undefined * PTR32 *)&gen_args[0]));
    uVar5 = F_005647e0(*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]));
    F_0057e2a0(*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),(short)(*(undefined * PTR32 *)&gen_args[0]),(short)(*(byte * PTR32 *)&gen_args[2]),uVar5,uVar9);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
    this_00 = ((undefined1 *)(gen_frame + 0x14));
    iVar4 = 1;
    do {
      this_00 = this_00 + -8;
      uVar5 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  uVar7 = (uint3)(uVar5 >> 8);
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == '\0') || ((char)(*(undefined4 *)&gen_args[5]) == '\0')) {
    iVar4 = (uint)uVar7 << 8;
  }
  else {
    iVar4 = CONCAT31(uVar7,1);
  }
  F_0056f120(*(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),iVar4);
  uVar9 = F_0057e1f0(*(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[3]));
  return uVar9;
}

/* ref: FUN_007acc60 */
uint F_007acc60(unsigned int gen_a0)
{
  GEN_ENTER(0x7acc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10cd248));
  uVar1 = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x74));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  return uVar1;
}

/* ref: FUN_007acc90 */
uint F_007acc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7acc90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  *(int *)(in_ecx + 0x70) = param_2;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x94);
    *(uint *)(in_ecx + 8) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007accb0 */
uint F_007accb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7accb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((*(int *)((int)this + 0x74) != 0) && (param_1 < *(ushort *)((int)this + 0x78))) {
    return *(int *)((int)this + 0x74) + param_1 * 0x1c;
  }
  return 0;
}

/* ref: FUN_007acce0 */
uint F_007acce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7acce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  
  if (((*(int *)((int)this + 0x74) != 0) && (param_1 < *(ushort *)((int)this + 0x78))) &&
     (puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x74) + param_1 * 0x1c))), puVar1 != (uint *)0x0)) {
    return *puVar1;
  }
  return 0;
}

/* ref: FUN_007acd20 */
unsigned int F_007acd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7acd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  undefined * this;
  undefined4 * this_00;
  int iVar2;
  int iVar3;
  uint * puVar4;
  uint * puVar5;
  
  if ((*(int *)((*(int *)&gen_args[0]) + 0x70) != 0) && (iVar3 = 0, 0 < (*(int *)&gen_args[2]))) {
    iVar2 = (*(uint *)&gen_args[1]) * 0x1c;
    do {
      if ((((*(int *)((*(int *)&gen_args[0]) + 0x74) != 0) && ((*(uint *)&gen_args[1]) + iVar3 < (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x78))
           ) && (this_00 = ((undefined4 *)GEN_TOP((iVar2 + *(int *)((*(int *)&gen_args[0]) + 0x74)))),
                this_00 != (undefined4 *)0x0)) &&
         ((uVar1 = F_005644f0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70),(*(uint *)&gen_args[3]),iVar3), uVar1 != 0 &&
          (F_007ac8e0(this_00,(*(uint *)&gen_args[3]),uVar1), (*(uint *)&gen_args[3]) == 1)))) {
        uVar1 = (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x7e);
        this = (undefined *)F_00564700(*this_00);
        F_0059d640(this,uVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar3 < (*(int *)&gen_args[2]));
    if (((0 < (*(int *)&gen_args[2])) && (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0x74) != (int *)0x0)) &&
       ((*(short *)((*(int *)&gen_args[0]) + 0x78) != 0 && (iVar3 = **(int * PTR32 *)((*(int *)&gen_args[0]) + 0x74), iVar3 != 0)))) {
      puVar5 = &(*(uint *)&gen_args[1]);
      puVar4 = &(*(uint *)&gen_args[3]);
      uVar1 = F_00564700(iVar3);
      F_0055a730(uVar1,puVar4,puVar5);
      *(uint *)((*(int *)&gen_args[0]) + 0x2c) = (*(uint *)&gen_args[3]);
      *(uint *)((*(int *)&gen_args[0]) + 0x30) = (*(uint *)&gen_args[1]);
    }
  }
  return 0;
}

/* ref: FUN_007ace00 */
unsigned int F_007ace00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7ace00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[10];
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
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) != (undefined *)0x0) {
    F_005aefb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[9]));
  }
  return 0;
}

/* ref: FUN_007ace50 */
uint F_007ace50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ace50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((int)param_1 < 4) {
    *(undefined2 *)((int)this + param_1 * 2 + 0x7c) = (undefined2)param_2;
  }
  return param_1;
}

/* ref: FUN_007ace70 */
uint F_007ace70(unsigned int gen_a0)
{
  GEN_ENTER(0x7ace70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  int local_10;
  uint local_c;
  float local_8;
  
  local_c = 0;
  if (*(short *)((int)this + 0x38) != 0) {
    local_10 = 0;
    do {
      if ((((*(int *)((int)this + 0x74) != 0) && (local_c < *(ushort *)((int)this + 0x78))) &&
          (piVar9 = ((int *)GEN_TOP((local_10 + *(int *)((int)this + 0x74)))), piVar9 != (int *)0x0)) &&
         (*piVar9 != 0)) {
        uVar7 = F_00564700(*piVar9);
        sVar3 = *(short *)((int)this + 0x34);
        fVar10 = F_0055a750(uVar7);
        sVar4 = *(short *)((int)this + 0x36);
        fVar11 = F_0055a760(uVar7);
        uVar8 = F_0055a2d0(uVar7);
        if ((char)uVar8 != '\0') {
          local_8 = REFG(float, 0x1087f04);
          fVar1 = gen_bits2f(piVar9[2]);
          if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
              ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
            local_8 = ((float)GEN_TOF((((float10)*(float *)((int)this + 0x20) * (float10)fVar1) *
                             (float10)*(float *)((int)this + 0x1c))));
          }
          F_00559da0(uVar7,((float)GEN_TOF((((float10)(int)(short)piVar9[5] -
                                     (float10)*(float *)((int)this + 0x14)) *
                                     (float10)*(float *)((int)this + 0x20) +
                                    (float10)(float)((float10)(int)sVar3 - fVar10)))),
                       ((float)GEN_TOF(((float10)(float)((float10)(int)sVar4 - fVar11) +
                              (float10)*(float *)((int)this + 0x20) *
                              ((float10)(int)*(short *)((int)piVar9 + 0x16) -
                              (float10)*(float *)((int)this + 0x18))))));
          F_00568210(uVar7,local_8,local_8);
        }
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x1c;
    } while ((int)local_c < (int)(uint)*(ushort *)((int)this + 0x38));
  }
  F_00568350(*(undefined4 *)((int)this + 4),
               ((float)GEN_TOF(-(float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x24) +
                                       (float10)*(double *)&REFG(undefined, 0x1080220)))))));
  F_00568350(*(undefined4 *)((int)this + 8),
               ((float)GEN_TOF((-(float10)*(float *)((int)this + 0x28) - (float10)*(double *)&REFG(undefined, 0x10947e8)))));
  sVar3 = *(short *)((int)this + 0x34);
  fVar10 = F_0055a750(*(undefined4 *)((int)this + 8));
  sVar4 = *(short *)((int)this + 0x36);
  fVar11 = F_0055a760(*(undefined4 *)((int)this + 8));
  sVar5 = *(short *)((int)this + 0x34);
  fVar12 = F_0055a750(*(undefined4 *)((int)this + 4));
  sVar6 = *(short *)((int)this + 0x36);
  fVar13 = F_0055a760(*(undefined4 *)((int)this + 4));
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) *
                 ((float10)*(float *)((int)this + 0xc) - (float10)*(float *)((int)this + 0x14)))));
  fVar2 = ((float)GEN_TOF((((float10)*(float *)((int)this + 0x10) - (float10)*(float *)((int)this + 0x18)) *
                 (float10)*(float *)((int)this + 0x20))));
  F_00559da0(*(undefined4 *)((int)this + 4),
               ((float)GEN_TOF(((float10)fVar1 + (float10)(float)((float10)(int)sVar5 - fVar12)))),
               ((float)GEN_TOF(((float10)fVar2 + (float10)(float)((float10)(int)sVar6 - fVar13)))));
  uVar7 = F_00559da0(*(undefined4 *)((int)this + 8),
                       ((float)GEN_TOF(((float10)fVar1 + (float10)(float)((float10)(int)sVar3 - fVar10)))),
                       ((float)GEN_TOF(((float10)fVar2 + (float10)(float)((float10)(int)sVar4 - fVar11)))));
  return uVar7;
}

/* ref: FUN_007ad100 */
byte F_007ad100(unsigned int gen_a0)
{
  GEN_ENTER(0x7ad100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  fVar1 = *(float *)((int)this + 0x68);
  if (((float10)fVar1 < (float10)*(float *)((int)this + 0x40)) ||
     (fVar1 = ((float)GEN_TOF(-(float10)fVar1)), (float10)*(float *)((int)this + 0x40) < (float10)fVar1)) {
    *(float *)((int)this + 0x40) = fVar1;
  }
  fVar1 = *(float *)((int)this + 0x6c);
  if (((float10)fVar1 < (float10)*(float *)((int)this + 0x44)) ||
     (fVar1 = ((float)GEN_TOF(-(float10)fVar1)), (float10)*(float *)((int)this + 0x44) < (float10)fVar1)) {
    *(float *)((int)this + 0x44) = fVar1;
  }
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x44);
  if (*(int *)((int)this + 0x70) != 0) {
    F_0057e130(*(int *)((int)this + 0x70),*(float *)((int)this + 0x40),
                 *(float *)((int)this + 0x44));
  }
  return 1;
}

/* ref: FUN_007ad1b0 */
uint F_007ad1b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7ad1b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)*(float *)(param_1 + 0x3c);
  fVar5 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5);
  bVar3 = bVar2 || fVar4 == fVar5;
  if (bVar2 == bVar3) {
    *(float *)(param_1 + 0x3c) = param_2;
    *(float *)(param_1 + 0x1c) = param_2;
    if (*(int *)(param_1 + 0x70) != 0) {
      uVar1 = F_0056f070(*(int *)(param_1 + 0x70),param_2);
      return uVar1;
    }
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),
                  CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar5 <= fVar4),(char)in_EAX));
}

/* ref: FUN_007ad1f0 */
unsigned int F_007ad1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ad1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  float10 fVar2;
  
  fVar2 = (float10)*(float *)((int)this + 0x48);
  bVar1 = GEN_ISNAN((float10)*(float *)((int)this + 0x20)) || GEN_ISNAN(fVar2);
  if (bVar1 == (bVar1 || (float10)*(float *)((int)this + 0x20) == fVar2)) {
    *(float *)((int)this + 0x20) = *(float *)((int)this + 0x48);
  }
  if (*(int *)((int)this + 0x70) != 0) {
    F_0057e0a0(*(int *)((int)this + 0x70),*(float *)((int)this + 0x48));
  }
  return 0;
}

/* ref: FUN_007ad230 */
unsigned int F_007ad230(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ad230u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x58) = param_2;
  *(float *)(in_ecx + 0x5c) = param_3;
  return 0;
}

/* ref: FUN_007ad250 */
byte F_007ad250(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ad250u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  *(undefined4 *)((int)param_1 + 0x60) = *(undefined4 *)((int)param_1 + 0x58);
  *(float *)((int)param_1 + 0x40) = param_2;
  *(undefined4 *)((int)param_1 + 100) = *(undefined4 *)((int)param_1 + 0x5c);
  *(float *)((int)param_1 + 0x44) = param_3;
  bVar1 = F_007ad100(param_1);
  return bVar1;
}

/* ref: FUN_007ad280 */
unsigned int F_007ad280(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ad280u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x50) = param_2;
  *(float *)(in_ecx + 0x54) = param_3;
  return 0;
}

/* ref: FUN_007ad2a0 */
unsigned int F_007ad2a0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ad2a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(in_ecx + 0x50);
  *(float *)(in_ecx + 0x50) = param_2;
  fVar2 = *(float *)(in_ecx + 0x54);
  *(float *)(in_ecx + 0x54) = param_3;
  *(float *)(in_ecx + 0x40) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x40) -
              (float10)(float)((float10)param_2 - (float10)fVar1))));
  *(float *)(in_ecx + 0x44) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x44) -
              (float10)(float)((float10)param_3 - (float10)fVar2))));
  return 0;
}

/* ref: FUN_007ad300 */
unsigned int F_007ad300(unsigned int gen_a0)
{
  GEN_ENTER(0x7ad300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x48) *
                                  (float10)*(double *)&REFG(undefined, 0x10ac2d0)))) *
                 (float10)*(float *)(in_ecx + 0x4c))));
  *(float *)(in_ecx + 0x68) = fVar1;
  *(float *)(in_ecx + 0x6c) = fVar1;
  return 0;
}

/* ref: FUN_007ad330 */
unsigned int F_007ad330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x70) != (undefined *)0x0) {
    F_00592ee0(*(undefined * PTR32 *)((int)this + 0x70),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_007ad350 */
unsigned int F_007ad350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ad350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x70) != (undefined *)0x0) {
    F_00592fc0(*(undefined * PTR32 *)((int)this + 0x70),param_1,param_2,(uint)(param_3 != 0));
  }
  return 0;
}

/* ref: Client::UI2::AddonAreaMap::vf41 */
byte F_007ad390(unsigned int gen_a0)
{
  GEN_ENTER(0x7ad390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"AreaMap",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonAreaMap::vf7 */
uint F_007ad3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_005a9130(this,10);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonAreaMap::vf25 */
uint F_007ad3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ad3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  uint uVar2;
  int * piVar3;
  
  F_00587960(this,(uint)(byte)this[0x4f9],0);
  if (this[0x4fa] != (undefined1)0x0) {
    uVar2 = F_0055dcb0();
    piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)this[0x4fa]);
    if (piVar3 != (int *)0x0) {
      if (((*(byte *)((int)piVar3 + 0xf9) & 4) == 0) && ((*(byte *)(piVar3 + 0x3e) & 1) == 0)) {
        uVar2 = F_0055dcb0();
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14) + 0x3c))))(*(int * PTR32 *)(uVar2 + 0x14));
        if ((char)uVar2 != '\0') {
          ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3,0);
        }
      }
      else {
        uVar2 = (uint)piVar3[0x3d] >> 0x14 & 0xf;
        if ((uVar2 == 3) || (uVar2 == 2)) {
          pcVar1 = *(gen_code32 *)(*piVar3 + 0x8c);
          *(byte *)(piVar3 + 0x3e) = *(byte *)(piVar3 + 0x3e) & 0x7f;
          (*pcVar1)(piVar3);
        }
      }
    }
    this[0x4fa] = (undefined1)0x0;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: Client::UI2::AddonAreaMap::vf51 */
uint F_007ad4b0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ad4b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1,(int)param_2 & 0xffff,(int)param_3 & 0xffff);
  param_1[0x120] = (int)gen_fl2bits(param_2);
  param_1[0x121] = (int)gen_fl2bits(param_3);
  return uVar1;
}

/* ref: Client::UI2::AddonAreaMap::vf56 */
unsigned int F_007ad4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ad4f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x4f3) = 1;
  return 0;
}

/* ref: Client::UI2::AddonAreaMap::vf57 */
uint F_007ad500(unsigned int gen_a0)
{
  GEN_ENTER(0x7ad500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  this[0x4f3] = (undefined1)0x0;
  bVar1 = F_0055a300(*(undefined * PTR32 *)(this + 0x1ec),0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007ad520 */
uint F_007ad520(unsigned int gen_a0)
{
  GEN_ENTER(0x7ad520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007ad570 */
uint F_007ad570(unsigned int gen_a0)
{
  GEN_ENTER(0x7ad570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 5;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007ad5a0 */
uint F_007ad5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007ad5f0 */
uint F_007ad5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ad5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  uint uVar2;
  undefined * this_00;
  undefined * pvVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined1 *)((int)this + 0x4ec) = 1;
  fVar4 = F_0055df60(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,((short *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,((ushort *)(gen_frame + 0x10)),((ushort *)(gen_frame + 0xc)),0);
  uVar2 = F_0055dcb0();
  sVar1 = *((short *)GEN_TOP((*(int *)(uVar2 + 0x18) + 0xc5e)));
  *(float *)((int)this + 0x470) =
       (float)(int)(((int)*((short *)GEN_TOP((*(int *)(uVar2 + 0x18) + 0xc5c))) - (uint)((ushort *)(gen_frame + 0x10))[0]) -
                   (int)((short *)(gen_frame + 0x18))[0]);
  *(float *)((int)this + 0x474) = (float)(int)(((int)sVar1 - (uint)((ushort *)(gen_frame + 0xc))[0]) - (int)((short *)(gen_frame + 0x14))[0]);
  uVar2 = F_0055dcb0();
  fVar5 = (float10)*(int *)(uVar2 + 0x234);
  if (*(int *)(uVar2 + 0x234) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)((int)this + 0x478) =
       ((float)GEN_TOF(((fVar5 - (float10)(int)((short *)(gen_frame + 0x18))[0]) * (float10)(float)((float10)1 / fVar4))));
  uVar2 = F_0055dcb0();
  fVar5 = (float10)*(int *)(uVar2 + 0x238);
  if (*(int *)(uVar2 + 0x238) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0xf;
  uVar6 = 4;
  *(float *)((int)this + 0x47c) =
       ((float)GEN_TOF(((fVar5 - (float10)(int)((short *)(gen_frame + 0x14))[0]) * (float10)(float)((float10)1 / fVar4))));
  pvVar3 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_0056a3d0(this_00,uVar6,uVar7,pvVar3,uVar8,uVar9);
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0xd;
  uVar6 = 5;
  pvVar3 = (undefined *)F_0055dcb0();
  uVar2 = F_0056a3d0(pvVar3,uVar6,uVar7,this,uVar8,uVar9);
  return uVar2;
}

/* ref: FUN_007ad720 */
uint F_007ad720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  if ((short)param_1 == 6) {
    uVar1 = F_0055dcb0();
    F_005aa060((undefined *)(uVar1 + 0x20c),9,0);
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x21b) = 1;
    return uVar1;
  }
  if (((short)param_1 == 7) && (*(char *)((int)this + 0x4ec) == '\0')) {
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x21b) = 0;
    uVar1 = F_0055dcb0();
    uVar1 = F_005aa060((undefined *)(uVar1 + 0x20c),0,0);
  }
  return uVar1;
}

/* ref: FUN_007ad790 */
uint F_007ad790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 < 0x10) &&
     (uVar1 = *(uint *)((int)this + uVar1 * 4 + 0x298), *(uint *)((int)this + 0x490) != uVar1)) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    *(uint *)((int)this + 0x490) = uVar1;
    *(undefined4 *)((int)this + 0x494) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007ad810 */
uint F_007ad810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(uint *)(param_1 + 8);
  if (*(uint *)((int)this + 0x494) != uVar1) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    *(uint *)((int)this + 0x494) = uVar1;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007ad870 */
uint F_007ad870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ad870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  byte * pbVar7;
  bool bVar8;
  
  piVar6 = param_1;
  if ((((param_1 != (int *)0xffffffff) && (*(int *)((int)this + 0x278) != 0)) &&
      (param_1 < (int *)(uint)*(ushort *)((int)this + 0x27c))) &&
     ((piVar6 = ((int *)GEN_TOP((*(int *)((int)this + 0x278) + (int)((int)(uintptr_t)param_1) * 0x1c))), piVar6 != (int *)0x0 &&
      (*piVar6 != 0)))) {
    pbVar2 = (byte *)piVar6[1];
    if (pbVar2 != (byte *)0x0) {
      pbVar7 = &REFG(undefined1, 0x10be9fb);
      pbVar3 = pbVar2;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_007ad8f0: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_007ad8f5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_007ad8f0;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_007ad8f5: ;
      piVar6 = (int *)0x0;
      if (iVar4 != 0) {
        pbVar3 = (byte *)((int)this + 0x370);
        pbVar7 = pbVar2;
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_007ad924: ;
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_007ad929;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_007ad924;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_007ad929: ;
        if (iVar4 == 0) {
          return 0;
        }
        uVar5 = F_00c49908((byte *)((int)this + 0x370),0x100,pbVar2);
        return uVar5;
      }
    }
    *(undefined1 *)((int)this + 0x370) = 0;
  }
  return (uint)piVar6;
}

/* ref: FUN_007ad950 */
uint F_007ad950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ad950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  code * pcVar7;
  undefined4 uVar8;
  
  uVar3 = param_1;
  if (param_1 != 0xffffffff) {
    if ((*(int *)((int)this + 0x278) == 0) || (*(ushort *)((int)this + 0x27c) <= param_1)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x278) + param_1 * 0x1c)));
    }
    uVar3 = F_00564760(*puVar5);
    (*(uint *)(gen_frame + 0x18)) = uVar3;
    if (*(char *)((int)this + 0x4f7) != '\0') {
      (*(uint *)(gen_frame + 0x18)) = *(uint *)((int)this + 0x200);
    }
    uVar3 = F_0055dcb0();
    if ((*(uint *)(uVar3 + 0xf8) == (*(uint *)(gen_frame + 0x18))) || ((char)param_2 != '\0')) {
      F_007ad870(this,param_1);
      F_00560760(((int *)(gen_frame + 0xc)));
      cVar1 = *(char *)((int)this + 0x4f7);
      ((int *)(gen_frame + 0xc))[0] = (int)this + 0x370;
      piVar6 = ((int *)(gen_frame + 0xc));
      if (cVar1 == '\0') {
        bVar2 = *(byte *)((int)this + 0x13a);
        uVar8 = 1;
        pcVar7 = (code *)0x0;
        uVar4 = F_00564760(*puVar5);
      }
      else {
        uVar4 = *(uint *)((int)this + 0x200);
        bVar2 = *(byte *)((int)this + 0x13a);
        uVar8 = 0;
        pcVar7 = ((code *)REFP(0x90a770));
      }
      uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),2,(uint)bVar2,uVar4,piVar6,pcVar7,uVar8);
    }
  }
  return uVar3;
}

/* ref: FUN_007ada30 */
unsigned int F_007ada30(unsigned int gen_a0)
{
  GEN_ENTER(0x7ada30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  float10 fVar5;
  
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x180));
    uVar3 = F_0055a030(*(undefined4 *)((int)this + 0x180));
    bVar1 = F_0056c7e0();
    if (bVar1 == 0) {
      uVar4 = F_0055a030(*(undefined4 *)((int)this + 0x1e0));
      fVar5 = (float10)uVar3 - (float10)uVar4 * (float10)REFG(double, 0x1088108);
    }
    else {
      uVar4 = F_0055a030(*(undefined4 *)((int)this + 0x1e0));
      fVar5 = (float10)uVar3 - (float10)uVar4;
    }
    uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x1e0));
    F_00559e70(*(undefined4 *)((int)this + 0x1e0),
                 ((float)GEN_TOF(((float10)(int)((uint)uVar2 - (uint)uVar3) * (float10)REFG(double, 0x1088108)))));
    F_00559f00(*(undefined4 *)((int)this + 0x1e0),(float)fVar5);
  }
  return 0;
}

/* ref: FUN_007adb00 */
unsigned int F_007adb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7adb00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  float fVar1;
  int in_ecx;
  float10 fVar2;
  
  in_ecx = *(int *)(param_1 + 0x200);
  if (in_ecx != 0) {
    fVar1 = *(float *)(in_ecx + 0x30);
    fVar2 = F_0055a750(in_ecx);
    *(short *)param_2 = (short)(int)(fVar2 + (float10)fVar1);
    fVar1 = *(float *)(in_ecx + 0x34);
    fVar2 = F_0055a760(in_ecx);
    *param_3 = (short)(int)(fVar2 + (float10)fVar1);
  }
  return 0;
}

/* ref: FUN_007adb80 */
uint F_007adb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7adb80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = param_2;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case (undefined4 *)0x0: ;
    param_1[1] = 3;
    param_1[2] = 4;
    param_1[3] = 5;
    param_1[4] = 6;
    *param_1 = 2;
    return (uint)param_1;
  case (undefined4 *)0x1: ;
    param_1[1] = 3;
    param_1[2] = 6;
    break;
  case (undefined4 *)0x2: ;
    param_1[1] = 5;
    param_1[2] = 3;
    param_1[4] = 6;
    param_1[5] = 8;
    param_1[3] = 4;
    *param_1 = 2;
    return (uint)param_1;
  case (undefined4 *)0x3: ;
    param_1[2] = 3;
    param_1[1] = 6;
    param_1[6] = 8;
    break;
  default: ;
    goto switchD_007adb93_default;
  }
  param_1[5] = 7;
  param_1[4] = 5;
  param_1[3] = 4;
  *param_1 = 2;
  puVar1 = param_1;
switchD_007adb93_default: ;
  return (uint)puVar1;
}

/* ref: FUN_007adc40 */
uint F_007adc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7adc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * this;
  char cVar2;
  ushort uVar3;
  undefined * pvVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined * pvVar9;
  uint in_ecx;
  byte * pbVar10;
  undefined1 * this_00;
  bool bVar11;
  float10 fVar12;
  
  this = (undefined *)*param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)param_1;
  if (this == (undefined *)0x0) {
    return (uint)param_2;
  }
  pvVar4 = (undefined *)F_005647a0(this);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar4;
  if (param_3 != 0) {
    pbVar10 = &REFG(undefined1, 0x10bea11);
    pbVar5 = (byte *)param_3;
    do {
      bVar1 = *pbVar5;
      bVar11 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_007adc93: ;
        iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_007adc98;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar11 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_007adc93;
      pbVar5 = pbVar5 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_007adc98: ;
    if ((iVar6 != 0) && (*(short *)(param_2 + 3) != 8)) {
      cVar2 = '\x01';
      goto LAB_007adcaf;
    }
  }
  cVar2 = '\0';
LAB_007adcaf: ;
  *(char *)(param_2 + 6) = cVar2;
  if (cVar2 != '\0') {
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    (*(uint *)(gen_frame + 0x8)) = param_3;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xc)) + 0)) = 4;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) = 0x800;
    (*(double *)(gen_frame + 0xc)) = 4.34584737989885e-311;
    uVar7 = F_0055dcb0();
    pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar7 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar7 + 0x38),((undefined1 *)(gen_frame + 0x14)),0x2a,2,&(*(undefined4 *)(gen_frame + 0x4)))));
    if ((*pbVar5 & 0xf) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(pbVar5 + 4);
    }
    F_0058c140(this,uVar8);
    F_005a2670(((undefined1 *)(gen_frame + 0x14)));
    this_00 = ((undefined1 *)(gen_frame + 0x14));
    iVar6 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  uVar7 = F_00577bc0((*(undefined * PTR32 *)(gen_frame + 0x1c)),0,0,REFG(undefined4, 0x108cc50),0);
  F_0055a060(pvVar4,uVar7 + 5);
  uVar7 = F_00564700(this);
  pvVar9 = (undefined *)F_005647e0(this);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar9;
  in_ecx = F_00564820(this);
  fVar12 = F_0055a750(uVar7);
  (*(float *)(gen_frame + 0x28)) = (float)fVar12;
  fVar12 = F_0055a760(uVar7);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
  (*(double *)(gen_frame + 0x20)) = (double)(*(float *)(gen_frame + 0x28));
  uVar3 = F_0055a020(pvVar4);
  param_3 = (uint)gen_fl2bits((float)((float10)(*(double *)(gen_frame + 0x20)) - (float10)uVar3 * (float10)REFG(double, 0x1088108)));
  (*(double *)(gen_frame + 0xc)) = (double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x1c)))));
  uVar3 = F_0055a030(pvVar4);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)uVar3);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)uVar3);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) =
       ((float)GEN_TOF(((float10)(*(double *)(gen_frame + 0xc)) -
              (float10)(int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4))) * (float10)REFG(double, 0x1088108))));
  switch((unsigned int)(uintptr_t)(*(undefined2 *)(param_2 + 3))) {
  case 5: ;
    break;
  case 6: ;
    uVar3 = F_0055a020(uVar7);
    param_3 = (uint)gen_fl2bits((float)((float10)uVar3 * (float10)REFG(double, 0x1088108)));
    break;
  case 7: ;
    (*(double *)(gen_frame + 0xc)) = (double)(*(float *)(gen_frame + 0x28));
    uVar3 = F_0055a020(pvVar4);
    param_3 = (uint)gen_fl2bits((float)((float10)(*(double *)(gen_frame + 0xc)) - (float10)uVar3));
    break;
  case 8: ;
    F_0055a300((*(undefined * PTR32 *)(gen_frame + 0x18)),0);
    uVar3 = F_0055a020(in_ecx);
    param_3 = (uint)gen_fl2bits((float)((float10)uVar3 * (float10)REFG(double, 0x1088108) + (float10)(*(float *)(gen_frame + 0x28))));
    (*(double *)(gen_frame + 0xc)) = (double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x1c)))));
    uVar3 = F_0055a030(in_ecx);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = (float)((float10)(*(double *)(gen_frame + 0xc)) - (float10)uVar3 * (float10)REFG(double, 0x1088108));
    break;
  default: ;
    uVar3 = F_0055a030((*(undefined * PTR32 *)(gen_frame + 0x18)));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = (float)uVar3;
  }
  F_00559e70(pvVar4,GEN_TOF(gen_bits2f(param_3)));
  uVar7 = F_00559f00(pvVar4,(*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)));
  return uVar7;
}

/* ref: FUN_007adeb0 */
uint F_007adeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7adeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * this_00;
  char cVar2;
  undefined * pvVar3;
  byte * pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte * pbVar9;
  undefined * PTR32 * this_01;
  bool bVar10;
  
  this_00 = (undefined *)*param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (this_00 == (undefined *)0x0) {
    return (uint)param_1;
  }
  pvVar3 = (undefined *)F_005647a0(this_00);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar3;
  if (param_2 != (byte *)0x0) {
    pbVar9 = &REFG(undefined1, 0x10bea12);
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_007adf03: ;
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_007adf08;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_007adf03;
      pbVar4 = pbVar4 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_007adf08: ;
    if ((iVar5 != 0) && (*(short *)(param_1 + 3) != 8)) {
      cVar2 = '\x01';
      goto LAB_007adf1f;
    }
  }
  cVar2 = '\0';
LAB_007adf1f: ;
  *(char *)(param_1 + 6) = cVar2;
  if (cVar2 != '\0') {
    (*(undefined4 *)(gen_frame + 0x0)) = 6;
    (*(byte * PTR32 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 4;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x800;
    uVar6 = F_0055dcb0();
    pbVar4 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar6 + 0x38),((undefined1 *)(gen_frame + 0x14)),0x2a,2,&(*(undefined4 *)(gen_frame + 0x0)))));
    if ((*pbVar4 & 0xf) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(pbVar4 + 4);
    }
    F_0058c140(this_00,uVar7);
    F_005a2670(((undefined1 *)(gen_frame + 0x14)));
    uVar6 = F_007ac7d0(param_1);
    uVar8 = F_005647e0(this_00);
    F_0057e2a0(this_00,(short)param_2,(short)pvVar3,uVar8,uVar6);
    this_01 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
    iVar5 = 1;
    do {
      this_01 = this_01 + -2;
      F_005a2670(this_01);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  uVar6 = F_00577bc0((*(undefined * PTR32 *)(gen_frame + 0x10)),0,0,REFG(undefined4, 0x108cc50),0);
  F_0055a060(pvVar3,uVar6);
  uVar6 = F_0057e1f0(this_00,0);
  return uVar6;
}

/* ref: FUN_007adfe0 */
uint F_007adfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7adfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xffffff0f;
  *(char *)((int)this + 0x13f) = (char)param_1;
  if ((char)uVar2 == '\x03') {
    F_0055a200(*(undefined4 *)((int)this + 0x90),param_1);
    bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x188),(uint)((char)param_1 == -1));
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_007ae070 */
uint F_007ae070(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar3 = *(uint *)((int)this + 0x4ac);
  bVar1 = 0;
  if (uVar3 != 0xffffffff) {
    if ((*(int *)((int)this + 0x278) == 0) || (*(ushort *)((int)this + 0x27c) <= uVar3)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x278) + uVar3 * 0x1c;
    }
    if (*(char *)(iVar2 + 0x19) != '\0') {
      bVar1 = 1;
    }
  }
  if (*(uint *)((int)this + 0x4b0) < 2) {
    uVar3 = (-(uint)bVar1 & 0x59) + 0x2a5;
  }
  else {
    uVar3 = (-(uint)bVar1 & 0x59) + 0x2a6;
  }
  if (*(uint *)((int)this + 0x4b8) != uVar3) {
    *(uint *)((int)this + 0x4b8) = uVar3;
    bVar1 = F_0056b630(this,uVar3,7,0,9,0,0);
    uVar3 = CONCAT31(extraout_var,bVar1);
  }
  return uVar3;
}

/* ref: FUN_007ae110 */
uint F_007ae110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(char *)((int)this + 0x4ef) = (char)param_1;
  this_00 = *(undefined * PTR32 *)((int)this + 0x1a0);
  uVar1 = param_1;
  if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x88) != (char)param_1)) {
    uVar1 = F_0059dde0(this_00,param_1);
  }
  return uVar1;
}

/* ref: FUN_007ae140 */
uint F_007ae140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(bool *)((int)this + 0x4f1) = (char)param_1 == '\0';
  this_00 = *(undefined * PTR32 *)((int)this + 0x1a4);
  uVar1 = param_1;
  if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x88) != (char)param_1)) {
    uVar1 = F_0059dde0(this_00,param_1);
  }
  return uVar1;
}

/* ref: FUN_007ae170 */
uint F_007ae170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  *(uint *)((int)this + 0x4b4) = param_1;
  uVar1 = param_1;
  if (*(int *)((int)this + 0x4b0) != 0) {
    puVar2 = (undefined4 *)((int)this + 0x1c4);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        uVar1 = F_0059dde0((undefined *)*puVar2,(uint)(*(uint *)((int)this + 0x4b4) == uVar3));
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x4b0));
  }
  return uVar1;
}

/* ref: FUN_007ae1c0 */
byte F_007ae1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ae1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (((*(int *)((int)this + 0x278) != 0) && (param_1 < *(ushort *)((int)this + 0x27c))) &&
     (puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x278) + param_1 * 0x1c))),
     puVar1 != (undefined4 *)0x0)) {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      uVar3 = param_4;
      if (*(short *)(puVar1 + 3) == 5) {
        uVar3 = 2;
      }
      bVar2 = F_00576160((undefined *)*puVar1,param_2,param_3,uVar3);
      return bVar2;
    }
  }
  return 0;
}

/* ref: FUN_007ae220 */
byte F_007ae220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined * this_00;
  undefined1 * this_01;
  int iVar2;
  undefined4 uVar3;
  
  this_01 = (gen_frame + 0x1c);
  if ((((param_1 != 0xffffffff) && (*(int *)((int)this + 0x278) != 0)) &&
      (param_1 < *(ushort *)((int)this + 0x27c))) &&
     ((puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x278) + param_1 * 0x1c))),
      puVar1 != (undefined4 *)0x0 && (*(char *)((int)puVar1 + 0x19) != '\0')))) {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      uVar3 = 1;
      this_00 = (undefined *)F_0057e1b0((undefined *)*puVar1);
      F_0059d640(this_00,uVar3);
    }
    uVar3 = puVar1[4];
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
    (*(undefined4 *)(gen_frame + 0x14)) = 4;
    (*(undefined4 *)(gen_frame + 0x18)) = uVar3;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_01 = this_01 + -8;
      F_005a2670(this_01);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    return 1;
  }
  return 0;
}

/* ref: FUN_007ae2d0 */
unsigned int F_007ae2d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7ae2d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int in_ecx;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x4bc) != 0) {
    iVar3 = 0;
    do {
      if ((((*(int *)(param_1 + 0x278) != 0) && (uVar4 < *(ushort *)(param_1 + 0x27c))) &&
          (piVar1 = ((int *)GEN_TOP((*(int *)(param_1 + 0x278) + iVar3))), piVar1 != (int *)0x0)) &&
         (in_ecx = *piVar1, in_ecx != 0)) {
        fVar5 = param_2;
        fVar6 = param_2;
        uVar2 = F_005647e0(in_ecx);
        F_00568210(uVar2,fVar5,fVar6);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (uVar4 < *(uint *)(param_1 + 0x4bc));
  }
  return 0;
}

/* ref: FUN_007ae340 */
byte F_007ae340(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x4f0) == '\0') &&
     ((!GEN_ISNAN(*(float *)(in_ecx + 0x24c)) && !GEN_ISNAN(REFG(float, 0x1088068))) &&
      !(*(float *)(in_ecx + 0x24c) <= REFG(float, 0x1088068)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007ae3c0 */
uint F_007ae3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint * this_00;
  short sVar6;
  int iVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(char *)((int)this + 0x4f7) == '\0') {
    uVar3 = F_0055dcb0();
    sVar6 = *((short *)GEN_TOP((*(int *)(uVar3 + 0x18) + 0xc5c)));
    sVar5 = *((short *)GEN_TOP((*(int *)(uVar3 + 0x18) + 0xc5e)));
  }
  else {
    iVar7 = *(int *)((int)this + 0x200);
    sVar6 = (*(short *)(gen_frame + 0xc));
    sVar5 = (*(short *)(gen_frame + 0xc));
    if (iVar7 != 0) {
      fVar1 = *(float *)(iVar7 + 0x30);
      fVar8 = F_0055a750(iVar7);
      fVar2 = *(float *)(iVar7 + 0x34);
      sVar6 = (short)(int)(fVar8 + (float10)fVar1);
      fVar8 = F_0055a760(iVar7);
      sVar5 = (short)(int)(fVar8 + (float10)fVar2);
    }
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = 8;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
  fVar1 = *(float *)((int)this + 0x250);
  fVar2 = *(float *)((int)this + 0x244);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),5);
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)(int)(((int)sVar6 - ((uVar3 & 0xffff) >> 1)) - (int)(short)uVar4) *
                     (float10)fVar1 + (float10)fVar2)));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,0);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  fVar1 = *(float *)((int)this + 0x250);
  fVar2 = *(float *)((int)this + 0x248);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),5);
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(int)(((int)sVar5 - ((uVar3 & 0xffff) >> 1)) - (int)(short)uVar4) *
                    (float10)fVar1 + (float10)fVar2)));
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar7 = 2;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_007ae520 */
byte F_007ae520(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  return *((int *)GEN_TOP((*(int *)(uVar1 + 0x14) + 0xcc))) == in_ecx;
}

/* ref: FUN_007ae540 */
uint F_007ae540(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  uVar2 = (int)((double)*(float *)((int)this + 0x35c) * *(double *)&REFG(undefined, 0x1088118)) << 8 |
          (int)(*(double *)&REFG(undefined, 0x1088118) * (double)*(float *)((int)this + 0x358));
  if (*(char *)((int)this + 0x4f1) != '\0') {
    uVar2 = uVar2 | 0x10000;
  }
  if (*(char *)((int)this + 0x4f0) != '\0') {
    uVar2 = uVar2 | 0x20000;
  }
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x7c);
  *(uint *)((int)this + 0xfc) = uVar2;
  uVar2 = (*pcVar1)(this,1);
  return uVar2;
}

/* ref: FUN_007ae5a0 */
unsigned int F_007ae5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((char)param_2 != '\0') {
    return 0;
  }
  return 0;
}

/* ref: FUN_007ae610 */
uint F_007ae610(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * in_EAX = 0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x4fa) != '\0') {
    uVar1 = F_0055dcb0();
    in_EAX = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x14) + 0x3c))))(*(int * PTR32 *)(uVar1 + 0x14))));
    if ((char)in_EAX != '\0') {
      uVar1 = F_0055dcb0();
      in_EAX = (int *)F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14),(uint)*(byte *)((int)this + 0x4fa));
      if (((in_EAX != (int *)0x0) && ((*(byte *)((int)in_EAX + 0xf9) & 4) == 0)) &&
         ((*(byte *)(in_EAX + 0x3e) & 1) == 0)) {
        in_EAX = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*in_EAX + 0x10))(in_EAX,1)));
      }
    }
    *(undefined1 *)((int)this + 0x4fa) = 0;
  }
  return (uint)in_EAX;
}

/* ref: FUN_007ae680 */
uint F_007ae680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ae680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_1 != 0) {
    F_00c49908((int)this + 0x360,8,param_1);
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = F_00c49908((int)this + 0x368,8,param_2);
  }
  return uVar1;
}

/* ref: FUN_007ae6c0 */
uint F_007ae6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 8;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd254));
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc4;
  F_0055e2a0(this,0x8000000,1);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined1 *)((int)this + 400) = 0;
  return (uint)this;
}

/* ref: FUN_007ae760 */
uint F_007ae760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18c) = param_2;
  return param_2;
}

/* ref: Client::UI2::AddonScreenLog::vf37 */
uint F_007ae770(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pAVar3;
  int iVar4;
  
  pAVar3 = this + 0x180;
  iVar4 = 3;
  do {
    piVar1 = *(int * PTR32 *)pAVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,1,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x10))))(*(int * PTR32 *)pAVar3,1);
    }
    *(int *)pAVar3 = 0;
    pAVar3 = pAVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonScreenLog::vf38 */
unsigned int F_007ae7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ae7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  
  if (this[400] == (undefined1)0x0) {
    bVar1 = true;
    if ((*(int *)(this + 0x180) != 0) && ((*((byte *)GEN_TOP((*(int *)(this + 0x180) + 0xf9))) & 1) == 0)) {
      bVar1 = false;
    }
    if ((*(int *)(this + 0x184) != 0) && ((*((byte *)GEN_TOP((*(int *)(this + 0x184) + 0xf9))) & 1) == 0)) {
      bVar1 = false;
    }
    if (((*(int *)(this + 0x188) == 0) || ((*((byte *)GEN_TOP((*(int *)(this + 0x188) + 0xf9))) & 1) != 0)) &&
       (bVar1)) {
      this[400] = (undefined1)0x1;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonScreenLog::vf44 */
uint F_007ae820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ae820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonScreenLog::vf46 */
byte F_007ae830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ae830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == (byte *)0x0)) {
    return 0;
  }
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  if (iVar1 == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0xb8))))(*(int * PTR32 *)(this + 0x180),param_1,param_2);
  }
  else {
    if (iVar1 == 1) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0xb8))))(*(int * PTR32 *)(this + 0x184),param_1,param_2);
      return 1;
    }
    if (iVar1 == 2) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0xb8))))(*(int * PTR32 *)(this + 0x188),param_1,param_2);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_007ae8b0 */
uint F_007ae8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ae8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005a9110(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_007ae8d0 */
uint F_007ae8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x880;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd354));
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  F_0055e2a0(this,4,1);
  F_0055e2a0(this,0x20000000,0);
  return (uint)this;
}

/* ref: Client::UI2::AddonMiniTalk::vf36 */
uint F_007ae960(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  F_0055dc60((undefined *)this);
  pvVar1 = F_00c48350(this + 0x188,0,0x11c);
  *(undefined4 *)(this + 0x2a4) = 0x660065;
  return (uint)pvVar1;
}

/* ref: Client::UI2::AddonMiniTalk::vf37 */
uint F_007ae990(unsigned int gen_a0)
{
  GEN_ENTER(0x7ae990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x22,0);
  F_005a92d0(this,0,0x1f,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonMiniTalk::vf38 */
uint F_007ae9c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7ae9c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  bool bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  
  bVar1 = true;
  pbVar3 = (byte *)((int)param_1 + 0x1a7);
  iVar4 = 10;
  do {
    if ((*pbVar3 & 1) == 0) {
LAB_007aea03: ;
      uVar2 = F_0055a2d0(*(undefined4 *)(pbVar3 + -0x1b));
      if ((char)uVar2 != '\0') {
        bVar1 = false;
      }
    }
    else if ((*((int *)GEN_TOP((*(int *)(pbVar3 + -0x17) + 0x1c))) == 0) ||
            (-1 < *((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)(pbVar3 + -0x17) + 0x1c))) + 0x22))))) {
      *pbVar3 = *pbVar3 & 0xfe;
      F_0055a300(*(undefined * PTR32 *)(pbVar3 + -0x1b),0);
      goto LAB_007aea03;
    }
    pbVar3 = pbVar3 + 0x1c;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      if (((bVar1) && (uVar2 = (uint)param_1[0x3d] >> 0x14 & 0xf, uVar2 != 5)) && (uVar2 != 4)) {
        ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,0,0);
      }
      uVar2 = F_005a2370(param_1,param_2);
      return uVar2;
    }
  } while( true );
}

/* ref: Client::UI2::AddonMiniTalk::vf41 */
byte F_007aea70(unsigned int gen_a0)
{
  GEN_ENTER(0x7aea70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(undefined4 *)(gen_frame + 0x10)) = 9;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_0055d870(this + 0x24,&(*(undefined4 *)(gen_frame + 0xc)));
  bVar1 = F_00572e60(this,"MiniTalk",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMiniTalk::vf44 */
uint F_007aeac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7aeac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  undefined * pAVar3;
  float10 fVar4;
  
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  *(undefined4 *)(this + 0x94) = 0;
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x188) = uVar2;
  (*(uint *)(gen_frame + 0x8)) = 0;
  pAVar3 = this + 0x194;
  do {
    uVar2 = F_00578f50(this + 0x24,2,(*(uint *)(gen_frame + 0x8)),0);
    if (uVar2 != 0) {
      this_00 = *(undefined * PTR32 *)(uVar2 + 0x8c);
      *(uint *)(pAVar3 + -8) = uVar2;
      uVar2 = F_00561490(this_00,1);
      *(uint *)(pAVar3 + -4) = uVar2;
      uVar2 = F_00561530(this_00,3);
      *(uint *)pAVar3 = uVar2;
      uVar2 = F_00561490(this_00,5);
      uVar2 = F_00559bb0(uVar2);
      *(uint *)(pAVar3 + 4) = uVar2;
      uVar2 = F_00561550(this_00,4);
      *(uint *)(pAVar3 + 8) = uVar2;
      F_0055a300(*(undefined * PTR32 *)(pAVar3 + -8),0);
      *(uint *)(pAVar3 + 0xc) = 0;
      pAVar3[0x12] = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0));
    }
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    pAVar3 = pAVar3 + 0x1c;
  } while ((*(uint *)(gen_frame + 0x8)) < 10);
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x194));
  *(ushort *)(this + 0x2a8) = uVar1;
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x194));
  *(ushort *)(this + 0x2aa) = uVar1;
  fVar4 = F_00559d60(*(undefined4 *)(this + 0x194));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 0x2ac) = (*(undefined2 *)(gen_frame + 0x4));
  fVar4 = F_00559d80(*(undefined4 *)(this + 0x194));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 0x2ae) = (*(undefined2 *)(gen_frame + 0x4));
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x198));
  *(ushort *)(this + 0x2b0) = uVar1;
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x198));
  *(ushort *)(this + 0x2b2) = uVar1;
  fVar4 = F_00559d60(*(undefined4 *)(this + 0x198));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 0x2b4) = (*(undefined2 *)(gen_frame + 0x4));
  fVar4 = F_00559d80(*(undefined4 *)(this + 0x198));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 0x2b6) = (*(undefined2 *)(gen_frame + 0x4));
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x19c));
  *(ushort *)(this + 0x2b8) = uVar1;
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x19c));
  *(ushort *)(this + 0x2ba) = uVar1;
  fVar4 = F_00559d60(*(undefined4 *)(this + 0x19c));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 700) = (*(undefined2 *)(gen_frame + 0x4));
  fVar4 = F_00559d80(*(undefined4 *)(this + 0x19c));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC(fVar4);
  *(undefined2 *)(this + 0x2be) = (*(undefined2 *)(gen_frame + 0x4));
  F_005a91d0(this,1,0x22);
  uVar2 = F_005a91d0(this,0,0x1f);
  return uVar2;
}

/* ref: Client::UI2::AddonPopUpText::vf41 */
byte F_007aed10(unsigned int gen_a0)
{
  GEN_ENTER(0x7aed10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"PopUpText",1,6);
  return bVar1;
}

/* ref: FUN_007aed20 */
unsigned int F_007aed20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aed20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  uint uVar1;
  
  if (*param_1 != 0) {
    param_1[2] = param_2;
    this = (undefined *)F_00559c20(*param_1);
    switch((unsigned int)(uintptr_t)(param_1[2])) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 4: ;
    case 5: ;
      uVar1 = F_00561490(this,1);
      param_1[1] = uVar1;
      uVar1 = F_00561530(this,2);
      param_1[3] = uVar1;
    }
  }
  return 0;
}

/* ref: FUN_007aed80 */
uint F_007aed80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aed80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if ((undefined *)*param_1 != (undefined *)0x0) {
    uVar1 = F_00568410((undefined *)*param_1);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 2: ;
    case 5: ;
    case 6: ;
    case 7: ;
    case 8: ;
    case 9: ;
    case 0xe: ;
    case 0xf: ;
    case 0x10: ;
      return 0x65;
    case 3: ;
      return *(uint *)(&REFG(undefined, 0x10cd4b0) + param_2 * 4);
    case 4: ;
      return *(uint *)(&REFG(undefined, 0x10cd49c) + param_2 * 4);
    case 10: ;
      return *(uint *)(&REFG(undefined, 0x10cd488) + param_2 * 4);
    case 0xb: ;
      return *(uint *)(&REFG(undefined, 0x10cd474) + param_2 * 4);
    case 0xc: ;
      return *(uint *)(&REFG(undefined, 0x10cd460) + param_2 * 4);
    case 0xd: ;
      return *(uint *)(&REFG(undefined, 0x10cd44c) + param_2 * 4);
    }
  }
  return 0;
}

/* ref: FUN_007aee40 */
uint F_007aee40(unsigned int gen_a0)
{
  GEN_ENTER(0x7aee40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 8))) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
    return 0x65;
  default: ;
    return 0;
  }
}

/* ref: FUN_007aee80 */
uint F_007aee80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aee80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 * this_00;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  pcVar1 = *(gen_code32 *)((int)this + 0x180);
  uVar3 = 0;
  if (pcVar1 != (code *)0x0) {
    uVar2 = *(undefined4 *)((int)this + 0x184);
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 4;
    (*pcVar1)(uVar2,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = 1;
    do {
      this_00 = this_00 + -8;
      uVar3 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return uVar3;
}

/* ref: FUN_007aeef0 */
unsigned int F_007aeef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aeef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = F_00568410((undefined *)*param_1);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 3: ;
    case 4: ;
    case 10: ;
    case 0xb: ;
    case 0xc: ;
    case 0xd: ;
      F_00568380((undefined *)param_1[1],0x41,(int)*(short *)(param_1 + 2),this,0,0);
    }
  }
  return 0;
}

/* ref: FUN_007aef50 */
uint F_007aef50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aef50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_005840a0(*(undefined * PTR32 *)(param_1 + 4),0x41,(int)*(short *)(param_1 + 8),this,0);
  }
  return uVar1;
}

/* ref: FUN_007aef70 */
unsigned int F_007aef70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7aef70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar1 = *param_2;
  uVar2 = F_00568410((undefined *)*param_1);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 3: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
switchD_007aeff8_caseD_65: ;
      puVar3 = param_1 + 0x13;
      break;
    case 0x66: ;
switchD_007aeff8_caseD_66: ;
      puVar3 = param_1 + 0xf;
      break;
    case 0x67: ;
switchD_007aeff8_caseD_67: ;
      puVar3 = param_1 + 0xb;
      break;
    case 0x68: ;
switchD_007aeff8_caseD_68: ;
      puVar3 = param_1 + 7;
      break;
    case 0x69: ;
switchD_007aeff8_caseD_69: ;
      puVar3 = param_1 + 3;
      break;
    default: ;
      goto LAB_007af025;
    }
LAB_007af016: ;
    if (puVar3 != (undefined4 *)0x0) {
      F_00559c60((undefined *)puVar3[1],1);
    }
LAB_007af025: ;
    return 0;
  case 4: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
      goto switchD_007aeff8_caseD_65;
    case 0x66: ;
      goto switchD_007aeff8_caseD_66;
    case 0x67: ;
      goto switchD_007aeff8_caseD_67;
    case 0x68: ;
      goto switchD_007aeff8_caseD_68;
    case 0x69: ;
      goto switchD_007aeff8_caseD_69;
    case 0x6a: ;
switchD_007aefda_caseD_6a: ;
      puVar3 = param_1 + 0x17;
      goto LAB_007af016;
    default: ;
      goto LAB_007af025;
    }
  default: ;
    goto LAB_007af025;
  case 10: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
      goto switchD_007aeff8_caseD_65;
    case 0x66: ;
      goto switchD_007aeff8_caseD_66;
    case 0x67: ;
      goto switchD_007aeff8_caseD_67;
    case 0x68: ;
      goto switchD_007aeff8_caseD_68;
    case 0x69: ;
      goto switchD_007aeff8_caseD_69;
    default: ;
      goto LAB_007af025;
    }
  case 0xb: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
      goto switchD_007aeff8_caseD_65;
    case 0x66: ;
      goto switchD_007aeff8_caseD_66;
    case 0x67: ;
      goto switchD_007aeff8_caseD_67;
    case 0x68: ;
      goto switchD_007aeff8_caseD_68;
    case 0x69: ;
      goto switchD_007aeff8_caseD_69;
    case 0x6a: ;
      goto switchD_007aefda_caseD_6a;
    default: ;
      goto LAB_007af025;
    }
  case 0xc: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
      goto switchD_007aeff8_caseD_65;
    case 0x66: ;
      goto switchD_007aeff8_caseD_66;
    case 0x67: ;
      goto switchD_007aeff8_caseD_67;
    case 0x68: ;
      goto switchD_007aeff8_caseD_68;
    case 0x69: ;
      goto switchD_007aeff8_caseD_69;
    default: ;
      goto LAB_007af025;
    }
  case 0xd: ;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x65: ;
      goto switchD_007aeff8_caseD_65;
    case 0x66: ;
      goto switchD_007aeff8_caseD_66;
    case 0x67: ;
      goto switchD_007aeff8_caseD_67;
    case 0x68: ;
      goto switchD_007aeff8_caseD_68;
    case 0x69: ;
      goto switchD_007aeff8_caseD_69;
    default: ;
      goto LAB_007af025;
    }
  }
}

/* ref: FUN_007af0e0 */
unsigned int F_007af0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7af0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 0;
}

/* ref: Client::UI2::AddonFlyText::vf41 */
byte F_007af100(unsigned int gen_a0)
{
  GEN_ENTER(0x7af100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FlyText",1,6);
  return bVar1;
}

/* ref: FUN_007af110 */
uint F_007af110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7af110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  F_0055a300((undefined *)*param_1,0);
  this = (undefined *)F_00559c20(*param_1);
  uVar1 = F_00568410((undefined *)*param_1);
  switch((unsigned int)(uintptr_t)(uVar1 - 2)) {
  case 0: ;
  case 5: ;
  case 10: ;
  case 0x15: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,3);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this,4);
    param_1[5] = uVar1;
    return uVar1;
  case 1: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,3);
    param_1[3] = uVar1;
    return uVar1;
  case 2: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,3);
    param_1[3] = uVar1;
    uVar1 = F_00561530(this,4);
    param_1[4] = uVar1;
    return uVar1;
  case 3: ;
  case 0x10: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,3);
    param_1[6] = uVar1;
    uVar2 = 4;
    goto LAB_007af188;
  case 4: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,3);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this,5);
    param_1[7] = uVar1;
    uVar1 = F_00561530(this,4);
    param_1[3] = uVar1;
    uVar1 = F_00561530(this,6);
    param_1[4] = uVar1;
    return uVar1;
  case 6: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,4);
    uVar2 = 3;
    break;
  case 7: ;
  case 8: ;
  case 0x11: ;
  case 0x12: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,3);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this,6);
    param_1[5] = uVar1;
    uVar2 = 4;
    goto LAB_007af188;
  case 9: ;
  case 0xb: ;
  case 0x13: ;
  case 0x14: ;
  case 0x16: ;
  case 0x17: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,3);
    param_1[5] = uVar1;
    return uVar1;
  case 0xc: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,3);
    param_1[3] = uVar1;
    uVar1 = F_00561530(this,5);
    param_1[4] = uVar1;
    uVar1 = F_00561530(this,4);
    param_1[7] = uVar1;
    return uVar1;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,3);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this,6);
    uVar2 = 4;
    break;
  case 0x18: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,3);
    param_1[6] = uVar1;
    return uVar1;
  case 0x19: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,4);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this,5);
    param_1[5] = uVar1;
    uVar1 = F_00561550(this,3);
    param_1[8] = uVar1;
    return uVar1;
  case 0x1a: ;
  case 0x1d: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,4);
    param_1[6] = uVar1;
    uVar1 = F_00561530(this,5);
    param_1[5] = uVar1;
    uVar1 = F_00561550(this,3);
    param_1[8] = uVar1;
    return uVar1;
  case 0x1b: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561530(this,4);
    param_1[6] = uVar1;
    uVar1 = F_00561550(this,3);
    param_1[8] = uVar1;
    return uVar1;
  case 0x1c: ;
    uVar1 = F_00561490(this,1);
    param_1[2] = uVar1;
    uVar1 = F_00561550(this,3);
    param_1[8] = uVar1;
    uVar1 = F_00561530(this,4);
    param_1[6] = uVar1;
    return uVar1;
  default: ;
    return uVar1 - 2;
  }
  param_1[7] = uVar1;
LAB_007af188: ;
  uVar1 = F_00561530(this,uVar2);
  param_1[3] = uVar1;
  uVar1 = F_00561530(this,5);
  param_1[4] = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonFlyText::vf54 */
unsigned int F_007af450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7af450u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)(int)param_3;
  if ((int)param_3 < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar3 = (float10)REFG(double, 0x1088108);
  fVar1 = (float)(fVar2 * fVar3);
  *(float *)(param_1 + 0x11a8) = fVar1;
  *(float *)(param_1 + 0x11c8) = fVar1;
  *(float *)(param_1 + 0x11e8) = fVar1;
  *(float *)(param_1 + 0x1208) = fVar1;
  *(float *)(param_1 + 0x1228) = fVar1;
  *(float *)(param_1 + 0x1248) = fVar1;
  *(float *)(param_1 + 0x1268) = fVar1;
  *(float *)(param_1 + 0x1288) = fVar1;
  *(float *)(param_1 + 0x12a8) = fVar1;
  *(float *)(param_1 + 0x12c8) = fVar1;
  fVar2 = (float10)param_2;
  if (param_2 < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = (float10)(float)fVar2;
  fVar3 = (float10)(float)(fVar2 * fVar3);
  *(float *)(param_1 + 0x11a4) =
       ((float)GEN_TOF((fVar3 - (float10)(float)(fVar2 * (float10)*(double *)&REFG(undefined, 0x10928e8)))));
  *(float *)(param_1 + 0x11c4) =
       ((float)GEN_TOF((fVar3 + (float10)(float)(fVar2 * (float10)*(double *)&REFG(undefined, 0x10a1b58)))));
  return 0;
}

/* ref: FUN_007af500 */
uint F_007af500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7af500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  undefined * this_00;
  uint uVar2;
  byte * pbVar3;
  
  if (0x25 < param_1) {
    return 0;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + (param_1 * 9 + 99) * 4)));
  uVar2 = 0;
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  pbVar3 = (byte *)((int)this + 0x6e8);
  while ((*pbVar3 & 2) != 0) {
    uVar2 = uVar2 + 1;
    pbVar3 = pbVar3 + 0x24;
    if (0x4b < uVar2) {
      return 0;
    }
  }
  puVar1 = ((uint *)GEN_TOP(((int)this + (uVar2 * 9 + 0x1b9) * 4)));
  if (puVar1 != (uint *)0x0) {
    uVar2 = F_00568410(this_00);
    uVar2 = F_005a82c0((undefined *)((int)this + 0x24),uVar2,1,(uint)*(ushort *)((int)puVar1 + 6));
    if (uVar2 != 0) {
      *(ushort *)(puVar1 + 1) = (ushort)puVar1[1] | 2;
      *puVar1 = uVar2;
      F_007af110(puVar1,param_1);
      return (uint)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_007af590 */
unsigned int F_007af590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7af590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = F_00568410((undefined *)*param_1);
    F_00590210((undefined *)((int)this + 0x24),uVar1,(uint)*(ushort *)((int)param_1 + 6));
    *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfffd;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return 0;
}

/* ref: FUN_007af5e0 */
unsigned int F_007af5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7af5e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = F_0055a2a0(*param_2);
    if ((short)uVar1 != (short)param_3) {
      *(undefined1 *)(in_ecx + 0x12f8) = 1;
      F_0055a2b0(*param_2,param_3);
    }
  }
  return 0;
}

/* ref: FUN_007af620 */
unsigned int F_007af620(unsigned int gen_a0)
{
  GEN_ENTER(0x7af620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x12f8) != '\0') {
    F_00591da0((undefined *)((int)this + 0x24));
    *(undefined1 *)((int)this + 0x12f8) = 0;
  }
  return 0;
}

/* ref: FUN_007af640 */
uint F_007af640(unsigned int gen_a0)
{
  GEN_ENTER(0x7af640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd4cc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesis::vf36 */
uint F_007af6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7af6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  return 0;
}

/* ref: Client::UI2::AddonSynthesis::vf41 */
byte F_007af700(unsigned int gen_a0)
{
  GEN_ENTER(0x7af700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Synthesis",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSynthesis::vf2 */
unsigned int F_007af710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7af710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (((short)param_1 == 0x17) && (param_2 == 0)) {
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: Client::UI2::AddonSynthesis::vf46 */
byte F_007af750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7af750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  uint uVar5;
  undefined * this_00;
  
  if (param_2 != (byte *)0x0) {
    if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
      if ((param_2[8] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0xc);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x18c),uVar1);
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      F_00595190(*(undefined * PTR32 *)(this + 0x184),uVar1,0,0);
      F_0055a410(*(undefined4 *)(this + 0x188),1);
      F_00561990(*(undefined * PTR32 *)(this + 0x184),*(undefined4 *)(this + 0x188));
      F_005a2870(*(undefined * PTR32 *)(this + 0x1a4),0);
      if ((param_2[0x28] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x2c);
      }
      F_005a28a0(*(undefined * PTR32 *)(this + 0x1a4),uVar1);
      if ((param_2[0x28] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x2c);
      }
      F_0055dcb0();
      uVar2 = F_0056a410(uVar1);
      F_00584110(*(undefined * PTR32 *)(this + 0x1b0),uVar2);
      F_005a2870(*(undefined * PTR32 *)(this + 0x1a8),0);
      if ((param_2[0x70] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x74);
      }
      F_005a28a0(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
      if ((param_2[0x70] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x74);
      }
      F_0055dcb0();
      uVar2 = F_0056a410(uVar1);
      F_00584110(*(undefined * PTR32 *)(this + 0x198),uVar2);
      if ((param_2[0x38] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x3c);
      }
      F_0055dcb0();
      uVar2 = F_0056a410(uVar1);
      F_00584110(*(undefined * PTR32 *)(this + 0x1b8),uVar2);
      if (((param_2[0x18] & 0xf) == 0) || (uVar2 = *(uint *)(param_2 + 0x1c), uVar2 < 2)) {
        this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0xb8)));
        puVar3 = &REFG(undefined1, 0x10bea13);
      }
      else {
        this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0xb8)));
        F_0055dcb0();
        puVar3 = (undefined1 *)F_0056a410(uVar2);
      }
      F_00584110(this_00,puVar3);
      uVar1 = 1;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x38))))(*(int * PTR32 *)(this + 0x184));
      F_0055a3c0(uVar2,uVar1);
    }
    if ((param_2[0x20] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
    }
    *(undefined4 *)(this + 0x1bc) = uVar1;
    F_005a04e0(*(undefined * PTR32 *)(this + 0x1a4),uVar1,0);
    uVar1 = *(undefined4 *)(this + 0x1bc);
    F_0055dcb0();
    uVar2 = F_0056a410(uVar1);
    F_00584110(*(undefined * PTR32 *)(this + 0x1ac),uVar2);
    if ((param_2[0x40] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x44);
    }
    *(undefined4 *)(this + 0x1c0) = uVar1;
    F_005a04e0(*(undefined * PTR32 *)(this + 0x1a8),uVar1,0);
    uVar1 = *(undefined4 *)(this + 0x1c0);
    F_0055dcb0();
    uVar2 = F_0056a410(uVar1);
    F_00584110(*(undefined * PTR32 *)(this + 0x194),uVar2);
    if ((param_2[0x30] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x34);
    }
    F_0055dcb0();
    uVar2 = F_0056a410(uVar1);
    F_00584110(*(undefined * PTR32 *)(this + 0x1b4),uVar2);
    if ((param_2[0x60] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 100);
    }
    F_0055dcb0();
    uVar2 = F_0056a410(uVar1);
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0),uVar2);
    if ((param_2[0x48] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x4c);
    }
    F_0055dcb0();
    uVar2 = F_0056a410(uVar1);
    F_00584110(*(undefined * PTR32 *)(this + 0x19c),uVar2);
    if ((param_2[0x58] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x5c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 400),uVar1);
    if ((param_2[0x50] & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x54);
    }
    uVar2 = 0;
    if (iVar4 == 0) {
      uVar2 = 0xffffffff;
    }
    else if (iVar4 == 1) {
      uVar2 = 0xff5185fb;
    }
    else if (iVar4 == 2) {
      uVar2 = 0xff5680ff;
    }
    uVar5 = F_0055aa80(*(undefined4 *)(this + 400));
    if (uVar2 != uVar5) {
      uVar2 = F_005612d0(uVar2);
      F_0055aa30(*(undefined4 *)(this + 400),uVar2);
    }
    return 1;
  }
  return 1;
}

/* ref: Client::UI2::AddonSynthesis::vf38 */
uint F_007afa60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7afa60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0xf9) & 1) != 0) {
    iVar3 = 1;
    bVar1 = F_0056c7e0();
    if (bVar1 != 0) {
      uVar2 = F_0055dcb0();
      iVar3 = (*((int *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) != param_1) + 2;
    }
    if (*(int *)(param_1 + 0x1c4) != iVar3) {
      F_0059d670(*(undefined * PTR32 *)(param_1 + 0x1cc),(iVar3 != 3) + 0x65);
      *(int *)(param_1 + 0x1c4) = iVar3;
    }
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: FUN_007afae0 */
uint F_007afae0(unsigned int gen_a0)
{
  GEN_ENTER(0x7afae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd5cc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf36 */
uint F_007afb70(unsigned int gen_a0)
{
  GEN_ENTER(0x7afb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x1ac) = 0;
  return uVar1;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf41 */
byte F_007afb90(unsigned int gen_a0)
{
  GEN_ENTER(0x7afb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"SynthesisSimple",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf46 */
byte F_007afba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7afba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 4);
    }
    uVar1 = F_0055dcb0();
    this_00 = *(undefined * PTR32 *)(uVar1 + 0x30);
    if (iVar3 == 0) {
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      F_00584110(*(undefined * PTR32 *)(this + 400),uVar2);
      F_005a2870(*(undefined * PTR32 *)(this + 0x184),0);
      if ((param_2[0x20] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x24);
      }
      F_005a28a0(*(undefined * PTR32 *)(this + 0x184),uVar2);
      if ((param_2[0x20] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x24);
      }
      F_0055dcb0();
      uVar1 = F_0056a410(uVar2);
      F_00584110(*(undefined * PTR32 *)(this + 0x198),uVar1);
      if ((param_2[0x10] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x14);
      }
      F_00595190(*(undefined * PTR32 *)(this + 0x188),uVar2,0,0);
      uVar2 = 1;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x38))))(*(int * PTR32 *)(this + 0x188));
      F_0055a3c0(uVar1,uVar2);
      F_0055a410(*(undefined4 *)(this + 0x18c),1);
      F_00561990(*(undefined * PTR32 *)(this + 0x188),*(undefined4 *)(this + 0x18c));
      uVar1 = F_0043bd00(this_00,0xde,0,0);
      F_00589280(*(undefined * PTR32 *)(this + 0x180),uVar1);
    }
    if ((param_2[0x18] & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x1c);
    }
    if (iVar3 == *(int *)(this + 0x1a8)) {
      F_005a04e0(*(undefined * PTR32 *)(this + 0x184),*(int *)(this + 0x1a8),1);
    }
    else {
      F_005a04e0(*(undefined * PTR32 *)(this + 0x184),iVar3,1);
      *(int *)(this + 0x1a8) = iVar3;
      if (*((int *)GEN_TOP((*(int *)(this + 0x184) + 0xe0))) == iVar3) {
        uVar1 = F_0043bd00(this_00,0x283,0,0);
        F_00589280(*(undefined * PTR32 *)(this + 0x180),uVar1);
      }
    }
    uVar2 = *(undefined4 *)(this + 0x1a8);
    F_0055dcb0();
    uVar1 = F_0056a410(uVar2);
    F_00584110(*(undefined * PTR32 *)(this + 0x194),uVar1);
    if ((param_2[0x28] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_0055dcb0();
    uVar1 = F_0056a410(uVar2);
    F_00584110(*(undefined * PTR32 *)(this + 0x19c),uVar1);
    if ((param_2[0x30] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x34);
    }
    F_0055dcb0();
    uVar1 = F_0056a410(uVar2);
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0),uVar1);
    if ((param_2[0x40] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x44);
    }
    F_0055dcb0();
    uVar1 = F_0056a410(uVar2);
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4),uVar1);
  }
  return 1;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf2 */
unsigned int F_007afdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7afdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf47 */
unsigned int F_007afe00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7afe00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf38 */
uint F_007afe10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7afe10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0xf9) & 1) != 0) {
    iVar3 = 1;
    bVar1 = F_0056c7e0();
    if (bVar1 != 0) {
      uVar2 = F_0055dcb0();
      iVar3 = (*((int *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) != param_1) + 2;
    }
    if (*(int *)(param_1 + 0x1ac) != iVar3) {
      F_0059d670(*(undefined * PTR32 *)(param_1 + 0x1b4),(iVar3 != 3) + 0x65);
      *(int *)(param_1 + 0x1ac) = iVar3;
    }
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: FUN_007afe90 */
uint F_007afe90(unsigned int gen_a0)
{
  GEN_ENTER(0x7afe90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd6cc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesisSimpleDialog::vf41 */
byte F_007afef0(unsigned int gen_a0)
{
  GEN_ENTER(0x7afef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"SynthesisSimpleDialog",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSynthesisSimpleDialog::vf25 */
uint F_007aff00(unsigned int gen_a0)
{
  GEN_ENTER(0x7aff00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007aff30 */
uint F_007aff30(unsigned int gen_a0)
{
  GEN_ENTER(0x7aff30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd7cc));
  *(undefined4 *)((int)this + 0x854) = 0;
  *(undefined4 *)((int)this + 0x8f8) = 0;
  *(undefined4 *)((int)this + 0x8fc) = 0;
  *(undefined4 *)((int)this + 0x910) = 0;
  *(undefined2 *)((int)this + 0x914) = 0;
  *(undefined4 *)((int)this + 0x94c) = 0;
  *(undefined4 *)((int)this + 0x950) = 0;
  *(undefined4 *)((int)this + 0x954) = 0;
  *(undefined4 *)((int)this + 0x958) = 0;
  *(undefined4 *)((int)this + 0x95c) = 0;
  *(undefined4 *)((int)this + 0x960) = 0;
  *(undefined4 *)((int)this + 0x964) = 0;
  *(undefined4 *)((int)this + 0x968) = 0;
  *(undefined4 *)((int)this + 0x96c) = 0;
  *(undefined4 *)((int)this + 0x970) = 0;
  *(undefined4 *)((int)this + 0x974) = 0;
  *(undefined4 *)((int)this + 0x978) = 0;
  *(undefined4 *)((int)this + 0x97c) = 0;
  *(undefined4 *)((int)this + 0x980) = 0;
  *(undefined4 *)((int)this + 0x984) = 0;
  *(undefined4 *)((int)this + 0x988) = 0;
  *(undefined4 *)((int)this + 0x98c) = 0;
  *(undefined4 *)((int)this + 0x990) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(undefined4 *)((int)this + 0x954) = 0;
  *(undefined4 *)((int)this + 0x94c) = 0x40;
  *(undefined4 *)((int)this + 0x95c) = 0x1000;
  *(undefined4 *)((int)this + 0x964) = 0x2000;
  *(undefined4 *)((int)this + 0x96c) = 0x80000;
  *(undefined4 *)((int)this + 0x974) = 0x100000;
  *(undefined4 *)((int)this + 0x984) = 0x800000;
  *(undefined4 *)((int)this + 0x97c) = 0x400000;
  *(undefined4 *)((int)this + 0x98c) = 0x1000000;
  *(undefined4 *)((int)this + 0x950) = 0xe;
  *(undefined4 *)((int)this + 0x958) = 0x15;
  *(undefined4 *)((int)this + 0x960) = 0xf;
  *(undefined4 *)((int)this + 0x968) = 0x10;
  *(undefined4 *)((int)this + 0x970) = 0x11;
  *(undefined4 *)((int)this + 0x978) = 0x12;
  *(undefined4 *)((int)this + 0x988) = 0x14;
  *(undefined4 *)((int)this + 0x980) = 0x13;
  *(undefined4 *)((int)this + 0x990) = 0x19;
  return (uint)this;
}

/* ref: Client::UI2::AddonActionMenu::vf37 */
uint F_007b0110(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonActionMenu::vf41 */
byte F_007b0140(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ActionMenu",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonActionMenu::vf25 */
uint F_007b0150(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 4;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_007b01c0 */
uint F_007b01c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b01c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  uint uVar1;
  char * pcVar2;
  
  if (param_2 < 1) {
    F_00584110(*(undefined * PTR32 *)((int)this + 0x948),"");
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x938),0);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x93c),"");
    pcVar2 = "";
  }
  else {
    F_00584110(*(undefined * PTR32 *)((int)this + 0x948),param_1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x938),1);
    F_00591c00(*(undefined * PTR32 *)((int)this + 0x938),param_2,0);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x93c),param_3);
    pcVar2 = param_4;
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x940),pcVar2);
  uVar1 = F_007851d0(*(undefined4 *)((int)this + 0x934),*(undefined4 *)((int)this + 0x938),
                       *(undefined4 *)((int)this + 0x93c),*(undefined4 *)((int)this + 0x940),
                       *(undefined4 *)((int)this + 0x944),*(undefined4 *)((int)this + 0x948),
                       (uint)*(ushort *)((int)this + 0x910),(uint)*(ushort *)((int)this + 0x912),
                       (uint)*(ushort *)((int)this + 0x914));
  return uVar1;
}

/* ref: FUN_007b02a0 */
uint F_007b02a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b02a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_1;
  if (param_1 < *(uint *)((int)this + 0x854)) {
    uVar4 = *(undefined4 *)((int)this + param_1 * 0x1c + 0x2dc);
    pvVar1 = (undefined *)F_00559ba0(param_2[1]);
    F_00584110(pvVar1,uVar4);
    F_005951c0(param_3,*(undefined4 *)((int)this + param_1 * 0x1c + 0x2e8),0,0);
    if (*(char *)((int)this + param_1 * 0x1c + 0x2f4) == '\0') {
      uVar4 = 0x65;
    }
    else {
      uVar4 = 0x17;
    }
    uVar3 = 3;
    pvVar1 = (undefined *)F_00559c20(*param_2);
    pvVar1 = (undefined *)F_00561490(pvVar1,uVar3);
    uVar2 = F_0059d640(pvVar1,uVar4);
  }
  return uVar2;
}

/* ref: FUN_007b0320 */
uint F_007b0320(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  uint3 uVar2;
  int iVar1;
  int * piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  local_8 = (undefined4 *)((int)this + 400);
  uVar5 = 0;
  do {
    piVar3 = (int *)*local_8;
    if (piVar3 != (int *)0x0) {
      F_0059dde0(piVar3,(uint)(uVar5 == *(uint *)((int)this + 0x8f8)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(uint)*(byte *)(uVar5 + 0x230 + (int)this));
    }
    local_8 = local_8 + 1;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 10);
  puVar6 = (undefined4 *)((int)this + 0x1bc);
  local_8 = (undefined4 *)0x0;
  piVar3 = (int *)((int)this + 0x240);
  do {
    this_00 = (int *)puVar6[-1];
    if (piVar3[-1] == 0) {
      F_00584110((undefined *)puVar6[1],"");
    }
    else {
      F_0057eb30((undefined *)puVar6[1],piVar3[-1],0,0,0,0);
    }
    F_00589280(this_00,piVar3[1]);
    uVar5 = F_0059dde0(this_00,(uint)(local_8 == (undefined4 *)*(uint *)((int)this + 0x8fc)));
    uVar2 = (uint3)(uVar5 >> 8);
    if (((char)piVar3[2] == '\0') || (*(char *)((int)this + 0x233) == '\0')) {
      iVar1 = (uint)uVar2 << 8;
    }
    else {
      iVar1 = CONCAT31(uVar2,1);
    }
    ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,iVar1);
    F_0055a300((undefined *)*puVar6,(uint)(*piVar3 != 0));
    F_00591c00((undefined *)*puVar6,*piVar3,0);
    local_8 = (undefined4 *)((int)local_8 + 1);
    puVar6 = puVar6 + 3;
    piVar3 = piVar3 + 4;
  } while (local_8 < 10);
  iVar1 = *(int *)((int)this + 0x900);
  uVar4 = 0;
  if (iVar1 == 0) {
    uVar4 = 0x65;
  }
  else if (iVar1 == 1) {
    uVar4 = 0x66;
  }
  else if (iVar1 == 2) {
    uVar4 = 0x67;
  }
  F_0059d670(*(undefined * PTR32 *)((int)this + 0x918),uVar4);
  uVar5 = F_0059d670(*(undefined * PTR32 *)((int)this + 0x920),uVar4);
  return uVar5;
}

/* ref: FUN_007b0480 */
uint F_007b0480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  if ((param_2 < 10) && (*(char *)((int)this + param_2 * 0x10 + 0x248) != '\0')) {
    *(uint *)((int)this + 0x8fc) = param_2;
  }
  else {
    *(undefined4 *)((int)this + 0x8fc) = 10;
  }
  if (param_1 < 10) {
    *(uint *)((int)this + 0x8f8) = param_1;
  }
  else {
    *(undefined4 *)((int)this + 0x8f8) = 0;
  }
  uVar1 = *(uint *)((int)this + 0x8f8);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 1: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x924),0x65);
    uVar1 = F_0059ead0(*(undefined * PTR32 *)((int)this + 0x180),(uint)*(ushort *)((int)this + 0x854),0,1);
    return uVar1;
  case 2: ;
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x924),0x66);
    uVar1 = F_0059ead0(*(undefined * PTR32 *)((int)this + 0x184),(uint)*(ushort *)((int)this + 0x854),0,1);
    return uVar1;
  case 3: ;
    F_0059ead0(*(undefined * PTR32 *)((int)this + 0x188),(uint)*(ushort *)((int)this + 0x908),0,1);
    if (*(uint *)((int)this + 0x8fc) < 10) {
      F_0059d670(*(undefined * PTR32 *)((int)this + 0x924),0x68);
      uVar1 = F_0059ead0(*(undefined * PTR32 *)((int)this + 0x18c),(uint)*(ushort *)((int)this + 0x854),0,1);
      return uVar1;
    }
    uVar1 = F_0059d670(*(undefined * PTR32 *)((int)this + 0x924),0x67);
  }
  return uVar1;
}

/* ref: FUN_007b05b0 */
unsigned int F_007b05b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b05b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (param_1 < 10) {
    if ((char)param_3 != '\0') {
      if ((param_1 == 3) && (*(uint *)((int)this + 0x8fc) < 10)) {
        F_0059b390(this,*((undefined4 *)GEN_TOP(((int)this + *(uint *)((int)this + 0x8fc) * 0xc + 0x1b8))),1,
                     0);
        return 0;
      }
      F_0059b390(this,*(undefined4 *)((int)this + param_1 * 4 + 400),1,0);
      return 0;
    }
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
    case 1: ;
    case 4: ;
    case 5: ;
    case 6: ;
    case 7: ;
    case 8: ;
    case 9: ;
      F_0059b390(this,*(undefined4 *)((int)this + 0x180),1,0);
      return 0;
    case 2: ;
      F_0059b390(this,*(undefined4 *)((int)this + 0x184),1,0);
      return 0;
    case 3: ;
      if (-1 < param_2) {
        F_0059b390(this,*(undefined4 *)((int)this + 0x18c),1,0);
        return 0;
      }
      F_0059b390(this,*(undefined4 *)((int)this + 0x188),1,0);
    }
  }
  return 0;
}

/* ref: FUN_007b0690 */
uint F_007b0690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  
  F_0056b780(this,0);
  uVar2 = param_1;
  if (param_1 != 0) {
    if (param_1 == *(uint *)((int)this + 0x180)) {
      bVar1 = F_0056b630(this,0x2a7,7,0,9,0,0);
      return CONCAT31(extraout_var,bVar1);
    }
    if (param_1 == *(uint *)((int)this + 0x18c)) {
      bVar1 = F_0056b630(this,0x18aa6,7,0,9,0,0);
      return CONCAT31(extraout_var_00,bVar1);
    }
    if (param_1 == *(uint *)((int)this + 0x188)) {
      if ((char)param_2 == '\0') {
        uVar2 = F_0055dcb0();
        if (*(char *)(uVar2 + 0xbc) == '\0') {
          bVar1 = F_0056b630(this,0x18aa7,7,0,9,0,0);
          return CONCAT31(extraout_var_01,bVar1);
        }
      }
      bVar1 = F_0056b630(this,0x18ae9,7,0,9,0,0);
      uVar2 = CONCAT31(extraout_var_02,bVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_007b0780 */
uint F_007b0780(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd8cc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonGathering::vf25 */
uint F_007b0810(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonGathering::vf41 */
byte F_007b0850(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Gathering",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGathering::vf45 */
uint F_007b0860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x80;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b0890 */
uint F_007b0890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b0890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = param_3;
  if (*(char *)(param_3 + 6) == '\0') {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_007b08e0 */
uint F_007b08e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b08e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 < 8) && (pvVar1 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x180), pvVar1 != (undefined *)0x0)
     ) {
    pvVar1 = (undefined *)F_00561490(pvVar1,3);
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      if ((char)param_2 != '\0') {
        uVar2 = F_0059d640(pvVar1,1);
        return uVar2;
      }
      uVar2 = F_0059d640(pvVar1,0x11);
    }
  }
  return uVar2;
}

/* ref: FUN_007b0920 */
uint F_007b0920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 < 8) && (pvVar1 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x180), pvVar1 != (undefined *)0x0)
     ) {
    pvVar1 = (undefined *)F_00561490(pvVar1,8);
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      if ((char)param_2 != '\0') {
        uVar2 = F_0059d640(pvVar1,1);
        return uVar2;
      }
      uVar2 = F_0059d640(pvVar1,0x11);
    }
  }
  return uVar2;
}

/* ref: FUN_007b0960 */
uint F_007b0960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 < 8) && (pvVar1 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x180), pvVar1 != (undefined *)0x0)
     ) {
    pvVar1 = (undefined *)F_00561490(pvVar1,2);
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      if (param_2 == 0) {
        uVar2 = F_0059d640(pvVar1,0x11);
        return uVar2;
      }
      if (param_2 == 1) {
        uVar2 = F_0059d640(pvVar1,0x65);
        return uVar2;
      }
      uVar2 = F_0059d640(pvVar1,0x66);
    }
  }
  return uVar2;
}

/* ref: FUN_007b09b0 */
byte F_007b09b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b09b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  if (((*(uint *)((int)this + 0x1a8) & uVar1) != 0) && ((*(uint *)((int)this + 0x1ac) & uVar1) == 0)
     ) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007b09e0 */
uint F_007b09e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b09e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd9cc));
  F_0042c880((undefined *)((int)this + 0x2e4));
  iVar2 = 2;
  this_00 = (undefined *)((int)this + 0x2e0);
  do {
    this_00 = (undefined *)((int)this_00 + -100);
    F_0042c880(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonFateReward::vf25 */
uint F_007b0a20(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonFateReward::vf38 */
uint F_007b0a60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b0a60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if ((*(byte *)((int)param_1 + 0xf9) & 1) != 0) {
    if (((float10)GEN_TOD(gen_bits2f(param_1[0xd0]))) <= (float10)*(double *)&REFG(undefined, 0x10944c8)) {
      param_1[0xd0] =
           (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0xd0]))) + (float10)param_2));
    }
    else {
      uVar1 = F_0055dcb0();
      F_00594d90((undefined *)(uVar1 + 0xe0),1);
      ((code *)*(gen_code32 *)(*param_1 + 100))(param_1);
      param_1[0xd0] = 0;
    }
  }
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonFateReward::vf41 */
byte F_007b0ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"FateReward",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFateReward::vf46 */
byte F_007b0ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined1 AVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined * pvVar6;
  byte * pbVar7;
  undefined * pAVar8;
  undefined4 uVar9;
  uint local_10;
  int local_c;
  
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (*(undefined * PTR32 *)(this + 0x33c) != (undefined *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x33c),uVar3);
  }
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    if ((param_2[0x18] & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x1c);
    }
    F_0059d670(*(undefined * PTR32 *)(this + 0x180),iVar4 + 0x65);
    if (*(int *)(this + 0x188) != 0) {
      uVar5 = F_00559b90(*(int *)(this + 0x188));
      F_00559c20(*(undefined4 *)(this + 0x180));
      uVar5 = F_0055da10(uVar5);
      if (uVar5 != 0) {
        if ((param_2[8] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_2 + 0xc);
        }
        F_0058f730((undefined *)(uVar5 + 4),uVar3,0,6);
      }
    }
  }
  if (((param_2[0x10] & 0xf) == 0) || (*(int *)(param_2 + 0x14) < 1)) {
    pvVar6 = *(undefined * PTR32 *)(this + 0x18c);
    if (pvVar6 != (undefined *)0x0) {
      uVar3 = 0x66;
      goto LAB_007b0b9b;
    }
  }
  else {
    pvVar6 = *(undefined * PTR32 *)(this + 0x18c);
    if (pvVar6 != (undefined *)0x0) {
      uVar3 = 0x65;
LAB_007b0b9b: ;
      F_0059d640(pvVar6,uVar3);
    }
  }
  if (*(int *)(this + 0x1a0) == 0) {
    return 1;
  }
  uVar3 = 0x65;
  if ((param_2[0x98] & 0xf) == 0) {
    AVar1 = (undefined1)0x0;
  }
  else {
    AVar1 = SUB41(*(undefined4 *)(param_2 + 0x9c),0);
  }
  this[0x344] = AVar1;
  switch((unsigned int)(uintptr_t)(AVar1)) {
  case (undefined1)0x1: ;
    uVar9 = 0xe;
    break;
  case (undefined1)0x2: ;
    uVar3 = 0x67;
    goto LAB_007b0bf4;
  case (undefined1)0x3: ;
    uVar3 = 0x66;
    uVar9 = 0xf;
    break;
  case (undefined1)0x4: ;
    uVar3 = 0x68;
LAB_007b0bf4: ;
    uVar9 = 0x10;
    break;
  default: ;
    goto switchD_007b0bd4_default;
  }
  uVar5 = F_0055e2f0(this,uVar9);
  *(uint *)(uVar5 + 0x88) = *(uint *)(uVar5 + 0x88) | 0x40;
switchD_007b0bd4_default: ;
  F_0059d670(*(undefined * PTR32 *)(this + 0x1a0),uVar3);
  bVar2 = 3 - ((byte)this[0x344] < 3);
  if (bVar2 != 0) {
    local_10 = (uint)bVar2;
    pbVar7 = param_2 + 0x44;
    local_c = 0;
    pAVar8 = this + 0x1ac;
    do {
      if ((*(int *)(pAVar8 + -4) != 0) && (*(int *)pAVar8 != 0)) {
        F_00563db0(*(int *)(pAVar8 + -4),1);
        if ((pbVar7[-0x24] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar7 + -0x20);
        }
        F_0058bba0(*(undefined * PTR32 *)(pAVar8 + -4),uVar3);
        uVar5 = F_00559b90(*(int *)pAVar8);
        F_00559c20(*(undefined4 *)(this + 0x1a0));
        uVar5 = F_0055da10(uVar5);
        if (uVar5 != 0) {
          if ((pbVar7[-4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)pbVar7;
          }
          F_0058f730((undefined *)(uVar5 + 4),uVar3,0,6);
        }
        if ((pbVar7[0x34] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar7 + 0x38);
        }
        F_0042e430(pAVar8 + 8,uVar3);
        F_00568380(*(undefined * PTR32 *)pAVar8,6,local_c,this,0,0);
        F_00568380(*(undefined * PTR32 *)pAVar8,7,local_c,this,0,0);
      }
      local_c = local_c + 1;
      pbVar7 = pbVar7 + 8;
      pAVar8 = pAVar8 + 100;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  if ((this[0x344] == (undefined1)0x2) || (this[0x344] == (undefined1)0x4)) {
    if ((param_2[0x58] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x5c);
    }
    F_00595190(*(undefined * PTR32 *)(this + 0x2dc),uVar3,0,0);
    if ((param_2[0x60] & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 100);
    }
    *(int *)(this + 0x2d4) = iVar4;
    if (1 < iVar4) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2dc) + 0xbc)));
      uVar5 = F_00560910(iVar4);
      F_00584110(pvVar6,uVar5);
    }
    if ((param_2[0x68] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x6c);
    }
    *(undefined4 *)(this + 0x2d0) = uVar3;
    if ((param_2[0x70] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x74);
    }
    F_0042e430(this + 0x2e4,uVar3);
    F_00568380(*(undefined * PTR32 *)(this + 0x2e0),6,10,this,0,0);
    F_00568380(*(undefined * PTR32 *)(this + 0x2e0),7,10,this,0,0);
  }
  return 1;
}

/* ref: FUN_007b0de0 */
uint F_007b0de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0de0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  
  uVar1 = F_0055a020(param_3);
  *param_1 = ((float)GEN_TOF(((float10)(uVar1 >> 1) + (float10)*param_1)));
  *param_2 = (float)((float10)*param_2 + (float10)*(double *)&REFG(undefined, 0x10cdac8));
  return (uint)param_2;
}

/* ref: Client::UI2::AddonRepair::vf36 */
uint F_007b0e10(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00c48350(this + 0x1b8,0,0x47e0);
  uVar1 = F_0055dc60((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonRepair::vf41 */
byte F_007b0e40(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Repair",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonRepair::vf25 */
uint F_007b0e50(unsigned int gen_a0)
{
  GEN_ENTER(0x7b0e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonRepair::vf47 */
uint F_007b0e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b0e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_2 + 0x80);
  uVar2 = param_2;
  if (iVar1 != 0) {
    uVar2 = F_0055a2d0(*(undefined4 *)(this + 0x184));
    if ((char)uVar2 != '\0') {
      uVar2 = F_00584110(*(undefined * PTR32 *)(this + 0x184),**(undefined4 * PTR32 *)(iVar1 + 0x20));
    }
  }
  return uVar2;
}

/* ref: FUN_007b0ed0 */
uint F_007b0ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b0ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)(param_1 * 0xb8 + 0x1b8 + (int)this);
  uVar2 = F_00559b90(*param_2);
  if (uVar2 != 0) {
    F_005951c0(param_3,*puVar1,0,uVar2);
  }
  F_00568230(param_2[1],GEN_TOF(gen_bits2f(puVar1[0x16])));
  pvVar3 = (undefined *)F_00559ba0(param_2[5]);
  uVar2 = F_0042a990(puVar1 + 1);
  F_00584110(pvVar3,uVar2);
  pvVar3 = (undefined *)F_00559ba0(param_2[2]);
  uVar2 = F_0042a990(puVar1 + 0x17);
  uVar2 = F_00584110(pvVar3,uVar2);
  return uVar2;
}

/* ref: FUN_007b0f50 */
uint F_007b0f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7b0f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (0 < param_1) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x188),1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x18c),1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 400),1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),1);
    uVar2 = F_0055dcb0();
    uVar2 = F_00461d60(*(undefined * PTR32 *)(uVar2 + 0x30),0x364,param_1,0,param_5);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x188),uVar2);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x18c),(uint)(0 < param_2));
    if (0 < param_2) {
      F_00591c00(*(undefined * PTR32 *)((int)this + 0x18c),param_2,0);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 400),param_3);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x194),param_4);
    uVar2 = (uint)*(ushort *)((int)this + 0x1b4);
    uVar5 = (uint)*(ushort *)((int)this + 0x1b2);
    uVar6 = (uint)*(ushort *)((int)this + 0x1b0);
    uVar10 = *(undefined4 *)((int)this + 0x188);
    uVar3 = F_0055e2f0(this,4);
    uVar9 = *(undefined4 *)((int)this + 0x194);
    uVar8 = *(undefined4 *)((int)this + 400);
    uVar7 = *(undefined4 *)((int)this + 0x18c);
    uVar4 = F_0055e2f0(this,6);
    uVar2 = F_007851d0(uVar4,uVar7,uVar8,uVar9,uVar3,uVar10,uVar6,uVar5,uVar2);
    return uVar2;
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x188),0);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x18c),0);
  F_0055a300(*(undefined * PTR32 *)((int)this + 400),0);
  bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007b1100 */
byte F_007b1100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_007b1110 */
unsigned int F_007b1110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b1110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  byte bVar1;
  
  bVar1 = F_0055a1f0(*(undefined4 *)((int)this + 0x18));
  F_0055a120(*(undefined4 *)((int)this + 0x18),(uint)bVar1 << 0x18 | param_1 & 0xffffff);
  bVar1 = F_0055a1f0(*(undefined4 *)((int)this + 0x1c));
  F_0055a120(*(undefined4 *)((int)this + 0x1c),(uint)bVar1 << 0x18 | param_2 & 0xffffff);
  bVar1 = F_0055a1f0(*(undefined4 *)((int)this + 0x14));
  F_0055a120(*(undefined4 *)((int)this + 0x14),(uint)bVar1 << 0x18 | param_3 & 0xffffff);
  return 0;
}

/* ref: FUN_007b1190 */
uint F_007b1190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined3 extraout_var = 0;
  uint uVar1;
  
  if (0 < param_1) {
    F_00591c00(*(undefined * PTR32 *)((int)this + 0x10),param_1,0);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x10),1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x24),1);
    uVar1 = F_0055a3c0(*(undefined4 *)((int)this + 0x24),
                         CONCAT31(extraout_var,*(char *)((int)this + 0x2e) == '\0'));
    return uVar1;
  }
  F_0058f5b0(*(undefined * PTR32 *)((int)this + 0x10));
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x10),0);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x24),0);
  uVar1 = F_0055a3c0(*(undefined4 *)((int)this + 0x24),0);
  return uVar1;
}

/* ref: FUN_007b1200 */
uint F_007b1200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1200u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xfe))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xfe))) & 0x7f;
  F_00577d20((*(undefined * PTR32 *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined * PTR32 *)&gen_args[1]),0,0,REFG(undefined4, 0x108cc50),0);
  *(byte *)((int)this_00 + 0xfe) = *(byte *)((int)this_00 + 0xfe) | 0x80;
  uVar3 = F_00577bc0(this_00,0,0,REFG(undefined4, 0x108cc50),0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uVar3 & 0xffff);
  uVar1 = F_0055a020(this_00);
  uVar3 = (uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xffff;
  uVar2 = F_0055a020(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
  uVar3 = F_00559eb0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),
                       (uint)(ushort)(((short)((int)(uVar1 - uVar3) >> 1) - uVar2) + 6));
  return uVar3;
}

/* ref: FUN_007b1290 */
uint F_007b1290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b1290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if (param_1 != 0) {
    F_0055a060(*(undefined * PTR32 *)((int)this + 0x20),param_1);
    uVar1 = F_0055a020(*(undefined4 *)this);
    F_00559eb0(*(undefined4 *)((int)this + 0x20),(int)((uint)uVar1 - param_1) >> 1);
    F_0055a080(*(undefined4 *)((int)this + 0x20),param_2);
    F_00559f40(*(undefined4 *)((int)this + 0x20),param_3);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x20),1);
    uVar2 = F_0055a3c0(*(undefined4 *)((int)this + 0x20),
                         CONCAT31(extraout_var,*(char *)((int)this + 0x2e) == '\0'));
    return uVar2;
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x20),0);
  uVar2 = F_0055a3c0(*(undefined4 *)((int)this + 0x20),0);
  return uVar2;
}

/* ref: FUN_007b1310 */
uint F_007b1310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = F_0055a690(*(undefined4 *)this);
  if ((char)uVar1 != (char)param_1) {
    F_0055a6b0(*(undefined4 *)this,param_1);
    uVar2 = F_00559c20(*(undefined4 *)this);
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = *(uint *)(uVar2 + 0xc);
      if (uVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(ushort *)(uVar2 + 0x1a) + *(int *)(uVar1 + 4);
      }
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          uVar1 = F_00578ee0((undefined *)(uVar2 + 4),uVar3);
          uVar1 = F_0055a6b0(uVar1,param_1);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_007b1380 */
uint F_007b1380(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdad4));
  *(undefined4 *)((int)this + 0x180) = 0;
  puVar2 = (undefined4 *)((int)this + 0x184);
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x68;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x800;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xef | 0x40;
  F_0055e2a0(this,4,1);
  F_0055e2a0(this,0x20000000,0);
  return (uint)this;
}

/* ref: Client::UI2::AddonNamePlate::vf36 */
unsigned int F_007b1410(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * pAVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  F_0055dc60((undefined *)this);
  uVar6 = 0;
  uVar7 = 0;
  uVar1 = F_00404270();
  puVar2 = (undefined4 *)F_00406c00(0x964,0,uVar1,uVar7);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = 0x32;
    iVar5 = 0x31;
    puVar2 = puVar3;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      *(undefined2 *)(puVar2 + 10) = 0;
      *(undefined4 *)((int)puVar2 + 0x2a) = 0;
      *(undefined2 *)((int)puVar2 + 0x2e) = 0;
      puVar2 = puVar2 + 0xc;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *(undefined4 * PTR32 *)(this + 0x180) = puVar3;
  pAVar4 = this + 0x184;
  do {
    *(uint *)pAVar4 = *(int *)(this + 0x180) + uVar6;
    uVar6 = uVar6 + 0x30;
    pAVar4 = pAVar4 + 4;
  } while (uVar6 < 0x960);
  return 0;
}

/* ref: Client::UI2::AddonNamePlate::vf37 */
uint F_007b14b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b14b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  *(undefined1 *)(uVar1 + 0x21b) = 0;
  uVar1 = F_0055dcb0();
  F_005aa060((undefined *)(uVar1 + 0x20c),0,0);
  F_005a92d0(this,1,5,0);
  F_005a92d0(this,0,4,0);
  if (*(int *)(this + 0x180) != 0) {
    F_00406b30(*(int *)(this + 0x180) + -4);
    *(undefined4 *)(this + 0x180) = 0;
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonNamePlate::vf41 */
byte F_007b1520(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x31;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_0055d870(this + 0x24,&(*(undefined4 *)(gen_frame + 0xc)));
  bVar1 = F_00572e60(this,"NamePlate",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonNamePlate::vf54 */
uint F_007b1570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7b1570u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_007b1590 */
uint F_007b1590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = F_0055dcb0();
  *(undefined1 *)(uVar2 + 0x21b) = 0;
  iVar3 = param_1 * 0x30 + *(int *)((int)this + 0x180);
  if (iVar3 == 0) {
switchD_007b15c4_default: ;
    uVar4 = 0xb;
  }
  else {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(iVar3 + 0x2c))) {
    case 0: ;
      if (*(char *)(iVar3 + 0x2f) == '\0') {
        uVar4 = 2;
      }
      else {
        uVar4 = 5;
      }
      break;
    case 1: ;
    case 2: ;
      uVar4 = 3;
      break;
    case 3: ;
      uVar4 = 5;
      break;
    case 4: ;
    case 5: ;
    case 6: ;
    case 7: ;
      uVar4 = 4;
      break;
    default: ;
      goto switchD_007b15c4_default;
    }
  }
  F_005aa060((undefined *)(uVar2 + 0x20c),uVar4,1);
  *(undefined1 *)(uVar2 + 0x21b) = 1;
  uVar1 = *(ushort *)(iVar3 + 0x2a);
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(undefined1 *)(gen_frame + 0x10)) = 1;
  uVar2 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x14)),0x28,2,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(((undefined1 *)(gen_frame + 0x14)));
  this_00 = ((undefined1 *)(gen_frame + 0x14));
  iVar3 = 1;
  do {
    this_00 = this_00 + -8;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007b1680 */
uint F_007b1680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined1 * this_00;
  
  uVar2 = F_0055dcb0();
  *(undefined1 *)(uVar2 + 0x21b) = 0;
  F_005aa060((undefined *)(uVar2 + 0x20c),0,0);
  iVar3 = param_1 * 0x30 + *(int *)((int)this + 0x180);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar1 = *(ushort *)(iVar3 + 0x2a);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
    (*(undefined1 *)(gen_frame + 0x10)) = 0;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x14)),0x28,2,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(((undefined1 *)(gen_frame + 0x14)));
    this_00 = ((undefined1 *)(gen_frame + 0x14));
    iVar3 = 1;
    do {
      this_00 = this_00 + -8;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007b1730 */
unsigned int F_007b1730(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b990(uVar2);
    iVar1 = *(int *)(uVar2 + 0x14);
    iVar3 = 0xc;
    iVar5 = 0x32;
    do {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + iVar3))) = 7;
      iVar3 = iVar3 + 0x40;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar1 = *(int *)this;
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b9a0(uVar4);
    ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar2,uVar4);
  }
  return 0;
}

/* ref: Client::UI2::AddonNeedGreed::vf41 */
byte F_007b17a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b17a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"NeedGreed",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonNeedGreed::vf38 */
uint F_007b17b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b17b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonNeedGreed::vf25 */
uint F_007b17d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b17d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x1f,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: FUN_007b1830 */
uint F_007b1830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b1830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)((int)this + 0x210);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
  if (param_1 == 1) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x14)),0x1f,2,&(*(undefined4 *)(gen_frame + 0x4)));
    puVar3 = ((undefined1 *)(gen_frame + 0x14));
  }
  else if (param_1 == 2) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 2;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x1c)),0x1f,2,&(*(undefined4 *)(gen_frame + 0x4)));
    puVar3 = ((undefined1 *)(gen_frame + 0x1c));
  }
  else {
    if (param_1 != 3) goto LAB_007b1901;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x24)),0x1f,2,&(*(undefined4 *)(gen_frame + 0x4)));
    puVar3 = ((undefined1 *)(gen_frame + 0x24));
  }
  F_005a2670(puVar3);
LAB_007b1901: ;
  puVar3 = ((undefined1 *)(gen_frame + 0x14));
  iVar4 = 1;
  do {
    puVar3 = puVar3 + -8;
    uVar2 = F_005a2670(puVar3);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return uVar2;
}

/* ref: FUN_007b1940 */
unsigned int F_007b1940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar2 = 0;
  if (*(int *)((int)this + 0x1fc) != 0) {
    puVar3 = (undefined4 *)((int)this + 0x230);
    do {
      puVar3[-1] = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + uVar2 * 4)));
      *puVar3 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x104 + uVar2 * 4)));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 8;
    } while (uVar2 < *(uint *)((int)this + 0x1fc));
  }
  return 0;
}

/* ref: FUN_007b1990 */
uint F_007b1990(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = *(uint *)((int)this + 0x210);
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)((int)this + 0x1fc))) &&
     (uVar1 = *(uint *)(uVar1 * 0x20 + 0x230 + (int)this), *(uint *)((int)this + 0x208) != uVar1)) {
    *(uint *)((int)this + 0x208) = uVar1;
    uVar1 = F_00560910(uVar1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x184),uVar1);
    if (*(int *)((int)this + 0x20c) < 1) {
      fVar2 = (float10)0;
    }
    else {
      fVar2 = (float10)*(int *)((int)this + 0x208) / (float10)*(int *)((int)this + 0x20c);
    }
    uVar1 = F_00568230(*(undefined4 *)((int)this + 0x180),(float)fVar2);
  }
  return uVar1;
}

/* ref: FUN_007b1a10 */
uint F_007b1a10(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdbd4));
  F_0090ac80((undefined *)((int)this + 0x180));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 1;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined1 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  F_0055e2a0(this,0x1000000,1);
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonArmouryBoard::vf41 */
byte F_007b1ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ArmouryBoard",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonArmouryBoard::vf45 */
uint F_007b1ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b1ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xd;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonArmouryBoard::vf5 */
uint F_007b1b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar1 == 3) || (uVar1 == 2)) {
    uVar2 = *(undefined4 *)(this + 0xa4);
    uVar4 = 0;
    pAVar3 = this;
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00,uVar2,pAVar3,uVar4);
    if (this[0x2a4] != (undefined1)0x0) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonArmouryBoard::vf25 */
uint F_007b1bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonArmouryBoard::vf48 */
uint F_007b1c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b1c20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(uint *)(in_ecx + 0x29c);
}

/* ref: FUN_007b1c30 */
uint F_007b1c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1c30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 != *(uint *)(in_ecx + 0x298)) {
    *(uint *)(in_ecx + 0x298) = param_2;
  }
  return param_2;
}

/* ref: FUN_007b1c50 */
uint F_007b1c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b1c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    do {
      this_00 = *(undefined * PTR32 *)((int)this + iVar2 + 0x1e8);
      uVar1 = F_00560910(*((undefined4 *)GEN_TOP((iVar2 + 4 + *(int *)(param_1 + 0x20)))));
      in_EAX = F_00584110(this_00,uVar1);
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x34);
  }
  return in_EAX;
}

/* ref: FUN_007b1ca0 */
uint F_007b1ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(int *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  if (param_1 != *(int *)((int)this + 0x298)) {
    *(int *)((int)this + 0x298) = param_1;
  }
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b1d10 */
uint F_007b1d10(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = 0;
  if (*(int *)((int)this + 0x29c) == 0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007b1d80 */
uint F_007b1d80(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  undefined2 extraout_var = 0;
  char cVar3;
  uint uVar4;
  char local_5;
  
  cVar3 = '\0';
  uVar2 = F_00559cf0(*(undefined4 *)((int)this + 0x284));
  local_5 = '\x01';
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x29c))) {
  case 1: ;
    uVar4 = 0x6a;
    break;
  default: ;
    local_5 = '\0';
    uVar4 = uVar2 & 0xffff;
    break;
  case 3: ;
    cVar3 = '\x01';
    uVar4 = 0x69;
    break;
  case 4: ;
  case 8: ;
    cVar3 = '\x01';
    uVar4 = 0x65;
    break;
  case 5: ;
    cVar3 = '\x01';
    uVar4 = 0x68;
    break;
  case 6: ;
    cVar3 = '\x01';
    uVar4 = 0x66;
    break;
  case 7: ;
    cVar3 = '\x01';
    uVar4 = 0x67;
    break;
  case 9: ;
    cVar3 = '\x01';
    uVar4 = 0x6b;
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x288),*(undefined4 *)((int)this + 0x2a0));
  if ((uVar2 & 0xffff) != uVar4) {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x284),uVar4);
    F_00577ad0(*(undefined * PTR32 *)((int)this + 0x280));
  }
  uVar1 = F_00559c40(*(undefined4 *)((int)this + 0x280));
  uVar2 = CONCAT22(extraout_var,uVar1);
  if ((char)uVar1 != local_5) {
    if (local_5 == '\0') {
      uVar2 = F_0059d670(*(undefined * PTR32 *)((int)this + 0x280),0x11);
    }
    else {
      uVar2 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x280),0x65);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    uVar2 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x28c),(cVar3 == '\0') + 0x65);
  }
  *(char *)((int)this + 0x2a4) = cVar3;
  return uVar2;
}

/* ref: FUN_007b1ea0 */
uint F_007b1ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  uVar2 = 0;
  if (*(char *)((int)this + 0x2a4) != '\0') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    uVar1 = *(undefined4 *)((int)this + 0x2b0);
    (*(undefined4 *)(gen_frame + 0x10)) = 9;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar3 = 1;
    do {
      this_00 = this_00 + -8;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007b1f10 */
byte F_007b1f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  byte bVar2;
  int iVar3;
  
  bVar2 = 0;
  if ((*(char *)((int)this + 0x2a6) == '\0') &&
     ((iVar1 = *(int *)((int)this + 0x298), iVar1 != 0xc || ((char)param_1 != '\x02')))) {
    if (iVar1 == 0xc) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar1 + 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this + iVar1 * 4 + 0x180);
    this_01 = *(undefined * PTR32 *)((int)this + iVar3 * 4 + 0x180);
    if ((this_00 != (undefined *)0x0) && (this_01 != (undefined *)0x0)) {
      F_0059dde0(this_00,0);
      F_0059dde0(this_01,1);
      F_007b1ca0(this,iVar3);
      bVar2 = 1;
      *(undefined1 *)((int)this + 0x2a8) = 1;
    }
  }
  return bVar2;
}

/* ref: FUN_007b1f80 */
byte F_007b1f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b1f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  byte bVar2;
  int iVar3;
  
  bVar2 = 0;
  if ((*(char *)((int)this + 0x2a6) == '\0') &&
     ((iVar1 = *(int *)((int)this + 0x298), iVar1 != 0 || ((char)param_1 != '\x02')))) {
    iVar3 = 0xc;
    if (iVar1 != 0) {
      iVar3 = iVar1 + -1;
    }
    this_00 = *(undefined * PTR32 *)((int)this + iVar1 * 4 + 0x180);
    this_01 = *(undefined * PTR32 *)((int)this + iVar3 * 4 + 0x180);
    if ((this_00 != (undefined *)0x0) && (this_01 != (undefined *)0x0)) {
      F_0059dde0(this_00,0);
      F_0059dde0(this_01,1);
      F_007b1ca0(this,iVar3);
      bVar2 = 1;
      *(undefined1 *)((int)this + 0x2a8) = 1;
    }
  }
  return bVar2;
}

/* ref: FUN_007b1ff0 */
uint F_007b1ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b1ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  undefined3 extraout_var_07 = 0;
  uint uVar5;
  
  if (*(char *)((int)this + 0x2a4) == '\0') {
    F_0056b780(this,3);
  }
  else {
    uVar2 = *(undefined4 *)((int)this + 0x28c);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_0055e3d0(this,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),uVar2);
    uVar4 = F_0055a030(*(undefined4 *)((int)this + 0x28c));
    sVar1 = (short)(*(undefined4 *)(gen_frame + 0x8)) + (uVar4 >> 1);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = sVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)),sVar1);
    F_0056b630(this,0x18a89,0,3,4,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  }
  F_0056b780(this,0);
  uVar5 = *(uint *)((int)this + 0x29c);
  switch((unsigned int)(uintptr_t)(uVar5)) {
  case 0: ;
  case 2: ;
    bVar3 = F_0056b630(this,0x18ac6,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var,bVar3);
  case 1: ;
    bVar3 = F_0056b630(this,0x18aa8,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_00,bVar3);
  case 3: ;
    bVar3 = F_0056b630(this,0x18ac8,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_01,bVar3);
  case 4: ;
    bVar3 = F_0056b630(this,0x18acb,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_02,bVar3);
  case 5: ;
    bVar3 = F_0056b630(this,0x18acd,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_03,bVar3);
  case 6: ;
    bVar3 = F_0056b630(this,0x18ac9,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_04,bVar3);
  case 7: ;
    bVar3 = F_0056b630(this,0x18aca,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_05,bVar3);
  case 8: ;
    bVar3 = F_0056b630(this,0x18acc,7,0,9,0,0);
    *(undefined1 *)((int)this + 0x2a5) = 0;
    return CONCAT31(extraout_var_06,bVar3);
  case 9: ;
    bVar3 = F_0056b630(this,0x18ae1,7,0,9,0,0);
    uVar5 = CONCAT31(extraout_var_07,bVar3);
  }
  *(undefined1 *)((int)this + 0x2a5) = 0;
  return uVar5;
}

/* ref: FUN_007b21e0 */
unsigned int F_007b21e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b21e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((*(char *)((int)this + 0x2a6) == '\0') &&
     ((*(char *)((int)this + 0x2a5) != (char)param_1 || ((char)param_2 != '\0')))) {
    *(char *)((int)this + 0x2a5) = (char)param_1;
    F_0056b780(this,0);
    if (*(char *)((int)this + 0x2a5) != '\0') {
      F_0056b630(this,0x18ac7,7,0,9,0,0);
      return 0;
    }
    F_0056b630(this,0x18ac6,7,0,9,0,0);
  }
  return 0;
}

/* ref: FUN_007b2240 */
uint F_007b2240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b2240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  int * piVar3;
  
  *(undefined1 *)((int)this + 0x2a6) = 1;
  *(byte *)((int)this + 0x2a7) = *(byte *)((int)param_1 + 0xaa) >> 4 & 1;
  *(undefined * PTR32 *)((int)this + 0x2ac) = param_1;
  F_0056e4d0(param_1,0);
  piVar3 = (int *)((int)this + 0x180);
  iVar2 = 0xd;
  do {
    if (*piVar3 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0x28))((int *)*piVar3,0);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  bVar1 = F_0056b630(this,0x18ab8,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007b22b0 */
uint F_007b22b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b22b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  ushort uVar2;
  undefined3 extraout_var = 0;
  int iVar4;
  int * piVar5;
  undefined4 uVar6;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a6))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2ac))) = 0;
  F_0056e4d0((*(undefined * PTR32 *)&gen_args[1]),(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a7))));
  piVar5 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180)));
  iVar4 = 0xd;
  do {
    if (*piVar5 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar5 + 0x28))((int *)*piVar5,1);
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a4))) == '\0') {
    F_0056b780((*(undefined * PTR32 *)&gen_args[0]),3);
  }
  else {
    uVar6 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28c)));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)0x0;
    F_0055e3d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined * PTR32 *)&gen_args[1]),uVar6);
    uVar2 = F_0055a030(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28c))));
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(CONCAT22((*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 2)))),(short)(*(undefined * PTR32 *)&gen_args[1]) + (uVar2 >> 1))));
    F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x18a89,0,3,4,(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined * PTR32 *)&gen_args[1]));
  }
  F_0056b780((*(undefined * PTR32 *)&gen_args[0]),0);
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x29c)));
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
  case 2: ;
    uVar6 = 0x18ac6;
    break;
  case 1: ;
    uVar6 = 0x18aa8;
    break;
  case 3: ;
    uVar6 = 0x18ac8;
    break;
  case 4: ;
    uVar6 = 0x18acb;
    break;
  case 5: ;
    uVar6 = 0x18acd;
    break;
  case 6: ;
    uVar6 = 0x18ac9;
    break;
  case 7: ;
    uVar6 = 0x18aca;
    break;
  case 8: ;
    uVar6 = 0x18acc;
    break;
  case 9: ;
    uVar6 = 0x18ae1;
    break;
  default: ;
    goto switchD_007b236f_default;
  }
  bVar1 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),uVar6,7,0,9,0,0);
  uVar3 = CONCAT31(extraout_var,bVar1);
switchD_007b236f_default: ;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a5))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a8))) = 1;
  return uVar3;
}

/* ref: Client::UI2::AddonArmouryBoard::vf52 */
byte F_007b2460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b2460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined1 * this_00;
  int iVar5;
  
  this_00 = (gen_frame + 0x1c);
  bVar2 = 0;
  if (*param_1 == 2) {
    if (this[0x2a6] == (undefined1)0x0) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      uVar1 = *(undefined4 *)(this + 0x2b0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0xc;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
      (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      if (*(int *)(this + 0x2b0) != 0) {
        uVar3 = F_0055dcb0();
        piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),*(undefined4 *)(this + 0x2b0));
        if (piVar4 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4);
        }
      }
      iVar5 = 1;
      do {
        this_00 = this_00 + -8;
        F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      return 1;
    }
    if (*(int *)(this + 0x2ac) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x2ac) + 0x84))) + 0x30))))(*(int *)(this + 0x2ac) + 0x84);
    }
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: FUN_007b2540 */
uint F_007b2540(unsigned int gen_a0)
{
  GEN_ENTER(0x7b2540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_0059b860(*(undefined * PTR32 *)(uVar1 + 0x14),this,0);
  *(undefined1 *)((int)this + 0x2a8) = 1;
  return uVar1;
}

/* ref: FUN_007b2560 */
uint F_007b2560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00557670(param_2,0);
  uVar1 = param_1 - 1;
  if (uVar1 < 0xd) {
    uVar1 = F_007b1ca0(this,param_1 + -1);
  }
  if (param_1 == 0x29) {
    uVar1 = F_007b1ea0(this);
  }
  return uVar1;
}

/* ref: FUN_007b25a0 */
uint F_007b25a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b25a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint * this_00;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int *)(gen_frame + 0x14)) = param_2;
  F_00557670(param_2,0);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  uVar4 = param_1 - 0xf;
  if (uVar4 < 0x19) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_3 + 0x28))((int *)*param_3)));
    (*(undefined4 *)(gen_frame + 0x10)) = *puVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x10));
    uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x28))((int *)*param_3);
    uVar1 = *(undefined4 *)(uVar3 + 4);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
    iVar5 = *(int *)((int)this + 0x298);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(int *)(gen_frame + 0x2c)) = iVar5 + 0x31;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
    (*(uint *)(gen_frame + 0x34)) = uVar4;
    uVar3 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x18)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  }
  *(uint *)((*(int *)(gen_frame + 0x14)) + 0x14) = *(uint *)((*(int *)(gen_frame + 0x14)) + 0x14) | 0x80000;
  *(bool *)((*(int *)(gen_frame + 0x14)) + 0x15) = uVar4 < 0x19;
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 3;
  do {
    this_00 = this_00 + -2;
    uVar4 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_007b26a0 */
uint F_007b26a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b26a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  
  F_00557670(param_2,0);
  if (*param_3 != 0) {
    uVar1 = F_007b22b0(this,*param_3 + -0x84);
    return uVar1;
  }
  uVar1 = F_007b22b0(this,0);
  return uVar1;
}

/* ref: FUN_007b26e0 */
uint F_007b26e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b26e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b2750 */
uint F_007b2750(unsigned int gen_a0)
{
  GEN_ENTER(0x7b2750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: Client::UI2::AddonAchievement::vf25 */
uint F_007b27b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b27b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonAchievement::vf41 */
byte F_007b27f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b27f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Achievement",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonAchievement::vf52 */
byte F_007b2800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b2800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if (((char)param_1[1] != '\0') || (*param_1 != 2)) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x198);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
  if (uVar2 != uVar3) {
    piVar1 = *(int * PTR32 *)(this + 0x188);
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    if (uVar2 != uVar3) {
      F_0059b390(this,*(undefined4 *)(this + 0x188),1,0);
      return 1;
    }
    return 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x7c))))(*(int * PTR32 *)(this + 400));
  if (uVar2 != 0) {
    F_0059b390(this,*(undefined4 *)(this + 400),1,0);
    return 1;
  }
  F_0059b390(this,*(undefined4 *)(this + 0x188),1,0);
  return 1;
}

/* ref: FUN_007b28e0 */
uint F_007b28e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b28e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00584110(this_00,*(undefined4 *)((int)this + param_1 * 4 + 0x1ec));
  }
  return uVar1;
}

/* ref: FUN_007b2910 */
uint F_007b2910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b2910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x184),0);
    return uVar1;
  }
  uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x184),*(undefined4 *)(param_2 + 4));
  return uVar1;
}

/* ref: FUN_007b2940 */
ushort F_007b2940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b2940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  ushort * puVar2;
  
  iVar1 = 0;
  puVar2 = (ushort *)((int)this + 0x1a0);
  do {
    if ((puVar2[-2] <= param_1) && (param_1 < *puVar2)) goto LAB_007b296d;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 < 0x13);
  iVar1 = 0x13;
LAB_007b296d: ;
  return (ushort)iVar1;
}

/* ref: FUN_007b2980 */
uint F_007b2980(unsigned int gen_a0)
{
  GEN_ENTER(0x7b2980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdce4));
  iVar2 = (int)this + 0x180;
  iVar1 = 0x1d;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar2 = (int)this + 0xb58;
  iVar1 = 0x1d;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined1 *)((int)this + 0x1540) = 0;
  return (uint)this;
}

/* ref: FUN_007b29f0 */
uint F_007b29f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b29f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdce4));
  pvVar2 = (undefined *)((int)this + 0x1530);
  iVar3 = 0x1d;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0xb58);
  iVar3 = 0x1d;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonHowtoList::vf41 */
byte F_007b2a50(unsigned int gen_a0)
{
  GEN_ENTER(0x7b2a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"HowToList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonHowtoList::vf2 */
uint F_007b2a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b2a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  uint * puVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_1 & 0xffff) == 0x21) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    uVar1 = *(undefined4 *)(param_4 + 8);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    bVar3 = *(byte *)(param_4 + 0x11) >> 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),2);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = bVar3 & 1;
    (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),bVar3) & 0xffffff01;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar4 = &(*(uint *)(gen_frame + 0x18));
    iVar5 = 2;
    do {
      puVar4 = puVar4 + -2;
      uVar2 = F_005a2670(puVar4);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  else {
    uVar2 = (param_1 & 0xffff) - 0x23;
    if (uVar2 == 0) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      uVar1 = *(undefined4 *)(param_4 + 8);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x8)));
      puVar4 = &(*(uint *)(gen_frame + 0x18));
      iVar5 = 1;
      do {
        puVar4 = puVar4 + -2;
        uVar2 = F_005a2670(puVar4);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: Client::UI2::AddonHowtoList::vf25 */
uint F_007b2b70(unsigned int gen_a0)
{
  GEN_ENTER(0x7b2b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b2ba0 */
uint F_007b2ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + 0x180 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b2be0 */
uint F_007b2be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + 0xb58 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b2c20 */
uint F_007b2c20(unsigned int gen_a0)
{
  GEN_ENTER(0x7b2c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdde4));
  pvVar2 = (undefined *)((int)this + 0x181c);
  iVar3 = 6;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x15d0);
  iVar3 = 0x31;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x68);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonCabinet::vf41 */
byte F_007b2c80(unsigned int gen_a0)
{
  GEN_ENTER(0x7b2c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CabinetStore",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCabinet::vf47 */
uint F_007b2c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b2c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  undefined * pAVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  uVar5 = *(uint *)(param_2 + 0xa4);
  iVar7 = 0;
  if ((iVar1 != 0) && (uVar5 != 0)) {
    uVar2 = **(uint * PTR32 *)(iVar1 + 0x20);
    param_1 = 0;
    if (uVar2 != 0) {
      pAVar6 = this + 0x1d4;
      do {
        iVar3 = *((int *)GEN_TOP((iVar7 + 0xc + *(int *)(iVar1 + 0x20))));
        F_0042e430(pAVar6 + -0x54,*((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + param_1 * 4))));
        fVar4 = (float10)*(double *)&REFG(undefined, 0x10cdee0);
        *(undefined4 *)pAVar6 = *((undefined4 *)GEN_TOP((iVar7 + 8 + *(int *)(iVar1 + 0x20))));
        *(undefined4 *)(pAVar6 + 4) = *((undefined4 *)GEN_TOP((iVar7 + 0x14 + *(int *)(iVar1 + 0x20))));
        *(undefined4 *)(pAVar6 + 8) = *((undefined4 *)GEN_TOP((iVar7 + 0x10 + *(int *)(iVar1 + 0x20))));
        param_1 = param_1 + 1;
        *(undefined4 *)(pAVar6 + 0xc) = *((undefined4 *)GEN_TOP((iVar7 + 0x18 + *(int *)(iVar1 + 0x20))));
        iVar7 = iVar7 + 0x14;
        *(float *)(pAVar6 + 0x10) = (float)((float10)iVar3 / fVar4);
        pAVar6 = pAVar6 + 0x68;
      } while (param_1 < uVar2);
    }
    F_0059ead0(*(undefined * PTR32 *)(this + 0x181c),uVar2,0,1);
    if (uVar2 != 0) {
      uVar5 = F_0059d670(*(undefined * PTR32 *)(this + 0x1824),0x11);
      return uVar5;
    }
    uVar5 = F_0055dcb0();
    F_00594d90((undefined *)(uVar5 + 0xe0),1);
    uVar5 = F_0059d670(*(undefined * PTR32 *)(this + 0x1824),0x65);
  }
  return uVar5;
}

/* ref: Client::UI2::AddonCabinet::vf2 */
uint F_007b2db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b2db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar3 = (param_1 & 0xffff) - 0x1f;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    F_00560760(&(*(undefined4 *)(gen_frame + 0x10)));
    iVar4 = param_4[2];
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 2)) = 2;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + iVar4 * 0x68 + 0x1dc);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 3)) = this[iVar4 * 0x68 + 0x1d8];
    (*(int *)(gen_frame + 0x18)) = CONCAT13(this[iVar4 * 0x68 + 0x1d8],CONCAT12(2,(undefined2)(*(int *)(gen_frame + 0x18))));
    if (*param_4 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(undefined4 *)(*param_4 + 0x70);
    }
    AVar1 = this[0x13a];
    uVar3 = F_0055dcb0();
    uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),4,(uint)(byte)AVar1,param_1,&(*(undefined4 *)(gen_frame + 0x10)),0,0);
    return uVar3;
  case 1: ;
    uVar3 = F_0055dcb0();
    uVar3 = F_00594d90((undefined *)(uVar3 + 0xe0),0);
switchD_007b2dca_caseD_22: ;
    return uVar3;
  case 2: ;
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    iVar4 = param_4[2];
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    uVar2 = *(undefined4 *)(this + iVar4 * 0x68 + 0x1e0);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
    (*(int *)(gen_frame + 0x18)) = uVar2;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    uVar3 = F_0055dcb0();
    F_00594d90((undefined *)(uVar3 + 0xe0),1);
    iVar4 = 1;
    do {
      this_01 = this_01 + -8;
      uVar3 = F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return uVar3;
  case 3: ;
    goto switchD_007b2dca_caseD_22;
  case 4: ;
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    iVar4 = param_4[2];
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(int *)(gen_frame + 0x18)) = iVar4;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = 1;
    do {
      this_00 = this_00 + -8;
      uVar3 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return uVar3;
  default: ;
    return uVar3;
  }
}

/* ref: FUN_007b2f50 */
uint F_007b2f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  uVar1 = F_00559b90(*param_2);
  if (uVar1 != 0) {
    F_005951c0(param_3,*(undefined4 *)(param_1 * 0x68 + 0x1d4 + (int)this),0,uVar1);
  }
  uVar1 = F_0042a990(param_1 * 0x68 + 0x180 + (int)this);
  F_00584110(this_00,uVar1);
  uVar1 = F_00568230(param_2[2],*(float *)(param_1 * 0x68 + 0x1e4 + (int)this));
  return uVar1;
}

/* ref: Client::UI2::AddonCabinet::vf25 */
uint F_007b2fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b2fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b2ff0 */
uint F_007b2ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b2ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + 0x15d0 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf41 */
byte F_007b3070(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CabinetWithdraw",0,6);
  return bVar1;
}

/* ref: FUN_007b3080 */
uint F_007b3080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  uVar1 = F_00559b90(*param_2);
  if (uVar1 != 0) {
    F_005951c0(param_3,*(undefined4 *)(param_1 * 0x60 + 0x1d8 + (int)this),0,uVar1);
  }
  uVar1 = F_0042a990(param_1 * 0x60 + 0x184 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf25 */
uint F_007b30e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b30e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b3110 */
uint F_007b3110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b3110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0x1444) != 0) {
    *(undefined1 *)((int)this + 0x180) = 1;
    F_00560760(((undefined1 *)(gen_frame + 0x0)));
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_1 * 0x60 + 0x1dc + (int)this);
    (*(undefined2 *)(gen_frame + 0xa)) = 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1444) + 0x50))))
                      (*(int * PTR32 *)((int)this + 0x1444),param_1);
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar2 + 0x70);
    }
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar2 = F_0055dcb0();
    in_EAX = F_00588780((undefined *)(uVar2 + 0xe0),4,(uint)bVar1,uVar3,((undefined1 *)(gen_frame + 0x0)),0,0);
  }
  return in_EAX;
}

/* ref: FUN_007b31a0 */
uint F_007b31a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b31a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x180) = 0;
  uVar1 = F_0055dcb0();
  uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0),param_1);
  return uVar1;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf41 */
byte F_007b3200(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"LegacyItemStorage",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf2 */
uint F_007b3210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b3210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 * this_00;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  uVar3 = param_1 & 0xffff;
  if (uVar3 == 0x1f) {
    uVar3 = *(uint *)(this + 0x3d80);
    if (uVar3 != param_4[2]) {
      F_00560760(&(*(undefined4 *)(gen_frame + 0x10)));
      iVar4 = param_4[2];
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 2)) = 9;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      AVar1 = this[iVar4 * 0x60 + 0x1dc];
      *(int *)(this + 0x3d80) = iVar4;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 3)) = AVar1;
      (*(undefined4 *)(gen_frame + 0x18)) = CONCAT13(AVar1,CONCAT12(9,(undefined2)(*(undefined4 *)(gen_frame + 0x18))));
      if (*param_4 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = *(undefined4 *)(*param_4 + 0x70);
      }
      AVar1 = this[0x13a];
      uVar3 = F_0055dcb0();
      uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),4,(uint)(byte)AVar1,param_1,&(*(undefined4 *)(gen_frame + 0x10)),0,0);
    }
  }
  else {
    if (uVar3 == 0x20) {
      uVar3 = F_0055dcb0();
      uVar3 = F_00594d90((undefined *)(uVar3 + 0xe0),0);
      return uVar3;
    }
    uVar3 = uVar3 - 0x21;
    if (uVar3 == 0) {
      uVar3 = F_0055dcb0();
      F_00594d90((undefined *)(uVar3 + 0xe0),0);
      *(int *)(this + 0x3d80) = param_4[2];
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      iVar4 = param_4[2];
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      uVar2 = *(undefined4 *)(this + iVar4 * 0x60 + 0x1dc);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
      (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar4 = 1;
      do {
        this_00 = this_00 + -8;
        uVar3 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf25 */
uint F_007b3350(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b3380 */
uint F_007b3380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  this_01 = (undefined *)F_00559ba0(param_2[2]);
  uVar1 = F_00559b90(*param_2);
  if (uVar1 != 0) {
    F_005951c0(param_3,*(undefined4 *)(param_1 * 0x60 + 0x1d4 + (int)this),0,uVar1);
  }
  uVar1 = F_00560910(*(undefined4 *)(param_1 * 0x60 + 0x1d8 + (int)this));
  F_00584110(this_01,uVar1);
  uVar1 = F_0042a990(((undefined *)GEN_TOP(((param_1 * 3 + 0xc) * 0x20 + (int)this))));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b3410 */
uint F_007b3410(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce0ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  puVar1 = (undefined4 *)((int)this + 0x194);
  local_8 = 0x14;
  do {
    puVar1[4] = puVar1[4] & 0xfffffffc;
    *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xf0;
    puVar1[0xb] = puVar1[0xb] & 0xfffffffc;
    *(byte *)(puVar1 + 0xc) = *(byte *)(puVar1 + 0xc) & 0xf0;
    puVar1[0x12] = puVar1[0x12] & 0xfffffffc;
    *(byte *)(puVar1 + 0x13) = *(byte *)(puVar1 + 0x13) & 0xf0;
    puVar1[0x19] = puVar1[0x19] & 0xfffffffc;
    *(byte *)(puVar1 + 0x1a) = *(byte *)(puVar1 + 0x1a) & 0xf0;
    puVar1[0x20] = puVar1[0x20] & 0xfffffffc;
    *(byte *)(puVar1 + 0x21) = *(byte *)(puVar1 + 0x21) & 0xf0;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[7] = 0xffffffff;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xe] = 0xffffffff;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x15] = 0xffffffff;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1c] = 0xffffffff;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1 = puVar1 + 0x23;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined1 *)((int)this + 0xc88) = 0;
  *(undefined4 *)((int)this + 0xc84) = 0xffffffff;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonGearSet::vf37 */
uint F_007b3520(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  F_005a92d0(this,1,0x2b,0);
  F_005a92d0(this,0,0x27,0);
  uVar1 = F_0055dcb0();
  this_00 = (undefined *)(uVar1 + 0xe0);
  if (*(int *)(this + 0x184) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x38))))(*(int * PTR32 *)(this + 0x184));
    F_00596b10(this_00,uVar1);
  }
  if (*(int *)(this + 0x180) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x38))))(*(int * PTR32 *)(this + 0x180));
    F_00596b10(this_00,uVar1);
  }
  if (*(int *)(this + 0x188) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x38))))(*(int * PTR32 *)(this + 0x188));
    F_00596b10(this_00,uVar1);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonGearSet::vf38 */
uint F_007b35b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b35b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonGearSet::vf41 */
byte F_007b35e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b35e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GearSetList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGearSet::vf45 */
unsigned int F_007b35f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b35f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0056ae10(this);
  return 0;
}

/* ref: Client::UI2::AddonGearSet::vf25 */
uint F_007b3600(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonGearSet::vf48 */
uint F_007b3670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b3670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_007b3680 */
uint F_007b3680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b3680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  byte * pbVar5;
  uint * puVar6;
  int local_20;
  int local_1c;
  undefined4 * local_18;
  undefined * local_14;
  byte local_10;
  undefined4 * local_c;
  undefined4 * local_8;
  
  iVar3 = (int)param_1;
  pvVar4 = this;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    local_c = (undefined4 *)((int)this + 0x19c);
    local_18 = (undefined4 *)((int)this + 0x1a0);
    local_8 = (undefined4 *)((int)this + 0x198);
    pbVar5 = (byte *)((int)this + 0x1a8);
    puVar6 = (uint *)((int)this + 0x1a4);
    param_1 = (int *)((int)this + 0x194);
    local_14 = (undefined *)0x0;
    local_20 = 2;
    local_1c = 0x28;
    pvVar4 = (undefined *)0x14;
    do {
      if (*((int *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20) + -0xc))) != 0) {
        *param_1 = local_20 + -2;
        *puVar6 = *puVar6 ^ (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + -8 + (int)pvVar4))) ^ *puVar6) & 3;
        *local_8 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + -4 + (int)pvVar4)));
        *local_c = *((undefined4 *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20))));
        uVar2 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 4 + (int)pvVar4)));
        local_14 = (undefined *)((int)local_14 + 1);
        param_1 = param_1 + 7;
        local_8 = local_8 + 7;
        local_c = local_c + 7;
        local_10 = (byte)uVar2;
        *pbVar5 = ((((byte)(uVar2 >> 3) & 1) * '\x02' | (byte)(uVar2 >> 2) & 1) * '\x02' |
                  (byte)(uVar2 >> 1) & 1) * '\x02' | *pbVar5 & 0xf0 | local_10 & 1;
        *local_18 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + -4 + local_1c)));
        puVar6 = puVar6 + 7;
        pbVar5 = pbVar5 + 0x1c;
        local_18 = local_18 + 7;
      }
      if (*((int *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20) + 8))) != 0) {
        *param_1 = local_20 + -1;
        *puVar6 = *puVar6 ^ (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xc + (int)pvVar4))) ^ *puVar6) & 3;
        *local_8 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x10 + (int)pvVar4)));
        *local_c = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x14 + (int)pvVar4)));
        uVar2 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x18 + (int)pvVar4)));
        local_14 = (undefined *)((int)local_14 + 1);
        param_1 = param_1 + 7;
        local_8 = local_8 + 7;
        local_c = local_c + 7;
        local_10 = (byte)uVar2;
        *pbVar5 = ((((byte)(uVar2 >> 3) & 1) * '\x02' | (byte)(uVar2 >> 2) & 1) * '\x02' |
                  (byte)(uVar2 >> 1) & 1) * '\x02' | *pbVar5 & 0xf0 | local_10 & 1;
        *local_18 = *((undefined4 *)GEN_TOP((local_1c + *(int *)(param_2 + 0x20))));
        puVar6 = puVar6 + 7;
        pbVar5 = pbVar5 + 0x1c;
        local_18 = local_18 + 7;
      }
      if (*((int *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20) + 0x1c))) != 0) {
        *param_1 = local_20;
        *puVar6 = *puVar6 ^ (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x20 + (int)pvVar4))) ^ *puVar6) & 3;
        *local_8 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x24 + (int)pvVar4)));
        *local_c = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x28 + (int)pvVar4)));
        uVar2 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x2c + (int)pvVar4)));
        local_14 = (undefined *)((int)local_14 + 1);
        param_1 = param_1 + 7;
        local_8 = local_8 + 7;
        local_c = local_c + 7;
        local_10 = (byte)uVar2;
        *pbVar5 = ((((byte)(uVar2 >> 3) & 1) * '\x02' | (byte)(uVar2 >> 2) & 1) * '\x02' |
                  (byte)(uVar2 >> 1) & 1) * '\x02' | *pbVar5 & 0xf0 | local_10 & 1;
        *local_18 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + local_1c)));
        puVar6 = puVar6 + 7;
        pbVar5 = pbVar5 + 0x1c;
        local_18 = local_18 + 7;
      }
      if (*((int *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20) + 0x30))) != 0) {
        *param_1 = local_20 + 1;
        *puVar6 = *puVar6 ^ (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x34 + (int)pvVar4))) ^ *puVar6) & 3;
        *local_8 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x38 + (int)pvVar4)));
        *local_c = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x3c + (int)pvVar4)));
        uVar2 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x40 + (int)pvVar4)));
        local_14 = (undefined *)((int)local_14 + 1);
        param_1 = param_1 + 7;
        local_8 = local_8 + 7;
        local_c = local_c + 7;
        local_10 = (byte)uVar2;
        *pbVar5 = ((((byte)(uVar2 >> 3) & 1) * '\x02' | (byte)(uVar2 >> 2) & 1) * '\x02' |
                  (byte)(uVar2 >> 1) & 1) * '\x02' | *pbVar5 & 0xf0 | local_10 & 1;
        *local_18 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 8 + local_1c)));
        puVar6 = puVar6 + 7;
        pbVar5 = pbVar5 + 0x1c;
        local_18 = local_18 + 7;
      }
      if (*((int *)GEN_TOP(((int)pvVar4 + *(int *)(iVar3 + 0x20) + 0x44))) != 0) {
        *param_1 = local_20 + 2;
        *puVar6 = *puVar6 ^ (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x48 + (int)pvVar4))) ^ *puVar6) & 3;
        *local_8 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4c + (int)pvVar4)));
        *local_c = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x50 + (int)pvVar4)));
        uVar2 = *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x54 + (int)pvVar4)));
        local_14 = (undefined *)((int)local_14 + 1);
        param_1 = param_1 + 7;
        local_8 = local_8 + 7;
        local_c = local_c + 7;
        local_10 = (byte)uVar2;
        *pbVar5 = ((((byte)(uVar2 >> 3) & 1) * '\x02' | (byte)(uVar2 >> 2) & 1) * '\x02' |
                  (byte)(uVar2 >> 1) & 1) * '\x02' | *pbVar5 & 0xf0 | local_10 & 1;
        *local_18 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc + local_1c)));
        puVar6 = puVar6 + 7;
        pbVar5 = pbVar5 + 0x1c;
        local_18 = local_18 + 7;
      }
      local_1c = local_1c + 0x14;
      iVar1 = local_20 + 3;
      pvVar4 = (undefined *)((int)pvVar4 + 100);
      local_20 = local_20 + 5;
    } while (iVar1 < 100);
    if ((*(int *)((int)this + 0x18c) != 0) &&
       (pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x7c))))
                                   (*(int * PTR32 *)((int)this + 0x18c)))), pvVar4 != local_14)) {
      F_0058d980(*(undefined4 *)((int)this + 0x18c),(uint)local_14);
      pvVar4 = (undefined *)F_0059d6a0(this,(-(uint)(local_14 != (undefined *)0x0) & 0xffffffac) + 0x65,1,0)
      ;
    }
  }
  return (uint)pvVar4;
}

/* ref: FUN_007b3aa0 */
uint F_007b3aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b3aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  uVar5 = (*(uint *)(gen_frame + 0x14));
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 0xc0)));
  piVar3 = *(int * PTR32 *)((int)this + 0x188);
  (*(uint *)(gen_frame + 0x18)) = 0xffffffff;
  if (iVar2 < 0) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x14)) = uVar5 & 0xffffff00;
    (*(uint *)(gen_frame + 0x18)) = 3;
  }
  else if ((((byte)*((undefined4 *)GEN_TOP(((int)this + (iVar2 + 0xf) * 0x1c))) & 3) == 1) &&
          ((*(byte *)((int)this + iVar2 * 0x1c + 0x1a8) & 0xe) == 0)) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x14)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3) << 8;
    (*(uint *)(gen_frame + 0x18)) = 4;
  }
  else {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),1);
  }
  ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(*(uint *)(gen_frame + 0x14)));
  uVar5 = (*(uint *)(gen_frame + 0x18));
  if (*(uint *)((int)this + 0xc84) != (*(uint *)(gen_frame + 0x18))) {
    uVar4 = F_0055dcb0();
    uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3);
    uVar5 = F_00596b10((undefined *)(uVar4 + 0xe0),uVar5);
    if (-1 < (int)(*(uint *)(gen_frame + 0x18))) {
      uVar5 = F_0055dcb0();
      uVar5 = F_0055b9a0(uVar5);
      (*(uint *)(gen_frame + 0x14)) = *(int *)(uVar5 + 0x9c);
      F_00560760(((undefined4 *)(gen_frame + 0x8)));
      bVar1 = *(byte *)((int)this + 0x13a);
      ((undefined4 *)(gen_frame + 0x8))[0] = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x14)) + 0x20) + (*(uint *)(gen_frame + 0x18)) * 4)));
      puVar6 = ((undefined4 *)(gen_frame + 0x8));
      (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
      uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3);
      uVar5 = F_00590ad0((undefined *)(uVar4 + 0xe0),2,(*(uint *)(gen_frame + 0x14)),uVar5,puVar6);
    }
    *(uint *)((int)this + 0xc84) = (*(uint *)(gen_frame + 0x18));
  }
  return uVar5;
}

/* ref: FUN_007b3bc0 */
uint F_007b3bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b3bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  bool bVar2;
  uint uVar3;
  byte * pbVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar2 = false;
  if (*(int *)((int)this + 0x18c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x78))))(*(int * PTR32 *)((int)this + 0x18c));
    uVar5 = 0;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x7c))))(*(int * PTR32 *)((int)this + 0x18c));
    if (uVar3 != 0) {
      pbVar4 = (byte *)((int)this + 0x1a4);
      do {
        if ((*(int *)(pbVar4 + -0x10) == param_1) || ((param_1 < 0 && ((*pbVar4 & 3) != 0)))) {
          F_005623b0(*(undefined * PTR32 *)((int)this + 0x18c),uVar5);
          uVar7 = 0;
          uVar6 = 1;
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x3c))))(*(int * PTR32 *)((int)this + 0x18c));
          F_0059b340(this,uVar3,uVar6,uVar7);
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x74))))(*(int * PTR32 *)((int)this + 0x18c),uVar5,0);
          bVar2 = true;
          break;
        }
        uVar5 = uVar5 + 1;
        pbVar4 = pbVar4 + 0x1c;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x7c))))(*(int * PTR32 *)((int)this + 0x18c));
      } while (uVar5 < uVar3);
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x18c);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,(uint)*(ushort *)(piVar1 + 0x30));
    if (bVar2) {
      return uVar3;
    }
    if ((*(int *)((int)this + 0x18c) != 0) &&
       (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x7c))))(*(int * PTR32 *)((int)this + 0x18c)),
       uVar3 != 0)) {
      uVar7 = 0;
      uVar6 = 1;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x3c))))(*(int * PTR32 *)((int)this + 0x18c));
      F_0059b340(this,uVar3,uVar6,uVar7);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x74))))(*(int * PTR32 *)((int)this + 0x18c),0,0);
      return uVar3;
    }
  }
  uVar7 = 0;
  uVar6 = 1;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x3c))))(*(int * PTR32 *)((int)this + 0x184));
  uVar3 = F_0059b340(this,uVar3,uVar6,uVar7);
  return uVar3;
}

/* ref: FUN_007b3cf0 */
uint F_007b3cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  undefined3 extraout_var = 0;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pvVar6 = (undefined *)*param_2;
  piVar1 = (int *)((int)this + param_1 * 0x1c + 0x194);
  uVar3 = param_1;
  if (pvVar6 != (undefined *)0x0) {
    F_0055a300(pvVar6,1);
    uVar7 = 0x11;
    if ((piVar1[4] & 3U) == 1) {
      uVar7 = 0x65;
    }
    else if ((piVar1[4] & 3U) == 2) {
      uVar7 = 0x66;
    }
    uVar3 = F_0059d640(pvVar6,uVar7);
  }
  pvVar6 = (undefined *)param_2[1];
  if (pvVar6 != (undefined *)0x0) {
    uVar4 = F_00559ba0(pvVar6);
    uVar3 = 0;
    if (uVar4 != 0) {
      F_0055a300(pvVar6,1);
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      iVar5 = *piVar1 + 1;
      pvVar6 = (undefined *)F_00559ba0(pvVar6);
      uVar3 = F_0057eb30(pvVar6,iVar5,uVar7,uVar8,uVar9,uVar10);
    }
  }
  pvVar6 = (undefined *)param_2[2];
  if (pvVar6 != (undefined *)0x0) {
    F_0055a300(pvVar6,1);
    uVar3 = F_005951c0(param_3,piVar1[1],0,pvVar6);
  }
  pvVar6 = (undefined *)param_2[3];
  if (pvVar6 != (undefined *)0x0) {
    uVar4 = F_00559ba0(pvVar6);
    uVar3 = 0;
    if (uVar4 != 0) {
      F_0055a300(pvVar6,1);
      iVar5 = piVar1[3];
      pvVar6 = (undefined *)F_00559ba0(pvVar6);
      uVar3 = F_00584110(pvVar6,iVar5);
    }
  }
  pvVar6 = (undefined *)param_2[4];
  if (pvVar6 != (undefined *)0x0) {
    F_0055a300(pvVar6,1);
    bVar2 = *(byte *)(piVar1 + 5);
    if ((bVar2 & 1) != 0) {
      uVar3 = F_0059d640(pvVar6,0x65);
      return uVar3;
    }
    if ((bVar2 & 6) == 0) {
      if ((bVar2 & 8) != 0) {
        uVar3 = F_0059d640(pvVar6,0x67);
        return uVar3;
      }
      bVar2 = F_0055a300(pvVar6,0);
      return CONCAT31(extraout_var,bVar2);
    }
    uVar3 = F_0059d640(pvVar6,0x66);
  }
  return uVar3;
}

/* ref: FUN_007b3e20 */
uint F_007b3e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  this_00 = (gen_frame + 0x1c);
  F_00557670(param_2,0);
  piVar1 = *(int * PTR32 *)((int)this + 0x18c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (param_1 == 1) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
  }
  else if (param_1 == 2) {
    if (piVar1 != (int *)0x0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
      (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    }
  }
  else if (param_1 == 3) {
    if ((piVar1 == (int *)0x0) || (piVar1[0x30] < 0)) goto LAB_007b3f04;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    uVar4 = *(undefined4 *)((int)this + piVar1[0x30] * 0x1c + 0x194);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar4;
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    F_0059b340(this,uVar2,uVar4,uVar5);
  }
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
LAB_007b3f04: ;
  iVar3 = 1;
  do {
    this_00 = this_00 + -8;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007b3f30 */
uint F_007b3f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = F_00557670(param_2,0);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  if (*(int *)((int)this + 0x18c) != 0) {
    piVar1 = (int *)((int)this + param_3[2] * 0x1c + 0x194);
    this_00 = (undefined *)F_005ab2b0((undefined *)*param_3,*piVar1,
                                   *(undefined4 *)((int)this + param_3[2] * 0x1c + 0x19c),0);
    uVar2 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_0058ea90(this_00,*piVar1 + 1);
    }
  }
  return uVar2;
}

/* ref: FUN_007b3fa0 */
uint F_007b3fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b3fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  uVar2 = F_00557670(param_2,0);
  if (*(undefined * PTR32 *)((int)this + 0x18c) != (undefined *)0x0) {
    uVar2 = F_005623b0(*(undefined * PTR32 *)((int)this + 0x18c),*(undefined4 *)(param_3 + 8));
  }
  if (*(char *)(param_3 + 0x10) == '\0') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + *(int *)(param_3 + 8) * 0x1c + 0x194)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar3 = 1;
    do {
      this_00 = this_00 + -8;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_007b4040 */
uint F_007b4040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  if ((char)param_3[1] == '\0') {
    if (param_1 == 3) {
      in_EAX = 0;
      if (*param_3 == 2) {
        F_00557670(param_2,0);
        in_EAX = F_0059b390(this,*(undefined4 *)((int)this + 0x18c),1,0);
      }
    }
    else {
      in_EAX = param_1 - 4;
      if ((((in_EAX == 0) && (*param_3 == 5)) &&
          (in_EAX = *(uint *)((int)this + 0x18c), in_EAX != 0)) && (-1 < *(int *)(in_EAX + 0xcc))) {
        F_00557670(param_2,0);
        F_005623b0(*(undefined * PTR32 *)((int)this + 0x18c),
                     *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x18c) + 0xcc))));
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
        (*(undefined4 *)(gen_frame + 0x10)) = 4;
        uVar1 = *((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 0xc0))) * 0x1c + 0x194)));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
        (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar3 = 1;
        do {
          this_00 = this_00 + -8;
          uVar2 = F_005a2670(this_00);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        return uVar2;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_007b4150 */
unsigned int F_007b4150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (param_1 == 5) {
    F_0056b630(this,0x18aee,7,0,9,0,0);
  }
  return 0;
}

/* ref: FUN_007b4180 */
unsigned int F_007b4180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (param_1 == 5) {
    F_0056b780(this,0);
  }
  return 0;
}

/* ref: FUN_007b41a0 */
uint F_007b41a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b41a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00557670(param_2,0);
  uVar1 = F_007b3aa0(this);
  return uVar1;
}

/* ref: FUN_007b41c0 */
uint F_007b41c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b41c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = F_00557670(param_2,0);
  if (*(int *)((int)this + 0x18c) != 0) {
    iVar6 = (int)this + param_3[2] * 0x1c + 0x194;
    bVar1 = *(byte *)(iVar6 + 0x14);
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) == 0) {
            return CONCAT31((int3)((uint)iVar6 >> 8),bVar1);
          }
          iVar6 = 8;
        }
        else {
          iVar6 = 7;
        }
      }
      else {
        iVar6 = 6;
      }
    }
    else {
      iVar6 = 5;
    }
    uVar5 = F_0055dcb0();
    uVar5 = F_0055b9a0(uVar5);
    iVar2 = *(int *)(uVar5 + 0x9c);
    F_00560760(((undefined4 *)(gen_frame + 0x0)));
    iVar3 = *param_3;
    bVar1 = *(byte *)((int)this + 0x13a);
    ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + iVar6 * 4)));
    uVar4 = *(undefined4 *)(iVar3 + 0x1e4);
    uVar5 = F_0055dcb0();
    uVar5 = F_00588780((undefined *)(uVar5 + 0xe0),2,(uint)bVar1,uVar4,((undefined4 *)(gen_frame + 0x0)),0,0);
  }
  return uVar5;
}

/* ref: FUN_007b4290 */
uint F_007b4290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00557670(param_2,0);
  uVar1 = F_0055dcb0();
  uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0),0);
  return uVar1;
}

/* ref: FUN_007b42c0 */
uint F_007b42c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b42c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce1ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0xffffffff;
  puVar1 = (undefined4 *)((int)this + 0x188);
  iVar2 = 0xd;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonGearSetView::vf37 */
uint F_007b4350(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x2b,0);
  F_005a92d0(this,0,0x27,0);
  F_005a92d0(this,1,0x40,0);
  F_005a92d0(this,0,0x3b,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonGearSetView::vf41 */
byte F_007b4390(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GearSetView",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGearSetView::vf25 */
uint F_007b43a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b43a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a9130(this,0xffffffff);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  return uVar1;
}

/* ref: FUN_007b43c0 */
uint F_007b43c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b43c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  pvVar4 = (undefined *)param_2[2];
  uVar3 = param_1 * 5;
  iVar1 = param_1 * 0x14;
  if (pvVar4 != (undefined *)0x0) {
    F_0055a300(pvVar4,1);
    uVar3 = F_005951c0(param_3,*(undefined4 *)((int)this + iVar1 + 0x18c),0,pvVar4);
  }
  if ((undefined *)param_2[1] != (undefined *)0x0) {
    uVar3 = F_0059d670((undefined *)param_2[1],
                         ((*(int *)((int)this + iVar1 + 400) < 1) - 1 & 0xffffffac) + 0x65);
  }
  if (0 < *(int *)((int)this + iVar1 + 400)) {
    pvVar4 = (undefined *)param_2[3];
    if (pvVar4 != (undefined *)0x0) {
      F_0055a300(pvVar4,1);
      uVar3 = F_005951c0(param_3,*(undefined4 *)((int)this + iVar1 + 400),0,pvVar4);
    }
    pvVar4 = (undefined *)param_2[4];
    if (pvVar4 != (undefined *)0x0) {
      F_0055a300(pvVar4,1);
      uVar5 = *(undefined4 *)((int)this + iVar1 + 0x194);
      pvVar4 = (undefined *)F_00559ba0(pvVar4);
      uVar3 = F_00584110(pvVar4,uVar5);
    }
    pvVar4 = (undefined *)*param_2;
    if (pvVar4 != (undefined *)0x0) {
      F_0055a300(pvVar4,1);
      bVar2 = *(byte *)((int)this + iVar1 + 0x199);
      uVar5 = 0x11;
      if ((bVar2 & 1) != 0) {
        uVar3 = F_0059d670(pvVar4,0x65);
        return uVar3;
      }
      if ((bVar2 & 6) != 0) {
        uVar3 = F_0059d670(pvVar4,0x66);
        return uVar3;
      }
      if ((bVar2 & 8) != 0) {
        uVar5 = 0x67;
      }
      uVar3 = F_0059d670(pvVar4,uVar5);
    }
  }
  return uVar3;
}

/* ref: FUN_007b44c0 */
uint F_007b44c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b44c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  
  uVar4 = F_00557670(param_2,0);
  if (*(int *)((int)this + 0x180) == 0) {
    return uVar4;
  }
  F_00560760(&(*(uint *)(gen_frame + 0x0)));
  iVar6 = param_3[2];
  bVar2 = *(byte *)((int)this + iVar6 * 0x14 + 0x199);
  uVar4 = CONCAT31((int3)((uint)iVar6 >> 8),bVar2);
  piVar1 = (int *)((int)this + iVar6 * 0x14 + 0x188);
  bVar5 = 0;
  if ((bVar2 & 1) == 0) {
    if ((bVar2 & 2) == 0) {
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 8) == 0) goto LAB_007b4549;
        iVar6 = 2;
      }
      else {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = 0;
    }
  }
  else {
    iVar6 = 1;
  }
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9a0(uVar4);
  uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar4 + 0xec) + 0x20))) + iVar6 * 4)));
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  bVar5 = 2;
LAB_007b4549: ;
  if (0 < *piVar1) {
    (*(undefined1 *)(gen_frame + 0xa)) = 0xb;
    (*(int *)(gen_frame + 0x4)) = *piVar1;
    (*(undefined1 *)(gen_frame + 0xb)) = (char)piVar1[4];
    bVar2 = *(byte *)((int)this + 0x13a);
    uVar3 = *(undefined4 *)(*param_3 + 0x1e4);
    uVar4 = F_0055dcb0();
    uVar4 = F_00588780((undefined *)(uVar4 + 0xe0),(uint)(bVar5 | 4),(uint)bVar2,uVar3,&(*(uint *)(gen_frame + 0x0)),0,0);
  }
  return uVar4;
}

/* ref: FUN_007b45b0 */
uint F_007b45b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b45b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  ((uint *)(gen_frame + 0x0))[0xe] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  ((uint *)(gen_frame + 0x0))[0] = 0;
  ((uint *)(gen_frame + 0x0))[1] = 1;
  ((uint *)(gen_frame + 0x0))[2] = 2;
  ((uint *)(gen_frame + 0x0))[3] = 3;
  ((uint *)(gen_frame + 0x0))[4] = 4;
  ((uint *)(gen_frame + 0x0))[5] = 5;
  ((uint *)(gen_frame + 0x0))[6] = 6;
  ((uint *)(gen_frame + 0x0))[7] = 7;
  ((uint *)(gen_frame + 0x0))[8] = 9;
  ((uint *)(gen_frame + 0x0))[9] = 8;
  ((uint *)(gen_frame + 0x0))[10] = 10;
  ((uint *)(gen_frame + 0x0))[0xb] = 0xc;
  ((uint *)(gen_frame + 0x0))[0xc] = 0xb;
  ((uint *)(gen_frame + 0x0))[0xd] = 0xd;
  uVar1 = ((uint *)(gen_frame + 0x0))[(int)(param_1)];
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_007b4640 */
uint F_007b4640(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce2ec));
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x21c) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonTrade::vf36 */
uint F_007b4750(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 500) = 0;
  return 0;
}

/* ref: Client::UI2::AddonTrade::vf41 */
byte F_007b47a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b47a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Trade",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTrade::vf25 */
uint F_007b47b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b47b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonTrade::vf52 */
byte F_007b4810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b4810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * this_00;
  int iVar1;
  
  this_00 = (gen_frame + 0x1c);
  if ((*param_1 == 5) && ((char)param_1[1] == '\0')) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    *(undefined4 *)(this + 0x21c) = 0xffffffff;
    iVar1 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    return 1;
  }
  return 0;
}

/* ref: FUN_007b4880 */
uint F_007b4880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint * this_00;
  int iVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  piVar1 = (int *)*param_3;
  if ((*(byte *)(piVar1 + 5) & 4) != 0) {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
    *(undefined1 *)(param_2 + 0x15) = 0;
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c));
    return (uint)param_3;
  }
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  uVar2 = *puVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  uVar2 = puVar4[1];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x22;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar3 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x8)));
  F_005a2670(((undefined1 *)(gen_frame + 0x0)));
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar5 = 3;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_007b4970 */
uint F_007b4970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b4970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b49c0 */
uint F_007b49c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b49c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b4a20 */
uint F_007b4a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b4a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b4a80 */
unsigned int F_007b4a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  if (*(char *)((int)this + 0x220) == '\0') {
    iVar2 = *(int *)((int)this + param_1 * 4 + 0x1d0);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x84) + 0xc))))(iVar2 + 0x84);
    uVar1 = F_0055a2d0(uVar1);
    if ((char)uVar1 != '\0') {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
      (*(int *)(gen_frame + 0x18)) = param_1;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      F_0056b630(this,0x18ad8,7,0,9,0,0);
      iVar2 = 1;
      do {
        this_00 = this_00 + -8;
        F_005a2670(this_00);
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
  }
  return 0;
}

/* ref: FUN_007b4b30 */
uint F_007b4b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b4b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5);
  piVar2 = (int *)*param_3;
  iVar3 = *(int *)(uVar5 + 0x2c);
  if (piVar2 != (int *)0x0) {
    iVar4 = *(int *)((int)this + param_1 * 4 + 0x1d0);
    puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    *puVar6 = 0x22;
    uVar1 = *(ushort *)(iVar4 + 0x9c);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x28))((int *)*param_3);
    *(uint *)(uVar5 + 4) = (uint)uVar1;
    iVar3 = *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x10 + (uint)*(ushort *)(iVar4 + 0x9c) * 0x14)));
    F_00561860(*(undefined * PTR32 *)(iVar4 + 0xa4),(uint)((byte)iVar3 & 1));
    uVar5 = F_005a03c0(*(undefined * PTR32 *)(iVar4 + 0xa4),iVar3 >> 1);
  }
  return uVar5;
}

/* ref: Client::UI2::AddonTrade::vf53 */
uint F_007b4bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b4bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = 0;
  if ((char)param_1 != '\0') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 4;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonTrade::vf2 */
uint F_007b4c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b4c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 uVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined1 * this_00;
  
  if ((short)param_1 == 0x11) {
    piVar4 = param_2;
    if ((int *)0x2 < param_2) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + (int)((int)(uintptr_t)param_2) * 4 + 0x1c4) + 0x84))) + 0xc))))
                        (*(int *)(this + (int)((int)(uintptr_t)param_2) * 4 + 0x1c4) + 0x84);
      uVar3 = F_0055a2d0(uVar3);
      if ((char)uVar3 != '\0') {
        F_0056b630(this,0xd1,7,0,9,0,0);
        uVar3 = F_00557670(param_3,0);
        return uVar3;
      }
      F_0056b630(this,0x18ad8,7,0,9,0,0);
      uVar3 = F_00557670(param_3,0);
      return uVar3;
    }
  }
  else {
    if ((short)param_1 == 0x12) {
      F_0056b780(this,0);
      uVar3 = F_00557670(param_3,0);
      return uVar3;
    }
    if ((short)param_1 == 0xc) {
      piVar4 = param_4;
      if (*param_4 == 1) {
        cVar1 = (char)param_4[1];
        piVar4 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)param_4) >> 8),cVar1)));
        if (cVar1 == '\x01') {
          if (param_2 == *(int * PTR32 *)(this + 0x21c)) {
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + (int)((int)(uintptr_t)param_2) * 4 + 0x1d0) + 0x84))) + 0xc))))
                              (*(int *)(this + (int)((int)(uintptr_t)param_2) * 4 + 0x1d0) + 0x84);
            uVar3 = F_0055a2d0(uVar3);
            if ((char)uVar3 == '\0') {
              uVar2 = *(undefined4 *)(this + 0x21c);
              (*(undefined4 *)(gen_frame + 0x4)) = 0;
              (*(undefined4 *)(gen_frame + 0xc)) = 0;
              F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
              (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
              F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
              (*(undefined4 *)(gen_frame + 0x8)) = 5;
              uVar3 = F_0055dcb0();
              ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x14)),1);
              F_005a2670(((undefined1 *)(gen_frame + 0x14)));
              F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
              F_0056b630(this,0x18ad8,7,0,9,0,0);
              this_00 = ((undefined1 *)(gen_frame + 0x14));
              iVar5 = 1;
              do {
                this_00 = this_00 + -8;
                F_005a2670(this_00);
                iVar5 = iVar5 + -1;
              } while (-1 < iVar5);
            }
          }
          *(undefined4 *)(this + 0x21c) = 0xffffffff;
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
        if (cVar1 == '\0') {
          *(int * PTR32 *)(this + 0x21c) = param_2;
          return (uint)piVar4;
        }
      }
    }
    else {
      if ((short)param_1 == 0x17) {
        if (param_2 == (int *)0x0) {
          F_007b4970(this,param_3,param_4);
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
        if (param_2 == (int *)0x1) {
          F_007b49c0(this,param_3,param_4);
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
        if (param_2 == (int *)0x2) {
          F_007b4a20(this,param_3,param_4);
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
      }
      else if ((short)param_1 == 0x30) {
        if (param_2 + -2 < &REFG(undefined, 0x5)) {
          F_007b4880(this,param_2 + -2,param_3,param_4);
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
      }
      else if ((short)param_1 == 0x34) {
        if ((int)param_2 - 0xdU < 5) {
          F_007b4a80(this,(int)param_2 - 0xdU,param_3,param_4);
          uVar3 = F_00557670(param_3,0);
          return uVar3;
        }
      }
      else {
        if ((short)param_1 != 0x2d) {
          return CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
        }
        if ((int)param_2 - 3U < 5) {
          F_007b4b30(this,(int)param_2 - 3U,param_3,param_4);
        }
      }
      piVar4 = (int *)F_00557670(param_3,0);
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_007b4ee0 */
uint F_007b4ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x88;
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x7f ^
       *(byte *)((int)this + 0xf9);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce3ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonCrossEditor::vf37 */
uint F_007b4f50(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,0,0x2f,0);
  F_005a92d0(this,1,0x33,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCrossEditor::vf41 */
byte F_007b4f80(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ActionCrossEditor",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCrossEditor::vf52 */
byte F_007b4f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b4f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  bVar1 = 0;
  if ((*param_1 == 2) && (*(int *)(this + 0x194) == 2)) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: Client::UI2::AddonCrossEditor::vf25 */
uint F_007b4fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b4fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b5020 */
uint F_007b5020(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce4ec));
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined2 *)((int)this + 0x2b8) = 0;
  F_00c48350((undefined *)((int)this + 0x180),0,0x130);
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsInfo::vf25 */
uint F_007b5080(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonContentsInfo::vf36 */
uint F_007b50b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b50b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(undefined2 *)(this + 0x136) = 0x17;
  uVar1 = F_0055e2a0(this,0x1000000,1);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsInfo::vf37 */
uint F_007b50f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b50f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,0,2,0);
  F_005a92d0(this,1,3,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsInfo::vf41 */
byte F_007b5120(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ContentsInfo",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContentsInfo::vf47 */
uint F_007b5130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00591c00(*(undefined * PTR32 *)(this + 0x194),
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x20))) + 0xd0))),0);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsInfo::vf2 */
unsigned int F_007b5160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b5160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_007b5170 */
uint F_007b5170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_0055e2f0(this,param_1);
  this_00 = (undefined *)F_00559c20(uVar1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00561530(this_00,2);
    *param_2 = uVar1;
    uVar1 = F_00561550(this_00,3);
    param_2[1] = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007b51b0 */
uint F_007b51b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b51b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_0055e2f0(this,param_1);
  this_00 = (undefined *)F_00559c20(uVar1);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    *param_2 = this_00;
    uVar1 = F_0055e2f0(this,param_1);
    param_2[1] = uVar1;
    uVar1 = F_00561530(this_00,4);
    param_2[2] = uVar1;
    uVar1 = F_00561550(this_00,3);
    param_2[3] = uVar1;
    uVar1 = F_00561530(this_00,5);
    param_2[4] = uVar1;
    uVar1 = F_00561530(this_00,6);
    param_2[5] = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007b5220 */
uint F_007b5220(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(undefined1 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce5ec));
  return (uint)this;
}

/* ref: Client::UI2::AddonMovieSubtitle::vf38 */
uint F_007b52a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b52a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 * this;
  
  this = (gen_frame + 0x1c);
  bVar1 = F_0055dcc0(param_1);
  if ((bVar1 != 0) && (*(char *)((int)param_1 + 0x180) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x180) = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    bVar1 = F_0055dcc0(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),2);
    (*(byte *)(gen_frame + 0x18)) = bVar1;
    F_005a9110(param_1,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar3 = 1;
    do {
      this = this + -8;
      F_005a2670(this);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonMovieSubtitleOpening::vf41 */
byte F_007b5330(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(uVar2 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))) {
  case (undefined *)0x0: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_Ja",0,6);
    return bVar1;
  default: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_En",0,6);
    return bVar1;
  case (undefined *)0x2: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_De",0,6);
    return bVar1;
  case (undefined *)0x3: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_Fr",0,6);
    return bVar1;
  case (undefined *)0x4: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_Chs",0,6);
    return bVar1;
  case (undefined *)0x5: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Opening_Cht",0,6);
    return bVar1;
  }
}

/* ref: Client::UI2::AddonMovieSubtitleOpening::vf44 */
uint F_007b5400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  uint uVar2;
  
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e360(this,2);
  uVar2 = F_0055da10(uVar2);
  fVar1 = REFG(float, 0x10a0da0);
  *(uint *)(this + 0x188) = uVar2;
  F_0055e1c0(this,fVar1,0,0,(float)(float10)1,1);
  F_0055e220(this,REFG(float, 0x10a0da0),0,0,(float)(float10)1,1);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar2;
}

/* ref: Client::UI2::AddonMovieSubtitleOpening::vf46 */
byte F_007b5480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5480u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  
  if (0 < (*(int *)&gen_args[1])) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
    F_004142d0(&(*(int *)&gen_args[1]),*(undefined4 *)(uVar1 + 0x14));
    if (((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) != 0) && ((*(byte * PTR32 *)&gen_args[2])[4] != 0)) {
      if (((*(byte * PTR32 *)&gen_args[2])[8] & 0xf) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0xc)));
      }
      F_0059d670(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),*(int *)(&REFG(undefined, 0x10c22d4) + (*(int *)&gen_args[1]) * 4) + iVar2);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),0);
      return 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))((*(undefined * PTR32 *)&gen_args[0]),0,0);
  }
  return 1;
}

/* ref: Client::UI2::AddonMovieSubtitleVoyage::vf41 */
byte F_007b5500(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(uVar2 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))) {
  case (undefined *)0x0: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_Ja",0,6);
    return bVar1;
  default: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_En",0,6);
    return bVar1;
  case (undefined *)0x2: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_De",0,6);
    return bVar1;
  case (undefined *)0x3: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_Fr",0,6);
    return bVar1;
  case (undefined *)0x4: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_Chs",0,6);
    return bVar1;
  case (undefined *)0x5: ;
    bVar1 = F_00572e60(this,"MovieSubtitle_Voyage_Cht",0,6);
    return bVar1;
  }
}

/* ref: Client::UI2::AddonMovieSubtitleVoyage::vf44 */
uint F_007b55d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b55d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  uint uVar2;
  
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e360(this,2);
  uVar2 = F_0055da10(uVar2);
  fVar1 = REFG(float, 0x10a0da0);
  *(uint *)(this + 0x188) = uVar2;
  F_0055e1c0(this,fVar1,0,0,(float)(float10)1,1);
  F_0055e220(this,REFG(float, 0x10a0da0),0,0,(float)(float10)1,1);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar2;
}

/* ref: Client::UI2::AddonMovieSubtitleVoyage::vf46 */
byte F_007b5650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5650u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  
  if (0 < (*(int *)&gen_args[1])) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
    F_004142d0(&(*(int *)&gen_args[1]),*(undefined4 *)(uVar1 + 0x14));
    if (((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) != 0) && ((*(byte * PTR32 *)&gen_args[2])[4] != 0)) {
      if (((*(byte * PTR32 *)&gen_args[2])[8] & 0xf) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0xc)));
      }
      F_0059d670(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),*(int *)(&REFG(undefined, 0x10c22ec) + (*(int *)&gen_args[1]) * 4) + iVar2);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),0);
      return 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))((*(undefined * PTR32 *)&gen_args[0]),0,0);
  }
  return 1;
}

/* ref: FUN_007b56d0 */
uint F_007b56d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b56d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce6ec));
  F_0055e2a0(this,0x1000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonPadMouseMode::vf41 */
byte F_007b5740(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"PadMouseMode",0,6);
  return bVar1;
}

/* ref: FUN_007b5780 */
uint F_007b5780(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce7ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined1 *)((int)this + 0x1b0) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonBank::vf41 */
byte F_007b5820(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,&REFG(undefined, 0x10c2468),0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonBank::vf25 */
uint F_007b5830(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonBank::vf38 */
uint F_007b5890(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b5890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  char cVar1;
  int iVar2;
  uint uVar3;
  
  F_005a2370(param_1,param_2);
  iVar2 = *(int *)(param_1 + 0x180);
  uVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x84);
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
    if (*(char *)(param_1 + 0x1b0) != cVar1) {
      *(char *)(param_1 + 0x1b0) = cVar1;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18c) + 0x28))))
                        (*(int * PTR32 *)(param_1 + 0x18c),(uint)(cVar1 == '\0'));
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonBank::vf52 */
byte F_007b58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b58e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*param_1 != 2) {
    return 0;
  }
  uVar1 = F_0055dcb0();
  uVar1 = F_00558e10(*(undefined4 *)(uVar1 + 0x18));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x3c))))(*(int * PTR32 *)(this + 0x184));
  if (uVar1 != uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x3c))))(*(int * PTR32 *)(this + 0x188));
    if (uVar1 != uVar2) {
      F_0059b390(this,*(undefined4 *)(this + 0x184),1,0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007b5960 */
uint F_007b5960(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b59b0 */
uint F_007b59b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b59b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b5a10 */
uint F_007b5a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b5a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonBuddy::vf37 */
uint F_007b5a90(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pAVar4;
  undefined * pAVar5;
  int iVar6;
  int local_10;
  int local_8;
  
  F_005a92d0(this,1,0x38,0);
  F_005a92d0(this,0,0x34,0);
  if (*(undefined * PTR32 *)(this + 0x1cc) != (undefined *)0x0) {
    F_00597570(*(undefined * PTR32 *)(this + 0x1cc));
  }
  if (*(undefined * PTR32 *)(this + 0x1d0) != (undefined *)0x0) {
    F_00597570(*(undefined * PTR32 *)(this + 0x1d0));
  }
  pAVar4 = this + 0x1f8;
  iVar6 = 6;
  do {
    if (*(undefined * PTR32 *)pAVar4 != (undefined *)0x0) {
      F_00597570(*(undefined * PTR32 *)pAVar4);
    }
    pAVar4 = pAVar4 + 0x28;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  pAVar4 = this + 0x2f4;
  local_10 = 3;
  do {
    local_8 = 10;
    pAVar5 = pAVar4;
    do {
      if (*(int *)pAVar5 != 0) {
        uVar2 = F_0055dcb0();
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar5 + 0x38))))(*(int * PTR32 *)pAVar5);
        F_00596b10((undefined *)(uVar2 + 0xe0),uVar3);
      }
      pAVar5 = pAVar5 + 0x2c;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    pAVar4 = pAVar4 + 0x1c4;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  pAVar4 = this + 0x838;
  local_10 = 3;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar1 = *(undefined4 *)(*(int *)pAVar4 + 0x70);
      uVar2 = F_0055dcb0();
      F_00596b10((undefined *)(uVar2 + 0xe0),uVar1);
    }
    pAVar4 = pAVar4 + 8;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  pAVar4 = this + 0x1a8;
  iVar6 = 3;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar2 = F_0055dcb0();
      F_00596b10((undefined *)(uVar2 + 0xe0),*(int *)pAVar4);
    }
    pAVar4 = pAVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonBuddy::vf41 */
byte F_007b5bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Buddy",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonBuddy::vf25 */
uint F_007b5bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b5bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007b5c40 */
unsigned int F_007b5c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b5c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  uVar1 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    if (((*(byte * PTR32 *)&gen_args[4])[0x18] & 0xf) == 0) {
      (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))) = 0;
    }
    else {
      (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))) = (undefined2)*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x1c)));
    }
    F_0056e4d0(this_00,(uint)((char)((ushort)(*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))) >> 8) != '\0'));
    *(undefined2 *)((int)this_00 + 0x9c) = (undefined2)(*(undefined4 *)&gen_args[2]);
    if ((*(*(byte * PTR32 *)&gen_args[4]) & 0xf) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 4)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this_00 + 0x84) + 0x28))))((int)this_00 + 0x84);
    *(undefined4 *)((int)this_00 + 0x98) = 0x10000;
    F_00595560(this_00,uVar1);
    if (((*(byte * PTR32 *)&gen_args[4])[0x10] & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x14)));
    }
    F_00560760(&(*(undefined4 *)(gen_frame + 0xc)));
    (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[2]);
    (*(undefined2 *)(gen_frame + 0x16)) = 1;
    F_005916c0(this_00,6,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x13a),&(*(undefined4 *)(gen_frame + 0xc)));
    uVar3 = iVar2 >> 0x10 & 0xffff;
    if ((uVar3 < 2) && ((char)(*(undefined * PTR32 *)&gen_args[1]) != '\x05')) {
      F_00584110(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0xa4) + 0xbc))),&REFG(undefined, 0x10beae6));
    }
    else {
      F_0057eb30(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0xa4) + 0xbc))),uVar3,0,0,0,0);
    }
    if (((*(byte * PTR32 *)&gen_args[4])[0x20] & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x24)));
    }
    F_00561860(*(undefined * PTR32 *)((int)this_00 + 0xa4),(uint)((byte)iVar2 & 1));
    F_005a03c0(*(undefined * PTR32 *)((int)this_00 + 0xa4),iVar2 >> 1);
  }
  return 0;
}

/* ref: FUN_007b5d80 */
unsigned int F_007b5d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b5d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (param_1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 9;
    *(undefined2 *)(param_1 + 8) = 0;
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 4);
    }
    uVar4 = uVar2 >> 0x18;
    if ((param_2[8] & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 0xc);
    }
    param_1[2] = iVar5;
    if ((param_2[0x10] & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x14);
    }
    param_1[5] = iVar5;
    if ((param_2[0x18] & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x1c);
    }
    *(bool *)(param_1 + 8) = iVar3 != 0;
    param_1[4] = uVar2 & 0xffffff;
    param_1[7] = uVar4;
    if (uVar4 == 4) {
      param_1[3] = 0x80000;
      param_1[6] = 0x11;
    }
    else if (uVar4 == 8) {
      param_1[3] = 0x1000000;
      param_1[6] = 0x19;
    }
    if ((undefined *)*param_1 != (undefined *)0x0) {
      F_00595560((undefined *)*param_1,iVar5);
      *(short *)(*param_1 + 0x9c) = (short)param_1[4];
      *(int *)(*param_1 + 0x98) = param_1[3];
      F_00563050(*param_1,(uint)*(byte *)(param_1 + 8));
      pbVar1 = (byte *)(*param_1 + 0xaa);
      *pbVar1 = *pbVar1 ^ (((char)param_1[8] == '\0') * '\x02' ^ *(byte *)(*param_1 + 0xaa)) & 2;
      *(undefined1 *)(*param_1 + 0xa9) = 2;
      F_00560760(((undefined1 *)(gen_frame + 0xc)));
      (*(undefined1 *)(gen_frame + 0x16)) = (char)param_1[6];
      (*(int *)(gen_frame + 0x10)) = param_1[4];
      (*(undefined1 *)(gen_frame + 0x17)) = 0;
      F_005916c0((undefined *)*param_1,8,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x13a),((undefined1 *)(gen_frame + 0xc)));
    }
    if ((undefined *)param_1[1] != (undefined *)0x0) {
      F_00584110((undefined *)param_1[1],param_1[2]);
    }
  }
  return 0;
}

/* ref: FUN_007b5ed0 */
uint F_007b5ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b5ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)0x0) {
    uVar1 = *(ushort *)(piVar2 + 6);
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2);
    *(uint *)(uVar3 + 4) = (uint)uVar1;
  }
  uVar3 = F_00557670(param_1,0);
  return uVar3;
}

/* ref: FUN_007b5f00 */
uint F_007b5f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b5f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar3 = *param_4;
  if (iVar3 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    uVar1 = *(ushort *)(iVar3 + 0x18);
    (*(undefined4 *)(gen_frame + 0x4)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = (uint)uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = param_2;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar2 = F_00557670(param_3,0);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007b5fb0 */
uint F_007b5fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b5fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar3 = *param_3;
  if (iVar3 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x11;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    uVar1 = *(ushort *)(iVar3 + 0x18);
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(uint *)(gen_frame + 0x14)) = (uint)uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar2 = F_00557670(param_2,0);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007b6060 */
uint F_007b6060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b6060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xd;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  F_00557670(param_2,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007b6100 */
uint F_007b6100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b6100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  cVar1 = *(char *)(param_3 + 6);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (cVar1 == '\x01') {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0xe;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  F_00557670(param_2,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar3 = 2;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007b61c0 */
uint F_007b61c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b61c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 9 + param_1 * 10;
}

/* ref: FUN_007b61e0 */
unsigned int F_007b61e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b61e0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_1 != (uint *)0x0) {
    *param_1 = (param_3 - 9U) / 10;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = (param_3 - 9U) % 10;
  }
  return 0;
}

/* ref: FUN_007b6220 */
uint F_007b6220(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  iVar3 = *(int *)(uVar2 + 8);
  if (iVar3 != 0) {
    do {
      if (iVar3 == *(int *)((int)this + 0x834)) {
        bVar1 = F_0056b630(this,0x18ae3,7,0,9,0,0);
        return CONCAT31(extraout_var_00,bVar1);
      }
      if (((iVar3 == *(int *)((int)this + 0x1c0)) || (iVar3 == *(int *)((int)this + 0x1c4))) ||
         (iVar3 == *(int *)((int)this + 0x1c8))) {
        bVar1 = F_0056b630(this,0x18ae2,7,0,9,0,0);
        return CONCAT31(extraout_var_01,bVar1);
      }
      iVar3 = *(int *)(iVar3 + 8);
    } while (iVar3 != 0);
  }
  bVar1 = F_0056b780(this,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_007b62a0 */
uint F_007b62a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b62a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce9ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0xffffffff;
  *(undefined4 *)((int)this + 0x188) = 0;
  puVar1 = (undefined4 *)((int)this + 0x18c);
  iVar2 = 0x31;
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf41 */
byte F_007b6320(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"BuddyEquipList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf46 */
byte F_007b6330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * this_00;
  undefined * pAVar4;
  undefined4 uVar5;
  int iVar6;
  int local_8;
  
  local_8 = -1;
  if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x1c);
  }
  iVar6 = 0;
  *(int *)(this + 0x188) = iVar1;
  if (0 < iVar1) {
    pAVar4 = this + 0x194;
    puVar2 = (undefined4 *)(param_2 + 0x44);
    do {
      if ((*(byte *)(puVar2 + -7) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = puVar2[-6];
      }
      *(undefined4 *)(pAVar4 + -8) = uVar5;
      if ((*(byte *)(puVar2 + -5) & 0xf) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = puVar2[-4];
      }
      pAVar4[-4] = (undefined1)(iVar1 != 0);
      if (iVar1 != 0) {
        local_8 = iVar6;
      }
      if ((*(byte *)(puVar2 + -1) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar2;
      }
      *(undefined4 *)pAVar4 = uVar5;
      if ((*(byte *)(puVar2 + -3) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = puVar2[-2];
      }
      *(undefined4 *)(pAVar4 + 4) = uVar5;
      iVar6 = iVar6 + 1;
      puVar2 = puVar2 + 8;
      pAVar4 = pAVar4 + 0x10;
    } while (iVar6 < *(int *)(this + 0x188));
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x7c))))(*(int * PTR32 *)(this + 0x180));
  if (uVar3 != *(uint *)(this + 0x188)) {
    F_0058d980(*(undefined4 *)(this + 0x180),(uint)*(ushort *)(this + 0x188));
  }
  F_005623b0(*(undefined * PTR32 *)(this + 0x180),local_8);
  if (*(int *)(this + 0x188) < 1) {
    *(undefined4 *)(this + 0x188) = 0;
    uVar5 = 0x65;
  }
  else {
    uVar5 = 0x11;
  }
  F_0059d640(*(undefined * PTR32 *)(this + 0x90),uVar5);
  if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x24);
  }
  this_00 = (undefined *)F_0055e340(this,6);
  F_00584110(this_00,uVar5);
  return 1;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf25 */
uint F_007b6450(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xf;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf2 */
uint F_007b64d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b64d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  if ((((short)param_1 == 0x21) && (param_2 == 1)) && (uVar2 = 0, -1 < *(int *)(param_4 + 8))) {
    if (*(char *)(param_4 + 0x10) == '\0') {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      uVar1 = *(undefined4 *)(this + 0x184);
      (*(undefined4 *)(gen_frame + 0x4)) = 0x12;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      uVar1 = *((undefined4 *)GEN_TOP((this + *(int *)(param_4 + 8) * 0x10 + 0x18c)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0x18));
      iVar3 = 2;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    *((undefined1 *)GEN_TOP((*(int *)(this + 0x180) + 0x113))) = 0;
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
    *(undefined1 *)(param_3 + 0x15) = 1;
    uVar2 = F_00557670(param_3,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007b65c0 */
uint F_007b65c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b65c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  pvVar2 = (undefined *)*param_2;
  uVar1 = param_1 * 2;
  if (pvVar2 != (undefined *)0x0) {
    F_0055a300(pvVar2,1);
    uVar1 = F_005951c0(param_3,*(undefined4 *)((int)this + param_1 * 0x10 + 0x194),0,pvVar2);
  }
  pvVar2 = (undefined *)param_2[1];
  if (pvVar2 != (undefined *)0x0) {
    F_0055a300(pvVar2,1);
    uVar3 = *(undefined4 *)((int)this + param_1 * 0x10 + 0x198);
    pvVar2 = (undefined *)F_00559ba0(pvVar2);
    uVar1 = F_00584110(pvVar2,uVar3);
  }
  return uVar1;
}

/* ref: FUN_007b6620 */
uint F_007b6620(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ceaec));
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x20000;
  return (uint)this;
}

/* ref: Client::UI2::AddonRecommendList::vf37 */
uint F_007b6750(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x3b,0);
  F_005a92d0(this,0,0x37,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonRecommendList::vf41 */
byte F_007b6780(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"RecommendList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonRecommendList::vf38 */
uint F_007b6790(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b6790u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0xf9) & 1) != 0) {
    iVar4 = 0;
    bVar1 = F_0056c7e0();
    if ((bVar1 != 0) &&
       ((uVar2 = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)))) {
      uVar2 = F_0055dcb0();
      iVar4 = (*((int *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) != param_1) + 1;
    }
    if (*(int *)(param_1 + 0x204) != iVar4) {
      if ((iVar4 == 0) || (uVar3 = 0x65, iVar4 == 1)) {
        uVar3 = 0x66;
      }
      F_0059d640(*(undefined * PTR32 *)(param_1 + 0x20c),uVar3);
      F_00563db0(*(undefined4 *)(param_1 + 0x208),1);
      *(int *)(param_1 + 0x204) = iVar4;
    }
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonRecommendList::vf43 */
byte F_007b6830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6830u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  
  pbVar3 = param_3;
  if ((param_3 != (byte *)0x0) && (param_2 == 1)) {
    if ((*param_3 & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_3 + 4);
    }
    bVar1 = ((iVar2 != 0) << 6 ^ *(byte *)(in_ecx + 0xf9)) & 0x40;
    pbVar3 = (byte *)(uint)bVar1;
    *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  }
  return (byte)pbVar3;
}

/* ref: Client::UI2::AddonRecommendList::vf47 */
uint F_007b6870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined * pAVar6;
  
  iVar1 = *(int *)(param_1 + 0xec);
  iVar2 = *(int *)(param_2 + 0xdc);
  uVar5 = param_1;
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar3 = **(int * PTR32 *)(iVar1 + 0x20);
    iVar4 = 0;
    *(int *)(this + 0x188) = iVar3;
    if (0 < iVar3) {
      pAVar6 = this + 0x194;
      do {
        *(undefined4 *)(pAVar6 + -8) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + iVar4 * 4)));
        *(undefined4 *)(pAVar6 + -4) = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + iVar4 * 4)));
        *(undefined4 *)pAVar6 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x28 + iVar4 * 4)));
        iVar4 = iVar4 + 1;
        pAVar6 = pAVar6 + 0xc;
      } while (iVar4 < *(int *)(this + 0x188));
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x7c))))(*(int * PTR32 *)(this + 0x180));
    if (uVar5 != *(uint *)(this + 0x188)) {
      F_0058d980(*(undefined4 *)(this + 0x180),(uint)*(ushort *)(this + 0x188));
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x70))))(*(int * PTR32 *)(this + 0x180));
    if (*(int *)(this + 0x188) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x184),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x50))));
    }
    uVar5 = F_0059d640(*(undefined * PTR32 *)(this + 0x90),
                         (-(uint)(*(int *)(this + 0x188) != 0) & 0xffffffac) + 0x65);
  }
  return uVar5;
}

/* ref: Client::UI2::AddonRecommendList::vf25 */
uint F_007b6950(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = F_0055dcb0();
  uVar1 = *(uint *)(uVar1 + 0x14);
  if (*(undefined * PTR32 *)(uVar1 + 0xcc) == this) {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00,uVar2,uVar3,uVar4);
    uVar1 = F_0055dcb0();
    F_00580230(*(undefined * PTR32 *)(uVar1 + 0x14),this,0);
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
    uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: Client::UI2::AddonRecommendList::vf5 */
uint F_007b69c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b69c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a89b0(this,param_1,1);
  this[0xf9] = (undefined1)((byte)this[0xf9] | 0x40);
  return uVar1;
}

/* ref: Client::UI2::AddonRecommendList::vf2 */
uint F_007b69e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b69e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined1 AVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  byte * pbVar7;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar8;
  bool bVar9;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar4 = param_1 & 0xffff;
  uVar5 = uVar4 - 0x17;
  if (uVar5 < 0xb) {
    uVar5 = (uint)*(byte *)(uVar4 + 0x7b6ba9);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0x17: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0xffffffff;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
      (*(int *)(gen_frame + 0x18)) = 0;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar8 = 1;
      do {
        this_00 = this_00 + -8;
        uVar5 = F_005a2670(this_00);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      return uVar5;
    case 0x1f: ;
      if (-1 < param_4[2]) {
        F_00557670(param_3,0);
        F_00560760(&(*(byte * PTR32 *)(gen_frame + 0x10)));
        pbVar6 = *(byte * PTR32 *)(this + param_4[2] * 0xc + 0x194);
        (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar6;
        uVar5 = 0;
        if (pbVar6 != (byte *)0x0) {
          pbVar7 = &REFG(undefined1, 0x10beae7);
          do {
            bVar1 = *pbVar6;
            bVar9 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_007b6b46: ;
              iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_007b6b4b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar9 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_007b6b46;
            pbVar6 = pbVar6 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_007b6b4b: ;
          uVar5 = 0;
          if (iVar8 != 0) {
            uVar3 = *(undefined4 *)(*param_4 + 0x1e4);
            AVar2 = this[0x13a];
            uVar5 = F_0055dcb0();
            uVar5 = F_00588780((undefined *)(uVar5 + 0xe0),2,(uint)(byte)AVar2,uVar3,&(*(byte * PTR32 *)(gen_frame + 0x10)),0,0);
            return uVar5;
          }
        }
      }
      break;
    case 0x20: ;
      F_00557670(param_3,0);
      uVar5 = F_0055dcb0();
      uVar5 = F_00594d90((undefined *)(uVar5 + 0xe0),0);
      break;
    case 0x21: ;
      if ((param_2 == 1) && (-1 < param_4[2])) {
        if ((char)param_4[4] == '\0') {
          (*(undefined4 *)(gen_frame + 0xc)) = 0;
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
          iVar8 = param_4[2];
          (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0xb;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
          (*(int *)(gen_frame + 0x18)) = iVar8;
          F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
          iVar8 = 1;
          do {
            this_01 = this_01 + -8;
            F_005a2670(this_01);
            iVar8 = iVar8 + -1;
          } while (-1 < iVar8);
        }
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
        *(undefined1 *)(param_3 + 0x15) = 1;
        uVar5 = F_00557670(param_3,0);
        return uVar5;
      }
    }
  }
  return uVar5;
}

/* ref: Client::UI2::AddonRecommendList::vf48 */
uint F_007b6bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6bd0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  return (uint)(*((int *)GEN_TOP((*(int *)(uVar1 + 0x14) + 0xcc))) == in_ecx);
}

/* ref: FUN_007b6bf0 */
uint F_007b6bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b6bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  pvVar3 = (undefined *)*param_2;
  uVar2 = param_1 * 3 + 99;
  puVar1 = (undefined4 *)((int)this + uVar2 * 4);
  if (pvVar3 != (undefined *)0x0) {
    F_0055a300(pvVar3,1);
    uVar2 = F_005951c0(param_3,*puVar1,0,pvVar3);
  }
  pvVar3 = (undefined *)param_2[1];
  if (pvVar3 != (undefined *)0x0) {
    F_0055a300(pvVar3,1);
    uVar4 = puVar1[1];
    pvVar3 = (undefined *)F_00559ba0(pvVar3);
    uVar2 = F_00584110(pvVar3,uVar4);
  }
  return uVar2;
}

/* ref: FUN_007b6c50 */
uint F_007b6c50(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cebec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 400) = 0;
  *(undefined1 *)((int)this + 0x192) = 0;
  F_0055e2a0(this,0x1000000,1);
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,1);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonCatch::vf41 */
byte F_007b6ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TextFishingNote",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCatch::vf25 */
unsigned int F_007b6cf0(void)
{
  GEN_ENTER(0x7b6cf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonCatch::vf6 */
uint F_007b6d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCatch::vf46 */
byte F_007b6d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  if ((((param_2 != (byte *)0x0) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) == 1)) &&
     (this[0x18a] != (undefined1)0x2)) {
    if (((byte)this[0xf9] & 1) != 0) {
      F_0059d640(*(undefined * PTR32 *)(this + 0x90),0x69);
      this[0x18a] = (undefined1)0x2;
      return 1;
    }
    this[0x18a] = (undefined1)0x1;
  }
  return 1;
}

/* ref: FUN_007b6d80 */
uint F_007b6d80(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  undefined * this_00;
  
  if (*(char *)((int)this + 0x191) == '\0') {
    this_00 = (undefined *)F_0055e2f0(this,2);
    in_EAX = F_0059d640(this_00,((*(int *)((int)this + 0x184) < 1) - 1 & 0x54) + 0x11);
    *(undefined1 *)((int)this + 0x191) = 1;
  }
  return in_EAX;
}

/* ref: FUN_007b6dc0 */
uint F_007b6dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cecec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[4])REFP(0x10c41a8));
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  F_00580ea0((undefined *)((int)this + 0x19c));
  F_00c48350((undefined *)((int)this + 0x1d4),0,0x600);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  F_00560e80((undefined *)((int)this + 0x19c),this);
  return (uint)this;
}

/* ref: FUN_007b6e70 */
uint F_007b6e70(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cecec));
  F_00590cc0((undefined *)((int)this + 0x19c));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf25 */
uint F_007b6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00580fa0(this + 0x19c);
  bVar1 = F_005a9130(this,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonCutSceneReplay::vf37 */
uint F_007b6ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)(this + 0x184) != 0) {
    F_00588cd0(this + 0x19c,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(int *)(this + 0x184),0);
    *(undefined4 *)(this + 0x184) = 0;
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf38 */
uint F_007b6f10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b6f10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x19c,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf39 */
unsigned int F_007b6f40(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this);
  F_00588c10(this + 0x19c);
  return 0;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf41 */
byte F_007b6f60(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CutScene",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf47 */
unsigned int F_007b6f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b6f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf49 */
uint F_007b6f80(unsigned int gen_a0)
{
  GEN_ENTER(0x7b6f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00580f60(this + 0x19c,0);
  uVar1 = F_005a9190((undefined *)this);
  return uVar1;
}

/* ref: FUN_007b6fa0 */
uint F_007b6fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b6fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this_00,*(undefined4 *)((int)this + param_1 * 4 + 0x1d4));
  return uVar1;
}

/* ref: FUN_007b6fd0 */
uint F_007b6fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b6fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(uint *)(param_1 + 8);
  if (*(uint *)((int)this + 0x180) != uVar1) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    *(uint *)((int)this + 0x180) = uVar1;
    (*(undefined4 *)(gen_frame + 0x10)) = 1;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007b7030 */
uint F_007b7030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b7030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((char)param_1 != '\0') {
    in_ecx = F_0055e2f0(this,7);
    uVar2 = F_0055a020(in_ecx);
    bVar1 = F_0056b630(this,0x12c7,6,0,7,(uint)(uVar2 >> 1),uVar3);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b780(this,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_007b7080 */
byte F_007b7080(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = 0;
  if (((*((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 0xc0))) == *((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 0xcc)))
       ) && (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x184) + 4))), iVar3 != 0)) &&
     (iVar2 = *(int *)(iVar3 + 0xa4), iVar2 != 0)) {
    uVar4 = 0;
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00,iVar2,iVar3,uVar4);
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_007b70d0 */
uint F_007b70d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b70d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cedec));
  return (uint)this;
}

/* ref: Client::UI2::AddonCutSceneReplayDetail::vf41 */
byte F_007b7170(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CutSceneDetail",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCutSceneReplayDetail::vf38 */
uint F_007b7180(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7b7180u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplayDetail::vf52 */
byte F_007b71a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b71a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  uint uVar2;
  int * piVar3;
  
  if (((char)param_1[1] == '\0') && (*param_1 == 2)) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x8c))(piVar3);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007b71f0 */
uint F_007b71f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b71f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte * pbVar5;
  int iVar6;
  uint * this_00;
  ulonglong uVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar3;
  if (param_1 != 0) {
    if ((*(byte *)(param_3 + param_4 * 8) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_3 + param_4 * 8 + 4);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),uVar4,REFG(undefined4, 0x108cc50));
    if (1 < param_1) {
      iVar6 = param_1 - 1;
      pbVar5 = (byte *)(param_3 + 8 + param_4 * 8);
      do {
        F_0042d540(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10c24e0));
        if ((*pbVar5 & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(pbVar5 + 4);
        }
        F_0042d540(((undefined1 *)(gen_frame + 0x14)),uVar4);
        iVar6 = iVar6 + -1;
        pbVar5 = pbVar5 + 8;
      } while (iVar6 != 0);
    }
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    uVar4 = *(undefined4 *)((int)this + 0x188);
    (*(undefined4 *)(gen_frame + 0x68)) = 6;
    (*(uint *)(gen_frame + 0x6c)) = uVar3;
    uVar2 = F_0055a020(uVar4);
    (*(undefined4 *)(gen_frame + 0x70)) = 4;
    (*(uint *)(gen_frame + 0x74)) = (uint)uVar2;
    uVar3 = F_0055ab00(*(undefined4 *)((int)this + 0x188));
    (*(undefined4 *)(gen_frame + 0x78)) = 4;
    (*(uint *)(gen_frame + 0x7c)) = uVar3;
    bVar1 = F_0055ab50(*(undefined4 *)((int)this + 0x188));
    (*(undefined4 *)(gen_frame + 0x80)) = 4;
    (*(uint *)(gen_frame + 0x84)) = (uint)bVar1;
    uVar3 = F_0055dcb0();
    pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x68)))));
    if ((*pbVar5 & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar5 + 4);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x188),uVar4);
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    this_00 = &(*(uint *)(gen_frame + 0x88));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    uVar3 = (uint)uVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: FUN_007b7340 */
uint F_007b7340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b7340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x1b0),param_1,0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a4) + 0x28))))
            (*(int * PTR32 *)((int)this + 0x1a4),
             (uint)(*((int *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x98))) < param_1));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x28))))
            (*(int * PTR32 *)((int)this + 0x1a8),
             (uint)(param_1 < *((int *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x9c)))));
  F_0055dcb0();
  uVar1 = F_00560910(param_1 + 1);
  uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x18c),uVar1);
  return uVar1;
}

/* ref: FUN_007b73c0 */
uint F_007b73c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b73c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ceeec));
  F_0042c880((undefined *)((int)this + 0x9784));
  iVar3 = 0x95;
  pvVar2 = (undefined *)((int)this + 0x9780);
  do {
    F_0042c880((undefined *)((int)pvVar2 + -0x54));
    F_0042c880((undefined *)((int)pvVar2 + -0xa8));
    F_0042c880((undefined *)((int)pvVar2 + -0x100));
    iVar3 = iVar3 + -1;
    pvVar2 = (undefined *)((int)pvVar2 + -0x100);
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigKeybind::vf41 */
byte F_007b7420(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigKeybind",0,6);
  return bVar1;
}

/* ref: FUN_007b7430 */
uint F_007b7430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b7430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  uVar1 = F_00559ba0(*param_2);
  if (uVar1 != 0) {
    uVar2 = F_0042a990(param_1 * 0x100 + 0x180 + (int)this);
    pvVar3 = (undefined *)F_00559ba0(uVar1);
    F_00584110(pvVar3,uVar2);
  }
  pvVar3 = (undefined *)F_00559c20(param_2[1]);
  if (pvVar3 != (undefined *)0x0) {
    F_00561ee0(pvVar3,1,1);
    uVar1 = F_00561530(pvVar3,5);
    if (uVar1 != 0) {
      uVar5 = 0;
      uVar2 = F_00559ba0(uVar1);
      F_0055aab0(uVar2,uVar5);
      uVar2 = F_0042a990(param_1 * 0x100 + 0x1d8 + (int)this);
      pvVar4 = (undefined *)F_00559ba0(uVar1);
      F_00584110(pvVar4,uVar2);
    }
    pvVar3 = (undefined *)F_00561490(pvVar3,3);
    if (pvVar3 != (undefined *)0x0) {
      if ((*(int *)((int)this + 0x97d8) == param_1) && (*(int *)((int)this + 0x97dc) == 0)) {
        uVar5 = 0x65;
      }
      else {
        uVar5 = 0x66;
      }
      F_0059d670(pvVar3,uVar5);
    }
  }
  pvVar3 = (undefined *)F_00559c20(param_2[2]);
  uVar1 = 0;
  if (pvVar3 != (undefined *)0x0) {
    F_00561ee0(pvVar3,1,1);
    uVar1 = F_00561530(pvVar3,5);
    if (uVar1 != 0) {
      uVar5 = 0;
      uVar2 = F_00559ba0(uVar1);
      F_0055aab0(uVar2,uVar5);
      uVar2 = F_0042a990(param_1 * 0x100 + 0x22c + (int)this);
      pvVar4 = (undefined *)F_00559ba0(uVar1);
      F_00584110(pvVar4,uVar2);
    }
    pvVar3 = (undefined *)F_00561490(pvVar3,3);
    uVar1 = 0;
    if (pvVar3 != (undefined *)0x0) {
      if ((*(int *)((int)this + 0x97d8) == param_1) && (*(int *)((int)this + 0x97dc) == 1)) {
        uVar1 = F_0059d670(pvVar3,0x65);
        return uVar1;
      }
      uVar1 = F_0059d670(pvVar3,0x66);
    }
  }
  return uVar1;
}

/* ref: FUN_007b7590 */
uint F_007b7590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b7590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = 0;
  if (*(char *)((int)this + 0x98aa) != '\0') {
    *(undefined4 *)((int)this + 0x97d8) = 0xffffffff;
    *(undefined4 *)((int)this + 0x97dc) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x68;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigKeybind::vf2 */
uint F_007b7620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b7620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint * puVar5;
  uint uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar4 = param_4;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0xc: ;
    if ((char)param_4[1] == '\0') {
      if (param_2 == (int *)0x2) {
        if (*param_4 == 2) {
          F_00557670(param_3,0);
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
          (*(undefined4 *)(gen_frame + 0x14)) = 0x66;
          F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
          puVar5 = &(*(uint *)(gen_frame + 0x28));
          (*(int *)(gen_frame + 0x4)) = 2;
          do {
            puVar5 = puVar5 + -2;
            F_005a2670(puVar5);
            (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
          } while (-1 < (*(int *)(gen_frame + 0x4)));
        }
      }
      else if ((param_2 == (int *)0x1) && (*param_4 == 2)) {
        F_00557670(param_3,0);
      }
      if (*param_4 == 5) {
        F_00557670(param_3,0);
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
        (*(undefined4 *)(gen_frame + 0x14)) = 0x6a;
        F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
        puVar5 = &(*(uint *)(gen_frame + 0x28));
        iVar7 = 2;
        do {
          puVar5 = puVar5 + -2;
          uVar3 = F_005a2670(puVar5);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar3;
      }
    }
    break;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x18: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x1f: ;
  case 0x20: ;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
    break;
  case 0x17: ;
    piVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case (int *)0x0: ;
      F_00557670(param_3,0);
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x98c8) + 0x88)));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x65;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)(uint)bVar1;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    case (int *)0x1: ;
    case (int *)0x2: ;
    case (int *)0x3: ;
    case (int *)0x4: ;
    case (int *)0x5: ;
    case (int *)0x6: ;
    case (int *)0x7: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 100;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int * PTR32 *)(gen_frame + 0x1c)) = param_2;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    case (int *)0x8: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x66;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    case (int *)0x9: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x6a;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    case (int *)0xa: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x67;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
    break;
  case 0x19: ;
    uVar3 = F_007b7590(this,0);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  case 0x21: ;
    uVar3 = F_00568410(*(undefined * PTR32 *)(*param_4 + 0x1e4));
    uVar6 = (uint)(uVar3 == 5);
    uVar3 = F_00568410(*(undefined * PTR32 *)(*param_4 + 0x1e4));
    if ((uVar6 == 0) && (uVar3 != 6)) {
LAB_007b7af0: ;
      uVar3 = F_007b7590(this,0);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
    if (*(byte *)(param_4 + 4) == 0) {
      if (this[0x98aa] == (undefined1)0x0) {
        *(int *)(this + 0x97d8) = param_4[2];
        *(uint *)(this + 0x97dc) = uVar6;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
        (*(undefined4 *)(gen_frame + 0x14)) = 0x68;
        uVar2 = *(undefined4 *)(this + param_4[2] * 0x100 + 0x1d4);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)uVar2;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
        (*(uint *)(gen_frame + 0x24)) = uVar6;
        F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
        puVar5 = &(*(uint *)(gen_frame + 0x28));
        iVar7 = 2;
        do {
          puVar5 = puVar5 + -2;
          uVar3 = F_005a2670(puVar5);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar3;
      }
      goto LAB_007b7af0;
    }
    piVar4 = ((int *)GEN_TOP((*(byte *)(param_4 + 4) - 1)));
    if ((piVar4 == (int *)0x0) && (this[0x98aa] == (undefined1)0x0)) {
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x69;
      uVar2 = *(undefined4 *)(this + param_4[2] * 0x100 + 0x1d4);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)uVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(uint *)(gen_frame + 0x24)) = uVar6;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        uVar3 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
    break;
  case 0x25: ;
    if (this[0x98aa] != (undefined1)0x0) {
      F_007b7590(this,0);
      uVar3 = F_00557670(param_3,0);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
    piVar4 = *(int * PTR32 *)(this + 0x98d0);
    if (piVar4[0x33] < 0) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0x66;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = &(*(uint *)(gen_frame + 0x28));
      iVar7 = 2;
      do {
        puVar5 = puVar5 + -2;
        piVar4 = (int *)F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    break;
  default: ;
    goto switchD_007b7655_default;
  }
switchD_007b7655_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)piVar4;
}

/* ref: Client::UI2::AddonConfigKeybind::vf25 */
uint F_007b7c00(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigKeybind::vf53 */
unsigned int F_007b7c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b7c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((char)param_1 == '\0') {
    F_007b7590(this,0);
  }
  return 0;
}

/* ref: FUN_007b7c60 */
uint F_007b7c60(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cefec));
  pvVar2 = (undefined *)((int)this + 0x998);
  iVar3 = 2;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x89c);
  iVar3 = 1;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x7f4);
  iVar3 = 1;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x74c);
  iVar3 = 0xc;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x308);
  iVar3 = 3;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigLog::vf41 */
byte F_007b7d20(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigLog",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonConfigLog::vf25 */
uint F_007b7d40(unsigned int gen_a0)
{
  GEN_ENTER(0x7b7d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b7d70 */
uint F_007b7d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b7d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar4 = 2;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  if (param_1 == 1) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar4 = 2;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  if (param_1 == 3) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar4 = 2;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  if (param_1 == 4) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar4 = 2;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  uVar2 = param_1;
  if (param_1 == 6) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar4 = 2;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007b7fa0 */
uint F_007b7fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b7fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 7) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 7;
    uVar1 = F_00562c60(*(undefined4 *)((int)this + 0x198));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  if (param_1 == 0xd) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 10;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  uVar1 = param_1;
  if (param_1 - 9 < 4) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 9;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(uint *)(gen_frame + 0xc)) = param_1 - 9;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007b80f0 */
uint F_007b80f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b80f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x188) != param_1) {
    uVar2 = *(uint *)((int)this + 0x194);
    if (uVar2 == param_1) {
      piVar1 = *(int * PTR32 *)((int)this + 0x198);
      if (*(char *)(uVar2 + 0x88) != '\0') {
        ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x28))))(*(int * PTR32 *)((int)this + 0x19c),1);
        return uVar2;
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x28))))(*(int * PTR32 *)((int)this + 0x19c),0);
    }
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18c);
  if (*((char *)GEN_TOP((*(uint *)((int)this + 0x188) + 0x88))) != '\0') {
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400),1);
    return uVar2;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400),0);
  return uVar2;
}

/* ref: FUN_007b81a0 */
uint F_007b81a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b81a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x54 + 0x1b8 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b81d0 */
uint F_007b81d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b81d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x54 + 0x308 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b8200 */
uint F_007b8200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x54 + 0x74c + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b8230 */
uint F_007b8230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x54 + 0x7f4 + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b8260 */
uint F_007b8260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x54 + 0x89c + (int)this);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b8290 */
uint F_007b8290(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf0ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  in_ecx = (int)this + 0x27c;
  iVar1 = 0x21;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogColor::vf41 */
byte F_007b8350(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigLogColor",0,6);
  return bVar1;
}

/* ref: FUN_007b8370 */
uint F_007b8370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b8370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = 0;
  piVar3 = (int *)((int)this + 0x1b4);
  while( true ) {
    iVar2 = 0;
    if (*piVar3 != 0) {
      iVar2 = *(int *)(*piVar3 + 0x70);
    }
    if (iVar2 == param_1) break;
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 1;
    if (0xf < uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_007b83a0 */
uint F_007b83a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b83a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  float10 fVar3;
  float10 fVar4;
  uint uVar2;
  
  this_00 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x1b4),5);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    fVar3 = (float10)*(double *)&REFG(undefined, 0x1088100);
    fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
    bVar1 = F_0055a1d0(this_00,(int)TRUNC(((float10)(param_2 >> 0x10 & 0xff) / fVar3) * fVar4) &
                                 0xff,
                         (int)TRUNC(((float10)(param_2 >> 8 & 0xff) / fVar3) * fVar4) & 0xff,
                         (int)TRUNC(((float10)(param_2 & 0xff) / fVar3) * fVar4) & 0xff);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_007b8470 */
uint F_007b8470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b8470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00561530(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x1b4),2);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0042a990(param_2);
    uVar1 = F_00584110(this_00,uVar1);
  }
  return uVar1;
}

/* ref: FUN_007b84a0 */
uint F_007b84a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b84a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xda4);
  switch((unsigned int)(uintptr_t)(puVar1)) {
  case (undefined4 *)0x0: ;
    *param_1 = 0;
    *param_2 = 6;
    return (uint)param_1;
  case (undefined4 *)0x1: ;
    *param_1 = 6;
    *param_2 = 9;
    return (uint)param_2;
  case (undefined4 *)0x2: ;
    *param_1 = 0xf;
    *param_2 = 7;
    return (uint)puVar1;
  case (undefined4 *)0x3: ;
    *param_1 = 0x16;
    *param_2 = 0xc;
    puVar1 = param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_007b8520 */
uint F_007b8520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b8570 */
uint F_007b8570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b85d0 */
uint F_007b85d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b85d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007b8630 */
uint F_007b8630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8630u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * this_00;
  int iVar4;
  
  uVar3 = 0;
  piVar2 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4)));
  while( true ) {
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar1 = *(uint *)(*piVar2 + 0x70);
    }
    if (uVar1 == *(uint *)((*(int *)&gen_args[2]) + 4)) break;
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
    if (0xf < uVar3) {
      return uVar1;
    }
  }
  if (-1 < (int)uVar3) {
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4 + 0x1b4))),0);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    F_007b84a0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[2]),((undefined1 *)(gen_frame + 0x18)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(int *)(gen_frame + 0x14)) = uVar3 + (*(int *)&gen_args[2]);
    F_005a9110((*(undefined * PTR32 *)&gen_args[0]),2,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = ((undefined1 *)(gen_frame + 0x18));
    iVar4 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigLogColor::vf25 */
uint F_007b86f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b86f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 2;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b8720 */
uint F_007b8720(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf1ec));
  pvVar2 = (undefined *)((int)this + 0x1a58);
  iVar3 = 5;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x58);
    F_0042c880(pvVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = 0x1f;
  pvVar2 = (undefined *)((int)this + 0x1848);
  do {
    F_0042c880((undefined *)((int)pvVar2 + -0x58));
    F_0042c880((undefined *)((int)pvVar2 + -0xb4));
    iVar3 = iVar3 + -1;
    pvVar2 = (undefined *)((int)pvVar2 + -0xb4);
  } while (-1 < iVar3);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigLogFilter::vf41 */
byte F_007b8790(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigLogFilter",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonConfigLogFilter::vf25 */
uint F_007b87b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b87b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 2;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b87e0 */
uint F_007b87e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b87e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 3: ;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    break;
  case 4: ;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    break;
  case 5: ;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    iVar2 = 2;
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    break;
  case 6: ;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 5;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    break;
  case 7: ;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      puVar3 = puVar3 + -2;
      F_005a2670(puVar3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = F_00557670(param_2,0);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007b8980 */
uint F_007b8980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b8980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  longlong lVar1;
  undefined * this_00;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  byte * pbVar5;
  uint * this_01;
  undefined4 uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  this_00 = *(undefined * PTR32 *)((int)this + 0x1a8);
  F_00559fe0(this_00,&(*(float *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x4)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  uVar4 = F_0042a990(param_2);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  uVar3 = F_0055a020(this_00);
  (*(uint *)(gen_frame + 0x14)) = (uint)uVar3;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = ((undefined2)0x27f);
  (*(uint *)(gen_frame + 0x14)) = CONCAT22(((undefined2)0x27f),uVar3);
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)) = ((undefined2)0x27f) | 0xc00;
  lVar1 = (longlong)TRUNC((float10)uVar3 * (float10)(*(float *)(gen_frame + 0x8)));
  (*(longlong *)(gen_frame + 0xc)) = lVar1;
  lVar1 = (*(longlong *)(gen_frame + 0xc));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (undefined4)lVar1;
  uVar6 = (undefined4)(*(longlong *)(gen_frame + 0xc));
  (*(longlong *)(gen_frame + 0xc)) = lVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = uVar6;
  uVar4 = F_0055ab00(this_00);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(uint *)(gen_frame + 0x2c)) = uVar4;
  bVar2 = F_0055ab50(this_00);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  (*(uint *)(gen_frame + 0x34)) = (uint)bVar2;
  uVar4 = F_0055dcb0();
  pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))
                             (*(int * PTR32 *)(uVar4 + 0x38),&(*(longlong *)(gen_frame + 0xc)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x18)))));
  if ((*pbVar5 & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(pbVar5 + 4);
  }
  F_005a2670(&(*(longlong *)(gen_frame + 0xc)));
  F_0055aa30(this_00,param_1);
  F_00584110(this_00,uVar6);
  this_01 = &(*(uint *)(gen_frame + 0x38));
  iVar7 = 3;
  do {
    this_01 = this_01 + -2;
    uVar4 = F_005a2670(this_01);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_007b8ab0 */
uint F_007b8ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x1a8),"");
  uVar1 = *(uint *)((int)this + 0x188);
  if (*(char *)(uVar1 + 0x88) != '\0') {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x194),0x65);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(int *)(gen_frame + 0xc)) = 1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x88))) != '\0') {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x194),0x66);
    uVar1 = F_00562c60(*(undefined4 *)((int)this + 0x1a0));
    iVar3 = *(int *)(uVar1 * 0x58 + 0x189c + (int)this);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(int *)(gen_frame + 0xc)) = iVar3 + 4;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar1;
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 400) + 0x88))) != '\0') {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x194),0x67);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    iVar3 = 2;
    (*(int *)(gen_frame + 0xc)) = 2;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar2 = &(*(uint *)(gen_frame + 0x18));
    do {
      puVar2 = puVar2 + -2;
      uVar1 = F_005a2670(puVar2);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigLogFilter::vf60 */
byte F_007b8c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b8c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)(this + 0x188);
  uVar2 = 0;
  if ((char)piVar4[0x22] == '\0') {
    if (*((char *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))) == '\0') {
      if (*((char *)GEN_TOP((*(int *)(this + 400) + 0x88))) != '\0') {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  if (param_1 == 0xf) {
    uVar3 = uVar2 + 1;
    if (2 < uVar3) {
      uVar3 = -(uint)((char)param_2 != '\0') & 2;
    }
  }
  else {
    if (param_1 != 0x10) {
      return 0;
    }
    if (uVar2 == 0) {
      uVar3 = 0;
      if ((char)param_2 == '\0') {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = uVar2 - 1;
    }
  }
  if (uVar3 == uVar2) {
    return 0;
  }
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      piVar4 = *(int * PTR32 *)(this + 0x18c);
    }
    else {
      if (uVar3 != 2) goto LAB_007b8d11;
      piVar4 = *(int * PTR32 *)(this + 400);
    }
  }
  uVar2 = F_00561390();
  ((code *)*(gen_code32 *)(*piVar4 + 0x60))(piVar4,uVar2 + 0xc0);
LAB_007b8d11: ;
  F_007b8ab0(this);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  bVar1 = F_0055de10(this,uVar2);
  if (((bVar1 != 0) && (uVar2 = F_00561680(uVar2), uVar2 != 0)) &&
     (uVar2 = F_005613a0(uVar2), uVar2 != 1)) {
    F_0059b3f0(this,1,1);
  }
  uVar2 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
  F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_007b8d90 */
uint F_007b8d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b8d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_0042a990(param_1 * 0x58 + 0x1848 + (int)this);
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_007b8dc0 */
uint F_007b8dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf2ec));
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogFilterInputString::vf41 */
byte F_007b8e00(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigLogFilterInputString",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonConfigLogFilterInputString::vf2 */
uint F_007b8e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b8e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if ((short)param_1 == 0x17) {
    if (param_2 == 8) {
      ((uint *)(gen_frame + 0x8))[2] = 0;
      ((uint *)(gen_frame + 0x8))[4] = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(((uint *)(gen_frame + 0x8)) + 2,3);
      ((uint *)(gen_frame + 0x8))[3] = 0;
      uVar1 = F_0042a990(*(int *)(this + 0x180) + 0x9c);
      F_005a2710(((uint *)(gen_frame + 0x8)) + 4,6);
      ((uint *)(gen_frame + 0x8))[5] = uVar1;
      uVar1 = F_0042a990(*(int *)(this + 0x184) + 0x9c);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
      (*(uint *)(gen_frame + 0x24)) = uVar1;
      F_005a9110(this,3,((uint *)(gen_frame + 0x8)) + 2);
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar2 = 2;
      do {
        this_00 = this_00 + -2;
        uVar1 = F_005a2670(this_00);
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    else {
      uVar1 = param_2 - 9;
      if (uVar1 == 0) {
        ((uint *)(gen_frame + 0x8))[0] = uVar1;
        F_005a2710(((uint *)(gen_frame + 0x8)),3);
        ((uint *)(gen_frame + 0x8))[1] = 1;
        F_005a9110(this,1,((uint *)(gen_frame + 0x8)));
        uVar1 = F_005a2670(((uint *)(gen_frame + 0x8)));
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_007b8f10 */
uint F_007b8f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b8f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  undefined * this_00;
  undefined4 unaff_ESI = 0;
  undefined4 unaff_EDI = 0;
  
  if (param_1 == 0) {
    if (param_4 != 0) {
      return 2;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x180) + 0x38))))(*(int * PTR32 *)((int)this + 0x180),this,0)
    ;
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00,uVar1,unaff_EDI,unaff_ESI);
  }
  return 0;
}

/* ref: FUN_007b8f60 */
uint F_007b8f60(unsigned int gen_a0)
{
  GEN_ENTER(0x7b8f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf3ec));
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x304);
  iVar2 = 0x12;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined2 *)((int)this + 1000) = 0;
  *(undefined1 *)((int)this + 0x3ea) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined2 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  F_00c48350((undefined *)((int)this + 0x1c0),0,0x70);
  F_00c48350((undefined *)((int)this + 0x2b0),0,0x4c);
  F_00c48350((undefined *)((int)this + 600),0,0x58);
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigSystem::vf41 */
byte F_007b90c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b90c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ConfigSystem",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonConfigSystem::vf47 */
uint F_007b90d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7b90d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0xb8);
  if ((uVar1 != 0) && (*(undefined * PTR32 *)(this + 0x1b4) != (undefined *)0x0)) {
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1b4),**(undefined4 * PTR32 *)(uVar1 + 0x20));
  }
  return uVar1;
}

/* ref: FUN_007b9120 */
uint F_007b9120(unsigned int gen_a0)
{
  GEN_ENTER(0x7b9120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xe;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b9150 */
uint F_007b9150(unsigned int gen_a0)
{
  GEN_ENTER(0x7b9150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonConfigSystem::vf25 */
uint F_007b9180(unsigned int gen_a0)
{
  GEN_ENTER(0x7b9180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b91b0 */
uint F_007b91b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b91b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_007b91e0 */
uint F_007b91e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7b91e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  puVar1 = ((undefined4 *)(gen_frame + 0x8));
  iVar3 = 0x17;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)),3);
  ((undefined4 *)(gen_frame + 0x8))[1] = 0xc;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x1056;
  F_005a2710(((undefined1 *)(gen_frame + 0x78)),3);
  (*(undefined4 *)(gen_frame + 0x7c)) = 1;
  F_005a9110(this,0x18,((undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0xc8));
  iVar3 = 0x17;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2;
}

/* ref: FUN_007b92a0 */
uint F_007b92a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b92a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  undefined4 uVar3;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((uint *)(gen_frame + 0x10))[0] = 0x65;
  ((uint *)(gen_frame + 0x10))[1] = 0x66;
  ((uint *)(gen_frame + 0x10))[2] = 0x67;
  ((uint *)(gen_frame + 0x10))[3] = 0x68;
  ((uint *)(gen_frame + 0x10))[4] = 0x69;
  ((uint *)(gen_frame + 0x10))[5] = 0x6a;
  F_0059d640(*(undefined * PTR32 *)((int)this + 0x90),((uint *)(gen_frame + 0x10))[(int)(param_1)]);
  *(int *)((int)this + 0x198) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  ((uint *)(gen_frame + 0x10))[0] = 0;
  ((uint *)(gen_frame + 0x10))[2] = 0;
  ((uint *)(gen_frame + 0x10))[4] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x198);
  (*(undefined4 *)(gen_frame + 0xc)) = 10;
  F_005a2710(((uint *)(gen_frame + 0x10)) + 2,3);
  ((uint *)(gen_frame + 0x10))[3] = (*(undefined4 *)(gen_frame + 0x4));
  F_005a2710(((uint *)(gen_frame + 0x10)) + 4,3);
  ((uint *)(gen_frame + 0x10))[5] = 0;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
  if ((char)param_2 != '\0') {
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x0)),1);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)));
  }
  if ((char)param_3 != '\0') {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar3 = *(undefined4 *)((int)this + 0x2b0);
      break;
    case 1: ;
      uVar3 = *(undefined4 *)((int)this + 0x25c);
      break;
    case 2: ;
      uVar3 = *(undefined4 *)((int)this + 0x2b8);
      break;
    case 3: ;
      uVar3 = *(undefined4 *)((int)this + 0x29c);
      break;
    case 4: ;
      uVar3 = *(undefined4 *)((int)this + 0x2a4);
      break;
    case 5: ;
      uVar3 = *(undefined4 *)((int)this + 0x228);
      break;
    default: ;
      goto switchD_007b9378_default;
    }
    F_0059b390(this,uVar3,1,0);
  }
switchD_007b9378_default: ;
  if (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x198) * 4 + 0x3ec))) != 0) {
    F_00574c80(*((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x198) * 4 + 0x3ec))),0,1,1);
  }
  this_00 = ((uint *)(gen_frame + 0x10)) + 6;
  iVar2 = 3;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_007b9430 */
uint F_007b9430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9430u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar1) != param_1 ||
         (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar1) != param_2))) {
    uVar1 = uVar1 + 0x18;
    iVar2 = iVar2 + 1;
    if (0x77f < uVar1) {
      return 0;
    }
  }
  return (uint)(&REFG(undefined4, 0x10c2578) + iVar2 * 6);
}

/* ref: FUN_007b9470 */
uint F_007b9470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar5 = *(int *)((int)this + param_1 * 4 + 600);
  uVar4 = 0;
  if (iVar5 != 0) {
    bVar1 = *(byte *)(iVar5 + 0x88);
    iVar5 = 0;
    uVar4 = 0;
    while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar4) != param_1 ||
           (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar4) != 0))) {
      uVar4 = uVar4 + 0x18;
      iVar5 = iVar5 + 1;
      if (0x77f < uVar4) {
        F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar4;
      }
    }
    if (iVar5 * 0x18 != -0x10c2578) {
      uVar2 = (&REFG(undefined4, 0x10c2580))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      uVar3 = (&REFG(undefined4, 0x10c2584))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar5 = 3;
      do {
        this_00 = this_00 + -2;
        uVar4 = F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_007b9560 */
uint F_007b9560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * this_00;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  uVar4 = uVar3;
  if (*(int *)((int)this + param_1 * 4 + 0x1c0) != 0) {
    iVar5 = 0;
    uVar4 = 0;
    while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar4) != param_1 ||
           (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar4) != 1))) {
      uVar4 = uVar4 + 0x18;
      iVar5 = iVar5 + 1;
      if (0x77f < uVar4) {
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar4;
      }
    }
    if (iVar5 * 0x18 != -0x10c2578) {
      uVar1 = (&REFG(undefined4, 0x10c2580))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      uVar1 = (&REFG(undefined4, 0x10c2584))[iVar5 * 6];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      uVar2 = (&REFG(undefined4, 0x10c2588))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar5 = 3;
      do {
        this_00 = this_00 + -2;
        uVar4 = F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_007b9640 */
uint F_007b9640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  iVar4 = *(int *)((int)this + param_1 * 4 + 0x2b0);
  if (iVar4 != 0) {
    uVar3 = F_00562c60(iVar4);
    iVar4 = 0;
    uVar2 = 0;
    while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar2) != param_1 ||
           (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar2) != 2))) {
      uVar2 = uVar2 + 0x18;
      iVar4 = iVar4 + 1;
      if (0x77f < uVar2) {
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar2;
      }
    }
    if (iVar4 * 0x18 != -0x10c2578) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      uVar1 = (&REFG(undefined4, 0x10c2580))[iVar4 * 6];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      uVar1 = (&REFG(undefined4, 0x10c2584))[iVar4 * 6];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      iVar4 = (&REFG(undefined4, 0x10c2588))[iVar4 * 6];
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int *)(gen_frame + 0x1c)) = iVar4 + uVar3;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 3;
      do {
        this_00 = this_00 + -2;
        uVar2 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_007b9730 */
uint F_007b9730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar5 = *(int *)((int)this + param_1 * 4 + 0x230);
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar1 = *(undefined4 *)(iVar5 + 0xa0);
    iVar5 = 0;
    uVar4 = 0;
    while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar4) != param_1 ||
           (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar4) != 3))) {
      uVar4 = uVar4 + 0x18;
      iVar5 = iVar5 + 1;
      if (0x77f < uVar4) {
        F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar4;
      }
    }
    if (iVar5 * 0x18 != -0x10c2578) {
      uVar2 = (&REFG(undefined4, 0x10c2580))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      uVar3 = (&REFG(undefined4, 0x10c2584))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar5 = 3;
      do {
        this_00 = this_00 + -2;
        uVar4 = F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_007b9820 */
uint F_007b9820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar5 = *(int *)((int)this + param_1 * 4 + 0x2fc);
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar1 = *(undefined4 *)(iVar5 + 0x178);
    iVar5 = 0;
    uVar4 = 0;
    while ((*(int *)((int)&REFG(undefined4, 0x10c2578) + uVar4) != param_1 ||
           (*(int *)((int)&REFG(undefined4, 0x10c257c) + uVar4) != 4))) {
      uVar4 = uVar4 + 0x18;
      iVar5 = iVar5 + 1;
      if (0x77f < uVar4) {
        F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar4;
      }
    }
    if (iVar5 * 0x18 != -0x10c2578) {
      uVar2 = (&REFG(undefined4, 0x10c2580))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      uVar3 = (&REFG(undefined4, 0x10c2584))[iVar5 * 6];
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar5 = 3;
      do {
        this_00 = this_00 + -2;
        uVar4 = F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_007b9910 */
uint F_007b9910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b9910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if ((*(byte *)(param_1 + param_2 * 8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4 + param_2 * 8);
  }
  this_00 = *(undefined * PTR32 *)((int)this + param_3 * 4 + 600);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0059dde0(this_00,(uint)(uVar1 != 0));
  }
  return uVar1;
}

/* ref: FUN_007b9950 */
uint F_007b9950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b9950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + param_2 * 8) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4 + param_2 * 8);
  }
  uVar3 = iVar2 + param_3;
  piVar1 = *(int * PTR32 *)((int)this + uVar3 * 4 + 0x1c0);
  if (piVar1 != (int *)0x0) {
    uVar3 = F_00561390();
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar3 + 0xc0);
  }
  return uVar3;
}

/* ref: FUN_007b99a0 */
uint F_007b99a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b99a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if ((*(byte *)(param_1 + param_2 * 8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4 + param_2 * 8);
  }
  this_00 = *(undefined * PTR32 *)((int)this + param_3 * 4 + 0x2b0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0059caa0(this_00,uVar1);
  }
  return uVar1;
}

/* ref: FUN_007b99d0 */
uint F_007b99d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b99d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if ((*(byte *)(param_1 + param_2 * 8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4 + param_2 * 8);
  }
  this_00 = *(undefined * PTR32 *)((int)this + param_3 * 4 + 0x230);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0059dbe0(this_00,uVar1,1);
  }
  return uVar1;
}

/* ref: FUN_007b9a10 */
uint F_007b9a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7b9a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if ((*(byte *)(param_1 + param_2 * 8) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4 + param_2 * 8);
  }
  this_00 = *(undefined * PTR32 *)((int)this + param_3 * 4 + 0x2fc);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0059cf90(this_00,uVar1,1,1);
  }
  return uVar1;
}

/* ref: FUN_007b9a50 */
uint F_007b9a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7b9a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  byte * pbVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_1;
  if (*(int *)((int)this + param_1 * 4 + 0x2b0) != 0) {
    uVar5 = 0;
    iVar1 = param_1 * 0xc;
    if (param_4 != 0) {
      pbVar2 = (byte *)(param_2 + param_3 * 8);
      iVar6 = 0;
      do {
        if ((*pbVar2 & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar2 + 4);
        }
        F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + iVar1 + 0x30c) + iVar6))),uVar3);
        uVar4 = F_0042a990(*(int *)((int)this + iVar1 + 0x30c) + iVar6);
        pbVar2 = pbVar2 + 8;
        *((uint *)GEN_TOP((*(int *)((int)this + iVar1 + 0x308) + uVar5 * 4))) = uVar4;
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0x54;
      } while (uVar5 < param_4);
    }
    uVar5 = F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x2b0) + 0x88))),param_4,
                         *(undefined4 *)((int)this + iVar1 + 0x308),1);
  }
  return uVar5;
}

/* ref: FUN_007b9b00 */
uint F_007b9b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = param_1;
  if (*(int *)((int)this + 0x2b0) != 0) {
    if ((*(byte *)(param_1 + 0xa00) & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xa04);
    }
    if ((*(byte *)(param_1 + 0xa48) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0xa4c);
    }
    if (iVar3 != 0) {
      F_007b9a50(this,0,param_1,0x141,iVar3);
      F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2b0),uVar5);
      F_00581b80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2b0) + 0x88))));
    }
  }
  if (((*(byte *)(param_1 + 0xa50) & 0xf) != 0) && (*(int *)(param_1 + 0xa54) != 0)) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1b8),1);
  }
  if (*(int *)((int)this + 0x2b4) != 0) {
    if ((*(byte *)(param_1 + 0x30) & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x34);
    }
    if ((*(byte *)(param_1 + 0xa60) & 0xf) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(int *)(param_1 + 0xa64);
    }
    if (iVar3 != 0) {
      F_007b9a50(this,1,iVar2,7,iVar3);
      iVar6 = param_1;
      if (param_1 < 0) {
        iVar6 = iVar3 + -1;
      }
      F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2b4),iVar6);
    }
  }
  if ((*(byte *)(iVar2 + 0xa58) & 0xf) == 0) {
LAB_007b9c5a: ;
    if (*(int *)((int)this + 0x2b4) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2b4) + 0x28))))(*(int * PTR32 *)((int)this + 0x2b4),1);
    }
    if (*(int *)((int)this + 0x2fc) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2fc) + 0x28))))(*(int * PTR32 *)((int)this + 0x2fc),1);
      F_00563b00(*(undefined4 *)((int)this + 0x2fc),1);
      if ((*(byte *)(iVar2 + 0xa90) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 0xa94);
      }
      F_0059d040(*(undefined * PTR32 *)((int)this + 0x2fc),uVar5,1,1);
      if ((*(byte *)(iVar2 + 0xa98) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 0xa9c);
      }
      F_0059d070(*(undefined * PTR32 *)((int)this + 0x2fc),uVar5,1,1);
      F_00563aa0(*(undefined4 *)((int)this + 0x2fc),10);
    }
    if (*(int *)((int)this + 0x300) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x300) + 0x28))))(*(int * PTR32 *)((int)this + 0x300),1);
      F_00563b00(*(undefined4 *)((int)this + 0x300),1);
      if ((*(byte *)(iVar2 + 0xaa0) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 0xaa4);
      }
      F_0059d040(*(undefined * PTR32 *)((int)this + 0x300),uVar5,1,1);
      if ((*(byte *)(iVar2 + 0xaa8) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 0xaac);
      }
      F_0059d070(*(undefined * PTR32 *)((int)this + 0x300),uVar5,1,1);
      F_00563aa0(*(undefined4 *)((int)this + 0x300),10);
    }
  }
  else {
    if (*(int *)(iVar2 + 0xa5c) == 2) {
      if (*(int *)((int)this + 0x2b4) != 0) {
        uVar5 = 1;
LAB_007b9c14: ;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2b4) + 0x28))))(*(int * PTR32 *)((int)this + 0x2b4),uVar5);
      }
    }
    else {
      if (*(int *)(iVar2 + 0xa5c) != 1) goto LAB_007b9c5a;
      if (*(int *)((int)this + 0x2b4) != 0) {
        uVar5 = 0;
        goto LAB_007b9c14;
      }
    }
    if (*(int *)((int)this + 0x2fc) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2fc) + 0x28))))(*(int * PTR32 *)((int)this + 0x2fc),0);
    }
    if (*(int *)((int)this + 0x300) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x300) + 0x28))))(*(int * PTR32 *)((int)this + 0x300),0);
    }
  }
  if ((*(byte *)(iVar2 + 0xa68) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0xa6c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2fc) != (undefined *)0x0) {
    F_0059cf90(*(undefined * PTR32 *)((int)this + 0x2fc),uVar5,1,1);
  }
  if ((*(byte *)(iVar2 + 0xa70) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0xa74);
  }
  if (*(undefined * PTR32 *)((int)this + 0x300) != (undefined *)0x0) {
    F_0059cf90(*(undefined * PTR32 *)((int)this + 0x300),uVar5,1,1);
  }
  if ((*(byte *)(iVar2 + 0xa58) & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0xa5c);
  }
  piVar1 = *(int * PTR32 *)((int)this + iVar3 * 4 + 0x1c0);
  if (piVar1 != (int *)0x0) {
    uVar4 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar4 + 0xc0);
  }
  if ((*(byte *)(iVar2 + 0xa78) & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0xa7c);
  }
  piVar1 = *(int * PTR32 *)((int)this + iVar3 * 4 + 0x1cc);
  if (piVar1 != (int *)0x0) {
    uVar4 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar4 + 0xc0);
  }
  if ((*(byte *)(iVar2 + 0xa80) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0xa84);
  }
  if (*(undefined * PTR32 *)((int)this + 600) != (undefined *)0x0) {
    uVar4 = F_0059dde0(*(undefined * PTR32 *)((int)this + 600),(uint)(uVar4 != 0));
  }
  if ((*(byte *)(iVar2 + 0xa88) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0xa8c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x230) != (undefined *)0x0) {
    uVar4 = F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x230),uVar5,1);
  }
  return uVar4;
}

/* ref: FUN_007b9e80 */
uint F_007b9e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7b9e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0xa48) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x25c) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x25c),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa50) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa54);
  }
  if (*(undefined * PTR32 *)((int)this + 0x260) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x260),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa58) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa5c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x234) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x234),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa60) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa64);
  }
  if (*(undefined * PTR32 *)((int)this + 0x238) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x238),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa68) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa6c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x23c) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x23c),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa70) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa74);
  }
  if (*(undefined * PTR32 *)((int)this + 0x240) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x240),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa78) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa7c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x244) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x244),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa80) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa84);
  }
  if (*(undefined * PTR32 *)((int)this + 0x248) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x248),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa88) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa8c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x24c) != (undefined *)0x0) {
    F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x24c),uVar2,1);
  }
  if ((*(byte *)(param_1 + 0xa90) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa94);
  }
  if (*(undefined * PTR32 *)((int)this + 0x264) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x264),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa98) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa9c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x268) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x268),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xaa0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xaa4);
  }
  if (*(undefined * PTR32 *)((int)this + 0x26c) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x26c),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xaa8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xaac);
  }
  if (*(undefined * PTR32 *)((int)this + 0x270) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x270),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xab0) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xab4);
  }
  if (*(undefined * PTR32 *)((int)this + 0x274) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x274),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xab8) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xabc);
  }
  if (*(undefined * PTR32 *)((int)this + 0x278) != (undefined *)0x0) {
    uVar3 = F_0059dde0(*(undefined * PTR32 *)((int)this + 0x278),(uint)(uVar3 != 0));
  }
  return uVar3;
}

/* ref: FUN_007ba0e0 */
uint F_007ba0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ba0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 uVar5;
  uint * this_00;
  int iVar6;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  if ((param_2 != 0) && (param_1 != (undefined *)0x0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
    (*(int *)(gen_frame + 0xc)) = param_2;
    uVar2 = F_0055a020(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = (uint)uVar2;
    uVar3 = F_0055ab00(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    bVar1 = F_0055ab50(param_1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
    uVar3 = F_0055dcb0();
    pbVar4 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x8)))));
    if ((*pbVar4 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(pbVar4 + 4);
    }
    F_00584110(param_1,uVar5);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      uVar3 = F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_007ba1d0 */
uint F_007ba1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ba1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 0xa48) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa4c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x29c) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x29c),(uint)(iVar1 != 0));
  }
  if ((*(byte *)(param_1 + 0xa50) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa54);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2a0) != (undefined *)0x0) {
    uVar2 = F_0059dde0(*(undefined * PTR32 *)((int)this + 0x2a0),(uint)(uVar2 != 0));
  }
  if ((*(byte *)(param_1 + 0xa58) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xa5c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x250) != (undefined *)0x0) {
    uVar2 = F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x250),uVar3,1);
  }
  return uVar2;
}

/* ref: FUN_007ba260 */
uint F_007ba260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ba260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = param_1;
  uVar3 = F_0055dcb0();
  iVar4 = 0;
  if (*(int *)((int)this + 0x2f0) != 0) {
    if ((*(byte *)(param_1 + 0x9a0) & 0xf) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(int *)(param_1 + 0x9a4);
    }
    if ((*(byte *)(iVar2 + 0xa50) & 0xf) != 0) {
      iVar4 = *(int *)(iVar2 + 0xa54);
    }
    if ((param_1 == 0) || (iVar4 < 0)) {
      uVar3 = F_0043bd30(*(undefined * PTR32 *)(uVar3 + 0x30),0x1016);
      F_0058e4c0(*(undefined * PTR32 *)((int)this + 0x2f0),uVar3);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2f0) + 0x28))))(*(int * PTR32 *)((int)this + 0x2f0),0);
      if (*(int *)((int)this + 0x1a8) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1a8),0);
      }
    }
    else {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2f0) + 0x28))))(*(int * PTR32 *)((int)this + 0x2f0),1);
      if (*(int *)((int)this + 0x1a8) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1a8),1);
      }
      F_007b9a50(this,0x10,iVar2,0x135,param_1);
      F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2f0),iVar4);
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f0) + 0x88)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1);
      F_00581b80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f0) + 0x88))));
    }
  }
  if (((*(byte *)(iVar2 + 0xa70) & 0xf) != 0) && (*(int *)(iVar2 + 0xa74) != 0)) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1bc),1);
  }
  if ((*(byte *)(iVar2 + 0xa48) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0xa4c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2a4) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x2a4),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(iVar2 + 0xa58) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0xa5c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2a8) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x2a8),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(iVar2 + 0xa60) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0xa64);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2ac) != (undefined *)0x0) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x2ac),(uint)(iVar4 != 0));
  }
  if ((*(byte *)(iVar2 + 0xa68) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 0xa6c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2f4) != (undefined *)0x0) {
    uVar3 = F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2f4),uVar3);
  }
  if ((*(byte *)(iVar2 + 0xa78) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0xa7c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x254) != (undefined *)0x0) {
    uVar3 = F_0059dbe0(*(undefined * PTR32 *)((int)this + 0x254),uVar5,1);
  }
  return uVar3;
}

/* ref: FUN_007ba450 */
uint F_007ba450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ba450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0xa48) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xa4c);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2f8) != (undefined *)0x0) {
    F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2f8),uVar2);
  }
  if ((*(byte *)(param_1 + 0xa50) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa54);
  }
  piVar1 = *(int * PTR32 *)((int)this + uVar3 * 4 + 0x228);
  if (piVar1 != (int *)0x0) {
    uVar3 = F_00561390();
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar3 + 0xc0);
  }
  return uVar3;
}

/* ref: FUN_007ba4c0 */
byte F_007ba4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ba4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x198) == 2) {
    piVar1 = *(int * PTR32 *)((int)this + 0x298);
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    if (uVar2 == uVar3) {
      return 1;
    }
  }
  return 0;
}

