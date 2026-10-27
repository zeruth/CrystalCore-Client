#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00563900 */
byte F_00563900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((*(char *)(in_ecx + 0x80) == '\x7f') && ((param_2 == 0xf || (param_2 == 0x10)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00563940 */
unsigned int F_00563940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00563950 */
uint F_00563950(unsigned int gen_a0)
{
  GEN_ENTER(0x563950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(byte *)(in_ecx + 0x6e) & 0x10) != 0) {
    return 3;
  }
  if ((*(byte *)(in_ecx + 0x6f) & 1) != 0) {
    if ((*(byte *)(in_ecx + 0x6e) & 0xc0) == 0) {
      return 0;
    }
    return 2;
  }
  return 1;
}

/* ref: FUN_00563980 */
uint F_00563980(unsigned int gen_a0)
{
  GEN_ENTER(0x563980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 100);
}

/* ref: FUN_00563990 */
uint F_00563990(unsigned int gen_a0)
{
  GEN_ENTER(0x563990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(byte *)(in_ecx + 0x6f) & 8) == 0) {
    uVar1 = 2;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf3 */
uint F_005639a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5639a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  return 0;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf10 */
uint F_005639f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5639f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  if ((this != (undefined *)0x0) && (iVar1 = *(int *)(this + 0x70), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) =
         *(uint *)(iVar1 + 0x84) ^ ((param_1 & 0xff) << 0x15 ^ *(uint *)(iVar1 + 0x84)) & 0x200000;
  }
  iVar1 = *(int *)(this + 0x98);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) =
         *(uint *)(iVar1 + 0x84) ^ (param_1 << 0x19 ^ *(uint *)(iVar1 + 0x84)) & 0x2000000;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x170) + 0x28))))(*(int * PTR32 *)(this + 0x170),param_1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x174) + 0x28))))(*(int * PTR32 *)(this + 0x174),param_1);
  return uVar2;
}

/* ref: FUN_00563a70 */
uint F_00563a70(unsigned int gen_a0)
{
  GEN_ENTER(0x563a70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x268);
  }
  return 0;
}

/* ref: FUN_00563a80 */
uint F_00563a80(unsigned int gen_a0)
{
  GEN_ENTER(0x563a80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x26c);
  }
  return 0;
}

/* ref: FUN_00563aa0 */
unsigned int F_00563aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined4 *)(in_ecx + 0x270) = param_2;
  }
  return 0;
}

/* ref: FUN_00563ad0 */
unsigned int F_00563ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563ad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined1 *)(in_ecx + 0x184) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00563b00 */
unsigned int F_00563b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined1 *)(in_ecx + 0x185) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00563b40 */
uint F_00563b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if ((int)param_1 < (int)*(uint *)((int)this + 0x268)) {
    uVar1 = *(uint *)((int)this + 0x268);
  }
  if ((int)*(uint *)((int)this + 0x26c) < (int)uVar1) {
    uVar1 = *(uint *)((int)this + 0x26c);
  }
  return uVar1;
}

/* ref: FUN_00563b70 */
uint F_00563b70(unsigned int gen_a0)
{
  GEN_ENTER(0x563b70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar1 = iVar1 / 10;
      uVar2 = uVar2 + 1;
    } while (0 < iVar1);
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  return 1;
}

/* ref: FUN_00563bb0 */
uint F_00563bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x563bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 0x178) + param_2;
  if (*(char *)(in_ecx + 0x184) != '\0') {
    if ((char)param_3 != '\0') {
      if ((int)uVar1 <= *(int *)(in_ecx + 0x26c)) {
        return uVar1;
      }
      return *(uint *)(in_ecx + 0x268);
    }
    if ((char)param_4 == '\0') {
      return uVar1;
    }
  }
  if ((int)*(uint *)(in_ecx + 0x26c) < (int)uVar1) {
    uVar1 = *(uint *)(in_ecx + 0x26c);
  }
  return uVar1;
}

/* ref: FUN_00563c00 */
uint F_00563c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x563c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 0x178) - param_2;
  if (*(char *)(in_ecx + 0x184) != '\0') {
    if ((char)param_3 != '\0') {
      if (*(int *)(in_ecx + 0x268) <= (int)uVar1) {
        return uVar1;
      }
      return *(uint *)(in_ecx + 0x26c);
    }
    if ((char)param_4 == '\0') {
      return uVar1;
    }
  }
  if ((int)uVar1 < (int)*(uint *)(in_ecx + 0x268)) {
    uVar1 = *(uint *)(in_ecx + 0x268);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentGuildLeveCard::vf16 */
unsigned int F_00563c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined * this_00;
  undefined4 * puVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    this_00 = this + 4;
    uVar3 = F_0055d920(this_00,*(undefined4 *)(param_1 + 0x10));
    if ((uVar3 == 0) || (*(short *)(uVar3 + 0x18) != 2)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0x84) = uVar3;
    param_1 = (char *)F_0055d920(this_00,*(undefined4 *)(param_1 + 0x14));
    if ((param_1 == (char *)0x0) || (*(short *)((int)param_1 + 0x18) != 2)) {
      param_1 = (char *)0x0;
    }
    *(char * PTR32 *)(this + 0x88) = param_1;
    uVar4 = F_0055d920(this_00,*(undefined4 *)(pcVar2 + 0x18));
    if ((uVar4 == 0) || (*(short *)(uVar4 + 0x18) != 2)) {
      uVar4 = 0;
    }
    uVar6 = 0;
    *(uint *)(this + 0x8c) = uVar4;
    if (uVar3 == 0) {
      uVar6 = 0;
    }
    else if ((*(int *)(uVar3 + 0x8c) != 0) &&
            (puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0x8c) + 8))) + (uint)*(ushort *)(uVar3 + 0x90) * 0xc)))
            , puVar1 != (undefined4 *)0x0)) {
      uVar6 = *puVar1;
    }
    *(undefined4 *)(this + 0x90) = uVar6;
    uVar6 = 0;
    if (((param_1 != (char *)0x0) && (uVar6 = 0, *(int *)((int)param_1 + 0x8c) != 0)) &&
       (puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x8c) + 8))) +
                 (uint)*(ushort *)((int)param_1 + 0x90) * 0xc))), puVar1 != (undefined4 *)0x0)) {
      uVar6 = *puVar1;
    }
    uVar5 = 0;
    *(undefined4 *)(this + 0x94) = uVar6;
    if (uVar4 == 0) {
      *(undefined4 *)(this + 0x98) = 0;
      return 0;
    }
    if ((*(int *)(uVar4 + 0x8c) != 0) &&
       (puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar4 + 0x8c) + 8))) + (uint)*(ushort *)(uVar4 + 0x90) * 0xc))),
       puVar1 != (undefined4 *)0x0)) {
      uVar5 = *puVar1;
    }
    *(undefined4 *)(this + 0x98) = uVar5;
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentGuildLeveCard::vf8 */
unsigned int F_00563da0(void)
{
  GEN_ENTER(0x563da0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00563db0 */
byte F_00563db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563db0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  
  *(uint *)(param_1 + 0x90) =
       *(uint *)(param_1 + 0x90) ^ (param_2 & 0xff ^ *(uint *)(param_1 + 0x90)) & 1;
  if ((byte)param_2 != 0) {
    fVar1 = *(float *)(param_1 + 0x8c);
    iVar2 = *(int *)(param_1 + 0x88);
    if (iVar2 != 0) {
      if (((*(uint *)(iVar2 + 0x88) & 1) == 0) &&
         (fVar4 = (float10)fVar1, bVar3 = GEN_ISNAN((float10)*(float *)(iVar2 + 0x38)) || GEN_ISNAN(fVar4),
         bVar3 == (bVar3 || (float10)*(float *)(iVar2 + 0x38) == fVar4))) {
        *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 1;
      }
      *(float *)(iVar2 + 0x38) = fVar1;
    }
  }
  return (byte)param_2;
}

/* ref: FUN_00563e10 */
unsigned int F_00563e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x563e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 local_10;
  
  if ((*(ushort *)((int)this + 0x28) < 10) && (param_1 != 0)) {
    local_10 = CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x78) >> 8),
                        ((char)param_2 + '\x05') * '\n' + *(char *)((int)this + 0x28));
    *(undefined4 *)(param_1 + 0x78) = local_10;
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_1 + 0x80);
    *((int *)GEN_TOP(((int)this + *(short *)((int)this + 0x28) * 4))) = param_1;
    *(short *)((int)this + 0x28) = *(short *)((int)this + 0x28) + 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentJournalCanvas::vf8 */
unsigned int F_00563e90(unsigned int gen_a0)
{
  GEN_ENTER(0x563e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x74) = 1;
  return 0;
}

/* ref: FUN_00563ea0 */
uint F_00563ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x563ea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) & 0xffefffff;
    *(uint *)(uVar1 + 0x88) = *(uint *)(uVar1 + 0x88) | 0x80;
  }
  return uVar1;
}

/* ref: FUN_00563f60 */
ushort F_00563f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x563f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  short * param_3 = (short *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  short sVar1;
  short sVar2;
  bool bVar3;
  float10 fVar4;
  
  if ((int)(uint)*(ushort *)(param_1 + 0x22a) < (int)*(short *)param_2 + (int)(short)param_5) {
    *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 0x228);
    *param_3 = *(short *)(param_1 + 0x22e);
    *(char *)(param_1 + 0x221) = *(char *)(param_1 + 0x221) + '\x01';
  }
  if (param_4 != 0) {
    sVar1 = *(short *)param_2;
    sVar2 = *param_3;
    if (((*(uint *)(param_4 + 0x88) & 1) == 0) &&
       ((fVar4 = (float10)(int)sVar1, bVar3 = GEN_ISNAN((float10)*(float *)(param_4 + 0x38)) || GEN_ISNAN(fVar4)
        , bVar3 == (bVar3 || (float10)*(float *)(param_4 + 0x38) == fVar4) ||
        (fVar4 = (float10)(int)sVar2, bVar3 = GEN_ISNAN((float10)*(float *)(param_4 + 0x3c)) || GEN_ISNAN(fVar4)
        , bVar3 == (bVar3 || (float10)*(float *)(param_4 + 0x3c) == fVar4))))) {
      *(uint *)(param_4 + 0x88) = *(uint *)(param_4 + 0x88) | 1;
    }
    *(float *)(param_4 + 0x38) = (float)(int)sVar1;
    *(float *)(param_4 + 0x3c) = (float)(int)sVar2;
  }
  *(short *)param_2 = *(short *)param_2 + *(short *)(param_1 + 0x226);
  return 0;
}

/* ref: FUN_00564010 */
unsigned int F_00564010(unsigned int gen_a0)
{
  GEN_ENTER(0x564010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  int * piVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  
  (*(uint *)(gen_frame + 0x18)) = *(byte *)((int)this + 0x221) + 1;
  if (1 < (*(uint *)(gen_frame + 0x18))) {
    (*(uint *)(gen_frame + 0x18)) = 2;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  if ((*(uint *)(gen_frame + 0x18)) != 0) {
    do {
      iVar8 = (int)*(short *)((*(int *)(gen_frame + 0xc)) * 0x2c + 0x1ec + (int)this);
      piVar2 = (int *)((*(int *)(gen_frame + 0xc)) * 0x2c + 0x1c4 + (int)this);
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          iVar4 = piVar2[iVar9];
          if (iVar4 != 0) {
            (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = (char)*(undefined4 *)(iVar4 + 0x78);
            cVar5 = (char)(*(undefined4 *)(gen_frame + 0x0));
            cVar3 = (char)(*(undefined4 *)(gen_frame + 0x0)) + -1;
            cVar6 = (char)(*(undefined4 *)(gen_frame + 0x0)) + '\x01';
            bVar10 = iVar9 == 0;
            if ((bool)bVar10) {
              cVar3 = *((char *)GEN_TOP((piVar2[iVar8 + -1] + 0x78)));
            }
            if (iVar9 == iVar8 + -1) {
              cVar6 = *(char *)(*piVar2 + 0x78);
              bVar10 = bVar10 | 2;
            }
            (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31((int3)((uint)*(undefined4 *)(iVar4 + 0x7c) >> 8),cVar6);
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = (undefined2)*(undefined4 *)(iVar4 + 0x78);
            gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 0, 3, (unsigned long long)(CONCAT12(1,(undefined2)(*(undefined4 *)(gen_frame + 0x0)))));
            (*(undefined4 *)(gen_frame + 0x0)) = CONCAT13(cVar3,(undefined3)(*(undefined4 *)(gen_frame + 0x0)));
            if ((*(int *)(gen_frame + 0xc)) == 0) {
              if ((1 < (*(uint *)(gen_frame + 0x18))) &&
                 ((iVar7 = *(int *)((int)this + iVar9 * 4 + 0x1f0), iVar7 != 0 ||
                  ((0 < *(short *)((int)this + 0x218) &&
                   (iVar7 = *((int *)GEN_TOP(((int)this + *(short *)((int)this + 0x218) * 4 + 0x1ec))),
                   iVar7 != 0)))))) {
                gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 0, 3, (unsigned long long)(CONCAT12(*(undefined1 *)(iVar7 + 0x78),(undefined2)(*(undefined4 *)(gen_frame + 0x0)))));
                (*(undefined4 *)(gen_frame + 0x0)) = CONCAT13(cVar3,(undefined3)(*(undefined4 *)(gen_frame + 0x0)));
              }
            }
            else if (((*(int *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x18)) - 1) &&
                    ((iVar7 = *(int *)((int)this + iVar9 * 4 + 0x1c4), iVar7 != 0 ||
                     ((0 < *(short *)((int)this + 0x1ec) &&
                      (iVar7 = *((int *)GEN_TOP(((int)this + *(short *)((int)this + 0x1ec) * 4 + 0x1c0))),
                      iVar7 != 0)))))) {
              (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = CONCAT11(*(undefined1 *)(iVar7 + 0x78),cVar5);
            }
            *(undefined4 *)(iVar4 + 0x78) = (*(undefined4 *)(gen_frame + 0x0));
            *(undefined4 *)(iVar4 + 0x7c) = (*(undefined4 *)(gen_frame + 0x4));
            *(undefined1 *)(iVar4 + 0x80) = *(undefined1 *)(iVar4 + 0x80);
            if (bVar10 != 0) {
              iVar4 = *(int *)(iVar4 + 0x70);
              if ((bVar10 & 1) != 0) {
                puVar1 = (uint *)(iVar4 + 0x88);
                *puVar1 = *puVar1 | 0x20;
              }
              if ((bVar10 & 2) != 0) {
                puVar1 = (uint *)(iVar4 + 0x88);
                *puVar1 = *puVar1 | 0x40;
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
    } while ((*(int *)(gen_frame + 0xc)) < (int)(*(uint *)(gen_frame + 0x18)));
  }
  return 0;
}

/* ref: FUN_005641b0 */
byte F_005641b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5641b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x104);
  *(uint *)(param_1 + 0x9c) = param_2;
  uVar2 = param_2;
  if (iVar1 != 0) {
    uVar3 = (*(short *)(param_1 + 0x232) + *(short *)(param_1 + 0x224)) * (short)param_2;
    uVar2 = (uint)(short)uVar3;
    fVar6 = (float)(int)uVar2;
    if ((*(uint *)(iVar1 + 0x88) & 1) == 0) {
      fVar5 = (float10)(int)uVar2;
      bVar4 = GEN_ISNAN((float10)*(float *)(iVar1 + 0x38)) || GEN_ISNAN(fVar5);
      uVar2 = (uint)(uVar3 & 0xff);
      if (bVar4 == (bVar4 || (float10)*(float *)(iVar1 + 0x38) == fVar5)) {
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 1;
      }
    }
    *(float *)(iVar1 + 0x38) = fVar6;
  }
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
  }
  return (byte)uVar2;
}

/* ref: FUN_00564250 */
uint F_00564250(unsigned int gen_a0)
{
  GEN_ENTER(0x564250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x9c);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  return *(uint *)(in_ecx + 0x1a0 + iVar1 * 4);
}

/* ref: FUN_005642d0 */
byte F_005642d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5642d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == *(int *)(in_ecx + 0xe8)) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return 1;
}

/* ref: FUN_00564300 */
ushort F_00564300(unsigned int gen_a0)
{
  GEN_ENTER(0x564300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0xd0);
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0x18) == 3)) {
    if (*(byte *)(iVar1 + 0x116) != 0) {
      return (ushort)*(byte *)(iVar1 + 0x116);
    }
    return (ushort)*(byte *)(iVar1 + 0xfd);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentMultipurpose::vf16 */
uint F_00564330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x564330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    *(undefined4 *)(this + 0x84) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 0x14);
    *(uint *)(this + 0x98) = uVar1;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentMultipurpose::vf8 */
unsigned int F_00564390(void)
{
  GEN_ENTER(0x564390u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005643a0 */
uint F_005643a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5643a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x90 + param_2 * 4);
}

/* ref: FUN_005643c0 */
unsigned int F_005643c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5643c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0ca0)));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x274) = uVar1;
  *(undefined4 *)((int)this + 0x278) = uVar1;
  *(undefined4 *)((int)this + 0x27c) = uVar1;
  *(undefined4 *)((int)this + 0x288) = uVar2;
  *(undefined4 *)((int)this + 0x28c) = uVar2;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined2 *)((int)this + 0x290) = 0;
  *(undefined2 *)((int)this + 0x292) = 0;
  *(undefined2 *)((int)this + 0x294) = 0;
  *(undefined2 *)((int)this + 0x296) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  return 0;
}

/* ref: FUN_005644f0 */
uint F_005644f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5644f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  
  if ((param_2 < *(uint *)((int)this + param_1 * 4 + 0x2a0)) &&
     (iVar1 = *(int *)((int)this + param_1 * 4 + 0x2b0), iVar1 != 0)) {
    return iVar1 + param_2 * 0x24;
  }
  return 0;
}

/* ref: FUN_00564520 */
uint F_00564520(unsigned int gen_a0)
{
  GEN_ENTER(0x564520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8)));
}

/* ref: FUN_00564540 */
uint F_00564540(unsigned int gen_a0)
{
  GEN_ENTER(0x564540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined2 uVar2;
  undefined2 local_c;
  
  local_c = (undefined2)
            (int)TRUNC((float10)*(float *)((int)this + 0x278) * (float10)*(double *)&REFG(undefined, 0x1090718));
  uVar2 = local_c;
  uVar1 = (uint)TRUNC(((float10)*(double *)&REFG(undefined, 0x10a0ca8) / (float10)*(float *)((int)this + 0x278)) /
                      (float10)*(double *)&REFG(undefined, 0x1090718));
  local_c = (undefined2)uVar1;
  *(undefined2 *)((int)this + 0x2e0) = local_c;
  *(undefined2 *)((int)this + 0x2e2) = local_c;
  *(undefined2 *)((int)this + 0x2e4) = uVar2;
  *(undefined2 *)((int)this + 0x2e6) = uVar2;
  return uVar1 & 0xffff;
}

/* ref: FUN_005645c0 */
byte F_005645c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5645c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  
  *(byte *)(in_ecx + 0xb9) = (byte)param_2;
  iVar1 = *(int *)(in_ecx + 0x88);
  if (iVar1 != 0) {
    if ((byte)param_2 != 0) {
      *(byte *)(iVar1 + 0x93) = *(byte *)(iVar1 + 0x93) | 8;
      return (byte)param_2;
    }
    *(byte *)(iVar1 + 0x93) = *(byte *)(iVar1 + 0x93) & 0xf7;
  }
  return (byte)param_2;
}

/* ref: FUN_005645f0 */
uint F_005645f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5645f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260)));
  if ((uVar1 != (*(uint *)&gen_args[1])) || ((char)(*(undefined4 *)&gen_args[3]) != '\0')) {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x268))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x268))), REFG(float, 0x1087f04));
      uVar1 = ~uVar1 & (*(uint *)&gen_args[1]);
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xba))) = 1;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x264))) = uVar1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26c))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270))), REFG(float, 0x10a0898));
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbb))) = 1;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) = (*(uint *)&gen_args[1]);
  }
  return uVar1;
}

/* ref: FUN_00564660 */
float10 F_00564660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x564660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 1 << ((char)param_2 + (char)param_1 * '\x03' & 0x1fU);
  if ((*(uint *)((int)this + 0x264) & uVar1) != 0) {
    return (float10)*(float *)((int)this + 0x268);
  }
  if ((*(uint *)((int)this + 0x260) & uVar1) != 0) {
    return (float10)0;
  }
  return (float10)1;
}

/* ref: FUN_005646a0 */
uint F_005646a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5646a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return *(uint *)(in_ecx + 0x98);
  case 1: ;
    return *(uint *)(in_ecx + 0x9c);
  case 2: ;
    return *(uint *)(in_ecx + 0xa0);
  case 3: ;
    return *(uint *)(in_ecx + 0xa4);
  default: ;
    return 0;
  }
}

/* ref: FUN_005646f0 */
uint F_005646f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5646f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (uint)*(byte *)(in_ecx + 0x20);
  }
  return 0;
}

/* ref: FUN_00564700 */
uint F_00564700(unsigned int gen_a0)
{
  GEN_ENTER(0x564700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x1c);
  }
  return 0;
}

/* ref: FUN_00564760 */
uint F_00564760(unsigned int gen_a0)
{
  GEN_ENTER(0x564760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_ecx + 0x20))) {
    case 0: ;
      return *(uint *)(in_ecx + 0x10);
    case 1: ;
    case 2: ;
      return *(uint *)(in_ecx + 0x14);
    case 3: ;
      return *(uint *)(in_ecx + 0x18);
    }
  }
  return 0;
}

/* ref: FUN_005647a0 */
uint F_005647a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5647a0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (in_ecx != (int *)0x0) {
    switch((unsigned int)(uintptr_t)((char)in_ecx[8])) {
    case '\0': ;
    case '\x01': ;
      return in_ecx[1];
    case '\x02': ;
      if (*in_ecx != 0) {
        return *(uint *)(*in_ecx + 0x84);
      }
    case '\x03': ;
      return in_ecx[2];
    }
  }
  return 0;
}

/* ref: FUN_005647e0 */
uint F_005647e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5647e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_ecx + 0x20))) {
    case 0: ;
    case 1: ;
      return *(uint *)(in_ecx + 8);
    case 2: ;
      return *(uint *)(in_ecx + 4);
    case 3: ;
      return *(uint *)(in_ecx + 0xc);
    }
  }
  return 0;
}

/* ref: FUN_00564820 */
uint F_00564820(unsigned int gen_a0)
{
  GEN_ENTER(0x564820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  char cVar1;
  
  if (in_ecx != 0) {
    cVar1 = *(char *)(in_ecx + 0x20);
    if (cVar1 == '\x01') {
      return *(uint *)(in_ecx + 0xc);
    }
    if (cVar1 == '\x02') {
      return *(uint *)(in_ecx + 8);
    }
    if (cVar1 == '\x03') {
      return *(uint *)(in_ecx + 0x10);
    }
  }
  return 0;
}

/* ref: FUN_00564840 */
uint F_00564840(unsigned int gen_a0)
{
  GEN_ENTER(0x564840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    if (*(char *)(in_ecx + 0x20) == '\x01') {
      return *(uint *)(in_ecx + 0x10);
    }
    if (*(char *)(in_ecx + 0x20) == '\x02') {
      return *(uint *)(in_ecx + 0xc);
    }
  }
  return 0;
}

/* ref: FUN_00564880 */
uint F_00564880(unsigned int gen_a0)
{
  GEN_ENTER(0x564880u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((in_ecx != 0) && (*(char *)(in_ecx + 0x20) == '\x03')) {
    return *(uint *)(in_ecx + 0x14);
  }
  return 0;
}

/* ref: FUN_005648a0 */
uint F_005648a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5648a0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int in_ecx;
  int in_ecx_00;
  float10 fVar5;
  float local_8;
  
  uVar4 = param_2;
  if (param_2 == 0) {
    return param_1;
  }
  local_8 = *(float *)(param_2 + 0x38);
  fVar1 = *(float *)(param_2 + 0x3c);
  if (param_1 == 0) {
LAB_005648de: ;
    in_ecx = 0;
  }
  else if (*(char *)(param_1 + 0x20) == '\x01') {
    in_ecx = *(int *)(param_1 + 0x10);
  }
  else {
    if (*(char *)(param_1 + 0x20) != '\x02') goto LAB_005648de;
    in_ecx = *(int *)(param_1 + 0xc);
  }
  if (param_1 == 0) {
LAB_00564901: ;
    in_ecx_00 = 0;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x20);
    if (cVar2 == '\x01') {
      in_ecx_00 = *(int *)(param_1 + 0xc);
    }
    else if (cVar2 == '\x02') {
      in_ecx_00 = *(int *)(param_1 + 8);
    }
    else {
      if (cVar2 != '\x03') goto LAB_00564901;
      in_ecx_00 = *(int *)(param_1 + 0x10);
    }
  }
  uVar3 = param_3 - 1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    uVar3 = (uint)*(ushort *)(param_2 + 0x7c);
    local_8 = (float)((float10)uVar3 + (float10)local_8);
    if ((in_ecx != 0) && (uVar3 = F_0055a2d0(in_ecx), (char)uVar3 != '\0')) {
      F_00559e70(((undefined4)(uint)(in_ecx)),local_8);
      uVar3 = F_00559f00(((int)(uint)((in_ecx))), ((float)GEN_TOF(((float10)(int)((uint)*(ushort *)(param_2 + 0x7e) - (uint)*(ushort *)(((int)(uint)((in_ecx))) + 0x7e)) * (float10)REFG(double, 0x1088108) + (float10)fVar1))));
      local_8 = ((float)GEN_TOF(((float10)*(ushort *)(((int)(uint)(((in_ecx)))) + 0x7c) + (float10)local_8)));
    }
    if ((in_ecx_00 != 0) && (uVar3 = F_0055a2d0(in_ecx_00), (char)uVar3 != '\0')) {
      F_00559e70(((undefined4)(uint)(in_ecx_00)),local_8);
      uVar4 = F_00559f00(in_ecx_00, ((float)GEN_TOF(((float10)(int)((uint)*(ushort *)(param_2 + 0x7e) - (uint)*(ushort *)(in_ecx_00 + 0x7e)) * (float10)REFG(double, 0x1088108) + (float10)fVar1))));
      return uVar4;
    }
    break;
  case 1: ;
    if ((in_ecx != 0) && (uVar3 = F_0055a2d0(in_ecx), (char)uVar3 != '\0')) {
      local_8 = ((float)GEN_TOF(((float10)local_8 - (float10)*(ushort *)(((int)(uint)(in_ecx)) + 0x7c))));
      F_00559e70(((int)(uint)(in_ecx)),local_8);
      uVar3 = F_00559f00(((int)(uint)((in_ecx))), ((float)GEN_TOF(((float10)(int)((uint)*(ushort *)(param_2 + 0x7e) - (uint)*(ushort *)(((int)(uint)((in_ecx))) + 0x7e)) * (float10)REFG(double, 0x1088108) + (float10)fVar1))));
    }
    if ((in_ecx_00 != 0) && (uVar3 = F_0055a2d0(in_ecx_00), (char)uVar3 != '\0')) {
      F_00559e70(in_ecx_00,((float)GEN_TOF(((float10)local_8 - (float10)*(ushort *)(in_ecx_00 + 0x7c)))));
      uVar4 = F_00559f00(in_ecx_00, ((float)GEN_TOF(((float10)(int)((uint)*(ushort *)(param_2 + 0x7e) - (uint)*(ushort *)(in_ecx_00 + 0x7e)) * (float10)REFG(double, 0x1088108) + (float10)fVar1))));
      return uVar4;
    }
    break;
  case 2: ;
    if ((in_ecx != 0) && (uVar3 = F_0055a2d0(in_ecx), (char)uVar3 != '\0')) {
      fVar1 = ((float)GEN_TOF(((float10)fVar1 - (float10)*(ushort *)(((int)(uint)(in_ecx)) + 0x7e))));
      F_00559e70(((int)(uint)(in_ecx)), ((float)GEN_TOF(((float10)(int)((uint)*(ushort *)(param_2 + 0x7c) - (uint)*(ushort *)(((int)(uint)(in_ecx)) + 0x7c)) * (float10)REFG(double, 0x1088108) + (float10)local_8))));
      uVar3 = F_00559f00(((undefined4)(uint)((in_ecx))),fVar1);
    }
    param_2 = (uint)gen_fl2bits(fVar1);
    if (in_ecx_00 == 0) {
      return uVar3;
    }
    uVar3 = F_0055a2d0(in_ecx_00);
    if ((char)uVar3 == '\0') {
      return uVar3;
    }
    param_2 = (uint)gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_2))) - (float10)*(ushort *)(in_ecx_00 + 0x7e)))));
    fVar5 = (float10)(int)((uint)*(ushort *)(uVar4 + 0x7c) - (uint)*(ushort *)(in_ecx_00 + 0x7c)) * (float10)REFG(double, 0x1088108) + (float10)local_8;
    goto LAB_00564bc0;
  case 3: ;
    fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_2 + 0x7e) + (float10)fVar1)));
    if ((in_ecx != 0) && (uVar3 = F_0055a2d0(in_ecx), (char)uVar3 != '\0')) {
      F_00559e70(((int)(uint)(in_ecx)), ((float)GEN_TOF(((float10)(int)((uint)*(ushort *)(param_2 + 0x7c) - (uint)*(ushort *)(((int)(uint)(in_ecx)) + 0x7c)) * (float10)REFG(double, 0x1088108) + (float10)local_8))));
      uVar3 = F_00559f00(((undefined4)(uint)((in_ecx))),fVar1);
      fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(((int)(uint)(((in_ecx)))) + 0x7e) + (float10)fVar1)));
    }
    param_2 = (uint)gen_fl2bits(fVar1);
    if (in_ecx_00 == 0) {
      return uVar3;
    }
    uVar3 = F_0055a2d0(in_ecx_00);
    if ((char)uVar3 == '\0') {
      return uVar3;
    }
    fVar5 = (float10)(int)((uint)*(ushort *)(uVar4 + 0x7c) - (uint)*(ushort *)(in_ecx_00 + 0x7c)) * (float10)REFG(double, 0x1088108) + (float10)local_8;
LAB_00564bc0: ;
    F_00559e70(in_ecx_00,(float)fVar5);
    uVar3 = F_00559f00(((undefined4)(uint)(in_ecx_00)),GEN_TOF(gen_bits2f(param_2)));
  }
  return uVar3;
}

/* ref: FUN_00564c60 */
uint F_00564c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x564c60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00564cd0 */
uint F_00564cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x564cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = 0;
  if (0 < *(short *)this) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)this);
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 2)) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 2));
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 4)) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 4));
  }
  iVar2 = 0;
  if (0 < *(short *)this) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2 * 4)));
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2 * 4))) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)this);
  }
  if (*(int *)((int)this + 8) != 0) {
    F_00406b30(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 2)) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4)));
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4))) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 2));
  }
  if (*(int *)((int)this + 0x14) != 0) {
    F_00406b30(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    F_00406b30(*(int *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    F_00406b30(*(int *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 4)) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4)));
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4))) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 4));
  }
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    F_00406b30(*(int *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    uVar4 = F_00406b30(*(int *)((int)this + 0x28));
    uVar3 = (uint)uVar4;
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return uVar3;
}

/* ref: FUN_00564e90 */
uint F_00564e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x564e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) != 0) {
    if (*((short *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2))) == -1) {
      uVar1 = F_005571e0(this,param_1,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))));
      *((ushort *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2))) = uVar1;
      if (*((short *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2))) != -1) {
        F_00556b20(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))));
      }
    }
    if (-1 < *((short *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2)))) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_00564f00 */
uint F_00564f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x564f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) != 0) {
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2))) == -1) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
      F_00556c70(this_00);
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) = this_00;
      *((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2))) = (short)param_1;
      if (*((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2))) != -1) {
        F_00556c70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))));
      }
    }
    if (-1 < *((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2)))) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_00564f70 */
uint F_00564f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x564f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4))) != 0) {
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2))) == -1) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
      F_00556e70(this_00);
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4))) = this_00;
      *((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2))) = (short)param_1;
      if (*((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2))) != -1) {
        F_00556e70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4))));
      }
    }
    if (-1 < *((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2)))) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_00564fe0 */
uint F_00564fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x564fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  sVar1 = *((short *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2)));
  if (-1 < sVar1) {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + sVar1 * 4))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + sVar1 * 4))) = 0;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2))) = 0xffff;
  }
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) != 0) {
    puVar2 = (undefined4 *)*piVar3;
    piVar3 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar2)(puVar2,1)));
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
  }
  return (uint)piVar3;
}

/* ref: FUN_00565040 */
uint F_00565040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x565040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  sVar1 = *((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2)));
  if (-1 < sVar1) {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x18) + sVar1 * 4))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + sVar1 * 4))) = 0;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2))) = 0xffff;
  }
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) != 0) {
    puVar2 = (undefined4 *)*piVar3;
    piVar3 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar2)(puVar2,1)));
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) = 0;
  }
  return (uint)piVar3;
}

/* ref: FUN_005650a0 */
uint F_005650a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5650a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  sVar1 = *((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2)));
  if (-1 < sVar1) {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + sVar1 * 4))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + sVar1 * 4))) = 0;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2))) = 0xffff;
  }
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4))) != 0) {
    puVar2 = (undefined4 *)*piVar3;
    piVar3 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar2)(puVar2,1)));
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4))) = 0;
  }
  return (uint)piVar3;
}

/* ref: FUN_00565100 */
unsigned int F_00565100(unsigned int gen_a0)
{
  GEN_ENTER(0x565100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a094c));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(uint *)((int)this + 0x88) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(uint *)((int)this + 0x8c) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(uint *)((int)this + 0x90) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  return 0;
}

/* ref: FUN_005651c0 */
unsigned int F_005651c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5651c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  int local_8;
  
  iVar2 = param_4;
  if (param_3 < param_4) {
    if (param_4 - param_3 < 7) {
      *(undefined4 *)(param_1 + param_3 * 8) = *(undefined4 *)((int)param_2 + param_3 * 8);
      *(undefined4 *)(param_1 + 4 + param_3 * 8) = *(undefined4 *)((int)param_2 + 4 + param_3 * 8);
      iVar2 = param_3 + 1;
      if (iVar2 <= param_4) {
        puVar1 = (uint *)((int)param_2 + iVar2 * 8);
        puVar3 = (uint *)(param_1 + -8 + iVar2 * 8);
        param_2 = puVar3;
        iVar4 = iVar2;
        do {
          for (; (param_3 < iVar2 && (*puVar1 < *puVar3)); puVar3 = puVar3 + -2) {
            puVar3[2] = *puVar3;
            puVar3[3] = puVar3[1];
            iVar2 = iVar2 + -1;
          }
          puVar3 = param_2 + 2;
          *(uint *)(param_1 + iVar2 * 8) = *puVar1;
          *(uint *)(param_1 + 4 + iVar2 * 8) = puVar1[1];
          iVar2 = iVar4 + 1;
          puVar1 = puVar1 + 2;
          param_2 = puVar3;
          iVar4 = iVar2;
        } while (iVar2 <= param_4);
        return 0;
      }
    }
    else {
      iVar6 = param_3 + param_4 >> 1;
      F_005651c0(this,(int)param_2,(uint *)param_1,param_3,iVar6);
      iVar4 = iVar6 + 1;
      F_005651c0(this,(int)param_2,(uint *)param_1,iVar4,param_4);
      puVar1 = (uint *)(param_1 + param_3 * 8);
      local_8 = param_3;
      puVar3 = (uint *)((int)param_2 + iVar4 * 8);
      puVar7 = (uint *)((int)param_2 + param_3 * 8);
      param_4 = iVar4;
      while ((iVar4 = param_4, param_3 <= iVar6 && (iVar4 = param_3, param_4 <= iVar2))) {
        if (*puVar3 < *puVar7) {
          param_4 = param_4 + 1;
          *puVar1 = *puVar3;
          uVar5 = puVar3[1];
          puVar3 = puVar3 + 2;
        }
        else {
          param_3 = param_3 + 1;
          *puVar1 = *puVar7;
          uVar5 = puVar7[1];
          puVar7 = puVar7 + 2;
        }
        puVar1[1] = uVar5;
        local_8 = local_8 + 1;
        puVar1 = puVar1 + 2;
        if (iVar2 < local_8) {
          return 0;
        }
      }
      F_00c46aa0(param_1 + local_8 * 8,(int)param_2 + iVar4 * 8,(iVar2 - local_8) * 8 + 8);
    }
  }
  return 0;
}

/* ref: FUN_00565340 */
uint F_00565340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x565340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  uVar2 = F_00404270();
  puVar3 = (undefined4 *)F_00406bd0(0x18,0,uVar2,0);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar3[4] = 0;
  puVar3[5] = 0;
  iVar4 = *(int *)this;
  if (*(int *)this == 0) {
    *(undefined4 * PTR32 *)this = puVar3;
  }
  else {
    do {
      iVar1 = *(int *)(iVar4 + 0x10);
      if (iVar1 == 0) {
        *(undefined4 * PTR32 *)(iVar4 + 0x10) = puVar3;
        break;
      }
      iVar4 = iVar1;
    } while (iVar1 != 0);
  }
  *(undefined1 *)(puVar3 + 5) = (undefined1)param_1;
  puVar3[1] = param_4;
  puVar3[3] = param_2;
  puVar3[2] = param_5;
  puVar3[5] = puVar3[5] ^ ((param_6 & 0xff) << 0x14 ^ puVar3[5]) & 0x100000;
  *puVar3 = param_3;
  return (uint)puVar3;
}

/* ref: FUN_005653d0 */
uint F_005653d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5653d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00565400 */
uint F_00565400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x565400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = *(int *)this;
  do {
    iVar3 = iVar2;
    if (iVar3 == 0) {
      iVar3 = 0;
      break;
    }
    iVar2 = *(int *)(iVar3 + 0x10);
  } while (*(int *)(iVar3 + 0x10) != param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x10) = uVar1;
  }
  if (param_1 == *(int *)this) {
    *(uint *)this = uVar1;
  }
  F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00565450 */
unsigned int F_00565450(unsigned int gen_a0)
{
  GEN_ENTER(0x565450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte * pbVar1;
  float10 fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float * pfVar9;
  float * pfVar10;
  float fVar11;
  
  if (*(int *)((int)this + 0x30) == 2) {
    iVar7 = *(int *)this;
    (*(int *)(gen_frame + 0x48)) = iVar7;
    F_00c48350(((float *)(gen_frame + 0x4)),0,0x44);
    iVar4 = (*(int *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(undefined4, 0x1302e24);
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) | 0x10000;
    ((float *)(gen_frame + 0x4))[0] = 1.4013e-45;
    ((float *)(gen_frame + 0x4))[3] = *(float *)&REFG(undefined, 0x109ce40);
    ((float *)(gen_frame + 0x4))[1] = *(float *)&REFG(undefined, 0x109ce40);
    (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x109ce40);
    ((float *)(gen_frame + 0x4))[2] = *(float *)&REFG(undefined, 0x109ce40);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1302e20);
    (*(undefined2 *)(gen_frame + 0x45)) = 0xff0e;
    *(undefined3 *)&(*(undefined1 *)(gen_frame + 0x44)) = CONCAT21(0xff0e,(*(undefined1 *)(gen_frame + 0x44)));
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)(iVar7 + 100);
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)((*(int *)(gen_frame + 0x48)) + 0xa8);
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    uVar8 = 0;
    if (*(short *)((int)this + 8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar8 = *(undefined4 *)((int)this + 4);
      uVar3 = *(undefined4 *)((int)this + 4);
    }
    fVar2 = (float10)1;
    F_00557f70((*(int *)(gen_frame + 0x48)),0,uVar3,REFG(float, 0x10a0d14),uVar8,REFG(float, 0x10a0d14),(float)fVar2,3);
    if (*(ushort *)((int)this + 8) < 2) {
      iVar7 = 0;
      iVar6 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0x74;
      iVar6 = *(int *)((int)this + 4) + 0x74;
    }
    F_00557f70(iVar4,1,iVar6,*(float *)&REFG(undefined, 0x109ce40),iVar7,*(float *)&REFG(undefined, 0x109ce40),(float)fVar2,3)
    ;
    if (*(ushort *)((int)this + 8) < 3) {
      iVar7 = 0;
      iVar6 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0xe8;
      iVar6 = *(int *)((int)this + 4) + 0xe8;
    }
    F_00557f70(iVar4,2,iVar6,REFG(float, 0x10a0d10),iVar7,REFG(float, 0x10a0d10),(float)fVar2,2);
    if (*(ushort *)((int)this + 8) < 4) {
      iVar7 = 0;
      iVar6 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0x15c;
      iVar6 = *(int *)((int)this + 4) + 0x15c;
    }
    F_00557f70(iVar4,3,iVar6,*(float *)&REFG(undefined, 0x10a0d0c),iVar7,*(float *)&REFG(undefined, 0x10a0d0c),(float)fVar2,2)
    ;
    if (*(int *)((int)this + 0xc) != 0) {
      *(int *)(iVar4 + 0x60) = *(int *)((int)this + 0xc);
    }
    iVar7 = *(int *)this;
    (*(int *)(gen_frame + 0x48)) = iVar7 + 0x540;
    F_00c48350(((float *)(gen_frame + 0x4)),0,0x44);
    iVar4 = (*(int *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(undefined4, 0x1302e24);
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) | 0x10000;
    ((float *)(gen_frame + 0x4))[0] = 1.4013e-45;
    ((float *)(gen_frame + 0x4))[3] = *(float *)&REFG(undefined, 0x109ce40);
    ((float *)(gen_frame + 0x4))[1] = *(float *)&REFG(undefined, 0x109ce40);
    (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x109ce40);
    ((float *)(gen_frame + 0x4))[2] = *(float *)&REFG(undefined, 0x109ce40);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1302e20);
    (*(undefined2 *)(gen_frame + 0x45)) = 0xff0e;
    *(undefined3 *)&(*(undefined1 *)(gen_frame + 0x44)) = CONCAT21(0xff0e,(*(undefined1 *)(gen_frame + 0x44)));
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)(iVar7 + 0x5a4);
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)((*(int *)(gen_frame + 0x48)) + 0xa8);
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    if (*(ushort *)((int)this + 8) < 0x1b) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0xbc8;
    }
    if (*(ushort *)((int)this + 8) < 0xe) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0x5e4;
    }
    F_00557f70((*(int *)(gen_frame + 0x48)),0,iVar6,*(float *)&REFG(undefined, 0x10a0d04),iVar7,*(float *)&REFG(undefined, 0x10a0d04),
                 *(float *)&REFG(undefined, 0x10a0d08),3);
    if (*(ushort *)((int)this + 8) < 0x1c) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0xc3c;
    }
    if (*(ushort *)((int)this + 8) < 0xf) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0x658;
    }
    F_00557f70(iVar4,1,iVar6,REFG(float, 0x10a0d00),iVar7,REFG(float, 0x10a0d00),REFG(float, 0x1094820),3);
    if (*(ushort *)((int)this + 8) < 0x1d) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0xcb0;
    }
    if (*(ushort *)((int)this + 8) < 0x10) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0x6cc;
    }
    F_00557f70(iVar4,2,iVar6,*(float *)&REFG(undefined, 0x10a0cf8),iVar7,*(float *)&REFG(undefined, 0x10a0cf8),
                 *(float *)&REFG(undefined, 0x10a0cfc),2);
    if (*(int *)((int)this + 0x34) == 1) {
      *(byte *)(iVar4 + 0x148) = *(byte *)(iVar4 + 0x148) | 4;
    }
    if (*(int *)((int)this + 0xc) != 0) {
      *(int *)(iVar4 + 0x60) = *(int *)((int)this + 0xc);
    }
    iVar7 = *(int *)this;
    (*(int *)(gen_frame + 0x48)) = iVar7 + 0x690;
    F_00c48350(((float *)(gen_frame + 0x4)),0,0x44);
    iVar4 = (*(int *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(undefined4, 0x1302e24);
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) | 0x10000;
    ((float *)(gen_frame + 0x4))[0] = 1.4013e-45;
    ((float *)(gen_frame + 0x4))[3] = *(float *)&REFG(undefined, 0x109ce40);
    ((float *)(gen_frame + 0x4))[1] = *(float *)&REFG(undefined, 0x109ce40);
    (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x109ce40);
    ((float *)(gen_frame + 0x4))[2] = *(float *)&REFG(undefined, 0x109ce40);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1302e20);
    (*(undefined2 *)(gen_frame + 0x45)) = 0xff0e;
    *(undefined3 *)&(*(undefined1 *)(gen_frame + 0x44)) = CONCAT21(0xff0e,(*(undefined1 *)(gen_frame + 0x44)));
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)(iVar7 + 0x6f4);
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)((*(int *)(gen_frame + 0x48)) + 0xa8);
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    if (*(ushort *)((int)this + 8) < 0x1e) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0xd24;
    }
    if (*(ushort *)((int)this + 8) < 0x11) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0x740;
    }
    F_00557f70((*(int *)(gen_frame + 0x48)),0,iVar6,REFG(float, 0x10946b8),iVar7,REFG(float, 0x10946b8),(float)(float10)1,4);
    if (*(int *)((int)this + 0x34) == 1) {
      pbVar1 = (byte *)(iVar4 + 0x148);
      *pbVar1 = *pbVar1 | 4;
    }
    if (*(int *)((int)this + 0xc) != 0) {
      *(int *)(iVar4 + 0x60) = *(int *)((int)this + 0xc);
    }
    iVar7 = *(int *)this;
    (*(int *)(gen_frame + 0x48)) = iVar7 + 0x2a0;
    F_00c48350(((float *)(gen_frame + 0x4)),0,0x44);
    iVar4 = (*(int *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(undefined4, 0x1302e24);
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) | 0x10000;
    ((float *)(gen_frame + 0x4))[0] = 1.4013e-45;
    ((float *)(gen_frame + 0x4))[3] = *(float *)&REFG(undefined, 0x109ce40);
    ((float *)(gen_frame + 0x4))[1] = *(float *)&REFG(undefined, 0x109ce40);
    (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x109ce40);
    ((float *)(gen_frame + 0x4))[2] = *(float *)&REFG(undefined, 0x109ce40);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1302e20);
    (*(undefined2 *)(gen_frame + 0x45)) = 0xff0e;
    *(undefined3 *)&(*(undefined1 *)(gen_frame + 0x44)) = CONCAT21(0xff0e,(*(undefined1 *)(gen_frame + 0x44)));
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)(iVar7 + 0x304);
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)((*(int *)(gen_frame + 0x48)) + 0xa8);
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    if (*(ushort *)((int)this + 8) < 0x16) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0x984;
    }
    if (*(ushort *)((int)this + 8) < 9) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0x3a0;
    }
    F_00557f70((*(int *)(gen_frame + 0x48)),0,iVar6,REFG(float, 0x10a0d00),iVar7,REFG(float, 0x10a0d00),REFG(float, 0x1094820),3);
    if (*(ushort *)((int)this + 8) < 0x17) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0x9f8;
    }
    if (*(ushort *)((int)this + 8) < 10) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0x414;
    }
    F_00557f70(iVar4,1,iVar6,*(float *)&REFG(undefined, 0x10a0cf8),iVar7,*(float *)&REFG(undefined, 0x10a0cf8),
                 *(float *)&REFG(undefined, 0x10a0cfc),3);
    if (*(int *)((int)this + 0x34) == 1) {
      *(byte *)(iVar4 + 0x148) = *(byte *)(iVar4 + 0x148) | 4;
    }
    if (*(int *)((int)this + 0xc) != 0) {
      *(int *)(iVar4 + 0x60) = *(int *)((int)this + 0xc);
    }
    iVar7 = *(int *)this;
    (*(int *)(gen_frame + 0x48)) = iVar7 + 0x150;
    F_00c48350(((float *)(gen_frame + 0x4)),0,0x44);
    iVar4 = (*(int *)(gen_frame + 0x48));
    fVar11 = *(float *)&REFG(undefined, 0x109ce40);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(undefined4, 0x1302e24);
    (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) | 0x10000;
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    ((float *)(gen_frame + 0x4))[0] = 1.4013e-45;
    ((float *)(gen_frame + 0x4))[3] = *(float *)&REFG(undefined, 0x109ce40);
    ((float *)(gen_frame + 0x4))[1] = *(float *)&REFG(undefined, 0x109ce40);
    (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x109ce40);
    ((float *)(gen_frame + 0x4))[2] = *(float *)&REFG(undefined, 0x109ce40);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1302e20);
    (*(undefined2 *)(gen_frame + 0x45)) = 0xff0e;
    *(undefined3 *)&(*(undefined1 *)(gen_frame + 0x44)) = CONCAT21(0xff0e,(*(undefined1 *)(gen_frame + 0x44)));
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)(iVar7 + 0x1b4);
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)((*(int *)(gen_frame + 0x48)) + 0xa8);
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    if (*(ushort *)((int)this + 8) < 0x12) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0x7b4;
    }
    if (*(ushort *)((int)this + 8) < 5) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0x1d0;
    }
    fVar2 = (float10)1;
    F_00557f70((*(int *)(gen_frame + 0x48)),0,iVar6,REFG(float, 0x10a0d14),iVar7,REFG(float, 0x10a0d14),(float)fVar2,3);
    if (*(ushort *)((int)this + 8) < 0x13) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0x828;
    }
    if (*(ushort *)((int)this + 8) < 6) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0x244;
    }
    F_00557f70(iVar4,1,iVar6,*(float *)&REFG(undefined, 0x109ce40),iVar7,*(float *)&REFG(undefined, 0x109ce40),(float)fVar2,3)
    ;
    if (*(ushort *)((int)this + 8) < 0x14) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0x89c;
    }
    if (*(ushort *)((int)this + 8) < 7) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0x2b8;
    }
    F_00557f70(iVar4,2,iVar6,REFG(float, 0x10a0d10),iVar7,REFG(float, 0x10a0d10),(float)fVar2,2);
    if (*(ushort *)((int)this + 8) < 0x15) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 4) + 0x910;
    }
    if (*(ushort *)((int)this + 8) < 8) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0x32c;
    }
    F_00557f70(iVar4,3,iVar6,REFG(float, 0x1094880),iVar7,REFG(float, 0x1094880),(float)fVar2,2);
    if (*(int *)((int)this + 0x34) == 1) {
      *(byte *)(iVar4 + 0x148) = *(byte *)(iVar4 + 0x148) | 4;
    }
    if (*(int *)((int)this + 0xc) != 0) {
      *(int *)(iVar4 + 0x60) = *(int *)((int)this + 0xc);
    }
    iVar7 = *(int *)this;
    (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) | 0x10000;
    iVar4 = iVar7 + 0x3f0;
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(undefined4, 0x1302e24);
    ((float *)(gen_frame + 0x4))[0] = 1.4013e-45;
    ((float *)(gen_frame + 0x4))[3] = fVar11;
    ((float *)(gen_frame + 0x4))[1] = fVar11;
    (*(float *)(gen_frame + 0x14)) = fVar11;
    ((float *)(gen_frame + 0x4))[2] = fVar11;
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1302e20);
    *(undefined2 *)&(*(undefined1 *)(gen_frame + 0x44)) = 0xe00;
    *(undefined3 *)&(*(undefined1 *)(gen_frame + 0x44)) = CONCAT12((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x45)) + 1)),0xe00);
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)(iVar7 + 0x454);
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    pfVar9 = ((float *)(gen_frame + 0x4));
    pfVar10 = (float *)(iVar7 + 0x498);
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    (*(int *)(gen_frame + 0x48)) = iVar4;
    if (*(ushort *)((int)this + 8) < 0x18) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0xa6c;
    }
    if (*(ushort *)((int)this + 8) < 0xb) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 4) + 0x488;
    }
    F_00557f70(iVar4,0,iVar5,*(float *)&REFG(undefined, 0x10a0cf0),iVar6,*(float *)&REFG(undefined, 0x10a0cf0),
                 *(float *)&REFG(undefined, 0x10a0cf4),3);
    if (*(ushort *)((int)this + 8) < 0x19) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0xae0;
    }
    if (*(ushort *)((int)this + 8) < 0xc) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 4) + 0x4fc;
    }
    F_00557f70(iVar4,1,iVar5,*(float *)&REFG(undefined, 0x10a0d04),iVar6,*(float *)&REFG(undefined, 0x10a0d04),
                 *(float *)&REFG(undefined, 0x10a0cec),3);
    if (*(ushort *)((int)this + 8) < 0x1a) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 4) + 0xb54;
    }
    if (*(ushort *)((int)this + 8) < 0xd) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 4) + 0x570;
    }
    F_00557f70(iVar4,2,iVar5,*(float *)&REFG(undefined, 0x10a0ce4),iVar6,*(float *)&REFG(undefined, 0x10a0ce4),
                 *(float *)&REFG(undefined, 0x10a0ce8),2);
    if (*(int *)((int)this + 0x34) == 1) {
      *(byte *)(iVar7 + 0x538) = *(byte *)(iVar7 + 0x538) | 4;
    }
    if (*(int *)((int)this + 0xc) != 0) {
      *(int *)(iVar7 + 0x450) = *(int *)((int)this + 0xc);
    }
  }
  return 0;
}

/* ref: FUN_00565dd0 */
uint F_00565dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x565dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = 0;
  if (*(short *)((int)this + 8) != 0) {
    if (*(short *)((int)this + 8) != 0) goto LAB_00565dfd;
    iVar5 = 0;
    while( true ) {
      uVar4 = 0;
      if ((*(byte *)(iVar5 + 0x6e) & 1) != 0) {
        if (*(short *)(iVar5 + 0x6c) != 0) {
          do {
            uVar6 = (uint)uVar4;
            iVar1 = *(int *)(iVar5 + uVar6 * 4);
            if (iVar1 != 0) {
              F_0050c620(iVar1,0,0);
              *(undefined4 *)(iVar5 + uVar6 * 4) = 0;
              *(undefined4 *)(iVar5 + 0x24 + uVar6 * 4) = 0;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(ushort *)(iVar5 + 0x6c));
        }
        if (*(int *)(iVar5 + 0x60) != 0) {
          F_00406810(*(int *)(iVar5 + 0x60));
          *(undefined4 *)(iVar5 + 0x60) = 0;
        }
        if (*(int *)(iVar5 + 100) != 0) {
          F_00406810(*(int *)(iVar5 + 100));
          *(undefined4 *)(iVar5 + 100) = 0;
        }
        *(byte *)(iVar5 + 0x6e) = *(byte *)(iVar5 + 0x6e) & 0xfc;
        *(undefined4 *)(iVar5 + 0x68) = 0;
      }
      uVar3 = uVar3 + 1;
      if (*(ushort *)((int)this + 8) <= uVar3) break;
LAB_00565dfd: ;
      iVar5 = (uint)uVar3 * 0x74 + *(int *)((int)this + 4);
    }
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 0) {
      F_0050c620(*piVar2,0,0);
      **(undefined4 * PTR32 *)((int)this + 0xc) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = 0;
    if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) != 0) {
      iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10)));
      if (iVar5 != 0) {
        F_00406810(iVar5);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00565ee0 */
uint F_00565ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x565ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 * puVar10;
  uint * puVar11;
  uint uVar12;
  
  if ((*(ushort *)((int)this + 8) <= (ushort)param_1) ||
     (iVar9 = (uint)(ushort)param_1 * 0x74 + *(int *)((int)this + 4), iVar9 == 0)) {
    return 0xffffffff;
  }
  if ((*(byte *)(iVar9 + 0x6e) & 2) != 0) {
    return 0xfffffffe;
  }
  uVar2 = 0;
  if (*(short *)(iVar9 + 0x6c) != 0) {
    do {
      uVar5 = (uint)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar9 + 0x24 + uVar5 * 4) =
           *((undefined4 *)GEN_TOP((*(int *)(iVar9 + uVar5 * 4) + 0xfc)));
    } while (uVar2 < *(ushort *)(iVar9 + 0x6c));
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar9 + 0x20) + 0x5c))))(*(int * PTR32 *)(iVar9 + 0x20));
  piVar3 = (int *)F_00404270();
  puVar6 = ((undefined4 *)GEN_TOP((*(int *)(uVar5 + 8) + uVar5)));
  puVar8 = (undefined4 *)(iVar9 + 0x44);
  puVar10 = puVar6;
  for (iVar7 = 7; puVar10 = puVar10 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar10;
    puVar8 = puVar8 + 1;
  }
  if (*(int *)(iVar9 + 0x44) != 0) {
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(int *)(iVar9 + 0x44) << 4,0x10)));
    *(undefined * PTR32 *)(iVar9 + 0x60) = pvVar4;
    F_00c48350(pvVar4,0,*(int *)(iVar9 + 0x44) << 4);
    puVar10 = *(undefined4 * PTR32 *)(iVar9 + 0x60);
    uVar12 = 0;
    puVar6 = puVar6 + 8;
    if (*(int *)(iVar9 + 0x44) != 0) {
      do {
        *puVar10 = *puVar6;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar6 + 1);
        *(undefined1 *)((int)puVar10 + 6) = *(undefined1 *)((int)puVar6 + 6);
        *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar6 + 2);
        *(undefined2 *)((int)puVar10 + 10) = *(undefined2 *)((int)puVar6 + 10);
        *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(puVar6 + 3);
        *(undefined1 *)((int)puVar10 + 0xd) = *(undefined1 *)((int)puVar6 + 0xd);
        *(undefined1 *)((int)puVar10 + 0xe) = *(undefined1 *)((int)puVar6 + 0xe);
        uVar12 = uVar12 + 1;
        *(undefined1 *)((int)puVar10 + 0xf) = *(undefined1 *)((int)puVar6 + 0xf);
        puVar6 = puVar6 + 4;
        puVar10 = puVar10 + 4;
      } while ((uVar12 & 0xffff) < *(uint *)(iVar9 + 0x44));
    }
  }
  puVar10 = ((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0xc) + uVar5)));
  iVar7 = puVar10[1];
  uVar5 = 0;
  *(int *)(iVar9 + 0x48) = iVar7;
  if (iVar7 != 0) {
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,iVar7 << 4,0x10)));
    *(undefined * PTR32 *)(iVar9 + 100) = pvVar4;
    F_00c48350(pvVar4,0,*(int *)(iVar9 + 0x48) << 4);
    puVar8 = *(undefined4 * PTR32 *)(iVar9 + 100);
    uVar12 = 0;
    if (*(int *)(iVar9 + 0x48) != 0) {
      do {
        *puVar8 = puVar10[4];
        puVar8[1] = puVar10[5];
        *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar10 + 6);
        *(undefined2 *)((int)puVar8 + 10) = *(undefined2 *)((int)puVar10 + 0x1a);
        puVar8[3] = puVar10[7];
        uVar12 = uVar12 + 1;
        puVar8 = puVar8 + 4;
        puVar10 = puVar10 + 4;
      } while ((uVar12 & 0xffff) < *(uint *)(iVar9 + 0x48));
    }
  }
  if (*(int *)(iVar9 + 0x20) != 0) {
    F_0050c620(*(int *)(iVar9 + 0x20),0,0);
    *(undefined4 *)(iVar9 + 0x20) = 0;
  }
  puVar11 = *(uint * PTR32 *)(iVar9 + 0x60);
  bVar1 = *(byte *)(iVar9 + 0x6e) & 0xfb;
  *(byte *)(iVar9 + 0x6e) = bVar1 | 1;
  *(undefined1 *)(iVar9 + 0x6f) = 0;
  uVar12 = *puVar11;
  if ((*(uint *)(iVar9 + 0x44) != 0) && (uVar12 < 0x100)) {
    do {
      if (0xff < *puVar11) break;
      if (*puVar11 != uVar12 + uVar5) goto LAB_005660d4;
      uVar5 = uVar5 + 1;
      puVar11 = puVar11 + 4;
    } while (uVar5 < *(uint *)(iVar9 + 0x44));
    *(byte *)(iVar9 + 0x6e) = bVar1 | 5;
    *(char *)(iVar9 + 0x6f) = (char)uVar12;
  }
LAB_005660d4: ;
  *(byte *)(iVar9 + 0x6e) = *(byte *)(iVar9 + 0x6e) | 2;
  return 0;
}

/* ref: FUN_005660f0 */
uint F_005660f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5660f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  (*(int * PTR32 *)((int)this + 0xc))[2] = *((int *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xfc)));
  piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) = *(undefined4 *)(uVar3 + 8);
  piVar4 = (int *)F_00404270();
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) << 5,0x10);
  *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) = uVar3;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))),0,
          *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) << 5);
  piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
  F_00c46aa0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))),uVar3 + 0x10,
             *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) << 5);
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  if (iVar2 != 0) {
    F_0050c620(iVar2,0,0);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = 0;
  }
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18)));
  *pbVar1 = *pbVar1 | 1;
  return 0;
}

/* ref: FUN_005661b0 */
uint F_005661b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5661b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  undefined * this_00;
  uint uVar2;
  
  cVar1 = *(*(char * PTR32 *)&gen_args[1]);
  if (cVar1 == '\r') {
    return ((*(char * PTR32 *)&gen_args[1])[1] == '\n') + 1;
  }
  if (cVar1 == '\n') {
    return 1;
  }
  if ((cVar1 == '\x02') && ((*(char * PTR32 *)&gen_args[1])[1] == '\x10')) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 0x18)));
    uVar2 = F_00a24d30(this_00,(*(char * PTR32 *)&gen_args[1]) + 2,(int)this_00 + 0x350,&(*(char * PTR32 *)&gen_args[1]),1);
    return (uint)((*(char * PTR32 *)&gen_args[1]) + uVar2 + 3);
  }
  return 0;
}

/* ref: FUN_00566220 */
uint F_00566220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x566220u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 0x18)));
  uVar1 = F_00a24d30(this_00,(*(int *)&gen_args[3]) + 2,(int)this_00 + 0x350,&(*(int *)&gen_args[3]),1);
  (*(undefined4 * PTR32 *)&gen_args[2])[1] = uVar1;
  uVar1 = uVar1 + 3 + (*(int *)&gen_args[3]);
  *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
  (*(undefined4 * PTR32 *)&gen_args[2])[3] = uVar1;
  (*(undefined4 * PTR32 *)&gen_args[2])[2] = 0;
  return uVar1;
}

/* ref: FUN_00566270 */
uint F_00566270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x566270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  if ((*(int *)((int)this + 0xec) != 0) && (*(undefined * PTR32 *)((int)this + 0x13c) != (undefined *)0x0)) {
    F_00558cd0(*(undefined * PTR32 *)((int)this + 0x13c),param_1,param_2 & 0xffff,param_3 & 0xffff);
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_005662b0 */
uint F_005662b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5662b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  code * pcVar7;
  int iVar8;
  char * pcVar9;
  
  pcVar9 = (*(char * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0x30)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 100)));
  cVar1 = *(*(char * PTR32 *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*((undefined1 *)GEN_TOP(((char *)&(*(char * PTR32 *)&gen_args[1]) + 3)))) = (byte)((uint)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) >> 0x19) & 1;
  if (cVar1 == '\0') {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) & 0xefffffff;
    return uVar4;
  }
  do {
    uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]))))((*(undefined * PTR32 *)&gen_args[0]));
    if ((char)uVar4 != '\0') break;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(undefined * PTR32 *)&gen_args[0]),pcVar9)
    ;
    cVar1 = *pcVar9;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar1);
    if (cVar1 == '\r') {
      iVar8 = (pcVar9[1] == '\n') + 1;
LAB_00566360: ;
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(char * PTR32 *)&gen_args[1]) + 3)))) != 0) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),pcVar9);
      }
      pcVar9 = pcVar9 + iVar8;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) & 0xefffffff;
      (*(uint *)(gen_frame + 0x34)) = 0;
    }
    else {
      if (cVar1 == '\n') {
        iVar8 = 1;
        goto LAB_00566360;
      }
      if ((cVar1 == '\x02') && (pcVar9[1] == '\x10')) {
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0xf0) + 0x18)));
        uVar4 = F_00a24d30(pvVar3,pcVar9 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x20)),1);
        iVar8 = (*(int *)(gen_frame + 0x20)) + 3 + uVar4;
        if (iVar8 != 0) goto LAB_00566360;
      }
      if ((*pcVar9 == '\x02') && (bVar2 = pcVar9[1], (*(uint *)(gen_frame + 0x24)) = (uint)bVar2, bVar2 != 0)) {
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0xf0) + 0x18)));
        uVar4 = F_00a24d30(pvVar3,pcVar9 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x1c)),1);
        iVar8 = uVar4 + 3 + (*(int *)(gen_frame + 0x1c));
        (*(uint *)(gen_frame + 0x10)) = uVar4;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(int *)(gen_frame + 0x18)) = iVar8;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        if (iVar8 < 1) goto LAB_005663f6;
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))((*(undefined * PTR32 *)&gen_args[0]),pcVar9,(*(uint *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0xc)));
        (*(uint *)(gen_frame + 0x34)) = 0;
        pcVar9 = pcVar9 + iVar8;
      }
      else {
LAB_005663f6: ;
        (*(uint *)(gen_frame + 0x24)) = 1;
        uVar5 = F_005583a0(&(*(uint *)(gen_frame + 0x24)),pcVar9);
        if (uVar5 == 0) {
LAB_00566459: ;
          puVar6 = (uint *)F_00557be0((*(undefined * PTR32 *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0x30)));
          (*(uint * PTR32 *)(gen_frame + 0x2c)) = puVar6;
          uVar4 = 0;
          if (puVar6 != (uint *)0x0) {
            uVar5 = *puVar6;
            if (((*(uint *)(gen_frame + 0x34)) == 0) || ((*(uint *)(gen_frame + 0x28)) == 0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = F_00557ac0((*(uint *)(gen_frame + 0x34)),uVar5,(*(int *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x28)));
            }
            pcVar7 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
            goto LAB_0056649b;
          }
        }
        else {
          puVar6 = (uint *)F_005579c0(uVar5,(*(int *)(gen_frame + 0x30)));
          (*(uint * PTR32 *)(gen_frame + 0x2c)) = puVar6;
          if (puVar6 == (uint *)0x0) goto LAB_00566459;
          if (((*(uint *)(gen_frame + 0x34)) == 0) || ((*(uint *)(gen_frame + 0x28)) == 0)) {
            uVar4 = 0;
            pcVar7 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
          }
          else {
            uVar4 = F_00557ac0((*(uint *)(gen_frame + 0x34)),uVar5,(*(int *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x28)));
            pcVar7 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
          }
LAB_0056649b: ;
          uVar4 = (*pcVar7)((*(undefined * PTR32 *)&gen_args[0]),(*(uint * PTR32 *)(gen_frame + 0x2c)),uVar4);
          (*(uint *)(gen_frame + 0x34)) = uVar5;
        }
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) & 0xefffffff;
        pcVar9 = pcVar9 + (*(uint *)(gen_frame + 0x24));
      }
    }
  } while (*pcVar9 != '\0');
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) & 0xefffffff;
  return uVar4;
}

/* ref: FUN_005664e0 */
byte F_005664e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5664e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  
  pcVar5 = (*(char * PTR32 *)&gen_args[1]);
  cVar1 = *(*(char * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0x24)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(int * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*((undefined1 *)GEN_TOP(((char *)&(*(char * PTR32 *)&gen_args[1]) + 3)))) = (byte)((uint)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) >> 0x19) & 1;
  do {
    if ((cVar1 == '\0') || (uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]))))((*(undefined * PTR32 *)&gen_args[0])), (char)uVar4 != '\0')) {
      return 1;
    }
    cVar1 = *pcVar5;
    if (cVar1 == '\r') {
      iVar6 = (pcVar5[1] == '\n') + 1;
LAB_00566576: ;
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(char * PTR32 *)&gen_args[1]) + 3)))) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),pcVar5);
      }
      pcVar5 = pcVar5 + iVar6;
    }
    else {
      if (cVar1 == '\n') {
        iVar6 = 1;
        goto LAB_00566576;
      }
      if ((cVar1 == '\x02') && (pcVar5[1] == '\x10')) {
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x24)) + 0xf0) + 0x18)));
        uVar4 = F_00a24d30(pvVar3,pcVar5 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x1c)),1);
        iVar6 = (*(int *)(gen_frame + 0x1c)) + 3 + uVar4;
        if (iVar6 != 0) goto LAB_00566576;
      }
      if ((*pcVar5 == '\x02') && (bVar2 = pcVar5[1], (*(undefined * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)(gen_frame + 0x28)), bVar2 != 0)) {
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x24)) + 0xf0) + 0x18)));
        uVar4 = F_00a24d30(pvVar3,pcVar5 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x18)),1);
        iVar6 = uVar4 + 3 + (*(int *)(gen_frame + 0x18));
        (*(uint *)(gen_frame + 0xc)) = uVar4;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(int *)(gen_frame + 0x14)) = iVar6;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)(gen_frame + 0x28));
        if (iVar6 < 1) goto LAB_005665ef;
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x28)),pcVar5,(uint)bVar2,&(*(undefined4 *)(gen_frame + 0x8)));
        pcVar5 = pcVar5 + iVar6;
        (*(undefined * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)(gen_frame + 0x28));
      }
      else {
LAB_005665ef: ;
        (*(int *)(gen_frame + 0x20)) = 1;
        uVar4 = F_005583a0(&(*(int *)(gen_frame + 0x20)),pcVar5);
        if ((1 < (*(int *)(gen_frame + 0x20))) || (((9 < uVar4 - 0x30 && (uVar4 != 0x25)) && (7 < uVar4 - 0x28)))) {
          return 0;
        }
        pcVar5 = pcVar5 + (*(int *)(gen_frame + 0x20));
      }
    }
    cVar1 = *pcVar5;
  } while( true );
}

/* ref: FUN_00566640 */
uint F_00566640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x566640u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  
  pbVar7 = (*(byte * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0x34)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 100)));
  bVar1 = *(*(byte * PTR32 *)&gen_args[1]);
  (*(uint * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[1]) + 3)))) = (byte)((uint)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) >> 0x19) & 1;
  do {
    if ((bVar1 == 0) || (uVar3 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]))))((*(undefined * PTR32 *)&gen_args[0])), (char)uVar3 != '\0')) {
      return uVar3;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(undefined * PTR32 *)&gen_args[0]),pbVar7)
    ;
    bVar1 = *pbVar7;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
    if (bVar1 == 0xd) {
      uVar3 = (uint)(pbVar7[1] == 10);
      iVar6 = uVar3 + 1;
LAB_005666f6: ;
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[1]) + 3)))) != 0) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(uint *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),pbVar7);
      }
      (*(uint *)(gen_frame + 0x38)) = 0;
      pbVar7 = pbVar7 + iVar6;
    }
    else {
      if (bVar1 == 10) {
        iVar6 = 1;
        goto LAB_005666f6;
      }
      if (bVar1 == 2) {
        if (pbVar7[1] == 0x10) {
          pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xf0) + 0x18)));
          uVar3 = F_00a24d30(pvVar2,pbVar7 + 2,(int)pvVar2 + 0x350,&(*(int *)(gen_frame + 0x20)),1);
          iVar6 = (*(int *)(gen_frame + 0x20)) + 3 + uVar3;
          if (iVar6 != 0) goto LAB_005666f6;
        }
        if ((*pbVar7 != 2) || ((*(uint *)(gen_frame + 0x28)) = (uint)pbVar7[1], pbVar7[1] == 0)) goto LAB_00566785;
        pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xf0) + 0x18)));
        uVar3 = F_00a24d30(pvVar2,pbVar7 + 2,(int)pvVar2 + 0x350,&(*(int *)(gen_frame + 0x1c)),1);
        iVar6 = uVar3 + 3 + (*(int *)(gen_frame + 0x1c));
        (*(uint *)(gen_frame + 0x8)) = uVar3;
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(int *)(gen_frame + 0x10)) = iVar6;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        if (iVar6 < 1) goto LAB_00566785;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(uint *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))((*(undefined * PTR32 *)&gen_args[0]),pbVar7,(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x4)));
        (*(uint *)(gen_frame + 0x38)) = 0;
        pbVar7 = pbVar7 + iVar6;
      }
      else {
LAB_00566785: ;
        uVar3 = (*(uint *)(gen_frame + 0x38));
        bVar1 = *pbVar7;
        (*(uint *)(gen_frame + 0x30)) = 0;
        if ((((bVar1 < 0x20) || (bVar1 == 0x7f)) || ((0x1f < bVar1 && (bVar1 < 0x7f)))) ||
           ((0xa0 < bVar1 && (bVar1 < 0xe0)))) {
          (*(uint *)(gen_frame + 0x28)) = 1;
        }
        else if (((bVar1 < 0x81) || (0x9f < bVar1)) && (0xf < (byte)(bVar1 + 0x20))) {
          (*(uint *)(gen_frame + 0x28)) = 0;
        }
        else {
          (*(uint *)(gen_frame + 0x28)) = 2;
        }
        if ((*(uint *)(gen_frame + 0x28)) == 1) {
          uVar5 = (uint)bVar1;
LAB_005667e3: ;
          (*(uint *)(gen_frame + 0x30)) = uVar5;
        }
        else if ((*(uint *)(gen_frame + 0x28)) == 2) {
          uVar5 = (uint)CONCAT11(bVar1,pbVar7[1]);
          goto LAB_005667e3;
        }
        puVar4 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x34)) + 0x60);
        uVar5 = 0;
        if (*(uint *)((*(int *)(gen_frame + 0x34)) + 0x44) != 0) {
          do {
            if ((short)puVar4[1] == (short)(*(uint *)(gen_frame + 0x30))) {
              (*(uint *)(gen_frame + 0x38)) = *(uint *)(*(undefined * PTR32 *)&gen_args[0]);
              uVar5 = F_00557b50(uVar3,(*(uint *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x34)),(*(uint *)(gen_frame + 0x24)));
              uVar3 = (*(uint *)(gen_frame + 0x38));
              (*(undefined * PTR32 *)&gen_args[0]) = (*(uint * PTR32 *)(gen_frame + 0x18));
              goto LAB_00566838;
            }
            uVar5 = uVar5 + 1;
            puVar4 = puVar4 + 4;
          } while (uVar5 < *(uint *)((*(int *)(gen_frame + 0x34)) + 0x44));
        }
        puVar4 = (uint *)F_00557be0((*(undefined * PTR32 *)(gen_frame + 0x2c)),(*(int *)(gen_frame + 0x34)));
        (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar4;
        uVar3 = 0;
        if (puVar4 != (uint *)0x0) {
          (*(uint *)(gen_frame + 0x30)) = *puVar4;
          uVar5 = F_00557b50((*(uint *)(gen_frame + 0x38)),*puVar4,(*(int *)(gen_frame + 0x34)),(*(uint *)(gen_frame + 0x24)));
          uVar3 = *(uint *)(*(undefined * PTR32 *)&gen_args[0]);
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x14));
LAB_00566838: ;
          ((code *)*(gen_code32 *)(uVar3 + 0x18))((*(undefined * PTR32 *)&gen_args[0]),puVar4,uVar5);
          (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x30));
          uVar3 = (*(uint *)(gen_frame + 0x30));
        }
        pbVar7 = pbVar7 + (*(uint *)(gen_frame + 0x28));
      }
    }
    bVar1 = *pbVar7;
  } while( true );
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf5 */
uint F_00566880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x566880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(uint *)(this + 0xb4) <= *(uint *)(this + 0xbc)) {
    *(int *)(this + 0xa4) = *(int *)(this + 0xa4) + 1;
    *(int *)(this + 0xac) = *(int *)(this + 0xac) + 1;
    if ((*(uint *)(this + 0x50) >> 0x14 & 1) != 0) {
      *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
    }
  }
  uVar1 = *(uint *)(this + 0xbc) + 1;
  *(uint *)(this + 0xbc) = uVar1;
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf6 */
uint F_005668c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5668c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)(this + 0xb4) <= *(uint *)(this + 0xbc)) {
    *(int *)(this + 0xa4) = *(int *)(this + 0xa4) + 1;
    uVar2 = (uint)(*(byte *)(param_1 + 6) >> 2);
    *(int *)(this + uVar2 * 4 + 0xc0) = *(int *)(this + uVar2 * 4 + 0xc0) + 1;
    if ((*(uint *)(this + 0x50) >> 0x11 & 1) != 0) {
      *(int *)(this + uVar2 * 4 + 0x100) = *(int *)(this + uVar2 * 4 + 0x100) + 9;
    }
    uVar1 = *(uint *)(this + 0x50);
    if (((uVar1 & 0x8000000) == 0) && (((uVar1 >> 1 | uVar1) >> 0x10 & 1) != 0)) {
      *(int *)(this + uVar2 * 4 + 0xe0) = *(int *)(this + uVar2 * 4 + 0xe0) + 1;
    }
    uVar1 = *(uint *)(this + 0x50);
    if (((uVar1 & 0x80000) != 0) &&
       (((uVar1 & 0x8000000) != 0 || (((uVar1 >> 1 | uVar1) >> 0x10 & 1) == 0)))) {
      *(int *)(this + uVar2 * 4 + 0x120) = *(int *)(this + uVar2 * 4 + 0x120) + 1;
    }
    if ((*(uint *)(this + 0x50) >> 0x14 & 1) != 0) {
      *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
    }
    *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + 1;
    return *(uint *)(this + 0x50) >> 0x14;
  }
  *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + 1;
  return *(uint *)(this + 0xb4);
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf1 */
uint F_00566980(unsigned int gen_a0)
{
  GEN_ENTER(0x566980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * pvVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  fVar3 = F_005580e0(*(undefined4 *)(this + 8),*(float *)(this + 0x28),1);
  *(float *)(this + 0x148) = (float)fVar3;
  *(undefined4 *)(this + 0x14c) = uVar4;
  *(undefined4 *)(this + 0x150) = uVar4;
  *(undefined4 *)(this + 0x154) = uVar4;
  *(undefined4 *)(this + 0x158) = uVar4;
  *(undefined4 *)(this + 0x15c) = uVar4;
  fVar1 = *((float *)GEN_TOP((*(int *)(this + 0xc) + 0x54)));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0x160) = ((float)GEN_TOF(((float10)*(float *)(this + 0x24) / (float10)fVar1)));
  pvVar2 = F_00c48350(this + 0xc0,0,0x80);
  return (uint)pvVar2;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf5 */
uint F_00566a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x566a20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    fVar2 = ((float10)GEN_TOD(((int)*(char *)(param_1 + 0x58) + (int)*(char *)(param_2 + 10)))) +
            (float10)((float)GEN_TOF(((float10)(int)*(short *)(param_2 + 6) *
                            (float10)*(float *)(param_1 + 0x30))));
  }
  else {
    if (*(uint *)(param_1 + 0xbc) < *(uint *)(param_1 + 0xb4)) goto LAB_00566a72;
    fVar2 = (float10)*(float *)(param_1 + 0x24);
  }
  *(float *)(param_1 + 0x14c) = (float)fVar2;
LAB_00566a72: ;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(float *)(param_1 + 0x158) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x14c) + (float10)*(float *)(param_1 + 0x158))));
  if (*(uint *)(param_1 + 0xb4) <= *(uint *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    if ((*(uint *)(param_1 + 0x50) >> 0x14 & 1) != 0) {
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0xbc) + 1;
  *(uint *)(param_1 + 0xbc) = uVar1;
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf6 */
uint F_00566ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x566ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = param_3;
  if (*(int *)(param_1 + 0x18) == 1) {
    param_3 = 0;
    fVar3 = (float10)*(float *)(param_1 + 0x160);
    if (uVar2 != 0) {
      param_3 = *(uint *)(uVar2 + 0xc);
    }
    fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)(int)(char)param_1[0x58] +
                                     ((float10)(int)*(char *)(param_2 + 0xe) + (float10)(int)param_3
                                     )) * fVar3))) +
                   (float10)((float)GEN_TOF((fVar3 * (float10)*(byte *)(param_2 + 0xc)))))));
    *(float *)(param_1 + 0x14c) = fVar1;
    if ((*(uint *)(param_1 + 0x50) & 0x10000000) != 0) {
      *(float *)(param_1 + 0x14c) =
           ((float)GEN_TOF(((float10)fVar1 + (float10)(int)*((char *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x70))) * fVar3)))
      ;
    }
  }
  else if (*(uint *)(param_1 + 0xb4) <= *(uint *)(param_1 + 0xbc)) {
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x24);
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(float *)(param_1 + 0x158) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x14c) + (float10)*(float *)(param_1 + 0x158))));
  uVar2 = F_005668c0(param_1,param_2,uVar2);
  return uVar2;
}

/* ref: FUN_00566bb0 */
unsigned int F_00566bb0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x566bb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float fVar1;
  
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[1] = param_4;
  *param_2 = (float)((float10)param_7 + (float10)param_3);
  param_2[2] = fVar1;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[6] = param_3;
  param_2[7] = param_6;
  param_2[8] = fVar1;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0xc] = param_5;
  param_2[0xd] = param_6;
  param_2[0xe] = fVar1;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0x12] = (float)((float10)param_7 + (float10)param_5);
  param_2[0x13] = param_4;
  param_2[0x14] = fVar1;
  return 0;
}

/* ref: FUN_00566c40 */
unsigned int F_00566c40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x566c40u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_3;
  param_2[2] = *(float *)(in_ecx + 0x290);
  *param_2 = ((float)GEN_TOF(((float10)param_8 + ((float10)param_4 - fVar2))));
  param_2[1] = (float)((float10)param_5 - fVar2);
  param_2[10] = *(float *)(in_ecx + 0x290);
  param_2[8] = (float)((float10)param_4 - fVar2);
  param_2[9] = (float)(fVar2 + (float10)param_7);
  param_2[0x12] = *(float *)(in_ecx + 0x290);
  param_2[0x10] = (float)((float10)param_6 + fVar2);
  param_2[0x11] = (float)(fVar2 + (float10)param_7);
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0x19] = (float)((float10)param_5 - fVar2);
  param_2[0x1a] = fVar1;
  param_2[0x18] = ((float)GEN_TOF((((float10)param_6 + fVar2) + (float10)param_8)));
  return 0;
}

/* ref: FUN_00566cd0 */
unsigned int F_00566cd0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x566cd0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_2[2] = *(float *)(in_ecx + 0x290);
  *param_2 = (float)((float10)param_8 + (float10)param_4);
  fVar2 = (float)((float10)param_3 + (float10)param_5);
  param_2[1] = fVar2;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[6] = param_4;
  param_2[8] = fVar1;
  fVar3 = (float)((float10)param_3 + (float10)param_7);
  param_2[7] = fVar3;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0xd] = fVar3;
  param_2[0xc] = param_6;
  param_2[0xe] = fVar1;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0x13] = fVar2;
  param_2[0x12] = (float)((float10)param_8 + (float10)param_6);
  param_2[0x14] = fVar1;
  return 0;
}

/* ref: FUN_00566d60 */
unsigned int F_00566d60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x566d60u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  
  param_2[2] = *(float *)(in_ecx + 0x290);
  *param_2 = param_3;
  param_2[1] = param_4;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[8] = param_3;
  param_2[10] = fVar1;
  param_2[9] = param_6;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0x11] = param_6;
  param_2[0x12] = fVar1;
  param_2[0x10] = param_5;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0x18] = param_5;
  param_2[0x19] = param_4;
  param_2[0x1a] = fVar1;
  param_2[3] = *(float *)(in_ecx + 0x3c);
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  param_2[6] = REFG(undefined4, 0x13799b0);
  param_2[7] = REFG(undefined4, 0x13799b4);
  param_2[5] = REFG(undefined4, 0x131de48);
  param_2[0xb] = *(float *)(in_ecx + 0x3c);
  *(undefined2 *)(param_2 + 0xc) = 0;
  *(undefined2 *)((int)param_2 + 0x32) = 0;
  param_2[0xe] = REFG(undefined4, 0x13799b0);
  param_2[0xf] = REFG(undefined4, 0x13799b4);
  param_2[0xd] = REFG(undefined4, 0x131de48);
  param_2[0x13] = *(float *)(in_ecx + 0x3c);
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(undefined2 *)((int)param_2 + 0x52) = 0;
  param_2[0x16] = REFG(undefined4, 0x13799b0);
  param_2[0x17] = REFG(undefined4, 0x13799b4);
  param_2[0x15] = REFG(undefined4, 0x131de48);
  param_2[0x1b] = *(float *)(in_ecx + 0x3c);
  param_2[0x1c] = 0.0;
  param_2[0x1e] = REFG(undefined4, 0x13799b0);
  param_2[0x1f] = REFG(undefined4, 0x13799b4);
  param_2[0x1d] = REFG(undefined4, 0x131de48);
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerSearchPosition::vf0 */
uint F_00566e80(unsigned int gen_a0)
{
  GEN_ENTER(0x566e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_EAX = 0;
  uint3 uVar1;
  
  if (this[0x17d] == (undefined1)0x0) {
    uVar1 = (uint3)((uint)in_EAX >> 8);
    if ((this[0x17c] == (undefined1)0x0) ||
       (!((float10)*(float *)(this + 0x170) <
         (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x168) + (float10)*(float *)(this + 0x158)))))))
    {
      in_EAX = (uint)uVar1 << 8;
    }
    else {
      in_EAX = CONCAT31(uVar1,1);
    }
    this[0x17d] = SUB41(in_EAX,0);
    if (SUB41(in_EAX,0) != (undefined1)0x0) {
      in_EAX = *(int *)(this + 0xbc) + -1;
      *(int *)(this + 0x178) = in_EAX;
    }
    if (this[0x17d] == (undefined1)0x0) {
      return (uint)(*(uint *)(this + 0xb8) <= *(uint *)(this + 0xbc));
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: Component::GUI2::AtkFontAnalyzerSearchPosition::vf1 */
uint F_00566f00(unsigned int gen_a0)
{
  GEN_ENTER(0x566f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = F_00566980((undefined *)this);
  fVar2 = (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x16c) + (float10)*(float *)(this + 0x15c))));
  fVar3 = (float10)*(float *)(this + 0x174);
  if ((fVar2 <= fVar3) && (fVar3 < (float10)*(float *)(this + 0x148) + fVar2)) {
    this[0x17c] = (undefined1)0x1;
    if ((float10)*(float *)(this + 0x170) < (float10)*(float *)(this + 0x168)) {
      this[0x17d] = (undefined1)0x1;
      return uVar1;
    }
  }
  else if (fVar3 < (float10)*(float *)(this + 0x16c)) {
    this[0x17d] = (undefined1)0x1;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerSearchPosition::vf2 */
unsigned int F_00566f90(unsigned int gen_a0)
{
  GEN_ENTER(0x566f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x17d] == (undefined1)0x0) {
    if ((this[0x17c] != (undefined1)0x0) &&
       ((float10)*(float *)(this + 0x170) <
        (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x168) + (float10)*(float *)(this + 0x158)))))) {
      *(int *)(this + 0x178) = *(int *)(this + 0xbc) + -1;
      this[0x17d] = (undefined1)0x1;
      return 0;
    }
    *(undefined4 *)(this + 0x178) = *(undefined4 *)(this + 0xbc);
    this[0x17d] = (undefined1)0x1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerBuildLink::vf1 */
uint F_00567000(unsigned int gen_a0)
{
  GEN_ENTER(0x567000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined2 *)(this + 0x16c) = 0;
  this[0x16e] = (undefined1)0x0;
  *(undefined4 *)(this + 0x174) = 0;
  uVar1 = F_00566980((undefined *)this);
  return uVar1;
}

/* ref: FUN_00567030 */
uint F_00567030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  undefined * pvVar3;
  char cVar4;
  uint uVar5;
  byte * pbVar6;
  uint uVar7;
  
  iVar2 = *(int *)((int)this + 8);
  uVar5 = *(uint *)(iVar2 + 0x9c) >> 0x19 & 0xffffff01;
  bVar1 = *param_1;
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  cVar4 = (char)uVar5;
  pbVar6 = param_1;
  do {
    if ((bVar1 == 0) || (uVar5 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this), (char)uVar5 != '\0')) {
      return uVar5;
    }
    bVar1 = *pbVar6;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
    if (bVar1 == 0xd) {
      uVar7 = (pbVar6[1] == 10) + 1;
LAB_005670c7: ;
      this = (*(int * PTR32 *)(gen_frame + 0x8));
      if (cVar4 != '\0') {
        uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)),pbVar6,uVar7);
        this = (*(int * PTR32 *)(gen_frame + 0x8));
      }
    }
    else {
      if (bVar1 == 10) {
        uVar7 = 1;
        goto LAB_005670c7;
      }
      if (bVar1 == 2) {
        if (pbVar6[1] == 0x10) {
          pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0xf0) + 0x18)));
          uVar5 = F_00a24d30(pvVar3,pbVar6 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x4)),1);
          uVar7 = (*(int *)(gen_frame + 0x4)) + 3 + uVar5;
          this = (*(int * PTR32 *)(gen_frame + 0x8));
          if (uVar7 != 0) goto LAB_005670c7;
        }
        if ((*pbVar6 != 2) || (pbVar6[1] == 0)) goto LAB_00567118;
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0xf0) + 0x18)));
        uVar5 = F_00a24d30(pvVar3,pbVar6 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x0)),1);
        uVar5 = (*(int *)(gen_frame + 0x0)) + 3 + uVar5;
        uVar7 = uVar5;
        if ((int)uVar5 < 1) goto LAB_00567118;
      }
      else {
LAB_00567118: ;
        bVar1 = *pbVar6;
        if ((byte)(bVar1 + 0x80) < 0x40) {
          uVar5 = 1;
          uVar7 = uVar5;
        }
        else if (bVar1 < 0x80) {
          uVar5 = 1;
          uVar7 = uVar5;
        }
        else if (bVar1 < 0xe0) {
          uVar5 = 2;
          uVar7 = uVar5;
        }
        else if (bVar1 < 0xf0) {
          uVar5 = 3;
          uVar7 = uVar5;
        }
        else {
          uVar5 = (-(uint)(bVar1 < 0xf8) & 3) + 1;
          uVar7 = uVar5;
        }
      }
    }
    pbVar6 = pbVar6 + uVar7;
    bVar1 = *pbVar6;
  } while( true );
}

/* ref: FUN_00567170 */
uint F_00567170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  undefined * pvVar3;
  char cVar4;
  uint uVar5;
  byte * pbVar6;
  uint uVar7;
  
  iVar2 = *(int *)((int)this + 8);
  uVar5 = *(uint *)(iVar2 + 0x9c) >> 0x19 & 0xffffff01;
  bVar1 = *param_1;
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  cVar4 = (char)uVar5;
  pbVar6 = param_1;
  do {
    if ((bVar1 == 0) || (uVar5 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this), (char)uVar5 != '\0')) {
      return uVar5;
    }
    bVar1 = *pbVar6;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
    if (bVar1 == 0xd) {
      uVar7 = (pbVar6[1] == 10) + 1;
LAB_00567207: ;
      this = (*(int * PTR32 *)(gen_frame + 0x8));
      if (cVar4 != '\0') {
        uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)),pbVar6,uVar7);
        this = (*(int * PTR32 *)(gen_frame + 0x8));
      }
    }
    else {
      if (bVar1 == 10) {
        uVar7 = 1;
        goto LAB_00567207;
      }
      if (bVar1 == 2) {
        if (pbVar6[1] == 0x10) {
          pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0xf0) + 0x18)));
          uVar5 = F_00a24d30(pvVar3,pbVar6 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x4)),1);
          uVar7 = (*(int *)(gen_frame + 0x4)) + 3 + uVar5;
          this = (*(int * PTR32 *)(gen_frame + 0x8));
          if (uVar7 != 0) goto LAB_00567207;
        }
        if ((*pbVar6 != 2) || (pbVar6[1] == 0)) goto LAB_00567258;
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0xf0) + 0x18)));
        uVar5 = F_00a24d30(pvVar3,pbVar6 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x0)),1);
        uVar5 = (*(int *)(gen_frame + 0x0)) + 3 + uVar5;
        uVar7 = uVar5;
        if ((int)uVar5 < 1) goto LAB_00567258;
      }
      else {
LAB_00567258: ;
        bVar1 = *pbVar6;
        if ((((bVar1 < 0x20) || (bVar1 == 0x7f)) || ((0x1f < bVar1 && (bVar1 < 0x7f)))) ||
           ((0xa0 < bVar1 && (bVar1 < 0xe0)))) {
          uVar5 = 1;
          uVar7 = uVar5;
        }
        else if (((bVar1 < 0x81) || (0x9f < bVar1)) && (0xf < (byte)(bVar1 + 0x20))) {
          uVar5 = 0;
          uVar7 = uVar5;
        }
        else {
          uVar5 = 2;
          uVar7 = uVar5;
        }
      }
    }
    pbVar6 = pbVar6 + uVar7;
    bVar1 = *pbVar6;
  } while( true );
}

/* ref: FUN_005672b0 */
uint F_005672b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5672b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x3e) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x4c) = 0;
  *(undefined2 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x56) = 0;
  *(undefined1 *)((int)this + 0xc6d) = 1;
  *(undefined2 *)((int)this + 0xc6f) = 0;
  F_00558dc0(this);
  return ((uint)(uint)(this));
}

/* ref: FUN_00567340 */
unsigned int F_00567340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x567340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if ((((char)param_2 != '\0') && (*(int *)((int)this + 0xc58) != 0)) &&
       (bVar1 = F_0055de10(param_1,*(int *)((int)this + 0xc58)), bVar1 != 0)) {
      *(undefined4 *)((int)this + 0xc58) = 0;
    }
    iVar3 = 0;
    if (0 < *(short *)((int)this + 0xc68)) {
      piVar2 = (int *)((int)this + 0x58);
      do {
        if (*piVar2 == param_1) {
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 3;
      } while (iVar3 < *(short *)((int)this + 0xc68));
    }
  }
  return 0;
}

/* ref: FUN_005673b0 */
uint F_005673b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5673b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  do {
    if (999 < *(ushort *)(uVar3 + 0x18)) {
      piVar2 = *(int * PTR32 *)(uVar3 + 0x8c);
      bVar1 = *(byte *)(piVar2 + 0x18);
      if (((((bVar1 & 1) != 0) && ((bVar1 & 4) != 0)) && ((char)piVar2[7] == '\x01')) &&
         (*(char *)(piVar2[3] + 0xf) == '\t')) {
        if ((((999 < *(ushort *)(uVar3 + 0x18)) && (piVar2 != (int *)0x0)) &&
            (((*(byte *)(piVar2 + 0x18) & 1) != 0 &&
             (((*(byte *)(piVar2 + 0x18) & 4) != 0 && ((char)piVar2[7] == '\x01')))))) &&
           (*(char *)(piVar2[3] + 0xf) == '\t')) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
          return uVar3;
        }
        uVar3 = ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x3c))(0);
        return uVar3;
      }
      if (((((bVar1 & 1) != 0) && ((bVar1 & 4) != 0)) && ((char)piVar2[7] == '\x01')) &&
         (*(char *)(piVar2[3] + 0xf) == '\f')) {
        if ((((999 < *(ushort *)(uVar3 + 0x18)) &&
             (piVar2 = *(int * PTR32 *)(uVar3 + 0x8c), piVar2 != (int *)0x0)) &&
            (((*(byte *)(piVar2 + 0x18) & 1) != 0 &&
             (((*(byte *)(piVar2 + 0x18) & 4) != 0 && ((char)piVar2[7] == '\x01')))))) &&
           (*(char *)(piVar2[3] + 0xf) == '\f')) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
          return uVar3;
        }
        uVar3 = ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x3c))(0);
        return uVar3;
      }
    }
    uVar3 = *(uint *)(uVar3 + 8);
    if (uVar3 == 0) {
      return param_1;
    }
  } while( true );
}

/* ref: FUN_005674c0 */
uint F_005674c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5674c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  if ((*(byte *)(param_2 + 0x44) & 1) != 0) {
    *(undefined1 *)((int)param_1 + 1) = 1;
  }
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    *(undefined1 *)param_1 = 1;
  }
  if ((*(byte *)(param_2 + 0x4c) & 1) != 0) {
    *(undefined1 *)((int)param_1 + 2) = 1;
  }
  if ((*(byte *)(param_2 + 0x204) & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((*(byte *)(param_2 + 0x54) & 1) != 0) {
    *(undefined1 *)((int)param_1 + 3) = 1;
  }
  if ((*(byte *)(param_2 + 0x208) & 1) != 0) {
    *(undefined1 *)((int)param_1 + 5) = 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00567510 */
uint F_00567510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int in_ecx;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  F_0042aca0((int)this + 0x22b40);
  in_ecx = (int)this + 0x22aec;
  F_0042aca0(in_ecx);
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  iVar2 = *piVar1;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,in_ecx);
  ((code *)*(gen_code32 *)(iVar2 + 0xc))(*(undefined4 *)((int)this + 0x14),param_1,uVar3);
  F_0042e360((undefined *)((int)this + 0x22b40),in_ecx);
  return (int)this + 0x22b40;
}

/* ref: FUN_00567570 */
unsigned int F_00567570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x567570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  if (*(int *)((int)this + 0x22248) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x22248);
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_005675b0 */
unsigned int F_005675b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5675b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  if (*(int *)((int)this + 0x22248) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x22248);
    (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_005675f0 */
byte F_005675f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5675f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(char *)((int)this + 0x22d28) != '\0') && (REFG(void * PTR32, 0x137104c) != (undefined *)0x0)) {
    bVar1 = F_00976910(REFG(void * PTR32, 0x137104c));
    return bVar1 == 0;
  }
  return 1;
}

/* ref: Component::GUI2::AtkModule::vf9 */
uint F_00567620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00564e90(this + 0x20de0,param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf10 */
uint F_00567630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00564f00(this + 0x20de0,param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf11 */
uint F_00567640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00564f70(this + 0x20de0,param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf12 */
uint F_00567650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00564fe0(this + 0x20de0,param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf13 */
uint F_00567660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00565040(this + 0x20de0,param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf14 */
uint F_00567670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005650a0(this + 0x20de0,param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf46 */
byte F_00567680(void)
{
  GEN_ENTER(0x567680u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00567690 */
uint F_00567690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x567690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x22238);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x34) = param_1;
    *(undefined4 *)(uVar1 + 0x38) = param_2;
    *(undefined4 *)(uVar1 + 0x3c) = param_3;
    *(undefined4 *)(uVar1 + 0x40) = param_4;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf34 */
uint F_005676c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5676c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055bd90(this + 0x2224c,param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf35 */
uint F_005676d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5676d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2225c) = param_2;
  return param_2;
}

/* ref: FUN_005676e0 */
unsigned int F_005676e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5676e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xb8);
  if (iVar1 != 0) {
    if ((*(ushort *)((int)this + 0x22d18) != param_1) ||
       (*(ushort *)((int)this + 0x22d1a) != param_2)) {
      *(short *)((int)this + 0x22d18) = (short)param_1;
      *(short *)((int)this + 0x22d1a) = (short)param_2;
      *(uint *)(iVar1 + 0x234) = param_1;
      *(uint *)(iVar1 + 0x238) = param_2;
    }
  }
  return 0;
}

/* ref: FUN_00567730 */
byte F_00567730(unsigned int gen_a0)
{
  GEN_ENTER(0x567730u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(short *)(in_ecx + 0x22a14) != 0;
}

/* ref: FUN_00567740 */
uint F_00567740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x567740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (param_1 < 3) {
    *(undefined4 *)(uVar1 + 0x7c + param_1 * 4) = param_2;
    *(uint *)(uVar1 + 0x88 + param_1 * 4) = *param_3 & 0xfffffff;
  }
  return uVar1;
}

/* ref: FUN_00567770 */
uint F_00567770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x567770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  uint local_20;
  
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  uVar5 = 1;
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  if (1 < param_1) {
    if (3 < (int)(param_1 - 1)) {
      iVar6 = (param_1 - 5 >> 2) + 1;
      pfVar4 = param_2 + 10;
      uVar5 = iVar6 * 4 + 1;
      do {
        fVar1 = pfVar4[-6];
        if ((float10)fVar1 < (float10)local_30) {
          local_30 = fVar1;
        }
        fVar2 = pfVar4[-5];
        if ((float10)fVar2 < (float10)local_2c) {
          local_2c = fVar2;
        }
        fVar3 = pfVar4[-4];
        if ((float10)fVar3 < (float10)local_28) {
          local_28 = fVar3;
        }
        if ((float10)local_40 < (float10)fVar1) {
          local_40 = fVar1;
        }
        if ((float10)local_3c < (float10)fVar2) {
          local_3c = fVar2;
        }
        if ((float10)local_38 < (float10)fVar3) {
          local_38 = fVar3;
        }
        fVar1 = pfVar4[-2];
        if ((float10)fVar1 < (float10)local_30) {
          local_30 = fVar1;
        }
        fVar2 = pfVar4[-1];
        if ((float10)fVar2 < (float10)local_2c) {
          local_2c = fVar2;
        }
        fVar3 = *pfVar4;
        if ((float10)fVar3 < (float10)local_28) {
          local_28 = fVar3;
        }
        if ((float10)local_40 < (float10)fVar1) {
          local_40 = fVar1;
        }
        if ((float10)local_3c < (float10)fVar2) {
          local_3c = fVar2;
        }
        if ((float10)local_38 < (float10)fVar3) {
          local_38 = fVar3;
        }
        fVar1 = pfVar4[2];
        if ((float10)fVar1 < (float10)local_30) {
          local_30 = fVar1;
        }
        fVar2 = pfVar4[3];
        if ((float10)fVar2 < (float10)local_2c) {
          local_2c = fVar2;
        }
        fVar3 = pfVar4[4];
        if ((float10)fVar3 < (float10)local_28) {
          local_28 = fVar3;
        }
        if ((float10)local_40 < (float10)fVar1) {
          local_40 = fVar1;
        }
        if ((float10)local_3c < (float10)fVar2) {
          local_3c = fVar2;
        }
        if ((float10)local_38 < (float10)fVar3) {
          local_38 = fVar3;
        }
        fVar1 = pfVar4[6];
        if ((float10)fVar1 < (float10)local_30) {
          local_30 = fVar1;
        }
        fVar2 = pfVar4[7];
        if ((float10)fVar2 < (float10)local_2c) {
          local_2c = fVar2;
        }
        fVar3 = pfVar4[8];
        if ((float10)fVar3 < (float10)local_28) {
          local_28 = fVar3;
        }
        if ((float10)local_40 < (float10)fVar1) {
          local_40 = fVar1;
        }
        if ((float10)local_3c < (float10)fVar2) {
          local_3c = fVar2;
        }
        if ((float10)local_38 < (float10)fVar3) {
          local_38 = fVar3;
        }
        pfVar4 = pfVar4 + 0x10;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (uVar5 < param_1) {
      pfVar4 = param_2 + uVar5 * 4 + 2;
      iVar6 = param_1 - uVar5;
      do {
        fVar1 = pfVar4[-2];
        if ((float10)fVar1 < (float10)local_30) {
          local_30 = fVar1;
        }
        fVar2 = pfVar4[-1];
        if ((float10)fVar2 < (float10)local_2c) {
          local_2c = fVar2;
        }
        fVar3 = *pfVar4;
        if ((float10)fVar3 < (float10)local_28) {
          local_28 = fVar3;
        }
        if ((float10)local_40 < (float10)fVar1) {
          local_40 = fVar1;
        }
        if ((float10)local_3c < (float10)fVar2) {
          local_3c = fVar2;
        }
        if ((float10)local_38 < (float10)fVar3) {
          local_38 = fVar3;
        }
        pfVar4 = pfVar4 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  iVar6 = *(int *)((int)this + 4);
  fVar7 = (float10)REFG(double, 0x1088108);
  local_20 = (uint)(longlong)
                   TRUNC((float10)((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x68) *
                                          (float10)((float)GEN_TOF((fVar7 * (float10)(float)((float10)
                                                  local_28 + (float10)local_38)))) +
                                         ((float10)*(float *)(iVar6 + 0x60) *
                                          (float10)((float)GEN_TOF(((float10)(float)((float10)local_30 +
                                                                           (float10)local_40) *
                                                          fVar7))) +
                                         (float10)*(float *)(iVar6 + 100) *
                                         (float10)((float)GEN_TOF(((float10)(float)((float10)local_2c +
                                                                          (float10)local_3c) * fVar7
                                                         ))))))) + (float10)*(float *)(iVar6 + 0x6c));
  return local_20;
}

/* ref: FUN_00567b10 */
uint F_00567b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x567b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * this_00;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1;
  if ((*(byte *)(param_1 + 4) & 0xf) == 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x70))) = 0xffff - (*(uint *)(param_1 + 8) >> 0xb & 0xffff);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = F_005bfe10(this_00,2,0x1c,0);
    uVar6 = 0;
    if (uVar5 != 0) {
      *(byte *)((int)this_00 + 0xa4) =
           *(byte *)((int)this_00 + 0xa4) ^
           (((char)param_2 != '\0') * '\x02' ^ *(byte *)((int)this_00 + 0xa4)) & 2;
      *(undefined4 *)(uVar5 + 0xc) = uVar2;
      *(undefined4 *)(uVar5 + 0x10) = uVar3;
      *(undefined4 *)(uVar5 + 0x14) = uVar1;
      *(uint *)(uVar5 + 8) = (uint)((char)param_2 != '\0');
      *(undefined4 *)(uVar5 + 0x18) = uVar4;
      uVar6 = F_005bfeb0(this_00,uVar5);
    }
  }
  return uVar6;
}

/* ref: FUN_00567bb0 */
uint F_00567bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x567bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x70))) = param_3;
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  uVar1 = F_005bfe10(this_00,1,0x50,2);
  uVar2 = 0;
  if (uVar1 != 0) {
    *(byte *)((int)this_00 + 0xa4) =
         *(byte *)((int)this_00 + 0xa4) ^
         (((char)param_1 != '\0') << 2 ^ *(byte *)((int)this_00 + 0xa4)) & 4;
    *(undefined4 *)(uVar1 + 0xc) = param_2;
    *(uint *)(uVar1 + 8) = (uint)((char)param_1 != '\0');
    puVar4 = param_4;
    puVar5 = (undefined4 *)(uVar1 + 0x10);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = F_005bfeb0(this_00,uVar1);
  }
  return uVar2;
}

/* ref: FUN_00567c40 */
unsigned int F_00567c40(unsigned int gen_a0)
{
  GEN_ENTER(0x567c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_0055b460(*(undefined * PTR32 *)this);
    puVar1 = *(undefined4 * PTR32 *)this;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)this = 0;
    }
  }
  return 0;
}

/* ref: FUN_00567c80 */
uint F_00567c80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x567c80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined4 in_EAX = 0;
  undefined2 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x48)) || GEN_ISNAN((float10)param_2);
    in_EAX = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)(byte)in_EAX);
    if (bVar6 == (bVar6 || (float10)*(float *)(param_1 + 0x48) == (float10)param_2)) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
    }
  }
  fVar2 = REFG(float, 0x1087f04);
  fVar1 = *(float *)(param_1 + 0x40);
  bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04));
  bVar7 = bVar6 || fVar1 == REFG(float, 0x1087f04);
  uVar5 = (undefined2)((uint)in_EAX >> 0x10);
  uVar3 = (undefined1)in_EAX;
  uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(REFG(float, 0x1087f04) <= fVar1),uVar3));
  *(float *)(param_1 + 0x48) = param_2;
  if (bVar6 != bVar7) {
    fVar1 = *(float *)(param_1 + 0x44);
    bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(fVar2);
    bVar7 = bVar6 || fVar1 == fVar2;
    uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(fVar2 <= fVar1),uVar3));
    if (bVar6 != bVar7) {
      bVar6 = GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
      bVar7 = bVar6 || param_2 == *(float *)&REFG(undefined, 0x1088114);
      uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U |
                                      !(*(float *)&REFG(undefined, 0x1088114) <= param_2),uVar3));
      if (bVar6 != bVar7) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffb;
        return uVar4;
      }
    }
  }
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 4;
  return uVar4;
}

/* ref: FUN_00567d00 */
uint F_00567d00(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x567d00u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 in_EAX = 0;
  undefined2 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x40)) || GEN_ISNAN((float10)param_2);
    uVar5 = (undefined2)((uint)in_EAX >> 0x10);
    bVar2 = (byte)in_EAX;
    in_EAX = CONCAT22(uVar5,(ushort)bVar2);
    if (bVar6 != (bVar6 || (float10)*(float *)(param_1 + 0x40) == (float10)param_2)) {
      bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x44)) || GEN_ISNAN((float10)param_3);
      in_EAX = CONCAT22(uVar5,(ushort)bVar2);
      if (bVar6 != (bVar6 || (float10)*(float *)(param_1 + 0x44) == (float10)param_3))
      goto LAB_00567d37;
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  }
LAB_00567d37: ;
  fVar1 = REFG(float, 0x1087f04);
  bVar6 = GEN_ISNAN(param_2) || GEN_ISNAN(REFG(float, 0x1087f04));
  bVar7 = bVar6 || param_2 == REFG(float, 0x1087f04);
  uVar5 = (undefined2)((uint)in_EAX >> 0x10);
  uVar3 = (undefined1)in_EAX;
  uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(REFG(float, 0x1087f04) <= param_2),uVar3));
  *(float *)(param_1 + 0x40) = param_2;
  *(float *)(param_1 + 0x44) = param_3;
  if (bVar6 != bVar7) {
    bVar6 = GEN_ISNAN(param_3) || GEN_ISNAN(fVar1);
    bVar7 = bVar6 || param_3 == fVar1;
    uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(fVar1 <= param_3),uVar3));
    if (bVar6 != bVar7) {
      fVar1 = *(float *)(param_1 + 0x48);
      bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
      bVar7 = bVar6 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
      uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U |
                                      !(*(float *)&REFG(undefined, 0x1088114) <= fVar1),uVar3));
      if (bVar6 != bVar7) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffb;
        return uVar4;
      }
    }
  }
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 4;
  return uVar4;
}

/* ref: FUN_00567d90 */
uint F_00567d90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x567d90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined4 in_EAX = 0;
  undefined2 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x40)) || GEN_ISNAN((float10)param_2);
    in_EAX = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)(byte)in_EAX);
    if (bVar6 == (bVar6 || (float10)*(float *)(param_1 + 0x40) == (float10)param_2)) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
    }
  }
  fVar2 = REFG(float, 0x1087f04);
  bVar6 = GEN_ISNAN(param_2) || GEN_ISNAN(REFG(float, 0x1087f04));
  bVar7 = bVar6 || param_2 == REFG(float, 0x1087f04);
  uVar5 = (undefined2)((uint)in_EAX >> 0x10);
  uVar3 = (undefined1)in_EAX;
  uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(REFG(float, 0x1087f04) <= param_2),uVar3));
  *(float *)(param_1 + 0x40) = param_2;
  if (bVar6 != bVar7) {
    fVar1 = *(float *)(param_1 + 0x44);
    bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(fVar2);
    bVar7 = bVar6 || fVar1 == fVar2;
    uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(fVar2 <= fVar1),uVar3));
    if (bVar6 != bVar7) {
      fVar2 = *(float *)(param_1 + 0x48);
      bVar6 = GEN_ISNAN(fVar2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
      bVar7 = bVar6 || fVar2 == *(float *)&REFG(undefined, 0x1088114);
      uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U |
                                      !(*(float *)&REFG(undefined, 0x1088114) <= fVar2),uVar3));
      if (bVar6 != bVar7) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffb;
        return uVar4;
      }
    }
  }
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 4;
  return uVar4;
}

/* ref: FUN_00567e10 */
uint F_00567e10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x567e10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined4 in_EAX = 0;
  undefined2 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x44)) || GEN_ISNAN((float10)param_2);
    in_EAX = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)(byte)in_EAX);
    if (bVar6 == (bVar6 || (float10)*(float *)(param_1 + 0x44) == (float10)param_2)) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
    }
  }
  fVar2 = REFG(float, 0x1087f04);
  fVar1 = *(float *)(param_1 + 0x40);
  bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04));
  bVar7 = bVar6 || fVar1 == REFG(float, 0x1087f04);
  uVar5 = (undefined2)((uint)in_EAX >> 0x10);
  uVar3 = (undefined1)in_EAX;
  uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(REFG(float, 0x1087f04) <= fVar1),uVar3));
  *(float *)(param_1 + 0x44) = param_2;
  if (bVar6 != bVar7) {
    bVar6 = GEN_ISNAN(param_2) || GEN_ISNAN(fVar2);
    bVar7 = bVar6 || param_2 == fVar2;
    uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(fVar2 <= param_2),uVar3));
    if (bVar6 != bVar7) {
      fVar1 = *(float *)(param_1 + 0x48);
      bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
      bVar7 = bVar6 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
      uVar4 = CONCAT22(uVar5,CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U |
                                      !(*(float *)&REFG(undefined, 0x1088114) <= fVar1),uVar3));
      if (bVar6 != bVar7) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffb;
        return uVar4;
      }
    }
  }
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 4;
  return uVar4;
}

/* ref: FUN_00567e90 */
uint F_00567e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float * pfVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  uint uVar5;
  uint uVar6;
  
  fVar2 = REFG(float, 0x1087f04);
  uVar5 = *(uint *)((int)this + 0x74) ^ REFG(uint, 0x10920d0);
  uVar6 = *(uint *)((int)this + 0x78) ^ REFG(uint, 0x10920d0);
  pfVar1 = (float *)((int)this + 0x20);
  *pfVar1 = GEN_FLT_TO(*pfVar1, REFG(float, 0x1087f04));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(float *)((int)this + 0x2c) = fVar2;
  *(uint *)((int)this + 0x30) = uVar5;
  *(uint *)((int)this + 0x34) = uVar6;
  fVar3 = (float10)*(float *)((int)this + 0x40);
  *pfVar1 = (float)(fVar3 * (float10)*pfVar1);
  fVar4 = (float10)*(float *)((int)this + 0x44);
  *(float *)((int)this + 0x24) = ((float)GEN_TOF((fVar4 * (float10)*(float *)((int)this + 0x24))));
  *(float *)((int)this + 0x28) = ((float)GEN_TOF((fVar3 * (float10)*(float *)((int)this + 0x28))));
  *(float *)((int)this + 0x2c) = ((float)GEN_TOF((fVar4 * (float10)*(float *)((int)this + 0x2c))));
  *(float *)((int)this + 0x30) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) * fVar3)));
  *(float *)((int)this + 0x34) = ((float)GEN_TOF((fVar4 * (float10)*(float *)((int)this + 0x34))));
  F_005b7670(pfVar1,*(float *)((int)this + 0x48));
  *(float *)((int)this + 0x30) =
       ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) +
                               (float10)*(float *)((int)this + 0x74)))) +
              (float10)*(float *)((int)this + 0x30))));
  *(float *)((int)this + 0x34) =
       ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x3c) +
                               (float10)*(float *)((int)this + 0x78)))) +
              (float10)*(float *)((int)this + 0x34))));
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = F_00560c80(pfVar1,(uint)pfVar1,param_1 + 0x20);
  }
  return uVar5;
}

/* ref: FUN_00567f70 */
uint F_00567f70(unsigned int gen_a0)
{
  GEN_ENTER(0x567f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0)) {
    uVar1 = F_0055ef60(*(undefined * PTR32 *)((int)this + 0x1c));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00567f90 */
ushort F_00567f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  ushort * puVar3;
  
  if ((this != (undefined *)0x0) && (*(int * PTR32 *)((int)this + 0x1c) != (int *)0x0)) {
    iVar1 = **(int * PTR32 *)((int)this + 0x1c);
    if (*(short *)(iVar1 + 6) != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      uVar2 = (uint)*(ushort *)(iVar1 + 8);
      puVar3 = *(ushort * PTR32 *)(iVar1 + 0xc);
      iVar1 = 0;
      if (uVar2 != 0) {
        do {
          if (puVar3[6] == (ushort)param_1) {
            return *puVar3;
          }
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 8;
        } while (iVar1 < (int)uVar2);
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00567ff0 */
uint F_00567ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0)) {
    uVar1 = F_0055f000(*(undefined * PTR32 *)((int)this + 0x1c),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00568010 */
uint F_00568010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x568010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  float * pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  (*(uint *)(gen_frame + 0x6c)) = uVar1;
  if (this != (undefined *)0x0) {
    (*(int *)(gen_frame + 0x8)) = 0x7fff;
    (*(int *)(gen_frame + 0xc)) = 0x7fff;
    (*(int *)(gen_frame + 0x10)) = -0x8000;
    (*(int *)(gen_frame + 0x14)) = -0x8000;
    fVar6 = (float)*(ushort *)((int)this + 0x7c);
    fVar7 = (float)*(ushort *)((int)this + 0x7e);
    if (((*(uint *)((int)this + 0x84) & 0x800000) != 0) && (*(int *)((int)this + 8) != 0)) {
      fVar6 = (float)*((ushort *)GEN_TOP((*(int *)((int)this + 8) + 0x7c)));
      fVar7 = (float)*((ushort *)GEN_TOP((*(int *)((int)this + 8) + 0x7e)));
    }
    if ((*(ushort *)((int)this + 0x18) < 1000) || (*(int *)((int)this + 0x8c) != 0)) {
      ((float *)(gen_frame + 0x20))[0] = 0.0;
      ((float *)(gen_frame + 0x20))[1] = 0.0;
      ((float *)(gen_frame + 0x20))[4] = 0.0;
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      ((float *)(gen_frame + 0x20))[5] = fVar7;
      (*(float *)(gen_frame + 0x40)) = fVar6;
      (*(float *)(gen_frame + 0x44)) = fVar7;
      (*(float *)(gen_frame + 0x50)) = fVar6;
      pfVar2 = ((float *)(gen_frame + 0x20));
      iVar3 = 4;
      do {
        fVar5 = (float10)*(float *)((int)this + 0x34) +
                ((float10)pfVar2[1] * (float10)*(float *)((int)this + 0x2c) +
                (float10)*pfVar2 * (float10)*(float *)((int)this + 0x24));
        fVar4 = ((float10)pfVar2[1] * (float10)*(float *)((int)this + 0x28) +
                (float10)*(float *)((int)this + 0x20) * (float10)*pfVar2) +
                (float10)*(float *)((int)this + 0x30);
        if ((float10)(float)fVar4 < (float10)(*(int *)(gen_frame + 0x8))) {
          (*(int *)(gen_frame + 0x8)) = (int)fVar4;
        }
        if ((float10)(*(int *)(gen_frame + 0x10)) < (float10)(float)fVar4) {
          (*(int *)(gen_frame + 0x10)) = (int)fVar4;
        }
        if ((float10)(float)fVar5 < (float10)(*(int *)(gen_frame + 0xc))) {
          (*(int *)(gen_frame + 0xc)) = (int)fVar5;
        }
        if ((float10)(*(int *)(gen_frame + 0x14)) < (float10)(float)fVar5) {
          (*(int *)(gen_frame + 0x14)) = (int)fVar5;
        }
        pfVar2 = pfVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *param_1 = (*(int *)(gen_frame + 0x8));
      param_1[1] = (*(int *)(gen_frame + 0xc));
      param_1[2] = (*(int *)(gen_frame + 0x10));
      param_1[3] = (*(int *)(gen_frame + 0x14));
      goto LAB_005681ef;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
LAB_005681ef: ;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)param_1;
}

/* ref: FUN_00568210 */
uint F_00568210(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x568210u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint in_EAX = 0;
  
  if (param_1 != 0) {
    in_EAX = F_00567d00(param_1,param_2,param_3);
  }
  return in_EAX;
}

/* ref: FUN_00568230 */
uint F_00568230(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x568230u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 != 0) {
    in_EAX = F_00567d90(param_1,param_2);
  }
  return in_EAX;
}

/* ref: FUN_00568250 */
uint F_00568250(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x568250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 != 0) {
    in_EAX = F_00567e10(param_1,param_2);
  }
  return in_EAX;
}

/* ref: FUN_00568270 */
ushort F_00568270(unsigned int gen_a0)
{
  GEN_ENTER(0x568270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort local_c;
  
  if (this != (undefined *)0x0) {
    local_c = (ushort)(int)TRUNC((float10)*(ushort *)((int)this + 0x7c) *
                                 (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this
                                                                                          + 0x20) *
                                                                       (float10)*(float *)((int)this
                                                                                          + 0x20) +
                                                                      (float10)*(float *)((int)this
                                                                                         + 0x24) *
                                                                      (float10)*(float *)((int)this
                                                                                         + 0x24))))))));
    return local_c;
  }
  return 0;
}

/* ref: FUN_005682d0 */
ushort F_005682d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5682d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort local_c;
  
  if (this != (undefined *)0x0) {
    local_c = (ushort)(int)TRUNC((float10)*(ushort *)((int)this + 0x7e) *
                                 (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this
                                                                                          + 0x28) *
                                                                       (float10)*(float *)((int)this
                                                                                          + 0x28) +
                                                                      (float10)*(float *)((int)this
                                                                                         + 0x2c) *
                                                                      (float10)*(float *)((int)this
                                                                                         + 0x2c))))))));
    return local_c;
  }
  return 0;
}

/* ref: FUN_00568330 */
unsigned int F_00568330(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x568330u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (param_1 != 0) {
    F_00567c80(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00568350 */
uint F_00568350(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x568350u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 != 0) {
    in_EAX = F_00567c80(param_1,((float)GEN_TOF((((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
  }
  return in_EAX;
}

/* ref: FUN_00568380 */
uint F_00568380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x568380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint in_EAX = 0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  if (this != (undefined *)0x0) {
    if (*(int *)((int)this + 0x80) == 0) {
      uVar3 = 0;
      uVar1 = F_00404270();
      puVar2 = (undefined4 *)F_00406bd0(4,0,uVar1,uVar3);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      *(undefined4 * PTR32 *)((int)this + 0x80) = puVar2;
    }
    in_EAX = F_00565340(*(undefined * PTR32 *)((int)this + 0x80),param_1,param_2,param_4,this,param_3,param_5)
    ;
  }
  return in_EAX;
}

/* ref: FUN_005683e0 */
unsigned int F_005683e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5683e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (this != (undefined *)0x0) {
    if (param_1 != 0) {
      F_00567e90(this,param_1);
      return 0;
    }
    F_00567e90(this,0);
  }
  return 0;
}

/* ref: FUN_00568410 */
uint F_00568410(unsigned int gen_a0)
{
  GEN_ENTER(0x568410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 4);
  if (10000 < uVar1) {
    return uVar1 / 10000;
  }
  return uVar1;
}

/* ref: FUN_00568440 */
uint F_00568440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x568440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0x108);
  uVar2 = *(uint *)((int)this + 0x104);
  uVar3 = uVar1;
  if (uVar1 < *(uint *)((int)this + 0x104)) {
    uVar3 = *(uint *)((int)this + 0x104);
    uVar2 = uVar1;
  }
  uVar1 = F_0055f5a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18))),
                       *(undefined4 *)((int)this + 0xf0),param_1,uVar2,uVar3);
  return uVar1;
}

/* ref: FUN_00568490 */
uint F_00568490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x568490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0055f680(*((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18))),
                       *(undefined4 *)((int)this + 0xf0),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_005684c0 */
uint F_005684c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5684c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_0055f440(*((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 8) + 0x18))),param_1,param_2);
  return uVar1;
}

/* ref: FUN_005684e0 */
uint F_005684e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5684e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar2 = (uint)(*(byte *)((int)this + 0xfc) >> 4) * 0x150 + **(int * PTR32 *)(REFG(int, 0x1379860) + 8);
  if (uVar2 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)(uVar2 + 100);
  puVar5 = (undefined4 *)(uVar2 + 0xa8);
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(uVar2 + 100) = 1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x28) *
                                       (float10)*(float *)((int)this + 0x28) +
                                      (float10)*(float *)((int)this + 0x2c) *
                                      (float10)*(float *)((int)this + 0x2c)))))));
  if ((char)param_1 == '\0') {
    *(float *)(uVar2 + 0x68) = (float)*(byte *)((int)this + 0xfd);
    *(float *)(uVar2 + 0x6c) = (float)*(byte *)((int)this + 0xfd);
  }
  else {
    *(float *)(uVar2 + 0x68) =
         ((float)GEN_TOF(((float10)*(byte *)((int)this + 0xfd) *
                (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) *
                                                      (float10)*(float *)((int)this + 0x20) +
                                                     (float10)*(float *)((int)this + 0x24) *
                                                     (float10)*(float *)((int)this + 0x24))))))))));
    *(float *)(uVar2 + 0x6c) = ((float)GEN_TOF(((float10)*(byte *)((int)this + 0xfd) * (float10)fVar1)));
  }
  *(uint *)(uVar2 + 0x9c) =
       (*(byte *)((int)this + 0xfe) & 0xffffff80) << 0x12 | *(uint *)(uVar2 + 0x9c) & 0xfdffffff;
  *(undefined1 *)(uVar2 + 0xa4) = *(undefined1 *)((int)this + 0x115);
  *(undefined1 *)(uVar2 + 0xa5) = *(undefined1 *)((int)this + 0x116);
  *(float *)(uVar2 + 0x7c) = fVar1;
  return uVar2;
}

/* ref: FUN_00568630 */
unsigned int F_00568630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x568630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0042e430((undefined *)((int)this + 0xa0),param_1);
  uVar1 = F_0042a990((int)this + 0xa0);
  *(uint *)((int)this + 0xf4) = uVar1;
  F_0055ae90(this);
  return 0;
}

/* ref: Component::GUI2::AtkNineGridNodeRenderer::vf3 */
uint F_00568670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x568670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(this + 4) != 0) && (*(int *)(this + 8) != 0)) {
    F_005c00f0(param_1 + 0x20,(uint)&(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(param_1 + 0x7c));
    fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_1 + 0x7c) * (float10)(*(float *)(gen_frame + 0x0)))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    if (!((float10)fVar1 <= (float10)1)) {
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(param_1 + 0x7e));
      fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_1 + 0x7e) * (float10)(*(float *)(gen_frame + 0x4)))));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      if (!((float10)fVar1 <= (float10)1)) {
        return 0;
      }
    }
    return 0xfffffffd;
  }
  return 0xfffffffe;
}

/* ref: FUN_00568720 */
unsigned int F_00568720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x568720u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  short sVar2;
  short sVar3;
  double dVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  sVar13 = *(short *)(param_2 + 0x98);
  fVar14 = (float10)*(ushort *)(param_2 + 0x7c) *
           (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 0x20) *
                                                 (float10)*(float *)(param_2 + 0x20) +
                                                (float10)*(float *)(param_2 + 0x24) *
                                                (float10)*(float *)(param_2 + 0x24)))))));
  iVar1 = *((int *)GEN_TOP((*(int *)(param_2 + 0x8c) + 8))) + *(int *)(param_2 + 0x90) * 0xc;
  sVar2 = *(short *)(iVar1 + 4);
  sVar8 = *(short *)(iVar1 + 6);
  fVar15 = (float10)*(ushort *)(param_2 + 0x7e) *
           (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 0x28) *
                                                 (float10)*(float *)(param_2 + 0x28) +
                                                (float10)*(float *)(param_2 + 0x2c) *
                                                (float10)*(float *)(param_2 + 0x2c)))))));
  sVar11 = *(short *)(iVar1 + 8);
  sVar3 = *(short *)(iVar1 + 10);
  fVar16 = (float10)(float)fVar14;
  sVar6 = *(short *)(param_2 + 0x9a);
  sVar12 = *(short *)(param_2 + 0x94);
  sVar7 = *(short *)(param_2 + 0x96);
  if (fVar16 < (float10)((int)sVar6 + (int)sVar13)) {
    dVar5 = (GEN_X87MATH(((double)(float)(fVar16 * (float10)REFG(double, 0x1088108))),0xe));
    sVar13 = (short)(int)dVar5;
    sVar6 = (short)(int)fVar14 - sVar13;
  }
  fVar14 = (float10)(float)fVar15;
  if (fVar14 < (float10)((int)sVar7 + (int)sVar12)) {
    dVar5 = (GEN_X87MATH(((double)(float)(fVar14 * (float10)REFG(double, 0x1088108))),0xe));
    sVar12 = (short)(int)dVar5;
    sVar7 = (short)(int)fVar15 - sVar12;
  }
  *(short *)(param_1 + 10) = sVar12;
  *(short *)(param_1 + 6) = sVar8;
  *(short *)(param_1 + 4) = sVar2;
  sVar11 = sVar11 - sVar6;
  *(short *)(param_1 + 8) = sVar13;
  *(short *)(param_1 + 0x16) = sVar12;
  *(short *)(param_1 + 0x10) = sVar2 + sVar13;
  *(short *)(param_1 + 0x12) = sVar8;
  sVar9 = sVar11 - sVar13;
  *(short *)(param_1 + 0x14) = sVar9;
  *(short *)(param_1 + 0x22) = sVar12;
  sVar11 = sVar11 + sVar2;
  *(short *)(param_1 + 0x1c) = sVar11;
  *(short *)(param_1 + 0x1e) = sVar8;
  *(short *)(param_1 + 0x20) = sVar6;
  *(short *)(param_1 + 0x28) = sVar2;
  sVar10 = sVar8 + sVar12;
  *(short *)(param_1 + 0x2a) = sVar10;
  *(short *)(param_1 + 0x2c) = sVar13;
  sVar3 = sVar3 - sVar7;
  sVar12 = sVar3 - sVar12;
  *(short *)(param_1 + 0x2e) = sVar12;
  *(short *)(param_1 + 0x34) = sVar2 + sVar13;
  *(short *)(param_1 + 0x36) = sVar10;
  *(short *)(param_1 + 0x38) = sVar9;
  *(short *)(param_1 + 0x3a) = sVar12;
  *(short *)(param_1 + 0x40) = sVar11;
  *(short *)(param_1 + 0x42) = sVar10;
  *(short *)(param_1 + 0x44) = sVar6;
  *(short *)(param_1 + 0x46) = sVar12;
  *(short *)(param_1 + 0x4c) = sVar2;
  sVar8 = sVar8 + sVar3;
  *(short *)(param_1 + 0x50) = sVar13;
  *(short *)(param_1 + 0x4e) = sVar8;
  *(short *)(param_1 + 0x52) = sVar7;
  *(short *)(param_1 + 0x58) = sVar2 + sVar13;
  *(short *)(param_1 + 0x5c) = sVar9;
  *(short *)(param_1 + 0x5a) = sVar8;
  *(short *)(param_1 + 0x5e) = sVar7;
  *(short *)(param_1 + 0x66) = sVar8;
  *(short *)(param_1 + 100) = sVar11;
  *(short *)(param_1 + 0x68) = sVar6;
  *(short *)(param_1 + 0x6a) = sVar7;
  return 0;
}

/* ref: FUN_005689b0 */
unsigned int F_005689b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5689b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar7 = (*(uint *)&gen_args[2]);
  uVar3 = *(ushort *)((*(uint *)&gen_args[1]) + 0x7e);
  uVar4 = *(ushort *)((*(uint *)&gen_args[1]) + 0x7c);
  uVar5 = *(ushort *)((*(uint *)&gen_args[2]) + 8);
  uVar6 = *(ushort *)((*(uint *)&gen_args[2]) + 0x20);
  (*(uint *)&gen_args[2]) = 0;
  pfVar8 = (float *)&(*(uint *)&gen_args[2]);
  fVar1 = ((float)GEN_TOF((((float10)uVar4 - (float10)uVar5) - (float10)uVar6)));
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
  if (!((float10)fVar1 < (float10)0)) {
    pfVar8 = (float *)&(*(uint *)&gen_args[1]);
  }
  fVar1 = *pfVar8;
  uVar4 = *(ushort *)(uVar7 + 10);
  uVar5 = *(ushort *)(uVar7 + 0x52);
  (*(uint *)&gen_args[2]) = 0;
  pfVar8 = (float *)&(*(uint *)&gen_args[2]);
  fVar2 = ((float)GEN_TOF((((float10)uVar3 - (float10)uVar4) - (float10)uVar5)));
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar2);
  if (!((float10)fVar2 < (float10)0)) {
    pfVar8 = (float *)&(*(uint *)&gen_args[1]);
  }
  fVar2 = *pfVar8;
  fVar9 = (float10)fVar1;
  *(float *)((*(int *)&gen_args[0]) + 8) = ((float)GEN_TOF((fVar9 / (float10)*(ushort *)(uVar7 + 0x14))));
  fVar10 = (float10)fVar2;
  *(float *)((*(int *)&gen_args[0]) + 0x1c) = ((float)GEN_TOF((fVar10 / (float10)*(ushort *)(uVar7 + 0x2e))));
  *(float *)((*(int *)&gen_args[0]) + 0x20) = ((float)GEN_TOF((fVar9 / (float10)*(ushort *)(uVar7 + 0x38))));
  *(float *)((*(int *)&gen_args[0]) + 0x24) = ((float)GEN_TOF((fVar10 / (float10)*(ushort *)(uVar7 + 0x3a))));
  *(float *)((*(int *)&gen_args[0]) + 0x2c) = ((float)GEN_TOF((fVar10 / (float10)*(ushort *)(uVar7 + 0x46))));
  *(float *)((*(int *)&gen_args[0]) + 0x38) = ((float)GEN_TOF((fVar9 / (float10)*(ushort *)(uVar7 + 0x5c))));
  return 0;
}

/* ref: FUN_00568ac0 */
unsigned int F_00568ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x568ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  int local_10;
  ushort * local_c;
  float local_8;
  
  iVar6 = (int)param_3;
  uVar7 = 0;
  local_c = (ushort *)((int)param_3 + -0x1a);
  param_3 = (float *)(param_2 + -0x14);
  fVar8 = 0.0;
  local_8 = 0.0;
  local_10 = -3;
  pfVar5 = (float *)(param_1 + 0x24);
  do {
    iVar4 = 0;
    if (uVar7 != 0) {
      fVar8 = ((float)GEN_TOF(((float10)(float)((float10)*local_c * (float10)*param_3) + (float10)local_8)));
      iVar4 = local_10;
      local_8 = fVar8;
    }
    pfVar5[-9] = 0.0;
    pfVar5[-8] = fVar8;
    param_3 = param_3 + 6;
    local_c = local_c + 0x12;
    local_10 = local_10 + 3;
    uVar7 = uVar7 + 1;
    fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(ushort *)(iVar6 + 8 + iVar4 * 0xc) *
                                    (float10)*(float *)(param_2 + iVar4 * 8)))) + (float10)0)));
    pfVar5[-5] = fVar1;
    pfVar5[-4] = fVar8;
    fVar1 = ((float)GEN_TOF(((float10)fVar1 +
                   (float10)((float)GEN_TOF(((float10)*((ushort *)GEN_TOP((iVar6 + 8 + (iVar4 * 3 + 3) * 4))) *
                                   (float10)*(float *)(param_2 + 8 + iVar4 * 8)))))));
    pfVar5[-1] = fVar1;
    *pfVar5 = fVar8;
    pfVar5[3] = ((float)GEN_TOF(((float10)fVar1 +
                       (float10)((float)GEN_TOF(((float10)*((ushort *)GEN_TOP((iVar6 + 8 + (iVar4 * 3 + 6) * 4))) *
                                       (float10)*(float *)(param_2 + 0x10 + iVar4 * 8)))))));
    pfVar5[4] = fVar8;
    pfVar5 = pfVar5 + 0x10;
  } while (uVar7 < 4);
  if ((char)param_5 != '\0') {
    iVar6 = 2;
    pfVar5 = (float *)(param_1 + 0x24);
    do {
      fVar8 = pfVar5[-8];
      fVar1 = *(float *)(param_4 + 0x28);
      fVar2 = *(float *)(param_4 + 0x20);
      fVar3 = *(float *)(param_4 + 0x30);
      pfVar5[-8] = ((float)GEN_TOF((((float10)fVar8 * (float10)*(float *)(param_4 + 0x2c) +
                           (float10)*(float *)(param_4 + 0x24) * (float10)pfVar5[-9]) +
                          (float10)*(float *)(param_4 + 0x34))));
      pfVar5[-9] = ((float)GEN_TOF((((float10)fVar8 * (float10)fVar1 + (float10)pfVar5[-9] * (float10)fVar2)
                          + (float10)fVar3)));
      fVar8 = pfVar5[-4];
      fVar1 = *(float *)(param_4 + 0x20);
      fVar2 = *(float *)(param_4 + 0x28);
      fVar3 = *(float *)(param_4 + 0x30);
      pfVar5[-4] = ((float)GEN_TOF((((float10)pfVar5[-5] * (float10)*(float *)(param_4 + 0x24) +
                           (float10)*(float *)(param_4 + 0x2c) * (float10)fVar8) +
                          (float10)*(float *)(param_4 + 0x34))));
      pfVar5[-5] = ((float)GEN_TOF((((float10)pfVar5[-5] * (float10)fVar1 + (float10)fVar8 * (float10)fVar2)
                          + (float10)fVar3)));
      fVar8 = *pfVar5;
      fVar1 = *(float *)(param_4 + 0x20);
      fVar2 = *(float *)(param_4 + 0x28);
      fVar3 = *(float *)(param_4 + 0x30);
      *pfVar5 = ((float)GEN_TOF((((float10)pfVar5[-1] * (float10)*(float *)(param_4 + 0x24) +
                        (float10)*(float *)(param_4 + 0x2c) * (float10)fVar8) +
                       (float10)*(float *)(param_4 + 0x34))));
      pfVar5[-1] = ((float)GEN_TOF((((float10)pfVar5[-1] * (float10)fVar1 + (float10)fVar8 * (float10)fVar2)
                          + (float10)fVar3)));
      fVar8 = pfVar5[4];
      fVar1 = *(float *)(param_4 + 0x20);
      fVar2 = *(float *)(param_4 + 0x28);
      fVar3 = *(float *)(param_4 + 0x30);
      pfVar5[4] = ((float)GEN_TOF((((float10)pfVar5[3] * (float10)*(float *)(param_4 + 0x24) +
                          (float10)*(float *)(param_4 + 0x2c) * (float10)fVar8) +
                         (float10)*(float *)(param_4 + 0x34))));
      pfVar5[3] = ((float)GEN_TOF((((float10)pfVar5[3] * (float10)fVar1 + (float10)fVar8 * (float10)fVar2) +
                         (float10)fVar3)));
      fVar8 = pfVar5[8];
      fVar1 = *(float *)(param_4 + 0x28);
      fVar2 = *(float *)(param_4 + 0x20);
      fVar3 = *(float *)(param_4 + 0x30);
      pfVar5[8] = ((float)GEN_TOF((((float10)fVar8 * (float10)*(float *)(param_4 + 0x2c) +
                          (float10)*(float *)(param_4 + 0x24) * (float10)pfVar5[7]) +
                         (float10)*(float *)(param_4 + 0x34))));
      pfVar5[7] = ((float)GEN_TOF((((float10)fVar8 * (float10)fVar1 + (float10)pfVar5[7] * (float10)fVar2) +
                         (float10)fVar3)));
      fVar8 = pfVar5[0xc];
      fVar1 = *(float *)(param_4 + 0x28);
      fVar2 = *(float *)(param_4 + 0x20);
      fVar3 = *(float *)(param_4 + 0x30);
      pfVar5[0xc] = ((float)GEN_TOF((((float10)fVar8 * (float10)*(float *)(param_4 + 0x2c) +
                            (float10)*(float *)(param_4 + 0x24) * (float10)pfVar5[0xb]) +
                           (float10)*(float *)(param_4 + 0x34))));
      pfVar5[0xb] = ((float)GEN_TOF((((float10)fVar8 * (float10)fVar1 + (float10)pfVar5[0xb] * (float10)fVar2
                            ) + (float10)fVar3)));
      fVar8 = pfVar5[0x10];
      fVar1 = *(float *)(param_4 + 0x28);
      fVar2 = *(float *)(param_4 + 0x20);
      fVar3 = *(float *)(param_4 + 0x30);
      iVar6 = iVar6 + -1;
      pfVar5[0x10] = ((float)GEN_TOF((((float10)fVar8 * (float10)*(float *)(param_4 + 0x2c) +
                             (float10)*(float *)(param_4 + 0x24) * (float10)pfVar5[0xf]) +
                            (float10)*(float *)(param_4 + 0x34))));
      pfVar5[0xf] = ((float)GEN_TOF((((float10)fVar8 * (float10)fVar1 + (float10)pfVar5[0xf] * (float10)fVar2
                            ) + (float10)fVar3)));
      fVar8 = pfVar5[0x14];
      fVar1 = *(float *)(param_4 + 0x28);
      fVar2 = *(float *)(param_4 + 0x20);
      fVar3 = *(float *)(param_4 + 0x30);
      pfVar5[0x14] = ((float)GEN_TOF((((float10)fVar8 * (float10)*(float *)(param_4 + 0x2c) +
                             (float10)*(float *)(param_4 + 0x24) * (float10)pfVar5[0x13]) +
                            (float10)*(float *)(param_4 + 0x34))));
      pfVar5[0x13] = ((float)GEN_TOF((((float10)fVar8 * (float10)fVar1 +
                             (float10)pfVar5[0x13] * (float10)fVar2) + (float10)fVar3)));
      pfVar5 = pfVar5 + 0x20;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: FUN_00568df0 */
uint F_00568df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x568df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  uint3 uVar16;
  float fVar17;
  float fVar18;
  char * pcVar19;
  float * pfVar20;
  float fVar21;
  short sVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar21 = *(float *)(param_2 + 0x9c);
  (*(float *)(gen_frame + 0x28)) = *(float *)(param_2 + 100);
  iVar1 = *((int *)GEN_TOP((*(int *)(param_2 + 0x8c) + 8))) + *(int *)(param_2 + 0x90) * 0xc;
  uVar10 = *(ushort *)(param_2 + 0x6c);
  uVar16 = *(uint3 *)(param_2 + 0x6e);
  uVar11 = *(ushort *)(iVar1 + 8);
  uVar12 = *(ushort *)(iVar1 + 10);
  fVar18 = gen_bits2f((uint)uVar12);
  fVar17 = *(float *)(param_2 + 0x68);
  (*(float *)(gen_frame + 0x20)) = fVar18;
  (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)uVar10);
  (*(char * PTR32 *)(gen_frame + 0x2c)) = ((char *)(uintptr_t)gen_fl2bits((float)((float)(int)gen_fl2bits(fVar18))));
  uVar10 = *(ushort *)(param_2 + 0x7e);
  (*(float *)(gen_frame + 0x20)) = 0.0;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0xc)) = gen_bits2f((uint)uVar16);
  F_005ba2e0(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x24)),(uint)*(ushort *)(param_2 + 0x98),
               (float)*(ushort *)(param_2 + 0x7c),(float)uVar10,fVar21,
               (float)(int)gen_fl2bits(fVar18));
  pcVar19 = *(char * PTR32 *)(param_2 + 0xf4);
  if (*pcVar19 != '\0') {
    fVar23 = (float10)(*(float *)(gen_frame + 0x24));
    (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar19;
    pfVar20 = param_1;
    do {
      cVar9 = *pcVar19;
      iVar1 = *((int *)GEN_TOP((*(int *)(param_2 + 0x8c) + 8))) + *(int *)(param_2 + 0x90) * 0xc;
      if (((iVar1 != 0) && ('\x1f' < cVar9)) && (cVar9 < '@')) {
        if (cVar9 == ' ') {
          fVar21 = gen_bits2f((uint)*(byte *)(param_2 + 0x95));
        }
        else if ((cVar9 == ',') || (cVar9 == '.')) {
          fVar21 = gen_bits2f((uint)*(byte *)(param_2 + 0x96));
        }
        else {
          if (9 < (byte)(cVar9 - 0x30U)) goto LAB_00569133;
          fVar21 = gen_bits2f((uint)*(byte *)(param_2 + 0x94));
        }
        fVar3 = *(float *)(param_2 + 0x2c);
        sVar13 = *(short *)(iVar1 + 8);
        fVar4 = *(float *)(param_2 + 0x24);
        fVar24 = (float10)(*(float *)(gen_frame + 0x20));
        fVar2 = *(float *)(param_2 + 0x60);
        (*(float *)(gen_frame + 0x24)) = fVar21;
        sVar13 = sVar13 * ((short)cVar9 & 0xfU);
        fVar5 = *(float *)(param_2 + 0x34);
        sVar15 = (short)((int)(cVar9 + -0x20 + (cVar9 + -0x20 >> 0x1f & 0xfU)) >> 4) *
                 *(short *)(iVar1 + 10);
        *pfVar20 = ((float)GEN_TOF(((fVar24 * (float10)*(float *)(param_2 + 0x20) +
                           (float10)*(float *)(param_2 + 0x28) * fVar23) +
                          (float10)*(float *)(param_2 + 0x30))));
        pfVar20[2] = fVar2;
        pfVar20[1] = ((float)GEN_TOF((((float10)fVar3 * fVar23 + fVar24 * (float10)fVar4) + (float10)fVar5)));
        fVar2 = *(float *)(param_2 + 0x2c);
        fVar25 = (float10)(float)((float10)(int)gen_fl2bits(fVar18) + fVar23);
        fVar3 = *(float *)(param_2 + 0x24);
        fVar4 = *(float *)(param_2 + 0x34);
        fVar5 = *(float *)(param_2 + 0x28);
        fVar6 = *(float *)(param_2 + 0x20);
        fVar7 = *(float *)(param_2 + 0x30);
        pfVar20[10] = *(float *)(param_2 + 0x60);
        pfVar20[8] = ((float)GEN_TOF(((fVar24 * (float10)fVar6 + fVar25 * (float10)fVar5) + (float10)fVar7)));
        pfVar20[9] = ((float)GEN_TOF(((float10)fVar4 + ((float10)fVar3 * fVar24 + fVar25 * (float10)fVar2))));
        fVar2 = (float)((float10)uVar11 + fVar24);
        fVar3 = *(float *)(param_2 + 0x24);
        fVar25 = (float10)fVar2;
        fVar4 = *(float *)(param_2 + 0x2c);
        fVar26 = (float10)(float)((float10)(int)gen_fl2bits(fVar18) + fVar23);
        sVar22 = uVar11 + sVar13;
        fVar5 = *(float *)(param_2 + 0x34);
        sVar14 = uVar12 + sVar15;
        fVar6 = *(float *)(param_2 + 0x28);
        fVar7 = *(float *)(param_2 + 0x20);
        fVar8 = *(float *)(param_2 + 0x30);
        pfVar20[0x12] = *(float *)(param_2 + 0x60);
        pfVar20[0x10] =
             ((float)GEN_TOF(((fVar25 * (float10)fVar7 + (float10)fVar6 * fVar26) + (float10)fVar8)));
        pfVar20[0x11] =
             ((float)GEN_TOF(((fVar25 * (float10)fVar3 + fVar26 * (float10)fVar4) + (float10)fVar5)));
        fVar3 = *(float *)(param_2 + 0x2c);
        fVar4 = *(float *)(param_2 + 0x24);
        fVar25 = (float10)fVar2;
        fVar2 = *(float *)(param_2 + 0x34);
        fVar5 = *(float *)(param_2 + 0x28);
        fVar6 = *(float *)(param_2 + 0x20);
        fVar7 = *(float *)(param_2 + 0x30);
        pfVar20[0x1a] = *(float *)(param_2 + 0x60);
        pfVar20[0x18] =
             ((float)GEN_TOF((((float10)fVar5 * fVar23 + (float10)fVar6 * fVar25) + (float10)fVar7)));
        pfVar20[0x19] =
             ((float)GEN_TOF((((float10)fVar3 * fVar23 + fVar25 * (float10)fVar4) + (float10)fVar2)));
        *(short *)(pfVar20 + 4) = sVar13;
        *(short *)((int)pfVar20 + 0x12) = sVar15;
        *(short *)(pfVar20 + 0xc) = sVar13;
        *(short *)((int)pfVar20 + 0x32) = sVar14;
        *(short *)(pfVar20 + 0x14) = sVar22;
        *(short *)((int)pfVar20 + 0x52) = sVar14;
        *(short *)(pfVar20 + 0x1c) = sVar22;
        *(short *)((int)pfVar20 + 0x72) = sVar15;
        pfVar20[3] = (*(float *)(gen_frame + 0x28));
        pfVar20[6] = fVar17;
        pfVar20[7] = (*(float *)(gen_frame + 0x8));
        pfVar20[5] = (*(float *)(gen_frame + 0xc));
        pfVar20[0xb] = (*(float *)(gen_frame + 0x28));
        pfVar20[0xe] = fVar17;
        pfVar20[0xf] = (*(float *)(gen_frame + 0x8));
        pfVar20[0xd] = (*(float *)(gen_frame + 0xc));
        pfVar20[0x13] = (*(float *)(gen_frame + 0x28));
        pfVar20[0x16] = fVar17;
        pfVar20[0x17] = (*(float *)(gen_frame + 0x8));
        pfVar20[0x15] = (*(float *)(gen_frame + 0xc));
        pfVar20[0x1b] = (*(float *)(gen_frame + 0x28));
        pfVar20[0x1e] = fVar17;
        pfVar20[0x1f] = (*(float *)(gen_frame + 0x8));
        pfVar20[0x1d] = (*(float *)(gen_frame + 0xc));
        (*(float *)(gen_frame + 0x20)) = (float)(fVar24 + (float10)(int)gen_fl2bits(fVar21));
      }
LAB_00569133: ;
      pcVar19 = pcVar19 + 1;
      pfVar20 = pfVar20 + 0x20;
      (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar19;
    } while (*pcVar19 != '\0');
  }
  return (uint)pcVar19;
}

/* ref: FUN_00569160 */
uint F_00569160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x569160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_1;
  iVar1 = (int)this + 4;
  *(int *)((int)this + 0x50) = (int)this + 0x20;
  *(int *)((int)this + 0x48) = (int)this + 8;
  iVar2 = (int)this + 0x14;
  *(int *)((int)this + 0x40) = iVar1;
  *(int *)((int)this + 0x44) = iVar1;
  *(int *)((int)this + 0x60) = iVar1;
  *(int *)((int)this + 100) = iVar1;
  *(int *)((int)this + 0x54) = (int)this + 0x2c;
  *(int *)((int)this + 0x4c) = iVar2;
  *(int *)((int)this + 0x58) = iVar2;
  *(int *)((int)this + 0x5c) = iVar2;
  *(uint *)((int)this + 0x68) = (int)this + 0x38U;
  return (int)this + 0x38U;
}

/* ref: FUN_005691b0 */
byte F_005691b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5691b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x4)),5,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x73686364;
  uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitiveUIVS.shcd",0,0,0);
  *(uint *)((int)this + 0x10) = uVar2;
  if (uVar2 != 0) {
    uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitiveUIPS.shcd",0,0,0);
    *(uint *)((int)this + 0x30) = uVar2;
    if (uVar2 != 0) {
      uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitiveUIVS.shcd",0,0,0);
      *(uint *)((int)this + 0x14) = uVar2;
      if (uVar2 != 0) {
        uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitiveUIMaskPS.shcd",0,0,0);
        *(uint *)((int)this + 0x34) = uVar2;
        if (uVar2 != 0) {
          uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitiveUIVS.shcd",0,0,0);
          *(uint *)((int)this + 0x18) = uVar2;
          if (uVar2 != 0) {
            uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitiveUIAreaMapPS.shcd",0,0,0);
            *(uint *)((int)this + 0x38) = uVar2;
            if (uVar2 != 0) {
              uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/FontVS.shcd",0,0,0);
              *(uint *)((int)this + 0x1c) = uVar2;
              if (uVar2 != 0) {
                uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/FontPS.shcd",0,0,0);
                *(uint *)((int)this + 0x3c) = uVar2;
                if (uVar2 != 0) {
                  uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/FontEdgeVS.shcd",0,0,0);
                  *(uint *)((int)this + 0x20) = uVar2;
                  if (uVar2 != 0) {
                    uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/FontEdgePS.shcd",0,0,0);
                    *(uint *)((int)this + 0x40) = uVar2;
                    if (uVar2 != 0) {
                      uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/FontGlareVS.shcd",0,0,0);
                      *(uint *)((int)this + 0x24) = uVar2;
                      if (uVar2 != 0) {
                        uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/FontGlarePS.shcd",0,0,0);
                        *(uint *)((int)this + 0x44) = uVar2;
                        if (uVar2 != 0) {
                          uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/FontHighlightVS.shcd",0
                                               ,0,0);
                          *(uint *)((int)this + 0x28) = uVar2;
                          if (uVar2 != 0) {
                            uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/FontHighlightPS.shcd"
                                                 ,0,0,0);
                            *(uint *)((int)this + 0x48) = uVar2;
                            if (uVar2 != 0) {
                              uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/FontEmbossVS.shcd",
                                                   0,0,0);
                              *(uint *)((int)this + 0x2c) = uVar2;
                              if (uVar2 != 0) {
                                uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),
                                                     "shader/shcd/FontEmbossPS.shcd",0,0,0);
                                *(uint *)((int)this + 0x4c) = uVar2;
                                if (uVar2 != 0) {
                                  piVar3 = (int *)((int)this + 0x50);
                                  iVar4 = 8;
                                  do {
                                    piVar1 = *(int * PTR32 *)(piVar3[-0x10] + 0x98);
                                    if (piVar1 != (int *)0x0) {
                                      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                    }
                                    piVar1 = (int *)*piVar3;
                                    if (piVar1 != (int *)0x0) {
                                      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
                                    }
                                    *piVar3 = *(int *)(piVar3[-0x10] + 0x98);
                                    piVar1 = *(int * PTR32 *)(piVar3[-8] + 0x9c);
                                    if (piVar1 != (int *)0x0) {
                                      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                    }
                                    piVar1 = (int *)piVar3[8];
                                    if (piVar1 != (int *)0x0) {
                                      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
                                    }
                                    piVar3[8] = *(int *)(piVar3[-8] + 0x9c);
                                    piVar3 = piVar3 + 1;
                                    iVar4 = iVar4 + -1;
                                  } while (iVar4 != 0);
                                  return 1;
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
  return 0;
}

/* ref: FUN_005694a0 */
uint F_005694a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5694a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)((int)this + 0xa8);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)((int)this + 0xa8);
  pvVar1 = *(undefined * PTR32 *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)((int)this + 0xb4);
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0x148) = *(undefined4 *)((int)this + 0xc0);
  *(undefined4 *)((int)this + 0x14c) = *(undefined4 *)((int)this + 0xc0);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)((int)this + 0xac);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)((int)this + 0xac);
  *(undefined4 *)((int)this + 0x150) = *(undefined4 *)((int)this + 0xc4);
  *(undefined4 *)((int)this + 0x154) = *(undefined4 *)((int)this + 200);
  *(undefined4 *)((int)this + 0x158) = *(undefined4 *)((int)this + 0xcc);
  *(undefined4 *)((int)this + 0x15c) = *(undefined4 *)((int)this + 0xd0);
  *(undefined4 *)((int)this + 0x160) = *(undefined4 *)((int)this + 0xd4);
  *(undefined4 *)((int)this + 0x164) = *(undefined4 *)((int)this + 0xd8);
  *(undefined4 *)((int)this + 0x168) = *(undefined4 *)((int)this + 0xdc);
  *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)((int)this + 0xdc);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)((int)this + 0xb4);
  *(undefined4 *)((int)this + 0x170) = *(undefined4 *)((int)this + 0xe0);
  *(undefined4 *)((int)this + 0x174) = *(undefined4 *)((int)this + 0xe4);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)((int)this + 0xb0);
  *(undefined4 *)((int)this + 0x138) = *(undefined4 *)((int)this + 0xb0);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0x178) = *(undefined4 *)((int)this + 0xe8);
  *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)((int)this + 0xec);
  *(undefined * PTR32 *)((int)this + 0x108) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x10c) = pvVar1;
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0xbc);
  *(undefined * PTR32 *)((int)this + 0x128) = pvVar1;
  *(undefined * PTR32 *)((int)this + 300) = pvVar1;
  *(undefined4 *)((int)this + 0x144) = *(undefined4 *)((int)this + 0xbc);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)this + 0xf0);
  *(undefined4 *)((int)this + 0x184) = *(undefined4 *)((int)this + 0xf4);
  puVar7 = (undefined4 *)F_004d9920(pvVar1,0,0,2);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xa8),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = uVar2;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xac),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = uVar2;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = uVar2;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xac) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xb0),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = uVar2;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = uVar2;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = uVar2;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xb4),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = uVar2;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xb4) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xb8),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = uVar2;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = uVar2;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = uVar2;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xbc),0,0,2);
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096898)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096894)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1096898));
    puVar7[1] = uVar3;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
    puVar7[4] = uVar6;
    puVar7[5] = uVar3;
    puVar7[6] = uVar2;
    puVar7[7] = 0;
    puVar7[8] = uVar6;
    puVar7[9] = uVar3;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbc) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xc0),0,0,2);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = GEN_FLT_TO(puVar7[0xf], REFG(float, 0x1087f04));
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc0) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xc4),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = uVar2;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 200),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = uVar2;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = uVar2;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 200) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xcc),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = uVar2;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = uVar2;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = uVar2;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xcc) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xd0),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = uVar2;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xd4),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = uVar2;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = uVar2;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = uVar2;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xd8),0,0,2);
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096898)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096894)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[3] = 0;
    puVar7[7] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *puVar7 = uVar6;
    puVar7[1] = uVar3;
    puVar7[2] = uVar2;
    puVar7[4] = uVar6;
    puVar7[5] = uVar3;
    puVar7[6] = uVar2;
    puVar7[8] = uVar6;
    puVar7[9] = uVar3;
    puVar7[10] = uVar2;
    puVar7[0xf] = uVar5;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd8) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xdc),0,0,2);
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xe0),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[5] = uVar2;
    puVar7[10] = uVar2;
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xe0) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xe4),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[4] = uVar2;
    puVar7[8] = uVar2;
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xe4) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xe8),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = GEN_FLT_TO(puVar7[1], REFG(float, 0x1087f04));
    puVar7[5] = uVar2;
    puVar7[9] = uVar2;
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    *puVar7 = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xe8) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xec),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[2] = GEN_FLT_TO(puVar7[2], REFG(float, 0x1087f04));
    puVar7[6] = uVar2;
    puVar7[10] = uVar2;
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xec) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xf0),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[3] = GEN_FLT_TO(puVar7[3], REFG(float, 0x1087f04));
    puVar7[7] = uVar2;
    puVar7[0xb] = uVar2;
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xf0) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xf4),0,0,2);
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096898)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096894)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1096898));
    puVar7[1] = uVar3;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
    puVar7[4] = uVar6;
    puVar7[5] = uVar3;
    puVar7[6] = uVar2;
    puVar7[7] = 0;
    puVar7[8] = uVar6;
    puVar7[9] = uVar3;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = uVar6;
    puVar7[0xd] = uVar3;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xf4) + 0x24))) = 0;
  pvVar1 = *(undefined * PTR32 *)((int)this + 0xf8);
  uVar2 = *(undefined4 *)((int)this + 0x100);
  uVar3 = *(undefined4 *)((int)this + 0xfc);
  *(undefined * PTR32 *)((int)this + 0x188) = pvVar1;
  *(undefined4 *)((int)this + 0x18c) = uVar3;
  *(undefined * PTR32 *)((int)this + 400) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x194) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x198) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x19c) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x1a0) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x1a4) = pvVar1;
  *(undefined4 *)((int)this + 0x1a8) = uVar2;
  *(undefined4 *)((int)this + 0x1ac) = *(undefined4 *)((int)this + 0x104);
  *(undefined4 *)((int)this + 0x1b0) = uVar2;
  *(undefined4 *)((int)this + 0x1b4) = uVar2;
  *(undefined4 *)((int)this + 0x1b8) = uVar2;
  *(undefined4 *)((int)this + 0x1bc) = uVar2;
  *(undefined4 *)((int)this + 0x1c0) = uVar2;
  *(undefined4 *)((int)this + 0x1c4) = uVar2;
  *(undefined * PTR32 *)((int)this + 0x1c8) = pvVar1;
  *(undefined4 *)((int)this + 0x1cc) = uVar3;
  *(undefined * PTR32 *)((int)this + 0x1d0) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x1d4) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x1d8) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x1dc) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x1e0) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x1e4) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x1e8) = pvVar1;
  *(undefined4 *)((int)this + 0x1ec) = uVar3;
  *(undefined * PTR32 *)((int)this + 0x1f0) = pvVar1;
  *(undefined * PTR32 *)((int)this + 500) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x1f8) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x1fc) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x200) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x204) = pvVar1;
  puVar7 = (undefined4 *)F_004d9920(pvVar1,0,0,2);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xf8) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xfc),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = uVar2;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xfc) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x100),0,0,2);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = GEN_FLT_TO(puVar7[3], REFG(float, 0x1087f04));
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x100) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x104),0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = uVar2;
    puVar7[2] = uVar2;
    puVar7[3] = uVar2;
    uVar4 = *(uint *)((int)this + 0x104);
    *(undefined4 *)(uVar4 + 0x24) = 0;
    return uVar4;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x104) + 0x24))) = 0;
  return 0;
}

/* ref: FUN_0056a3d0 */
uint F_0056a3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x56a3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  uint uVar1;
  
  uVar1 = F_00565340((undefined *)((int)this + 0x23c),param_1,param_2,param_4,this,param_3,0);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x14) =
         *(uint *)(uVar1 + 0x14) ^ ((param_5 & 0xff) << 0x16 ^ *(uint *)(uVar1 + 0x14)) & 0x400000;
  }
  return uVar1;
}

/* ref: FUN_0056a410 */
uint F_0056a410(unsigned int gen_a0)
{
  GEN_ENTER(0x56a410u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),param_1);
  return 0x1379720;
}

/* ref: FUN_0056a440 */
uint F_0056a440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56a440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  undefined * pvVar2;
  undefined1 * puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  this_00 = (undefined *)((int)this + 0x2dc);
  uVar7 = 1;
  if (*(char *)*param_1 == '\0') {
    iVar4 = (int)this + 0x4d4;
    puVar3 = ((undefined1 *)(gen_frame + 0x54));
    pvVar2 = this_00;
    this_01 = (undefined *)F_0042cd30((undefined *)((int)this + 0x42c),((undefined1 *)(gen_frame + 0x0)),(int)this + 0x480);
    uVar1 = F_0042cd30(this_01,puVar3,iVar4);
    F_00a27140(*(undefined * PTR32 *)((int)this + 0x18),uVar1,pvVar2,uVar7);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  }
  else {
    F_00a27140(*(undefined * PTR32 *)((int)this + 0x18),(int)this + 0x42c,this_00,1);
    F_0042e360(this_00,param_1);
    F_00a27140(*(undefined * PTR32 *)((int)this + 0x18),(int)this + 0x4d4,this_00,0);
  }
  if (*(char *)((int)this + 0x7d8) < '\0') {
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 1;
    uVar7 = 1;
    pvVar2 = (undefined *)F_0042b820(this_00);
    F_0042a9a0(pvVar2,uVar7,uVar5,uVar6,uVar8);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)this_00;
}

/* ref: FUN_0056a520 */
uint F_0056a520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56a520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  this_00 = (undefined *)((int)this + 0x57c);
  if (*(char *)*param_1 == '\0') {
    iVar7 = (int)this + 0x4d4;
    puVar3 = ((undefined1 *)(gen_frame + 0x54));
    pvVar1 = (undefined *)F_0042cd30((undefined *)((int)this + 0x42c),((undefined1 *)(gen_frame + 0x0)),(int)this + 0x480);
    uVar2 = F_0042cd30(pvVar1,puVar3,iVar7);
    F_0042ccf0(this_00,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
  }
  else {
    iVar7 = (int)this + 0x4d4;
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
    pvVar1 = (undefined *)F_0042cd30((undefined *)((int)this + 0x42c),((undefined1 *)(gen_frame + 0x54)),param_1);
    uVar2 = F_0042cd30(pvVar1,puVar3,iVar7);
    F_0042ccf0(this_00,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
    puVar3 = ((undefined1 *)(gen_frame + 0x54));
  }
  F_0042c880(puVar3);
  if (*(char *)((int)this + 0x7d8) < '\0') {
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 1;
    pvVar1 = (undefined *)F_0042b820(this_00);
    F_0042a9a0(pvVar1,uVar4,uVar5,uVar6,uVar8);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)this_00;
}

/* ref: FUN_0056a610 */
uint F_0056a610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x56a610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint in_EAX = 0;
  uint uVar1;
  uint uVar2;
  
  if (0 < param_2) {
    uVar1 = F_0055c170(param_4,0xffffffff);
    uVar2 = F_0055c170(param_5,0xffffffff);
    in_EAX = F_0055c170(param_1,(param_2 - uVar1) - uVar2);
  }
  if (0 < param_3) {
    uVar1 = F_0042a970(param_4);
    uVar2 = F_0042a970(param_5);
    in_EAX = F_00a26c30(*(undefined * PTR32 *)((int)this + 0x18),param_1,(param_3 - uVar1) - uVar2);
  }
  return in_EAX;
}

/* ref: FUN_0056a680 */
uint F_0056a680(unsigned int gen_a0)
{
  GEN_ENTER(0x56a680u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488338) + 8) + 0x18))))(*(int * PTR32 *)(REFG(int, 0x1488338) + 8),param_1,0);
  return uVar1;
}

/* ref: FUN_0056a6e0 */
byte F_0056a6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56a6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  char cVar3;
  
  if ((*(short *)((int)this + 0x7c8) == 0) && (*(char *)((int)this + 0x7cb) == '\0')) {
    if (0x1f < param_1) {
      bVar2 = F_0055c370(this,param_1);
      if (bVar2 != 0) {
        cVar3 = (char)param_1;
        uVar1 = param_1;
        while (cVar3 != '\0') {
          F_0042d160((undefined *)((int)this + 0x80),uVar1);
          cVar3 = (char)(uVar1 >> 8);
          uVar1 = uVar1 >> 8;
        }
      }
      return 1;
    }
  }
  else {
    *(undefined1 *)((int)this + 0x7cb) = 0;
  }
  return 0;
}

/* ref: FUN_0056a740 */
uint F_0056a740(unsigned int gen_a0)
{
  GEN_ENTER(0x56a740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 4);
  if (iVar1 == 0) {
    if (*(int *)(in_ecx + 8) != 0) {
      return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + 0xfc)));
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)(in_ecx + 8) != 0) {
      return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + 0x18)));
    }
  }
  else if (iVar1 == 2) {
    return *(uint *)(in_ecx + 8);
  }
  return 0;
}

/* ref: FUN_0056a770 */
uint F_0056a770(unsigned int gen_a0)
{
  GEN_ENTER(0x56a770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 4);
  if (iVar1 == 0) {
    if (*(int *)(in_ecx + 8) != 0) {
      return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + 0xfc)));
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)(in_ecx + 8) != 0) {
      return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + 0x18)));
    }
  }
  else if (iVar1 == 2) {
    return *(uint *)(in_ecx + 8);
  }
  return 0;
}

/* ref: FUN_0056a7a0 */
uint F_0056a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x56a7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 4);
  if (iVar1 == 0) {
    if (*(int *)(in_ecx + 8) == 0) {
      return 1;
    }
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 8) + 0xfc)));
  }
  else if (iVar1 == 1) {
    if (*(int *)(in_ecx + 8) == 0) {
      return 1;
    }
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 8) + 0x18)));
  }
  else {
    if (iVar1 != 2) {
      return 1;
    }
    iVar1 = *(int *)(in_ecx + 8);
  }
  if (iVar1 == 0) {
    return 1;
  }
  return *(uint *)(iVar1 + 0x18);
}

/* ref: FUN_0056a7e0 */
ushort F_0056a7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x56a7e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 4);
  if (iVar1 == 0) {
    if (*(int *)(in_ecx + 8) == 0) {
      return 1;
    }
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 8) + 0xfc)));
  }
  else if (iVar1 == 1) {
    if (*(int *)(in_ecx + 8) == 0) {
      return 1;
    }
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 8) + 0x18)));
  }
  else {
    if (iVar1 != 2) {
      return 1;
    }
    iVar1 = *(int *)(in_ecx + 8);
  }
  if (iVar1 == 0) {
    return 1;
  }
  return (ushort)*(undefined4 *)(iVar1 + 0x1c);
}

/* ref: FUN_0056a8a0 */
unsigned int F_0056a8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x56a8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_0056a940 */
uint F_0056a940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x56a940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  uint * puVar5;
  
  if (param_4 == 0) {
    puVar1 = param_3;
    puVar5 = param_3;
    if (param_2 != 0) {
      puVar5 = (uint *)(uint)*(ushort *)(param_2 + 0x7c);
      puVar1 = (uint *)(uint)*(ushort *)(param_2 + 0x7e);
    }
    uVar2 = F_0055d500(param_1,puVar5,puVar1);
    *param_3 = uVar2;
    return uVar2;
  }
  piVar3 = (int *)0x0;
  if ((int *)(uint)*(ushort *)((int)this + 0x12) != (int *)0x0) {
    piVar4 = *(int * PTR32 *)((int)this + 4);
    while (*piVar4 != param_4) {
      piVar3 = (int *)((int)piVar3 + 1);
      piVar4 = piVar4 + 3;
      if ((int *)(uint)*(ushort *)((int)this + 0x12) <= piVar3) {
        return (uint)piVar3;
      }
    }
    piVar3 = *(int * PTR32 *)((int)this + 4) + (int)((int)(uintptr_t)piVar3) * 3;
    *param_3 = (uint)piVar3;
  }
  return (uint)piVar3;
}

/* ref: FUN_0056a9b0 */
uint F_0056a9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56a9b0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * pfVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x88);
  if (((uVar6 & 1) == 0) && ((param_2 == 0 || ((*(byte *)(param_2 + 0x88) & 2) == 0)))) {
    *(uint *)(param_1 + 0x88) = uVar6 & 0xfffffffd;
    return uVar6 & 0xfffffffd;
  }
  uVar3 = uVar6 & 0xfffffffe | 2;
  *(uint *)(param_1 + 0x88) = uVar3;
  fVar2 = REFG(float, 0x1087f04);
  if ((uVar6 & 4) == 0) {
    if (param_2 == 0) {
      *(float *)(param_1 + 0x20) = GEN_FLT_TO(*(float *)(param_1 + 0x20), REFG(float, 0x1087f04));
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(float *)(param_1 + 0x2c) = fVar2;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x3c);
      return uVar3;
    }
    if ((*(byte *)(param_2 + 0x88) & 4) == 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      uVar6 = *(uint *)(param_2 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar6;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
      *(float *)(param_1 + 0x30) =
           ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x38) + (float10)*(float *)(param_1 + 0x30))));
      *(float *)(param_1 + 0x34) =
           ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x3c) + (float10)*(float *)(param_1 + 0x34))));
      return uVar6;
    }
  }
  pfVar1 = (float *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x88) = uVar6 & 0xfffffffe | 6;
  uVar6 = *(uint *)(param_1 + 0x74) ^ REFG(uint, 0x10920d0);
  uVar3 = *(uint *)(param_1 + 0x78) ^ REFG(uint, 0x10920d0);
  *pfVar1 = fVar2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(float *)(param_1 + 0x2c) = fVar2;
  *(uint *)(param_1 + 0x30) = uVar6;
  *(uint *)(param_1 + 0x34) = uVar3;
  fVar4 = (float10)*(float *)(param_1 + 0x40);
  *pfVar1 = (float)(fVar4 * (float10)*pfVar1);
  fVar5 = (float10)*(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x24) = ((float)GEN_TOF((fVar5 * (float10)*(float *)(param_1 + 0x24))));
  *(float *)(param_1 + 0x28) = ((float)GEN_TOF((fVar4 * (float10)*(float *)(param_1 + 0x28))));
  *(float *)(param_1 + 0x2c) = ((float)GEN_TOF((fVar5 * (float10)*(float *)(param_1 + 0x2c))));
  *(float *)(param_1 + 0x30) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x30) * fVar4)));
  *(float *)(param_1 + 0x34) = ((float)GEN_TOF((fVar5 * (float10)*(float *)(param_1 + 0x34))));
  uVar6 = F_005b7670(pfVar1,*(float *)(param_1 + 0x48));
  *(float *)(param_1 + 0x30) =
       ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x38) +
                               (float10)*(float *)(param_1 + 0x74)))) +
              (float10)*(float *)(param_1 + 0x30))));
  *(float *)(param_1 + 0x34) =
       ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x3c) +
                               (float10)*(float *)(param_1 + 0x78)))) +
              (float10)*(float *)(param_1 + 0x34))));
  if (param_2 != 0) {
    uVar6 = F_00560c80(pfVar1,(uint)pfVar1,param_2 + 0x20);
  }
  return uVar6;
}

/* ref: FUN_0056ab60 */
uint F_0056ab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56ab60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  this_00 = (undefined *)F_0055d920(this,param_2);
  F_00568010(this_00,uVar1);
  return param_1;
}

/* ref: FUN_0056ab80 */
uint F_0056ab80(unsigned int gen_a0)
{
  GEN_ENTER(0x56ab80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  uVar4 = F_00404270();
  puVar5 = (undefined4 *)F_00406bd0(0x6c,0,uVar4,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c08));
    puVar5[1] = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
    puVar5[2] = (*(undefined * PTR32 (*)[5])REFP(0x10a0b90));
    puVar5[5] = (*(undefined * PTR32 (*)[5])REFP(0x10a0ba8));
    puVar5[8] = (*(undefined * PTR32 (*)[5])REFP(0x10a0bc0));
    puVar5[0xb] = (*(undefined * PTR32 (*)[5])REFP(0x10a0bd8));
    puVar5[0xe] = (*(undefined * PTR32 (*)[5])REFP(0x10a0bf0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x34) = puVar5;
  uVar3 = *(undefined4 *)(REFG(int, 0x1379860) + 4);
  puVar5[6] = *(undefined4 *)(REFG(int, 0x1379860) + 8);
  puVar5[3] = uVar3;
  puVar5[9] = uVar3;
  puVar5[0xc] = uVar3;
  puVar1 = puVar5 + 1;
  puVar5[0x14] = puVar5 + 8;
  puVar5[0x12] = puVar5 + 2;
  puVar2 = puVar5 + 5;
  puVar5[0x10] = puVar1;
  puVar5[0x11] = puVar1;
  puVar5[0x18] = puVar1;
  puVar5[0x19] = puVar1;
  puVar5[0x15] = puVar5 + 0xb;
  puVar5[0x13] = puVar2;
  puVar5[0x16] = puVar2;
  puVar5[0x17] = puVar2;
  puVar5[0x1a] = puVar5 + 0xe;
  return (uint)puVar5;
}

/* ref: Component::GUI2::AtkUnitBase::vf30 */
unsigned int F_0056ac30(unsigned int gen_a0)
{
  GEN_ENTER(0x56ac30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if ((((((byte)this[0xf9] & 1) != 0) && (((byte)this[0xfa] & 4) != 0)) &&
      (((byte)this[0xfb] & 0x20) == 0)) &&
     (((((byte)this[0x80] & 1) != 0 && (((byte)this[0x80] & 4) != 0)) &&
      ((this[0x3c] == (undefined1)0x2 &&
       ((*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP((*(int *)(this + 0x2c) + 0xc))),
       ((int *)GEN_TOP((*(int *)(this + 0x2c) + 0xc))) != (int *)0x0)))))) {
    this_00 = *(undefined * PTR32 *)(this + 0xac);
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)(this + 0x90);
    }
    piVar2 = (int *)F_00568010(this_00,((undefined1 *)(gen_frame + 0x0)));
    iVar9 = piVar2[1];
    iVar8 = *piVar2;
    iVar5 = piVar2[2];
    iVar3 = piVar2[3];
    (*(int *)(gen_frame + 0x14)) = iVar9;
    iVar6 = iVar8;
    if (*(undefined * PTR32 *)(this + 0x94) != (undefined *)0x0) {
      piVar2 = (int *)F_00568010(*(undefined * PTR32 *)(this + 0x94),((undefined1 *)(gen_frame + 0x0)));
      iVar9 = piVar2[1];
      iVar5 = piVar2[2];
      iVar3 = piVar2[3];
      iVar6 = *piVar2;
    }
    iVar8 = iVar6 - iVar8;
    (*(float *)(gen_frame + 0x2c)) = gen_bits2f(iVar5 - iVar6);
    (*(float *)(gen_frame + 0x2c)) = gen_bits2f(iVar3 - iVar9);
    iVar4 = *(*(int * PTR32 *)(gen_frame + 0x20)) / 3;
    iVar7 = *(*(int * PTR32 *)(gen_frame + 0x20)) % 3;
    fVar12 = (float)iVar8;
    (*(float *)(gen_frame + 0x30)) = fVar12;
    fVar13 = (float)(iVar9 - (*(int *)(gen_frame + 0x14)));
    (*(float *)(gen_frame + 0x24)) = fVar13;
    fVar1 = ((float)GEN_TOF(((float10)(iVar5 - iVar6) + (float10)iVar8)));
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)gen_fl2bits(fVar12) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x38)) = gen_bits2f((uint)gen_fl2bits(fVar13) ^ REFG(uint, 0x10920d0));
    fVar12 = ((float)GEN_TOF(((float10)(iVar3 - iVar9) + (float10)(iVar9 - (*(int *)(gen_frame + 0x14))))));
    (*(float *)(gen_frame + 0x2c)) = fVar12;
    if (iVar7 == 2) {
      (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
    }
    else if (iVar7 == 1) {
      (*(float *)(gen_frame + 0x34)) = (float)(-(float10)fVar1 * (float10)REFG(double, 0x1088108));
    }
    if (iVar4 == 2) {
      (*(float *)(gen_frame + 0x38)) = gen_bits2f((uint)gen_fl2bits(fVar12) ^ REFG(uint, 0x10920d0));
    }
    else if (iVar4 == 1) {
      (*(float *)(gen_frame + 0x38)) = (float)(-(float10)fVar12 * (float10)REFG(double, 0x1088108));
    }
    fVar10 = (float10)*(int *)(REFG(int, 0x1379860) + 0x238);
    if (*(int *)(REFG(int, 0x1379860) + 0x238) < 0) {
      fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar11 = (float10)*(int *)(REFG(int, 0x1379860) + 0x234);
    if (*(int *)(REFG(int, 0x1379860) + 0x234) < 0) {
      fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x2c))
              ((*(undefined * PTR32 *)(gen_frame + 0x28)),(int)((fVar11 * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x20))[1])))) /
                              (float10)*(double *)&REFG(undefined, 0x1088118) + (float10)(*(float *)(gen_frame + 0x34))) & 0xffff,
               (int)((float10)(*(float *)(gen_frame + 0x38)) +
                    (fVar10 * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x20))[2])))) / (float10)*(double *)&REFG(undefined, 0x1088118))
               & 0xffff);
  }
  return 0;
}

/* ref: FUN_0056ae10 */
unsigned int F_0056ae10(unsigned int gen_a0)
{
  GEN_ENTER(0x56ae10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int * piVar5;
  int iVar6;
  undefined * this_00;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if ((((*(byte *)((int)this + 0xf9) & 1) != 0) && ((*(byte *)((int)this + 0xfa) & 4) != 0)) &&
     ((*(byte *)((int)this + 0xfb) & 0x20) == 0)) {
    fVar12 = (float10)*(int *)(REFG(int, 0x1379860) + 0x234);
    if (*(int *)(REFG(int, 0x1379860) + 0x234) < 0) {
      fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0x48)) = (float)fVar12;
    fVar13 = (float10)*(int *)(REFG(int, 0x1379860) + 0x238);
    if (*(int *)(REFG(int, 0x1379860) + 0x238) < 0) {
      fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0x44)) = (float)fVar13;
    this_00 = *(undefined * PTR32 *)((int)this + 0xac);
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(float)fVar12 / (float10)*(double *)&REFG(undefined, 0x10944e0));
    (*(float *)(gen_frame + 0x2c)) = (float)((float10)(float)fVar13 / (float10)*(double *)&REFG(undefined, 0x10944e0));
    if (this_00 == (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)((int)this + 0x90);
    }
    piVar5 = (int *)F_00568010(this_00,((undefined1 *)(gen_frame + 0x8)));
    iVar10 = *piVar5;
    iVar9 = piVar5[1];
    iVar7 = piVar5[2];
    iVar6 = piVar5[3];
    (*(int *)(gen_frame + 0x1c)) = iVar9;
    (*(int *)(gen_frame + 0x18)) = iVar10;
    iVar8 = iVar10;
    if (*(undefined * PTR32 *)((int)this + 0x94) != (undefined *)0x0) {
      piVar5 = (int *)F_00568010(*(undefined * PTR32 *)((int)this + 0x94),((undefined1 *)(gen_frame + 0x8)));
      iVar9 = piVar5[1];
      iVar7 = piVar5[2];
      iVar6 = piVar5[3];
      iVar8 = *piVar5;
    }
    iVar10 = iVar8 - iVar10;
    (*(float *)(gen_frame + 0x40)) = gen_bits2f(iVar10);
    iVar11 = iVar9 - (*(int *)(gen_frame + 0x1c));
    (*(float *)(gen_frame + 0x3c)) = (float)iVar10;
    (*(float *)(gen_frame + 0x40)) = gen_bits2f(iVar11);
    (*(float *)(gen_frame + 0x40)) = gen_bits2f(iVar7 - iVar8);
    (*(float *)(gen_frame + 0x38)) = (float)iVar11;
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f(iVar6 - iVar9);
    fVar1 = ((float)GEN_TOF(((float10)iVar10 + (float10)(iVar7 - iVar8))));
    (*(float *)(gen_frame + 0x40)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)iVar11 + (float10)(iVar6 - iVar9))));
    (*(float *)(gen_frame + 0x3c)) = fVar2;
    fVar3 = (float)((float10)(*(int *)(gen_frame + 0x18)) + (float10)iVar10);
    (*(float *)(gen_frame + 0x38)) = fVar3;
    fVar4 = (float)((float10)iVar11 + (float10)(*(int *)(gen_frame + 0x1c)));
    (*(float *)(gen_frame + 0x34)) = fVar4;
    fVar12 = (float10)fVar1;
    fVar13 = (float10)fVar3;
    fVar1 = (float)(fVar13 + fVar12 * (float10)REFG(double, 0x1088108));
    (*(float *)(gen_frame + 0x38)) = fVar1;
    fVar14 = (float10)fVar2;
    fVar15 = (float10)fVar4;
    fVar2 = (float)(fVar15 + fVar14 * (float10)REFG(double, 0x1088108));
    (*(float *)(gen_frame + 0x34)) = fVar2;
    fVar16 = (float10)fVar1;
    if (fVar16 < (float10)(*(float *)(gen_frame + 0x30))) {
      iVar10 = 0;
      (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((fVar13 / (float10)(*(float *)(gen_frame + 0x48))) * (float10)*(double *)&REFG(undefined, 0x1088118))));
    }
    else {
      if (fVar16 < (float10)(*(float *)(gen_frame + 0x30)) * (float10)*(double *)&REFG(undefined, 0x1092098)) {
        iVar10 = 1;
        fVar16 = fVar16 / (float10)(*(float *)(gen_frame + 0x48));
      }
      else {
        iVar10 = 2;
        fVar16 = (fVar13 + fVar12) / (float10)(*(float *)(gen_frame + 0x48));
      }
      (*(float *)(gen_frame + 0x48)) = (float)(fVar16 * (float10)*(double *)&REFG(undefined, 0x1088118));
    }
    fVar13 = (float10)*(double *)&REFG(undefined, 0x1088118);
    fVar12 = (float10)fVar2;
    if (fVar12 < (float10)(*(float *)(gen_frame + 0x2c))) {
      iVar9 = 0;
      fVar15 = fVar15 / (float10)(*(float *)(gen_frame + 0x44));
    }
    else if (fVar12 < (float10)(*(float *)(gen_frame + 0x2c)) * (float10)*(double *)&REFG(undefined, 0x1092098)) {
      iVar9 = 3;
      fVar15 = fVar12 / (float10)(*(float *)(gen_frame + 0x44));
    }
    else {
      iVar9 = 6;
      fVar15 = (fVar15 + fVar14) / (float10)(*(float *)(gen_frame + 0x44));
    }
    (*(float *)(gen_frame + 0x44)) = (float)(fVar13 * fVar15);
    if ((((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x80) & 1) != 0) &&
        ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x80) & 4) != 0)) && (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x3c) == '\x02')
       ) {
      iVar7 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x2c);
      if ((int *)(iVar7 + 0xc) != (int *)0x0) {
        *(float *)(iVar7 + 0x10) = (*(float *)(gen_frame + 0x48));
        *(int *)(iVar7 + 0xc) = iVar9 + iVar10;
        *(float *)(iVar7 + 0x14) = (float)(fVar13 * fVar15);
      }
    }
  }
  return 0;
}

/* ref: FUN_0056b050 */
uint F_0056b050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x56b050u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  int * piVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  undefined * pvVar15;
  short sVar16;
  float fVar17;
  float fVar18;
  
  *(*(short * PTR32 *)&gen_args[1]) = (ushort)(*(uint *)&gen_args[3]);
  *(*(short * PTR32 *)&gen_args[2]) = (short)(*(uint *)&gen_args[4]);
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf9))) & 1) == 0) || ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfa))) & 4) == 0)) ||
     ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfb))) & 0x20) != 0)) {
    return 0;
  }
  uVar13 = *(uint *)(REFG(int, 0x1379860) + 0x234);
  uVar1 = *(uint *)(REFG(int, 0x1379860) + 0x238);
  (*(uint *)(gen_frame + 0x40)) = uVar1 & 0xffff;
  sVar16 = 0;
  (*(uint *)(gen_frame + 0x38)) = uVar13 & 0xffff;
  (*(uint *)&gen_args[4]) = 0;
  (*(uint *)(gen_frame + 0x48)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  if ((char)(*(uint *)&gen_args[5]) != '\0') {
    sVar16 = 0x5f;
    if ((*((byte *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0x1b0))) & 0x80) != 0) {
      sVar16 = 0x55;
    }
    uVar7 = ((int)(short)uVar13 * (int)sVar16) / 100;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x40)) + 0)) = (short)uVar1;
    uVar8 = ((int)(short)(*(uint *)(gen_frame + 0x40)) * (int)sVar16) / 100;
    (*(uint *)(gen_frame + 0x40)) = uVar8 & 0xffff;
    (*(uint *)(gen_frame + 0x38)) = uVar7 & 0xffff;
    sVar16 = (short)(uVar13 - (int)(short)uVar7 >> 1);
    (*(uint *)(gen_frame + 0x3c)) = uVar1 - (int)(short)uVar8 >> 1 & 0xffff;
  }
  uVar13 = (*(uint *)(gen_frame + 0x3c));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[5]),&(*(uint *)&gen_args[3]),1);
  pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x44));
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x94) == 0) {
    sVar12 = (short)(*(uint *)&gen_args[4]);
    sVar9 = (short)(*(uint *)(gen_frame + 0x48));
  }
  else {
    (*(uint *)&gen_args[4]) = 0;
    (*(uint *)(gen_frame + 0x48)) = 0;
    if (*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0xac) == (undefined *)0x0) {
      piVar11 = (int *)F_00568010(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x90),&(*(int *)(gen_frame + 0x18)));
      iVar14 = piVar11[1];
      (*(int *)(gen_frame + 0x28)) = *piVar11;
      (*(int *)(gen_frame + 0x30)) = piVar11[2];
      (*(int *)(gen_frame + 0x34)) = piVar11[3];
    }
    else {
      piVar11 = (int *)F_00568010(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0xac),&(*(int *)(gen_frame + 0x18)));
      iVar14 = piVar11[1];
      fVar17 = 0.0;
      (*(int *)(gen_frame + 0x34)) = piVar11[3];
      iVar2 = *(int *)((int)pvVar15 + 0xac);
      (*(int *)(gen_frame + 0x28)) = *piVar11;
      (*(int *)(gen_frame + 0x30)) = piVar11[2];
      fVar18 = 0.0;
      if (iVar2 != 0) {
        fVar17 = *(float *)(iVar2 + 0x38);
        fVar18 = *(float *)(iVar2 + 0x3c);
      }
      (*(uint *)&gen_args[4]) = (int)fVar17 & 0xffff;
      uVar13 = (int)fVar18 & 0xffff;
      (*(uint *)(gen_frame + 0x48)) = uVar13;
      if (0 < (short)(int)fVar17) {
        (*(uint *)&gen_args[4]) = (*(uint *)&gen_args[4]) * 2 & 0xffff;
      }
      if (0 < (short)(int)fVar18) {
        (*(uint *)(gen_frame + 0x48)) = uVar13 * 2 & 0xffff;
      }
    }
    piVar11 = (int *)F_00568010(*(undefined * PTR32 *)((int)pvVar15 + 0x94),((undefined1 *)(gen_frame + 0x8)));
    iVar2 = *piVar11;
    iVar3 = piVar11[1];
    iVar4 = piVar11[2];
    iVar5 = piVar11[3];
    (*(int *)(gen_frame + 0x1c)) = iVar3;
    (*(int *)(gen_frame + 0x18)) = iVar2;
    (*(uint *)&gen_args[3]) = (iVar5 - iVar3) + (iVar3 - iVar14 & 0xffffU) + (*(uint *)(gen_frame + 0x48)) & 0xffff;
    (*(uint *)&gen_args[5]) = (iVar4 - iVar2) + (iVar2 - (*(int *)(gen_frame + 0x28)) & 0xffffU) + (*(uint *)&gen_args[4]) & 0xffff;
    sVar12 = -(short)(iVar2 - (*(int *)(gen_frame + 0x28)));
    sVar9 = -(short)(iVar3 - iVar14);
    uVar13 = (*(uint *)(gen_frame + 0x3c));
    pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x44));
  }
  if (((*(byte *)((int)pvVar15 + 0xf8) & 0x20) != 0) &&
     ((*((byte *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0x1b0))) & 0x80) == 0)) {
    (*(undefined2 *)((char *)&(*(uint *)&gen_args[5]) + 0)) = (ushort)(*(uint *)&gen_args[5]) >> 1;
    (*(undefined2 *)((char *)&(*(uint *)&gen_args[3]) + 0)) = (ushort)(*(uint *)&gen_args[3]) >> 1;
    sVar12 = sVar12 - (ushort)(*(uint *)&gen_args[5]);
    if (*(int *)((int)pvVar15 + 0xa0) == 0) {
      sVar9 = sVar9 - (ushort)(*(uint *)&gen_args[3]);
    }
  }
  sVar9 = sVar9 + (short)uVar13;
  sVar10 = ((short)uVar13 - (ushort)(*(uint *)&gen_args[3])) + (short)(*(uint *)(gen_frame + 0x40));
  sVar6 = (sVar16 - (ushort)(*(uint *)&gen_args[5])) + (short)(*(uint *)(gen_frame + 0x38));
  uVar13 = 0;
  if (*(*(short * PTR32 *)&gen_args[1]) < (short)(sVar12 + sVar16)) {
    *(*(short * PTR32 *)&gen_args[1]) = sVar12 + sVar16;
    uVar13 = 1;
  }
  else if (sVar6 < *(*(short * PTR32 *)&gen_args[1])) {
    *(*(short * PTR32 *)&gen_args[1]) = sVar6;
    uVar13 = 2;
  }
  if (*(*(short * PTR32 *)&gen_args[2]) < sVar9) {
    *(*(short * PTR32 *)&gen_args[2]) = sVar9;
    return uVar13 | 4;
  }
  if (sVar10 < *(*(short * PTR32 *)&gen_args[2])) {
    uVar13 = uVar13 | 8;
    *(*(short * PTR32 *)&gen_args[2]) = sVar10;
  }
  return uVar13;
}

/* ref: FUN_0056b300 */
uint F_0056b300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56b300u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (((*((byte *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0x1b0))) & 0x80) != 0) &&
     ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x120))) >> 0xb & 1) == 0)) {
    (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),1);
  }
  uVar1 = F_0056b050((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12a))),
                       (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))),(*(undefined4 *)&gen_args[1]));
  if (((short)(*(undefined4 *)&gen_args[1]) != *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12a)))) ||
     ((short)(*(undefined * PTR32 *)(gen_frame + 0x8)) != *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar1;
}

/* ref: FUN_0056b390 */
uint F_0056b390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x56b390u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  if (((*((byte *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0x1b0))) & 0x80) != 0) &&
     ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x120))) >> 0xb & 1) == 0)) {
    (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),1);
  }
  uVar1 = F_0056b050((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_0056b3e0 */
unsigned int F_0056b3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x56b3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(undefined * PTR32 *)((int)this + 0x90) != (undefined *)0x0) &&
     ((*(uint *)((int)this + 0x120) >> 7 & 1) == 0)) {
    F_00568380(*(undefined * PTR32 *)((int)this + 0x90),0xc,0,this,0,1);
    F_00568380(*(undefined * PTR32 *)((int)this + 0x90),0xd,0,this,0,1);
    F_00568380(*(undefined * PTR32 *)((int)this + 0x90),0x47,0,this,0,1);
    F_00568380(*(undefined * PTR32 *)((int)this + 0x90),0x3f,0,this,0,1);
    F_00568380(*(undefined * PTR32 *)((int)this + 0x90),0x40,0,this,0,1);
  }
  return 0;
}

/* ref: FUN_0056b460 */
uint F_0056b460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56b460u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint local_10;
  
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    local_10 = (uint)(byte)(((char)param_2 == '\0') - 2);
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1,param_2);
    param_1[0x1e] = local_10;
    param_1[0x1f] = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return uVar1;
}

/* ref: FUN_0056b4b0 */
unsigned int F_0056b4b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x56b4b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x118) * (float10)param_2)));
  if (*(int *)(param_1 + 0x90) != 0) {
    F_00567d00(*(int *)(param_1 + 0x90),fVar1,fVar1);
  }
  return 0;
}

/* ref: FUN_0056b4e0 */
byte F_0056b4e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x56b4e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  int iVar3;
  float local_c;
  
  if ((*(uint *)(param_1 + 0x120) >> 0xb & 1) != 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x90);
  local_c = REFG(float, 0x1087f04);
  if (iVar3 != 0) {
    local_c = *(float *)(iVar3 + 0x40);
  }
  fVar1 = *(float *)(param_1 + 0x118);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x11c) * (float10)param_2)));
  *(float *)(param_1 + 0x118) = fVar2;
  fVar1 = ((float)GEN_TOF(((float10)fVar2 * (float10)(float)((float10)local_c / (float10)fVar1))));
  if (iVar3 != 0) {
    F_00567d00(iVar3,fVar1,fVar1);
  }
  return 1;
}

/* ref: FUN_0056b570 */
uint F_0056b570(unsigned int gen_a0)
{
  GEN_ENTER(0x56b570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055e750(((float)GEN_TOF((((float10)1 / (float10)*(float *)(in_ecx + 0x11c)) *
                              (float10)*(float *)(in_ecx + 0x118)))));
  return uVar1;
}

/* ref: FUN_0056b5a0 */
unsigned int F_0056b5a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x56b5a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0x90) != 0) {
    F_00567c80(*(int *)(param_1 + 0x90),param_2);
  }
  return 0;
}

/* ref: FUN_0056b5c0 */
unsigned int F_0056b5c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x56b5c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0x90) != 0) {
    F_00567c80(*(int *)(param_1 + 0x90),
                 ((float)GEN_TOF((((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                        (float10)*(double *)&REFG(undefined, 0x1080220)))));
  }
  return 0;
}

/* ref: FUN_0056b5f0 */
uint F_0056b5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56b5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x90) == (undefined *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return (uint)param_1;
  }
  F_00568010(*(undefined * PTR32 *)((int)this + 0x90),param_1);
  return (uint)param_1;
}

/* ref: FUN_0056b630 */
byte F_0056b630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x56b630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int iVar1;
  undefined1 * puVar2;
  byte * pbVar3;
  byte * pbVar4;
  
  pbVar3 = (byte *)((int)this + 0x144);
  iVar1 = 0;
  pbVar4 = pbVar3;
  do {
    if (*pbVar4 == param_3) {
      puVar2 = ((undefined1 *)GEN_TOP(((int)this + (iVar1 * 3 + 0x51) * 4)));
      goto LAB_0056b657;
    }
    iVar1 = iVar1 + 1;
    pbVar4 = pbVar4 + 0xc;
  } while (iVar1 < 5);
  puVar2 = (undefined1 *)0x0;
LAB_0056b657: ;
  if (puVar2 == (undefined1 *)0x0) {
    iVar1 = 0;
    do {
      if (*pbVar3 == 0xff) {
        puVar2 = ((undefined1 *)GEN_TOP(((int)this + (iVar1 * 3 + 0x51) * 4)));
        goto LAB_0056b670;
      }
      iVar1 = iVar1 + 1;
      pbVar3 = pbVar3 + 0xc;
    } while (iVar1 < 5);
    puVar2 = (undefined1 *)0x0;
LAB_0056b670: ;
    if (puVar2 == (undefined1 *)0x0) {
      return 0;
    }
  }
  *puVar2 = (char)param_3;
  puVar2[1] = (char)param_4 << 4 | (byte)param_2 & 0xf;
  *(undefined4 *)(puVar2 + 8) = param_1;
  *(undefined2 *)(puVar2 + 2) = (undefined2)param_5;
  *(undefined2 *)(puVar2 + 4) = (undefined2)param_6;
  if ((*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x1f0) == this) || (*(undefined * PTR32 *)(REFG(int, 0x1379860) + 500) == this)) {
    *(undefined1 *)(REFG(int, 0x1379860) + 0x1f9) = 1;
  }
  return 1;
}

/* ref: FUN_0056b6e0 */
uint F_0056b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0056b630(this,*(undefined4 *)(param_1 + 8),param_1[1] & 0xf,(uint)*param_1,
                       (uint)(param_1[1] >> 4),(uint)*(ushort *)(param_1 + 2),
                       (uint)*(ushort *)(param_1 + 4));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0056b720 */
byte F_0056b720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56b720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  byte * pbVar3;
  
  iVar2 = 0;
  pbVar3 = (byte *)((int)this + 0x144);
  do {
    if (*pbVar3 == param_2) {
      puVar1 = ((undefined4 *)GEN_TOP(((int)this + (iVar2 * 3 + 0x51) * 4)));
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      *param_1 = *puVar1;
      param_1[1] = puVar1[1];
      param_1[2] = puVar1[2];
      return 1;
    }
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 0xc;
  } while (iVar2 < 5);
  return 0;
}

/* ref: FUN_0056b780 */
byte F_0056b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56b780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  byte * pbVar3;
  
  iVar2 = 0;
  pbVar3 = (byte *)((int)this + 0x144);
  do {
    if (*pbVar3 == param_1) {
      puVar1 = ((undefined4 *)GEN_TOP(((int)this + (iVar2 * 3 + 0x51) * 4)));
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      *(undefined2 *)(puVar1 + 1) = 0;
      *puVar1 = 0x97ff;
      puVar1[2] = 0;
      if ((*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x1f0) == this) || (*(undefined * PTR32 *)(REFG(int, 0x1379860) + 500) == this)) {
        *(undefined1 *)(REFG(int, 0x1379860) + 0x1f9) = 1;
      }
      return 1;
    }
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 0xc;
  } while (iVar2 < 5);
  return 0;
}

/* ref: FUN_0056b7f0 */
uint F_0056b7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x56b7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0056b630(this,0xc8e,param_1,3,param_2,param_3,param_4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0056b820 */
uint F_0056b820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x56b820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0056b630(this,0xc8d,param_1,4,param_2,param_3,param_4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0056b850 */
uint F_0056b850(unsigned int gen_a0)
{
  GEN_ENTER(0x56b850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0056b780(this,3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0056b860 */
uint F_0056b860(unsigned int gen_a0)
{
  GEN_ENTER(0x56b860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0056b780(this,4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0056b870 */
byte F_0056b870(unsigned int gen_a0)
{
  GEN_ENTER(0x56b870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = REFG(int, 0x1379860);
  if ((*(byte *)((int)this + 0xfa) & 1) == 0) {
    iVar1 = (int)*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) + 0x100;
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),iVar1);
    }
    F_0059b1c0(*(undefined * PTR32 *)(iVar2 + 0x18),iVar1,uVar3,0);
    *(int *)(REFG(int, 0x1379860) + 0x210) = *(int *)(REFG(int, 0x1379860) + 0x210) + 1;
    *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0056b8d0 */
byte F_0056b8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x56b8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  if ((*(byte *)((int)this + 0xfa) & 1) != 0) {
    this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18);
    if (*(short *)((int)this_00 + 0xc68) == 0) {
      iVar1 = *(int *)((int)this_00 + 0xc58);
    }
    else {
      iVar1 = *((int *)GEN_TOP(((int)this_00 + *(short *)((int)this_00 + 0xc68) * 0xc + 0x50)));
    }
    if (iVar1 == *(int *)(REFG(int, 0x1379860) + 0x14) + 0x100) {
      F_00558e30(this_00);
    }
    if (*(int *)(REFG(int, 0x1379860) + 0x210) != 0) {
      *(int *)(REFG(int, 0x1379860) + 0x210) = *(int *)(REFG(int, 0x1379860) + 0x210) + -1;
    }
    *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xfe;
    return 1;
  }
  return 0;
}

/* ref: FUN_0056b940 */
uint F_0056b940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56b940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)this;
  if (*(ushort *)(uVar2 + 4) != 0) {
    uVar2 = F_0055eeb0(param_1,*(undefined4 *)(uVar2 + 8),(uint)*(ushort *)(uVar2 + 4));
    *(uint *)((int)this + 0xc) = uVar2;
    *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) & 0x807f | 0x7f;
    if (uVar2 == 0) {
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x84)));
      *puVar1 = *puVar1 & 0xffefffff;
      return 0;
    }
    if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x88))) & 0x80) == 0) {
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x84)));
      *puVar1 = *puVar1 | 0x100000;
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4));
  }
  return uVar2;
}

/* ref: FUN_0056b9c0 */
uint F_0056b9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x56b9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ushort uVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int local_c;
  
  bVar1 = *(byte *)((int)this + 0x20);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((bVar1 & 1) != 0) {
    *(byte *)((int)this + 0x20) = bVar1 & 0xfe;
    uVar3 = 0;
    if (*(int *)((int)this + 0x14) != 0) {
      uVar6 = F_00406b30(*(int *)((int)this + 0x14) + -4);
      uVar3 = (uint)uVar6;
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    if (*(int *)((int)this + 0xc) != 0) {
      uVar2 = 0;
      if (*(short *)((int)this + 0x10) != 0) {
        do {
          iVar5 = (uint)uVar2 * 0x10 + 8;
          iVar4 = (uint)uVar2 * 0x10 + 4;
          local_c = 2;
          do {
            F_0055f070(*((undefined4 *)GEN_TOP((iVar5 + *(int *)((int)this + 0xc)))),
                         (uint)*((ushort *)GEN_TOP((iVar4 + *(int *)((int)this + 0xc)))));
            if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar5))) != 0) {
              F_00406b30(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar5))));
              *((undefined4 *)GEN_TOP((iVar5 + *(int *)((int)this + 0xc)))) = 0;
            }
            iVar4 = iVar4 + 2;
            iVar5 = iVar5 + 4;
            local_c = local_c + -1;
          } while (local_c != 0);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ushort *)((int)this + 0x10));
      }
      uVar3 = 0;
      if (*(int *)((int)this + 0xc) != 0) {
        uVar3 = F_00406810(*(int *)((int)this + 0xc));
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_0056ba90 */
unsigned int F_0056ba90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x56ba90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
  ushort uVar1;
  uint uVar2;
  ushort * puVar3;
  
  *param_3 = *param_2;
  param_3[1] = param_2[2];
  uVar1 = param_2[6];
  if ((uVar1 != 0) && (puVar3 = param_2 + 8, param_2 = (undefined2 *)(uint)uVar1, uVar1 != 0)) {
    do {
      uVar2 = (uint)*puVar3;
      if ((uVar2 < 7) && (param_3[uVar2 * 4 + 4] == 0)) {
        F_0055f0d0(param_1,puVar3,param_3 + uVar2 * 4 + 4);
      }
      puVar3 = (ushort *)((int)puVar3 + (uint)puVar3[2]);
      uVar2 = (int)param_2 - 1;
      param_2 = (undefined2 *)uVar2;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0056bb00 */
uint F_0056bb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56bb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this & 0xffffff00 | (uint)(byte)param_1;
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  return uVar1;
}

/* ref: FUN_0056bb30 */
byte F_0056bb30(unsigned int gen_a0)
{
  GEN_ENTER(0x56bb30u, gen_a0, 0u, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_0056bb40 */
uint F_0056bb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56bb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_1 & 0xff) << 8 ^ *(uint *)this) & 0x3f00 ^ *(uint *)this;
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  return uVar1;
}

/* ref: FUN_0056bb70 */
byte F_0056bb70(unsigned int gen_a0)
{
  GEN_ENTER(0x56bb70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  return (byte)((uint)*in_ecx >> 8) & 0x3f;
}

/* ref: FUN_0056bb80 */
uint F_0056bb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56bb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)(byte)param_1 << 0xe | *(uint *)this & 0xffc03fff;
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  return uVar1;
}

/* ref: FUN_0056bbb0 */
byte F_0056bbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x56bbb0u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return (byte)(*in_ecx >> 0xe);
}

/* ref: FUN_0056bbc0 */
uint F_0056bbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56bbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_1 & 0xff) << 0x16 ^ *(uint *)this) & 0x3c00000 ^ *(uint *)this;
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  return uVar1;
}

/* ref: FUN_0056bbf0 */
byte F_0056bbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x56bbf0u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return (byte)(*in_ecx >> 0x16) & 0xf;
}

/* ref: FUN_0056bc00 */
uint F_0056bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56bc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = param_1 << 0x1a | *(uint *)this & 0x3ffffff;
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  return uVar1;
}

/* ref: FUN_0056bc40 */
uint F_0056bc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56bc40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *in_ecx;
  in_ecx[1] = (in_ecx[1] ^ param_2 & 0xff) & 0xf ^ in_ecx[1];
  *in_ecx = uVar1;
  return uVar1;
}

/* ref: FUN_0056bc70 */
byte F_0056bc70(unsigned int gen_a0)
{
  GEN_ENTER(0x56bc70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (byte)((ulonglong)*(undefined8 *)((int)(uintptr_t)this) >> 0x20) & 0xf;
}

/* ref: FUN_0056bc80 */
uint F_0056bc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56bc80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *in_ecx;
  in_ecx[1] = (in_ecx[1] ^ (param_2 & 0xff) << 4) & 0xf0 ^ in_ecx[1];
  *in_ecx = uVar1;
  return uVar1;
}

/* ref: FUN_0056bcb0 */
byte F_0056bcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x56bcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (byte)(uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)this) >> 0x24) & 0xf;
}

/* ref: FUN_0056bcd0 */
uint F_0056bcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56bcd0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *in_ecx;
  in_ecx[1] = (in_ecx[1] ^ (param_2 & 0xff) << 8) & 0x3f00 ^ in_ecx[1];
  *in_ecx = uVar1;
  return uVar1;
}

/* ref: FUN_0056bd20 */
uint F_0056bd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56bd20u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *in_ecx;
  in_ecx[1] = (in_ecx[1] ^ (param_2 & 0xff) << 0xe) & 0xfc000 ^ in_ecx[1];
  *in_ecx = uVar1;
  return uVar1;
}

/* ref: FUN_0056bd70 */
uint F_0056bd70(unsigned int gen_a0)
{
  GEN_ENTER(0x56bd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x240];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined * this_00;
  undefined4 * puVar10;
  byte * pbVar11;
  float10 fVar12;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x23c);
  (*(uint *)(gen_frame + 0x238)) = uVar3;
  uVar8 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  if (*(int *)((int)this + 0xc) == 0) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x23c));
    return 0;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18)));
  iVar5 = *(int *)((int)this + 0x1c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this_00;
  if (iVar5 == 0) {
    if (*(int *)((int)this + 0x20) != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0xfc)));
      goto LAB_0056bdf7;
    }
  }
  else if (iVar5 == 1) {
    if (*(int *)((int)this + 0x20) != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18)));
      goto LAB_0056bdf7;
    }
  }
  else if (iVar5 == 2) {
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = *(undefined * PTR32 *)((int)this + 0x20);
    goto LAB_0056bdf7;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x0;
LAB_0056bdf7: ;
  if ((this_00 == (undefined *)0x0) || ((*(undefined * PTR32 *)(gen_frame + 0x2c)) == (undefined *)0x0)) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x23c));
    return 0;
  }
  uVar3 = F_004d6dd0(this_00,0,((int *)(gen_frame + 0x18)),3);
  if (uVar3 != 0) {
    uVar3 = F_004d6dd0((*(undefined * PTR32 *)(gen_frame + 0x2c)),0,((byte *)(gen_frame + 0xc)),1);
    if (uVar3 != 0) {
      uVar3 = *(uint *)((int)this + 0x30);
      if (uVar3 < *(int *)((int)this + 0x34) + uVar3) {
        fVar12 = (float10)*(double *)&REFG(undefined, 0x1088100);
        do {
          if (*(uint *)((int)this_00 + 0x1c) <= uVar3) break;
          puVar7 = (undefined4 *)(((int *)(gen_frame + 0x18))[0] * uVar3 + (*(int *)(gen_frame + 0x20)));
          puVar9 = puVar7;
          puVar10 = &(*(undefined4 *)(gen_frame + 0x138));
          for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar9 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) * uVar3 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)))));
          pbVar11 = ((byte *)(gen_frame + 0x38));
          for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pbVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            pbVar11 = pbVar11 + 4;
          }
          uVar8 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x18);
          uVar6 = 0;
          if (uVar8 != 0) {
            do {
              bVar1 = ((byte *)(gen_frame + 0x38))[(int)(uVar6 * 4)];
              (*(uint *)(gen_frame + 0x30)) = (uint)bVar1;
              bVar2 = *(byte *)(&(*(undefined4 *)(gen_frame + 0x138)) + uVar6);
              (*(uint *)(gen_frame + 0x30)) = (uint)bVar2;
              uVar6 = uVar6 + 1;
              (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 2)) = gen_x87_cw;
              (*(uint *)(gen_frame + 0x34)) = gen_x87_cw | 0xc00;
              iVar5 = (int)TRUNC(((float10)bVar2 * (float10)bVar1) / fVar12);
              (*(uint *)(gen_frame + 0x34)) = iVar5;
              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 0)) = (byte)iVar5;
              ((byte *)(gen_frame + 0x134))[(int)(uVar6 * 4)] = (byte)(*(uint *)(gen_frame + 0x34));
              uVar4 = (uint)*(byte *)((int)&(*(uint *)(gen_frame + 0x34)) + uVar6 * 4 + 1);
              (*(uint *)(gen_frame + 0x34)) = uVar4;
              bVar1 = ((byte *)(gen_frame + 0x134))[(int)(uVar6 * 4 + 1)];
              (*(uint *)(gen_frame + 0x34)) = (uint)bVar1;
              (*(uint *)(gen_frame + 0x34)) = gen_x87_cw | 0xc00;
              iVar5 = (int)TRUNC(((float10)bVar1 * (float10)uVar4) / fVar12);
              (*(uint *)(gen_frame + 0x34)) = iVar5;
              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 0)) = (byte)iVar5;
              ((byte *)(gen_frame + 0x134))[(int)(uVar6 * 4 + 1)] = (byte)(*(uint *)(gen_frame + 0x34));
              uVar4 = (uint)*(byte *)((int)&(*(uint *)(gen_frame + 0x34)) + uVar6 * 4 + 2);
              (*(uint *)(gen_frame + 0x34)) = uVar4;
              bVar1 = ((byte *)(gen_frame + 0x134))[(int)(uVar6 * 4 + 2)];
              (*(uint *)(gen_frame + 0x34)) = (uint)bVar1;
              (*(uint *)(gen_frame + 0x34)) = gen_x87_cw | 0xc00;
              iVar5 = (int)TRUNC(((float10)bVar1 * (float10)uVar4) / fVar12);
              (*(uint *)(gen_frame + 0x34)) = iVar5;
              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 0)) = (byte)iVar5;
              ((byte *)(gen_frame + 0x134))[(int)(uVar6 * 4 + 2)] = (byte)(*(uint *)(gen_frame + 0x34));
              uVar4 = (uint)*(byte *)((int)&(*(uint *)(gen_frame + 0x34)) + uVar6 * 4 + 3);
              (*(uint *)(gen_frame + 0x34)) = uVar4;
              bVar1 = ((byte *)(gen_frame + 0x134))[(int)(uVar6 * 4 + 3)];
              (*(uint *)(gen_frame + 0x30)) = CONCAT22(gen_x87_cw,(ushort)bVar2);
              (*(uint *)(gen_frame + 0x34)) = (uint)bVar1;
              (*(uint *)(gen_frame + 0x34)) = gen_x87_cw | 0xc00;
              iVar5 = (int)TRUNC(((float10)bVar1 * (float10)uVar4) / fVar12);
              (*(uint *)(gen_frame + 0x34)) = iVar5;
              iVar5 = (*(uint *)(gen_frame + 0x34));
              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 0)) = (byte)iVar5;
              ((byte *)(gen_frame + 0x134))[(int)(uVar6 * 4 + 3)] = (byte)(*(uint *)(gen_frame + 0x34));
              (*(uint *)(gen_frame + 0x34)) = iVar5;
            } while (uVar6 < uVar8);
          }
          puVar9 = &(*(undefined4 *)(gen_frame + 0x138));
          for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar3 = uVar3 + 1;
          this = (*(undefined * PTR32 *)(gen_frame + 0x24));
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x28));
        } while (uVar3 < (uint)(*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x30) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x34)));
      }
      *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + *(int *)((int)this + 0x34);
      F_004d6e60((*(undefined * PTR32 *)(gen_frame + 0x2c)),0);
      uVar8 = 2 - (*(uint *)((int)this + 0x30) < *(uint *)((int)this_00 + 0x1c));
    }
    F_004d6e60(this_00,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
  return uVar8;
}

/* ref: FUN_0056c100 */
unsigned int F_0056c100(unsigned int gen_a0)
{
  GEN_ENTER(0x56c100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0056c130 */
uint F_0056c130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56c130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  if ((*(int *)((int)this + 0xc) != param_1) || (*(int *)((int)this + 0x18) == 0)) {
    piVar1 = *(int * PTR32 *)((int)this + 0x18);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    *(undefined4 *)((int)this + 8) = 0;
    (*(int *)(gen_frame + 0x4)) = param_1;
    (*(int *)(gen_frame + 0x8)) = param_1;
    uVar2 = F_004dca20(&(*(int *)(gen_frame + 0x4)),1,0x1450,4,0xc);
    *(uint *)((int)this + 0x18) = uVar2;
    if (uVar2 == 0) {
      return 0;
    }
  }
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = param_2[1];
  *(int *)((int)this + 0xc) = param_1;
  return (uint)param_2;
}

/* ref: FUN_0056c1b0 */
byte F_0056c1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56c1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  *(short *)((int)this + 0x1e) = (short)((param_1 >> 3) << 6);
  *(short *)((int)this + 0x1c) = (short)((param_1 & 7) << 6);
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 0xc) == 0) goto LAB_0056c21a;
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xfc)));
  }
  else if (iVar1 == 1) {
    if (*(int *)((int)this + 0xc) == 0) goto LAB_0056c21a;
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18)));
  }
  else {
    if (iVar1 != 2) goto LAB_0056c21a;
    this_00 = *(undefined * PTR32 *)((int)this + 0xc);
  }
  if ((this_00 != (undefined *)0x0) && (*(char *)((int)this + 0x20) == '\0')) {
    uVar2 = F_004d6dd0(this_00,0,(int)this + 0x10,1);
    *(bool *)((int)this + 0x20) = uVar2 != 0;
  }
LAB_0056c21a: ;
  return *(byte *)((int)this + 0x20);
}

/* ref: FUN_0056c230 */
uint F_0056c230(unsigned int gen_a0)
{
  GEN_ENTER(0x56c230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 0xc) == 0) {
      return 0;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xfc)));
  }
  else if (iVar1 == 1) {
    if (*(int *)((int)this + 0xc) == 0) {
      return 0;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18)));
  }
  else {
    if (iVar1 - 2U != 0) {
      return iVar1 - 2U;
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0xc);
  }
  if ((this_00 != (undefined *)0x0) && (*(char *)((int)this + 0x20) != '\0')) {
    this_00 = (undefined *)F_004d6e60(this_00,0);
  }
  return (uint)this_00;
}

/* ref: FUN_0056c270 */
uint F_0056c270(unsigned int gen_a0)
{
  GEN_ENTER(0x56c270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 0x10);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  F_0042e430((undefined *)((int)this + 0x10),"");
  *(undefined4 *)((int)this + 100) = 0;
  return (uint)this;
}

/* ref: FUN_0056c2b0 */
uint F_0056c2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x56c2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d1c));
  F_0042b630((int)this + 0x14);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042e430((undefined *)((int)this + 0x14),"");
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: FUN_0056c310 */
uint F_0056c310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56c310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  char cVar4;
  int iVar5;
  uint3 uVar3;
  
  iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x1c))) + 8)));
  uVar3 = (uint3)((uint)*(int *)((int)this + 0x6c) >> 8);
  uVar2 = CONCAT31(uVar3,1);
  if (iVar5 == 0) {
    return uVar2;
  }
  do {
    if ((999 < *(ushort *)(iVar5 + 0x18)) && (iVar1 = *(int *)(iVar5 + 0x8c), iVar1 != 0)) {
      if (((*(byte *)(iVar1 + 0x60) & 1) == 0) ||
         (((*(byte *)(iVar1 + 0x60) & 4) == 0 || (*(char *)(iVar1 + 0x1c) != '\x01')))) {
        cVar4 = '\0';
      }
      else {
        cVar4 = *((char *)GEN_TOP((*(int *)(iVar1 + 0xc) + 0xf)));
      }
      if (cVar4 == '\x04') {
        return (uint)uVar3 << 8;
      }
    }
    iVar5 = *(int *)(iVar5 + 8);
    if (iVar5 == 0) {
      return uVar2;
    }
  } while( true );
}

/* ref: FUN_0056c370 */
uint F_0056c370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56c370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  
  if ((-1 < (int)param_1) && (param_1 < 4)) {
    in_EAX = param_1 * 5 + 10;
    *(undefined1 *)((int)this + in_EAX * 8) = 0;
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x1c);
    if (piVar1 != (int *)0x0) {
      in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + param_1 * 4 + 0x1c) = 0;
    }
  }
  return in_EAX;
}

/* ref: FUN_0056c3b0 */
uint F_0056c3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x56c3b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined4 uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0042a990(param_1);
  uVar2 = 10;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar1,REFG(undefined4, 0x108cc50));
  uVar1 = F_00a4cf70(uVar1,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_0056c400 */
uint F_0056c400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56c400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(int *)((int)this + 0x10) = (int)((ulonglong)param_1 * 1000);
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined1 *)((int)this + 0x20) = 1;
  *(int *)((int)this + 0x14) = (int)((ulonglong)param_1 * 1000 >> 0x20);
  return (uint)this;
}

/* ref: FUN_0056c440 */
uint F_0056c440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x56c440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 4) == 0) {
    uVar3 = 0;
    uVar1 = F_00404270();
    puVar2 = (undefined4 *)F_00406bd0(4,0,uVar1,uVar3);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  uVar1 = F_00565340(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_4,this,param_3,0);
  return uVar1;
}

/* ref: FUN_0056c4c0 */
byte F_0056c4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56c4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (*(int * PTR32 *)((int)this + 4) != (int *)0x0) {
    F_00596cd0(param_2,**(int * PTR32 *)((int)this + 4) + param_1 * 8);
    return 1;
  }
  return 0;
}

/* ref: FUN_0056c4f0 */
byte F_0056c4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56c4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(int * PTR32 *)((int)this + 4) != (int *)0x0) {
    F_00596cd0(((undefined *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + param_1 * 8))),param_2);
    return 1;
  }
  return 0;
}

/* ref: FUN_0056c520 */
unsigned int F_0056c520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56c520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 8) = param_2;
    if (this == (undefined *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)this + 4;
    }
    bVar1 = *((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x13a)));
    if (*(int *)(param_2 + 0x80) == 0) {
      uVar5 = 0;
      uVar2 = F_00404270();
      puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar5);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
      }
      *(undefined4 * PTR32 *)(param_2 + 0x80) = puVar3;
    }
    F_00565340(*(undefined * PTR32 *)(param_2 + 0x80),0x16,(uint)bVar1,0,param_2,iVar4,0);
  }
  return 0;
}

/* ref: FUN_0056c5a0 */
unsigned int F_0056c5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56c5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    F_0056c520(this,param_1,*(undefined4 *)(param_2 + 0x70));
  }
  return 0;
}

/* ref: FUN_0056c5c0 */
uint F_0056c5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x56c5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00565340((undefined *)((int)this + 0x14),param_1,param_2,param_4,this,param_3,0);
  return uVar1;
}

/* ref: FUN_0056c5f0 */
uint F_0056c5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x56c5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x24) != -1) {
    in_EAX = 0;
    piVar1 = ((int *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x28) + 0x24)));
    while (*piVar1 != -1) {
      in_EAX = in_EAX + 1;
      piVar1 = piVar1 + 1;
      if (7 < in_EAX) {
        *(undefined4 *)((int)this + 0x24) = 0xffffffff;
        *(undefined4 *)((int)this + 4) = 0;
        return in_EAX;
      }
    }
    *((int *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x28) + 0x24 + in_EAX * 4))) = *(int *)((int)this + 0x24);
    *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return in_EAX;
}

/* ref: FUN_0056c650 */
uint F_0056c650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x56c650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0x28) == 0) {
    uVar3 = 0;
    uVar1 = F_00404270();
    puVar2 = (undefined4 *)F_00406bd0(4,0,uVar1,uVar3);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *(undefined4 * PTR32 *)((int)this + 0x28) = puVar2;
  }
  uVar1 = F_00565340(*(undefined * PTR32 *)((int)this + 0x28),param_1,param_2,param_4,this,param_3,param_5);
  return uVar1;
}

/* ref: FUN_0056c6b0 */
uint F_0056c6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56c6b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  undefined * puVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((*(uint *)&REFG(undefined, 0x1379b04) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379b04) = *(uint *)&REFG(undefined, 0x1379b04) | 1;
    F_0042b630(&REFG(undefined, 0x1379ab0));
    F_00c47de6(((code *)REFP(0x107be40)));
  }
  if ((*(uint *)&REFG(undefined, 0x1379b04) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x1379b04) = *(uint *)&REFG(undefined, 0x1379b04) | 2;
    F_0042b630(&REFG(undefined, 0x1379a58));
    F_00c47de6(((code *)REFP(0x107be30)));
  }
  F_0042aca0(&REFG(undefined, 0x1379ab0));
  F_0042aca0(&REFG(undefined, 0x1379a58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(&REFG(undefined * PTR32, 0x131dd60))[(int)(param_3)],REFG(undefined4, 0x108cc50));
  ((code *)*(gen_code32 *)(*param_1 + 0x10))
            (param_1,((undefined1 *)(gen_frame + 0x4)),param_2,(int)(char)(&REFG(undefined, 0x10a07d8))[(int)(param_3)],&REFG(undefined, 0x1379ab0));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((*(uint *)&REFG(undefined, 0x1379b04) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x1379b04) = *(uint *)&REFG(undefined, 0x1379b04) | 4;
    F_00a29aa0(&REFG(undefined, 0x13799b8));
    F_00c47de6(((code *)REFP(0x107be20)));
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  puVar3 = &REFG(undefined, 0x1379a58);
  uVar2 = F_0042a990(&REFG(undefined, 0x1379ab0));
  F_00a23c00(&REFG(undefined, 0x13799b8),uVar2,uVar1,puVar3);
  uVar1 = F_0042a990(&REFG(undefined, 0x1379a58));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_0056c7e0 */
byte F_0056c7e0(void)
{
  GEN_ENTER(0x56c7e0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x6c))(piVar1);
  return (byte)uVar2;
}

/* ref: FUN_0056c800 */
byte F_0056c800(void)
{
  GEN_ENTER(0x56c800u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1);
  return (byte)uVar2;
}

/* ref: FUN_0056c820 */
byte F_0056c820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56c820u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  if ((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) {
    F_00568010(param_1,&(*(int *)(gen_frame + 0x1c)));
    F_00568010(param_2,((byte *)(gen_frame + 0xc)));
    if ((((*(int *)(gen_frame + 0x24)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))) * ((*(int *)(gen_frame + 0x1c)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))) < 1) &&
       (((*(int *)(gen_frame + 0x28)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))) * ((*(int *)(gen_frame + 0x20)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12))) < 1)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0056c880 */
unsigned int F_0056c880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56c880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (this == (undefined *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 0x70);
    }
    if ((iVar1 != 0) && (iVar3 != 0)) {
      *(uint *)(iVar3 + 0x88) =
           *(uint *)(iVar3 + 0x88) ^ (*(uint *)(iVar3 + 0x88) ^ *(uint *)(iVar1 + 0x88)) & 8;
      uVar2 = (*(uint *)(iVar1 + 0x88) ^ *(uint *)(iVar3 + 0x88)) & 0x10 ^ *(uint *)(iVar3 + 0x88);
      *(uint *)(iVar3 + 0x88) = uVar2;
      uVar2 = (*(uint *)(iVar1 + 0x88) ^ uVar2) & 0x20 ^ uVar2;
      *(uint *)(iVar3 + 0x88) = uVar2;
      *(uint *)(iVar3 + 0x88) = (*(uint *)(iVar1 + 0x88) ^ uVar2) & 0x40 ^ uVar2;
    }
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined1 *)((int)this + 0x80) = *(undefined1 *)(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentIcon::vf3 */
uint F_0056c930(unsigned int gen_a0)
{
  GEN_ENTER(0x56c930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  uVar1 = F_005618f0(this);
  return uVar1;
}

/* ref: FUN_0056c980 */
unsigned int F_0056c980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56c980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(byte *)((int)this + 0x138) != (byte)param_1) {
    iVar1 = *(int *)((int)this + 0x70);
    *(byte *)((int)this + 0x138) = (byte)param_1;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)(byte)param_1 << 0x14 ^ *(uint *)(iVar1 + 0x84)) & 0x100000;
      *(uint *)(iVar1 + 0x88) =
           *(uint *)(iVar1 + 0x88) ^
           ((uint)((byte)param_1 == 0) << 7 ^ *(uint *)(iVar1 + 0x88)) & 0x80;
    }
    iVar1 = *(int *)((int)this + 0x68);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)*(byte *)((int)this + 0x138) << 0x19 ^ *(uint *)(iVar1 + 0x84)) & 0x2000000;
    }
  }
  return 0;
}

/* ref: FUN_0056ca30 */
unsigned int F_0056ca30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x56ca30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  int iVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = gen_bits2f((*(int * PTR32 *)&gen_args[0])[3]);
  (*(float *)(gen_frame + 0x8)) = fVar1;
  fVar5 = (float10)(*(float *)&gen_args[1]);
  fVar6 = (float10)fVar1;
  if (fVar5 < fVar6) {
    (*(int * PTR32 *)&gen_args[0])[3] = (int)gen_fl2bits((float)(fVar6 - fVar5));
    return 0;
  }
  (*(int * PTR32 *)&gen_args[0])[3] = 0;
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  pfVar4 = &(*(float *)&gen_args[1]);
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar5 - fVar6) *
                                  (float10)*(double *)&REFG(undefined, 0x1094788)))) +
                 ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[4]))))));
  (*(float *)&gen_args[1]) = fVar1;
  if (!((float10)fVar1 < (float10)1)) {
    pfVar4 = &(*(float *)(gen_frame + 0x8));
  }
  fVar1 = *pfVar4;
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  iVar3 = (*(int * PTR32 *)&gen_args[0])[2];
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(int * PTR32 *)&gen_args[0])[4] = (int)gen_fl2bits(fVar1);
  *(*(int * PTR32 *)&gen_args[0]) = (int)((float10)(iVar3 - iVar2) * (float10)fVar1 + (float10)iVar2);
  return 0;
}

/* ref: FUN_0056cad0 */
uint F_0056cad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56cad0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0)));
  if ((*(int *)&gen_args[1]) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0)))) {
    puVar2 = (uint *)&(*(int *)&gen_args[1]);
  }
  uVar1 = *puVar2;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc))) < (int)uVar1) {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8))) = uVar1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc)));
  return (uint)puVar2;
}

/* ref: FUN_0056cb10 */
uint F_0056cb10(unsigned int gen_a0)
{
  GEN_ENTER(0x56cb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  uint in_EAX = 0;
  undefined2 extraout_var = 0;
  undefined2 extraout_var_00 = 0;
  undefined2 extraout_var_01 = 0;
  bool bVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  
  iVar1 = *(int *)((int)this + 0x84);
  if (iVar1 != 0) {
    uVar2 = F_00561bd0(this,*(uint *)((int)this + 0xa0));
    *(ushort *)(iVar1 + 0x7c) = uVar2;
    in_EAX = *(uint *)((int)this + 0x98);
    if ((((in_EAX != 0) && ((*(uint *)(in_EAX + 0x84) & 0x100000) != 0)) &&
        ((*(uint *)(in_EAX + 0x88) & 0x20000) == 0)) && (in_EAX != 0)) {
      *(ushort *)(in_EAX + 0x7c) = uVar2;
    }
    iVar1 = *(int *)((int)this + 0x8c);
    if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x84) & 0x100000) != 0)) &&
       ((*(uint *)(iVar1 + 0x88) & 0x20000) == 0)) {
      if (*(int *)((int)this + 0x84) == 0) {
        sVar3 = 0;
      }
      else {
        sVar3 = *((short *)GEN_TOP((*(int *)((int)this + 0x84) + 0x7c)));
      }
      uVar2 = sVar3 + *(short *)((int)this + 0xec) * -2;
      in_EAX = (uint)uVar2;
      if (iVar1 != 0) {
        uVar4 = F_00561bd0(this,*(uint *)((int)this + 0xb4));
        *(ushort *)(iVar1 + 0x7c) = uVar4 - uVar2;
      }
      iVar1 = *(int *)((int)this + 0x8c);
      fVar9 = (float)in_EAX;
      if (iVar1 != 0) {
        if ((*(uint *)(iVar1 + 0x88) & 1) == 0) {
          fVar7 = (float10)in_EAX;
          fVar8 = (float10)*(float *)(iVar1 + 0x38);
          bVar5 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7);
          bVar6 = bVar5 || fVar8 == fVar7;
          in_EAX = (uint)CONCAT11(bVar6 << 6 | bVar5 << 2 | 2U | !(fVar7 <= fVar8),(char)uVar2);
          if (bVar5 == bVar6) {
            *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 1;
          }
        }
        *(float *)(iVar1 + 0x38) = fVar9;
      }
    }
    iVar1 = *(int *)((int)this + 0x90);
    if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x84) & 0x100000) != 0)) &&
       ((*(uint *)(iVar1 + 0x88) & 0x20000) == 0)) {
      uVar2 = F_00561bd0(this,*(uint *)((int)this + 0xd0));
      uVar2 = uVar2 + *(short *)((int)this + 0xec) * -2;
      in_EAX = CONCAT22(extraout_var,uVar2);
      if (iVar1 != 0) {
        uVar4 = F_00561bd0(this,*(uint *)((int)this + 200));
        in_EAX = CONCAT22(extraout_var_00,uVar4 - uVar2);
        *(ushort *)(iVar1 + 0x7c) = uVar4 - uVar2;
      }
      iVar1 = *(int *)((int)this + 0x90);
      if (iVar1 != 0) {
        if ((*(uint *)(iVar1 + 0x88) & 1) == 0) {
          fVar7 = (float10)uVar2;
          fVar8 = (float10)*(float *)(iVar1 + 0x38);
          bVar5 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7);
          bVar6 = bVar5 || fVar8 == fVar7;
          in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                            CONCAT11(bVar6 << 6 | bVar5 << 2 | 2U | !(fVar7 <= fVar8),(char)in_EAX))
          ;
          if (bVar5 == bVar6) {
            *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 1;
          }
        }
        *(float *)(iVar1 + 0x38) = (float)uVar2;
      }
    }
    iVar1 = *(int *)((int)this + 0x94);
    if ((((iVar1 != 0) && ((*(uint *)(iVar1 + 0x84) & 0x100000) != 0)) &&
        ((*(uint *)(iVar1 + 0x88) & 0x20000) == 0)) && (iVar1 != 0)) {
      uVar2 = F_00561bd0(this,*(uint *)((int)this + 0xe8));
      in_EAX = CONCAT22(extraout_var_01,uVar2);
      *(ushort *)(iVar1 + 0x7c) = uVar2;
    }
  }
  return in_EAX;
}

/* ref: FUN_0056ccf0 */
ushort F_0056ccf0(unsigned int gen_a0)
{
  GEN_ENTER(0x56ccf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x84);
  if ((uVar3 != 0) && (*(int *)(uVar3 + 0x8c) != 0)) {
    if (*(int *)((int)this + 0x70) == 0) {
      sVar1 = (short)this;
    }
    else {
      sVar1 = *((short *)GEN_TOP((*(int *)((int)this + 0x70) + 0x7c)));
    }
    uVar2 = sVar1 + *(short *)((int)this + 0xec) * -2;
    uVar3 = (uint)uVar2;
    *(ushort *)((int)this + 0xee) = uVar2;
  }
  return (ushort)uVar3;
}

/* ref: FUN_0056cd30 */
uint F_0056cd30(unsigned int gen_a0)
{
  GEN_ENTER(0x56cd30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  float * pfVar6;
  undefined2 uVar8;
  int iVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  uint uVar7;
  
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 0x70) != 0)) {
    (*(uint *)(gen_frame + 0x20)) = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 0x7e)));
  }
  uVar2 = F_00561c90(this,*(uint *)((int)this + 0xa0));
  fVar10 = gen_bits2f((uint)uVar2);
  uVar3 = *(uint *)((int)this + 0x88);
  ((float *)(gen_frame + 0x14))[0] = fVar10;
  if (uVar3 != 0) {
    if ((*(byte *)((int)this + 0xae) & 0x10) == 0) {
      *(ushort *)(uVar3 + 0x7c) = uVar2;
    }
    else {
      *(ushort *)(uVar3 + 0x7e) = uVar2;
      iVar4 = *(int *)((int)this + 0x88);
      iVar9 = ((*(uint *)(gen_frame + 0x20)) & 0xffff) - (int)gen_fl2bits(fVar10);
      fVar15 = (float)iVar9;
      ((float *)(gen_frame + 0x14))[2] = fVar15;
      if (iVar4 != 0) {
        if ((*(uint *)(iVar4 + 0x88) & 1) == 0) {
          fVar13 = (float10)iVar9;
          fVar14 = (float10)*(float *)(iVar4 + 0x3c);
          bVar11 = GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13);
          bVar12 = bVar11 || fVar14 == fVar13;
          uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                           CONCAT11(bVar12 << 6 | bVar11 << 2 | 2U | !(fVar13 <= fVar14),(char)uVar3
                                   ));
          if (bVar11 == bVar12) {
            *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 1;
          }
        }
        *(float *)(iVar4 + 0x3c) = fVar15;
      }
    }
  }
  uVar7 = *(uint *)((int)this + 0x90);
  if (uVar7 == 0) {
    return uVar3;
  }
  iVar4 = *(int *)(uVar7 + 0x70);
  if (iVar4 != 0) {
    (*(uint *)(gen_frame + 0x10)) = (uint)*(ushort *)(iVar4 + 0x7c);
    (*(uint *)(gen_frame + 0xc)) = (uint)*(ushort *)(iVar4 + 0x7e);
  }
  iVar4 = *(int *)(uVar7 + 0x70);
  if (iVar4 != 0) {
    (*(float *)(gen_frame + 0x28)) = *(float *)(iVar4 + 0x38);
    (*(float *)(gen_frame + 0x24)) = *(float *)(iVar4 + 0x3c);
  }
  iVar9 = (int)*(short *)((int)this + 0xa8);
  iVar4 = (int)*(short *)((int)this + 0xac) - (int)*(short *)((int)this + 0xaa);
  ((float *)(gen_frame + 0x14))[2] = gen_bits2f(iVar4);
  ((float *)(gen_frame + 0x14))[1] = gen_bits2f(iVar9);
  pfVar5 = ((float *)(gen_frame + 0x14)) + 2;
  if (iVar4 <= iVar9) {
    pfVar5 = ((float *)(gen_frame + 0x14)) + 1;
  }
  ((float *)(gen_frame + 0x14))[1] = *pfVar5;
  ((float *)(gen_frame + 0x14))[2] = gen_bits2f(iVar9);
  pfVar6 = ((float *)(gen_frame + 0x14));
  if ((int)gen_fl2bits(*pfVar5) <= (int)gen_fl2bits(fVar10)) {
    pfVar6 = ((float *)(gen_frame + 0x14)) + 1;
  }
  if ((int)gen_fl2bits(*pfVar6) <= iVar9) {
    pfVar6 = ((float *)(gen_frame + 0x14)) + 2;
  }
  fVar10 = *pfVar6;
  ((float *)(gen_frame + 0x14))[2] = (float)(int)gen_fl2bits(fVar10);
  if ((*(byte *)((int)this + 0xae) & 0x10) == 0) {
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(int)gen_fl2bits(fVar10) - (float10)((*(uint *)(gen_frame + 0x10)) >> 1 & 0x7fff))));
  }
  else {
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF((((float10)((*(uint *)(gen_frame + 0x20)) & 0xffff) - (float10)(int)gen_fl2bits(fVar10)) -
                     (float10)((*(uint *)(gen_frame + 0xc)) >> 1 & 0x7fff))));
  }
  iVar4 = *(int *)(uVar7 + 0x70);
  if (iVar4 == 0) {
    return uVar7;
  }
  if ((*(uint *)(iVar4 + 0x88) & 1) == 0) {
    fVar13 = (float10)(*(float *)(gen_frame + 0x28));
    fVar14 = (float10)*(float *)(iVar4 + 0x38);
    bVar11 = GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13);
    bVar12 = bVar11 || fVar14 == fVar13;
    uVar8 = (undefined2)(uVar7 >> 0x10);
    uVar1 = (undefined1)uVar7;
    uVar7 = CONCAT22(uVar8,CONCAT11(bVar12 << 6 | bVar11 << 2 | 2U | !(fVar13 <= fVar14),uVar1));
    if (bVar11 != bVar12) {
      fVar13 = (float10)(*(float *)(gen_frame + 0x24));
      fVar14 = (float10)*(float *)(iVar4 + 0x3c);
      bVar11 = GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13);
      bVar12 = bVar11 || fVar14 == fVar13;
      uVar7 = CONCAT22(uVar8,CONCAT11(bVar12 << 6 | bVar11 << 2 | 2U | !(fVar13 <= fVar14),uVar1));
      if (bVar11 != bVar12) goto LAB_0056ced0;
    }
    *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 1;
  }
LAB_0056ced0: ;
  *(float *)(iVar4 + 0x38) = (*(float *)(gen_frame + 0x28));
  *(float *)(iVar4 + 0x3c) = (*(float *)(gen_frame + 0x24));
  return uVar7;
}

/* ref: FUN_0056cef0 */
uint F_0056cef0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x56cef0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xa4);
  uVar4 = ((int)param_2 / iVar1) * iVar1;
  uVar2 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98);
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  (*(uint *)(gen_frame + 0x8)) = iVar1 + uVar4;
  puVar3 = &(*(uint *)(gen_frame + 0x8));
  if ((int)uVar2 <= (int)(iVar1 + uVar4)) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  if (!((float10)param_2 <=
       (float10)((float)GEN_TOF(((float10)(int)(*puVar3 + uVar4) * (float10)REFG(double, 0x1088108)))))) {
    uVar4 = *puVar3;
  }
  return uVar4;
}

/* ref: FUN_0056cf60 */
unsigned int F_0056cf60(unsigned int gen_a0)
{
  GEN_ENTER(0x56cf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  
  iVar5 = *(int *)((int)this + 0x90);
  if ((iVar5 != 0) && (*(short *)(iVar5 + 0x18) == 8)) {
    if (*(int *)((int)this + 0x70) == 0) {
      sVar6 = 0;
    }
    else {
      sVar6 = *((short *)GEN_TOP((*(int *)((int)this + 0x70) + 0x7e)));
    }
    if (*(short *)(iVar5 + 0x7e) != sVar6) {
      in_ecx = *(int *)((int)this + 0x84);
      if (*(int *)(in_ecx + 0x104) != 0) {
        if ((in_ecx == 0) || (*(int *)(in_ecx + 0x70) == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0x70) + 0x7e)));
        }
        uVar1 = (ulonglong)*(ushort *)(iVar5 + 0x7e) % (ulonglong)(longlong)(int)uVar4;
        iVar5 = (int)uVar1;
        if ((iVar5 != 0) &&
           (uVar3 = *((ushort *)GEN_TOP((*(int *)(in_ecx + 0x104) + 0x7e))), uVar2 = F_005c0650(in_ecx),
           (int)((uint)uVar2 - (uint)uVar3) < iVar5)) {
          uVar3 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x90) + 0x7e)));
          uVar2 = F_005c0650(in_ecx);
          sVar6 = (short)uVar1;
          if ((int)((uint)uVar2 * (int)*(short *)((int)this + 0xfa)) < (int)(uint)uVar3) {
            *(short *)((int)this + 0x104) = *(short *)((int)this + 0x104) - sVar6;
            return 0;
          }
          uVar3 = F_005c0650(in_ecx);
          *(short *)((int)this + 0x104) = *(short *)((int)this + 0x104) + (uVar3 - sVar6);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0056d050 */
uint F_0056d050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56d050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)((int)this + 0x84);
  }
  else {
    uVar1 = F_0055d920((undefined *)((int)this + 4),param_2);
    if ((((uVar1 == 0) || (*(ushort *)(uVar1 + 0x18) < 1000)) ||
        (uVar1 = *(uint *)(uVar1 + 0x8c), uVar1 == 0)) ||
       ((((*(byte *)(uVar1 + 0x60) & 1) == 0 || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
        ((*(char *)(uVar1 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf))) != '\x0e'))))
       )) {
      uVar1 = 0;
    }
  }
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x1d8) = param_1;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf25 */
uint F_0056d0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56d0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1 != '\0') {
    *(undefined2 *)(this + 0xf6) = 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  if ((this != (undefined *)0x0) && (iVar6 = *(int *)(this + 0x70), iVar6 != 0)) {
    uVar1 = *(ushort *)(iVar6 + 0x7c);
    uVar2 = *(ushort *)(iVar6 + 0x7e);
  }
  *(undefined2 *)(this + 0x10e) = 0;
  if ((((char)param_1 == '\0') && (this[0x115] == (undefined1)0x0)) &&
     (this[0x112] != (undefined1)0x0)) {
    sVar3 = *(short *)(this + 0x10c);
    iVar6 = (int)sVar3;
    if ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2 <
        (int)((longlong)(ulonglong)uVar2 % (longlong)iVar6)) {
      *(short *)(this + 0x10e) = sVar3 - (short)((longlong)(ulonglong)uVar2 % (longlong)iVar6);
      uVar2 = (uVar2 - 1) + sVar3;
    }
  }
  sVar3 = *(short *)(this + 0xf4);
  if (sVar3 == 0) {
    sVar3 = (short)((longlong)(ulonglong)uVar1 / (longlong)(int)*(short *)(this + 0x10a));
  }
  sVar4 = *(short *)(this + 0xf6);
  *(short *)(this + 0xf4) = sVar3;
  if (sVar4 == 0) {
    sVar4 = (short)((longlong)(ulonglong)uVar2 / (longlong)(int)*(short *)(this + 0x10c));
  }
  *(short *)(this + 0xf6) = sVar4;
  iVar6 = 1;
  if (sVar3 != 0) {
    iVar6 = (int)sVar3;
  }
  *(short *)(this + 0xf4) = (short)iVar6;
  if (sVar4 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = (int)sVar4;
  }
  *(short *)(this + 0xf6) = (short)iVar5;
  *(short *)(this + 0xf8) = (short)(iVar5 * iVar6);
  return iVar5 * iVar6;
}

/* ref: FUN_0056d1e0 */
uint F_0056d1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56d1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    if ((*(int *)((int)this + 0x84) == 0) ||
       (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x84) + 0x70))), iVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar1 + 4);
      if (10000 < uVar3) {
        uVar3 = uVar3 / 10000;
      }
    }
  }
  uVar2 = *(uint *)((int)this + 0xa0);
  bVar4 = 0;
  if (*(byte *)((int)this + 0x110) != 0) {
    do {
      if ((int)*(short *)(uVar2 + 10) == uVar3) {
        return uVar2;
      }
      bVar4 = bVar4 + 1;
      uVar2 = uVar2 + 0xc;
    } while (bVar4 < *(byte *)((int)this + 0x110));
  }
  return 0;
}

/* ref: FUN_0056d250 */
uint F_0056d250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56d250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0056d1e0(this,param_1);
  if (param_1 == 0) {
    uVar3 = *(uint *)((int)this + 0x84);
  }
  else {
    uVar3 = F_0055d920((undefined *)((int)this + 4),param_1);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else if (((((*(ushort *)(uVar3 + 0x18) < 1000) || (uVar3 = *(uint *)(uVar3 + 0x8c), uVar3 == 0))
              || ((*(byte *)(uVar3 + 0x60) & 1) == 0)) ||
             (((*(byte *)(uVar3 + 0x60) & 4) == 0 || (*(char *)(uVar3 + 0x1c) != '\x01')))) ||
            (*((char *)GEN_TOP((*(int *)(uVar3 + 0xc) + 0xf))) != '\x0e')) {
      uVar3 = 0;
    }
  }
  if ((uVar2 != 0) &&
     (sVar1 = (short)((longlong)(ulonglong)(ushort)param_2 % (longlong)(*(short *)(uVar2 + 8) + 1)),
     sVar1 != 0)) {
    uVar2 = F_005bda70(((undefined *)GEN_TOP((*(int *)(uVar2 + 4) + -0x90 + sVar1 * 0x90))),0xe);
    return uVar2;
  }
  return uVar3;
}

/* ref: FUN_0056d300 */
ushort F_0056d300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56d300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0056d1e0(this,param_1);
  if (uVar1 == 0) {
    return 1;
  }
  return *(short *)(uVar1 + 8) + 1;
}

/* ref: FUN_0056d330 */
uint F_0056d330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56d330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if ((*(int *)((int)this + 0xa8) != 0) && (param_1 < *(int *)((int)this + 0xac))) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0xa8) + param_1 * 4)));
  }
  if ((*(int *)((int)this + 0x98) != 0) && (param_1 < *(int *)((int)this + 0x9c))) {
    uVar2 = F_00562610(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x98) + param_1 * 8))),param_1);
    return uVar2;
  }
  iVar1 = *(int *)((int)this + 0x84);
  if ((*(int *)(iVar1 + 0x104) != 0) && (*(int *)(iVar1 + 0x1cc) != 0)) {
    ((code *)*(gen_code32 *)(iVar1 + 0x1d0))(*(int *)(iVar1 + 0x1cc),param_1,iVar1 + 0x14c,iVar1);
    if (*(int *)(iVar1 + 0x104) == 0) {
      return 0;
    }
    return *((uint *)GEN_TOP((*(int *)(iVar1 + 0x104) + 0xf0)));
  }
  return 0;
}

/* ref: FUN_0056d3c0 */
uint F_0056d3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56d3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_2);
  *(char *)(in_ecx + 0x116) = (char)param_2;
  if (((*(int *)(in_ecx + 0x88) != 0) && ((char)param_2 == '\0')) &&
     (uVar1 = *((uint *)GEN_TOP((*(int *)(in_ecx + 0x88) + 0x70))), uVar1 != 0)) {
    *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) | 0x100000;
    *(uint *)(uVar1 + 0x88) = *(uint *)(uVar1 + 0x88) & 0xffffff7f;
  }
  return uVar1;
}

/* ref: FUN_0056d400 */
uint F_0056d400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x56d400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  short sVar3;
  
  if (param_3 == 0) {
    iVar1 = *(int *)((int)this + 0x84);
  }
  else {
    uVar2 = F_0055d920((undefined *)((int)this + 4),param_3);
    if ((((uVar2 == 0) || (*(ushort *)(uVar2 + 0x18) < 1000)) ||
        (iVar1 = *(int *)(uVar2 + 0x8c), iVar1 == 0)) ||
       ((((*(byte *)(iVar1 + 0x60) & 1) == 0 || ((*(byte *)(iVar1 + 0x60) & 4) == 0)) ||
        ((*(char *)(iVar1 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(iVar1 + 0xc) + 0xf))) != '\x0e'))))
       )) {
      iVar1 = 0;
    }
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_1 < 3) {
      *(undefined1 *)(iVar1 + 0x8d + param_1) = (undefined1)param_2;
    }
    if (*(int *)(iVar1 + 0x70) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x70) + 4)));
      if (10000 < uVar2) {
        uVar2 = uVar2 / 10000;
      }
    }
    uVar2 = F_0056d1e0(this,uVar2);
    if ((uVar2 != 0) && (sVar3 = 0, 0 < *(short *)(uVar2 + 8))) {
      do {
        iVar1 = sVar3 * 0x90 + *(int *)(uVar2 + 4);
        if (((iVar1 != 0) &&
            ((((999 < *(ushort *)(iVar1 + 0x18) && (iVar1 = *(int *)(iVar1 + 0x8c), iVar1 != 0)) &&
              ((*(byte *)(iVar1 + 0x60) & 1) != 0)) &&
             (((*(byte *)(iVar1 + 0x60) & 4) != 0 && (*(char *)(iVar1 + 0x1c) == '\x01')))))) &&
           ((*((char *)GEN_TOP((*(int *)(iVar1 + 0xc) + 0xf))) == '\x0e' && (param_1 < 3)))) {
          *(undefined1 *)(iVar1 + 0x8d + param_1) = (undefined1)param_2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *(short *)(uVar2 + 8));
    }
  }
  return uVar2;
}

/* ref: FUN_0056d510 */
uint F_0056d510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56d510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  
  if (param_2 == 0) {
    iVar2 = *(int *)((int)this + 0x84);
  }
  else {
    uVar6 = F_0055d920((undefined *)((int)this + 4),param_2);
    if ((((uVar6 == 0) || (*(ushort *)(uVar6 + 0x18) < 1000)) ||
        (iVar2 = *(int *)(uVar6 + 0x8c), iVar2 == 0)) ||
       ((((*(byte *)(iVar2 + 0x60) & 1) == 0 || ((*(byte *)(iVar2 + 0x60) & 4) == 0)) ||
        ((*(char *)(iVar2 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(iVar2 + 0xc) + 0xf))) != '\x0e'))))
       )) {
      iVar2 = 0;
    }
  }
  uVar6 = 0;
  if (iVar2 != 0) {
    uVar5 = (param_1 & 1) << 0x11;
    *(uint *)(iVar2 + 100) = *(uint *)(iVar2 + 100) & 0xfffdffff | uVar5;
    if (*(int *)(iVar2 + 0x70) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x70) + 4)));
      if (10000 < uVar6) {
        uVar6 = uVar6 / 10000;
      }
    }
    uVar3 = F_0056d1e0(this,uVar6);
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = 0;
      sVar4 = 0;
      if (0 < *(short *)(uVar3 + 8)) {
        do {
          uVar6 = sVar4 * 0x90 + *(int *)(uVar3 + 4);
          if (((uVar6 != 0) && (999 < *(ushort *)(uVar6 + 0x18))) &&
             (iVar2 = *(int *)(uVar6 + 0x8c), iVar2 != 0)) {
            bVar1 = *(byte *)(iVar2 + 0x60);
            uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar1);
            if (((((bVar1 & 1) != 0) && ((bVar1 & 4) != 0)) && (*(char *)(iVar2 + 0x1c) == '\x01'))
               && (uVar6 = *(uint *)(iVar2 + 0xc), *(char *)(uVar6 + 0xf) == '\x0e')) {
              sVar7 = *(short *)(iVar2 + 0x20c);
              *(uint *)(iVar2 + 100) = *(uint *)(iVar2 + 100) & 0xfffdffff | uVar5;
              uVar6 = 0;
              for (; sVar7 != 0; sVar7 = sVar7 + 1) {
                uVar6 = F_005625e0(iVar2,0);
                if (uVar6 != 0) {
                  *(uint *)(uVar6 + 0x88) =
                       *(uint *)(uVar6 + 0x88) & 0xfff7ffff | (param_1 & 1) << 0x13;
                }
              }
            }
          }
          sVar4 = sVar4 + 1;
        } while (sVar4 < *(short *)(uVar3 + 8));
      }
    }
  }
  return uVar6;
}

/* ref: FUN_0056d690 */
uint F_0056d690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56d690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  
  if (param_2 == 0) {
    iVar4 = *(int *)((int)this + 0x84);
  }
  else {
    uVar5 = F_0055d920((undefined *)((int)this + 4),param_2);
    if ((((uVar5 == 0) || (*(ushort *)(uVar5 + 0x18) < 1000)) ||
        (iVar4 = *(int *)(uVar5 + 0x8c), iVar4 == 0)) ||
       ((((*(byte *)(iVar4 + 0x60) & 1) == 0 || ((*(byte *)(iVar4 + 0x60) & 4) == 0)) ||
        ((*(char *)(iVar4 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(iVar4 + 0xc) + 0xf))) != '\x0e'))))
       )) {
      iVar4 = 0;
    }
  }
  uVar5 = 0;
  if (iVar4 != 0) {
    bVar1 = ((byte)param_1 & 1) * '\x02';
    *(byte *)(iVar4 + 0x220) = *(byte *)(iVar4 + 0x220) & 0xfd | bVar1;
    if (*(int *)(iVar4 + 0x70) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((*(int *)(iVar4 + 0x70) + 4)));
      if (10000 < uVar5) {
        uVar5 = uVar5 / 10000;
      }
    }
    uVar3 = F_0056d1e0(this,uVar5);
    uVar5 = uVar3;
    if ((uVar3 != 0) && (sVar6 = 0, 0 < *(short *)(uVar3 + 8))) {
      do {
        iVar4 = sVar6 * 0x90 + *(int *)(uVar3 + 4);
        if (((iVar4 != 0) &&
            ((((uVar5 = 1000, 999 < *(ushort *)(iVar4 + 0x18) &&
               (iVar4 = *(int *)(iVar4 + 0x8c), iVar4 != 0)) && ((*(byte *)(iVar4 + 0x60) & 1) != 0)
              ) && (((*(byte *)(iVar4 + 0x60) & 4) != 0 && (*(char *)(iVar4 + 0x1c) == '\x01'))))))
           && (*((char *)GEN_TOP((*(int *)(iVar4 + 0xc) + 0xf))) == '\x0e')) {
          uVar5 = CONCAT31(3,*(undefined1 *)(iVar4 + 0x220)) & 0xfffffffd;
          bVar2 = (byte)uVar5 | bVar1;
          uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar2);
          *(byte *)(iVar4 + 0x220) = bVar2;
        }
        sVar6 = sVar6 + 1;
      } while (sVar6 < *(short *)(uVar3 + 8));
    }
  }
  return uVar5;
}

/* ref: FUN_0056d7b0 */
uint F_0056d7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56d7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  uVar3 = param_1;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    *(undefined4 *)((int)this + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
    *(undefined4 *)((int)this + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
    *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
    *(byte *)((int)this + 0x220) =
         *(byte *)((int)this + 0x220) ^
         (*(byte *)(param_1 + 0x220) ^ *(byte *)((int)this + 0x220)) & 2;
    uVar5 = 0;
    do {
      iVar1 = uVar5 * 4 + 0x14c;
      iVar2 = *(int *)(iVar1 + param_1);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = *(uint *)(iVar2 + 4);
      if (10000 < uVar3) {
        uVar3 = uVar3 / 10000;
      }
      uVar3 = F_0055d920((undefined *)((int)this + 4),uVar3);
      bVar4 = (char)uVar5 + 1;
      uVar5 = (uint)bVar4;
      *(uint *)(iVar1 + (int)this) = uVar3;
    } while (bVar4 < 0x20);
  }
  return uVar3;
}

/* ref: FUN_0056d860 */
uint F_0056d860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56d860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_0055d920((undefined *)((int)this + 4),param_1);
  if ((((uVar2 != 0) && (999 < *(ushort *)(uVar2 + 0x18))) &&
      (uVar2 = *(uint *)(uVar2 + 0x8c), uVar2 != 0)) &&
     (((iVar1 = *(int *)(uVar2 + 0x70), iVar1 != 0 && ((*(uint *)(iVar1 + 0x84) & 0x100000) != 0))
      && ((*(uint *)(iVar1 + 0x88) & 0x20000) == 0)))) {
    *(uint *)((int)this + 0x1dc) = uVar2;
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf16 */
uint F_0056d8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56d8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x70);
  }
  *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x1000000;
  *(undefined4 *)(this + 0xf4) = 0x10001;
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(param_1 + 0xc));
  if (uVar2 != 0) {
    if ((((*(ushort *)(uVar2 + 0x18) < 1000) || (iVar1 = *(int *)(uVar2 + 0x8c), iVar1 == 0)) ||
        ((*(byte *)(iVar1 + 0x60) & 1) == 0)) ||
       ((((*(byte *)(iVar1 + 0x60) & 4) == 0 || (*(char *)(iVar1 + 0x1c) != '\x01')) ||
        (*((char *)GEN_TOP((*(int *)(iVar1 + 0xc) + 0xf))) != '\x0e')))) {
      iVar1 = 0;
    }
    *(int *)(this + 0x84) = iVar1;
  }
  uVar2 = F_0055d920(this + 4,*(undefined4 *)(param_1 + 0x10));
  if (uVar2 != 0) {
    if (((*(ushort *)(uVar2 + 0x18) < 1000) || (iVar1 = *(int *)(uVar2 + 0x8c), iVar1 == 0)) ||
       (((*(byte *)(iVar1 + 0x60) & 1) == 0 ||
        ((((*(byte *)(iVar1 + 0x60) & 4) == 0 || (*(char *)(iVar1 + 0x1c) != '\x01')) ||
         (*((char *)GEN_TOP((*(int *)(iVar1 + 0xc) + 0xf))) != '\r')))))) {
      iVar1 = 0;
    }
    *(int *)(this + 0x88) = iVar1;
  }
  uVar3 = (uint)(char)this[0x80];
  uVar2 = uVar3;
  if (((uVar3 == 0) || (uVar2 = 0, uVar3 == 1)) || (uVar2 = uVar3 - 2, uVar2 == 0)) {
    this[0x111] = (undefined1)0x2;
  }
  return uVar2;
}

/* ref: FUN_0056d9c0 */
uint F_0056d9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56d9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1);
  if (*(int *)((int)this + 0x70) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x70) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  return uVar2;
}

/* ref: FUN_0056d9f0 */
unsigned int F_0056d9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x56d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  char * param_5 = (char *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort * puVar1;
  int * piVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint * puVar6;
  byte bVar7;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x2a) = 0;
    *(char *)(param_1 + 0x2c) = *param_4;
    *(byte *)(param_1 + 0x2b) = (byte)param_3;
    piVar2 = *(int * PTR32 *)((int)this + 0x94);
    (*(undefined4 *)(gen_frame + 0x0)) = param_2;
    (*(int *)(gen_frame + 0x4)) = param_1;
    if (piVar2 == (int *)0x0) {
      uVar5 = *(uint *)((int)this + 0x84);
    }
    else {
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,&(*(undefined4 *)(gen_frame + 0x0)));
    }
    *(uint *)(param_1 + 0x20) = uVar5;
    puVar6 = *(uint * PTR32 *)((int)this + 0xa0);
    bVar7 = 0;
    if (*(char *)((int)this + 0x110) != '\0') {
      do {
        if (*puVar6 == uVar5) {
          puVar1 = (ushort *)((int)this + (uint)bVar7 * 2 + 0x170);
          (*(ushort * PTR32 *)(gen_frame + 0x8)) = puVar1;
          lVar4 = (longlong)(ulonglong)*puVar1 % (longlong)((short)puVar6[2] + 1);
          if (((short)lVar4 != 0) &&
             (((((iVar3 = (puVar6[1] - 0x90) + ((uint)lVar4 & 0xffff) * 0x90, iVar3 == 0 ||
                 (*(ushort *)(iVar3 + 0x18) < 1000)) ||
                (uVar5 = *(uint *)(iVar3 + 0x8c), uVar5 == 0)) ||
               (((*(byte *)(uVar5 + 0x60) & 1) == 0 || ((*(byte *)(uVar5 + 0x60) & 4) == 0)))) ||
              ((*(char *)(uVar5 + 0x1c) != '\x01' ||
               (*((char *)GEN_TOP((*(int *)(uVar5 + 0xc) + 0xf))) != '\x0e')))))) {
            uVar5 = 0;
          }
          *(uint *)(param_1 + 0x20) = uVar5;
          *puVar1 = *puVar1 + 1;
          break;
        }
        bVar7 = bVar7 + 1;
        puVar6 = puVar6 + 3;
      } while (bVar7 < *(byte *)((int)this + 0x110));
    }
    if (((byte)param_3 & 1) == 0) {
      if (((byte)param_3 & 2) != 0) {
        *(undefined1 *)(param_1 + 0x2a) = 1;
        if (*param_5 == '\0') {
          *param_4 = *param_4 + '\x01';
        }
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x20) + 0x50))))(*(int * PTR32 *)(param_1 + 0x20),1);
        *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x8e))) = 0;
        *param_5 = '\x01';
        if ((*(int *)((int)this + 0x160) != 0) && (*(char *)((int)this + 0x18e) != '\0')) {
          *(undefined1 *)(param_1 + 0x2a) = 0;
        }
        *(int *)((int)this + 0x160) = *(int *)((int)this + 0x160) + 1;
      }
    }
    else {
      *param_5 = '\0';
      *param_4 = *param_4 + -1;
    }
    if (((*(byte *)(param_1 + 0x2b) & 2) == 0) &&
       (*((short *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20c))) == 0)) {
      *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 4;
    }
    if (*(char *)((int)this + 0x191) != '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,param_2,0,0);
      if ((*(int *)(param_1 + 0x20) != 0) &&
         (iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x70))), iVar3 != 0)) {
        *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(iVar3 + 0x7e);
        return 0;
      }
      *(undefined2 *)(param_1 + 0x28) = 0;
      return 0;
    }
    *(undefined2 *)(param_1 + 0x28) = *((undefined2 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x206)));
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf21 */
unsigned int F_0056dbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56dbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 < *(uint *)(this + 0x158)) {
    iVar2 = *((int *)GEN_TOP((*(int *)(this + 300) + param_1 * 4)));
    bVar1 = *(byte *)(iVar2 + 0x2a);
    if ((byte)param_2 == 0) {
      *(byte *)(iVar2 + 0x2a) = *(byte *)(iVar2 + 0x2a) & 0xdf;
    }
    else {
      *(byte *)(iVar2 + 0x2a) = *(byte *)(iVar2 + 0x2a) | 0x20;
    }
    if ((byte)param_2 != (bVar1 >> 5 & 1)) {
      piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 300) + param_1 * 4))) + 0x20)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(uint)((byte)param_2 == 0));
      ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,param_1,0,0);
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf22 */
byte F_0056dc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56dc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(uint *)(this + 0x158) <= param_1) {
    return 0;
  }
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 300) + param_1 * 4))) + 0x2a))) >> 5 & 1;
}

/* ref: FUN_0056dc60 */
uint F_0056dc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56dc60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < *(uint *)(in_ecx + 0x158)) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 300) + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_0056dc90 */
unsigned int F_0056dc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56dc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  int * piVar3;
  undefined4 * puVar4;
  short sVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0xa0);
  *(char *)((int)this + 0x191) = (char)param_1;
  bVar2 = 0;
  if (*(char *)((int)this + 0x110) != '\0') {
    do {
      sVar5 = 0;
      if (*(ushort *)(puVar4 + 2) < 0x8000) {
        do {
          if (sVar5 == 0) {
            piVar3 = (int *)*puVar4;
          }
          else {
            iVar1 = puVar4[1] + -0x90 + sVar5 * 0x90;
            if (((((iVar1 == 0) || (*(ushort *)(iVar1 + 0x18) < 1000)) ||
                 (piVar3 = *(int * PTR32 *)(iVar1 + 0x8c), piVar3 == (int *)0x0)) ||
                (((*(byte *)(piVar3 + 0x18) & 1) == 0 || ((*(byte *)(piVar3 + 0x18) & 4) == 0)))) ||
               (((char)piVar3[7] != '\x01' || (*(char *)(piVar3[3] + 0xf) != '\x0e')))) {
              piVar3 = (int *)0x0;
            }
          }
          if ((piVar3 != (int *)0x0) &&
             (*(char *)((int)piVar3 + 0x8a) = (char)param_1, (char)param_1 != '\0')) {
            ((code *)*(gen_code32 *)(*piVar3 + 0x58))(piVar3);
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 <= *(short *)(puVar4 + 2));
      }
      bVar2 = bVar2 + 1;
      puVar4 = puVar4 + 3;
    } while (bVar2 < *(byte *)((int)this + 0x110));
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentScrollBar::vf9 */
uint F_0056dd70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x56dd70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xa4) = param_2;
  uVar1 = F_00562a80(param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentScrollBar::vf12 */
unsigned int F_0056dd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56dd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if ((this != (undefined *)0x0) && (iVar1 = *(int *)(this + 0x70), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) =
         *(uint *)(iVar1 + 0x84) ^ (param_1 << 0x1a ^ *(uint *)(iVar1 + 0x84)) & 0x4000000;
  }
  if (*(int *)(this + 0x88) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x30))))(*(int * PTR32 *)(this + 0x88),param_1);
  }
  if (*(int *)(this + 0x90) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x90) + 0x30))))(*(int * PTR32 *)(this + 0x90),param_1);
  }
  if (*(int *)(this + 0x94) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x30))))(*(int * PTR32 *)(this + 0x94),param_1);
  }
  if (*(int *)(this + 0x98) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x98) + 0x30))))(*(int * PTR32 *)(this + 0x98),param_1);
  }
  return 0;
}

/* ref: FUN_0056de20 */
uint F_0056de20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56de20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint in_EAX = 0;
  undefined4 local_8;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94)));
  if ((piVar1 != (int *)0x0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) != 0)) {
    bVar4 = 0 < (*(int *)&gen_args[1]);
    bVar3 = (*(int *)&gen_args[1]) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8)));
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),bVar4);
    local_8 = CONCAT31((int3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8),bVar3);
    if (piVar1[0x1c] == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = (bool)((byte)(*(uint *)(piVar1[0x1c] + 0x84) >> 0x15) & 1);
    }
    if (bVar5 != bVar4) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(*(int *)&gen_args[1]));
    }
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) == 0) ||
       (iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) + 0x70))), iVar2 == 0)) {
      in_EAX = 0;
    }
    else {
      in_EAX = *(uint *)(iVar2 + 0x84) >> 0x15 & 1;
    }
    if (SUB41(in_EAX,0) != bVar3) {
      in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) + 0x28))))
                         (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))),local_8);
    }
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentDropDownList::vf16 */
uint F_0056df00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56df00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  uVar1 = F_0055d920(this + 4,*(undefined4 *)(param_1 + 0xc));
  if (uVar1 != 0) {
    if ((((*(ushort *)(uVar1 + 0x18) < 1000) || (iVar2 = *(int *)(uVar1 + 0x8c), iVar2 == 0)) ||
        ((*(byte *)(iVar2 + 0x60) & 1) == 0)) ||
       ((((*(byte *)(iVar2 + 0x60) & 4) == 0 || (*(char *)(iVar2 + 0x1c) != '\x01')) ||
        (*((char *)GEN_TOP((*(int *)(iVar2 + 0xc) + 0xf))) != '\t')))) {
      iVar2 = 0;
    }
    *(int *)(this + 0x88) = iVar2;
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x111) = 2;
    }
  }
  this_00 = (undefined *)F_0055d920(this + 4,*(undefined4 *)(param_1 + 0x10));
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    if (((*(ushort *)((int)this_00 + 0x18) < 1000) ||
        (iVar2 = *(int *)((int)this_00 + 0x8c), iVar2 == 0)) ||
       (((*(byte *)(iVar2 + 0x60) & 1) == 0 ||
        ((((*(byte *)(iVar2 + 0x60) & 4) == 0 || (*(char *)(iVar2 + 0x1c) != '\x01')) ||
         (*((char *)GEN_TOP((*(int *)(iVar2 + 0xc) + 0xf))) != '\x01')))))) {
      iVar2 = 0;
    }
    *(int *)(this + 0x84) = iVar2;
    if (iVar2 == 0) {
      uVar1 = F_005bdc10(this_00,3);
      *(uint *)(this + 0x84) = uVar1;
      if (uVar1 == 0) {
        uVar1 = F_005bdc60(this_00,4);
        *(uint *)(this + 0x84) = uVar1;
      }
    }
    uVar1 = *(uint *)(this + 0x84);
    if (uVar1 != 0) {
      *(undefined * PTR32 *)(uVar1 + 0x10c) = this;
    }
  }
  return uVar1;
}

/* ref: FUN_0056e010 */
uint F_0056e010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56e010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4),*(undefined4 *)((int)this + 0x90));
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) =
         *(uint *)(uVar1 + 0x84) ^ ((param_1 & 0xff) << 0x14 ^ *(uint *)(uVar1 + 0x84)) & 0x100000;
    *(uint *)(uVar1 + 0x88) =
         *(uint *)(uVar1 + 0x88) ^
         ((uint)((char)param_1 == '\0') << 7 ^ *(uint *)(uVar1 + 0x88)) & 0x80;
  }
  return uVar1;
}

/* ref: FUN_0056e070 */
uint F_0056e070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56e070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4),*(undefined4 *)((int)this + 0x94));
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) =
         *(uint *)(uVar1 + 0x84) ^ ((param_1 & 0xff) << 0x14 ^ *(uint *)(uVar1 + 0x84)) & 0x100000;
    *(uint *)(uVar1 + 0x88) =
         *(uint *)(uVar1 + 0x88) ^
         ((uint)((char)param_1 == '\0') << 7 ^ *(uint *)(uVar1 + 0x88)) & 0x80;
  }
  return uVar1;
}

/* ref: FUN_0056e0d0 */
uint F_0056e0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56e0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4),*(undefined4 *)((int)this + 0x98));
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) =
         *(uint *)(uVar1 + 0x84) ^ ((param_1 & 0xff) << 0x14 ^ *(uint *)(uVar1 + 0x84)) & 0x100000;
    *(uint *)(uVar1 + 0x88) =
         *(uint *)(uVar1 + 0x88) ^
         ((uint)((char)param_1 == '\0') << 7 ^ *(uint *)(uVar1 + 0x88)) & 0x80;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentWindow::vf23 */
uint F_0056e130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56e130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this + 4,*(undefined4 *)(this + 0xa0));
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) =
         *(uint *)(uVar1 + 0x84) ^ ((param_1 & 0xff) << 0x14 ^ *(uint *)(uVar1 + 0x84)) & 0x100000;
    *(uint *)(uVar1 + 0x88) =
         *(uint *)(uVar1 + 0x88) ^
         ((uint)((char)param_1 == '\0') << 7 ^ *(uint *)(uVar1 + 0x88)) & 0x80;
  }
  return uVar1;
}

/* ref: FUN_0056e190 */
unsigned int F_0056e190(unsigned int gen_a0)
{
  GEN_ENTER(0x56e190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint * puVar1;
  
  if ((in_ecx != 0) && (*(int *)(in_ecx + 0x70) != 0)) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(in_ecx + 0x70) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentDragDrop::vf16 */
uint F_0056e1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56e1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    uVar1 = F_0055d920(this + 4,*(undefined4 *)(param_1 + 0xc));
    if ((((uVar1 == 0) || (*(ushort *)(uVar1 + 0x18) < 1000)) ||
        (uVar1 = *(uint *)(uVar1 + 0x8c), uVar1 == 0)) ||
       ((((*(byte *)(uVar1 + 0x60) & 1) == 0 || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
        ((*(char *)(uVar1 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf))) != '\x0f'))))
       )) {
      uVar1 = 0;
    }
    *(uint *)(this + 0xa4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_0056e230 */
uint F_0056e230(unsigned int gen_a0)
{
  GEN_ENTER(0x56e230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x88);
  if ((iVar1 != 0) && ((*(byte *)((int)this + 0xa8) & 2) != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x38))))((int)this + 0x84);
  uVar2 = *(uint *)((int)this + 0xa4);
  if (uVar2 != 0) {
    *(undefined1 *)(uVar2 + 0x95) = 0;
  }
  if ((*(byte *)((int)this + 0xaa) & 0x20) != 0) {
    uVar2 = F_00573cd0((undefined *)(REFG(int, 0x1379860) + 0x3c));
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_0056e2a0 */
unsigned int F_0056e2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x56e2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) | 0x100000;
    *(uint *)(uVar2 + 0x88) = *(uint *)(uVar2 + 0x88) & 0xffffff7f;
  }
  iVar1 = *(int *)((int)this + 0x20);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x84) < 1)) && (iVar1 = *(int *)(iVar1 + 0x70), iVar1 != 0)
     ) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  F_00563170((undefined *)((int)this + -0x84),(uint)(~(*(byte *)((int)this + 0x26) >> 4) & 1));
  return 0;
}

/* ref: FUN_0056e310 */
uint F_0056e310(unsigned int gen_a0)
{
  GEN_ENTER(0x56e310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x90) != 0) {
    F_00406ad0(*(int *)((int)this + 0x90));
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  uVar1 = F_0056e230(this);
  return uVar1;
}

/* ref: FUN_0056e340 */
byte F_0056e340(unsigned int gen_a0)
{
  GEN_ENTER(0x56e340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  
  iVar5 = REFG(int, 0x1379860);
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x14) + 0x34))))
                    (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x14),&(*(uint *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x4)),0);
  if ((char)uVar7 == '\0') {
    iVar5 = *(int *)(iVar5 + 0x18);
    (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)(iVar5 + 0xc5c);
    (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(iVar5 + 0xc5e);
  }
  iVar5 = *(int *)((int)this + 0x70);
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  if (iVar5 != 0) {
    (*(float *)(gen_frame + 0x10)) = *(float *)(iVar5 + 0x30);
    (*(float *)(gen_frame + 0xc)) = *(float *)(iVar5 + 0x34);
  }
  F_00563250(iVar5,(uint)&(*(float *)(gen_frame + 0x18)),(uint)&(*(float *)(gen_frame + 0x14)));
  fVar10 = (float10)(*(float *)(gen_frame + 0x18));
  fVar11 = (float10)(*(float *)(gen_frame + 0x14));
  if (*(char *)(REFG(int, 0x1379860) + 0x21a) == '\0') {
    iVar5 = *(int *)((int)this + 0x88);
    uVar8 = (*(ushort *)(gen_frame + 0x0));
    uVar6 = (*(ushort *)(gen_frame + 0x0));
    if (iVar5 != 0) {
      uVar8 = *(ushort *)(iVar5 + 0x7c);
      uVar6 = *(ushort *)(iVar5 + 0x7e);
    }
    (*(float *)(gen_frame + 0x14)) = (float)(uVar8 >> 1);
    (*(float *)(gen_frame + 0x18)) = (float)(uVar6 >> 1);
  }
  else {
    sVar3 = *(short *)((int)this + 0x94);
    sVar4 = *(short *)((int)this + 0x96);
    (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)sVar3);
    (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)sVar4);
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(int)sVar3 * fVar10);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(int)sVar4 * fVar11);
  }
  uVar7 = (uint)(short)(ushort)(*(uint *)(gen_frame + 0x8));
  iVar5 = *(int *)((int)this + 0x88);
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)(int)uVar7 - (float10)(*(float *)(gen_frame + 0x14))) - (float10)(*(float *)(gen_frame + 0x10))))) /
                 fVar10)));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)(int)(short)(*(uint *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x18))) -
                                  (float10)(*(float *)(gen_frame + 0xc))))) / fVar11)));
  (*(float *)(gen_frame + 0xc)) = fVar2;
  if (iVar5 != 0) {
    if (((*(uint *)(iVar5 + 0x88) & 1) == 0) &&
       ((bVar9 = GEN_ISNAN((float10)*(float *)(iVar5 + 0x38)) || GEN_ISNAN((float10)fVar1),
        uVar7 = (uint)((ushort)(*(uint *)(gen_frame + 0x8)) & 0xff),
        bVar9 == (bVar9 || (float10)*(float *)(iVar5 + 0x38) == (float10)fVar1) ||
        (bVar9 = GEN_ISNAN((float10)*(float *)(iVar5 + 0x3c)) || GEN_ISNAN((float10)fVar2),
        uVar7 = (uint)((ushort)(*(uint *)(gen_frame + 0x8)) & 0xff),
        bVar9 == (bVar9 || (float10)*(float *)(iVar5 + 0x3c) == (float10)fVar2))))) {
      *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) | 1;
    }
    *(float *)(iVar5 + 0x38) = fVar1;
    *(float *)(iVar5 + 0x3c) = fVar2;
  }
  return (byte)uVar7;
}

/* ref: FUN_0056e4d0 */
unsigned int F_0056e4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56e4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  char cVar2;
  
  *(byte *)((int)this + 0xaa) =
       *(byte *)((int)this + 0xaa) ^ ((char)param_1 << 4 ^ *(byte *)((int)this + 0xaa)) & 0x10;
  cVar2 = (-((char)param_1 != '\0') & 0x81U) - 1;
  if (*(int *)((int)this + 0x6c) != 0) {
    *((char *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x53))) = cVar2;
  }
  if ((*(int *)((int)this + 0xa4) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x70))), iVar1 != 0)) {
    *(char *)(iVar1 + 0x53) = cVar2;
  }
  F_00563170(this,(uint)((char)param_1 == '\0'));
  return 0;
}

/* ref: FUN_0056e530 */
uint F_0056e530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56e530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_2);
  *(byte *)(in_ecx + 0xa8) = (byte)param_2;
  if (((byte)param_2 & 1) == 0) {
    if (((((byte)param_2 & 2) != 0) && (*(int *)(in_ecx + 0xa4) != 0)) &&
       (uVar2 = *((uint *)GEN_TOP((*(int *)(in_ecx + 0xa4) + 0x70))), uVar2 != 0)) {
      *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xffefffff;
      *(uint *)(uVar2 + 0x88) = *(uint *)(uVar2 + 0x88) | 0x80;
    }
  }
  else if (*(int *)(in_ecx + 0xa4) != 0) {
    uVar1 = *((uint *)GEN_TOP((*(int *)(in_ecx + 0xa4) + 0x70)));
    uVar2 = 0;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) | 0x100000;
      *(uint *)(uVar1 + 0x88) = *(uint *)(uVar1 + 0x88) & 0xffffff7f;
      return uVar1;
    }
  }
  return uVar2;
}

/* ref: FUN_0056e5a0 */
uint F_0056e5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x56e5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x300);
  uVar2 = 0;
  if (iVar4 != 0) {
    *(undefined4 *)((int)this + 0x304) = 0xffffffff;
    *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0xffefffff;
    *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x80;
    iVar4 = *(int *)((int)this + 0x330);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0xffefffff;
      *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x80;
    }
    iVar4 = *(int *)((int)this + 0x32c);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0xffefffff;
      *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x80;
    }
    piVar3 = (int *)((int)this + 0x30c);
    iVar4 = 3;
    do {
      if ((piVar3[-1] != 0) && (iVar1 = *(int *)(piVar3[-1] + 0x70), iVar1 != 0)) {
        *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
      }
      if ((*piVar3 != 0) && (iVar1 = *(int *)(*piVar3 + 0x70), iVar1 != 0)) {
        *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
      }
      uVar2 = 0;
      if ((piVar3[1] != 0) && (uVar2 = *(uint *)(piVar3[1] + 0x70), uVar2 != 0)) {
        *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xffefffff;
        *(uint *)(uVar2 + 0x88) = *(uint *)(uVar2 + 0x88) | 0x80;
      }
      piVar3 = piVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar2;
}

/* ref: FUN_0056e660 */
uint F_0056e660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x56e660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  int iVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  
  if ((this == (undefined *)0x170) || (iVar1 = *(int *)((int)this + -0x100), iVar1 == 0)) {
    sVar4 = (short)param_4;
    sVar2 = sVar4;
  }
  else {
    sVar4 = (short)(int)*(float *)(iVar1 + 0x30);
    sVar2 = (short)(int)*(float *)(iVar1 + 0x34);
  }
  *param_1 = (int)sVar4;
  *param_2 = (int)sVar2;
  if ((this == (undefined *)0x170) || (*(int *)((int)this + -0x100) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + -0x100) + 0x7c)));
  }
  *param_3 = uVar3;
  if ((this != (undefined *)0x170) && (*(int *)((int)this + -0x100) != 0)) {
    uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + -0x100) + 0x7e)));
    *param_4 = uVar3;
    return uVar3;
  }
  *param_4 = 0;
  return (uint)param_4;
}

/* ref: FUN_0056e6e0 */
uint F_0056e6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x56e6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 0x26c);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = iVar3 / 10;
      iVar2 = iVar3 >> 0x1f;
      iVar4 = iVar4 + 1;
      iVar3 = iVar1;
    } while (0 < iVar1);
    if (iVar4 != 0) {
      *(int *)((int)this + 0x180) = iVar4;
      return -iVar2;
    }
  }
  *(undefined4 *)((int)this + 0x180) = 1;
  return 1;
}

/* ref: FUN_0056e740 */
uint F_0056e740(unsigned int gen_a0)
{
  GEN_ENTER(0x56e740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined1 *)((int)this + 0x220) = 0;
  if ((*(int *)((int)this + 0x164) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x164) + 0x70))), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  if ((*(int *)((int)this + 0x168) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x168) + 0x70))), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  if ((*(int *)((int)this + 0x16c) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x16c) + 0x70))), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  if ((*(int *)((int)this + 0x170) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x170) + 0x70))), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  if ((*(int *)((int)this + 0x174) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x174) + 0x70))), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  if ((*(int *)((int)this + 0x178) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x178) + 0x70))), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  if ((*(int *)((int)this + 0x17c) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x17c) + 0x70))), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  if ((*(int *)((int)this + 0x180) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70))), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  if ((*(int *)((int)this + 0x184) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x184) + 0x70))), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  if ((*(int *)((int)this + 0x188) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x188) + 0x70))), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  iVar1 = *(int *)((int)this + 0xfc);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  uVar2 = *(uint *)((int)this + 0x108);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xffefffff;
    *(uint *)(uVar2 + 0x88) = *(uint *)(uVar2 + 0x88) | 0x80;
  }
  iVar1 = *(int *)((int)this + 0xe8);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  return uVar2;
}

/* ref: FUN_0056e8d0 */
ushort F_0056e8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x56e8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  short * param_3 = (short *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  short sVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  undefined4 local_1c;
  
  sVar6 = 0;
  uVar3 = 0;
  if ((ushort)param_5 != 0) {
    uVar4 = (uint)(ushort)param_5;
    param_5 = 0;
    if (uVar4 != 0) {
      do {
        *(short *)param_2 = *(short *)param_2 + sVar6;
        if ((int)(uint)*(ushort *)(param_1 + 0x22a) < (int)*(short *)param_2 + (int)(short)param_6)
        {
          *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 0x228);
          *param_3 = *(short *)(param_1 + 0x22e);
          *(char *)(param_1 + 0x221) = *(char *)(param_1 + 0x221) + '\x01';
        }
        sVar6 = *param_3;
        iVar5 = *(int *)(param_4 + param_5 * 4);
        sVar1 = *(short *)param_2;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar5 + 0x70);
        }
        if (iVar5 != 0) {
          if (((*(uint *)(iVar5 + 0x88) & 1) == 0) &&
             ((fVar9 = (float10)(int)sVar1,
              bVar8 = GEN_ISNAN((float10)*(float *)(iVar5 + 0x38)) || GEN_ISNAN(fVar9),
              bVar8 == (bVar8 || (float10)*(float *)(iVar5 + 0x38) == fVar9) ||
              (fVar9 = (float10)(int)sVar6,
              bVar8 = GEN_ISNAN((float10)*(float *)(iVar5 + 0x3c)) || GEN_ISNAN(fVar9),
              bVar8 == (bVar8 || (float10)*(float *)(iVar5 + 0x3c) == fVar9))))) {
            *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) | 1;
          }
          *(float *)(iVar5 + 0x38) = (float)(int)sVar1;
          *(float *)(iVar5 + 0x3c) = (float)(int)sVar6;
        }
        *(short *)param_2 = *(short *)param_2 + (short)param_6;
        iVar2 = *(int *)(param_4 + param_5 * 4);
        iVar7 = (uint)*(byte *)(param_1 + 0x221) * 0x2c;
        iVar5 = iVar7 + 0x1c4 + param_1;
        if ((*(ushort *)(iVar7 + 0x1ec + param_1) < 10) && (iVar2 != 0)) {
          local_1c = CONCAT31((int3)((uint)*(undefined4 *)(iVar2 + 0x78) >> 8),
                              (*(byte *)(param_1 + 0x221) + 5) * '\n' + *(char *)(iVar5 + 0x28));
          *(undefined4 *)(iVar2 + 0x78) = local_1c;
          *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(iVar2 + 0x7c);
          *(undefined1 *)(iVar2 + 0x80) = *(undefined1 *)(iVar2 + 0x80);
          *((int *)GEN_TOP((iVar5 + *(short *)(iVar5 + 0x28) * 4))) = iVar2;
          *(short *)(iVar5 + 0x28) = *(short *)(iVar5 + 0x28) + 1;
        }
        param_5 = param_5 + 1;
        sVar6 = (short)param_7;
      } while (param_5 < uVar4);
    }
    uVar3 = *(ushort *)(param_1 + 0x226);
    *(ushort *)param_2 = *(short *)param_2 + uVar3;
  }
  return uVar3;
}

/* ref: FUN_0056ea60 */
ushort F_0056ea60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x56ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int * piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  
  uVar2 = 0;
  if ((short)param_5 != 0) {
    uVar3 = param_5 & 0xffff;
    sVar5 = 0;
    (*(uint *)(gen_frame + 0x24)) = 0;
    if (3 < uVar3) {
      (*(int *)(gen_frame + 0x1c)) = (uVar3 - 4 >> 2) + 1;
      piVar4 = (int *)(param_4 + 8);
      fVar11 = (float)(int)(short)param_3;
      fVar9 = (float10)(int)(short)param_3;
      (*(uint *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x1c)) * 4;
      do {
        *param_2 = *param_2 + sVar5;
        sVar5 = *param_2;
        if (piVar4[-2] == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(piVar4[-2] + 0x70);
        }
        if (iVar7 != 0) {
          if (((*(uint *)(iVar7 + 0x88) & 1) == 0) &&
             ((fVar10 = (float10)(int)sVar5,
              bVar8 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x38)) || GEN_ISNAN(fVar10),
              bVar8 == (bVar8 || (float10)*(float *)(iVar7 + 0x38) == fVar10) ||
              (bVar8 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x3c)) || GEN_ISNAN(fVar9),
              bVar8 == (bVar8 || (float10)*(float *)(iVar7 + 0x3c) == fVar9))))) {
            *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 1;
          }
          *(float *)(iVar7 + 0x38) = (float)(int)sVar5;
          *(float *)(iVar7 + 0x3c) = fVar11;
        }
        *param_2 = *param_2 + (short)param_6;
        iVar1 = piVar4[-2];
        iVar6 = (uint)*(byte *)(param_1 + 0x221) * 0x2c;
        iVar7 = iVar6 + 0x1c4 + param_1;
        if ((*(ushort *)(iVar6 + 0x1ec + param_1) < 10) && (iVar1 != 0)) {
          gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3, (unsigned long long)((undefined3)((uint)*(undefined4 *)(iVar1 + 0x78) >> 8)));
          (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),
                              (*(byte *)(param_1 + 0x221) + 5) * '\n' + *(char *)(iVar7 + 0x28));
          *(undefined4 *)(iVar1 + 0x78) = (*(undefined4 *)(gen_frame + 0xc));
          *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
          *(undefined1 *)(iVar1 + 0x80) = *(undefined1 *)(iVar1 + 0x80);
          *((int *)GEN_TOP((iVar7 + *(short *)(iVar7 + 0x28) * 4))) = iVar1;
          *(short *)(iVar7 + 0x28) = *(short *)(iVar7 + 0x28) + 1;
        }
        *param_2 = *param_2 + (short)param_7;
        sVar5 = *param_2;
        if (piVar4[-1] == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(piVar4[-1] + 0x70);
        }
        if (iVar7 != 0) {
          if (((*(uint *)(iVar7 + 0x88) & 1) == 0) &&
             ((fVar10 = (float10)(int)sVar5,
              bVar8 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x38)) || GEN_ISNAN(fVar10),
              bVar8 == (bVar8 || (float10)*(float *)(iVar7 + 0x38) == fVar10) ||
              (bVar8 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x3c)) || GEN_ISNAN(fVar9),
              bVar8 == (bVar8 || (float10)*(float *)(iVar7 + 0x3c) == fVar9))))) {
            *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 1;
          }
          *(float *)(iVar7 + 0x38) = (float)(int)sVar5;
          *(float *)(iVar7 + 0x3c) = fVar11;
        }
        *param_2 = *param_2 + (short)param_6;
        iVar1 = piVar4[-1];
        iVar6 = (uint)*(byte *)(param_1 + 0x221) * 0x2c;
        iVar7 = iVar6 + 0x1c4 + param_1;
        if ((*(ushort *)(iVar6 + 0x1ec + param_1) < 10) && (iVar1 != 0)) {
          gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3, (unsigned long long)((undefined3)((uint)*(undefined4 *)(iVar1 + 0x78) >> 8)));
          (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),
                              (*(byte *)(param_1 + 0x221) + 5) * '\n' + *(char *)(iVar7 + 0x28));
          *(undefined4 *)(iVar1 + 0x78) = (*(undefined4 *)(gen_frame + 0xc));
          *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
          *(undefined1 *)(iVar1 + 0x80) = *(undefined1 *)(iVar1 + 0x80);
          *((int *)GEN_TOP((iVar7 + *(short *)(iVar7 + 0x28) * 4))) = iVar1;
          *(short *)(iVar7 + 0x28) = *(short *)(iVar7 + 0x28) + 1;
        }
        *param_2 = *param_2 + (short)param_7;
        sVar5 = *param_2;
        if (*piVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*piVar4 + 0x70);
        }
        if (iVar7 != 0) {
          if (((*(uint *)(iVar7 + 0x88) & 1) == 0) &&
             ((fVar10 = (float10)(int)sVar5,
              bVar8 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x38)) || GEN_ISNAN(fVar10),
              bVar8 == (bVar8 || (float10)*(float *)(iVar7 + 0x38) == fVar10) ||
              (bVar8 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x3c)) || GEN_ISNAN(fVar9),
              bVar8 == (bVar8 || (float10)*(float *)(iVar7 + 0x3c) == fVar9))))) {
            *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 1;
          }
          *(float *)(iVar7 + 0x38) = (float)(int)sVar5;
          *(float *)(iVar7 + 0x3c) = fVar11;
        }
        *param_2 = *param_2 + (short)param_6;
        iVar1 = *piVar4;
        iVar6 = (uint)*(byte *)(param_1 + 0x221) * 0x2c;
        iVar7 = iVar6 + 0x1c4 + param_1;
        if ((*(ushort *)(iVar6 + 0x1ec + param_1) < 10) && (iVar1 != 0)) {
          gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3, (unsigned long long)((undefined3)((uint)*(undefined4 *)(iVar1 + 0x78) >> 8)));
          (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),
                              (*(byte *)(param_1 + 0x221) + 5) * '\n' + *(char *)(iVar7 + 0x28));
          *(undefined4 *)(iVar1 + 0x78) = (*(undefined4 *)(gen_frame + 0xc));
          *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
          *(undefined1 *)(iVar1 + 0x80) = *(undefined1 *)(iVar1 + 0x80);
          *((int *)GEN_TOP((iVar7 + *(short *)(iVar7 + 0x28) * 4))) = iVar1;
          *(short *)(iVar7 + 0x28) = *(short *)(iVar7 + 0x28) + 1;
        }
        *param_2 = *param_2 + (short)param_7;
        sVar5 = *param_2;
        if (piVar4[1] == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(piVar4[1] + 0x70);
        }
        if (iVar7 != 0) {
          if (((*(uint *)(iVar7 + 0x88) & 1) == 0) &&
             ((fVar10 = (float10)(int)sVar5,
              bVar8 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x38)) || GEN_ISNAN(fVar10),
              bVar8 == (bVar8 || (float10)*(float *)(iVar7 + 0x38) == fVar10) ||
              (bVar8 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x3c)) || GEN_ISNAN(fVar9),
              bVar8 == (bVar8 || (float10)*(float *)(iVar7 + 0x3c) == fVar9))))) {
            *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 1;
          }
          *(float *)(iVar7 + 0x38) = (float)(int)sVar5;
          *(float *)(iVar7 + 0x3c) = fVar11;
        }
        *param_2 = *param_2 + (short)param_6;
        iVar1 = piVar4[1];
        iVar6 = (uint)*(byte *)(param_1 + 0x221) * 0x2c;
        iVar7 = iVar6 + 0x1c4 + param_1;
        if ((*(ushort *)(iVar6 + 0x1ec + param_1) < 10) && (iVar1 != 0)) {
          gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3, (unsigned long long)((undefined3)((uint)*(undefined4 *)(iVar1 + 0x78) >> 8)));
          (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),
                              (*(byte *)(param_1 + 0x221) + 5) * '\n' + *(char *)(iVar7 + 0x28));
          *(undefined4 *)(iVar1 + 0x78) = (*(undefined4 *)(gen_frame + 0xc));
          *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
          *(undefined1 *)(iVar1 + 0x80) = *(undefined1 *)(iVar1 + 0x80);
          *((int *)GEN_TOP((iVar7 + *(short *)(iVar7 + 0x28) * 4))) = iVar1;
          *(short *)(iVar7 + 0x28) = *(short *)(iVar7 + 0x28) + 1;
        }
        piVar4 = piVar4 + 4;
        (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + -1;
        sVar5 = (short)param_7;
      } while ((*(int *)(gen_frame + 0x1c)) != 0);
    }
    if ((*(uint *)(gen_frame + 0x24)) < uVar3) {
      fVar9 = (float10)(int)(short)param_3;
      do {
        *param_2 = *param_2 + sVar5;
        iVar7 = *(int *)(param_4 + (*(uint *)(gen_frame + 0x24)) * 4);
        sVar5 = *param_2;
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 0x70);
        }
        if (iVar7 != 0) {
          if (((*(uint *)(iVar7 + 0x88) & 1) == 0) &&
             ((fVar10 = (float10)(int)sVar5,
              bVar8 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x38)) || GEN_ISNAN(fVar10),
              bVar8 == (bVar8 || (float10)*(float *)(iVar7 + 0x38) == fVar10) ||
              (bVar8 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x3c)) || GEN_ISNAN(fVar9),
              bVar8 == (bVar8 || (float10)*(float *)(iVar7 + 0x3c) == fVar9))))) {
            *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 1;
          }
          *(float *)(iVar7 + 0x38) = (float)(int)sVar5;
          *(float *)(iVar7 + 0x3c) = (float)(int)(short)param_3;
        }
        *param_2 = *param_2 + (short)param_6;
        iVar1 = *(int *)(param_4 + (*(uint *)(gen_frame + 0x24)) * 4);
        iVar6 = (uint)*(byte *)(param_1 + 0x221) * 0x2c;
        iVar7 = iVar6 + 0x1c4 + param_1;
        if ((*(ushort *)(iVar6 + 0x1ec + param_1) < 10) && (iVar1 != 0)) {
          gen_piece_set(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3, (unsigned long long)((undefined3)((uint)*(undefined4 *)(iVar1 + 0x78) >> 8)));
          (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),
                              (*(byte *)(param_1 + 0x221) + 5) * '\n' + *(char *)(iVar7 + 0x28));
          *(undefined4 *)(iVar1 + 0x78) = (*(undefined4 *)(gen_frame + 0xc));
          *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
          *(undefined1 *)(iVar1 + 0x80) = *(undefined1 *)(iVar1 + 0x80);
          *((int *)GEN_TOP((iVar7 + *(short *)(iVar7 + 0x28) * 4))) = iVar1;
          *(short *)(iVar7 + 0x28) = *(short *)(iVar7 + 0x28) + 1;
        }
        (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 1;
        sVar5 = (short)param_7;
      } while ((*(uint *)(gen_frame + 0x24)) < uVar3);
    }
    uVar2 = *(ushort *)(param_1 + 0x226);
    *param_2 = *param_2 + uVar2;
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentMap::vf3 */
uint F_0056ef90(unsigned int gen_a0)
{
  GEN_ENTER(0x56ef90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  F_005643c0(this);
  uVar3 = *(undefined4 *)(REFG(int, 0x1379860) + 4);
  *(undefined4 *)(((int)(uint)(this)) + 0xd8) = *(undefined4 *)(REFG(int, 0x1379860) + 8);
  *(undefined4 *)(((int)(uint)(this)) + 0xcc) = uVar3;
  *(undefined4 *)(((int)(uint)(this)) + 0xe4) = uVar3;
  *(undefined4 *)(((int)(uint)(this)) + 0xf0) = uVar3;
  iVar1 = ((int)(uint)(this)) + 0xc4;
  *(int *)(((int)(uint)(this)) + 0x110) = ((int)(uint)(this)) + 0xe0;
  *(int *)(((int)(uint)(this)) + 0x108) = ((int)(uint)(this)) + 200;
  *(int *)(((int)(uint)(this)) + 0x100) = iVar1;
  *(int *)(((int)(uint)(this)) + 0x104) = iVar1;
  iVar2 = ((int)(uint)(this)) + 0xd4;
  *(int *)(((int)(uint)(this)) + 0x120) = iVar1;
  *(int *)(((int)(uint)(this)) + 0x124) = iVar1;
  *(int *)(((int)(uint)(this)) + 0x114) = ((int)(uint)(this)) + 0xec;
  *(int *)(((int)(uint)(this)) + 0x10c) = iVar2;
  *(int *)(((int)(uint)(this)) + 0x118) = iVar2;
  *(int *)(((int)(uint)(this)) + 0x11c) = iVar2;
  *(uint *)(((int)(uint)(this)) + 0x128) = ((int)(uint)(this)) + 0xf8U;
  *(int *)(((int)(uint)(this)) + 0x138) = ((int)(uint)(this));
  return ((int)(uint)(this)) + 0xf8U;
}

/* ref: FUN_0056f070 */
uint F_0056f070(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x56f070u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)param_2;
  fVar5 = (float10)*(float *)((int)param_1 + 0x278);
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)in_EAX));
  if (bVar2 == bVar3) {
    *(float *)((int)param_1 + 0x278) = param_2;
    uVar1 = F_00564540(param_1);
  }
  return uVar1;
}

/* ref: FUN_0056f0a0 */
uint F_0056f0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56f0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_1 == 0) {
    iVar3 = *(int *)((int)this + 0x84);
  }
  else if (param_1 == 1) {
    iVar3 = *(int *)((int)this + 0x88);
  }
  else {
    if (param_1 - 2U != 0) {
      return param_1 - 2U;
    }
    iVar3 = *(int *)((int)this + 0x8c);
  }
  bVar1 = *(byte *)(iVar3 + 0x93);
  uVar2 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar2 = bVar1 & 0xffffff7f;
    *(char *)(iVar3 + 0x93) = (char)uVar2;
  }
  if (param_1 == 1) {
    uVar2 = 0;
    if (*(int *)((int)this + 0xb0) != 0) {
      uVar2 = F_0056a7a0(*(int *)((int)this + 0xb0) + 4);
      fVar4 = (float10)(int)uVar2;
      if ((int)uVar2 < 0) {
        fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      *(float *)((int)this + 0x27c) = (float)((float10)*(double *)&REFG(undefined, 0x10a0ca8) / fVar4);
    }
  }
  return uVar2;
}

/* ref: FUN_0056f120 */
unsigned int F_0056f120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56f120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  if (this != (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x20))) {
    case 0: ;
    case 1: ;
    case 3: ;
      this_00 = (undefined *)F_005647a0(this);
      F_0055a300(this_00,param_1);
      break;
    case 2: ;
      F_005c06e0(*(undefined * PTR32 *)this,param_1);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0056f170 */
unsigned int F_0056f170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x56f170u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  float fVar1;
  uint uVar2;
  float * pfVar3;
  
  uVar2 = (*(uint *)&gen_args[4]);
  if ((*(uint *)&gen_args[4]) != 0) {
    fVar1 = *(float *)((*(uint *)&gen_args[4]) + 0x38);
    (*(uint *)&gen_args[4]) = (uint)gen_fl2bits(fVar1);
    pfVar3 = (*(float * PTR32 *)&gen_args[0]);
    if (!(((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[0]))) < (float10)fVar1)) {
      pfVar3 = (float *)&(*(uint *)&gen_args[4]);
    }
    *(*(float * PTR32 *)&gen_args[0]) = *pfVar3;
    fVar1 = *(float *)(uVar2 + 0x3c);
    (*(uint *)&gen_args[4]) = (uint)gen_fl2bits(fVar1);
    pfVar3 = (*(float * PTR32 *)&gen_args[1]);
    if (!(((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[1]))) < (float10)fVar1)) {
      pfVar3 = (float *)&(*(uint *)&gen_args[4]);
    }
    *(*(float * PTR32 *)&gen_args[1]) = *pfVar3;
    fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(uVar2 + 0x7c) + (float10)*(float *)(uVar2 + 0x38))));
    (*(uint *)&gen_args[4]) = (uint)gen_fl2bits(fVar1);
    pfVar3 = (*(float * PTR32 *)&gen_args[2]);
    if (!((float10)fVar1 < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2]))))) {
      pfVar3 = (float *)&(*(uint *)&gen_args[4]);
    }
    *(*(float * PTR32 *)&gen_args[2]) = *pfVar3;
    fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(uVar2 + 0x7e) + (float10)*(float *)(uVar2 + 0x3c))));
    (*(uint *)&gen_args[4]) = (uint)gen_fl2bits(fVar1);
    pfVar3 = (*(float * PTR32 *)&gen_args[3]);
    if (!((float10)fVar1 < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[3]))))) {
      pfVar3 = (float *)&(*(uint *)&gen_args[4]);
    }
    *(*(float * PTR32 *)&gen_args[3]) = *pfVar3;
  }
  return 0;
}

/* ref: FUN_0056f220 */
uint F_0056f220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56f220u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_eax = (short *)(uintptr_t)gen_a0;
  short * in_edx = (short *)(uintptr_t)gen_a1;
  short * param_3 = (short *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_0056f240 */
uint F_0056f240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56f240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4)));
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4)));
  while (iVar2 != 0) {
    if (*(int *)(*piVar1 + 4) == param_2) {
      uVar4 = F_00564e90(this,param_1);
      return uVar4;
    }
    F_00564fe0(this,param_1);
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4)));
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4)));
  }
  uVar6 = 0;
  uVar4 = F_00404270();
  puVar5 = (undefined4 *)F_00406bd0(0x24,0,uVar4,uVar6);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = param_2;
    *(undefined2 *)(puVar5 + 7) = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *puVar5 = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
    puVar5[8] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = puVar5;
  uVar3 = F_005571e0(this,param_1,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))));
  *((ushort *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2))) = uVar3;
  if (-1 < *((short *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2)))) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_0056f300 */
uint F_0056f300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56f300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
  while (iVar2 != 0) {
    if (*(int *)(*piVar1 + 4) == param_2) {
      uVar3 = F_00564f00(this,param_1);
      return uVar3;
    }
    F_00565040(this,param_1);
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
  }
  uVar5 = 0;
  uVar3 = F_00404270();
  puVar4 = (undefined4 *)F_00406bd0(0x28,0,uVar3,uVar5);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = param_2;
    *(undefined2 *)(puVar4 + 7) = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10a0934));
    puVar4[8] = 0;
    puVar4[9] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) = puVar4;
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
  F_00556c70(this_00);
  *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) = this_00;
  *((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2))) = (short)param_1;
  if (-1 < *((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2)))) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_0056f3d0 */
uint F_0056f3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56f3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
  while (iVar2 != 0) {
    if (*(int *)(*piVar1 + 4) == param_2) {
      uVar3 = F_00564f70(this,param_1);
      return uVar3;
    }
    F_005650a0(this,param_1);
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
  }
  uVar5 = 0;
  uVar3 = F_00404270();
  puVar4 = (undefined4 *)F_00406bd0(0x24,0,uVar3,uVar5);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = param_2;
    *(undefined2 *)(puVar4 + 7) = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10a0940));
    puVar4[8] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4))) = puVar4;
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
  F_00556e70(this_00);
  *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4))) = this_00;
  *((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2))) = (short)param_1;
  if (-1 < *((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2)))) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_0056f570 */
uint F_0056f570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56f570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * local_8;
  
  *param_1 = 0;
  uVar4 = *(uint *)((int)this + 0x58);
  if (uVar4 == 0) {
    return 0;
  }
  iVar5 = *(int *)((int)this + 0x10);
  piVar1 = (int *)(iVar5 + 0x29c);
  iVar8 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(uVar4 * 0x800));
  if (*(uint *)(iVar5 + 0x284) < (uint)(*(int *)(iVar5 + 0x298) + *(int *)(iVar5 + 0x29c))) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8 = ((undefined4 *)GEN_TOP(((*(int *)(iVar5 + 0x290) - iVar8) + uVar4 * -0x800 + *(uint *)(iVar5 + 0x284))));
  }
  puVar6 = *(undefined4 * PTR32 *)((int)this + 0x48);
  puVar2 = local_8 + uVar4 * 0x100;
  uVar3 = uVar4;
  puVar7 = local_8;
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    puVar9 = puVar6;
    puVar10 = puVar7;
    for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar6 = (undefined4 *)puVar6[0xfe];
    puVar7 = puVar7 + 0x100;
  }
  F_00c46aa0(puVar2,local_8,uVar4 * 0x400);
  iVar8 = (uVar4 & 0x3fffff) * 0x80 - *(int *)((int)this + 0x54);
  *param_1 = iVar8;
  F_005651c0(this,puVar2,local_8,0,iVar8 + -1);
  return (uint)puVar2;
}

/* ref: FUN_0056f680 */
unsigned int F_0056f680(unsigned int gen_a0)
{
  GEN_ENTER(0x56f680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)this;
  do {
    while( true ) {
      if (iVar2 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar2 + 0x14) & 0x20000) != 0) break;
      iVar2 = *(int *)(iVar2 + 0x10);
    }
    iVar1 = *(int *)this;
    do {
      iVar3 = iVar1;
      if (iVar3 == 0) {
        iVar3 = 0;
        break;
      }
      iVar1 = *(int *)(iVar3 + 0x10);
    } while (*(int *)(iVar3 + 0x10) != iVar2);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x10) = iVar1;
    }
    if (iVar2 == *(int *)this) {
      *(int *)this = iVar1;
    }
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  } while( true );
}

/* ref: FUN_0056f6e0 */
uint F_0056f6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x56f6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  bool bVar3;
  int * piVar4;
  byte bVar5;
  uint uVar6;
  
  if (*(int *)((int)this + 0x68) == 2) {
    return 2;
  }
  bVar3 = true;
  uVar6 = 0;
  do {
    iVar2 = *(int *)((int)this + uVar6 * 4);
    if (iVar2 != 0) {
      piVar4 = (int *)(iVar2 + 0x88);
      iVar1 = _InterlockedCompareExchange((volatile long *)(piVar4), 0, 0);
      if (iVar1 == 2) {
        piVar4 = (int *)(iVar2 + 0x8c);
        iVar2 = _InterlockedCompareExchange((volatile long *)(piVar4), 0, 0);
        if (7 < iVar2) goto LAB_0056f757;
      }
      else {
        bVar3 = false;
      }
    }
    bVar5 = (char)uVar6 + 1;
    uVar6 = (uint)bVar5;
  } while (bVar5 < 8);
  if (!bVar3) {
LAB_0056f763: ;
    *(undefined4 *)((int)this + 0x68) = 1;
    return 1;
  }
  iVar2 = *(int *)((int)this + 0x20);
  if (iVar2 != 0) {
    piVar4 = (int *)(iVar2 + 0x88);
    iVar1 = _InterlockedCompareExchange((volatile long *)(piVar4), 0, 0);
    if (iVar1 != 2) goto LAB_0056f763;
    piVar4 = (int *)(iVar2 + 0x8c);
    iVar2 = _InterlockedCompareExchange((volatile long *)(piVar4), 0, 0);
    if (7 < iVar2) {
LAB_0056f757: ;
      *(undefined4 *)((int)this + 0x68) = 3;
      return 3;
    }
  }
  *(undefined4 *)((int)this + 0x68) = 2;
  return 2;
}

/* ref: FUN_0056f780 */
uint F_0056f780(unsigned int gen_a0)
{
  GEN_ENTER(0x56f780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 2;
  if (*(int *)((int)this + 0x14) == 2) {
    return 2;
  }
  iVar2 = *(int *)this;
  if (iVar2 == 0) {
LAB_0056f7b3: ;
    iVar2 = *(int *)((int)this + 4);
    if (iVar2 == 0) goto LAB_0056f7eb;
    piVar4 = (int *)(iVar2 + 0x88);
    iVar1 = _InterlockedCompareExchange((volatile long *)(piVar4), 0, 0);
    if (iVar1 == 2) {
      piVar4 = (int *)(iVar2 + 0x8c);
      iVar2 = _InterlockedCompareExchange((volatile long *)(piVar4), 0, 0);
      if (7 < iVar2) {
LAB_0056f7db: ;
        *(undefined4 *)((int)this + 0x14) = 3;
        return 3;
      }
      goto LAB_0056f7eb;
    }
  }
  else {
    piVar4 = (int *)(iVar2 + 0x88);
    iVar1 = _InterlockedCompareExchange((volatile long *)(piVar4), 0, 0);
    if (iVar1 == 2) {
      piVar4 = (int *)(iVar2 + 0x8c);
      iVar2 = _InterlockedCompareExchange((volatile long *)(piVar4), 0, 0);
      if (7 < iVar2) goto LAB_0056f7db;
      goto LAB_0056f7b3;
    }
  }
  uVar3 = 1;
LAB_0056f7eb: ;
  *(uint *)((int)this + 0x14) = uVar3;
  return uVar3;
}

/* ref: FUN_0056f800 */
uint F_0056f800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x56f800u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int * this_00;
  int * piVar4;
  
  piVar4 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) <= (ushort)(*(uint *)&gen_args[1])) {
    return 0xffffffff;
  }
  this_00 = ((int *)GEN_TOP((((*(uint *)&gen_args[1]) & 0xffff) * 0x74 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
  if ((*(byte *)((int)this_00 + 0x6e) & 1) != 0) {
    return 0xfffffffe;
  }
  if (7 < *(*(int * PTR32 *)&gen_args[2])) {
    return 0xfffffffd;
  }
  uVar3 = 0;
  if (this_00[0x1a] == 0) {
    F_00557790(this_00,(*(undefined4 *)&gen_args[3]));
    *(short *)(this_00 + 0x1b) = (short)*piVar4;
    F_004ff310(&(*(undefined4 *)&gen_args[3]),0,0);
    (*(uint *)&gen_args[1]) = 0x746578;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x20)) = 5000;
    (*(undefined4 *)(gen_frame + 0x24)) = 0x10100;
    (*(undefined1 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    (*(undefined2 *)(gen_frame + 0x29)) = 0;
    if ((short)this_00[0x1b] != 0) {
      do {
        uVar2 = F_00513d20(&(*(undefined4 *)&gen_args[3]),&(*(uint *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2])[uVar3 + 1],&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        this_00[uVar3] = uVar2;
        if (uVar2 == 0) {
          if (uVar3 != 0) {
            uVar2 = (uint)uVar3;
            do {
              if (*this_00 != 0) {
                F_0050c620(*this_00,0,0);
                *this_00 = 0;
              }
              this_00 = this_00 + 1;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
          return 0xffffffff;
        }
        uVar3 = uVar3 + 1;
        piVar4 = (*(int * PTR32 *)&gen_args[2]);
      } while (uVar3 < *(ushort *)(this_00 + 0x1b));
    }
    uVar3 = 0;
    F_004ff310(((undefined1 *)(gen_frame + 0x34)),0,0);
    iVar1 = piVar4[0x101];
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = &REFG(undefined, 0x666474);
    uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined * PTR32 *)(gen_frame + 0x38)),iVar1,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    this_00[8] = uVar2;
    if (uVar2 != 0) {
      *(byte *)((int)this_00 + 0x6e) = *(byte *)((int)this_00 + 0x6e) | 1;
      this_00[0x1a] = 1;
      *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x30) = 1;
      return 0;
    }
    if ((short)this_00[0x1b] != 0) {
      do {
        if (this_00[uVar3] != 0) {
          F_0050c620(this_00[uVar3],0,0);
          this_00[uVar3] = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(this_00 + 0x1b));
    }
    return 0xfffffffe;
  }
  return 0xfffffffc;
}

/* ref: FUN_0056f9c0 */
uint F_0056f9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56f9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  F_004ff310(((undefined1 *)(gen_frame + 0x34)),0,0);
  uVar2 = *(undefined4 *)(param_1 + 4);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x746578;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  uVar4 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),uVar2,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
  **(uint * PTR32 *)((int)this + 0xc) = uVar4;
  piVar3 = *(int * PTR32 *)((int)this + 0xc);
  if (*piVar3 == 0) {
    return 0xffffffff;
  }
  piVar3[2] = *(int *)(*piVar3 + 0xfc);
  F_004ff310(((undefined1 *)(gen_frame + 0x2c)),0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x404);
  (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = REFP(0x00676664);
  uVar4 = F_00513d20(((undefined1 *)(gen_frame + 0x2c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x30)),uVar2,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
  *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = uVar4;
  if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)((int)this + 0x30) = 1;
  return 0;
}

/* ref: FUN_0056fad0 */
uint F_0056fad0(unsigned int gen_a0)
{
  GEN_ENTER(0x56fad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  bVar1 = true;
  iVar4 = 0;
  do {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar4)));
    if ((*(byte *)((int)this_00 + 0x6e) & 2) == 0) {
      uVar2 = F_0056f6e0(this_00);
      if (uVar2 == 2) {
        F_00565ee0(this,iVar3);
      }
      else {
        bVar1 = false;
      }
    }
    iVar4 = iVar4 + 0x74;
    iVar3 = iVar3 + 1;
  } while (iVar4 < 0xd98);
  if ((*((byte *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0xc) + 0x18))) & 1) == 0) {
    uVar2 = F_0056f780(*(undefined * PTR32 *)((int)this + 0xc));
    if (uVar2 != 2) goto LAB_0056fb37;
    F_005660f0(this);
  }
  if (bVar1) {
    *(undefined4 *)((int)this + 0x30) = 2;
  }
LAB_0056fb37: ;
  return *(uint *)((int)this + 0x30);
}

/* ref: FUN_0056fb50 */
uint F_0056fb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x56fb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xec) == (undefined *)0x0) {
    return 0xffffffff;
  }
  bVar1 = *(byte *)((int)this + 0x148);
  if ((bVar1 & 1) != (byte)param_1) {
    *(byte *)((int)this + 0x148) = (bVar1 ^ (byte)param_1) & 1 ^ bVar1;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) ^ (*(int *)((int)this + 0x9c) << 0xb ^ (*(uint *)(gen_frame + 0xc))) & 0x7fff800;
    (*(int *)(gen_frame + 0x10)) = (int)*(float *)((int)this + 0x8c);
    (*(int *)(gen_frame + 0x14)) = (int)*(float *)((int)this + 0x90);
    (*(int *)(gen_frame + 0x18)) = (int)*(float *)((int)this + 0x94);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(int *)(gen_frame + 0x1c)) = (int)*(float *)((int)this + 0x98);
    F_00567b10(*(undefined * PTR32 *)((int)this + 0xec),((undefined1 *)(gen_frame + 0x4)),param_1);
  }
  return 0;
}

/* ref: FUN_0056fc00 */
uint F_0056fc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56fc00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 8);
  if ((*(byte *)(uVar2 + 0x148) & 2) != 0) {
    bVar1 = *((byte *)GEN_TOP((*(int *)((int)this + 0xc) + 0x6e)));
    uVar2 = CONCAT31((int3)((uint)*(int *)((int)this + 0xc) >> 8),bVar1);
    if (((bVar1 & 1) != 0) && ((bVar1 & 2) != 0)) {
      ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      if ((char)param_1 != '\0') {
        F_005662b0(this,param_2);
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
        return uVar2;
      }
      F_00566640(this,param_2);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    }
  }
  return uVar2;
}

/* ref: FUN_0056fc60 */
uint F_0056fc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x56fc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  uint uVar2;
  
  *(uint *)((int)this + 0xb4) = param_3;
  *(undefined4 *)((int)this + 0xb8) = param_4;
  uVar2 = param_3;
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 8) + 0x148))) & 2) != 0) {
    bVar1 = *((byte *)GEN_TOP((*(int *)((int)this + 0xc) + 0x6e)));
    uVar2 = CONCAT31((int3)((uint)*(int *)((int)this + 0xc) >> 8),bVar1);
    if (((bVar1 & 1) != 0) && ((bVar1 & 2) != 0)) {
      ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      if ((char)param_1 != '\0') {
        F_005662b0(this,param_2);
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
        return uVar2;
      }
      F_00566640(this,param_2);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    }
  }
  return uVar2;
}

/* ref: FUN_0056fce0 */
uint F_0056fce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x56fce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  uint uVar2;
  
  *(char *)((int)this + 0x164) = (char)param_5;
  if ((char)param_5 != '\0') {
    param_4 = param_4 + 1;
  }
  *(uint *)((int)this + 0xb4) = param_3;
  *(int *)((int)this + 0xb8) = param_4;
  uVar2 = param_3;
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 8) + 0x148))) & 2) != 0) {
    bVar1 = *((byte *)GEN_TOP((*(int *)((int)this + 0xc) + 0x6e)));
    uVar2 = CONCAT31((int3)((uint)*(int *)((int)this + 0xc) >> 8),bVar1);
    if (((bVar1 & 1) != 0) && ((bVar1 & 2) != 0)) {
      ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      if ((char)param_1 != '\0') {
        F_005662b0(this,param_2);
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
        return uVar2;
      }
      F_00566640(this,param_2);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    }
  }
  return uVar2;
}

/* ref: FUN_0056fd70 */
uint F_0056fd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x56fd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  float fVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  float10 fVar6;
  uint uVar7;
  float fVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  float * pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float local_8;
  
  uVar7 = param_2;
  local_8 = REFG(float, 0x10a0a58);
  fVar13 = (float10)((float)GEN_TOF(((float10)(int)*(short *)(param_2 + 8) *
                           (float10)*(float *)(param_1 + 0x30))));
  fVar16 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x28) /
                                            (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x54)))))) *
                           (float10)*((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x58)))))) - fVar13;
  if (fVar16 < (float10)0) {
    local_8 = REFG(float, 0x109cab8);
  }
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10968b0);
  iVar10 = (int)*(char *)(param_1 + 0x58) + (int)*(char *)(param_2 + 10);
  fVar14 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x30) *
                           (float10)(int)*(short *)(param_2 + 6))));
  cVar3 = *(char *)(param_2 + 0xb);
  param_2 = (uint)gen_fl2bits((float)iVar10);
  if (*(int *)(param_1 + 0x18) == 0) {
    fVar15 = (float10)iVar10;
    param_2 = (uint)gen_fl2bits(((float)GEN_TOF((fVar15 + (float10)((float)GEN_TOF((((float10)*(float *)(param_1 +
                                                                                      0x24) -
                                                                  (fVar15 + fVar14)) *
                                                                 (float10)REFG(double, 0x1088108))))))));
  }
  *(float *)param_3 = (float)(((float10)GEN_TOD(gen_bits2f(param_2))) + fVar14);
  if ((char)param_4 != '\0') {
    return param_3;
  }
  fVar1 = *(float *)(param_1 + 0x280);
  fVar8 = *(float *)(param_1 + 0x290);
  pfVar12 = ((float *)GEN_TOP((*(int *)(param_1 + 0xac) * 0x80 + *(int *)(param_1 + 0x3a0))));
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x284) +
                 ((float10)GEN_TOD(((int)cVar3 - (int)(((float10)local_8 + fVar16) * fVar6)))))));
  *pfVar12 = fVar1;
  pfVar12[2] = fVar8;
  pfVar12[1] = fVar2;
  fVar8 = *(float *)(param_1 + 0x290);
  pfVar12[8] = fVar1;
  pfVar12[9] = (float)((float10)fVar2 + fVar13);
  pfVar12[10] = fVar8;
  fVar8 = *(float *)(param_1 + 0x290);
  pfVar12[0x10] = (float)(fVar14 + (float10)fVar1);
  pfVar12[0x11] = (float)((float10)fVar2 + fVar13);
  pfVar12[0x12] = fVar8;
  fVar8 = *(float *)(param_1 + 0x290);
  pfVar12[0x18] = (float)(fVar14 + (float10)fVar1);
  pfVar12[0x19] = fVar2;
  pfVar12[0x1a] = fVar8;
  if ((*(uint *)(param_1 + 0x50) >> 0x14 & 1) != 0) {
    if (*(int *)(param_1 + 0x18) == 1) {
      fVar8 = *(float *)param_3;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x24);
    }
    F_00566d60(param_1,*(int *)(param_1 + 0xb0) * 0x80 + *(int *)(param_1 + 0x3a4),
                 *(float *)(param_1 + 0x280),*(float *)(param_1 + 0x284),
                 ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x280) + (float10)fVar8))),
                 ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x284) + fVar13))));
  }
  sVar4 = *(short *)(uVar7 + 2);
  sVar5 = *(short *)(uVar7 + 4);
  sVar9 = *(short *)(uVar7 + 6);
  sVar11 = *(short *)(uVar7 + 8);
  *(short *)(pfVar12 + 4) = sVar4;
  *(short *)((int)pfVar12 + 0x12) = sVar5;
  *(short *)(pfVar12 + 0xc) = sVar4;
  sVar9 = sVar9 + sVar4;
  sVar11 = sVar11 + sVar5;
  *(short *)((int)pfVar12 + 0x32) = sVar11;
  *(short *)((int)pfVar12 + 0x52) = sVar11;
  *(short *)(pfVar12 + 0x14) = sVar9;
  *(short *)(pfVar12 + 0x1c) = sVar9;
  *(short *)((int)pfVar12 + 0x72) = sVar5;
  pfVar12[6] = REFG(undefined4, 0x13799b0);
  pfVar12[7] = REFG(undefined4, 0x13799b4);
  pfVar12[5] = REFG(undefined4, 0x131de48);
  pfVar12[0xe] = REFG(undefined4, 0x13799b0);
  pfVar12[0xf] = REFG(undefined4, 0x13799b4);
  pfVar12[0xd] = REFG(undefined4, 0x131de48);
  pfVar12[0x16] = REFG(undefined4, 0x13799b0);
  pfVar12[0x17] = REFG(undefined4, 0x13799b4);
  pfVar12[0x15] = REFG(undefined4, 0x131de48);
  pfVar12[0x1e] = REFG(undefined4, 0x13799b0);
  pfVar12[0x1f] = REFG(undefined4, 0x13799b4);
  pfVar12[0x1d] = REFG(undefined4, 0x131de48);
  fVar8 = gen_bits2f((uint)*(byte *)(param_1 + 0x37) << 0x18 | 0xffffff);
  pfVar12[3] = fVar8;
  pfVar12[0xb] = fVar8;
  pfVar12[0x13] = fVar8;
  pfVar12[0x1b] = fVar8;
  return (uint)gen_fl2bits(fVar8);
}

/* ref: FUN_00570790 */
byte F_00570790(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x570790u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  param_1[0x5c] = (int)gen_fl2bits(param_3);
  param_1[0x5d] = (int)gen_fl2bits(param_4);
  param_1[0x5e] = 0;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  param_1[0x2d] = param_6;
  param_1[0x2e] = param_7;
  if ((((*(byte *)(param_1[2] + 0x148) & 2) != 0) && ((*(byte *)(param_1[3] + 0x6e) & 1) != 0)) &&
     ((*(byte *)(param_1[3] + 0x6e) & 2) != 0)) {
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if ((char)param_2 != '\0') {
      F_005662b0(param_1,param_5);
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
      return *(byte *)((int)param_1 + 0x17d);
    }
    F_00566640(param_1,param_5);
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return *(byte *)((int)param_1 + 0x17d);
}

/* ref: FUN_00570840 */
uint F_00570840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x570840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  uint uVar2;
  
  *(uint *)((int)this + 0x170) = param_2;
  uVar2 = param_2;
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 8) + 0x148))) & 2) != 0) {
    bVar1 = *((byte *)GEN_TOP((*(int *)((int)this + 0xc) + 0x6e)));
    uVar2 = CONCAT31((int3)((uint)*(int *)((int)this + 0xc) >> 8),bVar1);
    if (((bVar1 & 1) != 0) && ((bVar1 & 2) != 0)) {
      ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      F_005662b0(this,param_1);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    }
  }
  return uVar2;
}

/* ref: FUN_00570890 */
uint F_00570890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x570890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  if ((*(byte *)(uVar1 + 0x148) & 2) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    if ((char)param_1 != '\0') {
      uVar1 = F_00567030(this,param_2);
      return uVar1;
    }
    uVar1 = F_00567170(this,param_2);
  }
  return uVar1;
}

/* ref: FUN_005708d0 */
uint F_005708d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5708d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x24))))((int)this + 4,param_1,param_3);
  F_0056fc60((undefined *)((int)this + 4),param_2,param_3,param_4,param_5);
  return *(uint *)((int)this + 0xa8);
}

/* ref: FUN_00570910 */
uint F_00570910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x570910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 uVar1;
  
  if ((param_2 != 0) && (param_4 != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x144) + 0x24))))((int)this + 0x144,param_2,param_4);
    F_0056fce0((undefined *)((int)this + 0x144),param_3,param_4,param_5,param_6,param_7);
    uVar1 = *(undefined4 *)((int)this + 0x288);
    *param_1 = *(undefined4 *)((int)this + 0x284);
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00570990 */
uint F_00570990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x570990u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  byte bVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x654) + 0x24))))(param_1 + 0x654,param_3,param_7);
  *(float *)(param_1 + 0x7bc) = param_5;
  *(float *)(param_1 + 0x7c0) = param_6;
  bVar1 = F_00570790(param_1 + 0x654,param_4,(float)(int)(short)param_8,(float)(int)(short)param_9
                       ,param_7,param_10,param_11);
  *param_2 = bVar1;
  return *(uint *)(param_1 + 0x7cc);
}

/* ref: FUN_00570a20 */
uint F_00570a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x570a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7d4) + 0x14))))((int)this + 0x7d4,param_1,param_3);
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x7dc) + 0x148))) & 2) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7d4) + 4))))((int)this + 0x7d4);
    if ((char)param_2 != '\0') {
      F_00567030((undefined *)((int)this + 0x7d4),param_3);
      return *(uint *)((int)this + 0x7e0);
    }
    F_00567170((undefined *)((int)this + 0x7d4),param_3);
  }
  return *(uint *)((int)this + 0x7e0);
}

/* ref: FUN_00570aa0 */
uint F_00570aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x570aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined2 * param_4 = (undefined2 *)(uintptr_t)gen_a4;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7e4) + 0x14))))((int)this + 0x7e4,param_1,param_3);
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x7ec) + 0x148))) & 2) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7e4) + 4))))((int)this + 0x7e4);
    if ((char)param_2 == '\0') {
      F_00567170((undefined *)((int)this + 0x7e4),param_3);
    }
    else {
      F_00567030((undefined *)((int)this + 0x7e4),param_3);
    }
  }
  if (param_4 != (undefined2 *)0x0) {
    *param_4 = *(undefined2 *)((int)this + 0x7f4);
  }
  return *(uint *)((int)this + 0x7f0);
}

/* ref: FUN_00570b20 */
uint F_00570b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x570b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7f8) + 0x24))))((int)this + 0x7f8,param_1,param_2);
  *(undefined4 *)((int)this + 0x968) = param_3;
  if ((((*((byte *)GEN_TOP((*(int *)((int)this + 0x800) + 0x148))) & 2) != 0) &&
      (bVar1 = *((byte *)GEN_TOP((*(int *)((int)this + 0x804) + 0x6e))), (bVar1 & 1) != 0)) &&
     ((bVar1 & 2) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7f8) + 4))))((int)this + 0x7f8);
    F_005662b0((undefined *)((int)this + 0x7f8),param_2);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7f8) + 8))))((int)this + 0x7f8);
  }
  return *(uint *)((int)this + 0x960);
}

/* ref: FUN_00570bc0 */
uint F_00570bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x570bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
    F_0055b610(*(undefined * PTR32 *)((int)this + 0xbc));
  }
  uVar1 = F_00565dd0((undefined *)((int)this + 0xec));
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf6 */
uint F_00570be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x570be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0056f240(this + 0x20de0,param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf7 */
uint F_00570bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x570bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0056f300(this + 0x20de0,param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf8 */
uint F_00570c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x570c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0056f3d0(this + 0x20de0,param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf42 */
uint F_00570c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x570c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_ecx;
  undefined * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 AVar5;
  
  if ((char)param_2 != '\0') {
    F_00565dd0(this + 0xec);
  }
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  iVar4 = 0;
  iVar3 = 0;
  do {
    puVar1 = &REFG(undefined, 0x1306880);
    if (param_1 == 1) {
      puVar1 = &REFG(undefined, 0x1315a60);
    }
    F_0056f800(this + 0xec,iVar4,puVar1 + iVar3,param_2);
    iVar3 = iVar3 + 0x408;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0x78f0);
  uVar2 = F_00414500(in_ecx,0x4e);
  AVar5 = (undefined1)(*(int *)(uVar2 + 0x14) != 0);
  uVar2 = F_0056f9c0(this + 0xec,&REFG(undefined, 0x131d350) + (uint)(byte)AVar5 * 0x408);
  this[0x22d2f] = AVar5;
  return uVar2;
}

/* ref: FUN_00570ce0 */
uint F_00570ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x570ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10a0d80));
  in_ecx[7] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00570d10 */
byte F_00570d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x570d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  if ((*(uint *)((int)param_1 + 0x88) & 0x20000) != 0) {
    return 0;
  }
  F_00568010(param_1,((byte *)(gen_frame + 0xc)));
  iVar1 = (int)(short)param_2;
  if ((char)param_4 == '\0') {
    if (iVar1 <= (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))) {
      return 0;
    }
    if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) <= iVar1) {
      return 0;
    }
    if ((int)(short)param_3 <= (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))) {
      return 0;
    }
    if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) <= (int)(short)param_3) {
      return 0;
    }
  }
  else {
    if (iVar1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))) {
      return 0;
    }
    if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) < iVar1) {
      return 0;
    }
    if ((int)(short)param_3 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))) {
      return 0;
    }
    if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) < (int)(short)param_3) {
      return 0;
    }
  }
  if ((*(uint *)((int)param_1 + 0x88) & 0x400000) != 0) {
    fVar2 = (float10)((float)GEN_TOF(((float10)(int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))) * (float10)REFG(double, 0x1088108))));
    fVar3 = (float10)((float)GEN_TOF(((float10)REFG(double, 0x1088108) * (float10)(int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12))))));
    fVar4 = (float10)((float)GEN_TOF((fVar2 + ((float10)GEN_TOD((iVar1 - (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))))))));
    fVar5 = (float10)((float)GEN_TOF((fVar3 + ((float10)GEN_TOD(((int)(short)param_3 - (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))))));
    if (!((fVar5 * (fVar2 * fVar2)) * fVar5 + fVar4 * (fVar4 * (fVar3 * fVar3)) <
         (fVar3 * (fVar2 * fVar2)) * fVar3)) {
      return 0;
    }
  }
  return 1;
}

/* ref: Component::GUI2::AtkResNode::vf2 */
byte F_00570e20(unsigned int gen_a0)
{
  GEN_ENTER(0x570e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  ushort in_AX = 0;
  
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)(this + 0x1c) != (undefined *)0x0)) {
    bVar1 = F_005c26d0(*(undefined * PTR32 *)(this + 0x1c),1,0,((undefined1 *)(gen_frame + 0x8)));
    if (bVar1 != 0) {
      F_005598c0(this,(*(float *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x18)));
    }
    bVar1 = F_005c27d0(*(undefined * PTR32 *)(this + 0x1c),0,1,((undefined1 *)(gen_frame + 0xc)));
    if (bVar1 != 0) {
      F_00567c80(this,(*(float *)(gen_frame + 0x18)));
    }
    bVar1 = F_005c26d0(*(undefined * PTR32 *)(this + 0x1c),1,2,((undefined1 *)(gen_frame + 0x8)));
    if (bVar1 != 0) {
      F_00567d00(this,(*(float *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x18)));
    }
    bVar1 = F_005c28d0(*(undefined * PTR32 *)(this + 0x1c),6,3,((undefined1 *)(gen_frame + 0xc)));
    if (bVar1 != 0) {
      this[0x53] = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x18)) + 0));
    }
    bVar1 = F_005c29d0(*(undefined * PTR32 *)(this + 0x1c),0x18,4,((undefined1 *)(gen_frame + 0x4)));
    in_AX = (ushort)bVar1;
    if (bVar1 != 0) {
      this[0x5a] = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 2));
      this[0x5b] = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 3));
      this[0x5c] = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x18)) + 0));
      *(ushort *)(this + 0x54) = (*(ushort *)(gen_frame + 0x10));
      *(undefined2 *)(this + 0x56) = (*(undefined2 *)(gen_frame + 0x12));
      *(undefined2 *)(this + 0x58) = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0));
      in_AX = (*(ushort *)(gen_frame + 0x10));
    }
  }
  return (byte)in_AX;
}

/* ref: Component::GUI2::AtkImageNode::vf2 */
byte F_00570f10(unsigned int gen_a0)
{
  GEN_ENTER(0x570f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  bVar1 = F_00570e20((undefined *)this);
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)(this + 0x1c) != (undefined *)0x0)) {
    bVar1 = F_005c2ad0(*(undefined * PTR32 *)(this + 0x1c),0xc,5,((byte *)(gen_frame + 0xc)));
    if (bVar1 != 0) {
      *(undefined2 *)(this + 0x90) = (*(undefined2 *)((char *)((byte *)(gen_frame + 0xc)) + 12));
    }
  }
  return bVar1;
}

/* ref: Component::GUI2::AtkTextNode::vf2 */
byte F_00570f50(unsigned int gen_a0)
{
  GEN_ENTER(0x570f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  
  bVar1 = F_00570e20((undefined *)this);
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)(this + 0x1c) != (undefined *)0x0)) {
    bVar1 = F_005c2bd0(*(undefined * PTR32 *)(this + 0x1c),8,5,((byte *)(gen_frame + 0xc)));
    if (bVar1 != 0) {
      this[0x90] = (undefined1)((byte *)(gen_frame + 0xc))[0xc];
      this[0x91] = (undefined1)((byte *)(gen_frame + 0xc))[0xd];
      this[0x92] = (undefined1)((byte *)(gen_frame + 0xc))[0xe];
    }
    bVar2 = F_005c2bd0(*(undefined * PTR32 *)(this + 0x1c),8,6,((byte *)(gen_frame + 0xc)));
    bVar1 = 0;
    if (bVar2 != 0) {
      this[0x94] = (undefined1)((byte *)(gen_frame + 0xc))[0xc];
      this[0x95] = (undefined1)((byte *)(gen_frame + 0xc))[0xd];
      this[0x96] = (undefined1)((byte *)(gen_frame + 0xc))[0xe];
      bVar1 = ((byte *)(gen_frame + 0xc))[0xd];
    }
  }
  return bVar1;
}

/* ref: Component::GUI2::AtkNineGridNode::vf2 */
byte F_00570fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x570fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  bVar1 = F_00570e20((undefined *)this);
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)(this + 0x1c) != (undefined *)0x0)) {
    bVar1 = F_005c2ad0(*(undefined * PTR32 *)(this + 0x1c),0xc,5,((byte *)(gen_frame + 0xc)));
    if (bVar1 != 0) {
      *(uint *)(this + 0x90) = (uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0xc)) + 12));
    }
  }
  return bVar1;
}

/* ref: FUN_00571010 */
uint F_00571010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x571010u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  undefined2 uVar9;
  float10 fVar10;
  uint3 uVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  uint uVar18;
  float10 fVar19;
  float10 fVar20;
  
  uVar12 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  (*(uint *)(gen_frame + 0x3c)) = uVar12;
  iVar16 = *((int *)GEN_TOP((*(int *)(param_2 + 0x8c) + 8))) + (uint)*(ushort *)(param_2 + 0x90) * 0xc;
  if (*(char *)(param_2 + 0x92) == '\0') {
    uVar7 = *(ushort *)(iVar16 + 8);
    uVar8 = *(ushort *)(iVar16 + 10);
  }
  else {
    uVar7 = *(ushort *)(param_2 + 0x7c);
    uVar8 = *(ushort *)(param_2 + 0x7e);
  }
  if ((char)param_4 == '\0') {
    param_1[2] = *(float *)(param_2 + 0x60);
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[10] = *(float *)(param_2 + 0x60);
    param_1[8] = 0.0;
    param_1[9] = (float)uVar8;
    fVar1 = *(float *)(param_2 + 0x60);
    param_1[0x11] = (float)uVar8;
    param_1[0x12] = fVar1;
    param_1[0x10] = (float)uVar7;
    fVar1 = *(float *)(param_2 + 0x60);
    param_1[0x18] = (float)uVar7;
    param_1[0x19] = 0.0;
    param_1[0x1a] = fVar1;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x2c);
    fVar10 = (float10)0;
    fVar2 = *(float *)(param_2 + 0x24);
    fVar3 = *(float *)(param_2 + 0x34);
    fVar4 = *(float *)(param_2 + 0x20);
    fVar5 = *(float *)(param_2 + 0x28);
    fVar6 = *(float *)(param_2 + 0x30);
    param_1[2] = *(float *)(param_2 + 0x60);
    *param_1 = ((float)GEN_TOF((((float10)fVar5 * fVar10 + (float10)fVar4 * fVar10) + (float10)fVar6)));
    param_1[1] = ((float)GEN_TOF(((float10)fVar3 + ((float10)fVar2 * fVar10 + (float10)fVar1 * fVar10))));
    fVar1 = *(float *)(param_2 + 0x60);
    fVar19 = (float10)uVar8;
    fVar2 = ((float)GEN_TOF((((float10)*(float *)(param_2 + 0x24) * fVar10 +
                    fVar19 * (float10)*(float *)(param_2 + 0x2c)) +
                   (float10)*(float *)(param_2 + 0x34))));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = *(float *)(param_2 + 0x28);
    fVar4 = *(float *)(param_2 + 0x20);
    fVar5 = *(float *)(param_2 + 0x30);
    param_1[10] = fVar1;
    fVar1 = ((float)GEN_TOF((((float10)fVar4 * fVar10 + fVar19 * (float10)fVar3) + (float10)fVar5)));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    param_1[8] = fVar1;
    param_1[9] = fVar2;
    fVar1 = *(float *)(param_2 + 0x60);
    fVar20 = (float10)uVar7;
    fVar2 = ((float)GEN_TOF(((fVar19 * (float10)*(float *)(param_2 + 0x2c) +
                    fVar20 * (float10)*(float *)(param_2 + 0x24)) +
                   (float10)*(float *)(param_2 + 0x34))));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = *(float *)(param_2 + 0x28);
    fVar4 = *(float *)(param_2 + 0x20);
    fVar5 = *(float *)(param_2 + 0x30);
    param_1[0x12] = fVar1;
    fVar1 = ((float)GEN_TOF(((float10)fVar5 + (fVar20 * (float10)fVar4 + (float10)fVar3 * fVar19))));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    param_1[0x10] = fVar1;
    param_1[0x11] = fVar2;
    fVar1 = ((float)GEN_TOF((((float10)*(float *)(param_2 + 0x2c) * fVar10 +
                    fVar20 * (float10)*(float *)(param_2 + 0x24)) +
                   (float10)*(float *)(param_2 + 0x34))));
    (*(float *)(gen_frame + 0x24)) = fVar1;
    fVar2 = *(float *)(param_2 + 0x20);
    fVar3 = *(float *)(param_2 + 0x28);
    fVar4 = *(float *)(param_2 + 0x30);
    param_1[0x1a] = *(float *)(param_2 + 0x60);
    fVar2 = ((float)GEN_TOF(((fVar20 * (float10)fVar2 + (float10)fVar3 * fVar10) + (float10)fVar4)));
    (*(float *)(gen_frame + 0x20)) = fVar2;
    param_1[0x18] = fVar2;
    param_1[0x19] = fVar1;
  }
  uVar14 = (uint)(*(byte *)(param_2 + 0x93) >> 1 & 1);
  uVar18 = (uint)(*(byte *)(param_2 + 0x93) & 1);
  if ((*(char *)(param_2 + 0x92) == '\0') || (*(char *)(param_2 + 0x92) == '\x02')) {
    (*(short *)(gen_frame + 0x4)) = *(short *)(iVar16 + 4);
    (*(short *)(gen_frame + 0x8)) = *(short *)(iVar16 + 8) + (*(short *)(gen_frame + 0x4));
    sVar13 = *(short *)(iVar16 + 6);
    sVar17 = *(short *)(iVar16 + 10) + sVar13;
  }
  else {
    (*(short *)(gen_frame + 0x4)) = *(short *)(iVar16 + 4);
    (*(short *)(gen_frame + 0x8)) = (*(short *)(gen_frame + 0x4)) + uVar7;
    sVar13 = *(short *)(iVar16 + 6);
    sVar17 = sVar13 + uVar8;
  }
  if ((*(byte *)(param_2 + 0x93) & 0x80) == 0) goto LAB_005712ff;
  iVar16 = *(int *)(param_3 + 8);
  if (iVar16 == 0) {
    if (*(int *)(param_3 + 0xc) != 0) {
      iVar15 = *((int *)GEN_TOP((*(int *)(param_3 + 0xc) + 0xfc)));
      goto LAB_0057129d;
    }
LAB_005712a1: ;
    (*(short *)(gen_frame + 0x0)) = 1;
  }
  else {
    if (iVar16 == 1) {
      if (*(int *)(param_3 + 0xc) != 0) {
        iVar15 = *((int *)GEN_TOP((*(int *)(param_3 + 0xc) + 0x18)));
        goto LAB_0057129d;
      }
      goto LAB_005712a1;
    }
    if (iVar16 != 2) goto LAB_005712a1;
    iVar15 = *(int *)(param_3 + 0xc);
LAB_0057129d: ;
    if (iVar15 == 0) goto LAB_005712a1;
    (*(short *)(gen_frame + 0x0)) = (short)*(undefined4 *)(iVar15 + 0x18);
  }
  if (iVar16 == 0) {
    if (*(int *)(param_3 + 0xc) != 0) {
      iVar16 = *((int *)GEN_TOP((*(int *)(param_3 + 0xc) + 0xfc)));
      goto LAB_005712db;
    }
LAB_005712df: ;
    sVar17 = 1;
  }
  else {
    if (iVar16 == 1) {
      if (*(int *)(param_3 + 0xc) != 0) {
        iVar16 = *((int *)GEN_TOP((*(int *)(param_3 + 0xc) + 0x18)));
        goto LAB_005712db;
      }
      goto LAB_005712df;
    }
    if (iVar16 != 2) goto LAB_005712df;
    iVar16 = *(int *)(param_3 + 0xc);
LAB_005712db: ;
    if (iVar16 == 0) goto LAB_005712df;
    sVar17 = (short)*(undefined4 *)(iVar16 + 0x1c);
  }
  (*(short *)(gen_frame + 0x8)) = (*(short *)(gen_frame + 0x0));
  (*(short *)(gen_frame + 0x4)) = 0;
  sVar13 = 0;
LAB_005712ff: ;
  ((short *)(gen_frame + 0x10))[0] = sVar13;
  ((short *)(gen_frame + 0x10))[3] = sVar13;
  (*(short *)(gen_frame + 0x1a)) = sVar13;
  (*(short *)(gen_frame + 0x1c)) = sVar13;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x20)) + 0)) = (*(short *)(gen_frame + 0x4));
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x20)) + 2)) = (*(short *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x20)) = gen_bits2f(CONCAT22((*(short *)(gen_frame + 0x4)),(*(short *)(gen_frame + 0x4))));
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x24)) + 0)) = (*(short *)(gen_frame + 0x8));
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x24)) + 2)) = (*(short *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(CONCAT22((*(short *)(gen_frame + 0x8)),(*(short *)(gen_frame + 0x8))));
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x28)) + 0)) = (*(short *)(gen_frame + 0x8));
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x28)) + 2)) = (*(short *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(CONCAT22((*(short *)(gen_frame + 0x8)),(*(short *)(gen_frame + 0x8))));
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 0)) = (*(short *)(gen_frame + 0x4));
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 2)) = (*(short *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x2c)) = gen_bits2f(CONCAT22((*(short *)(gen_frame + 0x4)),(*(short *)(gen_frame + 0x4))));
  ((short *)(gen_frame + 0x10))[1] = sVar17;
  ((short *)(gen_frame + 0x10))[2] = sVar17;
  (*(short *)(gen_frame + 0x18)) = sVar17;
  (*(short *)(gen_frame + 0x1e)) = sVar17;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(&(*(float *)(gen_frame + 0x20)) + uVar18 * 2);
  *(short *)((int)param_1 + 0x12) = ((short *)(gen_frame + 0x10))[(int)(uVar14 * 4)];
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)((int)&(*(float *)(gen_frame + 0x20)) + uVar18 * 8 + 2);
  *(short *)((int)param_1 + 0x32) = ((short *)(gen_frame + 0x10))[(int)(uVar14 * 4 + 1)];
  uVar9 = *(undefined2 *)((int)&(*(float *)(gen_frame + 0x24)) + uVar18 * 8 + 2);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(&(*(float *)(gen_frame + 0x24)) + uVar18 * 2);
  sVar13 = ((short *)(gen_frame + 0x10))[(int)(uVar14 * 4 + 3)];
  *(short *)((int)param_1 + 0x52) = ((short *)(gen_frame + 0x10))[(int)(uVar14 * 4 + 2)];
  *(undefined2 *)(param_1 + 0x1c) = uVar9;
  *(short *)((int)param_1 + 0x72) = sVar13;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 0)) = *(undefined1 *)(param_2 + 0x6e);
  uVar11 = *(uint3 *)(param_2 + 0x6e);
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 1)) = *(undefined1 *)(param_2 + 0x6f);
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 2)) = *(undefined1 *)(param_2 + 0x70);
  uVar9 = *(undefined2 *)(param_2 + 0x6a);
  fVar1 = *(float *)(param_2 + 0x68);
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x24)) + 0)) = *(undefined2 *)(param_2 + 0x68);
  uVar7 = *(ushort *)(param_2 + 0x6c);
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x24)) + 2)) = uVar9;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x28)) + 0)) = uVar7;
  param_1[3] = *(float *)(param_2 + 100);
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 3)) = 0;
  (*(float *)(gen_frame + 0x2c)) = gen_bits2f((uint)uVar11);
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x28)) + 2)) = 0;
  (*(float *)(gen_frame + 0x28)) = gen_bits2f((uint)uVar7);
  param_1[6] = fVar1;
  param_1[7] = (*(float *)(gen_frame + 0x28));
  param_1[5] = (*(float *)(gen_frame + 0x2c));
  param_1[0xb] = *(float *)(param_2 + 100);
  param_1[0xe] = fVar1;
  param_1[0xf] = (*(float *)(gen_frame + 0x28));
  param_1[0xd] = (*(float *)(gen_frame + 0x2c));
  param_1[0x13] = *(float *)(param_2 + 100);
  param_1[0x16] = fVar1;
  param_1[0x17] = (*(float *)(gen_frame + 0x28));
  param_1[0x15] = (*(float *)(gen_frame + 0x2c));
  param_1[0x1b] = *(float *)(param_2 + 100);
  param_1[0x1e] = fVar1;
  param_1[0x1f] = (*(float *)(gen_frame + 0x28));
  param_1[0x1d] = (*(float *)(gen_frame + 0x2c));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  F_00c47745(uVar12 ^ (uint)(uint)(gen_frame + 0x40));
  return (uint)param_1;
}

/* ref: FUN_00571440 */
byte F_00571440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x571440u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  longlong lVar1;
  short sVar2;
  byte * pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  float10 fVar8;
  float10 fVar9;
  
  pbVar3 = (*(byte * PTR32 *)&gen_args[0]);
  iVar6 = (int)*(char *)((*(int *)&gen_args[1]) + 0x6e) * (uint)*(*(byte * PTR32 *)&gen_args[0]);
  fVar8 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar9 = (float10)*(double *)&REFG(undefined, 0x1088118);
  iVar6 = (int)*(char *)((*(int *)&gen_args[1]) + 0x6f) * (uint)(*(byte * PTR32 *)&gen_args[0])[1];
  lVar1 = (longlong)TRUNC((float10)(int)*(short *)((*(int *)&gen_args[1]) + 0x68) + fVar8 / fVar9);
  (*(longlong *)(gen_frame + 0xc)) = lVar1;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (uint)lVar1;
  uVar4 = (uint)(*(longlong *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x18)) = (uint)(*(longlong *)(gen_frame + 0xc));
  fVar8 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  iVar6 = (int)*(char *)((*(int *)&gen_args[1]) + 0x70) * (uint)(*(byte * PTR32 *)&gen_args[0])[2];
  lVar1 = (longlong)TRUNC((float10)(int)*(short *)((*(int *)&gen_args[1]) + 0x6a) + fVar8 / fVar9);
  (*(longlong *)(gen_frame + 0xc)) = lVar1;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (uint)lVar1;
  uVar5 = (uint)(*(longlong *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x14)) = (uint)(*(longlong *)(gen_frame + 0xc));
  fVar8 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  sVar2 = *(short *)((*(int *)&gen_args[1]) + 0x6c);
  (*(byte * PTR32 *)&gen_args[0]) = (byte *)0x0;
  lVar1 = (longlong)TRUNC((float10)(int)sVar2 + fVar8 / fVar9);
  (*(longlong *)(gen_frame + 0xc)) = lVar1;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (uint)lVar1;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)) = (uint)(*(longlong *)(gen_frame + 0xc));
  (*(longlong *)(gen_frame + 0xc)) = CONCAT44((uint)(*(longlong *)(gen_frame + 0xc)),(uint)(*(longlong *)(gen_frame + 0xc)));
  (*(int *)&gen_args[1]) = 0xff;
  if (uVar4 < 0xff) {
    puVar7 = &(*(uint *)(gen_frame + 0x18));
    if (uVar4 == 0) {
      puVar7 = (uint *)&(*(byte * PTR32 *)&gen_args[0]);
    }
  }
  else {
    puVar7 = (uint *)&(*(int *)&gen_args[1]);
  }
  *pbVar3 = (byte)*puVar7;
  (*(int *)&gen_args[1]) = 0xff;
  (*(byte * PTR32 *)&gen_args[0]) = (byte *)0x0;
  if (uVar5 < 0xff) {
    puVar7 = &(*(uint *)(gen_frame + 0x14));
    if (uVar5 == 0) {
      puVar7 = (uint *)&(*(byte * PTR32 *)&gen_args[0]);
    }
  }
  else {
    puVar7 = (uint *)&(*(int *)&gen_args[1]);
  }
  pbVar3[1] = (byte)*puVar7;
  if ((uint)(*(longlong *)(gen_frame + 0xc)) < 0xff) {
    if ((uint)(*(longlong *)(gen_frame + 0xc)) != 0) {
      (*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)) = (byte)lVar1;
      pbVar3[2] = (*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4));
      return (char)&(*(longlong *)(gen_frame + 0xc)) + 4;
    }
    pbVar3[2] = 0;
    return 0;
  }
  pbVar3[2] = 0xff;
  return (byte)&(*(int *)&gen_args[1]);
}

/* ref: FUN_005715d0 */
uint F_005715d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5715d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  undefined * pvVar6;
  undefined * this_00;
  float10 fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int * piVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0xf0)) = this;
  uVar10 = 0;
  (*(uint *)(gen_frame + 0xe0)) = 0;
  (*(char *)(gen_frame + 0xff)) = '\0';
  (*(uint *)(gen_frame + 0xec)) = 0;
  (*(uint *)(gen_frame + 0xdc)) = (uint)*(ushort *)(param_1 + 0x2e);
  if (*(ushort *)(param_1 + 0x2e) == 0) {
    return 0;
  }
  do {
    fVar7 = (float10)0;
    if ((uint)(*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2) <= uVar10) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x38) + uVar10 * 4)));
    if (pvVar6 == (undefined *)0x0) {
      (*(uint *)(gen_frame + 0xe8)) = 0;
    }
    else if (*(ushort *)((int)pvVar6 + 0x18) < 1000) {
      (*(uint *)(gen_frame + 0xe8)) = (uint)*(ushort *)((int)pvVar6 + 0x18);
    }
    else {
      (*(uint *)(gen_frame + 0xe8)) = 10000;
    }
    uVar8 = *(uint *)((int)pvVar6 + 0x84);
    if ((uVar8 & 0x100000) == 0) {
      uVar10 = uVar10 + *(ushort *)((int)pvVar6 + 0x1a);
    }
    else {
      if ((uVar8 & 0x400000) == 0) {
        if ((*(char *)(gen_frame + 0xff)) != '\0') goto LAB_00571879;
      }
      else {
        uVar4 = *(ushort *)(param_1 + 0x2c);
        (*(char *)(gen_frame + 0xff)) = '\x01';
        (*(uint *)(gen_frame + 0xe0)) = *(ushort *)((int)pvVar6 + 0x1a) + uVar10;
        fVar1 = ((float)GEN_TOF((((float10)*(float *)((int)pvVar6 + 0x24) * fVar7 +
                        (float10)*(float *)((int)pvVar6 + 0x2c) * fVar7) +
                       (float10)*(float *)((int)pvVar6 + 0x34))));
        (*(float *)(gen_frame + 0xb4)) = fVar1;
        fVar2 = ((float)GEN_TOF((((float10)*(float *)((int)pvVar6 + 0x28) * fVar7 +
                        (float10)*(float *)((int)pvVar6 + 0x20) * fVar7) +
                       (float10)*(float *)((int)pvVar6 + 0x30))));
        (*(float *)(gen_frame + 0xb0)) = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)pvVar6 + 0x28) *
                        (float10)*(float *)((int)pvVar6 + 0x28) +
                       (float10)*(float *)((int)pvVar6 + 0x2c) *
                       (float10)*(float *)((int)pvVar6 + 0x2c))));
        (*(float *)(gen_frame + 0xf4)) = fVar3;
        fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
        (*(float *)(gen_frame + 0xf4)) = fVar3;
        uVar5 = *(ushort *)((int)pvVar6 + 0x7e);
        (*(float *)(gen_frame + 0xf4)) = gen_bits2f((uint)uVar5);
        (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xf4)) + 2)) = gen_x87_cw;
        (*(float *)(gen_frame + 0xf8)) = gen_bits2f(gen_x87_cw | 0xc00);
        uVar10 = (uint)TRUNC((float10)uVar5 * (float10)fVar3);
        (*(float *)(gen_frame + 0xf8)) = gen_bits2f(uVar10);
        uVar10 = uVar10 & 0xffff;
        (*(uint *)(gen_frame + 0xe4)) = uVar10;
        fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)pvVar6 + 0x20) *
                        (float10)*(float *)((int)pvVar6 + 0x20) +
                       (float10)*(float *)((int)pvVar6 + 0x24) *
                       (float10)*(float *)((int)pvVar6 + 0x24))));
        (*(float *)(gen_frame + 0xf8)) = fVar3;
        fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
        (*(float *)(gen_frame + 0xf8)) = fVar3;
        (*(float *)(gen_frame + 0xf4)) = gen_bits2f(CONCAT22(gen_x87_cw,uVar5));
        (*(float *)(gen_frame + 0xf8)) = gen_bits2f((uint)*(ushort *)((int)pvVar6 + 0x7c));
        (*(float *)(gen_frame + 0xf8)) = gen_bits2f(gen_x87_cw | 0xc00);
        uVar8 = (uint)TRUNC((float10)*(ushort *)((int)pvVar6 + 0x7c) * (float10)fVar3);
        (*(float *)(gen_frame + 0xf8)) = gen_bits2f(uVar8);
        uVar8 = uVar8 & 0xffff;
        (*(float *)(gen_frame + 0xf8)) = gen_bits2f(uVar8);
        (*(float *)(gen_frame + 0x98)) = (float)((float10)uVar8 + (float10)fVar2);
        (*(float *)(gen_frame + 0x9c)) = (float)((float10)uVar10 + (float10)fVar1);
        F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x88);
        (*(uint *)(gen_frame + 0x14)) = (int)(*(float *)(gen_frame + 0xb0));
        (*(int *)(gen_frame + 0x20)) = (int)(*(float *)(gen_frame + 0x9c));
        (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) ^ ((uint)uVar4 << 0x11 ^ (*(uint *)(gen_frame + 0x10))) & 0x7fff800;
        (*(uint *)(gen_frame + 0x18)) = (int)(*(float *)(gen_frame + 0xb4));
        (*(int *)(gen_frame + 0x1c)) = (int)(*(float *)(gen_frame + 0x98));
        (*(uint *)(gen_frame + 0xc)) = 0;
        uVar10 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf0)) + 8) + 8))))((int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf0)) + 8));
        *((uint *)GEN_TOP((*(int *)(uVar10 + 4) + 0x70))) = 0xffff - ((*(uint *)(gen_frame + 0x10)) >> 0xb & 0xffff);
        this_00 = *(undefined * PTR32 *)(uVar10 + 4);
        uVar10 = F_005bfe10(this_00,2,0x1c,0);
        if (uVar10 != 0) {
          *(byte *)((int)this_00 + 0xa4) = *(byte *)((int)this_00 + 0xa4) | 2;
          *(uint *)(uVar10 + 0xc) = (*(uint *)(gen_frame + 0x14));
          *(uint *)(uVar10 + 0x10) = (*(uint *)(gen_frame + 0x18));
          *(int *)(uVar10 + 0x14) = (*(int *)(gen_frame + 0x1c));
          *(int *)(uVar10 + 0x18) = (*(int *)(gen_frame + 0x20));
          *(undefined4 *)(uVar10 + 8) = 1;
          F_005bfeb0(this_00,uVar10);
        }
        (*(uint *)(gen_frame + 0xcc)) = (*(uint *)(gen_frame + 0x14));
        (*(uint *)(gen_frame + 0xd0)) = (*(uint *)(gen_frame + 0x18));
        (*(int *)(gen_frame + 0xd4)) = (*(int *)(gen_frame + 0x1c));
        (*(int *)(gen_frame + 0xd8)) = (*(int *)(gen_frame + 0x20));
        uVar10 = (*(uint *)(gen_frame + 0xec));
LAB_00571879: ;
        uVar8 = *(uint *)((int)pvVar6 + 0x84);
        if ((uVar8 & 0x20000000) != 0) {
          if ((uVar8 & 0x1000000) == 0) {
            uVar8 = (uint)*(ushort *)((int)pvVar6 + 0x18);
            if ((uVar8 != 8) && (*(ushort *)((int)pvVar6 + 0x18) < 1000)) goto LAB_005718d5;
          }
          F_00568010(pvVar6,&(*(int *)(gen_frame + 0xa0)));
          uVar8 = (*(uint *)(gen_frame + 0xcc));
          if (((*(int *)(gen_frame + 0xa8)) < (int)(*(uint *)(gen_frame + 0xcc))) ||
             ((((*(int *)(gen_frame + 0xd4)) < (*(int *)(gen_frame + 0xa0)) || ((*(int *)(gen_frame + 0xd8)) < (*(int *)(gen_frame + 0xa4)))) ||
              (uVar8 = (*(uint *)(gen_frame + 0xd0)), (*(int *)(gen_frame + 0xac)) < (int)(*(uint *)(gen_frame + 0xd0)))))) {
            *(uint *)((int)pvVar6 + 0x88) = *(uint *)((int)pvVar6 + 0x88) | 0x20000;
          }
        }
      }
LAB_005718d5: ;
      if ((*(uint *)((int)pvVar6 + 0x88) & 0x20000) == 0) {
        if (((*(uint *)(gen_frame + 0xe8)) & 0xf0) == 0) {
          uVar8 = (*(uint *)(gen_frame + 0xe8));
          if ((*(uint *)(gen_frame + 0xe8)) < 2) goto LAB_00571945;
          piVar11 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf0)) + (*(uint *)(gen_frame + 0xe8)) * 4 + 0x40);
          ((code *)*(gen_code32 *)(*piVar11 + 4))(piVar11,param_1);
          piVar11 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf0)) + (*(uint *)(gen_frame + 0xe8)) * 4 + 0x40);
        }
        else {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf0)) + 0x68) + 4))))
                    (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf0)) + 0x68),param_1);
          piVar11 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf0)) + 0x68);
        }
        uVar8 = ((code *)*(gen_code32 *)(*piVar11 + 0xc))(piVar11,pvVar6,param_2);
        uVar10 = (*(uint *)(gen_frame + 0xec));
        if (-1 < (int)uVar8) {
          uVar8 = ((code *)*(gen_code32 *)(*piVar11 + 0x10))(piVar11,pvVar6,param_2);
          uVar10 = (*(uint *)(gen_frame + 0xec));
        }
      }
    }
LAB_00571945: ;
    uVar10 = uVar10 + 1;
    (*(uint *)(gen_frame + 0xec)) = uVar10;
    if (((*(char *)(gen_frame + 0xff)) != '\0') && ((*(uint *)(gen_frame + 0xe0)) < uVar10)) {
      (*(char *)(gen_frame + 0xff)) = '\0';
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf0)) + 8) + 8))))((int)(*(undefined * PTR32 *)(gen_frame + 0xf0)) + 8);
      if (((*(uint *)(gen_frame + 0xc)) & 0xf) == 0) {
        *((uint *)GEN_TOP((*(int *)(uVar8 + 4) + 0x70))) = 0xffff - ((*(uint *)(gen_frame + 0x10)) >> 0xb & 0xffff);
        pvVar6 = *(undefined * PTR32 *)(uVar8 + 4);
        uVar9 = F_005bfe10(pvVar6,2,0x1c,0);
        uVar8 = 0;
        if (uVar9 != 0) {
          *(byte *)((int)pvVar6 + 0xa4) = *(byte *)((int)pvVar6 + 0xa4) & 0xfd;
          *(uint *)(uVar9 + 0xc) = (*(uint *)(gen_frame + 0x14));
          *(uint *)(uVar9 + 0x10) = (*(uint *)(gen_frame + 0x18));
          *(int *)(uVar9 + 0x14) = (*(int *)(gen_frame + 0x1c));
          *(int *)(uVar9 + 0x18) = (*(int *)(gen_frame + 0x20));
          *(undefined4 *)(uVar9 + 8) = 0;
          uVar8 = F_005bfeb0(pvVar6,uVar9);
        }
      }
    }
    if ((*(uint *)(gen_frame + 0xdc)) <= uVar10) {
      return uVar8;
    }
  } while( true );
}

/* ref: FUN_00571a10 */
byte F_00571a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x571a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  int * piVar10;
  
  ((uint *)(gen_frame + 0x2c))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x14)) = *param_5;
  uVar7 = param_5[1] / 3;
  uVar2 = 0x20;
  uVar9 = 0;
  (*(uint *)(gen_frame + 0xc)) = param_5[2] / 3;
  (*(undefined4 *)(gen_frame + 0x28)) = 0x20;
  ((uint *)(gen_frame + 0x2c))[0] = 0x18;
  ((uint *)(gen_frame + 0x2c))[1] = 0x20;
  ((uint *)(gen_frame + 0x2c))[2] = 0;
  puVar4 = &(*(undefined4 *)(gen_frame + 0x28));
  do {
    if (uVar9 < uVar2) {
      uVar9 = uVar2;
    }
    uVar2 = puVar4[1];
    puVar4 = puVar4 + 1;
  } while (uVar2 != 0);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  if (0xffef < uVar7 / uVar9) {
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
  }
  piVar3 = (int *)F_00406520();
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,(*(uint *)(gen_frame + 0x14)),0x80);
  *(uint *)((int)this + 0x290) = uVar2;
  if (uVar2 != 0) {
    *(undefined4 *)((int)this + 0x23c) = param_1;
    *(undefined4 *)((int)this + 0x244) = param_3;
    *(undefined4 *)((int)this + 0x248) = param_4;
    *(uint *)((int)this + 0x28c) = (*(uint *)(gen_frame + 0xc));
    *(undefined4 *)((int)this + 0x240) = param_2;
    *(uint *)((int)this + 0x284) = (*(uint *)(gen_frame + 0x14));
    *(uint *)((int)this + 0x288) = uVar7;
    *(uint *)((int)this + 0x2ac) = uVar9;
    uVar2 = uVar7 / 3 + 0xff & 0xffffff00;
    *(undefined4 *)((int)this + 0x24c) = 0x20;
    *(undefined4 *)((int)this + 0x25c) = 0x18;
    *(undefined4 *)((int)this + 0x250) = 0;
    *(uint *)((int)this + 0x254) = uVar2;
    *(uint *)((int)this + 0x260) = uVar2;
    *(uint *)((int)this + 0x264) = uVar2;
    *(undefined4 *)((int)this + 0x26c) = 0x20;
    *(uint *)((int)this + 0x270) = uVar2 * 2;
    *(uint *)((int)this + 0x274) = uVar2;
    puVar4 = (undefined4 *)F_00406bb0(0xb10,0,0);
    if (puVar4 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *puVar4 = 0x10;
      piVar10 = puVar4 + 4;
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar10;
      (*(uint *)(gen_frame + 0x14)) = 0xf;
      do {
        F_00565100(piVar10);
        piVar10 = piVar10 + 0x2c;
        uVar2 = (*(uint *)(gen_frame + 0x14)) - 1;
        (*(uint *)(gen_frame + 0x14)) = uVar2;
        piVar3 = (*(int * PTR32 *)(gen_frame + 0x10));
      } while (-1 < (int)uVar2);
    }
    *(int * PTR32 *)((int)this + 0x2a8) = piVar3;
    if (piVar3 != (int *)0x0) {
      uVar2 = 0;
      do {
        iVar5 = *(int *)((int)this + 0x2a8) + uVar2;
        *(undefined * PTR32 *)(iVar5 + 0x10) = this;
        *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)((int)this + 0x24c);
        *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)((int)this + 0x25c);
        uVar2 = uVar2 + 0xb0;
        *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)((int)this + 0x26c);
      } while (uVar2 < 0xb00);
      (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)((int)this + 0x90);
      (*(uint *)(gen_frame + 0x14)) = 0;
      do {
        piVar3 = (int *)F_004deb40(REFG(void * PTR32, 0x1370b90),*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x109fad0) + (*(uint *)(gen_frame + 0x14)))))
                                     ,*(uint *)((int)&REFG(undefined4, 0x109fad4) + (*(uint *)(gen_frame + 0x14))) >> 2);
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
        }
        piVar10 = (int *)*(*(int * PTR32 *)(gen_frame + 0x10));
        if (piVar10 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar10 + 0xc))(piVar10);
        }
        *(*(int * PTR32 *)(gen_frame + 0x10)) = (int)piVar3;
        if (piVar3 == (int *)0x0) goto LAB_00571aab;
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
        (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 1;
        uVar2 = (*(uint *)(gen_frame + 0x14)) + 0xc;
        (*(uint *)(gen_frame + 0x14)) = uVar2;
      } while (uVar2 < 0x24);
      uVar2 = F_004dcc90(uVar7,1,0xc);
      *(uint *)((int)this + 0x9c) = uVar2;
      if (uVar2 != 0) {
        uVar2 = F_004dccf0((*(uint *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x4)),1,0xc);
        *(uint *)((int)this + 0xa0) = uVar2;
        if (uVar2 != 0) {
          uVar2 = 0;
          puVar8 = (uint *)((int)this + 0xa4);
          do {
            uVar9 = F_004dcd60(0x40,4,0xc);
            *puVar8 = uVar9;
            if (uVar9 == 0) goto LAB_00571aab;
            uVar2 = uVar2 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar2 < 0x15);
          uVar2 = 0;
          puVar8 = (uint *)((int)this + 0xf8);
          do {
            uVar9 = F_004dcd60(0x10,4,0xc);
            *puVar8 = uVar9;
            if (uVar9 == 0) goto LAB_00571aab;
            uVar2 = uVar2 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar2 < 4);
          uVar2 = F_004dcd60(0x40,2,0xc);
          *(uint *)((int)this + 0x208) = uVar2;
          if (uVar2 != 0) {
            uVar2 = F_004dcd60(0x10,2,0xc);
            *(uint *)((int)this + 0x20c) = uVar2;
            if (uVar2 != 0) {
              (*(undefined4 *)(gen_frame + 0x8)) = 4;
              (*(uint *)(gen_frame + 0xc)) = 4;
              uVar2 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x1450,4,0xc);
              *(uint *)((int)this + 0x210) = uVar2;
              if (uVar2 != 0) {
                (*(undefined4 *)(gen_frame + 0x8)) = 4;
                (*(uint *)(gen_frame + 0xc)) = 4;
                uVar2 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x1450,4,0xc);
                *(uint *)((int)this + 0x214) = uVar2;
                if (uVar2 != 0) {
                  uVar2 = F_004dcd60(8,2,0xc);
                  *(uint *)((int)this + 0x280) = uVar2;
                  if (uVar2 != 0) {
                    uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_RemapMatrix");
                    *(uint *)((int)this + 0x218) = uVar2;
                    uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_RemapVector");
                    *(uint *)((int)this + 0x21c) = uVar2;
                    uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_ProjectionMatrix");
                    *(uint *)((int)this + 0x220) = uVar2;
                    uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_OptionParam");
                    *(uint *)((int)this + 0x22c) = uVar2;
                    uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))),"g_Texture");
                    *(uint *)((int)this + 0x228) = uVar2;
                    uVar2 = 0;
                    puVar8 = (uint *)((int)this + 0x230);
                    do {
                      F_00c472af(((undefined1 *)(gen_frame + 0x18)),0x20,"g_SubTexture%d",uVar2);
                      uVar9 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))),((undefined1 *)(gen_frame + 0x18)));
                      *puVar8 = uVar9;
                      uVar2 = uVar2 + 1;
                      puVar8 = puVar8 + 1;
                    } while (uVar2 < 3);
                    uVar2 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_TextureParam");
                    *(uint *)((int)this + 0x27c) = uVar2;
                    F_005694a0(this);
                    pvVar1 = *(undefined * PTR32 *)((int)this + 0x210);
                    if (pvVar1 != (undefined *)0x0) {
                      uVar2 = *(uint *)((int)pvVar1 + 0x1c);
                      iVar5 = *(int *)((int)pvVar1 + 0x18);
                      (*(uint *)(gen_frame + 0xc)) = uVar2;
                      uVar9 = F_004d5a50(pvVar1,0,0,((uint *)(gen_frame + 0x2c)),2);
                      if (uVar9 != 0) {
                        uVar9 = 0;
                        if (uVar2 != 0) {
                          do {
                            puVar4 = (undefined4 *)(((uint *)(gen_frame + 0x2c))[0] * uVar9 + ((uint *)(gen_frame + 0x2c))[2]);
                            iVar6 = iVar5;
                            if (iVar5 != 0) {
                              for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                                *puVar4 = 0xffffffff;
                                puVar4 = puVar4 + 1;
                              }
                            }
                            uVar9 = uVar9 + 1;
                          } while (uVar9 < (*(uint *)(gen_frame + 0xc)));
                        }
                        F_004d5b60(*(undefined * PTR32 *)((int)this + 0x210),0,0);
                      }
                    }
                    pvVar1 = *(undefined * PTR32 *)((int)this + 0x214);
                    if (pvVar1 != (undefined *)0x0) {
                      uVar2 = *(uint *)((int)pvVar1 + 0x1c);
                      iVar5 = *(int *)((int)pvVar1 + 0x18);
                      (*(uint *)(gen_frame + 0xc)) = uVar2;
                      uVar9 = F_004d5a50(pvVar1,0,0,((uint *)(gen_frame + 0x2c)),2);
                      if (uVar9 != 0) {
                        uVar9 = 0;
                        if (uVar2 != 0) {
                          do {
                            puVar4 = (undefined4 *)(((uint *)(gen_frame + 0x2c))[0] * uVar9 + ((uint *)(gen_frame + 0x2c))[2]);
                            iVar6 = iVar5;
                            if (iVar5 != 0) {
                              for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                                *puVar4 = 0xff000000;
                                puVar4 = puVar4 + 1;
                              }
                            }
                            uVar9 = uVar9 + 1;
                          } while (uVar9 < (*(uint *)(gen_frame + 0xc)));
                        }
                        F_004d5b60(*(undefined * PTR32 *)((int)this + 0x214),0,0);
                      }
                    }
                    *(undefined4 *)((int)this + 0x4334) = 0;
                    *(undefined4 *)((int)this + 0x42b4) = 0;
                    *(undefined4 *)((int)this + 0x42c4) = 0;
                    *(undefined4 *)((int)this + 0x42d4) = 0;
                    *(undefined4 *)((int)this + 0x42e4) = 0;
                    *(undefined4 *)((int)this + 0x42f4) = 0;
                    *(undefined4 *)((int)this + 0x4304) = 0;
                    *(undefined4 *)((int)this + 0x4314) = 0;
                    *(undefined4 *)((int)this + 0x4324) = 0;
                    *(undefined4 *)((int)this + 0x42b8) = 0;
                    *(undefined4 *)((int)this + 0x42c8) = 0;
                    *(undefined4 *)((int)this + 0x42d8) = 0;
                    *(undefined4 *)((int)this + 0x42e8) = 0;
                    *(undefined4 *)((int)this + 0x42f8) = 0;
                    *(undefined4 *)((int)this + 0x4308) = 0;
                    *(undefined4 *)((int)this + 0x4318) = 0;
                    *(undefined4 *)((int)this + 0x4328) = 0;
                    *(undefined4 *)((int)this + 0x42bc) = 0;
                    *(undefined4 *)((int)this + 0x42cc) = 0;
                    *(undefined4 *)((int)this + 0x42dc) = 0;
                    *(undefined4 *)((int)this + 0x42ec) = 0;
                    *(undefined4 *)((int)this + 0x42fc) = 0;
                    *(undefined4 *)((int)this + 0x430c) = 0;
                    *(undefined4 *)((int)this + 0x431c) = 0;
                    *(undefined4 *)((int)this + 0x432c) = 0;
                    *(undefined4 *)((int)this + 0x42c0) = 0;
                    *(undefined4 *)((int)this + 0x42d0) = 0;
                    *(undefined4 *)((int)this + 0x42e0) = 0;
                    *(undefined4 *)((int)this + 0x42f0) = 0;
                    *(undefined4 *)((int)this + 0x4300) = 0;
                    *(undefined4 *)((int)this + 0x4310) = 0;
                    *(undefined4 *)((int)this + 0x4320) = 0;
                    *(undefined4 *)((int)this + 0x4330) = 0;
                    F_00c47745(((uint *)(gen_frame + 0x2c))[3] ^ (uint)(uint)(gen_frame + 0x3c));
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00571aab: ;
  F_0055b460(this);
  F_00c47745(((uint *)(gen_frame + 0x2c))[3] ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_00572040 */
unsigned int F_00572040(unsigned int gen_a0)
{
  GEN_ENTER(0x572040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  float10 fVar9;
  
  F_0055b6e0(this);
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  uVar5 = F_004d68c0(*(undefined * PTR32 *)((int)this + 0x9c),0,0,2);
  *(uint *)((int)this + 0x294) = uVar5;
  dVar4 = *(double *)&REFG(undefined, 0x10968a8);
  if (uVar5 == 0) {
    *(undefined4 *)((int)this + 600) = *(undefined4 *)((int)this + 0x288);
    *(undefined4 *)((int)this + 0x268) = *(undefined4 *)((int)this + 0x288);
    *(undefined4 *)((int)this + 0x278) = *(undefined4 *)((int)this + 0x288);
    uVar5 = 0;
  }
  else {
    *(undefined4 *)((int)this + 600) = 0;
    *(undefined4 *)((int)this + 0x268) = 0;
    *(undefined4 *)((int)this + 0x278) = 0;
    uVar5 = 0;
  }
  do {
    fVar9 = (float10)dVar4;
    iVar6 = *(int *)((int)this + 0x2a8) + uVar5;
    *(undefined4 *)(iVar6 + 0x14) = 0;
    *(int *)(iVar6 + 0x4c) = iVar6 + 0x48;
    *(undefined4 *)(iVar6 + 0x50) = 0x800;
    puVar7 = (undefined4 *)(iVar6 + 0x3c);
    iVar8 = 3;
    do {
      puVar7[-6] = 0x4000;
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(byte *)(iVar6 + 0xa4) = *(byte *)(iVar6 + 0xa4) & 0xf9;
    *(undefined4 *)(iVar6 + 0x54) = 1;
    *(undefined4 *)(iVar6 + 0x58) = 0;
    if ((*(byte *)(REFG(int, 0x137127c) + 0x6458) & 1) != 0) {
      iVar8 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
      fVar1 = *(float *)(iVar8 + 0x28);
      fVar2 = *(float *)(iVar8 + 0x38);
      fVar3 = *(float *)(iVar8 + 0x48);
      *(float *)(iVar6 + 0x60) = ((float)GEN_TOF(((float10)*(float *)(iVar8 + 0x18) * fVar9)));
      *(float *)(iVar6 + 100) = (float)((float10)fVar1 * fVar9);
      *(float *)(iVar6 + 0x68) = (float)((float10)fVar2 * fVar9);
      *(float *)(iVar6 + 0x6c) = (float)((float10)fVar3 * fVar9);
    }
    uVar5 = uVar5 + 0xb0;
  } while (uVar5 < 0xb00);
  *(undefined4 *)((int)this + 0x2b0) = 0;
  return 0;
}

/* ref: FUN_005721b0 */
uint F_005721b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5721b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_004daa40(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)))
                       ,1,&(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),0,0);
  return uVar1;
}

/* ref: FUN_005721e0 */
unsigned int F_005721e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5721e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int iVar1;
  
  if (param_1 < 4) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
    *((undefined4 *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + param_1 * 4 + 0x230) * 8))) = param_2;
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + param_1 * 4 + 0x230) * 8))) = *param_3 & 0xfffffff;
  }
  return 0;
}

/* ref: FUN_00572240 */
uint F_00572240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x572240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  float10 fVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  float10 fVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this;
  uVar2 = F_004d9920(*(undefined * PTR32 *)((int)this + 0x208),0,0,2);
  (*(uint *)(gen_frame + 0x40)) = uVar2;
  if (uVar2 != 0) {
    if (*(char *)((int)this + 0x4380) == '\0') {
      if ((param_1 & 0xf) == 0) {
        fVar6 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
        if (*(int *)(REFG(int, 0x1370b90) + 0x90) < 0) {
          fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)(gen_frame + 0x48)) = (float)fVar6;
        fVar7 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
        if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
          fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)(gen_frame + 0x4c)) = (float)fVar7;
        fVar1 = (float10)0;
        (*(undefined4 *)(gen_frame + 0xd0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(undefined4 *)(gen_frame + 0xd4)) = 0;
        (*(undefined4 *)(gen_frame + 0xd8)) = 0;
        (*(undefined4 *)(gen_frame + 0xdc)) = 0;
        (*(undefined4 *)(gen_frame + 0xe0)) = 0;
        (*(undefined4 *)(gen_frame + 0xe4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(undefined4 *)(gen_frame + 0xe8)) = 0;
        (*(undefined4 *)(gen_frame + 0xec)) = 0;
        (*(undefined4 *)(gen_frame + 0xf0)) = 0;
        (*(undefined4 *)(gen_frame + 0xf4)) = 0;
        (*(undefined4 *)(gen_frame + 0xf8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(undefined4 *)(gen_frame + 0xfc)) = 0;
        (*(undefined4 *)(gen_frame + 0x100)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
        (*(undefined4 *)(gen_frame + 0x104)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
        (*(undefined4 *)(gen_frame + 0x108)) = 0;
        (*(undefined4 *)(gen_frame + 0x10c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        F_004f08f0(((undefined1 *)(gen_frame + 0x90)),(float)fVar1,(float)fVar6,(float)fVar7,(float)fVar1,(float)fVar1,
                     (float)(float10)1,(float)fVar1,(float)fVar1);
        puVar3 = (undefined4 *)F_004f0e10(((undefined1 *)(gen_frame + 0x50)),(uint)&(*(undefined4 *)(gen_frame + 0xd0)),(uint)((undefined1 *)(gen_frame + 0x90)));
        puVar5 = ((undefined4 *)(gen_frame + 0x0));
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
        F_004d3a00((*(uint *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x0)));
        this = (*(undefined * PTR32 *)(gen_frame + 0x44));
      }
      else if (((param_1 & 0xf) == 1) && ((*(byte *)(REFG(int, 0x137127c) + 0x6458) & 1) != 0)) {
        F_004be4f0(&(*(undefined4 *)(gen_frame + 0xd0)),*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x10,
                     *(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x50);
        F_004d3a00(uVar2,&(*(undefined4 *)(gen_frame + 0xd0)));
      }
    }
    else {
      F_004d3a00(uVar2,(int)this + 0x4340);
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x208) + 0x24))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar2 + 0xa8 + *(int *)((int)this + 0x220) * 4))) =
       *(undefined4 *)((int)this + 0x208);
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120));
  return uVar2;
}

/* ref: FUN_00572470 */
uint F_00572470(unsigned int gen_a0)
{
  GEN_ENTER(0x572470u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xf0;
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if (uVar2 == 0) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0x7ffff | 0xff400000;
  }
  else if (uVar2 == 0x10) {
    uVar2 = *(uint *)(iVar1 + 8) & 0x7ffff | 0xf6700000;
    *(uint *)(iVar1 + 8) = uVar2;
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_005724d0 */
uint F_005724d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5724d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(undefined4 *)(uVar1 + 0x40) = *(undefined4 *)((int)this + param_1 * 4 + 0x50);
  *(undefined4 *)(uVar1 + 0x60) = 0;
  uVar2 = *(undefined4 *)((int)this + param_1 * 4 + 0x70);
  *(undefined4 *)(uVar1 + 0x60) = 0;
  *(undefined4 *)(uVar1 + 0x44) = uVar2;
  return uVar1;
}

/* ref: FUN_00572510 */
uint F_00572510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x572510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(undefined4 *)(uVar1 + 0x4c) =
       *((undefined4 *)GEN_TOP(((int)this + (int)(&REFG(undefined * PTR32, 0x10a0c2c))[(int)(param_1)] * 4 + 0x90)));
  return uVar1;
}

/* ref: FUN_00572550 */
uint F_00572550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x572550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x20c),0,0,2);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[3] = param_1[3];
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20c) + 0x24))) = 0;
  }
  uVar1 = *(uint *)((int)this + 0x22c);
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0xa8 + uVar1 * 4)))
       = *(undefined4 *)((int)this + 0x20c);
  return uVar1;
}

/* ref: FUN_005725c0 */
uint F_005725c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5725c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  ((int *)(gen_frame + 0x58))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  iVar8 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = this;
  (*(uint * PTR32 *)(gen_frame + 0x4c)) = param_1;
  (*(uint *)(gen_frame + 0x50)) = 0;
  uVar5 = 0;
  do {
    uVar3 = F_0056f570(((undefined *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 0x2a8) + uVar5))),
                         (int *)((int)((int *)(gen_frame + 0x58)) + iVar8));
    (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x50)) + *(int *)((int)((int *)(gen_frame + 0x58)) + iVar8);
    *(uint *)((int)((uint *)(gen_frame + 0x0)) + iVar8) = uVar3;
    uVar5 = uVar5 + 0xb0;
    iVar8 = iVar8 + 4;
  } while (uVar5 < 0xb00);
  uVar5 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 0x290) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 0x284) + (*(uint *)(gen_frame + 0x50)) * -8;
  (*(uint *)(gen_frame + 0x44)) = uVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar5;
  if ((*(uint *)(gen_frame + 0x50)) != 0) {
    do {
      iVar8 = 0;
      uVar3 = 0xffffffff;
      uVar6 = 0;
      do {
        iVar4 = 0xf - uVar6;
        if ((((int *)(gen_frame + 0x58))[(int)(iVar4)] != 0) && (*(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)] <= uVar3)) {
          uVar3 = *(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)];
          iVar8 = iVar4;
        }
        iVar4 = 0xe - uVar6;
        if ((((int *)(gen_frame + 0x58))[(int)(iVar4)] != 0) && (*(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)] <= uVar3)) {
          uVar3 = *(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)];
          iVar8 = iVar4;
        }
        iVar4 = 0xd - uVar6;
        if ((((int *)(gen_frame + 0x58))[(int)(iVar4)] != 0) && (*(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)] <= uVar3)) {
          uVar3 = *(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)];
          iVar8 = iVar4;
        }
        iVar4 = 0xc - uVar6;
        if ((((int *)(gen_frame + 0x58))[(int)(iVar4)] != 0) && (*(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)] <= uVar3)) {
          uVar3 = *(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)];
          iVar8 = iVar4;
        }
        uVar6 = uVar6 + 4;
      } while (uVar6 < 0x10);
      puVar1 = ((uint *)(gen_frame + 0x0)) + iVar8;
      (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)(gen_frame + 0x58)) + iVar8;
      iVar4 = ((int *)(gen_frame + 0x58))[(int)(iVar8)];
      iVar7 = 0;
      (*(uint * PTR32 *)(gen_frame + 0x48)) = puVar1;
      do {
        iVar7 = iVar7 + 1;
        if (iVar7 == iVar4) break;
      } while (*(int *)((uint *)(gen_frame + 0x0))[(int)(iVar8)] == *(int *)(*puVar1 + iVar7 * 8));
      if (iVar7 != 0) {
        iVar8 = iVar7 * 8;
        F_00c46aa0((*(undefined * PTR32 *)(gen_frame + 0x54)),*puVar1,iVar8);
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x40));
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + iVar8);
        *(*(uint * PTR32 *)(gen_frame + 0x48)) = iVar8 + *(*(uint * PTR32 *)(gen_frame + 0x48));
        *piVar2 = iVar4 - iVar7;
        uVar5 = (*(uint *)(gen_frame + 0x44));
      }
    } while ((uint)((int)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) - uVar5) >> 3) < (*(uint *)(gen_frame + 0x50)));
  }
  *(*(uint * PTR32 *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x50));
  F_00c47745(((int *)(gen_frame + 0x58))[0x10] ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar5;
}

/* ref: FUN_00572770 */
uint F_00572770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x572770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  pvVar2 = (undefined *)((int)this + 0x720);
  F_00a27140(*(undefined * PTR32 *)((int)this + 0x18),param_1,pvVar2,1);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x20))))
            (*(int * PTR32 *)((int)this + 0x14),((undefined1 *)(gen_frame + 0xb4)),"<color(stackcolor)>");
  if (param_3 == REFG(int, 0x108cc50)) {
    F_0042d4d0(pvVar2,((undefined1 *)(gen_frame + 0xb4)));
  }
  else {
    F_00a291a0(*(undefined * PTR32 *)((int)this + 0x18),pvVar2,param_3,((undefined1 *)(gen_frame + 0xb4)));
  }
  iVar1 = param_2;
  if (param_2 == REFG(int, 0x108cc50)) {
    iVar1 = 0;
  }
  F_00a291a0(*(undefined * PTR32 *)((int)this + 0x18),pvVar2,iVar1,(int)this + 0x1e0);
  puVar5 = ((undefined1 *)(gen_frame + 0xb4));
  puVar4 = ((undefined1 *)(gen_frame + 0x60));
  pvVar2 = (undefined *)F_0042cd30((undefined *)((int)this + 0x234),((undefined1 *)(gen_frame + 0xc)),pvVar2);
  uVar3 = F_0042cd30(pvVar2,puVar4,puVar5);
  uVar3 = F_0056a440(this,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_00572860 */
unsigned int F_00572860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x572860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  int * piVar2;
  undefined2 uVar3;
  ushort uVar5;
  uint uVar4;
  
  if (*(int *)((int)this + 4) != 0) {
    if (param_1 < 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x109ce7f),REFG(undefined4, 0x108cc50));
      if (*(int *)((int)this + 0x834) == 0) {
        uVar4 = F_0042a970((int)this + 0x528);
        uVar3 = (undefined2)uVar4;
      }
      else {
        uVar4 = F_0055c170((int)this + 0x528,0xffffffff);
        uVar3 = (undefined2)uVar4;
      }
      uVar4 = F_0056a520(this,((undefined1 *)(gen_frame + 0x8)));
      (*(ushort *)(gen_frame + 0x5e)) = (ushort)param_2;
      (*(undefined2 *)(gen_frame + 0x62)) = uVar3;
      uVar5 = (ushort)param_2;
    }
    else {
      uVar1 = *(ushort *)((int)this + 0x26);
      uVar5 = *(ushort *)((int)this + 0x28);
      if ((uint)uVar1 == (int)*(short *)((int)this + 0x22)) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x8)),"",REFG(undefined4, 0x108cc50));
        if (*(int *)((int)this + 0x834) == 0) {
          uVar4 = F_0042a970((int)this + 0x528);
          uVar3 = (undefined2)uVar4;
        }
        else {
          uVar4 = F_0055c170((int)this + 0x528,0xffffffff);
          uVar3 = (undefined2)uVar4;
        }
        uVar4 = F_0056a520(this,((undefined1 *)(gen_frame + 0x8)));
        (*(ushort *)(gen_frame + 0x5e)) = uVar5;
        (*(undefined2 *)(gen_frame + 0x62)) = uVar3;
        piVar2 = *(int * PTR32 *)((int)this + 4);
        (*(undefined4 *)(gen_frame + 0x64)) = param_3;
        (*(uint *)(gen_frame + 0x68)) = uVar4;
        (*(undefined2 *)(gen_frame + 0x5c)) = (short)param_1;
        (*(ushort *)(gen_frame + 0x60)) = uVar1;
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,&(*(undefined2 *)(gen_frame + 0x5c)));
        F_0042c880(((undefined1 *)(gen_frame + 0x8)));
        return 0;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x8)),"",REFG(undefined4, 0x108cc50));
      if (*(int *)((int)this + 0x834) == 0) {
        uVar4 = F_0042a970((int)this + 0x528);
        uVar3 = (undefined2)uVar4;
      }
      else {
        uVar4 = F_0055c170((int)this + 0x528,0xffffffff);
        uVar3 = (undefined2)uVar4;
      }
      uVar4 = F_0056a520(this,((undefined1 *)(gen_frame + 0x8)));
      (*(ushort *)(gen_frame + 0x5e)) = uVar1;
      (*(undefined2 *)(gen_frame + 0x62)) = uVar3;
    }
    (*(ushort *)(gen_frame + 0x60)) = uVar5;
    (*(undefined4 *)(gen_frame + 0x64)) = param_3;
    piVar2 = *(int * PTR32 *)((int)this + 4);
    (*(uint *)(gen_frame + 0x68)) = uVar4;
    (*(undefined2 *)(gen_frame + 0x5c)) = (short)param_1;
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,&(*(undefined2 *)(gen_frame + 0x5c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00572a00 */
uint F_00572a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x572a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  short sVar1;
  int * piVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
  if ((char)param_1 == '\0') {
    sVar1 = *(short *)((int)this + 0x7c8) + -1;
  }
  else {
    sVar1 = 0;
  }
  *(short *)((int)this + 0x7c8) = sVar1;
  if (sVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))
                              (*(int * PTR32 *)((int)this + 8),(int)this + 0x774,(int)this + 0x7d4)));
    sVar1 = *(short *)((int)this + 0x7ce);
    *(int * PTR32 *)((int)this + 2000) = piVar2;
    *(short *)((int)this + 0x7cc) = sVar1;
    if ((uint)(piVar2[1] - *piVar2 >> 2) <= (uint)(int)sVar1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(*piVar2 + sVar1 * 4),REFG(undefined4, 0x108cc50));
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,((undefined1 *)(gen_frame + 0x4)),0,0,0);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))
                      (piVar2,*(undefined4 *)((int)this + 2000),(int)*(short *)((int)this + 0x7cc));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar3;
  }
  if (**(char * PTR32 *)((int)this + 0x2c) == '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"",REFG(undefined4, 0x108cc50));
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,((undefined1 *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x14))))(*(int * PTR32 *)((int)this + 0xc));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x34))))(*(int * PTR32 *)((int)this + 0xc),1);
  }
  uVar3 = F_0042aca0((int)this + 0x774);
  *(undefined4 *)((int)this + 2000) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00572b60 */
uint F_00572b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x572b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar2;
  piVar1 = *(int * PTR32 *)((int)this + 2000);
  if (piVar1 == (int *)0x0) goto LAB_00572c36;
  uVar5 = (uint)*(short *)((int)this + 0x7cc);
  uVar2 = uVar5 + param_1;
  uVar3 = (piVar1[1] - *piVar1 >> 2) - 1;
  if ((int)uVar2 < 0) {
    if (uVar5 == 0) {
      uVar2 = -(uint)((char)param_2 != '\0');
LAB_00572bc3: ;
      uVar2 = uVar2 & uVar3;
    }
    else {
      uVar2 = 0;
    }
  }
  else if (((int)uVar3 < (int)uVar2) && (uVar2 = uVar3, uVar5 == uVar3)) {
    uVar2 = ((char)param_2 != '\0') - 1;
    goto LAB_00572bc3;
  }
  sVar4 = (short)uVar2;
  *(short *)((int)this + 0x7cc) = sVar4;
  if ((uint)(piVar1[1] - *piVar1 >> 2) <= (uint)(int)sVar4) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(*piVar1 + sVar4 * 4),REFG(undefined4, 0x108cc50));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,((undefined1 *)(gen_frame + 0x4)),0,0,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))
                    (piVar1,*(undefined4 *)((int)this + 2000),(int)*(short *)((int)this + 0x7cc));
LAB_00572c36: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00572c50 */
uint F_00572c50(unsigned int gen_a0)
{
  GEN_ENTER(0x572c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = 3;
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 0x88);
    iVar1 = _InterlockedCompareExchange((volatile long *)(piVar3), 0, 0);
    if (iVar1 == 2) {
      piVar3 = (int *)(param_1 + 0x8c);
      iVar1 = _InterlockedCompareExchange((volatile long *)(piVar3), 0, 0);
      return (7 < iVar1) + 2;
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* ref: FUN_00572ca0 */
uint F_00572ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x572ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)((int)this + 4) == 0) && (*(int *)((int)this + 8) != 0)) {
    uVar1 = F_00572c50(*(int *)((int)this + 8));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00572cc0 */
byte F_00572cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x572cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(in_ecx + 4);
  if (iVar1 == 0) {
    if (*(int *)(in_ecx + 8) != 0) {
      uVar2 = F_0056a770(in_ecx);
      return uVar2 != 0;
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)(in_ecx + 8) != 0) {
      return *((int *)GEN_TOP((*(int *)(in_ecx + 8) + 8))) == 2;
    }
  }
  else if ((iVar1 == 2) && (*(int *)(in_ecx + 8) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00572d00 */
uint F_00572d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x572d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar2 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x4)),1,0x1450,0x100000,0xc);
  *(uint *)((int)this + 4) = uVar2;
  return (uVar2 != 0) - 1;
}

/* ref: FUN_00572d60 */
uint F_00572d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x572d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  F_0056a9b0(param_1,param_2);
  uVar1 = F_0055d660(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00572d90 */
uint F_00572d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x572d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) & 1) != 0) && ((*(int *)&gen_args[1]) != 0)) {
    F_004ff310(&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[3]),0);
    (*(int *)&gen_args[1]) = 0x756c64;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
    (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
    (*(undefined1 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 2;
    (*(undefined2 *)(gen_frame + 0x25)) = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) == 0) {
      uVar2 = F_00513d20(&(*(undefined4 *)&gen_args[3]),&(*(int *)&gen_args[1]),iVar1,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = uVar2;
    }
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) =
         *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) ^ ((char)(*(undefined4 *)&gen_args[2]) * '\x02' ^ *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)))) & 2;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 1;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00572e40 */
uint F_00572e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x572e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005715d0(*(undefined * PTR32 *)((int)this + 0x34),this,param_1);
  return uVar1;
}

/* ref: FUN_00572e60 */
byte F_00572e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x572e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 != 0) {
    F_00c472af(&REFG(undefined, 0x1379760),0x100,REFG(undefined * PTR32, 0x131dba0),param_1);
    uVar1 = F_00572d90((undefined *)((int)this + 0x24),&REFG(undefined, 0x1379760),param_2,param_3);
    if (-1 < (int)uVar1) {
      *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 4;
      return 1;
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf42 */
uint F_00572ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x572ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 AVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_EAX = 0;
  uint3 uVar5;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  AVar1 = this[0xf8];
  uVar5 = (uint3)((uint)in_EAX >> 8);
  if (((byte)AVar1 & 8) != 0) {
    return CONCAT31(uVar5,1);
  }
  iVar2 = *(int *)(this + 0x94);
  if (((iVar2 == 0) || ((((((byte)AVar1 & 0x10) == 0 || (((byte)AVar1 & 4) == 0)) || (uVar5 = 0xf, (*(ushort *)(this + 0x126) & 0xfff) != 0)) && (((byte)this[0xfb] & 4) == 0)))) || (((*(uint *)(iVar2 + 0x84) & 0x100000) == 0 || ((*(uint *)(iVar2 + 0x88) & 0x20000) != 0)))) {
    return (uint)uVar5 << 8;
  }
  bVar3 = F_00570d10(iVar2,param_1,param_2,0);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    if (*(int *)(this + 0x98) != 0) {
      uVar4 = F_0055a2d0(*(int *)(this + 0x98));
      if ((char)uVar4 != '\0') {
        bVar3 = F_00570d10(((undefined4)(uint)(*(int *)(this + 0x98))),param_1,param_2,0);
        uVar4 = CONCAT31(extraout_var_00,bVar3);
        if (bVar3 != 0) goto LAB_00572f78;
      }
    }
    if (*(int *)(this + 0x9c) != 0) {
      uVar4 = F_0055a2d0(*(int *)(this + 0x9c));
      if ((char)uVar4 != '\0') {
        bVar3 = F_00570d10(((undefined4)(uint)(*(int *)(this + 0x9c))),param_1,param_2,0);
        return CONCAT31(extraout_var_01,bVar3);
      }
    }
  }
LAB_00572f78: ;
  return CONCAT31((int3)(uVar4 >> 8),bVar3);
}

/* ref: Component::GUI2::AtkUnitBase::vf24 */
uint F_00572f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x572f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 AVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  AVar1 = this[0xf8];
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),AVar1);
  if (((((((byte)AVar1 & 0x10) != 0) && (((byte)AVar1 & 4) != 0)) &&
       (uVar3 = 0xfff, (*(ushort *)(this + 0x126) & 0xfff) == 0)) || (((byte)this[0xfb] & 4) != 0))
     && ((((byte)this[0xf9] & 8) == 0 && (*(int *)(this + 0xb4) != 1)))) {
    bVar2 = F_00570d10(*(undefined4 *)(this + 0xa0),param_1,param_2,0);
    return CONCAT31(extraout_var,bVar2);
  }
  return uVar3 & 0xffffff00;
}

/* ref: FUN_00572ff0 */
uint F_00572ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x572ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  bool bVar7;
  float10 fVar8;
  
  sVar1 = *(short *)((int)this + 0x12a);
  sVar2 = *(short *)((int)this + 300);
  sVar6 = *param_1 + sVar1;
  *(short *)((int)this + 0x12a) = sVar6;
  *(short *)((int)this + 300) = *(short *)((int)this + 300) + *param_2;
  sVar3 = *(short *)((int)this + 300);
  iVar4 = *(int *)((int)this + 0x90);
  if (iVar4 != 0) {
    if (((*(uint *)(iVar4 + 0x88) & 1) == 0) &&
       ((fVar8 = (float10)(int)sVar6, bVar7 = GEN_ISNAN((float10)*(float *)(iVar4 + 0x38)) || GEN_ISNAN(fVar8),
        bVar7 == (bVar7 || (float10)*(float *)(iVar4 + 0x38) == fVar8) ||
        (fVar8 = (float10)(int)sVar3, bVar7 = GEN_ISNAN((float10)*(float *)(iVar4 + 0x3c)) || GEN_ISNAN(fVar8),
        bVar7 == (bVar7 || (float10)*(float *)(iVar4 + 0x3c) == fVar8))))) {
      *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 1;
    }
    *(float *)(iVar4 + 0x38) = (float)(int)sVar6;
    *(float *)(iVar4 + 0x3c) = (float)(int)sVar3;
  }
  uVar5 = F_0056b300(this,0);
  if (uVar5 != 0) {
    *param_1 = *(short *)((int)this + 0x12a) - sVar1;
    *param_2 = *(short *)((int)this + 300) - sVar2;
  }
  return uVar5;
}

/* ref: FUN_005730d0 */
byte F_005730d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5730d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  int iVar2;
  
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18);
  if (*(short *)((int)this_00 + 0xc68) == 0) {
    iVar2 = *(int *)((int)this_00 + 0xc58);
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this_00 + *(short *)((int)this_00 + 0xc68) * 0xc + 0x50)));
  }
  if (((iVar2 != 0) && ((*(byte *)((int)this + 0xf8) & 0x80) == 0)) &&
     (*(int *)((int)this + 0x90) != 0)) {
    while (iVar2 != *(int *)((int)this + 0x90)) {
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        bVar1 = F_0056b8d0(this);
        return bVar1;
      }
    }
    F_00558e30(this_00);
  }
  bVar1 = F_0056b8d0(this);
  return bVar1;
}

/* ref: FUN_00573130 */
uint F_00573130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x573130u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  
  uVar5 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2;
  uVar6 = 0;
  local_c = 0;
  uVar3 = local_c;
  if (uVar5 != 0) {
    do {
      if ((uint)(*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2) <= uVar6) {
                    
        F_00c457e7("invalid vector<T> subscript");
      }
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x38) + uVar6 * 4)));
      uVar3 = *(uint *)(iVar1 + 0x84);
      if ((uVar3 & 0x100000) == 0) {
        if (((((char)param_3 != '\0') && (999 < *(ushort *)(iVar1 + 0x18))) &&
            (uVar2 = *(uint *)(iVar1 + 0x8c), uVar2 != 0)) &&
           (((uVar3 & 0x20000000) != 0 || ((char)param_4 != '\0')))) {
          if (*(byte *)(uVar2 + 0x78) == param_2) {
            local_c = uVar2;
          }
          if (((((*(byte *)(uVar2 + 0x60) & 1) == 0) || ((*(byte *)(uVar2 + 0x60) & 4) == 0)) ||
              ((*(char *)(uVar2 + 0x1c) != '\x01' ||
               (*((char *)GEN_TOP((*(int *)(uVar2 + 0xc) + 0xf))) == '\0')))) &&
             ((*(byte *)(uVar2 + 0x78) != 0xff &&
              (uVar3 = F_00573130(uVar2 + 4,param_2,1,0), uVar3 != 0)))) {
            return uVar3;
          }
        }
        uVar6 = uVar6 + *(ushort *)(iVar1 + 0x1a);
      }
      else if (((999 < *(ushort *)(iVar1 + 0x18)) && (uVar2 = *(uint *)(iVar1 + 0x8c), uVar2 != 0))
              && (((uVar3 & 0x20000000) != 0 || ((char)param_4 != '\0')))) {
        if (*(byte *)(uVar2 + 0x78) == param_2) {
          return uVar2;
        }
        if ((((*(byte *)(uVar2 + 0x60) & 1) == 0) || ((*(byte *)(uVar2 + 0x60) & 4) == 0)) ||
           (*(char *)(uVar2 + 0x1c) != '\x01')) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *((char *)GEN_TOP((*(int *)(uVar2 + 0xc) + 0xf)));
        }
        if (((cVar4 == '\0') || (cVar4 == '\x14')) && (*(byte *)(uVar2 + 0x78) != 0xff)) {
          uVar3 = F_00573130(uVar2 + 4,param_2,0,0);
          if (uVar3 != 0) {
            return uVar3;
          }
        }
        else {
          uVar6 = uVar6 + *(ushort *)(iVar1 + 0x1a);
        }
      }
      uVar6 = uVar6 + 1;
      uVar3 = local_c;
    } while (uVar6 < uVar5);
  }
  return uVar3;
}

/* ref: FUN_005732c0 */
uint F_005732c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5732c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((param_1 != 0) && (param_1 != 0xff)) {
    uVar1 = F_00573130((int)this + 0x24,param_1,1,0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005732f0 */
uint F_005732f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5732f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint in_EAX = 0;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_c;
  
  uVar6 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2;
  local_c = 0;
  if (uVar6 != 0) {
    do {
      if ((uint)(*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2) <= local_c) {
                    
        F_00c457e7("invalid vector<T> subscript");
      }
      iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + 0x38) + local_c * 4)));
      in_EAX = *(uint *)(iVar2 + 0x84);
      if (((in_EAX & 0x100000) == 0) && ((char)param_2 == '\0')) {
        in_EAX = (uint)*(ushort *)(iVar2 + 0x1a);
        uVar7 = local_c + in_EAX;
      }
      else {
        uVar7 = local_c;
        if ((999 < *(ushort *)(iVar2 + 0x18)) &&
           ((piVar3 = *(int * PTR32 *)(iVar2 + 0x8c), piVar3 != (int *)0x0 && ((in_EAX & 0x20000000) != 0))
           )) {
          bVar1 = *(byte *)(piVar3 + 0x1e);
          if ((bVar1 != 0) && (bVar1 < *(byte *)((int)this + 0x13e))) {
            uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
            *(uint *)((int)this + 0xa4) = uVar5;
            *(byte *)((int)this + 0x13e) = bVar1;
          }
          if ((((*(byte *)(piVar3 + 0x18) & 1) == 0) || ((*(byte *)(piVar3 + 0x18) & 4) == 0)) ||
             ((char)piVar3[7] != '\x01')) {
            bVar4 = 0;
          }
          else {
            bVar4 = *(byte *)(piVar3[3] + 0xf);
          }
          in_EAX = (uint)bVar4;
          if (((in_EAX == 0) || (in_EAX == 0x14)) && (bVar1 != 0xff)) {
            in_EAX = F_005732f0(this,(int)(piVar3 + 1),0);
          }
          else {
            uVar7 = local_c + *(ushort *)(iVar2 + 0x1a);
          }
        }
      }
      local_c = uVar7 + 1;
    } while (local_c < uVar6);
  }
  return in_EAX;
}

/* ref: FUN_00573410 */
unsigned int F_00573410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x573410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(char *)((int)this + 0x13e) == -1) {
    F_005732f0(this,(int)this + 0x24,param_1);
  }
  return 0;
}

/* ref: FUN_00573430 */
uint F_00573430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x573430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)((int)this + 0x12);
  *(uint *)((int)this + 0x18) = param_1;
  if (uVar4 < param_1) {
    *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) & 0x7fff;
    *(uint *)((int)this + 0x18) = uVar4;
    uVar4 = F_00573430(this,uVar4);
  }
  for (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x14))); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc))
  {
    puVar3 = *(uint * PTR32 *)(iVar2 + 0x1c);
    if (puVar3 != (uint *)0x0) {
      uVar4 = *puVar3;
      puVar3[2] = param_1;
      if (*(ushort *)(uVar4 + 4) != 0) {
        uVar4 = F_0055eeb0(param_1,*(undefined4 *)(uVar4 + 8),(uint)*(ushort *)(uVar4 + 4));
        puVar3[3] = uVar4;
        *(ushort *)((int)puVar3 + 0x22) = *(ushort *)((int)puVar3 + 0x22) & 0x807f | 0x7f;
        if (uVar4 == 0) {
          *(uint *)(puVar3[1] + 0x84) = *(uint *)(puVar3[1] + 0x84) & 0xffefffff;
          uVar4 = 0;
        }
        else {
          if ((*(byte *)(puVar3[1] + 0x88) & 0x80) == 0) {
            puVar1 = (uint *)(puVar3[1] + 0x84);
            *puVar1 = *puVar1 | 0x100000;
          }
          uVar4 = ((code *)*(gen_code32 *)(*(int *)puVar3[1] + 8))((int *)puVar3[1]);
        }
      }
    }
  }
  return uVar4;
}

/* ref: FUN_005734e0 */
unsigned int F_005734e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5734e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  uint local_24;
  uint local_1c;
  int local_10;
  undefined4 * local_c;
  byte local_5;
  
  if ((*(byte *)((int)this + 0x20) & 1) != 0) {
    piVar2 = (int *)F_00404270();
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(ushort *)(param_1 + 8);
      *(ushort *)((int)this + 0x10) = uVar1;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,(uint)uVar1 << 4,0x10)));
      *(undefined * PTR32 *)((int)this + 0xc) = pvVar3;
      if (pvVar3 == (undefined *)0x0) {
        return 0;
      }
      F_00c48350(pvVar3,0,(uint)*(ushort *)((int)this + 0x10) << 4);
      local_c = *(undefined4 * PTR32 *)((int)this + 0xc);
      puVar6 = (undefined4 *)(param_1 + 0x10);
      local_24 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        do {
          *local_c = *puVar6;
          puVar7 = puVar6 + 3;
          local_5 = 0;
          do {
            uVar5 = (uint)local_5;
            uVar1 = *(ushort *)((int)puVar6 + uVar5 * 2 + 8);
            if (uVar1 != 0) {
              *(ushort *)((int)local_c + uVar5 * 2 + 4) = uVar1;
              local_1c = (uint)uVar1;
              pvVar3 = (undefined *)F_00406c00(local_1c * 0x40,0,piVar2,0);
              if (pvVar3 == (undefined *)0x0) {
                pvVar3 = (undefined *)0x0;
              }
              else {
                iVar8 = local_1c - 1;
                if (-1 < iVar8) {
                  iVar9 = (int)pvVar3 + 8;
                  do {
                    F_00401500(iVar9,8,7,((code *)REFP(0x5b7780)));
                    iVar9 = iVar9 + 0x40;
                    iVar8 = iVar8 + -1;
                  } while (-1 < iVar8);
                }
              }
              local_c[uVar5 + 2] = pvVar3;
              if (pvVar3 == (undefined *)0x0) {
                return 0;
              }
              F_00c48350(pvVar3,0,local_1c << 6);
              if (uVar1 != 0) {
                local_10 = 0;
                iVar8 = 0;
                do {
                  iVar9 = local_c[uVar5 + 2] + local_10;
                  F_0056ba90(this,piVar2,puVar7,iVar9);
                  if (iVar8 != 0) {
                    *(int *)(iVar8 + 4) = iVar9;
                  }
                  puVar7 = (undefined4 *)((int)puVar7 + puVar7[2]);
                  local_10 = local_10 + 0x40;
                  local_1c = local_1c - 1;
                  iVar8 = iVar9;
                } while (local_1c != 0);
              }
            }
            local_5 = local_5 + 1;
          } while (local_5 < 2);
          puVar6 = (undefined4 *)((int)puVar6 + puVar6[1]);
          local_c = local_c + 4;
          local_24 = local_24 + 1;
        } while ((local_24 & 0xffff) < *(uint *)(param_1 + 8));
      }
    }
    if (param_2 != 0) {
      *(short *)((int)this + 0x12) = (short)param_2;
      uVar5 = -(uint)((int)((ulonglong)param_2 * 0x24 >> 0x20) != 0) |
              (uint)((ulonglong)param_2 * 0x24);
      puVar4 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,piVar2,0);
      if (puVar4 != (uint *)0x0) {
        *puVar4 = param_2;
        *(uint * PTR32 *)((int)this + 0x14) = puVar4 + 1;
        return 0;
      }
      *(undefined4 *)((int)this + 0x14) = 0;
    }
  }
  return 0;
}

/* ref: FUN_005736f0 */
byte F_005736f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5736f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  
  uVar5 = 0;
  piVar4 = (int *)((int)this + 0x20);
  do {
    if ((piVar4[-1] == 0) && (iVar3 = *piVar4, iVar3 != 0)) {
      piVar1 = (int *)(iVar3 + 0x88);
      iVar2 = _InterlockedCompareExchange((volatile long *)(piVar1), 0, 0);
      if (iVar2 != 2) {
        return 1;
      }
      LOCK();
      *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(iVar3 + 0x8c);
      UNLOCK();
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 3;
  } while (uVar5 < 2);
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  return 1;
}

/* ref: FUN_00573740 */
uint F_00573740(unsigned int gen_a0)
{
  GEN_ENTER(0x573740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  float fVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  uint uVar5;
  float * pfVar6;
  int iVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined * this_00;
  uint uVar10;
  undefined4 * puVar11;
  byte * pbVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  (*(uint *)(gen_frame + 0x248)) = uVar5;
  uVar10 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  if (*(int *)((int)this + 0xc) == 0) {
    F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x24c));
    return 0;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18)));
  iVar7 = *(int *)((int)this + 0x28);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this_00;
  if (iVar7 == 0) {
    if (*(int *)((int)this + 0x2c) != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x40)) = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0xfc)));
      goto LAB_005737c7;
    }
  }
  else if (iVar7 == 1) {
    if (*(int *)((int)this + 0x2c) != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x40)) = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x18)));
      goto LAB_005737c7;
    }
  }
  else if (iVar7 == 2) {
    (*(undefined * PTR32 *)(gen_frame + 0x40)) = *(undefined * PTR32 *)((int)this + 0x2c);
    goto LAB_005737c7;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = (undefined *)0x0;
LAB_005737c7: ;
  if ((this_00 == (undefined *)0x0) || ((*(undefined * PTR32 *)(gen_frame + 0x40)) == (undefined *)0x0)) {
    F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x24c));
    return 0;
  }
  uVar5 = F_004d6dd0(this_00,0,((int *)(gen_frame + 0xc)),3);
  if (uVar5 != 0) {
    uVar5 = F_004d6dd0((*(undefined * PTR32 *)(gen_frame + 0x40)),0,((byte *)(gen_frame + 0x0)),1);
    fVar4 = REFG(float, 0x10a0d8c);
    if (uVar5 != 0) {
      uVar5 = *(uint *)((int)this + 0x30);
      if (uVar5 < *(int *)((int)this + 0x34) + uVar5) {
        fVar13 = (float10)*(double *)&REFG(undefined, 0x1088100);
        do {
          if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x1c) <= uVar5) break;
          puVar9 = (undefined4 *)(((int *)(gen_frame + 0xc))[0] * uVar5 + (*(int *)(gen_frame + 0x14)));
          puVar11 = puVar9;
          pbVar12 = ((byte *)(gen_frame + 0x148));
          for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined4 *)pbVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            pbVar12 = pbVar12 + 4;
          }
          puVar11 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) * uVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)))));
          pbVar12 = ((byte *)(gen_frame + 0x48));
          for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined4 *)pbVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            pbVar12 = pbVar12 + 4;
          }
          uVar10 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x18);
          uVar8 = 0;
          if (uVar10 != 0) {
            (*(float *)(gen_frame + 0x2c)) = fVar4;
            (*(float *)(gen_frame + 0x18)) = 0.0;
            (*(float *)(gen_frame + 0x24)) = fVar4;
            (*(float *)(gen_frame + 0x34)) = 0.0;
            (*(float *)(gen_frame + 0x28)) = fVar4;
            (*(float *)(gen_frame + 0x20)) = 0.0;
            (*(float *)(gen_frame + 0x1c)) = fVar4;
            (*(float *)(gen_frame + 0x30)) = 0.0;
            do {
              bVar2 = ((byte *)(gen_frame + 0x48))[(int)(uVar8 * 4 + 3)];
              (*(float *)(gen_frame + 0x44)) = gen_bits2f((uint)bVar2);
              bVar3 = ((byte *)(gen_frame + 0x48))[(int)(uVar8 * 4)];
              fVar14 = (float10)bVar2;
              fVar1 = (float)(fVar14 / fVar13);
              (*(float *)(gen_frame + 0x44)) = fVar1;
              fVar15 = (float10)fVar1;
              fVar16 = (float10)1 - fVar15;
              (*(float *)(gen_frame + 0x44)) = gen_bits2f((uint)bVar3);
              bVar2 = ((byte *)(gen_frame + 0x148))[(int)(uVar8 * 4)];
              (*(float *)(gen_frame + 0x44)) = gen_bits2f((uint)bVar2);
              pfVar6 = &(*(float *)(gen_frame + 0x44));
              fVar1 = (float)((float10)bVar2 * fVar16 + (float10)bVar3 * fVar15);
              (*(float *)(gen_frame + 0x44)) = fVar1;
              if (!((float10)fVar1 < fVar13)) {
                pfVar6 = &(*(float *)(gen_frame + 0x2c));
              }
              if (!(0.0 < *pfVar6)) {
                pfVar6 = &(*(float *)(gen_frame + 0x18));
              }
              ((byte *)(gen_frame + 0x148))[(int)(uVar8 * 4)] = (byte)(int)*pfVar6;
              bVar2 = ((byte *)(gen_frame + 0x48))[(int)(uVar8 * 4 + 1)];
              (*(float *)(gen_frame + 0x44)) = gen_bits2f((uint)bVar2);
              bVar3 = ((byte *)(gen_frame + 0x148))[(int)(uVar8 * 4 + 1)];
              (*(float *)(gen_frame + 0x44)) = gen_bits2f((uint)bVar3);
              pfVar6 = &(*(float *)(gen_frame + 0x44));
              fVar1 = (float)((float10)bVar3 * fVar16 + (float10)bVar2 * fVar15);
              (*(float *)(gen_frame + 0x44)) = fVar1;
              if (!((float10)fVar1 < fVar13)) {
                pfVar6 = &(*(float *)(gen_frame + 0x24));
              }
              if (!(0.0 < *pfVar6)) {
                pfVar6 = &(*(float *)(gen_frame + 0x34));
              }
              ((byte *)(gen_frame + 0x148))[(int)(uVar8 * 4 + 1)] = (byte)(int)*pfVar6;
              bVar2 = ((byte *)(gen_frame + 0x48))[(int)(uVar8 * 4 + 2)];
              (*(float *)(gen_frame + 0x44)) = gen_bits2f((uint)bVar2);
              bVar3 = ((byte *)(gen_frame + 0x148))[(int)(uVar8 * 4 + 2)];
              (*(float *)(gen_frame + 0x44)) = gen_bits2f((uint)bVar3);
              pfVar6 = &(*(float *)(gen_frame + 0x44));
              fVar1 = (float)((float10)bVar2 * fVar15 + (float10)bVar3 * fVar16);
              (*(float *)(gen_frame + 0x44)) = fVar1;
              if (!((float10)fVar1 < fVar13)) {
                pfVar6 = &(*(float *)(gen_frame + 0x28));
              }
              if (!(0.0 < *pfVar6)) {
                pfVar6 = &(*(float *)(gen_frame + 0x20));
              }
              ((byte *)(gen_frame + 0x148))[(int)(uVar8 * 4 + 2)] = (byte)(int)*pfVar6;
              bVar2 = ((byte *)(gen_frame + 0x148))[(int)(uVar8 * 4 + 3)];
              (*(float *)(gen_frame + 0x44)) = gen_bits2f((uint)bVar2);
              pfVar6 = &(*(float *)(gen_frame + 0x44));
              fVar1 = (float)((float10)bVar2 + fVar15 * fVar14);
              (*(float *)(gen_frame + 0x44)) = fVar1;
              if (!((float10)fVar1 < fVar13)) {
                pfVar6 = &(*(float *)(gen_frame + 0x1c));
              }
              if (!(0.0 < *pfVar6)) {
                pfVar6 = &(*(float *)(gen_frame + 0x30));
              }
              ((byte *)(gen_frame + 0x148))[(int)(uVar8 * 4 + 3)] = (byte)(int)*pfVar6;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar10);
          }
          pbVar12 = ((byte *)(gen_frame + 0x148));
          for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = *(undefined4 *)pbVar12;
            pbVar12 = pbVar12 + 4;
            puVar9 = puVar9 + 1;
          }
          uVar5 = uVar5 + 1;
          this = (*(undefined * PTR32 *)(gen_frame + 0x38));
        } while (uVar5 < (uint)(*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x30) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x34)));
      }
      *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + *(int *)((int)this + 0x34);
      F_004d6e60((*(undefined * PTR32 *)(gen_frame + 0x40)),0);
      uVar10 = 2 - (*(uint *)((int)this + 0x30) < *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x1c));
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    }
    F_004d6e60(this_00,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
  return uVar10;
}

/* ref: FUN_00573b10 */
byte F_00573b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x573b10u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * puVar2;
  int iVar3;
  undefined * this_00;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) == 0) {
      return 0;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0xfc)));
  }
  else if (iVar3 == 1) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) == 0) {
      return 0;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x18)));
  }
  else {
    if (iVar3 != 2) {
      return 0;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  }
  if ((this_00 != (undefined *)0x0) && (uVar1 = F_004d6dd0(this_00,0,((byte *)(gen_frame + 0x8)),1), uVar1 != 0)) {
    uVar1 = *(int *)((int)this_00 + 0x1c) - 1;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    (*(uint *)(gen_frame + 0x14)) = 0;
    puVar2 = &(*(uint *)&gen_args[2]);
    if (uVar1 <= (*(uint *)&gen_args[2])) {
      puVar2 = &(*(uint *)(gen_frame + 0x18));
    }
    if (*puVar2 == 0) {
      puVar2 = &(*(uint *)(gen_frame + 0x14));
    }
    puVar4 = ((undefined4 *)GEN_TOP((*puVar2 * (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)))));
    puVar5 = (*(undefined4 * PTR32 *)&gen_args[1]);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    F_004d6e60(this_00,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_00573bb0 */
byte F_00573bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x573bb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0) {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0xfc)));
      goto LAB_00573be6;
    }
  }
  else if (iVar2 == 1) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0) {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x18)));
      goto LAB_00573be6;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    goto LAB_00573be6;
  }
  iVar2 = 0;
LAB_00573be6: ;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) != '\0') && (iVar2 != 0)) {
    ((int *)(gen_frame + 0x4))[1] = 0x3f;
    ((int *)(gen_frame + 0x4))[0] = 0;
    if ((*(uint *)&gen_args[2]) < 0x3f) {
      piVar1 = (int *)&(*(uint *)&gen_args[2]);
      if ((*(uint *)&gen_args[2]) == 0) {
        piVar1 = ((int *)(gen_frame + 0x4));
      }
    }
    else {
      piVar1 = ((int *)(gen_frame + 0x4)) + 1;
    }
    puVar3 = ((undefined4 *)GEN_TOP((((uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e))) + *piVar1) * *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) +
              (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))));
    puVar4 = (*(undefined4 * PTR32 *)&gen_args[1]);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00573c50 */
unsigned int F_00573c50(unsigned int gen_a0)
{
  GEN_ENTER(0x573c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if ((((*(char *)((int)this + 0x1c) != '\0') && (*(int *)((int)this + 0xc) != 0)) &&
      (iVar1 = *(int *)((int)this + 0x10), iVar1 != 0)) &&
     ((*(char *)((int)this + 0x1d) == '\0' && ((*(byte *)(iVar1 + 0xf9) & 1) != 0)))) {
    *(undefined1 *)((int)this + 0x1d) = 1;
    *(undefined1 *)((int)this + 0x1c) = 0;
    *(byte *)(iVar1 + 0xf9) = *(byte *)(iVar1 + 0xf9) | 4;
    F_005c44a0(*(undefined * PTR32 *)((int)this + 0x10),0x38,0,this,0);
    F_005c44a0(*(undefined * PTR32 *)((int)this + 0x10),0x39,0,this,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 4))))
              (*(int * PTR32 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x18),(int)this + 4,0);
  }
  return 0;
}

/* ref: FUN_00573cd0 */
uint F_00573cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x573cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x6c);
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xe4)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,1,0);
    piVar1 = *(int * PTR32 *)((int)this + 0x74);
    if (((piVar1 != (int *)0x0) && (uVar2 = *(uint *)((int)this + 0x78), uVar2 != 0)) &&
       ((short)piVar1[6] == *(short *)(uVar2 + 0x9c))) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0x78);
    if (this_00 != (undefined *)0x0) {
      *(undefined4 *)((int)this + 0x78) = 0;
      if (*(int *)((int)this_00 + 0x90) != 0) {
        F_00406ad0(*(int *)((int)this_00 + 0x90));
        *(undefined4 *)((int)this_00 + 0x90) = 0;
      }
      uVar2 = F_0056e230(this_00);
    }
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  return uVar2;
}

/* ref: FUN_00573d50 */
uint F_00573d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x573d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(undefined4 * PTR32 *)((int)this + 0x14) = param_1;
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x34);
  param_1 = (undefined4 *)((int)this + 0x1c);
  do {
    *param_1 = 0;
    if (*piVar3 == 0) {
      uVar5 = 0;
      uVar1 = F_00404270();
      puVar2 = (undefined4 *)F_00406bd0(4,0,uVar1,uVar5);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      *piVar3 = (int)puVar2;
    }
    uVar1 = F_00565340((undefined *)*piVar3,0x3a,iVar4,0,piVar3 + -1,this,0);
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 10;
  } while (iVar4 < 4);
  return uVar1;
}

/* ref: FUN_00573dd0 */
uint F_00573dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x573dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined1 * puVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 0;
  piVar4 = (int *)((int)this + 0x1c);
  puVar2 = (undefined1 *)((int)this + 0x50);
  do {
    if ((-1 < (int)uVar3) && (uVar3 < 4)) {
      *puVar2 = 0;
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        *piVar4 = 0;
      }
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0x28;
    piVar4 = piVar4 + 1;
  } while ((int)uVar3 < 4);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  return (uint)this;
}

/* ref: FUN_00573e30 */
unsigned int F_00573e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x573e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  byte bVar2;
  int iVar3;
  
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (((*(byte *)(param_1 + 0x2c) & 0x10) == 0) || ((*(byte *)(piVar1 + 0x3e) & 8) != 0)) {
    if ((*(char *)(param_1 + 0x2d) != '\0') && (((byte)((uint)piVar1[0x3d] >> 0x14) & 0xf) == 5)) {
      *(undefined1 *)(param_1 + 0x2d) = 0;
      *(int *)((int)this + 0x2c) = param_1;
    }
  }
  else {
    iVar3 = *(int *)((int)this + 0x20);
    if (iVar3 == 0) {
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xa0)));
    }
    bVar2 = F_0056c820(iVar3,*(undefined4 *)(param_1 + 0x10));
    if (bVar2 != 0) {
      *(int *)((int)this + 0x2c) = param_1;
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,0,0);
      *(undefined1 *)(param_1 + 0x2d) = 1;
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00573eb0 */
uint F_00573eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x573eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint in_EAX = 0;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0x10);
      F_00406ad0(iVar3);
      iVar3 = iVar2;
    }
    *piVar1 = 0;
    piVar1 = *(int * PTR32 *)((int)this + 0x28);
    in_EAX = 0;
    if (piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
      while (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0x10);
        F_00406ad0(iVar3);
        iVar3 = iVar2;
      }
      *piVar1 = 0;
      in_EAX = F_00406ad0(piVar1);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentSlider::vf8 */
uint F_00573f20(unsigned int gen_a0)
{
  GEN_ENTER(0x573f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined * pAVar6;
  undefined * pAVar7;
  undefined4 uVar8;
  
  iVar2 = *(int *)(this + 0x6c);
  *(int *)(this + 0x68) = iVar2;
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 0x1000000;
    if (*(int *)(this + 0x68) != 0) {
      puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x68) + 0x84)));
      *puVar1 = *puVar1 | 0x4000000;
    }
  }
  if (*(int *)(this + 0x8c) != 0) {
    iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x8c) + 0x70)));
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x80) == 0) {
        uVar8 = 0;
        uVar3 = F_00404270();
        puVar4 = (undefined4 *)F_00406bd0(4,0,uVar3,uVar8);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
      }
      F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80),0x16,1,0,iVar2,this,0);
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x8c) + 0x38))))(*(int * PTR32 *)(this + 0x8c));
    if (uVar3 != 0) {
      if (*(int *)(uVar3 + 0x80) == 0) {
        uVar8 = 0;
        uVar5 = F_00404270();
        puVar4 = (undefined4 *)F_00406bd0(4,0,uVar5,uVar8);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined4 * PTR32 *)(uVar3 + 0x80) = puVar4;
      }
      F_00565340(*(undefined * PTR32 *)(uVar3 + 0x80),0x11,1,0,uVar3,this,0);
    }
  }
  if ((*(int *)(this + 0x90) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x90) + 0x70))), iVar2 != 0))
  {
    if (*(int *)(iVar2 + 0x80) == 0) {
      uVar8 = 0;
      uVar3 = F_00404270();
      puVar4 = (undefined4 *)F_00406bd0(4,0,uVar3,uVar8);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
      }
      *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
    }
    F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80),0x16,2,0,iVar2,this,0);
  }
  if ((*(int *)(this + 0x90) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x90) + 0x70))), iVar2 != 0))
  {
    if (*(int *)(iVar2 + 0x80) == 0) {
      uVar8 = 0;
      uVar3 = F_00404270();
      puVar4 = (undefined4 *)F_00406bd0(4,0,uVar3,uVar8);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
      }
      *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
    }
    F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80),0xc,2,0,iVar2,this,0);
  }
  iVar2 = *(int *)(this + 0x68);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x80) == 0) {
      uVar8 = 0;
      uVar3 = F_00404270();
      puVar4 = (undefined4 *)F_00406bd0(4,0,uVar3,uVar8);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
      }
      *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
    }
    F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80),0xc,3,0,iVar2,this,0);
  }
  iVar2 = *(int *)(this + 0x68);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x80) == 0) {
      uVar8 = 0;
      uVar3 = F_00404270();
      puVar4 = (undefined4 *)F_00406bd0(4,0,uVar3,uVar8);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
      }
      *(undefined4 * PTR32 *)(iVar2 + 0x80) = puVar4;
    }
    F_00565340(*(undefined * PTR32 *)(iVar2 + 0x80),0x46,3,0,iVar2,this,0);
  }
  if (this[0x80] == (undefined1)0x1) {
    F_005c4390(this,0x46,0,this,0);
  }
  iVar2 = *(int *)(this + 0x70);
  pAVar6 = this;
  pAVar7 = this;
  if (iVar2 != 0) {
    pAVar6 = (undefined *)(uint)*(ushort *)(iVar2 + 0x7e);
    pAVar7 = (undefined *)(uint)*(ushort *)(iVar2 + 0x7c);
  }
  if (((byte)this[0xae] & 0x10) != 0) {
    *(short *)(this + 0xac) = (short)pAVar6;
    return (uint)pAVar6 & 0xffff;
  }
  *(short *)(this + 0xac) = (short)pAVar7;
  return (uint)pAVar7 & 0xffff;
}

/* ref: FUN_005741a0 */
unsigned int F_005741a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5741a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  short sVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)(short)(ushort)param_1;
  if (*(int *)((int)this + 0x9c) < iVar6) {
    *(int *)((int)this + 0x9c) = iVar6;
    if (*(int *)((int)this + 0x98) != 0) {
      F_00406810(*(int *)((int)this + 0x98));
      *(undefined4 *)((int)this + 0x98) = 0;
    }
    piVar3 = (int *)F_00404270();
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,iVar6 * 8,0x10);
    *(uint *)((int)this + 0x98) = uVar4;
  }
  if ((*(int *)((int)this + 0x84) == 0) ||
     (iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x84) + 0x70))), iVar6 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar6 + 4);
    if (10000 < uVar4) {
      uVar4 = uVar4 / 10000;
    }
  }
  iVar6 = *(int *)((int)this + 0xa0);
  bVar2 = 0;
  if (*(char *)((int)this + 0x110) != '\0') {
    while ((int)*(short *)(iVar6 + 10) != uVar4) {
      bVar2 = bVar2 + 1;
      iVar6 = iVar6 + 0xc;
      if (*(byte *)((int)this + 0x110) <= bVar2) {
        return 0;
      }
    }
    if ((*(short *)(iVar6 + 8) != 0) &&
       (piVar3 = *(int * PTR32 *)((int)this + 0x98), 0 < (short)(ushort)param_1)) {
      param_1 = (uint)(ushort)param_1;
      iVar7 = 0;
      do {
        sVar1 = (short)(iVar7 % (*(short *)(iVar6 + 8) + 1));
        if (sVar1 == 0) {
          iVar5 = *(int *)((int)this + 0x84);
        }
        else {
          iVar5 = *(int *)(iVar6 + 4) + -0x90 + sVar1 * 0x90;
          if ((((iVar5 == 0) || (*(ushort *)(iVar5 + 0x18) < 1000)) ||
              (iVar5 = *(int *)(iVar5 + 0x8c), iVar5 == 0)) ||
             ((((*(byte *)(iVar5 + 0x60) & 1) == 0 || ((*(byte *)(iVar5 + 0x60) & 4) == 0)) ||
              ((*(char *)(iVar5 + 0x1c) != '\x01' ||
               (*((char *)GEN_TOP((*(int *)(iVar5 + 0xc) + 0xf))) != '\x0e')))))) {
            iVar5 = 0;
          }
        }
        *piVar3 = iVar5;
        iVar5 = *(int *)((int)this + 0xc0);
        *(undefined1 *)((int)piVar3 + 5) = 0;
        *(bool *)(piVar3 + 1) = iVar5 == iVar7;
        iVar7 = iVar7 + 1;
        piVar3 = piVar3 + 2;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00574320 */
uint F_00574320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x574320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  undefined * this_00;
  
  if (param_4 == 0) {
    pvVar1 = (undefined *)0x0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x84);
  }
  else {
    uVar3 = F_0055d920((undefined *)((int)this + 4),param_4);
    if (uVar3 == 0) {
      pvVar1 = (undefined *)0x0;
      this_00 = (undefined *)0x0;
    }
    else if ((((*(ushort *)(uVar3 + 0x18) < 1000) ||
              (pvVar1 = *(undefined * PTR32 *)(uVar3 + 0x8c), pvVar1 == (undefined *)0x0)) ||
             ((*(byte *)((int)pvVar1 + 0x60) & 1) == 0)) ||
            ((((*(byte *)((int)pvVar1 + 0x60) & 4) == 0 || (*(char *)((int)pvVar1 + 0x1c) != '\x01')
              ) || (this_00 = pvVar1, *((char *)GEN_TOP((*(int *)((int)pvVar1 + 0xc) + 0xf))) != '\x0e')))) {
      pvVar1 = (undefined *)0x0;
      this_00 = pvVar1;
    }
  }
  if (this_00 != (undefined *)0x0) {
    *(undefined4 *)((int)this_00 + 0x1cc) = *param_1;
    *(undefined4 *)((int)this_00 + 0x1d0) = param_1[1];
    *(undefined4 *)((int)this_00 + 0x1d4) = param_1[2];
    *(undefined4 *)((int)this_00 + 0x1d8) = param_1[3];
    F_005626c0(this_00,param_2,param_3);
    if (*(int *)((int)this_00 + 0x70) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x70) + 4)));
      if (10000 < uVar3) {
        uVar3 = uVar3 / 10000;
      }
    }
    uVar3 = F_0056d1e0(this,uVar3);
    pvVar1 = (undefined *)0x0;
    if (uVar3 != 0) {
      sVar4 = 0;
      if (0 < *(short *)(uVar3 + 8)) {
        do {
          iVar2 = sVar4 * 0x90 + *(int *)(uVar3 + 4);
          if (((iVar2 != 0) && (999 < *(ushort *)(iVar2 + 0x18))) &&
             (((pvVar1 = *(undefined * PTR32 *)(iVar2 + 0x8c), pvVar1 != (undefined *)0x0 &&
               ((((*(byte *)((int)pvVar1 + 0x60) & 1) != 0 &&
                 ((*(byte *)((int)pvVar1 + 0x60) & 4) != 0)) &&
                (*(char *)((int)pvVar1 + 0x1c) == '\x01')))) &&
              (*((char *)GEN_TOP((*(int *)((int)pvVar1 + 0xc) + 0xf))) == '\x0e')))) {
            *(undefined4 *)((int)pvVar1 + 0x1cc) = *param_1;
            *(undefined4 *)((int)pvVar1 + 0x1d0) = param_1[1];
            *(undefined4 *)((int)pvVar1 + 0x1d4) = param_1[2];
            *(undefined4 *)((int)pvVar1 + 0x1d8) = param_1[3];
            F_005626c0(pvVar1,param_2,param_3);
          }
          sVar4 = sVar4 + 1;
        } while (sVar4 < *(short *)(uVar3 + 8));
      }
      *(undefined1 *)((int)this + 0x11d) = 1;
      pvVar1 = this;
    }
  }
  return (uint)pvVar1;
}

/* ref: FUN_00574490 */
unsigned int F_00574490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x574490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_005c4390(param_1,6,1,this,*(undefined4 *)((int)param_1 + 0x70));
    F_005c4390(param_1,7,1,this,*(undefined4 *)((int)param_1 + 0x70));
    F_005c4390(param_1,0x16,1,this,0);
    F_005c4390(param_1,0x17,1,this,0);
    F_005c4390(param_1,0x22,1,this,0);
    F_005c4390(param_1,0x2d,1,this,*(undefined4 *)((int)param_1 + 0x70));
    F_005c4390(param_1,0x2e,1,this,*(undefined4 *)((int)param_1 + 0x70));
    F_005c4390(param_1,0x19,1,this,*(undefined4 *)((int)param_1 + 0x70));
    F_005c4390(param_1,0x31,1,this,*(undefined4 *)((int)param_1 + 0x70));
    F_005c4390(param_1,4,1,this,0);
    F_005c4390(param_1,0x12,1,this,0);
    F_005c4390(param_1,0x11,1,this,0);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf17 */
uint F_00574560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x574560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  
  if (((this != (undefined *)0x0) && (*(int *)(this + 0x70) != 0)) &&
     ((*((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x19 & 1) != 0)) {
    uVar4 = 0;
    if (*(short *)(this + 0x20c) != 0) {
      do {
        uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0x1e8) + (uint)uVar4 * 4)));
        bVar2 = F_00570d10(uVar1,param_1,param_2,1);
        if (bVar2 != 0) {
          iVar3 = *(int *)(uVar1 + 8);
          if (iVar3 == 0) {
            return uVar1;
          }
          while( true ) {
            if (*(int *)(this + 0x6c) == iVar3) {
              return uVar1;
            }
            if ((*(uint *)(iVar3 + 0x84) & 0x100000) == 0) break;
            iVar3 = *(int *)(iVar3 + 8);
            if (iVar3 == 0) {
              return uVar1;
            }
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(this + 0x20c));
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00574610 */
unsigned int F_00574610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x574610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = 0;
  }
  iVar2 = param_2;
  if (param_2 < 0) {
    iVar2 = 0;
  }
  for (; (int)uVar3 <= iVar2; uVar3 = uVar3 + 1) {
    if (((uVar3 < *(uint *)((int)this + 0x158)) &&
        (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 300) + uVar3 * 4))), iVar1 != 0)) &&
       (*(char *)(iVar1 + 0x2d) == '\0')) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,uVar3,0,0);
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf20 */
uint F_00574670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x574670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  
  if (((-1 < (int)param_2) && (param_2 < *(uint *)(in_ecx + 0x158))) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 300) + param_2 * 4))), iVar1 != 0)) {
    return *(uint *)(iVar1 + 0x20);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentScrollBar::vf8 */
uint F_005746a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5746a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  float10 fVar9;
  undefined4 uVar10;
  
  iVar4 = *(int *)(this + 0x84);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x80) == 0) {
      uVar10 = 0;
      uVar2 = F_00404270();
      puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
      }
      *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
    }
    F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80),3,1,0,iVar4,this,0);
  }
  iVar4 = *(int *)(this + 0x84);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x80) == 0) {
      uVar10 = 0;
      uVar2 = F_00404270();
      puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
      }
      *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
    }
    F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80),7,1,0,iVar4,this,0);
  }
  iVar4 = *(int *)(this + 0x84);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x80) == 0) {
      uVar10 = 0;
      uVar2 = F_00404270();
      puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
      }
      *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
    }
    F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80),0x16,1,0,iVar4,this,0);
  }
  iVar4 = *(int *)(this + 0x8c);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x80) == 0) {
      uVar10 = 0;
      uVar2 = F_00404270();
      puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
      }
      *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
    }
    F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80),3,2,0,iVar4,this,0);
  }
  iVar4 = *(int *)(this + 0x8c);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x80) == 0) {
      uVar10 = 0;
      uVar2 = F_00404270();
      puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
      }
      *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
    }
    F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80),0x16,2,0,iVar4,this,0);
  }
  if (*(undefined * PTR32 *)(this + 0x94) != (undefined *)0x0) {
    F_005c4390(*(undefined * PTR32 *)(this + 0x94),0x17,3,this,0);
  }
  if (*(undefined * PTR32 *)(this + 0x98) != (undefined *)0x0) {
    F_005c4390(*(undefined * PTR32 *)(this + 0x98),0x17,4,this,0);
  }
  sVar5 = *(short *)(this + 0xc0);
  iVar4 = *(int *)(this + 0x84);
  *(short *)(this + 0xb8) = sVar5;
  if (this[200] == (undefined1)0x0) {
    if (iVar4 != 0) {
      if (((*(uint *)(iVar4 + 0x88) & 1) == 0) &&
         (fVar9 = (float10)(int)sVar5, bVar8 = GEN_ISNAN((float10)*(float *)(iVar4 + 0x38)) || GEN_ISNAN(fVar9),
         bVar8 == (bVar8 || (float10)*(float *)(iVar4 + 0x38) == fVar9))) {
        *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 1;
      }
      *(float *)(iVar4 + 0x38) = (float)(int)sVar5;
    }
  }
  else if (iVar4 != 0) {
    if (((*(uint *)(iVar4 + 0x88) & 1) == 0) &&
       (fVar9 = (float10)(int)sVar5, bVar8 = GEN_ISNAN((float10)*(float *)(iVar4 + 0x3c)) || GEN_ISNAN(fVar9),
       bVar8 == (bVar8 || (float10)*(float *)(iVar4 + 0x3c) == fVar9))) {
      *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 1;
    }
    *(float *)(iVar4 + 0x3c) = (float)(int)sVar5;
  }
  iVar4 = *(int *)(this + 0x70);
  sVar5 = 0;
  sVar1 = 0;
  if (iVar4 != 0) {
    sVar5 = *(short *)(iVar4 + 0x7c);
    sVar1 = *(short *)(iVar4 + 0x7e);
  }
  if (this[200] == (undefined1)0x0) {
    sVar1 = sVar5;
  }
  iVar4 = *(int *)(this + 0x84);
  sVar1 = sVar1 + *(short *)(this + 0xc0) * -2;
  uVar6 = 0;
  uVar7 = 0;
  *(short *)(this + 0xbc) = sVar1;
  if (iVar4 != 0) {
    uVar6 = *(ushort *)(iVar4 + 0x7c);
    uVar7 = *(ushort *)(iVar4 + 0x7e);
  }
  if (this[200] == (undefined1)0x0) {
    uVar7 = uVar6;
  }
  iVar4 = (int)sVar1 - (uint)uVar7;
  *(int *)(this + 0xb4) = iVar4;
  *(int *)(this + 0xa8) = iVar4;
  if (iVar4 < 0) {
    *(undefined4 *)(this + 0xb4) = 1;
    *(undefined4 *)(this + 0xa8) = 1;
  }
  F_0056de20(this,*(undefined4 *)(this + 0xac));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,0);
  iVar4 = *(int *)(this + 0x6c);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x80) == 0) {
      uVar10 = 0;
      uVar2 = F_00404270();
      puVar3 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
      }
      *(undefined4 * PTR32 *)(iVar4 + 0x80) = puVar3;
    }
    uVar2 = F_00565340(*(undefined * PTR32 *)(iVar4 + 0x80),8,0,0,iVar4,this,0);
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentScrollBar::vf16 */
uint F_005749f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5749f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint * puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  if (this == (undefined *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(this + 0x70);
  }
  *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) | 0x10000;
  if (this == (undefined *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(this + 0x70);
  }
  *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) | 0x40000;
  this[200] = *(undefined *)(param_1 + 0x1e);
  uVar4 = F_0055d920(this + 4,*(undefined4 *)(param_1 + 0xc));
  *(uint *)(this + 0x84) = uVar4;
  uVar5 = F_0055d920(this + 4,*(undefined4 *)(param_1 + 0xc));
  if ((((uVar5 == 0) || (*(ushort *)(uVar5 + 0x18) < 1000)) ||
      (iVar3 = *(int *)(uVar5 + 0x8c), iVar3 == 0)) ||
     ((((*(byte *)(iVar3 + 0x60) & 1) == 0 || ((*(byte *)(iVar3 + 0x60) & 4) == 0)) ||
      ((*(char *)(iVar3 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01'))))))
  {
    iVar3 = 0;
  }
  *(int *)(this + 0x88) = iVar3;
  this[0xca] = (undefined1)0x0;
  if ((*(uint *)(uVar4 + 0x84) & 0x800000) == 0) {
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = *(undefined2 *)(uVar4 + 0x7e);
    }
    *(undefined2 *)(this + 0xbe) = uVar2;
    uVar4 = F_0055d920(this + 4,*(undefined4 *)(uVar4 + 4));
    if (uVar4 != 0) {
      if (((*(ushort *)(uVar4 + 0x18) < 1000) || (iVar3 = *(int *)(uVar4 + 0x8c), iVar3 == 0)) ||
         (((*(byte *)(iVar3 + 0x60) & 1) == 0 ||
          ((((*(byte *)(iVar3 + 0x60) & 4) == 0 || (*(char *)(iVar3 + 0x1c) != '\x01')) ||
           (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')))))) {
        iVar3 = 0;
      }
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x108) != 0)) {
        puVar1 = ((uint *)GEN_TOP((*(int *)(iVar3 + 0x108) + 0x84)));
        *puVar1 = *puVar1 | 0x800000;
      }
    }
  }
  *((uint *)GEN_TOP((*(int *)(this + 0x84) + 0x84))) = *((uint *)GEN_TOP((*(int *)(this + 0x84) + 0x84))) & 0xff7fffff;
  if (*(int *)(this + 0x84) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x84) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  uVar4 = F_0055d920(this + 4,*(undefined4 *)(param_1 + 0x10));
  if (((uVar4 == 0) || (*(ushort *)(uVar4 + 0x18) < 1000)) ||
     ((iVar3 = *(int *)(uVar4 + 0x8c), iVar3 == 0 ||
      (((((*(byte *)(iVar3 + 0x60) & 1) == 0 || ((*(byte *)(iVar3 + 0x60) & 4) == 0)) ||
        (*(char *)(iVar3 + 0x1c) != '\x01')) || (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')))
      ))) {
    iVar3 = 0;
  }
  *(int *)(this + 0x94) = iVar3;
  uVar4 = F_0055d920(this + 4,*(undefined4 *)(param_1 + 0x14));
  if (((uVar4 == 0) || (*(ushort *)(uVar4 + 0x18) < 1000)) ||
     ((((iVar3 = *(int *)(uVar4 + 0x8c), iVar3 == 0 ||
        (((*(byte *)(iVar3 + 0x60) & 1) == 0 || ((*(byte *)(iVar3 + 0x60) & 4) == 0)))) ||
       (*(char *)(iVar3 + 0x1c) != '\x01')) || (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01'))))
  {
    iVar3 = 0;
  }
  *(int *)(this + 0x98) = iVar3;
  uVar4 = F_0055d920(this + 4,*(undefined4 *)(param_1 + 0x18));
  *(uint *)(this + 0x8c) = uVar4;
  uVar5 = F_0055d920(this + 4,*(undefined4 *)(param_1 + 0x18));
  if ((((uVar5 == 0) || (*(ushort *)(uVar5 + 0x18) < 1000)) ||
      (iVar3 = *(int *)(uVar5 + 0x8c), iVar3 == 0)) ||
     ((((*(byte *)(iVar3 + 0x60) & 1) == 0 || ((*(byte *)(iVar3 + 0x60) & 4) == 0)) ||
      ((*(char *)(iVar3 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01'))))))
  {
    iVar3 = 0;
  }
  *(int *)(this + 0x90) = iVar3;
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 0x84) = *(uint *)(uVar4 + 0x84) | 0x800000;
    *(undefined2 *)(this + 0xc0) = *(undefined2 *)(param_1 + 0x1c);
    return (uint)param_1;
  }
  uVar2 = *(undefined2 *)(param_1 + 0x1c);
  *(undefined2 *)(this + 0xc0) = uVar2;
  return CONCAT22((short)((uint)iVar3 >> 0x10),uVar2);
}

/* ref: FUN_00574c80 */
uint F_00574c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x574c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  short sVar2;
  short sVar3;
  uint * puVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  bool bVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  
  iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8)));
  puVar4 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8)));
  if (iVar5 == 0) {
    return (uint)puVar4;
  }
  (*(uint *)(gen_frame + 0x8)) = 0;
  if ((int)(*(uint *)&gen_args[1]) < (int)*puVar4) {
    puVar4 = &(*(uint *)&gen_args[1]);
  }
  if ((int)*puVar4 < 1) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar6 = *puVar4;
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
  fVar12 = 0.0;
  sVar2 = (short)(int)(((float10)(int)uVar6 / (float10)iVar5) *
                      (float10)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))));
  fVar13 = 0.0;
  if (iVar1 != 0) {
    fVar12 = *(float *)(iVar1 + 0x38);
    fVar13 = *(float *)(iVar1 + 0x3c);
  }
  sVar3 = (short)(int)fVar12;
  sVar7 = (short)(int)fVar13;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) == '\0') {
    sVar3 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) + sVar2;
  }
  else {
    sVar7 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) + sVar2;
  }
  iVar5 = (int)sVar3;
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)iVar5);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x88) & 1) == 0) {
      fVar10 = (float10)iVar5;
      fVar11 = (float10)*(float *)(iVar1 + 0x38);
      bVar8 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10);
      bVar9 = bVar8 || fVar11 == fVar10;
      iVar5 = (uint)CONCAT21(sVar3 >> 0xf,bVar9 << 6 | bVar8 << 2 | 2U | !(fVar10 <= fVar11)) << 8;
      if (bVar8 != bVar9) {
        fVar10 = (float10)(int)sVar7;
        fVar11 = (float10)*(float *)(iVar1 + 0x3c);
        bVar8 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10);
        bVar9 = bVar8 || fVar11 == fVar10;
        iVar5 = (uint)CONCAT21(sVar3 >> 0xf,bVar9 << 6 | bVar8 << 2 | 2U | !(fVar10 <= fVar11)) << 8
        ;
        if (bVar8 != bVar9) goto LAB_00574d75;
      }
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 1;
    }
LAB_00574d75: ;
    *(uint *)(iVar1 + 0x38) = (*(uint *)&gen_args[1]);
    *(float *)(iVar1 + 0x3c) = (float)(int)sVar7;
  }
  if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
      return CONCAT31((int3)((uint)iVar5 >> 8),(char)(*(undefined4 *)&gen_args[2]));
    }
  }
  else if ((char)(*(undefined4 *)&gen_args[3]) == '\0') goto LAB_00574d99;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) = uVar6;
LAB_00574d99: ;
  if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))) = uVar6;
  }
  F_0056de20((*(undefined * PTR32 *)&gen_args[0]),uVar6);
  uVar6 = F_00562a80((*(undefined * PTR32 *)&gen_args[0]));
  return uVar6;
}

/* ref: FUN_00574dc0 */
uint F_00574dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x574dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar2 = (uint *)&(*(int *)&gen_args[1]);
  if ((short)uVar1 <= (short)(*(int *)&gen_args[1])) {
    puVar2 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((short)*puVar2 < 1) {
    puVar2 = &(*(uint *)(gen_frame + 0x4));
  }
  (*(int *)&gen_args[1]) = (int)(short)*puVar2;
  uVar3 = F_00574c80((*(undefined * PTR32 *)&gen_args[0]),(int)(((float10)(*(int *)&gen_args[1]) / (float10)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)))) *
                                 (float10)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8)))),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return uVar3;
}

/* ref: FUN_00574e20 */
uint F_00574e20(unsigned int gen_a0)
{
  GEN_ENTER(0x574e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4),*(undefined4 *)((int)this + 0x90));
  if ((((uVar1 == 0) || (*(ushort *)(uVar1 + 0x18) < 1000)) ||
      (uVar1 = *(uint *)(uVar1 + 0x8c), uVar1 == 0)) ||
     ((((*(byte *)(uVar1 + 0x60) & 1) == 0 || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
      ((*(char *)(uVar1 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf))) != '\x01'))))))
  {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentDragDrop::vf9 */
uint F_00574e70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x574e70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1 + 0x84;
  }
  if (((uVar2 == *(uint *)(REFG(int, 0x1379860) + 0xb0)) && (uVar2 = 0, *(int *)(REFG(int, 0x1379860) + 0xb4) != 0))
     && (iVar1 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0xb4) + 0x70))), uVar2 = 0, iVar1 != 0)) {
    uVar2 = F_00567d00(iVar1,param_2,param_2);
  }
  return uVar2;
}

/* ref: FUN_00574ec0 */
unsigned int F_00574ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x574ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  bool bVar11;
  float10 fVar12;
  float fVar13;
  
  iVar3 = *(int *)((int)this + 0xc0);
  sVar10 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if ((*(uint *)(iVar3 + 0x84) & 0x100000) != 0) {
    if (iVar3 != 0) {
      if (((*(uint *)(iVar3 + 0x88) & 1) == 0) &&
         (fVar13 = *(float *)(iVar3 + 0x3c), GEN_ISNAN(fVar13) == (GEN_ISNAN(fVar13) || fVar13 == 0.0))) {
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
      }
      *(undefined4 *)(iVar3 + 0x3c) = 0;
    }
    if (*(int *)((int)this + 0xc0) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xc0) + 0x7e)));
    }
    sVar10 = (short)uVar8;
    (*(uint *)(gen_frame + 0xc)) = uVar8;
  }
  iVar3 = *(int *)((int)this + 0xe8);
  if ((*(uint *)(iVar3 + 0x84) & 0x100000) != 0) {
    if ((uint)*(byte *)((int)this + 0x21e) + (uint)*(byte *)((int)this + 0x220) +
        (uint)*(byte *)((int)this + 0x21f) + (uint)*(byte *)((int)this + 0x21c) +
        (uint)*(byte *)((int)this + 0x21d) == 0) {
      F_0056e740(this);
    }
    else {
      if (iVar3 != 0) {
        fVar13 = (float)(int)sVar10;
        (*(float *)(gen_frame + 0x18)) = fVar13;
        if (((*(uint *)(iVar3 + 0x88) & 1) == 0) &&
           (fVar12 = (float10)(int)sVar10,
           bVar11 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x3c)) || GEN_ISNAN(fVar12),
           bVar11 == (bVar11 || (float10)*(float *)(iVar3 + 0x3c) == fVar12))) {
          *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
        }
        *(float *)(iVar3 + 0x3c) = fVar13;
      }
      uVar5 = *(ushort *)((int)this + 0x22c);
      (*(uint *)(gen_frame + 0x4)) = 0;
      (*(uint *)(gen_frame + 0x10)) = (uint)*(ushort *)((int)this + 0x228);
      (*(uint *)(gen_frame + 0x14)) = (uint)uVar5;
      F_00c48350((undefined *)((int)this + 0x1c4),0,0x58);
      *(undefined1 *)((int)this + 0x221) = 0;
      F_0056e8d0(this,(uint)&(*(uint *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x14)),(int)this + 0x164,
                   (uint)*(byte *)((int)this + 0x21c),(uint)*(ushort *)((int)this + 0x230),
                   (uint)*(ushort *)((int)this + 0x222));
      F_0056e8d0(this,(uint)&(*(uint *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x14)),(int)this + 0x178,
                   (uint)*(byte *)((int)this + 0x21d),(uint)*(ushort *)((int)this + 0x232),
                   (uint)*(ushort *)((int)this + 0x224));
      if ((*((uint *)GEN_TOP((*(int *)((int)this + 0xfc) + 0x84))) & 0x100000) != 0) {
        uVar5 = F_00563f60(this,(uint)&(*(uint *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x14)),*(int *)((int)this + 0xfc),
                             (uint)*(ushort *)((int)this + 0x234));
        iVar3 = *(int *)((int)this + 0x18c);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uint)uVar5;
        if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x70), iVar3 == 0)) {
          fVar13 = 0.0;
        }
        else {
          fVar13 = *(float *)(iVar3 + 0x38);
        }
        uVar2 = *(ushort *)((int)this + 0x224);
        uVar5 = uVar5 + (short)(int)fVar13;
        (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = uVar5;
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uint)uVar5;
        F_0056ea60(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,(int)this + 0x18c,(uint)*(byte *)((int)this + 0x21e),
                     (uint)*(ushort *)((int)this + 0x232),(uint)uVar2);
      }
      if ((*((uint *)GEN_TOP((*(int *)((int)this + 0x108) + 0x84))) & 0x100000) != 0) {
        uVar6 = F_00563f60(this,(uint)&(*(uint *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x14)),*(int *)((int)this + 0x108),
                             (uint)*(ushort *)((int)this + 0x236));
        uVar5 = *(ushort *)((int)this + 0x222);
        uVar2 = *(ushort *)((int)this + 0x230);
        bVar1 = *(byte *)((int)this + 0x21f);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uint)uVar6;
        F_0056ea60(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,(int)this + 0x1b4,(uint)bVar1,(uint)uVar2,(uint)uVar5);
        F_0056ea60(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,(int)this + 0x1c0,(uint)*(byte *)((int)this + 0x220),
                     (uint)*(ushort *)((int)this + 0x232),(uint)*(ushort *)((int)this + 0x224));
      }
      F_00564010(this);
      uVar8 = F_005bdcb0(*(undefined * PTR32 *)((int)this + 0x124),0x15);
      uVar4 = *(undefined4 *)(uVar8 + 0x90);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uVar8 + 4);
      uVar9 = F_0055d920((undefined *)(uVar8 + 4),uVar4);
      uVar8 = F_0055d920((*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(uVar8 + 0x94));
      uVar5 = *(ushort *)((int)this + 0x22c);
      if ((int)(short)(*(uint *)(gen_frame + 0x14)) == (uint)uVar5) {
        if (uVar9 != 0) {
          *(uint *)(uVar9 + 0x84) = *(uint *)(uVar9 + 0x84) | 0x100000;
          *(uint *)(uVar9 + 0x88) = *(uint *)(uVar9 + 0x88) & 0xffffff7f;
        }
        if (uVar8 != 0) {
          *(uint *)(uVar8 + 0x84) = *(uint *)(uVar8 + 0x84) & 0xffefffff;
          *(uint *)(uVar8 + 0x88) = *(uint *)(uVar8 + 0x88) | 0x80;
        }
        (*(uint *)(gen_frame + 0x4)) = (uint)(ushort)(*(short *)((int)this + 0x22c) - *(short *)((int)this + 0x22e));
      }
      else {
        if (uVar9 != 0) {
          *(uint *)(uVar9 + 0x84) = *(uint *)(uVar9 + 0x84) & 0xffefffff;
          *(uint *)(uVar9 + 0x88) = *(uint *)(uVar9 + 0x88) | 0x80;
        }
        if (uVar8 != 0) {
          *(uint *)(uVar8 + 0x84) = *(uint *)(uVar8 + 0x84) | 0x100000;
          *(uint *)(uVar8 + 0x88) = *(uint *)(uVar8 + 0x88) & 0xffffff7f;
        }
      }
      if (*(int *)((int)this + 0xe8) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xe8) + 0x7e)));
      }
      iVar3 = (*(uint *)(gen_frame + 0xc)) + uVar8 + (*(uint *)(gen_frame + 0x4));
      (*(uint *)(gen_frame + 0xc)) = iVar3;
      sVar10 = (short)iVar3;
    }
  }
  iVar3 = *(int *)((int)this + 200);
  if ((*(uint *)(iVar3 + 0x84) & 0x100000) != 0) {
    if (iVar3 != 0) {
      fVar13 = (float)(int)sVar10;
      (*(float *)(gen_frame + 0x18)) = fVar13;
      if (((*(uint *)(iVar3 + 0x88) & 1) == 0) &&
         (fVar12 = (float10)(int)sVar10,
         bVar11 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x3c)) || GEN_ISNAN(fVar12),
         bVar11 == (bVar11 || (float10)*(float *)(iVar3 + 0x3c) == fVar12))) {
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
      }
      *(float *)(iVar3 + 0x3c) = fVar13;
    }
    if (*(int *)((int)this + 200) == 0) {
      sVar7 = 0;
    }
    else {
      sVar7 = *((short *)GEN_TOP((*(int *)((int)this + 200) + 0x7e)));
    }
    sVar10 = sVar10 + sVar7;
  }
  iVar3 = *(int *)((int)this + 0xd4);
  if ((*(uint *)(iVar3 + 0x84) & 0x100000) != 0) {
    if (iVar3 != 0) {
      fVar13 = (float)(int)sVar10;
      (*(float *)(gen_frame + 0x18)) = fVar13;
      if (((*(uint *)(iVar3 + 0x88) & 1) == 0) &&
         (fVar12 = (float10)(int)sVar10,
         bVar11 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x3c)) || GEN_ISNAN(fVar12),
         bVar11 == (bVar11 || (float10)*(float *)(iVar3 + 0x3c) == fVar12))) {
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
      }
      *(float *)(iVar3 + 0x3c) = fVar13;
    }
    if (*(int *)((int)this + 0xd4) == 0) {
      sVar7 = 0;
    }
    else {
      sVar7 = *((short *)GEN_TOP((*(int *)((int)this + 0xd4) + 0x7e)));
    }
    sVar10 = sVar10 + sVar7;
  }
  iVar3 = *(int *)((int)this + 0xdc);
  if ((*(uint *)(iVar3 + 0x84) & 0x100000) != 0) {
    if (iVar3 != 0) {
      fVar13 = (float)(int)sVar10;
      (*(float *)(gen_frame + 0x18)) = fVar13;
      if (((*(uint *)(iVar3 + 0x88) & 1) == 0) &&
         (fVar12 = (float10)(int)sVar10,
         bVar11 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x3c)) || GEN_ISNAN(fVar12),
         bVar11 == (bVar11 || (float10)*(float *)(iVar3 + 0x3c) == fVar12))) {
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
      }
      *(float *)(iVar3 + 0x3c) = fVar13;
    }
    if (*(int *)((int)this + 0xdc) == 0) {
      sVar7 = 0;
    }
    else {
      sVar7 = *((short *)GEN_TOP((*(int *)((int)this + 0xdc) + 0x7e)));
    }
    sVar10 = sVar10 + sVar7;
  }
  iVar3 = *(int *)((int)this + 0x128);
  if ((*(uint *)(iVar3 + 0x84) & 0x100000) != 0) {
    if (iVar3 != 0) {
      fVar13 = (float)(int)sVar10;
      (*(float *)(gen_frame + 0x18)) = fVar13;
      if (((*(uint *)(iVar3 + 0x88) & 1) == 0) &&
         (fVar12 = (float10)(int)sVar10,
         bVar11 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x3c)) || GEN_ISNAN(fVar12),
         bVar11 == (bVar11 || (float10)*(float *)(iVar3 + 0x3c) == fVar12))) {
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
      }
      *(float *)(iVar3 + 0x3c) = fVar13;
    }
    if (*(int *)((int)this + 0x128) == 0) {
      sVar7 = 0;
    }
    else {
      sVar7 = *((short *)GEN_TOP((*(int *)((int)this + 0x128) + 0x7e)));
    }
    sVar10 = sVar10 + sVar7;
  }
  iVar3 = *(int *)((int)this + 0x130);
  if ((*(uint *)(iVar3 + 0x84) & 0x100000) != 0) {
    if (iVar3 != 0) {
      fVar13 = (float)(int)sVar10;
      (*(float *)(gen_frame + 0x18)) = fVar13;
      if (((*(uint *)(iVar3 + 0x88) & 1) == 0) &&
         (fVar12 = (float10)(int)sVar10,
         bVar11 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x3c)) || GEN_ISNAN(fVar12),
         bVar11 == (bVar11 || (float10)*(float *)(iVar3 + 0x3c) == fVar12))) {
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
      }
      *(float *)(iVar3 + 0x3c) = fVar13;
    }
    if (*(int *)((int)this + 0x130) == 0) {
      sVar7 = 0;
    }
    else {
      sVar7 = *((short *)GEN_TOP((*(int *)((int)this + 0x130) + 0x7e)));
    }
    sVar10 = sVar10 + sVar7;
  }
  iVar3 = *(int *)((int)this + 0x114);
  if ((*(uint *)(iVar3 + 0x84) & 0x100000) != 0) {
    if (iVar3 != 0) {
      fVar13 = (float)(int)sVar10;
      (*(float *)(gen_frame + 0x18)) = fVar13;
      if (((*(uint *)(iVar3 + 0x88) & 1) == 0) &&
         (fVar12 = (float10)(int)sVar10,
         bVar11 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x3c)) || GEN_ISNAN(fVar12),
         bVar11 == (bVar11 || (float10)*(float *)(iVar3 + 0x3c) == fVar12))) {
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
      }
      *(float *)(iVar3 + 0x3c) = fVar13;
    }
    if (*(int *)((int)this + 0x114) == 0) {
      sVar7 = 0;
    }
    else {
      sVar7 = *((short *)GEN_TOP((*(int *)((int)this + 0x114) + 0x7e)));
    }
    sVar10 = sVar10 + sVar7;
  }
  iVar3 = *(int *)((int)this + 0x11c);
  if ((*(uint *)(iVar3 + 0x84) & 0x100000) != 0) {
    if (iVar3 != 0) {
      fVar13 = (float)(int)sVar10;
      (*(float *)(gen_frame + 0x18)) = fVar13;
      if (((*(uint *)(iVar3 + 0x88) & 1) == 0) &&
         (fVar12 = (float10)(int)sVar10,
         bVar11 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x3c)) || GEN_ISNAN(fVar12),
         bVar11 == (bVar11 || (float10)*(float *)(iVar3 + 0x3c) == fVar12))) {
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
      }
      *(float *)(iVar3 + 0x3c) = fVar13;
    }
    if (*(int *)((int)this + 0x11c) == 0) {
      sVar7 = 0;
    }
    else {
      sVar7 = *((short *)GEN_TOP((*(int *)((int)this + 0x11c) + 0x7e)));
    }
    sVar10 = sVar10 + sVar7;
  }
  if (*(int *)((int)this + 0x70) != 0) {
    *((short *)GEN_TOP((*(int *)((int)this + 0x70) + 0x7e))) = sVar10;
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentMap::vf16 */
uint F_005754d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5754d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  float10 fVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar8 = param_2;
  if (param_2 != 0) {
    if (*(char *)param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 4);
      *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 8);
    }
    param_2 = F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(param_2 + 0x14));
    if ((param_2 == 0) || (*(short *)(param_2 + 0x18) != 2)) {
      param_2 = 0;
    }
    *(uint *)(param_1 + 0x84) = param_2;
    uVar7 = F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(uVar8 + 0x10));
    if ((uVar7 == 0) || ((*(uint *)(gen_frame + 0x8)) = uVar7, *(short *)(uVar7 + 0x18) != 2)) {
      (*(uint *)(gen_frame + 0x8)) = 0;
    }
    *(uint *)(param_1 + 0x88) = (*(uint *)(gen_frame + 0x8));
    uVar7 = F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(uVar8 + 0xc));
    if ((uVar7 == 0) || ((*(uint *)(gen_frame + 0x4)) = uVar7, *(short *)(uVar7 + 0x18) != 2)) {
      (*(uint *)(gen_frame + 0x4)) = 0;
    }
    *(uint *)(param_1 + 0x8c) = (*(uint *)(gen_frame + 0x4));
    uVar7 = F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(uVar8 + 0x1c));
    if ((uVar7 == 0) || (*(short *)(uVar7 + 0x18) != 2)) {
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0x90) = uVar7;
    uVar7 = F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(uVar8 + 0x20));
    if ((uVar7 == 0) || (*(short *)(uVar7 + 0x18) != 2)) {
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0x94) = uVar7;
    uVar7 = F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(uVar8 + 0x18));
    if ((uVar7 == 0) || (*(ushort *)(uVar7 + 0x18) < 1000)) {
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0x98) = uVar7;
    uVar7 = F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(uVar8 + 0x28));
    if ((uVar7 == 0) || (*(ushort *)(uVar7 + 0x18) < 1000)) {
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0x9c) = uVar7;
    uVar7 = F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(uVar8 + 0x2c));
    if ((uVar7 == 0) || (*(ushort *)(uVar7 + 0x18) < 1000)) {
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0xa0) = uVar7;
    uVar7 = F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(uVar8 + 0x30));
    if ((uVar7 == 0) || (*(ushort *)(uVar7 + 0x18) < 1000)) {
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0xa4) = uVar7;
    uVar8 = F_0055d920((undefined *)(param_1 + 4),*(undefined4 *)(uVar8 + 0x24));
    if ((uVar8 == 0) || (*(ushort *)(uVar8 + 0x18) < 1000)) {
      uVar8 = 0;
    }
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar9 = 0;
    if (((param_2 != 0) && (uVar9 = 0, *(int *)(param_2 + 0x8c) != 0)) &&
       (puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 0x8c) + 8))) + (uint)*(ushort *)(param_2 + 0x90) * 0xc))),
       puVar2 != (undefined4 *)0x0)) {
      uVar9 = *puVar2;
    }
    *(undefined4 *)(param_1 + 0xac) = uVar9;
    uVar9 = 0;
    if ((((*(uint *)(gen_frame + 0x8)) != 0) && (uVar9 = 0, *(int *)((*(uint *)(gen_frame + 0x8)) + 0x8c) != 0)) &&
       (puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x8)) + 0x8c) + 8))) + (uint)*(ushort *)((*(uint *)(gen_frame + 0x8)) + 0x90) * 0xc))),
       puVar2 != (undefined4 *)0x0)) {
      uVar9 = *puVar2;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar9;
    uVar9 = 0;
    if ((((*(uint *)(gen_frame + 0x4)) != 0) && (uVar9 = 0, *(int *)((*(uint *)(gen_frame + 0x4)) + 0x8c) != 0)) &&
       (puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x4)) + 0x8c) + 8))) + (uint)*(ushort *)((*(uint *)(gen_frame + 0x4)) + 0x90) * 0xc))),
       puVar2 != (undefined4 *)0x0)) {
      uVar9 = *puVar2;
    }
    *(undefined4 *)(param_1 + 0xb4) = uVar9;
    iVar3 = *(int *)(param_1 + 0x84);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(param_1 + 0x88);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(param_1 + 0x8c);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(param_1 + 0x90);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(param_1 + 0x94);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(param_1 + 0x98);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(param_1 + 0x9c);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(param_1 + 0xa0);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(param_1 + 0xa4);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
    iVar3 = *(int *)(param_1 + 0xa8);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
    }
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x88) + 0x92))) = 2;
  }
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(REFG(int, 0x1379860) + 4);
  *(int *)(param_1 + 0x108) = param_1 + 300;
  if (*(char *)(param_1 + 0x1c) != '\x02') {
    *(int *)(param_1 + 0x38) = param_1 + 0xc0;
  }
  piVar4 = *(int * PTR32 *)(param_1 + 0x140);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0x80;
  (*(uint *)(gen_frame + 0x4)) = 0x80;
  uVar8 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,0x1450,0x100000,0xc);
  uVar9 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar5 = (float10)1;
  *(uint *)(param_1 + 0x140) = uVar8;
  *(undefined4 *)(param_1 + 0x244) = uVar9;
  *(undefined4 *)(param_1 + 0x248) = uVar9;
  *(undefined4 *)(param_1 + 0x1f0) = uVar9;
  *(undefined4 *)(param_1 + 500) = uVar9;
  *(undefined4 *)(param_1 + 0x1f8) = uVar9;
  *(undefined4 *)(param_1 + 0x1fc) = uVar9;
  uVar9 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0d94)));
  *(undefined4 *)(param_1 + 0x228) = 0x120000;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(uint *)(param_1 + 0x250) = *(uint *)(param_1 + 0x250) & 0xfffffff0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = uVar9;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = uVar9;
  *(undefined4 *)(param_1 + 0x174) = uVar9;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = uVar9;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  F_005c0350(param_1 + 0x150,0,(float)fVar5,(float)fVar5,(float)fVar5,(float)fVar5);
  fVar5 = (float10)1;
  F_005c0350(param_1 + 0x150,1,(float)fVar5,(float)fVar5,(float)fVar5,(float)fVar5);
  fVar5 = (float10)1;
  F_005c0350(param_1 + 0x150,2,(float)fVar5,(float)fVar5,(float)fVar5,(float)fVar5);
  fVar5 = (float10)1;
  F_005c0350(param_1 + 0x150,3,(float)fVar5,(float)fVar5,(float)fVar5,(float)fVar5);
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  uVar9 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0d90)));
  *(uint *)(param_1 + 0x250) =
       (uint)(ushort)(*(short *)(param_1 + 0x30) << 6) << 9 |
       *(uint *)(param_1 + 0x250) & 0xfe0001ff;
  *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) & 0xffffff2f | 0x20;
  *(undefined4 *)(param_1 + 0x2c4) = 1;
  *(undefined4 *)(param_1 + 0x2e8) = REFG(undefined4, 0x131de68);
  *(undefined4 *)(param_1 + 0x2d8) = uVar9;
  *(undefined4 *)(param_1 + 0x2dc) = uVar9;
  (*(uint *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
  iVar3 = (int)TRUNC((float10)*(float *)(param_1 + 0x278) * (float10)*(double *)&REFG(undefined, 0x1090718));
  (*(uint *)(gen_frame + 0x4)) = iVar3;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (undefined2)iVar3;
  uVar6 = (undefined2)(*(uint *)(gen_frame + 0x4));
  (*(uint *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
  uVar8 = (uint)TRUNC(((float10)*(double *)&REFG(undefined, 0x10a0ca8) / (float10)*(float *)(param_1 + 0x278)) /
                      (float10)*(double *)&REFG(undefined, 0x1090718));
  (*(uint *)(gen_frame + 0x4)) = uVar8;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (undefined2)uVar8;
  *(undefined2 *)(param_1 + 0x2e0) = (undefined2)(*(uint *)(gen_frame + 0x4));
  *(undefined2 *)(param_1 + 0x2e2) = (undefined2)(*(uint *)(gen_frame + 0x4));
  *(undefined2 *)(param_1 + 0x2e4) = uVar6;
  *(undefined2 *)(param_1 + 0x2e6) = uVar6;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x88) + 0x93)));
    *pbVar1 = *pbVar1 & 0xf7;
  }
  return uVar8 & 0xffff;
}

/* ref: FUN_00575b20 */
unsigned int F_00575b20(unsigned int gen_a0)
{
  GEN_ENTER(0x575b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float * pfVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  
  iVar12 = *(int *)((int)this + 0xb0);
  if (iVar12 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x88);
  if (iVar3 == 0) {
    return 0;
  }
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar3 + 0x8c) + 8)));
  if (iVar4 == 0) {
    return 0;
  }
  iVar7 = *(int *)(iVar12 + 8);
  (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0x274);
  fVar16 = (float10)*(float *)((int)this + 0x274);
  fVar1 = ((float)GEN_TOF((fVar16 * (float10)*(float *)((int)this + 0x27c))));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  if (iVar7 == 0) {
    if (*(int *)(iVar12 + 0xc) != 0) {
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar12 + 0xc) + 0xfc)));
      goto LAB_00575ba6;
    }
LAB_00575baa: ;
    iVar6 = 1;
  }
  else {
    if (iVar7 == 1) {
      if (*(int *)(iVar12 + 0xc) != 0) {
        iVar6 = *((int *)GEN_TOP((*(int *)(iVar12 + 0xc) + 0x18)));
        goto LAB_00575ba6;
      }
      goto LAB_00575baa;
    }
    if (iVar7 != 2) goto LAB_00575baa;
    iVar6 = *(int *)(iVar12 + 0xc);
LAB_00575ba6: ;
    if (iVar6 == 0) goto LAB_00575baa;
    iVar6 = *(int *)(iVar6 + 0x18);
  }
  fVar17 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar18 = (float10)fVar1;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar18 * fVar17);
  if (iVar7 == 0) {
    if (*(int *)(iVar12 + 0xc) != 0) {
      iVar7 = *((int *)GEN_TOP((*(int *)(iVar12 + 0xc) + 0xfc)));
      goto LAB_00575bfb;
    }
LAB_00575bff: ;
    iVar7 = 1;
  }
  else {
    if (iVar7 == 1) {
      if (*(int *)(iVar12 + 0xc) != 0) {
        iVar7 = *((int *)GEN_TOP((*(int *)(iVar12 + 0xc) + 0x18)));
        goto LAB_00575bfb;
      }
      goto LAB_00575bff;
    }
    if (iVar7 != 2) goto LAB_00575bff;
    iVar7 = *(int *)(iVar12 + 0xc);
LAB_00575bfb: ;
    if (iVar7 == 0) goto LAB_00575bff;
    iVar7 = *(int *)(iVar7 + 0x1c);
  }
  fVar19 = (float10)iVar7;
  if (iVar7 < 0) {
    fVar19 = fVar19 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  pfVar8 = (float *)((int)this + 0x288);
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(float *)(gen_frame + 0x18)) = (float)(fVar19 * fVar18);
  fVar17 = (float10)(float)(fVar18 * fVar17);
  fVar20 = (float10)*(float *)((int)this + 0x280) * fVar16 +
           (fVar17 - (float10)*pfVar8) * (float10)REFG(double, 0x1088108);
  fVar1 = (float)fVar20;
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar19 = (float10)(float)(fVar19 * fVar18);
  fVar21 = (fVar19 - (float10)*(float *)((int)this + 0x28c)) * (float10)REFG(double, 0x1088108) +
           (float10)*(float *)((int)this + 0x284) * fVar16;
  fVar2 = (float)fVar21;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar16 = (float10)fVar1;
  fVar1 = (float)(fVar17 - fVar16);
  (*(float *)(gen_frame + 0x18)) = fVar1;
  if (!((float10)*pfVar8 < (float10)fVar1)) {
    pfVar8 = &(*(float *)(gen_frame + 0x18));
  }
  if (!(0.0 < *pfVar8)) {
    pfVar8 = &(*(float *)(gen_frame + 0xc));
  }
  fVar17 = (float10)fVar2;
  fVar1 = *pfVar8;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  pfVar8 = (float *)((int)this + 0x28c);
  fVar2 = (float)(fVar19 - fVar17);
  (*(float *)(gen_frame + 0x18)) = fVar2;
  if (!((float10)*(float *)((int)this + 0x28c) < (float10)fVar2)) {
    pfVar8 = &(*(float *)(gen_frame + 0x18));
  }
  if (!(0.0 < *pfVar8)) {
    pfVar8 = &(*(float *)(gen_frame + 0xc));
  }
  fVar2 = *pfVar8;
  (*(float *)(gen_frame + 0xc)) = fVar2;
  (*(ushort *)(gen_frame + 0x8)) = (ushort)(int)TRUNC((float10)fVar1 / fVar18);
  uVar9 = ((*(ushort *)(gen_frame + 0x8)) - ((*(ushort *)(gen_frame + 0x8)) & 3)) + 4;
  *(ushort *)(iVar4 + 8) = uVar9;
  (*(ushort *)(gen_frame + 0x8)) = (ushort)(int)TRUNC((float10)fVar2 / fVar18);
  *(ushort *)(iVar4 + 10) = ((*(ushort *)(gen_frame + 0x8)) - ((*(ushort *)(gen_frame + 0x8)) & 3)) + 4;
  (*(ushort *)(gen_frame + 0x8)) = (ushort)(int)TRUNC((float10)uVar9 * fVar18);
  *(ushort *)(iVar3 + 0x7c) = (*(ushort *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(int)TRUNC((float10)*(ushort *)(iVar4 + 10) * fVar18);
  *(undefined2 *)(iVar3 + 0x7e) = (*(undefined2 *)(gen_frame + 0x4));
  *(short *)((int)this + 0x296) = (short)(int)fVar2;
  *(short *)((int)this + 0x294) = (short)(int)fVar1;
  iVar3 = *(int *)(iVar12 + 8);
  if (iVar3 == 0) {
    if (*(int *)(iVar12 + 0xc) != 0) {
      iVar7 = *((int *)GEN_TOP((*(int *)(iVar12 + 0xc) + 0xfc)));
      goto LAB_00575dd5;
    }
LAB_00575dd9: ;
    (*(float *)(gen_frame + 0x18)) = 1.4013e-45;
  }
  else {
    if (iVar3 == 1) {
      if (*(int *)(iVar12 + 0xc) != 0) {
        iVar7 = *((int *)GEN_TOP((*(int *)(iVar12 + 0xc) + 0x18)));
        goto LAB_00575dd5;
      }
      goto LAB_00575dd9;
    }
    if (iVar3 != 2) goto LAB_00575dd9;
    iVar7 = *(int *)(iVar12 + 0xc);
LAB_00575dd5: ;
    if (iVar7 == 0) goto LAB_00575dd9;
    (*(float *)(gen_frame + 0x18)) = *(float *)(iVar7 + 0x18);
  }
  if (iVar3 == 0) {
    if (*(int *)(iVar12 + 0xc) != 0) {
      iVar12 = *((int *)GEN_TOP((*(int *)(iVar12 + 0xc) + 0xfc)));
      goto LAB_00575e11;
    }
  }
  else if (iVar3 == 1) {
    if (*(int *)(iVar12 + 0xc) != 0) {
      iVar12 = *((int *)GEN_TOP((*(int *)(iVar12 + 0xc) + 0x18)));
      goto LAB_00575e11;
    }
  }
  else if (iVar3 == 2) {
    iVar12 = *(int *)(iVar12 + 0xc);
LAB_00575e11: ;
    if (iVar12 != 0) {
      uVar15 = *(uint *)(iVar12 + 0x1c);
      goto LAB_00575e1f;
    }
  }
  uVar15 = 1;
LAB_00575e1f: ;
  uVar5 = (uint)(fVar16 / fVar18);
  uVar14 = uVar5 & 0xffff;
  sVar13 = (short)uVar5;
  uVar5 = (uint)(fVar17 / fVar18);
  uVar11 = uVar5 & 0xffff;
  sVar10 = (short)uVar5;
  while ((sVar13 < 0 && (sVar13 = (short)uVar14, (*(float *)(gen_frame + 0x18)) != 0.0))) {
    uVar14 = uVar14 + (int)gen_fl2bits((*(float *)(gen_frame + 0x18)));
    sVar13 = (short)uVar14;
  }
  while ((sVar10 < 0 && (sVar10 = (short)uVar11, uVar15 != 0))) {
    uVar11 = uVar11 + uVar15;
    sVar10 = (short)uVar11;
  }
  *(short *)(iVar4 + 4) = (short)((uint)(int)sVar13 % (uint)gen_fl2bits((*(float *)(gen_frame + 0x18))));
  *(short *)(iVar4 + 6) = (short)((uint)(int)sVar10 % uVar15);
  *(short *)((int)this + 0x290) = (short)(int)fVar20;
  *(short *)((int)this + 0x292) = (short)(int)fVar21;
  return 0;
}

/* ref: FUN_00575ea0 */
uint F_00575ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x575ea0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  undefined * pvVar2;
  
  if ((((param_2 != (uint *)0x0) && (in_EAX = param_2[7], in_EAX != 0)) &&
      (999 < *(ushort *)(in_EAX + 0x18))) &&
     (pvVar2 = *(undefined * PTR32 *)(in_EAX + 0x8c), pvVar2 != (undefined *)0x0)) {
    in_EAX = param_1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      pvVar2 = (undefined *)((int)pvVar2 + 4);
      uVar1 = F_0055d920(pvVar2,*param_3);
      *param_2 = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[1]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
        uVar1 = 0;
      }
      param_2[1] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[2]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
        uVar1 = 0;
      }
      param_2[2] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[3]);
      param_2[3] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[4]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 8)) {
        uVar1 = 0;
      }
      param_2[4] = uVar1;
      return uVar1;
    case 1: ;
      pvVar2 = (undefined *)((int)pvVar2 + 4);
      uVar1 = F_0055d920(pvVar2,*param_3);
      *param_2 = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[1]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
        uVar1 = 0;
      }
      param_2[1] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[2]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
        uVar1 = 0;
      }
      param_2[2] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[3]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
        uVar1 = 0;
      }
      param_2[3] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[4]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
        uVar1 = 0;
      }
      param_2[4] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[5]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 8)) {
        uVar1 = 0;
      }
      param_2[5] = uVar1;
      return uVar1;
    case 2: ;
      uVar1 = F_005c2d20(pvVar2,*param_3,0x13);
      *param_2 = uVar1;
      pvVar2 = (undefined *)((int)pvVar2 + 4);
      uVar1 = F_0055d920(pvVar2,param_3[1]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
        uVar1 = 0;
      }
      param_2[1] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[2]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
        uVar1 = 0;
      }
      param_2[2] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[3]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
        uVar1 = 0;
      }
      param_2[3] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[4]);
      param_2[4] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[5]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 8)) {
        uVar1 = 0;
      }
      param_2[5] = uVar1;
      return uVar1;
    case 3: ;
      pvVar2 = (undefined *)((int)pvVar2 + 4);
      uVar1 = F_0055d920(pvVar2,*param_3);
      *param_2 = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[1]);
      param_2[1] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[2]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
        uVar1 = 0;
      }
      param_2[2] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[3]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
        uVar1 = 0;
      }
      param_2[3] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[4]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
        uVar1 = 0;
      }
      param_2[4] = uVar1;
      uVar1 = F_0055d920(pvVar2,param_3[5]);
      if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 4)) {
        uVar1 = 0;
      }
      param_2[5] = uVar1;
      in_EAX = F_0055d920(pvVar2,param_3[6]);
      if ((in_EAX == 0) || (*(short *)(in_EAX + 0x18) != 8)) {
        in_EAX = 0;
      }
      param_2[6] = in_EAX;
    }
  }
  return in_EAX;
}

/* ref: FUN_00576160 */
byte F_00576160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x576160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00 = 0;
  undefined4 extraout_ECX_01 = 0;
  undefined4 extraout_ECX_02 = 0;
  
  if ((((this == (undefined *)0x0) || (iVar1 = *(int *)((int)this + 0x1c), iVar1 == 0)) || ((*(uint *)(iVar1 + 0x84) & 0x100000) == 0)) || (((*(uint *)(iVar1 + 0x88) & 0x20000) != 0 || ((*(uint *)(iVar1 + 0x84) >> 0x19 & 1) == 0)))) {
    return 0;
  }
  if ((((param_3 & 1) != 0) && (uVar3 = F_00564760(this), uVar3 != 0)) && ((uVar3 = F_0055a2d0(uVar3), (char)uVar3 != '\0' && (bVar2 = F_00570d10(extraout_ECX,param_1,param_2,0), bVar2 != 0)))) {
    return 1;
  }
  if (((((param_3 & 2) != 0) && (uVar3 = F_005647a0(this), uVar3 != 0)) && (uVar3 = F_0055a2d0(uVar3), (char)uVar3 != '\0')) && (bVar2 = F_00570d10(extraout_ECX_00,param_1,param_2,0), bVar2 != 0)) {
    return 1;
  }
  if ((((param_3 & 4) != 0) && (uVar3 = F_005647e0(this), uVar3 != 0)) && ((uVar3 = F_0055a2d0(uVar3), (char)uVar3 != '\0' && (bVar2 = F_00570d10(extraout_ECX_01,param_1,param_2,0), bVar2 != 0)))) {
    return 1;
  }
  if ((((param_3 & 8) != 0) && (uVar3 = F_00564820(this), uVar3 != 0)) && ((uVar3 = F_0055a2d0(uVar3), (char)uVar3 != '\0' && (bVar2 = F_00570d10(extraout_ECX_02,param_1,param_2,0), bVar2 != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00576260 */
unsigned int F_00576260(unsigned int gen_a0)
{
  GEN_ENTER(0x576260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float fVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (((this != (undefined *)0x0) && (*(char *)((int)this + 0x20) == '\x03')) &&
     (iVar1 = *(int *)((int)this + 0x14), iVar1 != 0)) {
    uVar2 = *(uint *)((int)this + 8);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10a0d9c);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x10a0d9c);
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x10a0d98);
    (*(float *)(gen_frame + 0xc)) = REFG(float, 0x10a0d98);
    if (((uVar2 != 0) && ((*(uint *)(uVar2 + 0x84) & 0x100000) != 0)) &&
       ((*(uint *)(uVar2 + 0x88) & 0x20000) == 0)) {
      F_0056f170(&(*(float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0xc)),uVar2);
    }
    uVar2 = *(uint *)((int)this + 0x10);
    if (((uVar2 != 0) && ((*(uint *)(uVar2 + 0x84) & 0x100000) != 0)) &&
       ((*(uint *)(uVar2 + 0x88) & 0x20000) == 0)) {
      (*(uint *)(gen_frame + 0x8)) = 0;
      F_0056f170(&(*(float *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x8)),uVar2);
    }
    fVar4 = (*(float *)(gen_frame + 0x18));
    fVar6 = (float10)(*(float *)(gen_frame + 0x18));
    fVar7 = (float10)(*(float *)(gen_frame + 0x14));
    if (((*(uint *)(iVar1 + 0x88) & 1) == 0) &&
       ((bVar5 = GEN_ISNAN((float10)*(float *)(iVar1 + 0x38)) || GEN_ISNAN(fVar6),
        bVar5 == (bVar5 || (float10)*(float *)(iVar1 + 0x38) == fVar6) ||
        (bVar5 = GEN_ISNAN((float10)*(float *)(iVar1 + 0x3c)) || GEN_ISNAN(fVar7),
        bVar5 == (bVar5 || (float10)*(float *)(iVar1 + 0x3c) == fVar7))))) {
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 1;
    }
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 2)) = gen_x87_cw;
    (*(uint *)(gen_frame + 0x8)) = gen_x87_cw | 0xc00;
    *(float *)(iVar1 + 0x38) = fVar4;
    fVar3 = (float10)*(double *)&REFG(undefined, 0x1094788);
    *(float *)(iVar1 + 0x3c) = (*(float *)(gen_frame + 0x14));
    uVar2 = (uint)TRUNC(((float10)(*(float *)(gen_frame + 0x10)) - fVar6) + fVar3);
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = (undefined2)uVar2;
    *(undefined2 *)(iVar1 + 0x7c) = (undefined2)(*(uint *)(gen_frame + 0x8));
    (*(uint *)(gen_frame + 0x8)) = gen_x87_cw | 0xc00;
    (*(uint *)(gen_frame + 0x8)) = (int)TRUNC((float10)(*(float *)(gen_frame + 0xc)) - fVar7);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = (undefined2)(int)TRUNC((float10)(*(float *)(gen_frame + 0xc)) - fVar7);
    *(undefined2 *)(iVar1 + 0x7e) = (undefined2)(*(uint *)(gen_frame + 0x8));
  }
  return 0;
}

/* ref: FUN_005763d0 */
uint F_005763d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5763d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  uVar2 = *(uint *)((int)this + 0x58);
  *param_2 = 0;
  if (uVar2 == 0) {
    F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x2c));
    return 0;
  }
  if (0x30000 < (int)(uVar2 * 0x800)) {
    uVar2 = F_0056f570(this,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar2;
  }
  uVar3 = F_005bfd40(*(undefined * PTR32 *)((int)this + 0x10),uVar2 * 0x800);
  uVar1 = uVar3 + uVar2 * 0x400;
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  iVar4 = (uVar2 & 0x3fffff) * 0x80 - *(int *)((int)this + 0x54);
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  *param_2 = iVar4;
  (*(int *)(gen_frame + 0x24)) = iVar4;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x48);
  (*(undefined4 *)(gen_frame + 0x14)) = 0x400;
  (*(undefined4 *)(gen_frame + 0x18)) = 8;
  (*(int *)(gen_frame + 0x1c)) = uVar2 * 0x400;
  (*(uint *)(gen_frame + 0x20)) = uVar2;
  F_00a1a9d0(param_1,&(*(uint *)(gen_frame + 0x8)),param_3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_005764c0 */
unsigned int F_005764c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5764c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x30) == 1) {
    uVar1 = F_0056fad0(this);
    if (uVar1 == 2) {
      F_00565450(this);
    }
  }
  return 0;
}

/* ref: FUN_005764e0 */
uint F_005764e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5764e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x10a0da0));
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  F_00570910(*(undefined * PTR32 *)((int)this + 0x13c),param_1,this,param_2,param_3,param_4,param_5,param_6);
  return (uint)param_1;
}

/* ref: FUN_00576530 */
uint F_00576530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x576530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (((*(uint *)((int)this + 0x9c) & 0x2000000) != 0) && ((*(byte *)((int)this + 0x148) & 2) != 0))
  {
    uVar1 = F_00570a20(*(undefined * PTR32 *)((int)this + 0x13c),this,param_1,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00576570 */
uint F_00576570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x576570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (((*(uint *)((int)this + 0x9c) & 0x2000000) != 0) && ((*(byte *)((int)this + 0x148) & 2) != 0))
  {
    uVar1 = F_00570aa0(*(undefined * PTR32 *)((int)this + 0x13c),this,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005765b0 */
uint F_005765b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5765b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(undefined4, 0x108cc50);
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x13c);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x24))))(iVar1 + 4,this,param_2);
  F_0056fc60((undefined *)(iVar1 + 4),param_1,param_2,0,uVar2);
  return *(uint *)(iVar1 + 0xa8);
}

/* ref: FUN_00576610 */
double F_00576610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x576610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  int iVar2;
  
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    return (double)REFG(float, 0x10a0da0);
  }
  iVar2 = *(int *)((int)this + 0x13c);
  if (param_1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 0x24))))(iVar2 + 0x144,this,param_1);
    *(undefined1 *)(iVar2 + 0x2a8) = 0;
    *(undefined4 *)(iVar2 + 0x1f8) = param_2;
    *(undefined4 *)(iVar2 + 0x1fc) = param_3;
    if ((((*((byte *)GEN_TOP((*(int *)(iVar2 + 0x14c) + 0x148))) & 2) != 0) &&
        (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 0x150) + 0x6e))), (bVar1 & 1) != 0)) && ((bVar1 & 2) != 0)
       ) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 4))))(iVar2 + 0x144);
      F_005662b0((undefined *)(iVar2 + 0x144),param_1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 8))))(iVar2 + 0x144);
    }
    return (double)*(float *)(iVar2 + 0x284);
  }
  return 0.0;
}

/* ref: FUN_00576700 */
float F_00576700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x576700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  int iVar2;
  
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    return REFG(float, 0x10a0da0);
  }
  iVar2 = *(int *)((int)this + 0x13c);
  if (param_1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 0x24))))(iVar2 + 0x144,this,param_1);
    *(undefined1 *)(iVar2 + 0x2a8) = 0;
    *(undefined4 *)(iVar2 + 0x1f8) = param_2;
    *(undefined4 *)(iVar2 + 0x1fc) = param_3;
    if ((((*((byte *)GEN_TOP((*(int *)(iVar2 + 0x14c) + 0x148))) & 2) != 0) &&
        (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 0x150) + 0x6e))), (bVar1 & 1) != 0)) && ((bVar1 & 2) != 0)
       ) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 4))))(iVar2 + 0x144);
      F_005662b0((undefined *)(iVar2 + 0x144),param_1);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 8))))(iVar2 + 0x144);
    }
    return *(float *)(iVar2 + 0x284);
  }
  return 0.0;
}

/* ref: FUN_005767f0 */
uint F_005767f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5767f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x10a0da0));
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  F_00570910(*(undefined * PTR32 *)((int)this + 0x13c),param_1,this,1,param_2,param_3,param_4,0);
  return (uint)param_1;
}

/* ref: FUN_00576840 */
uint F_00576840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x576840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x10a0da0));
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  F_00570910(*(undefined * PTR32 *)((int)this + 0x13c),param_1,this,1,param_2,param_3,param_4,0);
  return (uint)param_1;
}

/* ref: FUN_00576890 */
uint F_00576890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x576890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x10a0da0));
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  F_00570910(*(undefined * PTR32 *)((int)this + 0x13c),param_1,this,0,param_2,param_3,param_4,0);
  return (uint)param_1;
}

/* ref: FUN_005768e0 */
uint F_005768e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5768e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x10a0da0));
    param_1[1] = uVar3;
    return (uint)param_1;
  }
  iVar2 = *(int *)((int)this + 0x13c);
  if (param_2 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 0x24))))(iVar2 + 0x144,this,param_2);
    *(int *)(iVar2 + 0x1fc) = param_3 + 1;
    *(undefined1 *)(iVar2 + 0x2a8) = 1;
    *(undefined4 *)(iVar2 + 0x1f8) = 0;
    if ((((*((byte *)GEN_TOP((*(int *)(iVar2 + 0x14c) + 0x148))) & 2) != 0) &&
        (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 0x150) + 0x6e))), (bVar1 & 1) != 0)) && ((bVar1 & 2) != 0)
       ) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 4))))(iVar2 + 0x144);
      F_005662b0((undefined *)(iVar2 + 0x144),param_2);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x144) + 8))))(iVar2 + 0x144);
    }
    uVar3 = *(undefined4 *)(iVar2 + 0x288);
    *param_1 = *(undefined4 *)(iVar2 + 0x284);
    param_1[1] = uVar3;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_005769d0 */
uint F_005769d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5769d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = REFG(undefined4, 0x108cc50);
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x13c);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 0x24))))(iVar2 + 4,this,param_1);
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0xbc) = uVar3;
  if ((((*((byte *)GEN_TOP((*(int *)(iVar2 + 0xc) + 0x148))) & 2) != 0) &&
      (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 0x10) + 0x6e))), (bVar1 & 1) != 0)) && ((bVar1 & 2) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 4))))(iVar2 + 4);
    F_005662b0((undefined *)(iVar2 + 4),param_1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 8))))(iVar2 + 4);
  }
  return *(uint *)(iVar2 + 0xa8);
}

/* ref: FUN_00576a60 */
uint F_00576a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x576a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = REFG(undefined4, 0x108cc50);
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x13c);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 0x24))))(iVar2 + 4,this,param_1);
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0xbc) = uVar3;
  if ((((*((byte *)GEN_TOP((*(int *)(iVar2 + 0xc) + 0x148))) & 2) != 0) &&
      (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 0x10) + 0x6e))), (bVar1 & 1) != 0)) && ((bVar1 & 2) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 4))))(iVar2 + 4);
    F_00566640((undefined *)(iVar2 + 4),param_1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 4) + 8))))(iVar2 + 4);
  }
  return *(uint *)(iVar2 + 0xa8);
}

/* ref: FUN_00576af0 */
ushort F_00576af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x576af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (((*(uint *)((int)this + 0x9c) & 0x2000000) != 0) && ((*(byte *)((int)this + 0x148) & 2) != 0))
  {
    iVar1 = *(int *)((int)this + 0x13c);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7d4) + 0x14))))(iVar1 + 0x7d4,this,param_1);
    if ((*((byte *)GEN_TOP((*(int *)(iVar1 + 0x7dc) + 0x148))) & 2) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7d4) + 4))))(iVar1 + 0x7d4);
      F_00567030((undefined *)(iVar1 + 0x7d4),param_1);
    }
    return *(ushort *)(iVar1 + 0x7e0);
  }
  return 0;
}

/* ref: FUN_00576b70 */
uint F_00576b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x576b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (((*(uint *)((int)this + 0x9c) & 0x2000000) != 0) && ((*(byte *)((int)this + 0x148) & 2) != 0))
  {
    iVar1 = *(int *)((int)this + 0x13c);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7d4) + 0x14))))(iVar1 + 0x7d4,this,param_1);
    if ((*((byte *)GEN_TOP((*(int *)(iVar1 + 0x7dc) + 0x148))) & 2) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7d4) + 4))))(iVar1 + 0x7d4);
      F_00567170((undefined *)(iVar1 + 0x7d4),param_1);
    }
    return (uint)*(ushort *)(iVar1 + 0x7e0);
  }
  return 0;
}

/* ref: FUN_00576bf0 */
uint F_00576bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x576bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (((*(uint *)((int)this + 0x9c) & 0x2000000) != 0) && ((*(byte *)((int)this + 0x148) & 2) != 0))
  {
    iVar1 = *(int *)((int)this + 0x13c);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7e4) + 0x14))))(iVar1 + 0x7e4,this,param_1);
    if ((*((byte *)GEN_TOP((*(int *)(iVar1 + 0x7ec) + 0x148))) & 2) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7e4) + 4))))(iVar1 + 0x7e4);
      F_00567030((undefined *)(iVar1 + 0x7e4),param_1);
    }
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = *(undefined2 *)(iVar1 + 0x7f4);
    }
    return *(uint *)(iVar1 + 0x7f0);
  }
  return 0;
}

/* ref: FUN_00576c80 */
uint F_00576c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x576c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (((*(uint *)((int)this + 0x9c) & 0x2000000) != 0) && ((*(byte *)((int)this + 0x148) & 2) != 0))
  {
    iVar1 = *(int *)((int)this + 0x13c);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7e4) + 0x14))))(iVar1 + 0x7e4,this,param_1);
    if ((*((byte *)GEN_TOP((*(int *)(iVar1 + 0x7ec) + 0x148))) & 2) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x7e4) + 4))))(iVar1 + 0x7e4);
      F_00567170((undefined *)(iVar1 + 0x7e4),param_1);
    }
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = *(undefined2 *)(iVar1 + 0x7f4);
    }
    return *(uint *)(iVar1 + 0x7f0);
  }
  return 0;
}

/* ref: FUN_00576d10 */
uint F_00576d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x576d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  float fVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined * _Dst;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int * piVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_44;
  float local_3c;
  float local_38;
  int local_10;
  float local_c;
  float local_8;
  
  uVar10 = (*(uint *)&gen_args[2]);
  uVar6 = REFG(undefined4, 0x108cc50);
  local_10 = 0;
  local_c = 0.0;
  local_8 = 0.0;
  if ((*(byte *)((*(int *)&gen_args[0]) + 0x148) & 2) == 0) {
    return 0;
  }
  iVar8 = *(int *)((*(int *)&gen_args[0]) + 0x13c);
  if ((*(uint *)&gen_args[2]) == 0) {
    local_3c = 0.0;
    local_38 = 0.0;
  }
  else {
    piVar9 = (int *)(iVar8 + 0x144);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar8 + 0x144) + 0x24))))(piVar9,(*(int *)&gen_args[0]),(*(uint *)&gen_args[2]));
    *(undefined1 *)(iVar8 + 0x2a8) = 0;
    *(undefined4 *)(iVar8 + 0x1f8) = 0;
    *(undefined4 *)(iVar8 + 0x1fc) = uVar6;
    if ((((*((byte *)GEN_TOP((*(int *)(iVar8 + 0x14c) + 0x148))) & 2) != 0) &&
        (bVar2 = *((byte *)GEN_TOP((*(int *)(iVar8 + 0x150) + 0x6e))), (bVar2 & 1) != 0)) && ((bVar2 & 2) != 0)
       ) {
      ((code *)*(gen_code32 *)(*piVar9 + 4))(piVar9);
      F_005662b0(piVar9,uVar10);
      ((code *)*(gen_code32 *)(*piVar9 + 8))(piVar9);
    }
    local_3c = *(float *)(iVar8 + 0x284);
    local_38 = *(float *)(iVar8 + 0x288);
  }
  fVar11 = F_005580e0((*(int *)&gen_args[0]),*(float *)((*(int *)&gen_args[0]) + 0x74),1);
  fVar12 = F_005581b0((*(int *)&gen_args[0]),*(float *)((*(int *)&gen_args[0]) + 0x74),0);
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(*(*(float * PTR32 *)&gen_args[1]));
  fVar13 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float)GEN_TOF(((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[2])) - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))))) * fVar13 +
                 ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))))));
  switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits((*(float * PTR32 *)&gen_args[1])[4]))) {
  case 0: ;
  case 1: ;
  case 2: ;
    local_8 = (*(float * PTR32 *)&gen_args[1])[1];
    goto switchD_00576e33_default;
  case 3: ;
  case 4: ;
  case 5: ;
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(((float)GEN_TOF(((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[3])) - ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[1]))) * fVar13 +
                                       ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[1]))))));
    fVar14 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) - (float10)local_38 * fVar13;
    break;
  case 6: ;
  case 7: ;
  case 8: ;
    fVar14 = ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[3])) - (float10)local_38;
    break;
  default: ;
    goto switchD_00576e33_default;
  }
  local_8 = (float)fVar14;
switchD_00576e33_default: ;
  iVar8 = (int)(short)(*(int *)&gen_args[4]);
  if (!((float)iVar8 < local_8)) {
    if (((*(uint *)((*(int *)&gen_args[0]) + 0x9c) & 0x2000000) != 0) && ((*(byte *)((*(int *)&gen_args[0]) + 0x148) & 2) != 0)) {
      uVar4 = *(uint *)((*(int *)&gen_args[0]) + 0x13c);
      piVar9 = (int *)(uVar4 + 0x7d4);
      (*(uint *)&gen_args[2]) = uVar4;
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar4 + 0x7d4) + 0x14))))(piVar9,(*(int *)&gen_args[0]),uVar10);
      if ((*((byte *)GEN_TOP((*(int *)(uVar4 + 0x7dc) + 0x148))) & 2) != 0) {
        ((code *)*(gen_code32 *)(*piVar9 + 4))(piVar9);
        F_00567030(piVar9,uVar10);
      }
      uVar3 = *(ushort *)((*(uint *)&gen_args[2]) + 0x7e0);
      if (uVar3 != 0) {
        _Dst = *((undefined * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0xf0) + 0x2c)));
        (*(uint *)&gen_args[2]) = 0;
        if (uVar3 == 0xffffffff) {
          return 0xffffffff;
        }
        iVar7 = (int)(short)(*(uint *)&gen_args[3]);
        do {
          (*(int *)&gen_args[4]) = 0;
          (*(uint *)&gen_args[3]) = 0;
          F_00c48350(_Dst,0,0x2000);
          if ((ushort)(*(uint *)&gen_args[2]) == uVar3) {
            F_00c4d9ef(_Dst,0x2000,uVar10,0xffffffff);
          }
          else {
            if (((*(uint *)((*(int *)&gen_args[0]) + 0x9c) & 0x2000000) == 0) ||
               ((*(byte *)((*(int *)&gen_args[0]) + 0x148) & 2) == 0)) {
              (*(int *)&gen_args[4]) = 0;
            }
            else {
              iVar5 = *(int *)((*(int *)&gen_args[0]) + 0x13c);
              piVar9 = (int *)(iVar5 + 0x7e4);
              (*(int *)&gen_args[4]) = iVar5;
              ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar5 + 0x7e4) + 0x14))))(piVar9,(*(int *)&gen_args[0]),uVar10);
              if ((*((byte *)GEN_TOP((*(int *)(iVar5 + 0x7ec) + 0x148))) & 2) != 0) {
                ((code *)*(gen_code32 *)(*piVar9 + 4))(piVar9);
                F_00567030(piVar9,uVar10);
              }
              (*(uint *)&gen_args[3]) = (uint)*(ushort *)((*(int *)&gen_args[4]) + 0x7f4);
              (*(int *)&gen_args[4]) = *(int *)((*(int *)&gen_args[4]) + 0x7f0);
            }
            F_00c46aa0(_Dst,uVar10,(*(int *)&gen_args[4]) - uVar10);
          }
          uVar6 = REFG(undefined4, 0x108cc50);
          local_44 = REFG(float, 0x10a0da0);
          if ((*(byte *)((*(int *)&gen_args[0]) + 0x148) & 2) != 0) {
            iVar5 = *(int *)((*(int *)&gen_args[0]) + 0x13c);
            if (_Dst == (undefined *)0x0) {
              local_44 = 0.0;
            }
            else {
              piVar9 = (int *)(iVar5 + 0x144);
              ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar5 + 0x144) + 0x24))))(piVar9,(*(int *)&gen_args[0]),_Dst);
              *(undefined1 *)(iVar5 + 0x2a8) = 0;
              *(undefined4 *)(iVar5 + 0x1f8) = 0;
              *(undefined4 *)(iVar5 + 0x1fc) = uVar6;
              if ((((*((byte *)GEN_TOP((*(int *)(iVar5 + 0x14c) + 0x148))) & 2) != 0) &&
                  (bVar2 = *((byte *)GEN_TOP((*(int *)(iVar5 + 0x150) + 0x6e))), (bVar2 & 1) != 0)) &&
                 ((bVar2 & 2) != 0)) {
                ((code *)*(gen_code32 *)(*piVar9 + 4))(piVar9);
                F_005662b0(piVar9,_Dst);
                ((code *)*(gen_code32 *)(*piVar9 + 8))(piVar9);
              }
              local_44 = *(float *)(iVar5 + 0x284);
            }
          }
          uVar6 = REFG(undefined4, 0x108cc50);
          switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits((*(float * PTR32 *)&gen_args[1])[4]))) {
          case 0: ;
          case 3: ;
          case 6: ;
            local_c = *(*(float * PTR32 *)&gen_args[1]);
            break;
          case 1: ;
          case 4: ;
          case 7: ;
            fVar13 = (float10)fVar1 - (float10)local_44 * (float10)REFG(double, 0x1088108);
            goto LAB_005770e1;
          case 2: ;
          case 5: ;
          case 8: ;
            fVar13 = ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[2])) - (float10)local_44;
LAB_005770e1: ;
            local_c = (float)fVar13;
          }
          iVar5 = *(int *)((*(int *)&gen_args[0]) + 0x13c);
          piVar9 = (int *)(iVar5 + 0x654);
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar5 + 0x654) + 0x24))))(piVar9,(*(int *)&gen_args[0]),_Dst);
          *(float *)(iVar5 + 0x7bc) = local_c;
          *(float *)(iVar5 + 0x7c0) = local_8;
          *(float *)(iVar5 + 0x7c4) = (float)iVar7;
          *(float *)(iVar5 + 0x7c8) = (float)iVar8;
          *(undefined4 *)(iVar5 + 0x7cc) = 0;
          *(undefined2 *)(iVar5 + 2000) = 0;
          *(undefined4 *)(iVar5 + 0x708) = 0;
          *(undefined4 *)(iVar5 + 0x70c) = uVar6;
          if ((((*((byte *)GEN_TOP((*(int *)(iVar5 + 0x65c) + 0x148))) & 2) != 0) &&
              (bVar2 = *((byte *)GEN_TOP((*(int *)(iVar5 + 0x660) + 0x6e))), (bVar2 & 1) != 0)) &&
             ((bVar2 & 2) != 0)) {
            ((code *)*(gen_code32 *)(*piVar9 + 4))(piVar9);
            F_005662b0(piVar9,_Dst);
            ((code *)*(gen_code32 *)(*piVar9 + 8))(piVar9);
          }
          if (*(char *)(iVar5 + 0x7d1) != '\0') {
            return *(int *)(iVar5 + 0x7cc) + local_10;
          }
          fVar13 = (float10)local_8;
          local_10 = local_10 + *(int *)(iVar5 + 0x7cc);
          if ((fVar13 <= (float10)iVar8) &&
             ((float10)iVar8 < ((float10)(float)fVar11 + fVar13) + (float10)(float)fVar12)) {
            return 0xffffffff;
          }
          uVar10 = ((*(uint *)&gen_args[3]) & 0xffff) + (*(int *)&gen_args[4]);
          (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 1;
          local_8 = ((float)GEN_TOF((((float10)(float)fVar12 + (float10)(float)fVar11) + fVar13)));
          if (uVar3 + 1 <= ((*(uint *)&gen_args[2]) & 0xffff)) {
            return 0xffffffff;
          }
        } while( true );
      }
      fVar13 = (float10)REFG(double, 0x1088108);
    }
    switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits((*(float * PTR32 *)&gen_args[1])[4]))) {
    case 0: ;
    case 3: ;
    case 6: ;
      local_c = *(*(float * PTR32 *)&gen_args[1]);
      break;
    case 1: ;
    case 4: ;
    case 7: ;
      local_c = (float)((float10)fVar1 - (float10)local_3c * fVar13);
      break;
    case 2: ;
    case 5: ;
    case 8: ;
      local_c = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[2])) - (float10)local_3c)));
    }
    (*(float * PTR32 *)&gen_args[1]) = ((float *)GEN_TOP(((uint)(*(float * PTR32 *)&gen_args[1]) & 0xffffff)));
    uVar10 = F_00570990(*(undefined4 *)((*(int *)&gen_args[0]) + 0x13c),(int)&(*(float * PTR32 *)&gen_args[1]) + 3,(*(int *)&gen_args[0]),1,local_c,
                          local_8,uVar10,(*(uint *)&gen_args[3]),(*(int *)&gen_args[4]),0,REFG(undefined4, 0x108cc50));
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(float * PTR32 *)&gen_args[1]) + 3)))) != '\0') {
      return uVar10;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_005772f0 */
uint F_005772f0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5772f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = REFG(undefined4, 0x108cc50);
  if ((*(byte *)(param_1 + 0x148) & 2) == 0) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(param_1 + 0x13c);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x654) + 0x24))))(iVar2 + 0x654,param_1,param_4);
  *(float *)(iVar2 + 0x7bc) = param_2;
  *(float *)(iVar2 + 0x7c0) = param_3;
  *(float *)(iVar2 + 0x7c4) = (float)(int)(short)param_5;
  *(undefined4 *)(iVar2 + 0x7cc) = 0;
  *(undefined2 *)(iVar2 + 2000) = 0;
  *(undefined4 *)(iVar2 + 0x708) = 0;
  *(float *)(iVar2 + 0x7c8) = (float)(int)(short)param_6;
  *(undefined4 *)(iVar2 + 0x70c) = uVar3;
  if ((((*((byte *)GEN_TOP((*(int *)(iVar2 + 0x65c) + 0x148))) & 2) != 0) &&
      (bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 0x660) + 0x6e))), (bVar1 & 1) != 0)) && ((bVar1 & 2) != 0))
  {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x654) + 4))))(iVar2 + 0x654);
    F_005662b0((undefined *)(iVar2 + 0x654),param_4);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x654) + 8))))(iVar2 + 0x654);
  }
  if (*(char *)(iVar2 + 0x7d1) != '\0') {
    return *(uint *)(iVar2 + 0x7cc);
  }
  return 0xffffffff;
}

/* ref: FUN_00577400 */
uint F_00577400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x577400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((*(byte *)((int)this + 0x148) & 2) == 0) {
    return 0;
  }
  uVar1 = F_00570b20(*(undefined * PTR32 *)((int)this + 0x13c),this,param_1,param_2);
  return uVar1;
}

