#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00bcb620 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcb620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbcb620u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined * _Dst;
  ushort * puVar10;
  short * psVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  *(byte *)(param_1 + 10) = (byte)(*(int *)&gen_args[0]);
  uVar5 = (uint)(byte)(*(int *)&gen_args[0]);
  bVar14 = (byte)(*(int *)&gen_args[0]) != 0;
  (*(undefined2 *)((char *)&(*(int *)&gen_args[0]) + 0)) = 0;
  uVar4 = (ushort)(*(int *)&gen_args[0]);
  if (bVar14) {
    psVar11 = (short *)&REFG(undefined4, 0x1342d68);
    do {
      uVar4 = uVar4 + *psVar11;
      psVar11 = psVar11 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = (uint)uVar4;
  *param_1 = uVar4;
  puVar6 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar5 * 0x48) | uVar5 * 0x48 + 4,0,0)));
  if (puVar6 == ((uint *)GEN_TOP(0x0))) {
    puVar7 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar7 = puVar6 + 1;
    *puVar6 = uVar5;
    puVar6 = puVar7;
    uVar8 = uVar5;
    while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
      F_00c20790(puVar6 GEN_EDX_ARG);
      puVar6 = puVar6 + 0x12;
    }
  }
  *(uint * PTR32 *)(param_1 + 2) = puVar7;
  uVar8 = F_00406bb0(uVar5 * 0x20,0,0);
  *(uint *)(param_1 + 4) = uVar8;
  uVar8 = F_00406bb0(uVar5 * 0x20,0,0);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  *(uint *)(param_1 + 6) = uVar8;
  uVar8 = 0;
  if (3 < uVar5) {
    (*(int *)&gen_args[0]) = (uVar5 - 4 >> 2) + 1;
    iVar12 = 0;
    uVar8 = (*(int *)&gen_args[0]) * 4;
    do {
      iVar13 = *(int *)(param_1 + 6);
      *((undefined4 *)GEN_TOP((iVar13 + iVar12))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar13 + 4 + iVar12))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar13 + 8 + iVar12))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar13 + 0x10 + iVar12))) = uVar2;
      *((undefined4 *)GEN_TOP((iVar13 + 0x14 + iVar12))) = uVar2;
      *((undefined4 *)GEN_TOP((iVar13 + 0x18 + iVar12))) = uVar2;
      iVar13 = *(int *)(param_1 + 6);
      *((undefined4 *)GEN_TOP((iVar12 + 0x20 + iVar13))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar12 + 0x24 + iVar13))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar12 + 0x28 + iVar13))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar12 + 0x30 + iVar13))) = uVar2;
      *((undefined4 *)GEN_TOP((iVar12 + 0x34 + iVar13))) = uVar2;
      *((undefined4 *)GEN_TOP((iVar12 + iVar13 + 0x38))) = uVar2;
      iVar13 = *(int *)(param_1 + 6);
      *((undefined4 *)GEN_TOP((iVar12 + 0x40 + iVar13))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar12 + 0x44 + iVar13))) = uVar1;
      iVar13 = iVar12 + 0x40 + iVar13;
      *((undefined4 *)GEN_TOP((iVar13 + 8))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar13 + 0x10))) = uVar2;
      *((undefined4 *)GEN_TOP((iVar13 + 0x14))) = uVar2;
      *((undefined4 *)GEN_TOP((iVar13 + 0x18))) = uVar2;
      puVar9 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 6) + iVar12 + 0x60)));
      *puVar9 = uVar1;
      puVar9[1] = uVar1;
      puVar9[2] = uVar1;
      puVar9[4] = uVar2;
      iVar12 = iVar12 + 0x80;
      (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) - 1;
      puVar9[5] = uVar2;
      puVar9[6] = uVar2;
    } while ((*(int *)&gen_args[0]) != 0);
  }
  if (uVar8 < uVar5) {
    iVar12 = uVar8 << 5;
    iVar13 = uVar5 - uVar8;
    do {
      puVar9 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 6) + iVar12)));
      *puVar9 = uVar1;
      puVar9[1] = uVar1;
      puVar9[2] = uVar1;
      iVar12 = iVar12 + 0x20;
      iVar13 = iVar13 - 1;
      puVar9[4] = uVar2;
      puVar9[5] = uVar2;
      puVar9[6] = uVar2;
    } while (iVar13 != 0);
  }
  uVar5 = (*param_1 + 0xff & 0xffffff00) >> 5;
  param_1[0xb] = (ushort)uVar5;
  _Dst = ((undefined *)GEN_TOP(F_00406bb0(uVar5 * 4,0,0)));
  *(undefined * PTR32 *)(param_1 + 8) = _Dst;
  F_00c48350(_Dst,0,(uint)param_1[0xb] * 4);
  F_00bcac30(param_1 GEN_EDX_ARG,(*(float *)&gen_args[1]));
  uVar5 = 0;
  puVar10 = param_1 + 0x40;
  do {
    puVar10[0x7fa] = (ushort)uVar5;
    *(undefined4 *)puVar10 = *(undefined4 *)(param_1 + 0x190040);
    *(int *)(param_1 + 0x190042) = *(int *)(param_1 + 0x190042) + 1;
    *(ushort * PTR32 *)(param_1 + 0x190040) = puVar10;
    uVar5 = uVar5 + 1;
    puVar10 = puVar10 + 0x800;
  } while (uVar5 < 800);
  bVar3 = F_00bcc190(param_1 + 0x190058 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x24))));
  if (bVar3 == 0) {
    return 0;
  }
  puVar6 = (uint *)(param_1 + 0x19005e);
  uVar5 = _InterlockedExchangeAdd((volatile gen_long *)(puVar6), (gen_long)(1));
  if (*(uint *)(param_1 + 0x19005c) <= uVar5) {
    param_1[0x19008c] = 0;
    param_1[0x19008d] = 0;
    return 0;
  }
  iVar12 = *(int *)(param_1 + 0x19005a) + uVar5 * 0x14;
  *(int *)(param_1 + 0x19008c) = iVar12;
  return iVar12 != 0;
}

/* ref: Global::Finalize_00bcb930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcb930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcb930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  ushort uVar4;
  ulonglong uVar5;
  
  F_00bcc2f0(((undefined *)GEN_TOP(((int)this + 0x3200b0))) GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = 0;
    if (*(short *)this != 0) {
      do {
        F_00c20860(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + (uint)uVar4 * 0x48))) GEN_EDX_ARG);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)this);
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      iVar2 = *((int *)GEN_TOP((iVar1 - 4)));
      this_00 = ((undefined *)GEN_TOP((iVar1 + iVar2 * 0x48)));
      while (iVar2 = iVar2 - 1, -1 < iVar2) {
        this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x48)));
        F_00c207d0(this_00 GEN_EDX_ARG);
      }
      F_00406b30(iVar1 - 4);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    }
  }
  *(undefined2 *)this = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 8))));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar5 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x10))));
    uVar3 = (uint)uVar5;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  return uVar3;
}

/* ref: FUN_00bcb9f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcb9f0(GEN_P(ushort * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcb9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  ushort uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int * piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  uVar1 = param_1[0xb];
  iVar10 = *(int *)(param_1 + 0x19008c);
  (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP(0x0));
  if ((param_2 == '\0') || ((param_1[0x19008e] & 0x3f) != 0)) {
    bVar6 = false;
  }
  else {
    piVar11 = *(int * PTR32 *)(param_1 + 2);
    bVar6 = true;
    if ((piVar11[1] - *piVar11 >> 2) + (piVar11[9] - piVar11[8] >> 2) +
        (piVar11[5] - piVar11[4] >> 2) != 0) {
      **(uint * PTR32 *)(param_1 + 8) = **(uint * PTR32 *)(param_1 + 8) | 1;
    }
  }
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (uVar1 != 0) {
    (*(int *)(gen_frame + 0x34)) = 0;
    do {
      uVar12 = *((uint *)GEN_TOP((*(int *)(param_1 + 8) + (*(uint *)(gen_frame + 0x28)) * 4)));
      if (uVar12 != 0) {
        uVar13 = 0;
        (*(uint *)(gen_frame + 0x38)) = 1;
        do {
          if (((*(uint *)(gen_frame + 0x38)) & uVar12) != 0) {
            if (7 < *((uint *)GEN_TOP((iVar10 + 8)))) {
              if (*((uint * PTR32 *)GEN_TOP((iVar10 + 0x10))) != ((uint *)GEN_TOP(0x0))) {
                **((uint * PTR32 *)GEN_TOP((iVar10 + 0x10))) = *((uint *)GEN_TOP((iVar10 + 8)));
              }
              uVar9 = F_00bcc530(*((undefined * PTR32 *)GEN_TOP((iVar10 + 0xc))) GEN_EDX_FWD);
              *((uint *)GEN_TOP((iVar10 + 0x10))) = uVar9;
              *((uint *)GEN_TOP((iVar10 + 4))) = uVar9 + 0x10;
              *((undefined4 *)GEN_TOP((iVar10 + 8))) = 0;
            }
            iVar2 = *((int *)GEN_TOP((iVar10 + 8)));
            *((int *)GEN_TOP((iVar10 + 8))) = iVar2 + 1;
            (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x30)) + 1)));
            *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 4))) + iVar2 * 4))) = (*(int *)(gen_frame + 0x34)) + uVar13;
          }
          uVar13 = uVar13 + 1;
          (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x38)) < 0);
        } while (uVar13 < 0x20);
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + (*(uint *)(gen_frame + 0x28)) * 4))) = 0;
      }
      (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x20;
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
    } while ((*(uint *)(gen_frame + 0x28)) < uVar1);
  }
  F_00bcc3a0(param_1 + 0x190058 GEN_EDX_ARG,param_1,((code *)REFP(0xbca920)),1);
  uVar8 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  if ((*(int * PTR32 *)(gen_frame + 0x30)) != ((int *)GEN_TOP(0x0))) {
    uVar12 = (uint)!bVar6;
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4)) = REFG(float, 0x1090998);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0)) = REFG(float, 0x1090998);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8)) = REFG(float, 0x1090998);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 12)) = REFG(float, 0x1090998);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = REFG(float, 0x1097b10);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = REFG(float, 0x1097b10);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8)) = REFG(float, 0x1097b10);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 12)) = REFG(float, 0x1097b10);
    if (uVar12 < *param_1) {
      (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP((*(int *)(param_1 + 2) + uVar12 * 0x48)));
      piVar11 = (*(int * PTR32 *)(gen_frame + 0x30)) + 5;
      iVar10 = uVar12 << 5;
      (*(uint *)(gen_frame + 0x28)) = *param_1 - uVar12;
      uVar14 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
      uVar15 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
      uVar16 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
      uVar17 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
      uVar18 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
      uVar19 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
      uVar20 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
      uVar21 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
      do {
        if ((piVar11[4] - piVar11[3] >> 2) + (*piVar11 - piVar11[-1] >> 2) +
            (piVar11[-4] - *(*(int * PTR32 *)(gen_frame + 0x30)) >> 2) != 0) {
          (*(undefined4 *)((char *)&auVar4 + 4)) = uVar15;
          (*(undefined4 *)((char *)&auVar4 + 0)) = uVar14;
          (*(undefined4 *)((char *)&auVar4 + 8)) = uVar16;
          (*(undefined4 *)((char *)&auVar4 + 12)) = uVar17;
          gen_minps(((undefined1 *)(gen_frame + 0x10)), (*(int *)(param_1 + 4) + iVar10), &(auVar4));
          uVar14 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
          uVar15 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
          uVar16 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
          uVar17 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 12));
          (*(undefined4 *)((char *)&auVar5 + 4)) = uVar19;
          (*(undefined4 *)((char *)&auVar5 + 0)) = uVar18;
          (*(undefined4 *)((char *)&auVar5 + 8)) = uVar20;
          (*(undefined4 *)((char *)&auVar5 + 12)) = uVar21;
          gen_maxps(((undefined1 *)(gen_frame + 0x0)), (*(int *)(param_1 + 4) + 0x10 + iVar10), &(auVar5));
          uVar18 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
          uVar19 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
          uVar20 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
          uVar21 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 12));
        }
        (*(int * PTR32 *)(gen_frame + 0x30)) = (*(int * PTR32 *)(gen_frame + 0x30)) + 0x12;
        piVar11 = piVar11 + 0x12;
        iVar10 = iVar10 + 0x20;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
      } while ((*(uint *)(gen_frame + 0x28)) != 0);
    }
    *(undefined4 *)(param_1 + 0x190048) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
    *(undefined4 *)(param_1 + 0x19004a) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
    *(undefined4 *)(param_1 + 0x19004c) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
    *(undefined4 *)(param_1 + 0x190050) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
    *(undefined4 *)(param_1 + 0x190052) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
    *(undefined4 *)(param_1 + 0x190054) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
  }
  puVar3 = *(undefined4 * PTR32 *)(param_1 + 4);
  *puVar3 = uVar8;
  puVar3[1] = uVar8;
  puVar3[2] = uVar8;
  iVar10 = *(int *)(param_1 + 4);
  *((undefined4 *)GEN_TOP((iVar10 + 0x10))) = uVar7;
  *((undefined4 *)GEN_TOP((iVar10 + 0x14))) = uVar7;
  *((undefined4 *)GEN_TOP((iVar10 + 0x18))) = uVar7;
  puVar3 = *(undefined4 * PTR32 *)(param_1 + 6);
  *puVar3 = uVar8;
  puVar3[1] = uVar8;
  puVar3[2] = uVar8;
  uVar12 = *(uint *)(param_1 + 6);
  *((undefined4 *)GEN_TOP((uVar12 + 0x10))) = uVar7;
  *((undefined4 *)GEN_TOP((uVar12 + 0x14))) = uVar7;
  *((undefined4 *)GEN_TOP((uVar12 + 0x18))) = uVar7;
  *(int *)(param_1 + 0x19008e) = *(int *)(param_1 + 0x19008e) + 1;
  return uVar12;
}

/* ref: Client::Graphics::JobSystem::JobQueue::Initialize_00bcbd10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcbd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcbd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 8;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  return 1;
}

/* ref: Global::InvokeDelegate_00bcbd60 */
GEN_OWN GEN_FRAME uint F_00bcbd60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbcbd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: Vector2::AddAssign */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcbd80(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcbd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  return (uint)in_ecx;
}

/* ref: Vector2::SubtractAssign */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcbda0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcbda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  return (uint)in_ecx;
}

/* ref: FUN_00bcbdc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcbdc0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcbdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  return (uint)in_ecx;
}

/* ref: FUN_00bcbde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcbde0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcbde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Culling::CullingGridManager::GetLevelDivisions */
GEN_OWN GEN_FRAME ushort GEN_STDCALL F_00bcbe30(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbcbe30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  return (&REFG(undefined2, 0x1106418))[(int)(param_1)];
}

/* ref: Client::Graphics::Culling::CullingGridManager::ToGridSpace */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcbe50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbcbe50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  
  fVar1 = *((float *)GEN_TOP((in_ecx + 0x20)));
  *param_2 = (float)((float10)fVar1 + (float10)*param_3);
  param_2[1] = (float)((float10)fVar1 + (float10)param_3[1]);
  return (uint)param_2;
}

/* ref: Client::Graphics::Culling::CullingGridManager::GetCell */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcbe80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcbe80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (uint)(ushort)param_2 * 0x1000 + 0x80 + in_ecx;
}

/* ref: Client::Graphics::Culling::CullingGridManager::GetCellIndex */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bcbea0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbcbea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  return (uint)(ushort)((&REFG(undefined2, 0x1106418))[(int)(param_3)] * (short)param_2 +
                        *(short *)(&REFG(undefined, 0x14c5a14) + (uint)param_3 * 2) + (short)param_1);
}

/* ref: Global::VectorDeletingDestructor_00bcbee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcbee0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcbee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  undefined * this;
  
  if ((param_2 & 2) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)param_1 - 4)));
    iVar2 = *piVar1;
    this = ((undefined *)GEN_TOP(((int)param_1 + iVar2 * 0x48)));
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this = ((undefined *)GEN_TOP(((int)this - 0x48)));
      F_00c207d0(this GEN_EDX_FWD);
    }
    if ((param_2 & 1) != 0) {
      F_00406b30(piVar1);
    }
    return (uint)piVar1;
  }
  F_00c207d0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::JobSystem::RunJobs_00bcbf60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bcbf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcbf60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  pcVar3 = *((gen_code32 *)GEN_TOP(((int)this + 0x18)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x5c)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x60)));
  uVar7 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = ((uint *)GEN_TOP(((int)this + 0x60)));
    uVar7 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  }
  uVar7 = *((int *)GEN_TOP(((int)this + 0x5c))) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *((uint *)GEN_TOP((iVar4 + iVar8)));
  puVar1 = ((uint *)GEN_TOP(((int)this + 100)));
  uVar7 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = ((uint *)GEN_TOP(((int)this + 100)));
    uVar7 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  }
  return 0;
}

/* ref: Global::InitDelegate */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcc030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbcc030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xbcbd60));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: Global::FreeMemory_00bcc050 */
GEN_OWN GEN_FRAME uint F_00bcc050(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbcc050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeMemory_00bcc070 */
GEN_OWN GEN_FRAME uint F_00bcc070(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbcc070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::AllocMemoryAligned16 */
GEN_OWN GEN_FRAME uint F_00bcc090(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbcc090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::FreeMemory_00bcc0b0 */
GEN_OWN GEN_FRAME uint F_00bcc0b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbcc0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeMemory_00bcc0d0 */
GEN_OWN GEN_FRAME uint F_00bcc0d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbcc0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::JobSystem::WorkerEntry_00bcc130 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bcc130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbcc130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00bcbf60(this GEN_EDX_FWD);
  return;
}

/* ref: Global::AllocMemoryAligned16_00bcc140 */
GEN_OWN GEN_FRAME uint F_00bcc140(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbcc140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: JobSystem_VCullingGridManager_Culling_Graphics_Client_UCullingGridJob::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcc160(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcc160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1106438));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::JobSystem::Initialize_00bcc190 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcc190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbcc190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * PTR32 * ppiVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x2));
  ppiVar2 = &(*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) < 3) {
    ppiVar2 = &(*(int * PTR32 *)(gen_frame + 0x14));
  }
  piVar9 = *ppiVar2;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[0]) = piVar9;
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
    (*(int *)(gen_frame + 0x10)) = *piVar8;
    uVar6 = -(uint)((int)(ZEXT48(piVar9) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar9) * 0x14);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar8 + 8)));
    puVar3 = ((uint *)GEN_TOP((*pcVar1)(piVar8,-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    piVar9 = (*(int * PTR32 *)&gen_args[0]);
  }
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    puVar4 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = (uint)piVar9;
    puVar3 = puVar4;
    piVar8 = piVar9;
    while (piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1))), -1 < (int)piVar8) {
      *puVar3 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x1106430));
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    piVar8 = piVar9;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 4))) + iVar7;
      iVar7 = iVar7 + 0x14;
      piVar8 = ((int *)GEN_TOP(((int)piVar8 - 1)));
      *((undefined4 *)GEN_TOP((iVar5 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 8))) = 8;
      *((undefined * PTR32 *)GEN_TOP((iVar5 + 0xc))) = this;
      *((undefined4 *)GEN_TOP((iVar5 + 0x10))) = 0;
    } while (piVar8 != ((int *)GEN_TOP(0x0)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0xbcbd60));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0xbcc130));
    uVar6 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),0,(int)piVar9 - 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: Client::Graphics::JobSystem::Finalize_00bcc2f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcc2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcc2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 4)));
      *((undefined4 *)GEN_TOP((uVar3 + 0x10 + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((uVar3 + 0xc + iVar2))) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: Client::Graphics::JobSystem::Execute */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bcc3a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbcc3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 8)));
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 0x10 + iVar2)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 100))) = 0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))));
    F_00bcbf60(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x18))) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar4))) = 8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + iVar4))) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if (param_4 != '\0') {
    piVar5 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 0;
  }
  return 0;
}

/* ref: JobQueue_JobSystem_VCullingGridManager_Culling_Graphics_Client::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcc470(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcc470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1];
    puVar1 = param_1 - 1;
    puVar3 = param_1 + iVar2 * 5;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x1106430));
    }
    if (((param_2 & 1) != 0) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,puVar1);
    }
    return (uint)puVar1;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1106430));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::JobSystem::EnsureBlock_00bcc4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcc4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcc4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile gen_long *)(puVar2), (gen_long)(uVar5));
  return uVar4;
}

/* ref: Client::Graphics::JobSystem::AcquireJobBlock */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcc530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcc530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x5c)));
  uVar3 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  uVar6 = uVar3 >> 5;
  if (*((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
      do {
        iVar4 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,0x600,0x10);
    _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c))))), (gen_long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + uVar6 * 4 + 0x1c)));
}

/* ref: Client::Graphics::JobSystem::JobQueue::PushJob */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcc5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcc5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (7 < *((uint *)GEN_TOP(((int)this + 8)))) {
    if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((uint *)GEN_TOP(0x0))) {
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar2 = F_00bcc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + 0x10;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1 + 1;
  return *((int *)GEN_TOP(((int)this + 4))) + iVar1 * 4;
}

/* ref: Global::GetPackedIndex */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00bcc5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcc5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return (ushort)((ulonglong)(byte)((char)param_1 * '\n') < 0x40) *
         (short)(*(ulonglong *)((int)(uintptr_t)this) >> (ulonglong)(byte)((char)param_1 * '\n')) & 0x3ff;
}

/* ref: FUN_00bcc610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcc610(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbcc610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  uint uVar1;
  
  uVar1 = *((ushort *)GEN_TOP((param_1 + 6))) & 0x80ff;
  *((ushort *)GEN_TOP((param_1 + 6))) =
       *((ushort *)GEN_TOP((param_1 + 6))) >> 1 & 0x3f00 | (ushort)param_3 << 0xe | (ushort)uVar1;
  return uVar1;
}

/* ref: FUN_00bcc650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcc650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcc650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar3 = *((ushort *)GEN_TOP(((int)this + 6)));
  if (-1 < (short)uVar3) {
    uVar4 = uVar3 >> 1 & 0x3f00 | uVar3 & 0x80ff;
    *((short *)GEN_TOP(((int)this + 6))) = (short)uVar4;
    return uVar4;
  }
  bVar2 = 0;
  uVar1 = (ulonglong)(byte)((char)*((undefined4 *)GEN_TOP((REFG(undefined4, 0x1487c58) + 0x8014))) * '\n');
  uVar3 = (ushort)(uVar1 < 0x40) * (short)(*(ulonglong *)((int)(uintptr_t)this) >> uVar1) & 0x3ff;
  if (uVar3 != 0x3ff) {
    bVar2 = F_00b7e0f0(REFG(undefined4, 0x1487c58) GEN_EDX_FWD,(uint)uVar3);
    *((ushort *)GEN_TOP(((int)this + 6))) = *((ushort *)GEN_TOP(((int)this + 6))) & 0xff03;
  }
  uVar3 = *((ushort *)GEN_TOP(((int)this + 6)));
  if ((uVar3 & 0xfc) != 0) {
    *((ushort *)GEN_TOP(((int)this + 6))) = (uVar3 & 0xfc) - 4 | uVar3 & 0xff03;
  }
  uVar4 = *((ushort *)GEN_TOP(((int)this + 6))) & 0x80ff;
  *((ushort *)GEN_TOP(((int)this + 6))) =
       *((ushort *)GEN_TOP(((int)this + 6))) >> 1 & 0x3f00 | (ushort)bVar2 << 0xe | (ushort)uVar4;
  return uVar4;
}

/* ref: FUN_00bcc710 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcc710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcc710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  return 1;
}

/* ref: Global::RelocateBonePhysicsData */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcc740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbcc740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0x1000001) {
    iVar3 = *param_1;
    piVar1 = param_1 + 1;
    *(int *)this = iVar3;
    *((int * PTR32 *)GEN_TOP(((int)this + 4))) = piVar1;
    if (iVar3 != 0) {
      param_2 = 0;
      param_1 = ((int *)GEN_TOP(iVar3));
      do {
        iVar3 = *((int *)GEN_TOP(((int)this + 4))) + param_2;
        if (*((int *)GEN_TOP((iVar3 + 0x28))) != 0) {
          *((int *)GEN_TOP((iVar3 + 0x28))) = *((int *)GEN_TOP((iVar3 + 0x28))) + (int)piVar1;
        }
        if (*((int *)GEN_TOP((iVar3 + 0x2c))) != 0) {
          *((int *)GEN_TOP((iVar3 + 0x2c))) = *((int *)GEN_TOP((iVar3 + 0x2c))) + (int)piVar1;
        }
        if (*((int *)GEN_TOP((iVar3 + 0x30))) != 0) {
          *((int *)GEN_TOP((iVar3 + 0x30))) = *((int *)GEN_TOP((iVar3 + 0x30))) + (int)piVar1;
          uVar4 = (uint)*((byte *)GEN_TOP((iVar3 + 2)));
          if (uVar4 != 0) {
            iVar6 = 0;
            do {
              iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x30))) + 0x28 + iVar6)));
              iVar5 = *((int *)GEN_TOP((iVar3 + 0x30))) + iVar6;
              if (iVar2 != 0) {
                *((int *)GEN_TOP((iVar5 + 0x28))) = iVar2 + (int)piVar1;
              }
              if (*((int *)GEN_TOP((iVar5 + 0x2c))) != 0) {
                *((int *)GEN_TOP((iVar5 + 0x2c))) = *((int *)GEN_TOP((iVar5 + 0x2c))) + (int)piVar1;
              }
              iVar6 = iVar6 + 0x30;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
        }
        if (*((int *)GEN_TOP((iVar3 + 0x34))) != 0) {
          *((int *)GEN_TOP((iVar3 + 0x34))) = *((int *)GEN_TOP((iVar3 + 0x34))) + (int)piVar1;
        }
        if (*((int *)GEN_TOP((iVar3 + 0x38))) != 0) {
          *((int *)GEN_TOP((iVar3 + 0x38))) = *((int *)GEN_TOP((iVar3 + 0x38))) + (int)piVar1;
        }
        if (*((int *)GEN_TOP((iVar3 + 0x3c))) != 0) {
          *((int *)GEN_TOP((iVar3 + 0x3c))) = *((int *)GEN_TOP((iVar3 + 0x3c))) + (int)piVar1;
        }
        if (*((int *)GEN_TOP((iVar3 + 0x40))) != 0) {
          *((int *)GEN_TOP((iVar3 + 0x40))) = *((int *)GEN_TOP((iVar3 + 0x40))) + (int)piVar1;
        }
        if (*((int *)GEN_TOP((iVar3 + 0x44))) != 0) {
          *((int *)GEN_TOP((iVar3 + 0x44))) = *((int *)GEN_TOP((iVar3 + 0x44))) + (int)piVar1;
        }
        param_2 = param_2 + 0x48;
        param_1 = ((int *)GEN_TOP(((int)param_1 - 1)));
      } while (param_1 != ((int *)GEN_TOP(0x0)));
    }
    return 1;
  }
  return 0;
}

/* ref: Global::ReadBonePhysicsSections */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcc840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbcc840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  
  if (param_2 != 0x1000001) {
    return 0;
  }
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  puVar1 = param_1 + 2;
  if (*(byte *)this != 0) {
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar1;
    puVar1 = puVar1 + (uint)*(byte *)((int)(uintptr_t)this) * 0x1f;
  }
  if (*((byte *)GEN_TOP(((int)this + 1))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar1;
    puVar1 = puVar1 + (uint)*((byte *)GEN_TOP(((int)this + 1))) * 0x1d;
  }
  if (*((byte *)GEN_TOP(((int)this + 2))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar1;
    puVar1 = puVar1 + (uint)*((byte *)GEN_TOP(((int)this + 2))) * 0x17;
  }
  if (*((byte *)GEN_TOP(((int)this + 3))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = puVar1;
    puVar1 = puVar1 + (uint)*((byte *)GEN_TOP(((int)this + 3))) * 0x2a;
  }
  if (*((char *)GEN_TOP(((int)this + 4))) != '\0') {
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))) = puVar1;
  }
  return 1;
}

/* ref: FUN_00bcc8c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcc8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcc8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    F_00b5c650(*((int *)GEN_TOP(((int)this + 0x18))));
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
      F_00bc5400(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x20))));
      *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    }
    if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
      F_00bc5400(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x1c))));
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
    }
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
    if (*((int *)GEN_TOP((uVar1 + 0x404))) != 0) {
      *((int *)GEN_TOP((uVar1 + 0x404))) = *((int *)GEN_TOP((uVar1 + 0x404))) - 1;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bcc920 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcc920(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcc920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1106444));
  in_ecx[3] = 0;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00bcc960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcc960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcc960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xa60, 0, 4);
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa5c);
  (*(uint *)(gen_frame + 0xa58)) = uVar2;
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = *((uint *)GEN_TOP(((int)this_00 + 0x5c))) >> 1;
    if (((uVar3 & 1) == 0) ||
       (uVar2 = CONCAT31((uint3)(*((uint *)GEN_TOP(((int)this_00 + 0x5c))) >> 9),(char)uVar3) & 0xffffff01,
       (uVar3 & 1) == 0)) {
      bVar1 = F_00bcd860(this_00 GEN_EDX_FWD);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) {
        uVar2 = F_00bcd800(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        F_00b5c440(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        uVar3 = F_00bce180(uVar2);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = F_00bc52c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,3,uVar3,0xffffffff);
          *((uint *)GEN_TOP(((int)this + 0x20))) = uVar2;
        }
        *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 1;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00bcc9f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcc9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcc9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP(((int)this + 0xc))) != '\0') || (*((char *)GEN_TOP(((int)this + 0xd))) != '\0')) {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this_00 + 0x5c))) >> 1;
  if (((uVar2 & 1) != 0) && ((uVar2 & 1) != 0)) {
LAB_00bcca6c: ;
    *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 1;
    return 1;
  }
  bVar1 = F_00bcd860(this_00 GEN_EDX_FWD);
  if (bVar1 != 0) {
    return 0;
  }
  if (*((char *)GEN_TOP(((int)this + 0xe))) == '\0') {
    F_00bcc960(this GEN_EDX_ARG);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00c1ebd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
    if (bVar1 != 0) goto LAB_00bcca6c;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00c1ebd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
    if (bVar1 != 0) goto LAB_00bcca6c;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 1;
  return 1;
}

/* ref: FUN_00bccaa0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bccaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbccaa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((*((char *)GEN_TOP(((int)this + 0xc))) == '\0') && (*((char *)GEN_TOP(((int)this + 0xd))) == '\0')) &&
     (*((char *)GEN_TOP(((int)this + 0xe))) == '\0')) {
    F_00bcc960(this GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00bccac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bccac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbccac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = ((uint *)GEN_TOP(F_00ab2a20(param_1)));
  (*(uint * PTR32 *)(gen_frame + 0x8)) = puVar1;
  uVar2 = 0;
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
    iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1;
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_2;
    *((int *)GEN_TOP(((int)param_2 + 0x404))) = *((int *)GEN_TOP(((int)param_2 + 0x404))) + 1;
    (*(int *)(gen_frame + 0x0)) = iVar3;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x746d62;
    uVar2 = F_00b5e210(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),1);
    *((uint *)GEN_TOP(((int)this + 0x18))) = uVar2;
    if (*((char *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x8)) + 0xb))) != '\0') {
      uVar2 = F_00bc52c0(param_2 GEN_EDX_ARG,(uint)(*((char *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x8)) + 0xb))) != '\x01'),iVar3,param_1);
      *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar2;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 0;
    uVar2 = F_00bcc960(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Object::ActionTimelinePap::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bccb70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbccb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1106444));
  F_00bcc8c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bccbb0 */
GEN_OWN GEN_FRAME float10 F_00bccbb0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbccbb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bccbd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bccbd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbccbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00bbac80(in_ecx GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x110653c));
  return (uint)in_ecx;
}

/* ref: FUN_00bccbf0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bccbf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbccbf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  return;
}

/* ref: FUN_00bccc00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bccc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbccc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bbb060(this GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00bccc10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bccc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbccc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00bbafd0(this GEN_EDX_FWD)));
  if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (param_1 != 0)) {
    uVar1 = F_00688de0(this_00 GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bccc40 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bccc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbccc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00bbafd0(this GEN_EDX_FWD);
  if (uVar1 == 0) {
    return 1;
  }
  return *((char *)GEN_TOP((uVar1 + 0x65))) == '\x03';
}

/* ref: FUN_00bccc60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bccc60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(char param_9, unsigned int gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xbccc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(char param_9 = (char)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  undefined * this;
  int iVar2;
  
  this = ((undefined *)GEN_TOP(F_00bbafd0(param_1 GEN_EDX_FWD)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x0));
  (*(undefined1 *)(gen_frame + 0x12)) = 0;
  if (param_9 == '\0') {
    (*(uint *)(gen_frame + 0x0)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xe)) + 0)) = (short)(int)param_7;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xe)) + 2)) = (short)(int)param_8;
    (*(undefined4 *)(gen_frame + 0xe)) = CONCAT22((short)(int)param_8,(short)(int)param_7);
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = 1;
    (*(undefined4 *)(gen_frame + 0xe)) = 0;
  }
  (*(uint *)(gen_frame + 0x0)) = (uint)(param_9 != '\0');
  iVar2 = param_6;
  if (param_6 == 0) {
    iVar2 = -1;
  }
  (*(undefined2 *)(gen_frame + 0xc)) = (short)iVar2;
  if (GEN_ISNAN(param_10) == (GEN_ISNAN(param_10) || param_10 == 0.0)) {
    (*(float *)(gen_frame + 0x4)) = (float)((float10)param_10 / (float10)*(double *)&REFG(undefined, 0x1088070));
  }
  else {
    (*(float *)(gen_frame + 0x4)) = 0.0;
  }
  if ((param_2 != ((int *)GEN_TOP(0x0))) &&
     ((*(int * PTR32 *)(gen_frame + 0x8)) = param_2, GEN_ISNAN(param_10) != (GEN_ISNAN(param_10) || param_10 == 0.0))) {
    param_2[3] = param_2[3] | 2;
  }
  (*(uint *)(gen_frame + 0x14)) = 0;
  F_00688da0(this GEN_EDX_ARG,param_3,&(*(uint *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x14)));
  if (((*(uint *)(gen_frame + 0x14)) == 0) && (param_2 != ((int *)GEN_TOP(0x0)))) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*param_2 + 4)));
    param_2[3] = param_2[3] | 2;
    (*pcVar1)(param_2,0);
  }
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_00bccd30 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bccd30(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbccd30u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    (*(uint *)(gen_frame + 0x0)) = (uint)(param_2 != '\0');
    if (GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0)) {
      (*(float *)(gen_frame + 0x4)) = (float)((float10)param_3 / (float10)*(double *)&REFG(undefined, 0x1088070));
    }
    else {
      (*(float *)(gen_frame + 0x4)) = 0.0;
    }
    F_009f7cb0(param_1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00bccd90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bccd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbccd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  int * piVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP((param_3 + 0x18)));
  piVar2 = ((int *)GEN_TOP(F_00bbafd0(this GEN_EDX_FWD)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    *param_1 = 0;
    return 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x11c))))(piVar2 GEN_EDX_ARG,param_1,param_2,iVar1 + param_3);
  return (uint)param_1;
}

/* ref: FUN_00bccde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bccde0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbccde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  undefined * this;
  uint uVar2;
  char * pcVar3;
  int iVar4;
  
  if (((param_2 == 0) && (param_5 != 0x7b)) && (param_5 != 0x7c)) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(param_5)) {
  case 7: ;
    pcVar3 = ((char *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x18))) + param_2)));
    break;
  default: ;
    pcVar3 = ((char *)GEN_TOP(param_2));
    break;
  case 0x1d: ;
    switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((param_2 + 0xc))))) {
    case 0: ;
      pcVar3 = REFG(undefined * PTR32, 0x1342e70);
      break;
    case 1: ;
      pcVar3 = REFG(undefined * PTR32, 0x1342e74);
      break;
    case 2: ;
      pcVar3 = REFG(undefined * PTR32, 0x1342e78);
      break;
    case 3: ;
      pcVar3 = REFG(undefined * PTR32, 0x1342e7c);
      break;
    default: ;
      goto switchD_00bcced3_default;
    }
    break;
  case 0x1e: ;
    iVar4 = 0;
    switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((param_2 + 0xc))))) {
    case 0: ;
      fVar1 = *((float *)GEN_TOP((param_2 + 0x10)));
      if (!(*(float *)&REFG(undefined, 0x1088114) <= fVar1)) {
        if (!(*(double *)&REFG(undefined, 0x1106548) <= (double)fVar1)) goto switchD_00bcce4f_caseD_4;
        goto switchD_00bcce4f_caseD_2;
      }
      if (!((double)fVar1 <= *(double *)&REFG(undefined, 0x1106550))) goto switchD_00bcce4f_caseD_3;
    case 1: ;
      pcVar3 = ((char *)REFP(0x1342e30));
      break;
    case 2: ;
switchD_00bcce4f_caseD_2: ;
      pcVar3 = ((char *)REFP(0x1342e40));
      break;
    case 3: ;
switchD_00bcce4f_caseD_3: ;
      pcVar3 = ((char *)REFP(0x1342e50));
      break;
    case 4: ;
switchD_00bcce4f_caseD_4: ;
      iVar4 = 3;
    default: ;
      pcVar3 = ((char *)REFP(0x1342e30)) + iVar4 * 0x10;
    }
    break;
  case 0x20: ;
  case 0x4a: ;
    pcVar3 = ((char *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0xc))) + param_2)));
    break;
  case 0x52: ;
    pcVar3 = ((char *)REFP(0x11064c8));
    goto LAB_00bccf06;
  case 0x7b: ;
    pcVar3 = ((char *)REFP(0x1106518));
    goto LAB_00bccf06;
  case 0x7c: ;
    pcVar3 = ((char *)REFP(0x1106524));
    goto LAB_00bccf06;
  }
  if ((pcVar3 != ((char *)GEN_TOP(0x0))) && (*pcVar3 != '\0')) {
LAB_00bccf06: ;
    this = ((undefined *)GEN_TOP(F_00bbafd0(param_1 GEN_EDX_FWD)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      (*(undefined4 *)(gen_frame + 0x0)) = param_3;
      (*(undefined4 *)(gen_frame + 0x4)) = param_4;
      uVar2 = F_006a7fa0(this GEN_EDX_ARG,pcVar3,&(*(undefined4 *)(gen_frame + 0x0)),2);
      return uVar2;
    }
  }
switchD_00bcced3_default: ;
  return 0;
}

/* ref: FUN_00bcd000 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bcd000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint in_ecx;
  
  in_ecx = F_00bbafd0(this GEN_EDX_FWD);
  if (in_ecx == 0) {
    return 1;
  }
  bVar1 = F_0068d920(in_ecx GEN_EDX_ARG,0);
  if (bVar1 == 0) {
    return 0;
  }
  return *((int *)GEN_TOP((in_ecx + 0x6f8))) == 0 && *((char *)GEN_TOP((in_ecx + 0x6ec))) == '\0';
}

/* ref: FUN_00bcd040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcd040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbcd040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  char cVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00bbafd0(this GEN_EDX_FWD);
  if ((uVar2 == 0) || (param_1 == ((char *)GEN_TOP(0x0)))) {
    *param_2 = 0;
LAB_00bcd1b9: ;
    uVar2 = *param_2;
    *param_3 = uVar2;
    return uVar2;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137129c) + 0x60)));
  uVar2 = F_00500af0(this_00 GEN_EDX_ARG,param_1);
  uVar2 = F_00500ae0(this_00 GEN_EDX_ARG,uVar2 & 0xffff);
  uVar3 = *((byte *)GEN_TOP((uVar2 + 8))) & 1;
  *param_2 = uVar3;
  if (param_1[3] == 'p') {
    *param_2 = 2;
  }
  else if (uVar3 == 0xffffffff) {
    *param_2 = 0;
  }
  cVar1 = *param_1;
  if ((cVar1 != 'b') || (param_1[1] != '_')) {
    if ((cVar1 == 'f') && (param_1[1] == '_')) {
      *param_3 = 1;
      *param_2 = 1;
      return uVar2;
    }
    if ((cVar1 == 'h') && (param_1[1] == '_')) {
      *param_3 = 0;
      *param_2 = 0;
      return uVar2;
    }
    if ((cVar1 != 'm') || (param_1[1] != '_')) {
      uVar3 = CONCAT31((int3)(uVar2 >> 8),0x69);
      if (((param_1[5] == 'b') && (param_1[6] == 'l')) && (param_1[7] == 'i')) {
        *param_3 = 0x28;
        return uVar3;
      }
      if (((((cVar1 == 'c') && (param_1[1] == 'f')) &&
           ((param_1[2] == 'x' && ((param_1[3] == 'l' && (param_1[5] == 'l')))))) &&
          (param_1[6] == 'i')) && (param_1[7] == 'p')) {
        *param_3 = 0x300;
        return uVar3;
      }
      if ((*((uint *)GEN_TOP((uVar2 + 8))) >> 3 & 1) != 0) {
        *param_3 = 0x10;
        return (uint)param_3;
      }
      if ((*((uint *)GEN_TOP((uVar2 + 8))) >> 4 & 1) != 0) {
        *param_3 = 0x20;
        return uVar2;
      }
      if (*((char *)GEN_TOP((uVar2 + 0xe))) == '\x14') {
        *param_3 = 0x30;
        return uVar2;
      }
      goto LAB_00bcd1b9;
    }
  }
  *param_3 = 0;
  *param_2 = 0;
  return (uint)param_3;
}

/* ref: Client::System::Scheduler::Connection::GraphCharaConnect::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcd200(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bcd250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcd250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00bcd2a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bcd2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  
  *((char * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined2 *)this = 0;
  cVar2 = *param_1;
  pcVar3 = param_1;
  while (cVar2 != '\0') {
    *(short *)this = *(short *)this + (short)cVar2;
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  return 0;
}

/* ref: FUN_00bcd2f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcd2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  if ((uVar1 != 0) && (uVar1 != (int)this + 10U)) {
    uVar2 = F_00406b30(uVar1);
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bcd320 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bcd320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar5 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar5 != 0) && (iVar5 != (int)this + 10)) {
    F_00406b30(iVar5);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  if ((int)pcVar2 - (int)(param_1 + 1) < 0x28) {
    *((int *)GEN_TOP(((int)this + 4))) = (int)this + 10;
    F_00c49908((int)this + 10,0x28,param_1);
  }
  else {
    iVar5 = ((int)pcVar2 - (int)(param_1 + 1)) + 1;
    uVar3 = F_00406bb0(iVar5,0,0);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
    F_00c49908(uVar3,iVar5,param_1);
  }
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    sVar4 = 0;
    pcVar2 = param_1;
    do {
      sVar4 = sVar4 + cVar1;
      pcVar2 = pcVar2 + 1;
      *((short *)GEN_TOP(((int)this + 8))) = sVar4;
      cVar1 = *pcVar2;
    } while (cVar1 != '\0');
  }
  return 0;
}

/* ref: FUN_00bcd3c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bcd3c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((int *)GEN_TOP((in_ecx + 0x54))) = *((int *)GEN_TOP((in_ecx + 0x54))) + 1;
  return;
}

/* ref: FUN_00bcd3d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcd3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x5c))) >> 3;
  if (((uVar1 & 1) == 0) && (*((int *)GEN_TOP(((int)this + 0x54))) == 0)) {
    F_00b5ce20(REFG(void * PTR32, 0x14c4e90) GEN_EDX_FWD,this);
    uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar1;
}

/* ref: FUN_00bcd400 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcd400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar1 = F_0050c620(*((int *)GEN_TOP(((int)this + 0xc))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bcd430 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcd430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar2 = (int)this + 0x10;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = 0;
    do {
      if (*((int *)GEN_TOP((iVar2 + iVar1 * 4))) == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar2 = *((int *)GEN_TOP((iVar2 + 8)));
  } while( true );
}

/* ref: FUN_00bcd470 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bcd470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  
  *((char * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined2 *)this = 0;
  cVar2 = *param_1;
  pcVar3 = param_1;
  while (cVar2 != '\0') {
    *(short *)this = *(short *)this + (short)cVar2;
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  return 0;
}

/* ref: FUN_00bcd4b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcd4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x54)));
  if (((*((uint *)GEN_TOP(((int)this + 0x5c))) >> 3 & 1) == 0) && (uVar1 == 0)) {
    F_00b5ce20(REFG(void * PTR32, 0x14c4e90) GEN_EDX_FWD,this);
    uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar1;
}

/* ref: FUN_00bcd4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcd4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*((short *)GEN_TOP(((int)this + 0x24))) == *((short *)GEN_TOP((param_1 + 8)))) {
    pbVar4 = *((byte * PTR32 *)GEN_TOP((param_1 + 4)));
    pbVar2 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x20)));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcd516: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcd51b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcd516;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcd51b: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bcd530 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcd530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*((short *)GEN_TOP(((int)this + 0x24))) == *param_1) {
    pbVar4 = *(byte * PTR32 *)(param_1 + 2);
    pbVar2 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x20)));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcd565: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcd56a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcd565;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcd56a: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bcd580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcd580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  iVar3 = (int)this + 0x10;
  iVar2 = (int)this + 0x10;
  while (iVar1 = iVar3, iVar1 != 0) {
    uVar4 = 0;
    do {
      if (*((int *)GEN_TOP((iVar1 + uVar4 * 4))) == 0) {
        *((undefined4 *)GEN_TOP((iVar1 + uVar4 * 4))) = param_1;
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 2);
    iVar2 = iVar1;
    iVar3 = *((int *)GEN_TOP((iVar1 + 8)));
  }
  puVar5 = ((undefined4 *)GEN_TOP(F_00406b90(0xc,0,0)));
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *puVar5 = param_1;
    *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 8))) = puVar5;
    return (uint)puVar5;
  }
  *(undefined4 *)&REFG(undefined, 0x0) = param_1;
  *((undefined4 *)GEN_TOP((iVar2 + 8))) = 0;
  return 0;
}

/* ref: FUN_00bcd630 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcd630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106590));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  *((undefined1 *)GEN_TOP(((int)this + 0x26))) = 0x30;
  *((undefined2 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0xffffffff;
  *((uint *)GEN_TOP(((int)this + 0x5c))) = *((uint *)GEN_TOP(((int)this + 0x5c))) & 0xfffffff4 | 4;
  return (uint)this;
}

/* ref: FUN_00bcd680 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcd680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106590));
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    F_0050c620(*((int *)GEN_TOP(((int)this + 0xc))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x18)));
  while (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP((iVar2 + 8)));
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  if ((uVar3 != 0) && (uVar3 != (int)this + 0x26U)) {
    uVar4 = F_00406b30(uVar3);
    uVar3 = (uint)uVar4;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  return uVar3;
}

/* ref: FUN_00bcd6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcd6f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbcd6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  uint uVar1;
  undefined4 * puVar2;
  
  *((uint *)GEN_TOP((param_1 + 0x5c))) =
       *((uint *)GEN_TOP((param_1 + 0x5c))) ^ ((uint)param_5 * 4 ^ *((uint *)GEN_TOP((param_1 + 0x5c)))) & 4;
  if (param_5 == 0) {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined1 *)(gen_frame + 0x22)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined2 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x18)) = 5000;
    (*(undefined4 *)(gen_frame + 0x1e)) = 1;
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  uVar1 = F_00513d20(param_3,param_4,param_2,puVar2,0,0);
  *((uint *)GEN_TOP((param_1 + 0x5c))) = *((uint *)GEN_TOP((param_1 + 0x5c))) | 1;
  *((uint *)GEN_TOP((param_1 + 0xc))) = uVar1;
  return uVar1;
}

/* ref: FUN_00bcd780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcd780(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbcd780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  uint uVar1;
  undefined4 * puVar2;
  
  *((uint *)GEN_TOP((param_1 + 0x5c))) =
       *((uint *)GEN_TOP((param_1 + 0x5c))) ^ ((uint)param_3 * 4 ^ *((uint *)GEN_TOP((param_1 + 0x5c)))) & 4;
  if (param_3 == 0) {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined1 *)(gen_frame + 0x22)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined2 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x18)) = 5000;
    (*(undefined4 *)(gen_frame + 0x1e)) = 1;
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  uVar1 = F_00513dc0(param_2,puVar2,0,0);
  *((uint *)GEN_TOP((param_1 + 0x5c))) = *((uint *)GEN_TOP((param_1 + 0x5c))) | 1;
  *((uint *)GEN_TOP((param_1 + 0xc))) = uVar1;
  return uVar1;
}

/* ref: FUN_00bcd800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcd800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x88)));
  iVar1 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
  if (iVar1 == 2) {
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
    if (iVar1 < 8) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
      *param_1 = uVar3;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x5c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00bcd860 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bcd860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x5c))) & 2) == 0) {
    if ((*((uint *)GEN_TOP(((int)this + 0x5c))) & 1) == 0) {
      return 0;
    }
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
    if (iVar1 == 2) {
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x8c)));
      iVar1 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
      if (iVar1 < 8) {
        *((uint *)GEN_TOP(((int)this + 0x5c))) = *((uint *)GEN_TOP(((int)this + 0x5c))) & 0xfffffffe;
        return 0;
      }
      *((uint *)GEN_TOP(((int)this + 0x5c))) = *((uint *)GEN_TOP(((int)this + 0x5c))) | 2;
    }
  }
  return 1;
}

/* ref: FUN_00bcd8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcd8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x10)));
  puVar6 = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = puVar1;
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  do {
    puVar3 = puVar2;
    iVar5 = 0;
    do {
      if (puVar3[iVar5] == param_1) {
        puVar3[iVar5] = 0;
        if ((puVar3 == puVar1) && (puVar3[2] == 0)) {
          return (uint)puVar3;
        }
        iVar5 = 0;
        do {
          if (puVar3[iVar5] != 0) {
            return (uint)puVar3;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        puVar2 = ((undefined4 *)GEN_TOP(puVar3[2]));
        if (puVar3 != puVar1) {
          puVar6[2] = puVar2;
          uVar4 = F_00406ad0(puVar3);
          return uVar4;
        }
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        uVar4 = F_00406ad0(puVar2);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    puVar2 = ((undefined4 *)GEN_TOP(puVar3[2]));
    puVar6 = puVar3;
    if (((undefined4 *)GEN_TOP(puVar3[2])) == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00bcd930 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bcd930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbcd930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  F_00bcd320(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0xffffffff;
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x104,((char *)REFP(0x1106558)),param_1);
  F_004ff300(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
  uVar1 = F_00bcd6f0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x0)),param_2,(undefined1)param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 1;
  return uVar1;
}

/* ref: FUN_00bcd9c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bcd9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbcd9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x10c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x104)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x108));
  F_00bcd320(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = param_2;
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x104,((char *)REFP(0x1106564)),param_1);
  uVar1 = F_00bcd6f0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_3,param_4,(undefined1)param_5);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 2;
  return uVar1;
}

/* ref: FUN_00bcda50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcda50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbcda50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  F_00bcd320(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0xffffffff;
  uVar1 = F_00bcd6f0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))),param_2,param_3,(undefined1)param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 3;
  return uVar1;
}

/* ref: FUN_00bcda90 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bcda90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbcda90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_GS(0x10c, 4, 4);
  uint uVar1;
  char * _Format;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x104)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x108));
  F_00bcd320(((undefined *)GEN_TOP((param_1 + 0x1c))) GEN_EDX_FWD,param_2);
  *((undefined4 *)GEN_TOP((param_1 + 0x50))) = 0xffffffff;
  if (param_4 == '\0') {
    _Format = ((char *)REFP(0x1106578));
  }
  else {
    _Format = ((char *)REFP(0x1106580));
  }
  F_00c472af(((char *)(gen_frame + 0x0)),0x104,_Format,param_2);
  uVar1 = F_00bcd780(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(undefined1)param_3);
  *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 4;
  return uVar1;
}

/* ref: FUN_00bcdb30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*((short *)GEN_TOP(((int)this + 8))) == *((short *)GEN_TOP((param_1 + 8)))) {
    pbVar4 = *((byte * PTR32 *)GEN_TOP((param_1 + 4)));
    pbVar2 = *((byte * PTR32 *)GEN_TOP(((int)this + 4)));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcdb66: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcdb6b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcdb66;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcdb6b: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bcdb80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*((short *)GEN_TOP(((int)this + 8))) == *param_1) {
    pbVar4 = *(byte * PTR32 *)(param_1 + 2);
    pbVar2 = *((byte * PTR32 *)GEN_TOP(((int)this + 4)));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcdbb5: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcdbba;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcdbb5;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcdbba: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Resource::SchedulerResource::ResourceName::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdbe0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  if ((iVar1 != 0) && (iVar1 != (int)param_1 + 10)) {
    F_00406b30(iVar1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bcdc30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdc30(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00bcdc50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdc50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[3] = 0;
  in_ecx[2] = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x22))) = 0;
  in_ecx[9] = 0;
  in_ecx[4] = 5;
  *(undefined1 *)(in_ecx + 5) = 0xff;
  in_ecx[6] = 5000;
  *((undefined4 *)GEN_TOP(((int)in_ecx + 0x1e))) = 1;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x1d))) = param_2;
  return (uint)in_ecx;
}

/* ref: Client::System::Scheduler::Resource::SchedulerResource::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdc90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bcd680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bcdcc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdcc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this + param_1 * 0x18 + (int)this;
}

/* ref: FUN_00bcdd30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdd30(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcdd40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdd40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: FUN_00bcdd60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdd60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x28))) = param_2;
  return param_2;
}

/* ref: FUN_00bcdd80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdd80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00bcdd90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdd90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: FUN_00bcdde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdde0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_00bcddf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcddf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcddf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xd8))) = param_2;
  return param_2;
}

/* ref: FUN_00bcde10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcde10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcde10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x28))) = param_2;
  return param_2;
}

/* ref: FUN_00bcde20 */
GEN_OWN GEN_FRAME float10 F_00bcde20(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbcde20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bcde40 */
GEN_OWN GEN_FRAME byte F_00bcde40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcde40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00b5fe80(*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcde60 */
GEN_OWN GEN_FRAME byte F_00bcde60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcde60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00b5fea0(*((undefined4 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcde80 */
GEN_OWN GEN_FRAME byte F_00bcde80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcde80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00b5fec0(*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcdea0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bcdea0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbcdea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 - 1;
        if (*piVar1 == *(int *)REFG(undefined * PTR32, 0x1343188)) {
          return (uint)(piVar1 + 2);
        }
        piVar1 = ((int *)GEN_TOP(((int)piVar1 + piVar1[1])));
      } while (iVar2 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00bcdee0 */
GEN_OWN GEN_FRAME byte F_00bcdee0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0x20))) = param_2;
  return 1;
}

/* ref: FUN_00bcdf00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bcdf00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  if (*param_1 != 0x424c4d54) {
    return 0xffffffff;
  }
  iVar3 = param_1[2];
  piVar2 = param_1 + 3;
  while( true ) {
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    iVar3 = iVar3 - 1;
    if ((*piVar2 == 0x30313043) &&
       (uVar1 = F_00bccde0(param_2 GEN_EDX_ARG,(uint)(piVar2 + 2),0,0,7), uVar1 != 0)) break;
    piVar2 = ((int *)GEN_TOP(((int)piVar2 + piVar2[1])));
  }
  return 1;
}

/* ref: FUN_00bcdf60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcdf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xa48)));
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  *((int *)GEN_TOP(((int)this + 0xa4c))) = *((int *)GEN_TOP(((int)this + 0xa4c))) - uVar2;
  *((uint *)GEN_TOP(((int)this + 0xa48))) = uVar1 + uVar2;
  return uVar1;
}

/* ref: FUN_00bcdf90 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00bcdf90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  if (*param_1 != 0x42545543) {
    return 0;
  }
  piVar4 = param_1 + 3;
  iVar3 = param_1[2];
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*piVar4 == 0x4c415443) {
      iVar1 = piVar4[2];
      F_00b60910(param_2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)piVar4 + iVar1 + 0x14))));
      iVar5 = 0;
      if (0 < *((int *)GEN_TOP(((int)piVar4 + iVar1 + 0x14)))) {
        do {
          iVar2 = *((int *)GEN_TOP(((int)piVar4 + iVar1 + 0x10))) + iVar1 + 8;
          F_00b5fd40(param_2 GEN_EDX_ARG,(int)piVar4 + *((int *)GEN_TOP(((int)piVar4 + iVar5 * 4 + iVar2))) + iVar2,iVar5
                      );
          iVar5 = iVar5 + 1;
        } while (iVar5 < *((int *)GEN_TOP(((int)piVar4 + iVar1 + 0x14))));
      }
    }
    piVar4 = ((int *)GEN_TOP(((int)piVar4 + piVar4[1])));
  }
  return 1;
}

/* ref: FUN_00bce010 */
GEN_OWN GEN_FRAME byte F_00bce010(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbce010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  undefined * this;
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 8)));
  iVar2 = 0;
  if ((this != ((undefined *)GEN_TOP(0x0))) && (local_8 = *((int *)GEN_TOP((param_1 + 0x34))), 0 < param_2[1])) {
    param_1 = 0;
    do {
      iVar3 = *param_2 + param_1 + (int)param_2;
      uVar1 = F_00b60e70(this GEN_EDX_ARG,iVar3,iVar2);
      if (*((int *)GEN_TOP((iVar3 + 4))) != 3) {
        *((undefined4 *)GEN_TOP((uVar1 + 0x28))) = *((undefined4 *)GEN_TOP((local_8 + 0x10)));
        local_8 = *((int *)GEN_TOP((local_8 + 0xc)));
      }
      param_1 = param_1 + 0x18;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[1]);
  }
  return 1;
}

/* ref: FUN_00bce080 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bce080(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbce080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 - 1;
        if (*piVar1 == *(int *)REFG(undefined * PTR32, 0x134318c)) {
          return (int)piVar1 + piVar1[8] + 8;
        }
        piVar1 = ((int *)GEN_TOP(((int)piVar1 + piVar1[1])));
      } while (iVar2 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00bce0c0 */
GEN_OWN GEN_FRAME byte F_00bce0c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbce0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 100))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  *((int *)GEN_TOP((uVar1 + 0xd8))) = *param_2 + (int)param_2;
  return 1;
}

/* ref: FUN_00bce0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bce0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbce0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x40)));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (**((ushort * PTR32 *)GEN_TOP((iVar1 + 0x10))) == param_1) break;
    iVar1 = *((int *)GEN_TOP((iVar1 + 0xc)));
  }
  return 0x60;
}

/* ref: FUN_00bce120 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bce120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbce120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  ushort * puVar2;
  undefined * this_00;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x40)));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *((ushort * PTR32 *)GEN_TOP((iVar1 + 0x10)));
    if (*puVar2 == param_2) break;
    iVar1 = *((int *)GEN_TOP((iVar1 + 0xc)));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0xa48)));
  *((int *)GEN_TOP(((int)this + 0xa4c))) = *((int *)GEN_TOP(((int)this + 0xa4c))) - 0x60;
  *((int *)GEN_TOP(((int)this + 0xa48))) = iVar1 + 0x60;
  this_00 = ((undefined *)GEN_TOP(F_00bd2d10(param_1 GEN_EDX_FWD,iVar1)));
  F_00c21f80(this_00 GEN_EDX_ARG,puVar2 + 2,0,0);
  return 1;
}

/* ref: FUN_00bce180 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bce180(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbce180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  char * pcVar2;
  int iVar3;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar3 = param_1[2];
    if (iVar3 != 0) {
      while (iVar3 = iVar3 - 1, *piVar1 != 0x50504d54) {
        piVar1 = ((int *)GEN_TOP(((int)piVar1 + piVar1[1])));
        if (iVar3 == 0) {
          return 0;
        }
      }
      pcVar2 = ((char *)GEN_TOP((piVar1[2] + (int)(piVar1 + 2))));
      if ((pcVar2 != ((char *)GEN_TOP(0x0))) && (*pcVar2 != '\0')) {
        return (uint)pcVar2;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bce230 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bce230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbce230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = param_1;
    do {
      uVar1 = *((uint *)GEN_TOP((uVar2 + 0xc)));
      if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
        F_00406ad0(uVar2);
      }
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00bce270 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bce270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbce270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  byte local_5;
  
  local_5 = 1;
  if (*param_1 != 0x42545543) {
    return 0;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  iVar6 = param_1[2];
  param_2 = 0;
  piVar9 = param_1 + 3;
  while (iVar6 != 0) {
    iVar6 = iVar6 - 1;
    if (*piVar9 == 0x4c545443) {
      piVar8 = ((int *)GEN_TOP(((int)piVar9 + piVar9[2] + 8)));
      if (*piVar8 != 0x424c4d54) {
        return 0;
      }
      iVar7 = piVar8[2];
      piVar2 = piVar8 + 3;
      while (iVar7 != 0) {
        iVar7 = iVar7 - 1;
        if (*piVar2 == 0x48444d54) {
          piVar2 = ((int *)GEN_TOP(F_00406b90(0x40,0,0)));
          if (piVar2 == ((int *)GEN_TOP(0x0))) {
            piVar2 = ((int *)GEN_TOP(0x0));
          }
          else {
            *piVar2 = 0;
            piVar2[1] = 0;
            piVar2[2] = 0;
            piVar2[3] = 0;
            piVar2[4] = 0;
            piVar2[5] = 0;
            piVar2[6] = 0;
            piVar2[7] = 0;
            piVar2[8] = 0;
            piVar2[9] = 0;
            piVar2[10] = 0;
            *(undefined2 *)(piVar2 + 0xb) = 1;
            *((undefined1 *)GEN_TOP(((int)piVar2 + 0x2e))) = 0;
          }
          *piVar2 = param_2;
          param_2 = param_2 + 1;
          piVar2[4] = (int)piVar8;
          piVar8 = piVar2 + 2;
          iVar7 = *((int *)GEN_TOP(((int)this + 0x34)));
          if (*((int *)GEN_TOP(((int)this + 0x34))) == 0) {
            *piVar8 = 0;
            piVar2[3] = 0;
            *((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = piVar2;
          }
          else {
            do {
              iVar3 = iVar7;
              iVar7 = *((int *)GEN_TOP((iVar3 + 0xc)));
            } while (*((int *)GEN_TOP((iVar3 + 0xc))) != 0);
            piVar4 = piVar2;
            if (piVar8 == ((int *)GEN_TOP(0x0))) {
              piVar4 = ((int *)GEN_TOP(0x0));
            }
            *((int * PTR32 *)GEN_TOP((iVar3 + 0xc))) = piVar4;
            *piVar8 = iVar3;
            piVar2[3] = 0;
          }
          break;
        }
        piVar2 = ((int *)GEN_TOP(((int)piVar2 + piVar2[1])));
      }
    }
    piVar9 = ((int *)GEN_TOP(((int)piVar9 + piVar9[1])));
  }
  iVar6 = param_1[2];
  piVar9 = param_1 + 3;
  do {
    if (iVar6 == 0) {
      iVar6 = *((int *)GEN_TOP(((int)this + 0x34)));
      while (iVar6 != 0) {
        iVar7 = *((int *)GEN_TOP((iVar6 + 0xc)));
        F_00406ad0(iVar6);
        iVar6 = iVar7;
      }
      return local_5;
    }
    iVar6 = iVar6 - 1;
    uVar5 = 0;
    do {
      if (*piVar9 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x1343060))[(int)(uVar5 * 2)]))) {
        bVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1343064))[(int)(uVar5 * 2)])))(this,piVar9 + 2,uVar5);
        if (bVar1 == 0) {
          local_5 = 0;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    piVar9 = ((int *)GEN_TOP(((int)piVar9 + piVar9[1])));
  } while( true );
}

/* ref: FUN_00bce410 */
GEN_OWN GEN_FRAME unsigned int F_00bce410(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbce410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this;
  undefined * this_00;
  code * pcVar3;
  int iVar4;
  
  this = *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371298) + 0x38)));
  iVar4 = *param_2 + (int)param_2;
  this_00 = *((undefined * PTR32 *)GEN_TOP((param_1 + 8)));
  F_006906f0(this GEN_EDX_ARG);
  uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 0x14)));
  uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 0x18)));
  *(undefined4 *)(this + 0x30) = *((undefined4 *)GEN_TOP((iVar4 + 0x10)));
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x10)));
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
  (*pcVar3)(this);
  F_0069c300(REFG(void * PTR32, 0x1371298) GEN_EDX_ARG,1);
  *((undefined4 *)GEN_TOP((iVar4 + 8))) = 1;
  F_00b60a70(this_00 GEN_EDX_ARG,iVar4);
  return;
}

/* ref: FUN_00bce490 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bce490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbce490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  int * piVar6;
  uint uVar7;
  int local_c;
  byte local_5;
  
  local_5 = 1;
  if (*param_1 != 0x424c4d54) {
    return 0;
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa48))) = 0;
  iVar4 = 4;
  puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x34)));
  do {
    iVar4 = iVar4 - 1;
    puVar5 = puVar5 - 1;
    *puVar5 = 0;
  } while (iVar4 != 0);
  iVar4 = param_1[2];
  piVar6 = param_1 + 3;
  do {
    if (iVar4 == 0) {
LAB_00bce6ec: ;
      *((undefined4 *)GEN_TOP(((int)this + 0xa48))) = 0;
      if (local_5 != 0) {
        piVar6 = param_1 + 3;
        local_c = param_1[2];
        param_3 = 0;
        if (local_c != 0) {
          do {
            local_c = local_c - 1;
            if (*piVar6 == *(int *)REFG(undefined * PTR32, 0x1343094)) {
              bVar3 = ((code *)REFG(gen_code32, 0x01343098))(this,piVar6 + 2);
              param_3 = param_3 + (int)CONCAT31(extraout_var,bVar3);
            }
            piVar6 = ((int *)GEN_TOP(((int)piVar6 + piVar6[1])));
          } while (local_c != 0);
          if (param_3 != 0) {
            uVar7 = F_00bc1ec0(param_2 GEN_EDX_ARG,param_3);
            *((uint *)GEN_TOP(((int)this + 0xa48))) = uVar7;
            if (uVar7 == 0) {
              local_5 = 0;
            }
          }
        }
        *((int *)GEN_TOP(((int)this + 0xa4c))) = param_3;
        if (local_5 != 0) {
          piVar6 = param_1 + 3;
          iVar4 = param_1[2];
          while (iVar4 != 0) {
            iVar4 = iVar4 - 1;
            uVar7 = 0;
            do {
              if (*piVar6 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x134309c))[(int)(uVar7 * 2)]))) {
                bVar3 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13430a0))[(int)(uVar7 * 2)])))(this,piVar6 + 2);
                if (bVar3 == 0) {
                  local_5 = 0;
                }
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < 3);
            piVar6 = ((int *)GEN_TOP(((int)piVar6 + piVar6[1])));
          }
        }
      }
      uVar7 = *((uint *)GEN_TOP(((int)this + 0x40)));
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *((uint *)GEN_TOP((uVar2 + 0xc)));
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *((uint *)GEN_TOP(((int)this + 0x44)));
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *((uint *)GEN_TOP((uVar2 + 0xc)));
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *((uint *)GEN_TOP(((int)this + 0x3c)));
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *((uint *)GEN_TOP((uVar2 + 0xc)));
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *((uint *)GEN_TOP(((int)this + 0x38)));
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *((uint *)GEN_TOP((uVar2 + 0xc)));
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
      return local_5;
    }
    iVar4 = iVar4 - 1;
    uVar7 = 0;
    do {
      if (*piVar6 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x1343088))[(int)(uVar7)]))) {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
        if (iVar1 < 0x28) {
          puVar5 = ((undefined4 *)GEN_TOP((iVar1 * 0x40 + 0x48 + (int)this)));
          *((int *)GEN_TOP(((int)this + 0x20))) = iVar1 + 1;
        }
        else {
          puVar5 = ((undefined4 *)GEN_TOP(F_00406b90(0x40,0,0)));
          if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar5 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
            *(undefined2 *)(puVar5 + 0xb) = 1;
            *((undefined1 *)GEN_TOP(((int)puVar5 + 0x2e))) = 0;
          }
        }
        if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
          puVar5[4] = piVar6 + 2;
          puVar5[7] = piVar6[1] - 8;
          if (uVar7 == 0) {
            puVar5[2] = 0;
            puVar5[3] = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
            if (*((int *)GEN_TOP(((int)this + 0x38))) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 8))) = puVar5;
            }
            *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x38))) = puVar5;
          }
          else if (uVar7 == 1) {
            puVar5[2] = 0;
            puVar5[3] = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
            if (*((int *)GEN_TOP(((int)this + 0x3c))) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 8))) = puVar5;
            }
            *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = puVar5;
          }
          else if (uVar7 == 2) {
            puVar5[2] = 0;
            puVar5[3] = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
            if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 8))) = puVar5;
            }
            *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40))) = puVar5;
          }
          goto LAB_00bce6cb;
        }
        local_5 = 0;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
    uVar7 = 0;
    do {
      if (*piVar6 == **((int * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x134309c) + uVar7)))) goto LAB_00bce6cb;
      uVar7 = uVar7 + 8;
    } while (uVar7 < 0x18);
    uVar7 = F_00b5c6a0(piVar6);
    if (-1 < (int)uVar7) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
      if (iVar1 < 0x28) {
        puVar5 = ((undefined4 *)GEN_TOP((iVar1 * 0x40 + 0x48 + (int)this)));
        *((int *)GEN_TOP(((int)this + 0x20))) = iVar1 + 1;
      }
      else {
        puVar5 = ((undefined4 *)GEN_TOP(F_00406b90(0x40,0,0)));
        if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar5 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          puVar5[10] = 0;
          *(undefined2 *)(puVar5 + 0xb) = 1;
          *((undefined1 *)GEN_TOP(((int)puVar5 + 0x2e))) = 0;
        }
      }
      if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
        local_5 = 0;
        goto LAB_00bce6ec;
      }
      puVar5[4] = piVar6 + 2;
      puVar5[7] = piVar6[1] - 8;
      puVar5[9] = uVar7;
      puVar5[2] = 0;
      puVar5[3] = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
      if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
        *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + 8))) = puVar5;
      }
      *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))) = puVar5;
      if (((char)param_3 != '\0') && (uVar7 = F_00b5c750(uVar7), uVar7 == 3)) {
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 100))))(param_2 GEN_EDX_ARG);
        *((undefined1 *)GEN_TOP((uVar7 + 0xf1))) = 1;
      }
    }
LAB_00bce6cb: ;
    if (local_5 == 0) goto LAB_00bce6ec;
    piVar6 = ((int *)GEN_TOP(((int)piVar6 + piVar6[1])));
  } while( true );
}

/* ref: FUN_00bce8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bce8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbce8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  ushort * puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x44)));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *((ushort * PTR32 *)GEN_TOP((iVar1 + 0x10)));
    if (*puVar2 == param_1) break;
    iVar1 = *((int *)GEN_TOP((iVar1 + 0xc)));
  }
  uVar4 = F_00b5c7b0(*((undefined4 *)GEN_TOP((iVar1 + 0x24))));
  *((uint *)GEN_TOP((iVar1 + 0x28))) = uVar4;
  bVar3 = F_00b5c790(*((undefined4 *)GEN_TOP((iVar1 + 0x24))));
  if (bVar3 != 0) {
    uVar5 = F_00bce0f0(this GEN_EDX_ARG,(uint)puVar2[6]);
    uVar4 = uVar4 + uVar5;
  }
  return uVar4;
}

/* ref: FUN_00bce920 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bce920(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xbce920u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  ushort * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *((int *)GEN_TOP(((int)param_1 + 0x44)));
  if (iVar4 != 0) {
    while (puVar1 = *((ushort * PTR32 *)GEN_TOP((iVar4 + 0x10))), *puVar1 != param_3) {
      iVar4 = *((int *)GEN_TOP((iVar4 + 0xc)));
      if (iVar4 == 0) {
        return 1;
      }
    }
    uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 0x24)));
    iVar3 = *((int *)GEN_TOP(((int)param_1 + 0xa48)));
    uVar5 = *((int *)GEN_TOP((iVar4 + 0x28))) + 0xfU & 0xfffffff0;
    *((int *)GEN_TOP(((int)param_1 + 0xa4c))) = *((int *)GEN_TOP(((int)param_1 + 0xa4c))) - uVar5;
    *((uint *)GEN_TOP(((int)param_1 + 0xa48))) = iVar3 + uVar5;
    uVar5 = F_00b5ce50(REFG(undefined4, 0x14c4e90) GEN_EDX_FWD,iVar3,puVar1,uVar2,param_2,param_4);
    if (uVar5 != 0) {
      F_00c22910(param_2 GEN_EDX_ARG,uVar5);
      iVar4 = *((int *)GEN_TOP((uVar5 + 0x2c)));
      if (iVar4 == 0) {
        *((int *)GEN_TOP(((int)param_1 + 0x28))) = *((int *)GEN_TOP(((int)param_1 + 0x28))) + 1;
      }
      else if (iVar4 == 6) {
        *((int *)GEN_TOP(((int)param_1 + 0x2c))) = *((int *)GEN_TOP(((int)param_1 + 0x2c))) + 1;
      }
      else if (iVar4 == 7) {
        *((int *)GEN_TOP(((int)param_1 + 0x24))) = *((int *)GEN_TOP(((int)param_1 + 0x24))) + 1;
      }
      else {
        *((int *)GEN_TOP(((int)param_1 + 0x30))) = *((int *)GEN_TOP(((int)param_1 + 0x30))) + 1;
      }
      if ((*((byte *)GEN_TOP((uVar5 + 0x7c))) >> 3 & 1) != 0) {
        F_00bce120(param_1 GEN_EDX_ARG,uVar5,(uint)puVar1[6]);
      }
    }
  }
  return 1;
}

/* ref: FUN_00bce9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bce9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbce9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  ushort * puVar2;
  short * psVar3;
  byte bVar4;
  uint uVar5;
  int local_10;
  uint local_8;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x3c)));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *((ushort * PTR32 *)GEN_TOP((iVar1 + 0x10)));
    if (*puVar2 == param_1) break;
    iVar1 = *((int *)GEN_TOP((iVar1 + 0xc)));
  }
  local_8 = 0x30;
  local_10 = 0;
  if (0 < *(int *)(puVar2 + 4)) {
    do {
      for (iVar1 = *((int *)GEN_TOP(((int)this + 0x44))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0xc)))) {
        psVar3 = *((short * PTR32 *)GEN_TOP((iVar1 + 0x10)));
        if (*psVar3 == *((short *)GEN_TOP(((int)puVar2 + *(int *)(puVar2 + 2) + local_10 * 2)))) {
          uVar5 = F_00b5c7b0(*((undefined4 *)GEN_TOP((iVar1 + 0x24))));
          *((uint *)GEN_TOP((iVar1 + 0x28))) = uVar5;
          bVar4 = F_00b5c790(*((undefined4 *)GEN_TOP((iVar1 + 0x24))));
          if (bVar4 == 0) goto LAB_00bcea63;
          iVar1 = *((int *)GEN_TOP(((int)this + 0x40)));
          goto joined_r0x00bceaaf;
        }
      }
      uVar5 = 0;
LAB_00bcea63: ;
      local_8 = local_8 + uVar5;
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(puVar2 + 4));
  }
  return local_8;
joined_r0x00bceaaf: ;
  if (iVar1 == 0) goto LAB_00bcea63;
  if (**((short * PTR32 *)GEN_TOP((iVar1 + 0x10))) == psVar3[6]) {
    uVar5 = uVar5 + 0x60;
    goto LAB_00bcea63;
  }
  iVar1 = *((int *)GEN_TOP((iVar1 + 0xc)));
  goto joined_r0x00bceaaf;
}

/* ref: FUN_00bceae0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bceae0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xbceae0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  ushort * puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte local_5;
  
  iVar4 = *((int *)GEN_TOP((param_1 + 0x3c)));
  local_5 = 1;
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    puVar1 = *((ushort * PTR32 *)GEN_TOP((iVar4 + 0x10)));
    if (*puVar1 == param_3) break;
    iVar4 = *((int *)GEN_TOP((iVar4 + 0xc)));
  }
  iVar4 = *((int *)GEN_TOP((param_1 + 0xa48)));
  *((int *)GEN_TOP((param_1 + 0xa4c))) = *((int *)GEN_TOP((param_1 + 0xa4c))) - 0x30;
  *((int *)GEN_TOP((param_1 + 0xa48))) = iVar4 + 0x30;
  uVar3 = F_00bec4e0(param_2 GEN_EDX_FWD,iVar4,puVar1);
  iVar4 = 0;
  if (0 < *(int *)(puVar1 + 4)) {
    do {
      bVar2 = F_00bce920(param_1 GEN_EDX_ARG,uVar3,
                           (uint)*((ushort *)GEN_TOP((*(int *)(puVar1 + 2) + iVar4 * 2 + (int)puVar1))),param_4
                          );
      if (bVar2 == 0) {
        local_5 = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(puVar1 + 4));
  }
  return local_5;
}

/* ref: FUN_00bceb80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bceb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbceb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 0x38)));
  uVar5 = 0;
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    puVar2 = *((ushort * PTR32 *)GEN_TOP((iVar4 + 0x10)));
    if (*puVar2 == param_1) break;
    iVar4 = *((int *)GEN_TOP((iVar4 + 0xc)));
  }
  uVar1 = puVar2[1];
  param_1 = 1;
  if ((((uVar1 != 0) && (uVar1 != 1)) && (uVar1 < 100)) &&
     (param_1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,puVar2)
     , param_1 == 0)) {
    return 0;
  }
  iVar4 = *(int *)(puVar2 + 8);
  do {
    uVar5 = uVar5 + 0x40;
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        uVar3 = F_00bce9f0(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)(puVar2 + 6) + iVar6 * 2 + (int)puVar2))))
        ;
        uVar5 = uVar5 + uVar3;
        iVar4 = *(int *)(puVar2 + 8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  return uVar5;
}

/* ref: FUN_00bcec20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcec20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcec20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ushort uVar1;
  int iVar2;
  int * piVar3;
  ushort * puVar4;
  byte bVar5;
  uint uVar6;
  float local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x38)));
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  local_14 = 0.0;
  local_5 = 1;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *((ushort * PTR32 *)GEN_TOP((iVar2 + 0x10)));
    if (*puVar4 == param_1) break;
    iVar2 = *((int *)GEN_TOP((iVar2 + 0xc)));
  }
  uVar1 = puVar4[1];
  local_10 = 1;
  param_1 = 0;
  if (((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0xa48)));
    *((int *)GEN_TOP(((int)this + 0xa4c))) = *((int *)GEN_TOP(((int)this + 0xa4c))) - 0x40;
    *((int *)GEN_TOP(((int)this + 0xa48))) = iVar2 + 0x40;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa4))))(piVar3 GEN_EDX_FWD,iVar2,puVar4,0);
  }
  else {
    local_10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x20))))(piVar3 GEN_EDX_ARG,puVar4);
    if (local_10 == 0) {
      return 1;
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0xa48)));
    *((int *)GEN_TOP(((int)this + 0xa4c))) = *((int *)GEN_TOP(((int)this + 0xa4c))) - 0x40;
    *((int *)GEN_TOP(((int)this + 0xa48))) = iVar2 + 0x40;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa4))))(piVar3 GEN_EDX_ARG,iVar2,puVar4,0);
    param_1 = 1;
  }
  if ((uVar6 != 0) && (*((int *)GEN_TOP((uVar6 + 0x20))) != 0)) {
    while( true ) {
      local_c = 0;
      if (0 < *(int *)(puVar4 + 8)) {
        do {
          bVar5 = F_00bceae0(this GEN_EDX_ARG,uVar6,
                               (uint)*((ushort *)GEN_TOP((*(int *)(puVar4 + 6) + local_c * 2 + (int)puVar4))),
                               local_14);
          if (bVar5 == 0) {
            local_5 = 0;
          }
          local_c = local_c + 1;
        } while (local_c < *(int *)(puVar4 + 8));
      }
      local_10 = local_10 - 1;
      if (local_10 == 0) break;
      iVar2 = *((int *)GEN_TOP(((int)this + 0xa48)));
      *((int *)GEN_TOP(((int)this + 0xa4c))) = *((int *)GEN_TOP(((int)this + 0xa4c))) - 0x40;
      *((int *)GEN_TOP(((int)this + 0xa48))) = iVar2 + 0x40;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa4))))(piVar3 GEN_EDX_ARG,iVar2,puVar4,param_1);
      param_1 = param_1 + 1;
      if (uVar6 == 0) {
        return local_5;
      }
      local_14 = (float)((float10)puVar4[2] + (float10)local_14);
    }
    return local_5;
  }
  return 1;
}

/* ref: FUN_00bceda0 */
GEN_OWN GEN_FRAME uint F_00bceda0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbceda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  ushort uVar1;
  short * psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  local_c = 0;
  local_10 = 0;
  if (0 < param_2[1]) {
    do {
      iVar4 = *((int *)GEN_TOP(((int)param_1 + 0x38)));
      iVar5 = 0;
      if (iVar4 != 0) {
LAB_00bcede0: ;
        psVar2 = *((short * PTR32 *)GEN_TOP((iVar4 + 0x10)));
        if (*psVar2 != *((short *)GEN_TOP((*param_2 + local_10 * 2 + (int)param_2)))) goto code_r0x00bcedea;
        uVar1 = psVar2[1];
        local_8 = 1;
        if ((((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) ||
           (local_8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc))) + 0x20))))
                                (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc))) GEN_EDX_ARG,psVar2), local_8 != 0)) {
          iVar4 = *(int *)(psVar2 + 8);
          do {
            iVar5 = iVar5 + 0x40;
            iVar6 = 0;
            if (0 < iVar4) {
              do {
                uVar3 = F_00bce9f0(param_1 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)(psVar2 + 6) + iVar6 * 2 + (int)psVar2)))
                                    );
                iVar5 = iVar5 + uVar3;
                iVar4 = *(int *)(psVar2 + 8);
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar4);
            }
            local_8 = local_8 - 1;
          } while (local_8 != 0);
          goto LAB_00bcedf3;
        }
      }
LAB_00bcedf1: ;
      iVar5 = 0;
LAB_00bcedf3: ;
      uVar3 = local_c + iVar5;
      local_10 = local_10 + 1;
      local_c = uVar3;
    } while (local_10 < param_2[1]);
  }
  return uVar3;
code_r0x00bcedea: ;
  iVar4 = *((int *)GEN_TOP((iVar4 + 0xc)));
  if (iVar4 == 0) goto LAB_00bcedf1;
  goto LAB_00bcede0;
}

/* ref: FUN_00bcee80 */
GEN_OWN GEN_FRAME byte F_00bcee80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcee80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  ushort uVar1;
  int * piVar2;
  int iVar3;
  short * psVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int local_1c;
  float local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte local_6;
  
  local_6 = 1;
  local_1c = 0;
  if (param_2[1] < 1) {
    return 1;
  }
LAB_00bceea2: ;
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  iVar3 = *((int *)GEN_TOP((param_1 + 0x38)));
  local_18 = 0.0;
  bVar5 = true;
  for (; iVar3 != 0; iVar3 = *((int *)GEN_TOP((iVar3 + 0xc)))) {
    psVar4 = *((short * PTR32 *)GEN_TOP((iVar3 + 0x10)));
    if (*psVar4 == *((short *)GEN_TOP((*param_2 + local_1c * 2 + (int)param_2)))) {
      uVar1 = psVar4[1];
      local_14 = 1;
      local_c = 0;
      if (((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) {
        iVar3 = *((int *)GEN_TOP((param_1 + 0xa48)));
        *((int *)GEN_TOP((param_1 + 0xa4c))) = *((int *)GEN_TOP((param_1 + 0xa4c))) - 0x40;
        *((int *)GEN_TOP((param_1 + 0xa48))) = iVar3 + 0x40;
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa4))))(piVar2 GEN_EDX_ARG,iVar3,psVar4,0);
      }
      else {
        local_14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x20))))(piVar2 GEN_EDX_ARG,psVar4);
        if (local_14 == 0) goto LAB_00bcf016;
        iVar3 = *((int *)GEN_TOP((param_1 + 0xa48)));
        *((int *)GEN_TOP((param_1 + 0xa4c))) = *((int *)GEN_TOP((param_1 + 0xa4c))) - 0x40;
        *((int *)GEN_TOP((param_1 + 0xa48))) = iVar3 + 0x40;
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa4))))(piVar2 GEN_EDX_ARG,iVar3,psVar4,0);
        local_c = 1;
      }
      if ((uVar7 == 0) || (*((int *)GEN_TOP((uVar7 + 0x20))) == 0)) goto LAB_00bcf016;
      goto LAB_00bcef80;
    }
  }
  goto LAB_00bcf012;
LAB_00bcef80: ;
  local_10 = 0;
  if (0 < *(int *)(psVar4 + 8)) {
    do {
      bVar6 = F_00bceae0(param_1 GEN_EDX_ARG,uVar7,
                           (uint)*((ushort *)GEN_TOP((*(int *)(psVar4 + 6) + local_10 * 2 + (int)psVar4))),
                           local_18);
      if (bVar6 == 0) {
        bVar5 = false;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(psVar4 + 8));
  }
  local_14 = local_14 - 1;
  if (local_14 == 0) goto LAB_00bcf00c;
  iVar3 = *((int *)GEN_TOP((param_1 + 0xa48)));
  *((int *)GEN_TOP((param_1 + 0xa4c))) = *((int *)GEN_TOP((param_1 + 0xa4c))) - 0x40;
  *((int *)GEN_TOP((param_1 + 0xa48))) = iVar3 + 0x40;
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa4))))(piVar2 GEN_EDX_ARG,iVar3,psVar4,local_c);
  local_c = local_c + 1;
  if (uVar7 == 0) goto LAB_00bcf00c;
  local_18 = (float)((float10)(ushort)psVar4[2] + (float10)local_18);
  goto LAB_00bcef80;
LAB_00bcf00c: ;
  if (!bVar5) {
LAB_00bcf012: ;
    local_6 = 0;
  }
LAB_00bcf016: ;
  local_1c = local_1c + 1;
  if (param_2[1] <= local_1c) {
    return local_6;
  }
  goto LAB_00bceea2;
}

/* ref: FUN_00bcf050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf050(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcf060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00bcf070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *((int *)GEN_TOP(((int)this + 8)))))) + *((int *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00bcf090 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00bcf090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 2 + (int)this)));
}

/* ref: FUN_00bcf0b0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00bcf0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((*(int *)this + param_1 * 2 + (int)this)));
}

/* ref: FUN_00bcf0f0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00bcf0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 2 + (int)this)));
}

/* ref: FUN_00bcf110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *param_1;
  if (*param_1 != 0) {
    *((int *)GEN_TOP((*param_1 + 8))) = (int)this - 8;
  }
  *param_1 = (int)this - 8;
  return (uint)param_1;
}

/* ref: FUN_00bcf140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *param_1 = (int)this - 8;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *((int *)GEN_TOP((iVar2 + 0xc)));
  } while (*((int *)GEN_TOP((iVar2 + 0xc))) != 0);
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *((uint *)GEN_TOP((iVar2 + 0xc))) = (int)this - 8U;
    *(int *)this = iVar2;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return (int)this - 8U;
  }
  *((undefined4 *)GEN_TOP((iVar2 + 0xc))) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00bcf270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf270(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcf290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00bcf2c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bcf2c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbcf2c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x28))) = param_2;
  return;
}

/* ref: FUN_00bcf2e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcf2e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbcf2e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  bool bVar1;
  bool bVar2;
  
  bVar1 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar2 = param_2 == *(float *)&REFG(undefined, 0x1088114);
  *((float *)GEN_TOP((in_ecx + 0x70))) = param_2;
  if ((GEN_ISNAN(param_2) || bVar1) == ((GEN_ISNAN(param_2) || bVar1) || bVar2)) {
    *((float *)GEN_TOP((in_ecx + 0x6c))) = param_2;
  }
  else {
    *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = *((undefined4 *)GEN_TOP((in_ecx + 0x68)));
  }
  *((byte *)GEN_TOP((in_ecx + 0x83))) = param_3;
  *((byte *)GEN_TOP((in_ecx + 0x84))) = param_3;
  *((float *)GEN_TOP((in_ecx + 100))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x60))) + (float10)*((float *)GEN_TOP((in_ecx + 0x6c))))));
  return param_3;
}

/* ref: FUN_00bcf340 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bcf340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 0x80))) != '\0') {
    return 1;
  }
  if (*((int *)GEN_TOP((in_ecx + 0x74))) == 0) {
    return 0;
  }
  return 1 - (1 < *((uint *)GEN_TOP((in_ecx + 0x78))));
}

/* ref: FUN_00bcf380 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcf380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x85))) = param_2;
  return param_2;
}

/* ref: FUN_00bcf3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf3c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = ((uint)param_2 << 6 ^ *((uint *)GEN_TOP((in_ecx + 0xe0)))) & 0x40;
  *((uint *)GEN_TOP((in_ecx + 0xe0))) = *((uint *)GEN_TOP((in_ecx + 0xe0))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00bcf400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x104))) = param_2;
  return param_2;
}

/* ref: FUN_00bcf470 */
GEN_OWN GEN_FRAME float10 F_00bcf470(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbcf470u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcf490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pSVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_00bc2160((undefined *)this GEN_EDX_FWD);
  if (*(int *)(this + 0xcc) != 0) {
    F_00b5c650(*(int *)(this + 0xcc));
    *(undefined4 *)(this + 0xcc) = 0;
  }
  pSVar1 = *(undefined * PTR32 *)(this + 0xd4);
  if ((pSVar1 != ((undefined *)GEN_TOP(0x0))) && (pSVar1 != this + 0xa0)) {
    F_00406b30(pSVar1);
    *(undefined4 *)(this + 0xd4) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x1cc) != 0) {
    uVar3 = F_00406b30(*(int *)(this + 0x1cc));
    uVar2 = (uint)uVar3;
    *(undefined4 *)(this + 0x1cc) = 0;
  }
  return uVar2;
}

/* ref: FUN_00bcf500 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bcf500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (((*((int *)GEN_TOP((in_ecx + 0x24))) != 6) && (*((char *)GEN_TOP((in_ecx + 0xf0))) == '\0')) &&
     (*((char *)GEN_TOP((in_ecx + 0xf1))) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf10 */
GEN_OWN GEN_NOFRAME double F_00bcf520(void)
{
  GEN_ENTER(0xbcf520u, 0u, 0u, 0u, 0u);
  return 0.0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf11 */
GEN_OWN GEN_NOFRAME double F_00bcf530(void)
{
  GEN_ENTER(0xbcf530u, 0u, 0u, 0u, 0u);
  return 0.0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf12 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00bcf540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float10 fVar1;
  
  if (*((char *)GEN_TOP((in_ecx + 0xd))) == '\0') {
    return (float10)0;
  }
  if (*((char *)GEN_TOP((in_ecx + 0x30))) != '\0') {
    fVar1 = (float10)*((int *)GEN_TOP((in_ecx + 0x34)));
    if (*((int *)GEN_TOP((in_ecx + 0x34))) < 0) {
      fVar1 = GEN_X87(fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    return -(float10)(float)fVar1;
  }
  if (*((char *)GEN_TOP((in_ecx + 0x80))) != '\0') {
    return -(float10)*((float *)GEN_TOP((in_ecx + 0x6c)));
  }
  return -(float10)*((float *)GEN_TOP((in_ecx + 0x58)));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf13 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  code * pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD);
  if ((uVar3 == 0) && (this[0x80] == (undefined1)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  F_00bc29d0(this GEN_EDX_ARG,uVar6);
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x1c)));
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  this[0xe4] = (undefined1)0x0;
  uVar3 = (*pcVar2)(this,10,&REFG(undefined, 0x13056c0));
  fVar1 = *(float *)(this + 0x24c);
  bVar4 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar5 = bVar4 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                   CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1),
                            (char)uVar3));
  if (bVar4 == bVar5) {
    uVar3 = F_00bc3780(this GEN_EDX_ARG,fVar1);
  }
  this[0x249] = (undefined1)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  return uVar3;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf19 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcf640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xfc, 4, 4);
  undefined * pSVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8);
  (*(uint *)(gen_frame + 0xf4)) = uVar3;
  if (*(int *)(this + 0xf4) != 0) {
    ((undefined4 *)(gen_frame + 0x4))[0] = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
    bVar2 = F_00bc2920(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)));
    uVar3 = CONCAT31(extraout_var,bVar2);
    while (bVar2 != 0) {
      if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x2c))) == 0x17) && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x88))) != '\0')) {
        uVar3 = F_00be3060((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        pSVar1 = this + 0xf4;
        *(int *)pSVar1 = *(int *)pSVar1 - 1;
        if (*(int *)pSVar1 == 0) break;
      }
      bVar2 = F_00bc2920(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)));
      uVar3 = CONCAT31(extraout_var_00,bVar2);
    }
    *(undefined4 *)(this + 0xf4) = 0;
  }
  return uVar3;
}

/* ref: FUN_00bcf6f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bcf6f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbcf6f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0x34, 12, 4);
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined1 TVar4;
  float10 fVar5;
  float10 fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30));
  uVar3 = *(uint *)(param_1 + 0x138) >> 1;
  (*(float *)(gen_frame + 0x0)) = 0.0;
  if (((uVar3 & 1) == 0) && (((byte)param_1[0x138] & 1) == 0)) {
    if (param_1[0x80] != (undefined1)0x0) {
      param_2 = 0.0;
    }
    fVar1 = *(float *)(param_1 + 0x6c);
    (*(float *)(gen_frame + 0x8)) = fVar1;
    (*(float *)(gen_frame + 0x4)) = param_2;
    if ((float10)fVar1 < (float10)param_2) {
      (*(float *)(gen_frame + 0x4)) = fVar1;
    }
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffdff;
    if (0.0 < (*(float *)(gen_frame + 0x4))) {
      do {
        if (REFG(float, 0x1087f04) < (*(float *)(gen_frame + 0x4))) {
          (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)REFG(double, 0x1088130));
        }
        else {
          (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x4));
          (*(float *)(gen_frame + 0x4)) = 0.0;
        }
        fVar1 = (*(float *)(gen_frame + 0x8));
        bVar2 = F_00bc1d60(param_1 GEN_EDX_FWD);
        if (bVar2 == 0) {
          if (param_1[0xe] != (undefined1)0x0) {
            param_1[0x84] = (undefined1)0x0;
          }
          bVar2 = F_00bc2d10(param_1 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x8)));
          if (bVar2 != 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x1c))))(param_1 GEN_EDX_ARG,0xb,&REFG(undefined, 0x13056c0));
            F_00bc27a0(param_1 GEN_EDX_ARG,6);
          }
        }
        *(float *)(param_1 + 0x28) = (*(float *)(gen_frame + 0x4));
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(float *)(gen_frame + 0x24)) = 0.0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1c)) + 0)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x8));
        F_00bc3080(param_1 GEN_EDX_ARG,0x10,&(*(undefined4 *)(gen_frame + 0x1c)));
        bVar2 = F_00bc23a0(param_1 GEN_EDX_ARG,0x12);
        TVar4 = (undefined1)(bVar2 == 0);
        param_1[0x249] = TVar4;
        if ((bool)TVar4) {
          return CONCAT31(extraout_var,TVar4);
        }
        if (param_3 != '\0') {
          F_00bc3080(param_1 GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
        }
        fVar5 = (float10)(*(float *)(gen_frame + 0x8));
        (*(float *)(gen_frame + 0x0)) = (float)(fVar5 + (float10)(*(float *)(gen_frame + 0x0)));
        if ((GEN_ISNAN((*(float *)(gen_frame + 0x8))) == (GEN_ISNAN((*(float *)(gen_frame + 0x8))) || (*(float *)(gen_frame + 0x8)) == 0.0)) &&
           (fVar6 = (float10)fVar1,
           (GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) || fVar5 == fVar6))) {
          (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((fVar6 - fVar5) + (float10)(*(float *)(gen_frame + 0x4)))));
        }
      } while (!GEN_ISNAN((*(float *)(gen_frame + 0x4))) && !((*(float *)(gen_frame + 0x4)) <= 0.0));
    }
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x0));
    bVar2 = F_00bc3080(param_1 GEN_EDX_ARG,0x11,&(*(undefined4 *)(gen_frame + 0xc)));
    uVar3 = CONCAT31(extraout_var_00,bVar2);
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf16 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bcf8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  bool bVar1;
  byte bVar2;
  uint uVar3;
  
  if (this[0x11] == (undefined1)0x0) {
    F_00bc2770((undefined *)this GEN_EDX_FWD,param_1);
    bVar1 = false;
    if ((((byte)this[0x138] & 0x10) != 0) &&
       (bVar2 = F_00bbad60(param_1 GEN_EDX_ARG,*(undefined4 *)(this + 0x13c)), bVar2 != 0)) {
      bVar1 = true;
    }
    uVar3 = F_00bbaea0(param_1 GEN_EDX_ARG,this + 0x110);
    if ((char)uVar3 != '\0') {
      bVar1 = true;
    }
    uVar3 = F_00bbaea0(param_1 GEN_EDX_ARG,this + 0x124);
    if (((char)uVar3 != '\0') || (bVar1)) {
      *(uint *)(this + 0xe0) = *(uint *)(this + 0xe0) & 0xffffff7f;
      F_00bc2850(this GEN_EDX_ARG);
      if (*(int *)(this + 0xcc) != 0) {
        F_00b5c650(*(int *)(this + 0xcc));
        *(undefined4 *)(this + 0xcc) = 0;
      }
    }
  }
  return;
}

/* ref: FUN_00bcf970 */
GEN_OWN GEN_NOFRAME unsigned int F_00bcf970(void)
{
  GEN_ENTER(0xbcf970u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00bcf980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcf980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((uint *)GEN_TOP(((int)this + 0xe0))) = *((uint *)GEN_TOP(((int)this + 0xe0))) & 0xffffff7f;
  F_00bc2850(this GEN_EDX_FWD);
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xcc))) != 0) {
    uVar1 = F_00b5c650(*((int *)GEN_TOP(((int)this + 0xcc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bcf9c0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bcf9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (((*((char *)GEN_TOP(((int)this + 10))) != '\0') || (*((char *)GEN_TOP(((int)this + 0xd))) != '\0')) &&
     (*((char *)GEN_TOP(((int)this + 0xf))) == '\0')) {
    if (*((int *)GEN_TOP(((int)this + 0x24))) != 6) {
      return 0;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
    return (char)uVar1 != '\0';
  }
  return 1;
}

/* ref: FUN_00bcf9f0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00bcf9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbcf9f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0xfc, 4, 4);
  byte bVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xf4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8));
  if (((*((byte *)GEN_TOP(((int)this + 0x138))) & 8) != 0) && (*((int *)GEN_TOP(((int)this + 0x200))) == param_1)) {
    ((undefined4 *)(gen_frame + 0x4))[0] = 0;
    (*(int *)(gen_frame + 0x0)) = 0;
    bVar1 = F_00bc2920(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)));
    while (bVar1 != 0) {
      if ((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x2c))) == 8) && (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x58))) != 0)) {
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x58))) != 0) {
          *((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x58))) = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x58))) - 1;
        }
        *((uint *)GEN_TOP(((int)this + 0xe0))) = *((uint *)GEN_TOP(((int)this + 0xe0))) | 1;
        *param_2 = *((undefined4 *)GEN_TOP(((int)this + 0x230)));
        return 1;
      }
      bVar1 = F_00bc2920(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)));
    }
    *((uint *)GEN_TOP(((int)this + 0xe0))) = *((uint *)GEN_TOP(((int)this + 0xe0))) | 1;
  }
  return 0;
}

/* ref: FUN_00bcfad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcfad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar2 == '\0') {
    if (((*((byte *)GEN_TOP(((int)this + 0x138))) & 8) != 0) && (*((char *)GEN_TOP(((int)this + 0x213))) != '\0')) {
      *((undefined1 *)GEN_TOP(((int)this + 0x213))) = 0;
      *((undefined1 *)GEN_TOP(((int)this + 0x85))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 1;
    }
    if (*((char *)GEN_TOP(((int)this + 10))) != '\0') {
      *((undefined1 *)GEN_TOP(((int)this + 10))) = 0;
    }
    if (param_1 != 0) {
      bVar1 = F_00bc32d0(this GEN_EDX_ARG,1,0);
      return CONCAT31(extraout_var,bVar1);
    }
    bVar1 = F_00bc32d0(this GEN_EDX_ARG,3,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00bcfb40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcfb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) & 0xfffffff7;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
  if (param_1 != 0) {
    bVar1 = F_00bc2450(this GEN_EDX_FWD,param_1,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00bcfb80 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bcfb80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfb80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x24))) == 6) {
    return 1;
  }
  return *((int *)GEN_TOP((in_ecx + 0x24))) == 5;
}

/* ref: FUN_00bcfba0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bcfba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  if ((((*((int *)GEN_TOP((in_ecx + 0x24))) == 6) && (uVar1 = *((uint *)GEN_TOP((in_ecx + 0xe0))), (uVar1 & 0x10) == 0))
      && ((uVar1 & 6) == 0)) && ((uVar1 & 8) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bcfbc0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bcfbc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0x104))) != 1) && (*((int *)GEN_TOP((in_ecx + 0x104))) != 2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bcfbe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcfbe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((byte *)GEN_TOP((in_ecx + 0x138))) & 8) != 0) {
    return *((uint *)GEN_TOP((in_ecx + 0x200)));
  }
  return 0;
}

/* ref: FUN_00bcfc00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcfc00(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbcfc00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  bool bVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  fVar5 = (float10)param_2;
  fVar6 = (float10)*(float *)(param_1 + 0x250);
  bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
  bVar4 = bVar3 || fVar6 == fVar5;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),(char)uVar2));
  if (bVar3 == bVar4) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    *(float *)(param_1 + 0x250) = param_2;
    (*(float *)(gen_frame + 0x8)) = param_2;
    bVar1 = F_00bc3080(param_1 GEN_EDX_FWD,0x21,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00bcfc70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bcfc70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbcfc70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(float *)(gen_frame + 0x8)) = param_2;
  bVar1 = F_00bc3080(param_1 GEN_EDX_FWD,0x22,&(*(undefined4 *)(gen_frame + 0x0)));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00bcfcc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcfcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbcfcc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  ulonglong uVar2;
  
  *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) | 0x10;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x140))) = param_2;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar2 = F_00c46aa0((int)this + 0x148,param_3,param_2 * 4);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcfd00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x138))) >> 4 & 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf31 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcfd10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x13c)));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf32 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcfd20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x140)));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcfd30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (*((uint *)GEN_TOP((in_ecx + 0x140))) <= param_2) {
    return *((uint *)GEN_TOP((in_ecx + 0x13c)));
  }
  return *((uint *)GEN_TOP((in_ecx + 0x148 + param_2 * 4)));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcfd60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x140)));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf34 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcfd70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c8)));
}

/* ref: FUN_00bcfd80 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bcfd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x94))))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    return *((byte *)GEN_TOP((uVar1 + 0x44)));
  }
  return 0;
}

/* ref: FUN_00bcfda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcfda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *param_1 = 0xffffffff;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x94))))(this GEN_EDX_FWD);
  if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 0x44))) != 0)) {
    *param_1 = *((undefined4 *)GEN_TOP(((int)this + 200)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bcfdf0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bcfdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x94))))(this GEN_EDX_FWD);
  if (((uVar1 == 0) || (*((int *)GEN_TOP((uVar1 + 0x18))) != 0)) &&
     (((*((byte *)GEN_TOP(((int)this + 0x138))) & 0x40) == 0 || (*((int *)GEN_TOP(((int)this + 0x1d4))) != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bcfe30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bcfe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfe30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x94))))(this GEN_EDX_FWD);
  if ((uVar1 != 0) && (-1 < *((int *)GEN_TOP((uVar1 + 0x18))))) {
    *param_1 = *((int *)GEN_TOP((uVar1 + 0x18)));
    return 1;
  }
  if ((*((byte *)GEN_TOP(((int)this + 0x138))) & 0x40) != 0) {
    *param_1 = *((int *)GEN_TOP(((int)this + 0x1d4)));
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcfe80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (((*((byte *)GEN_TOP((in_ecx + 0x138))) & 8) != 0) && (*((char *)GEN_TOP((in_ecx + 0x213))) != '\0')) {
    return 0;
  }
  return *((uint *)GEN_TOP((in_ecx + 0x1d0)));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcfea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((byte *)GEN_TOP((in_ecx + 0x138))) & 8) != 0) {
    return *((uint *)GEN_TOP((in_ecx + 0x204)));
  }
  return *((uint *)GEN_TOP((in_ecx + 0x1d0)));
}

/* ref: FUN_00bcfec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcfec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bc2a40(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    F_00bc3bb0(param_1);
  }
  uVar1 = ((param_1 & 0xff) << 5 ^ *((uint *)GEN_TOP(((int)this + 0xe0)))) & 0x20;
  *((uint *)GEN_TOP(((int)this + 0xe0))) = *((uint *)GEN_TOP(((int)this + 0xe0))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00bcff00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcff00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcff00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x24a))) != '\0') {
    return 0;
  }
  if ((((*((char *)GEN_TOP(((int)this + 8))) == '\0') || ((*((uint *)GEN_TOP(((int)this + 0xe0))) >> 7 & 1) != 0)) ||
      (*((char *)GEN_TOP(((int)this + 0xd))) == '\0')) ||
     ((*((char *)GEN_TOP(((int)this + 0xf))) != '\0' ||
      (fVar1 = F_00bc2b40(this GEN_EDX_FWD), (float10)fVar1 < (float10)0)))) {
    return 0xffffffff;
  }
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  if (fVar1 <= REFG(float, 0x1087f04)) {
    return 1;
  }
  return (int)fVar1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf41 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcff80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbcff80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((*(int *)(this + 0xdc) != 0) || (*(int *)(this + 0x1c8) != 0)) {
    uVar4 = F_00bc3620(this GEN_EDX_FWD,param_1,*((undefined4 *)GEN_TOP((param_2 + 8))),(uint)*((ushort *)GEN_TOP((param_2 + 2))),
                         param_3,0);
    return uVar4;
  }
  if (*((short *)GEN_TOP((param_2 + 2))) == 2) {
    if (*(uint *)(this + 0x140) <= param_3) {
      return 0;
    }
    uVar4 = F_00b59e60(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,*(undefined4 *)(this + param_3 * 4 + 0x148));
    uVar4 = F_00bc3520(this GEN_EDX_ARG,param_1,uVar4,(uint)*((ushort *)GEN_TOP((param_2 + 2))),param_3,0);
    *((undefined * PTR32 *)GEN_TOP((uVar4 + 4))) = this;
  }
  else {
    if (((byte)this[0x138] & 0x10) == 0) {
      uVar2 = F_00b59f00(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,this + 0x110);
      if ((uVar2 != 0) ||
         (uVar2 = F_00b597c0(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 8)))), uVar2 != 0)) {
LAB_00bd007d: ;
        uVar4 = F_00bc3520(this GEN_EDX_ARG,param_1,uVar2,(uint)*((ushort *)GEN_TOP((param_2 + 2))),0,0);
        *((undefined * PTR32 *)GEN_TOP((uVar4 + 4))) = this;
        return uVar4;
      }
      uVar3 = F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 8))),0,0);
      if (uVar3 == 0) {
        return 0;
      }
      uVar2 = F_00b59750(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,uVar3,0);
      if (uVar2 != 0) goto LAB_00bd007d;
      uVar2 = F_00b59f90(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,uVar3);
    }
    else {
      uVar1 = *(undefined4 *)(this + 0x13c);
      if ((*(undefined * PTR32 *)(this + 0x10c) != ((undefined *)GEN_TOP(0x0))) &&
         (uVar2 = F_00b68410(*(undefined * PTR32 *)(this + 0x10c) GEN_EDX_ARG), uVar2 != 0)) goto LAB_00bd007d;
      uVar2 = F_00b59e60(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,uVar1);
    }
    if (uVar2 != 0) {
      uVar4 = F_00bc3520(this GEN_EDX_ARG,param_1,uVar2,(uint)*((ushort *)GEN_TOP((param_2 + 2))),0,0);
      *((undefined * PTR32 *)GEN_TOP((uVar4 + 4))) = this;
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf42 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd0110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd0110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (*(int *)(this + 0xdc) == 0) {
    if (*((short *)GEN_TOP((param_1 + 2))) != 2) {
      uVar2 = F_00406b90(0x1c,0,0);
      if (uVar2 == 0) {
        pvVar3 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        pvVar3 = ((undefined *)GEN_TOP(F_00bccbd0(uVar2 GEN_EDX_ARG)));
      }
      if (((byte)this[0x138] & 0x10) != 0) {
        F_00bbadf0(pvVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x13c),0);
        return (uint)pvVar3;
      }
      F_00bccc00(pvVar3 GEN_EDX_ARG,this + 0x110);
      return (uint)pvVar3;
    }
    if (*(uint *)(this + 0x140) <= param_2) {
      return 0;
    }
    uVar1 = *(undefined4 *)(this + param_2 * 4 + 0x148);
    uVar2 = F_00406b90(0x1c,0,0);
    if (uVar2 != 0) {
      pvVar3 = ((undefined *)GEN_TOP(F_00bccbd0(uVar2 GEN_EDX_ARG)));
      F_00bbadf0(pvVar3 GEN_EDX_ARG,uVar1,0);
      return (uint)pvVar3;
    }
    F_00bbadf0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG,uVar1,0);
  }
  return 0;
}

/* ref: FUN_00bd01e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd01e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd01e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0xdc))) != 0) {
    return 0x68;
  }
  if ((*((int *)GEN_TOP((in_ecx + 0x1c8))) != 0) || (uVar1 = 0x67, *((int *)GEN_TOP((in_ecx + 0x1cc))) != 0)) {
    uVar1 = 0x66;
  }
  return uVar1;
}

/* ref: FUN_00bd0210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd0210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd0210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  F_00bc2080(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((uint *)GEN_TOP(((int)this + 0xe0))) = *((uint *)GEN_TOP(((int)this + 0xe0))) & 0xfffffa00;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1106724));
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = param_1;
  F_00bbac80((int)this + 0x110 GEN_EDX_ARG);
  F_00bbac80((int)this + 0x124 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) & 0xffffff00;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1fc))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x210))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x230))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x234))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0xffffffff;
  *((undefined2 *)GEN_TOP(((int)this + 0x248))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x240))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x244))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x24a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x250))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)this + 0xa0))) = 0;
  F_00bbaca0((int)this + 0x110 GEN_EDX_ARG);
  F_00bbaca0((int)this + 0x124 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00bd03c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd03c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd03c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1106724));
  F_00bcf490(this GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x124))) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x110))) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  uVar1 = F_00bc2fd0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd03f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd03f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] == (undefined1)0x0) {
    return 0;
  }
  if (this[10] != (undefined1)0x0) {
    return 0;
  }
  uVar2 = F_00bd01e0(this GEN_EDX_FWD);
  if (uVar2 == 0x66) {
    bVar1 = F_00bcf340(((undefined4)(uint)(this)) GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = F_00bc22a0(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
    if (this[0xb] != (undefined1)0x0) goto LAB_00bd0491;
  }
  else {
    if (uVar2 == 0x67) {
      bVar1 = F_00bcf340(((undefined4)(uint)(this)) GEN_EDX_ARG);
      if (bVar1 == 0) {
        return 0;
      }
      if (((this[0xb] == (undefined1)0x0) && (((byte)this[0x2c] & 1) == 0)) && (bVar1 = F_00bc1d60(this GEN_EDX_ARG), bVar1 == 0)) {
        return 0;
      }
      bVar1 = F_00bc22a0(this GEN_EDX_ARG);
      if (bVar1 == 0) {
        return 0;
      }
      if (((byte)this[0xe0] & 0x80) != 0) {
        return 0;
      }
      goto LAB_00bd0491;
    }
    if (uVar2 != 0x68) {
      return 0;
    }
    bVar1 = F_00bcf340(((undefined4)(uint)(this)) GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = F_00bc22a0(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
  }
  bVar1 = F_00bc1d60(this GEN_EDX_ARG);
  if (bVar1 == 0) {
    return 0;
  }
LAB_00bd0491: ;
  this[0xc] = (undefined1)0x0;
  this[0xd] = (undefined1)0x1;
  this[10] = (undefined1)0x0;
  this[0xb] = (undefined1)0x0;
  F_00b61910(this GEN_EDX_ARG);
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd04b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd04b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (this[0x11] != (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
    return 1;
  }
  if ((this[0x10] != (undefined1)0x0) &&
     (((*(int *)(this + 0xdc) == 0 || (((byte)this[0x2c] & 1) != 0)) &&
      (this[0x248] != (undefined1)0x0)))) {
    bVar1 = F_00bc22e0(this GEN_EDX_ARG);
    if (bVar1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG);
      this[0x11] = (undefined1)0x1;
      this[0x15] = (undefined1)0x0;
      if (*(int *)(this + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf24 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd0510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  byte bVar4;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x94))))(this GEN_EDX_FWD);
  if (((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 0x1c))) != -1)) &&
     (uVar2 = *(uint *)(this + 0xe0) >> 7, (uVar2 & 1) == 0)) {
    iVar1 = *(int *)(this + 200);
    *(undefined4 *)(this + 0x20c) = 0xffffffff;
    if ((iVar1 != -1) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_ARG), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(F_00475fd0(uVar2)));
      uVar2 = 0;
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00a5f290(this_00 GEN_EDX_ARG);
        uVar2 = 0;
        if (uVar3 != 0) {
          bVar4 = (byte)this[0x2c] & 1;
          uVar2 = F_00bcfbe0(this GEN_EDX_ARG);
          uVar2 = F_00aa4360(uVar3 GEN_EDX_ARG,iVar1,uVar2,bVar4);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00bd05a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd05a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd05a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc, 4);
  float fVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  bVar2 = *((byte *)GEN_TOP(((int)this + 0x138)));
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(byte *)(gen_frame + 0x7)) = 0;
  if (((bVar2 & 8) == 0) ||
     ((fVar7 = *((float *)GEN_TOP(((int)this + 0x1f0))), GEN_ISNAN(fVar7) != (GEN_ISNAN(fVar7) || fVar7 == 0.0) &&
      (fVar7 = *((float *)GEN_TOP(((int)this + 500))), GEN_ISNAN(fVar7) != (GEN_ISNAN(fVar7) || fVar7 == 0.0))))) {
    fVar7 = (float)(float10)0;
  }
  else {
    fVar7 = *((float *)GEN_TOP(((int)this + 500)));
  }
  F_00bc2660(GEN_ARGF(this) GEN_EDX_FWD,(float)(float10)0,fVar7,(float)(float10)1,0,1,&(*(float *)(gen_frame + 0x0)),&(*(byte *)(gen_frame + 0x7)));
  if (*((int *)GEN_TOP(((int)this + 0xdc))) == 0) {
    if ((*((int *)GEN_TOP(((int)this + 0x1c8))) != 0) || (iVar5 = 0x67, *((int *)GEN_TOP(((int)this + 0x1cc))) != 0)) {
      iVar5 = 0x66;
    }
  }
  else {
    iVar5 = 0x68;
  }
  fVar7 = (*(float *)(gen_frame + 0x0));
  if (iVar5 == 0x66) {
    fVar1 = *((float *)GEN_TOP(((int)this + 0x68)));
    if ((float10)(*(float *)(gen_frame + 0x0)) < (float10)fVar1) {
      fVar7 = fVar1;
    }
    bVar3 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar4 = fVar7 == *(float *)&REFG(undefined, 0x1088114);
    *((float *)GEN_TOP(((int)this + 0x70))) = fVar7;
    if ((GEN_ISNAN(fVar7) || bVar3) == ((GEN_ISNAN(fVar7) || bVar3) || bVar4)) {
LAB_00bd06b8: ;
      *((float *)GEN_TOP(((int)this + 0x6c))) = fVar7;
    }
    else {
      *((float *)GEN_TOP(((int)this + 0x6c))) = fVar1;
    }
  }
  else {
    uVar6 = iVar5 - 0x67;
    if (uVar6 != 0) goto LAB_00bd06dc;
    bVar3 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar4 = (*(float *)(gen_frame + 0x0)) == *(float *)&REFG(undefined, 0x1088114);
    *((float *)GEN_TOP(((int)this + 0x70))) = (*(float *)(gen_frame + 0x0));
    if ((GEN_ISNAN((*(float *)(gen_frame + 0x0))) || bVar3) == ((GEN_ISNAN((*(float *)(gen_frame + 0x0))) || bVar3) || bVar4)) goto LAB_00bd06b8;
    *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
  }
  uVar6 = (uint)(*(byte *)(gen_frame + 0x7));
  *((byte *)GEN_TOP(((int)this + 0x84))) = (*(byte *)(gen_frame + 0x7));
  *((byte *)GEN_TOP(((int)this + 0x83))) = (*(byte *)(gen_frame + 0x7));
  *((float *)GEN_TOP(((int)this + 100))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x60))) + (float10)*((float *)GEN_TOP(((int)this + 0x6c))))));
LAB_00bd06dc: ;
  return (byte)uVar6;
}

/* ref: FUN_00bd06f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bd06f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd06f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  if (((((*((uint *)GEN_TOP(((int)this + 0xe0))) & 6) == 0) && ((*((uint *)GEN_TOP(((int)this + 0xe0))) & 8) != 0)) &&
      (*((int *)GEN_TOP(((int)this + 0x74))) == 0)) &&
     ((*((int *)GEN_TOP(((int)this + 0x104))) == 1 || (*((int *)GEN_TOP(((int)this + 0x104))) == 2)))) {
    F_00bc29d0(this GEN_EDX_FWD,1);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
    if ((uVar2 < 0x158) && (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)])) != ((undefined *)GEN_TOP(0x0)))) {
      this_00 = ((undefined *)GEN_TOP(F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)])) GEN_EDX_ARG)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        if ((*((byte *)GEN_TOP(((int)this + 0x138))) & 8) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x200)));
        }
        F_00aa70a0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 200))),uVar3);
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x30))) == '\0') {
    F_00bc27a0(this GEN_EDX_ARG,4);
    bVar1 = F_00bc23a0(this GEN_EDX_ARG,0x12);
    *((bool *)GEN_TOP(((int)this + 0x249))) = bVar1 == 0;
    if (bVar1 != 0) {
      F_00bc3080(this GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x94))))(this GEN_EDX_ARG);
    if ((uVar2 == 0) || (*((char *)GEN_TOP((uVar2 + 0x21))) == '\0')) goto LAB_00bd0816;
    uVar3 = 0x23;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_00bc3080(this GEN_EDX_ARG,0x1d,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00bc23a0(this GEN_EDX_ARG,0x1a);
    uVar3 = 0x13;
  }
  bVar1 = F_00bc3080(this GEN_EDX_ARG,uVar3,&REFG(undefined, 0x13056c0));
  uVar2 = CONCAT31(extraout_var,bVar1);
LAB_00bd0816: ;
  *((uint *)GEN_TOP(((int)this + 0xe0))) = *((uint *)GEN_TOP(((int)this + 0xe0))) | 0x200;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  return uVar2;
}

/* ref: FUN_00bd0840 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd0840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  F_00bc26d0(this GEN_EDX_FWD,1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x94))))(this GEN_EDX_ARG);
  if (((uVar2 != 0) && (iVar1 = *((int *)GEN_TOP((uVar2 + 0x1c))), 0 < iVar1)) &&
     (uVar2 = F_00bcff00(this GEN_EDX_ARG), (int)uVar2 <= iVar1)) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00bd0880 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd0880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd0880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  if (((*((byte *)GEN_TOP(((int)this + 0x138))) & 8) != 0) && (*((char *)GEN_TOP(((int)this + 0x213))) != '\0')) {
    *((undefined1 *)GEN_TOP(((int)this + 0x213))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x85))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 1;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x248))) = 1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    return 0;
  }
  if (*((char *)GEN_TOP(((int)this + 10))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 10))) = 0;
  }
  if (param_2 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  }
  bVar1 = F_00bc32d0(this GEN_EDX_ARG,param_1,param_2);
  if (param_1 == 3) {
    F_00b61970(this GEN_EDX_ARG);
  }
  return bVar1;
}

/* ref: FUN_00bd0910 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd0910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x138)));
  if (-1 < (char)uVar1) {
    *((uint *)GEN_TOP(((int)this + 0x138))) = uVar1 | 0x80;
    if (((uVar1 & 8) != 0) && (*((char *)GEN_TOP(((int)this + 0x213))) != '\0')) {
      *((undefined1 *)GEN_TOP(((int)this + 0x213))) = 0;
      *((undefined1 *)GEN_TOP(((int)this + 0x85))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 1;
    }
    F_00bc32d0(this GEN_EDX_FWD,3,0);
    F_00bc22e0(this GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP(((int)this + 0x248))) = 1;
    uVar1 = F_00b61970(this GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00bd0970 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bd0970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xfc, 4, 4);
  int iVar1;
  int * this_00;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xf4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8));
  if (((*((byte *)GEN_TOP(((int)this + 0x138))) & 8) != 0) && (*((char *)GEN_TOP(((int)this + 0x213))) != '\0')) {
    *((undefined1 *)GEN_TOP(((int)this + 0x213))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x85))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 1;
  }
  ((undefined4 *)(gen_frame + 0x4))[0] = 0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  bVar2 = F_00bc2920(this GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)));
  uVar3 = CONCAT31(extraout_var,bVar2);
  this_00 = (*(int * PTR32 *)(gen_frame + 0x0));
  do {
    (*(int * PTR32 *)(gen_frame + 0x0)) = this_00;
    if (bVar2 == 0) {
      if (*((int *)GEN_TOP(((int)this + 0x24))) != 6) {
        F_00bc32d0(this GEN_EDX_ARG,3,0);
        F_00bc22e0(this GEN_EDX_ARG);
        uVar3 = F_00b61970(this GEN_EDX_ARG);
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x24a))) = 1;
      *((undefined1 *)GEN_TOP(((int)this + 0x248))) = 1;
      return uVar3;
    }
    iVar1 = this_00[0xb];
    if (iVar1 == 0) {
LAB_00bd09f5: ;
      if (*((int *)GEN_TOP(((int)this + 0x24))) != 6) goto LAB_00bd09fa;
    }
    else {
      if (iVar1 == 6) {
        if (((*((int *)GEN_TOP(((int)this + 0x24))) == 6) && (uVar3 = F_00be5a60(this_00 GEN_EDX_ARG), uVar3 == 0)) &&
           ((char)this_00[3] != '\0')) goto LAB_00bd0a06;
      }
      else if (iVar1 == 7) goto LAB_00bd09f5;
LAB_00bd09fa: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0xec))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    }
LAB_00bd0a06: ;
    bVar2 = F_00bc2920(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)));
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    this_00 = (*(int * PTR32 *)(gen_frame + 0x0));
  } while( true );
}

/* ref: FUN_00bd0a80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd0a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd0a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  bool bVar1;
  
  if (0 < *((int *)GEN_TOP(((int)this + 0x1dc)))) {
    if (param_1 == 0) {
      bVar1 = (*((byte *)GEN_TOP(((int)this + 0x138))) & 8) == 0;
    }
    else if ((*((byte *)GEN_TOP(((int)this + 0x138))) & 8) == 0) {
      bVar1 = *((int *)GEN_TOP((param_1 + 0x10))) == 0;
    }
    else {
      bVar1 = *((int *)GEN_TOP((param_1 + 0x10))) == *((int *)GEN_TOP(((int)this + 0x200)));
    }
    if (bVar1) {
      *((int *)GEN_TOP(((int)this + 0x1dc))) = *((int *)GEN_TOP(((int)this + 0x1dc))) - 1;
    }
  }
  return *((int *)GEN_TOP(((int)this + 0x1dc))) == 0;
}

/* ref: FUN_00bd0ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd0ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd0ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00bd18a0(((undefined *)GEN_TOP(((int)this + 0xfc))) GEN_EDX_FWD,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00bd0af0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  if ((*((int *)GEN_TOP(((int)this + 0xdc))) != 0) || (*((int *)GEN_TOP(((int)this + 0xd0))) != 0)) {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xcc)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = *((uint *)GEN_TOP(((int)this_00 + 0x5c))) >> 1;
    if (((uVar2 & 1) != 0) && ((uVar2 & 1) != 0)) {
      F_00bd0880(this GEN_EDX_FWD,3,0);
      F_00bc2320(this GEN_EDX_ARG);
      return 1;
    }
    bVar1 = F_00bcd860(this_00 GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bd0b50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd0b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 6) {
    if (*((int *)GEN_TOP(((int)this + 0x24))) == 2) {
      uVar1 = 0;
      if ((*((byte *)GEN_TOP(((int)this + 0x138))) & 8) != 0) {
        uVar1 = (int)this + 0x1f0;
      }
      F_00bc2550(this GEN_EDX_FWD,uVar1);
    }
    if (*((int *)GEN_TOP(((int)this + 0x24))) == 3) {
      F_00bc2630(this GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 4;
    }
    if (*((int *)GEN_TOP(((int)this + 0x24))) == 4) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,8,&REFG(undefined, 0x13056c0));
      if ((char)uVar1 == '\0') {
        return 0;
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      F_00bd05a0(this GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 5;
    }
    if ((*((int *)GEN_TOP(((int)this + 0x24))) != 5) || ((*((uint *)GEN_TOP(((int)this + 0x138))) >> 2 & 1) != 0)) {
      return 0;
    }
    *((uint *)GEN_TOP(((int)this + 0xe0))) = *((uint *)GEN_TOP(((int)this + 0xe0))) | 0x200;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0xe0)));
    uVar2 = uVar1 >> 4 & 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 6;
    if (((((uVar2 == 0) && ((uVar1 & 6) == 0)) && ((uVar1 & 8) != 0)) || (uVar2 != 0)) &&
       ((F_00bc27e0(this GEN_EDX_ARG), *((int *)GEN_TOP(((int)this + 0x104))) == 1 && (*((int *)GEN_TOP(((int)this + 0x10c))) != 0))
       )) {
      F_00b68400(*((undefined4 *)GEN_TOP(((int)this + 200))));
    }
  }
  return 1;
}

/* ref: FUN_00bd0c40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd0c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((((*((char *)GEN_TOP(((int)this + 0x10))) == '\0') && (*((char *)GEN_TOP(((int)this + 0xb))) == '\0')) &&
      (*((int *)GEN_TOP(((int)this + 0xdc))) != 0)) &&
     ((*((int *)GEN_TOP(((int)this + 0x88))) == 2 || (*((int *)GEN_TOP(((int)this + 0x88))) == 3)))) {
    F_00bd0880(this GEN_EDX_FWD,7,0);
  }
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG));
}

/* ref: FUN_00bd0c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd0c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd0c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) & 0xfffffffb;
  F_00bc2d00(this GEN_EDX_FWD);
  *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) & 0xfffffff7;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
  if (param_2 < 0) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x138))) & 0xffffffbf;
    *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  }
  else {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x138))) | 0x40;
    *((int *)GEN_TOP(((int)this + 0x1d4))) = param_2;
  }
  *((uint *)GEN_TOP(((int)this + 0x138))) = uVar2;
  bVar1 = F_00bd0b50(this GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 != 0) && (*((int *)GEN_TOP(((int)this + 0x24))) == 6)) {
    uVar2 = F_00bd06f0(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00bd0d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd0d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  this_00 = REFG(void * PTR32, 0x14c4e90);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x138))) >> 1;
  if (((uVar2 & 1) != 0) || (*((int *)GEN_TOP(((int)this + 0x24))) == 6)) goto LAB_00bd0e51;
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0x104))))) {
  case 1: ;
  case 2: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
    if (uVar2 != 0) {
      if (*((int *)GEN_TOP(((int)this + 0xcc))) == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x746d62));
        uVar2 = F_00b5e210(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG,(int)this + 0xfc,&(*(undefined * PTR32 *)(gen_frame + 0x0)),1);
        *((uint *)GEN_TOP(((int)this + 0xcc))) = uVar2;
      }
      if (*((int *)GEN_TOP(((int)this + 0x24))) == 0) {
        uVar3 = F_00bc3270(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xcc))));
        uVar2 = 0;
        if (uVar3 == 0) goto LAB_00bd0db0;
        bVar1 = F_00bc2450(this GEN_EDX_ARG,uVar3,1);
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 == 0) goto LAB_00bd0db0;
      }
      goto LAB_00bd0da1;
    }
    break;
  case 4: ;
    if (*((int *)GEN_TOP(((int)this + 0xcc))) == 0) {
      uVar3 = (uint)((byte)(*((uint *)GEN_TOP(((int)this + 0x138))) >> 5) & 1);
      uVar5 = 1;
      uVar4 = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
      uVar2 = F_00b5e280(this_00 GEN_EDX_ARG,0,uVar2,uVar4,uVar5,uVar3);
      *((uint *)GEN_TOP(((int)this + 0xcc))) = uVar2;
    }
    if (*((int *)GEN_TOP(((int)this + 0x24))) == 0) {
      uVar3 = F_00bc3270(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xcc))));
      uVar2 = 0;
      if (uVar3 == 0) goto LAB_00bd0db0;
      bVar1 = F_00bc2450(this GEN_EDX_ARG,uVar3,1);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var_01,bVar1);
      }
    }
    goto LAB_00bd0da1;
  case 5: ;
    if (*((int *)GEN_TOP(((int)this + 0x24))) == 0) {
      bVar1 = F_00bc2450(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xd0))),1);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var_02,bVar1);
      }
    }
LAB_00bd0da1: ;
    bVar1 = F_00bc2500(this GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 == 0) goto LAB_00bd0db0;
  }
  bVar1 = F_00bd0b50(this GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var_03,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00bd06f0(this GEN_EDX_ARG);
LAB_00bd0e51: ;
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
LAB_00bd0db0: ;
  return uVar2 & 0xffffff00;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd0e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = F_00bd0af0(this GEN_EDX_FWD);
  if (bVar1 == 0) {
    return 0;
  }
  bVar1 = F_00bc21c0((undefined *)this GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00bd0e90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd0e90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbd0e90u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1[0x11] == (undefined1)0x0) {
    if ((param_1[0x24a] != (undefined1)0x0) && (param_1[0xf] != (undefined1)0x0)) {
      F_00bc32d0(param_1 GEN_EDX_FWD,3,0);
      F_00bc22e0(param_1 GEN_EDX_ARG);
      param_1[0x248] = (undefined1)0x1;
      F_00b61970(param_1 GEN_EDX_ARG);
      return;
    }
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffdff;
    if (((*(int *)(param_1 + 0xcc) != 0) && (uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0xcc) + 0x5c))) >> 1, (uVar3 & 1) != 0)) && ((uVar3 & 1) != 0)) {
      F_00bc27e0(param_1 GEN_EDX_ARG);
    }
    F_00bc26d0(param_1 GEN_EDX_ARG,0);
    if (((*(int *)(param_1 + 0x24) != 6) && (uVar3 = F_00bd0d00(param_1 GEN_EDX_ARG), (char)uVar3 == '\0')) && ((*(uint *)(param_1 + 0x2c) >> 1 & 1) != 0)) {
      F_00bd0880(param_1 GEN_EDX_ARG,3,0);
      return;
    }
    if (((param_1[8] != (undefined1)0x0) || (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 4))))(param_1 GEN_EDX_ARG), (char)uVar3 != '\0')) && (*(int *)(param_1 + 0x24) == 6)) {
      if (param_1[0x24a] != (undefined1)0x0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x10))))(param_1 GEN_EDX_ARG);
        return;
      }
      if ((*(uint *)(param_1 + 0xe0) & 0x200) != 0) {
        param_2 = 0.0;
      }
      if (param_1[0x249] != (undefined1)0x0) {
        bVar2 = F_00bc23a0(param_1 GEN_EDX_ARG,0x12);
        param_1[0x249] = (undefined1)(bVar2 == 0);
        if (bVar2 == 0) {
          return;
        }
        if ((char)param_3 != '\0') {
          F_00bc3080(param_1 GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
        }
      }
      uVar3 = F_00bc1e50(param_1 GEN_EDX_ARG,0);
      if ((char)uVar3 == '\0') {
        fVar1 = *(float *)(param_1 + 0x250);
        if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) == ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar1 == REFG(float, 0x1087f04))) {
          param_2 = (float)((float10)fVar1 * (float10)param_2);
        }
      }
      else {
        param_2 = 0.0;
      }
      F_00bcf6f0(param_1 GEN_EDX_ARG,param_2,(char)param_3);
      if (*(int *)(param_1 + 0xf4) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x4c))))(param_1 GEN_EDX_ARG);
      }
      if ((((param_1[0x10] == (undefined1)0x0) && (param_1[0xb] == (undefined1)0x0)) && (uVar3 = F_00bd01e0(param_1 GEN_EDX_ARG), uVar3 == 0x68)) && (bVar2 = F_00bc1d60(((undefined4)(uint)(param_1)) GEN_EDX_ARG), bVar2 != 0)) {
        F_00bd0880(param_1 GEN_EDX_ARG,7,0);
      }
      if (param_1[0x14] != (undefined1)0x0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x10))))(param_1 GEN_EDX_ARG);
      }
    }
  }
  return;
}

/* ref: FUN_00bd1060 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd1060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x11))) == '\0') {
    if (((*((int *)GEN_TOP(((int)this + 0xcc))) != 0) &&
        (uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcc))) + 0x5c))) >> 1, (uVar1 & 1) != 0)) &&
       ((uVar1 & 1) != 0)) {
      F_00bc27e0(this GEN_EDX_FWD);
    }
    F_00bc26d0(this GEN_EDX_ARG,0);
    if (((*((int *)GEN_TOP(((int)this + 0x24))) != 6) && (uVar1 = F_00bd0d00(this GEN_EDX_ARG), (char)uVar1 == '\0')) &&
       ((*((uint *)GEN_TOP(((int)this + 0x2c))) >> 1 & 1) != 0)) {
      F_00bd0880(this GEN_EDX_ARG,3,0);
      return 0;
    }
    if ((*((char *)GEN_TOP(((int)this + 8))) == '\0') &&
       (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG), (char)uVar1 == '\0')) {
      return 0;
    }
    if (*((int *)GEN_TOP(((int)this + 0x24))) == 6) {
      if (*((char *)GEN_TOP(((int)this + 0x24a))) != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
        return 0;
      }
      if (((*((uint *)GEN_TOP(((int)this + 0x138))) >> 1 & 1) == 0) &&
         ((*((byte *)GEN_TOP(((int)this + 0x138))) & 1) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bd1110 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd1110(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbd1110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00bd17c0(param_1 GEN_EDX_FWD,*param_2);
  *((uint *)GEN_TOP(((int)param_1 + 0xfc))) = uVar2;
  uVar1 = param_2[1];
  *((undefined4 *)GEN_TOP(((int)param_1 + 200))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x100))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x24c))) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (param_4 == 0) {
    *((uint *)GEN_TOP(((int)param_1 + 0x138))) = *((uint *)GEN_TOP(((int)param_1 + 0x138))) & 0xfffffff7;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x250))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d0))) = 1;
  }
  else {
    *((uint *)GEN_TOP(((int)param_1 + 0x138))) = *((uint *)GEN_TOP(((int)param_1 + 0x138))) | 8;
    F_00bd1a10(((undefined *)GEN_TOP(((int)param_1 + 0x1f0))) GEN_EDX_ARG,param_4);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x250))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1f8)));
    if (*((char *)GEN_TOP(((int)param_1 + 0x213))) != '\0') {
      *((undefined1 *)GEN_TOP(((int)param_1 + 0x85))) = 1;
      *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d0))) = 0;
    }
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x104))) = 1;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x248))) = 1;
  F_00bc2d00(param_1 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)param_1 + 0x138))) =
       *((uint *)GEN_TOP(((int)param_1 + 0x138))) ^ ((uint)param_3 * 4 ^ *((uint *)GEN_TOP(((int)param_1 + 0x138)))) & 4;
  *((undefined2 *)GEN_TOP(((int)param_1 + 10))) = 1;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc))) = 3;
  F_00bd0d00(param_1 GEN_EDX_ARG);
  if ((((*((int *)GEN_TOP(((int)param_1 + 0x24))) == 6) &&
       (uVar2 = *((uint *)GEN_TOP(((int)param_1 + 0xe0))), (uVar2 & 0x10) == 0)) && ((uVar2 & 6) == 0)) &&
     ((uVar2 & 8) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bd1210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd1210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00bd17c0(this GEN_EDX_FWD,*param_1);
  *((uint *)GEN_TOP(((int)this + 0xfc))) = uVar2;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) & 0xfffffffb;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = uVar1;
  F_00bc2d00(this GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (param_2 != 0) {
    *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) | 8;
    F_00bd1a10(((undefined *)GEN_TOP(((int)this + 0x1f0))) GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)this + 0x250))) = *((undefined4 *)GEN_TOP(((int)this + 0x1f8)));
    *((undefined1 *)GEN_TOP(((int)this + 0x248))) = 1;
    uVar2 = F_00bd0d00(this GEN_EDX_ARG);
    return uVar2;
  }
  *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) & 0xfffffff7;
  *((undefined4 *)GEN_TOP(((int)this + 0x250))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)this + 0x248))) = 1;
  uVar2 = F_00bd0d00(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bd12c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd12c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(byte param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xbd12c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(byte param_7 = (byte)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00bd17c0(param_1 GEN_EDX_FWD,*param_2);
  *((uint *)GEN_TOP(((int)param_1 + 0xfc))) = uVar2;
  uVar1 = param_2[1];
  *((undefined4 *)GEN_TOP(((int)param_1 + 200))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x100))) = uVar1;
  F_00bbb060(((undefined *)GEN_TOP(((int)param_1 + 0x110))) GEN_EDX_ARG,param_3);
  F_00bbb060(((undefined *)GEN_TOP(((int)param_1 + 0x124))) GEN_EDX_ARG,param_4);
  *((uint *)GEN_TOP(((int)param_1 + 0x138))) = *((uint *)GEN_TOP(((int)param_1 + 0x138))) & 0xfffffff7;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d0))) = param_5;
  *((float *)GEN_TOP(((int)param_1 + 0x24c))) = param_8;
  if (param_6 < 0) {
    uVar2 = *((uint *)GEN_TOP(((int)param_1 + 0x138))) & 0xffffffbf;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4))) = 0;
  }
  else {
    uVar2 = *((uint *)GEN_TOP(((int)param_1 + 0x138))) | 0x40;
    *((int *)GEN_TOP(((int)param_1 + 0x1d4))) = param_6;
  }
  *((uint *)GEN_TOP(((int)param_1 + 0x138))) = uVar2;
  F_00bc2d00(param_1 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x248))) = 1;
  *((uint *)GEN_TOP(((int)param_1 + 0x138))) =
       *((uint *)GEN_TOP(((int)param_1 + 0x138))) ^ ((uint)param_7 * 4 ^ *((uint *)GEN_TOP(((int)param_1 + 0x138)))) & 4;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x104))) = 2;
  *((undefined2 *)GEN_TOP(((int)param_1 + 10))) = 1;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc))) = 3;
  uVar2 = F_00bd0d00(param_1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bd13a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd13a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(byte param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xbd13a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(byte param_6 = (byte)gen_a5;)
  uint uVar1;
  
  F_00bd17c0(param_1 GEN_EDX_FWD,param_2);
  *((undefined4 *)GEN_TOP(((int)param_1 + 200))) = 0xffffffff;
  F_00bbb060(((undefined *)GEN_TOP(((int)param_1 + 0x110))) GEN_EDX_ARG,param_3);
  *((uint *)GEN_TOP(((int)param_1 + 0x138))) = *((uint *)GEN_TOP(((int)param_1 + 0x138))) & 0xfffffff7;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d0))) = param_4;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x24c))) = 0;
  if (param_5 < 0) {
    uVar1 = *((uint *)GEN_TOP(((int)param_1 + 0x138))) & 0xffffffbf;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4))) = 0;
  }
  else {
    uVar1 = *((uint *)GEN_TOP(((int)param_1 + 0x138))) | 0x40;
    *((int *)GEN_TOP(((int)param_1 + 0x1d4))) = param_5;
  }
  *((uint *)GEN_TOP(((int)param_1 + 0x138))) = uVar1;
  F_00bc2d00(param_1 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)param_1 + 0x138))) =
       *((uint *)GEN_TOP(((int)param_1 + 0x138))) ^ ((uint)param_6 * 4 ^ *((uint *)GEN_TOP(((int)param_1 + 0x138)))) & 4;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x104))) = 4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x248))) = 0;
  *((undefined2 *)GEN_TOP(((int)param_1 + 10))) = 1;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc))) = 3;
  uVar1 = F_00bd0d00(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00bd1460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1460(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(byte param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined1 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xbd1460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(byte param_7 = (byte)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined1 param_10 = (undefined1)gen_a9;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)param_1 + 0xd0))) = param_2;
  F_00bbb060(((undefined *)GEN_TOP(((int)param_1 + 0x110))) GEN_EDX_FWD,param_3);
  *((uint *)GEN_TOP(((int)param_1 + 0x138))) = *((uint *)GEN_TOP(((int)param_1 + 0x138))) & 0xfffffff7;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d0))) = param_4;
  *((float *)GEN_TOP(((int)param_1 + 0x24c))) = (float)param_6;
  if (param_5 < 0) {
    uVar1 = *((uint *)GEN_TOP(((int)param_1 + 0x138))) & 0xffffffbf;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4))) = 0;
  }
  else {
    uVar1 = *((uint *)GEN_TOP(((int)param_1 + 0x138))) | 0x40;
    *((int *)GEN_TOP(((int)param_1 + 0x1d4))) = param_5;
  }
  *((uint *)GEN_TOP(((int)param_1 + 0x138))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x244))) = param_9;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x240))) = param_8;
  F_00bc2d00(param_1 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)param_1 + 0x138))) =
       *((uint *)GEN_TOP(((int)param_1 + 0x138))) ^ ((uint)param_7 * 4 ^ *((uint *)GEN_TOP(((int)param_1 + 0x138)))) & 4;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x104))) = 5;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x248))) = param_10;
  *((undefined2 *)GEN_TOP(((int)param_1 + 10))) = 1;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc))) = 3;
  uVar1 = F_00bd0d00(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00bd1530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd1530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x24))) == 6) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) | 0x10;
  uVar1 = F_00bd0d00(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00bd1550 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bd1550(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd1550u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  uVar2 = F_00bc1e50(param_1 GEN_EDX_FWD,0);
  if ((char)uVar2 != '\0') {
    F_00bc3440(param_1 GEN_EDX_ARG,2,0,0);
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x1c)));
  param_1[0x38] = param_1[0x38] | 0x40;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x4)) = (int)param_2;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*pcVar1)(param_1,0xc,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00bd0e90(param_1 GEN_EDX_ARG,param_2,0);
  uVar3 = F_00bc2a40(param_1 GEN_EDX_ARG);
  if (uVar3 != 0) {
    F_00bc3bb0(0);
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x1c)));
  param_1[0x38] = param_1[0x38] & 0xffffff9f;
  uVar3 = (*pcVar1)(param_1,0xd,&REFG(undefined, 0x13056c0));
  if ((char)uVar2 != '\0') {
    uVar3 = F_00bc3440(param_1 GEN_EDX_ARG,2,1,0);
  }
  return uVar3;
}

/* ref: FUN_00bd1610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd1610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = param_2;
  uVar5 = *((uint *)GEN_TOP((param_1 + 0xc)));
  *((uint *)GEN_TOP(((int)this + 0x1c8))) = uVar5;
  if (0 < (int)uVar5) {
    puVar1 = ((undefined4 *)GEN_TOP(F_00406bb0(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar5 * 8),0,0)));
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1cc))) = puVar1;
    iVar4 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((param_1 + 8))) + iVar4;
      iVar4 = iVar4 + 8;
      puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + param_1)));
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + 4 + param_1)));
      puVar1 = puVar1 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  pcVar3 = ((char *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + param_1)));
  if ((pcVar3 != ((char *)GEN_TOP(0x0))) && (*pcVar3 != '\0')) {
    *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) | 0x20;
    uVar5 = F_00bd13a0(this GEN_EDX_ARG,pcVar3,0,1,0xffffffff,1);
    return uVar5;
  }
  *((int *)GEN_TOP(((int)this + 0xd0))) = *((int *)GEN_TOP((param_1 + 0x14))) + param_1;
  F_00bbb060(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_ARG,0);
  *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) & 0xffffffb7;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x240))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x244))) = 0;
  F_00bc2d00(this GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x138))) = *((uint *)GEN_TOP(((int)this + 0x138))) | 4;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 5;
  *((undefined1 *)GEN_TOP(((int)this + 0x248))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 10))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 3;
  uVar5 = F_00bd0d00(this GEN_EDX_ARG);
  return uVar5;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  undefined4 * puVar5;
  
  iVar2 = *(int *)(this + 0x1c8);
  puVar5 = *(undefined4 * PTR32 *)(this + 0x1cc);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = iVar2 - 1;
    if (puVar5[1] == (*(int *)&gen_args[0])) break;
    puVar5 = puVar5 + 2;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x90))))(this GEN_EDX_FWD);
  if (uVar3 != 0) {
    (*(int *)&gen_args[0]) = *puVar5;
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x90)));
    uVar3 = (*pcVar1)(this);
    puVar4 = ((uint *)GEN_TOP(F_00bd1d40(((undefined *)GEN_TOP((uVar3 + 0x84))) GEN_EDX_ARG,&(*(int *)&gen_args[0]))));
    return *puVar4;
  }
  uVar3 = F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*puVar5,0,0);
  return uVar3;
}

/* ref: FUN_00bd17c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd17c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd17c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = *((int *)GEN_TOP(((int)this + 0xd4)));
  if ((iVar2 != 0) && (iVar2 != (int)this + 0xa0)) {
    F_00406b30(iVar2);
    *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  }
  if ((int)pcVar3 - (int)(param_1 + 1) < 0x28) {
    uVar4 = (int)this + 0xa0;
    F_00c49908(uVar4,0x28,param_1);
    *((uint *)GEN_TOP(((int)this + 0xd4))) = uVar4;
    return uVar4;
  }
  iVar2 = ((int)pcVar3 - (int)(param_1 + 1)) + 1;
  uVar4 = F_00406bb0(iVar2,0,0);
  F_00c49908(uVar4,iVar2,param_1);
  *((uint *)GEN_TOP(((int)this + 0xd4))) = uVar4;
  return uVar4;
}

/* ref: FUN_00bd1870 */
GEN_OWN GEN_FRAME uint F_00bd1870(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbd1870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bd18a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd18a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd18a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((*((int *)GEN_TOP(((int)this + 4))) != -1) && (param_1[1] != -1)) {
    return param_1[1] == *((int *)GEN_TOP(((int)this + 4)));
  }
  pbVar2 = *(byte * PTR32 *)this;
  if (pbVar2 == ((byte *)GEN_TOP(0x0))) {
    return 0;
  }
  pbVar3 = ((byte *)GEN_TOP(*param_1));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf23 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd1920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xd4)));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd1930(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  return in_ecx;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf26 */
GEN_OWN GEN_NOFRAME uint F_00bd1940(void)
{
  GEN_ENTER(0xbd1940u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf27 */
GEN_OWN GEN_NOFRAME uint F_00bd1950(void)
{
  GEN_ENTER(0xbd1950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf36 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd1960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x108)));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd1970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((byte *)GEN_TOP((in_ecx + 0x138))) & 8) != 0) {
    return in_ecx + 0x1f0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd1990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((uint *)GEN_TOP((in_ecx + 0xe0))) = *((uint *)GEN_TOP((in_ecx + 0xe0))) | 2;
  return;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf39 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd19a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd19a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x110;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf38 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd19b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd19b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((byte *)GEN_TOP((in_ecx + 0xe0))) & 0x60) == 0) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf43 */
GEN_OWN GEN_NOFRAME double F_00bd19d0(void)
{
  GEN_ENTER(0xbd19d0u, 0u, 0u, 0u, 0u);
  return 0.0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf20 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00bd19e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd19e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x250)));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf44 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00bd19f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd19f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x60)));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf45 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00bd1a00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x6c)));
}

/* ref: FUN_00bd1a10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd1a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd1a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = *(undefined1 *)(param_1 + 8);
  *((undefined1 *)GEN_TOP(((int)this + 0x21))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x21)));
  *((undefined1 *)GEN_TOP(((int)this + 0x22))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x22)));
  *((undefined1 *)GEN_TOP(((int)this + 0x23))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x23)));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_1[0xc];
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_1[0xd];
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_1[0xe];
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_1[0x10];
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_1[0x11];
  return 0;
}

/* ref: FUN_00bd1a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd1a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1ab0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd1ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[49])REFP(0x1106724));
  F_00bcf490(param_1 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(param_1 + 0x124) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  *(undefined * PTR32 * PTR32 *)(param_1 + 0x110) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  F_00bc2fd0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd1af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd1af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bd1b10 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_00bd1b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd1b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00bd1b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd1b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00bd1b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbd1b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    F_00b7d7d0(this GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[0]),1,piVar1,(*(int * PTR32 *)&gen_args[2]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(*piVar1))) {
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)(*(int * PTR32 *)&gen_args[1])[3]) {
      F_00b7d7d0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[1]) == piVar1) {
    if (*((uint *)GEN_TOP((piVar1[2] + 0xc))) < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      F_00b7d7d0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,piVar1[2],(*(int * PTR32 *)&gen_args[2]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
  }
  else {
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)(*(int * PTR32 *)&gen_args[1])[3]) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00b7d0d0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)piVar2[3]) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x15))) != '\0') {
          F_00b7d7d0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00b7d7d0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[1]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
    if ((uint)(*(int * PTR32 *)&gen_args[1])[3] < (uint)piVar2[3]) {
      (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[1]);
      F_00b7d290(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[2]) == *((int * PTR32 *)GEN_TOP(((int)this + 4)))) || ((uint)piVar2[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3])) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[2] + 0x15))) != '\0') {
          F_00b7d7d0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[1]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00b7d7d0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
    }
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00b7db30(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar2,0)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00bd1ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbd1ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0x136)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_3;
    puVar1[4] = param_3[1];
  }
  F_00bd1b80(this GEN_EDX_ARG,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00bd1d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar4[1] + 0x15))) == '\0') {
    puVar3 = ((undefined4 *)GEN_TOP(puVar4[1]));
    do {
      if ((uint)puVar3[3] < *(*(uint * PTR32 *)&gen_args[0])) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar3));
        puVar4 = puVar3;
      }
      puVar3 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if ((puVar4 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar4[3] <= *(*(uint * PTR32 *)&gen_args[0]))) {
    return (uint)(puVar4 + 4);
  }
  uVar1 = *(*(uint * PTR32 *)&gen_args[0]);
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0x136)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != ((uint *)GEN_TOP(0x0))) {
    puVar3[3] = uVar1;
    puVar3[4] = 0;
  }
  F_00bd1b80(this GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[0]),puVar4,puVar3);
  return (uint)((*(uint * PTR32 *)&gen_args[0]) + 4);
}

/* ref: FUN_00bd1de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(F_00bd1d40(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]))));
  return *puVar1;
}

/* ref: FUN_00bd1e60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd1e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 10))) = 0x1010000;
  *((undefined2 *)GEN_TOP((in_ecx + 0xe))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 0x12))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x14))) = 0;
  return 0;
}

/* ref: FUN_00bd1e80 */
GEN_OWN GEN_FRAME float10 F_00bd1e80(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd1e80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd1ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 0xf))) != '\0') {
    return 1;
  }
  return *((char *)GEN_TOP((in_ecx + 8))) != '\0';
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf9 */
GEN_OWN GEN_NOFRAME unsigned int F_00bd1ec0(void)
{
  GEN_ENTER(0xbd1ec0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd1ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if ((param_1 != 0x12) && (param_1 != 0x1a)) {
    if (param_1 != 0x24) {
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
    if ((*(int *)(this + 0x2c) == 6) && (uVar1 = F_00be5a60(this GEN_EDX_FWD), uVar1 == 0)) {
      F_00be5410(this GEN_EDX_ARG);
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd8))))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf15 */
GEN_OWN GEN_NOFRAME unsigned int F_00bd1f20(void)
{
  GEN_ENTER(0xbd1f20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00bd1f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd1f30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbd1f30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x24)));
  uVar3 = (uint)*((ushort *)GEN_TOP((iVar1 + 2)));
  iVar5 = *((ushort *)GEN_TOP((iVar1 + 4))) + uVar3;
  if ((float10)param_2 < (float10)uVar3) {
    uVar3 = (uint)*((ushort *)GEN_TOP((iVar1 + 2)));
    param_2 = (float)uVar3;
  }
  fVar7 = (float10)iVar5;
  bVar2 = GEN_ISNAN(param_3);
  bVar6 = bVar2 || param_3 == 0.0;
  uVar4 = (uint)CONCAT11(bVar6 << 6 | bVar2 << 2 | 2U | !(0.0 <= param_3),(char)uVar3);
  if ((bVar2 != bVar6) || (fVar7 <= (float10)param_3)) {
    param_3 = (float)iVar5;
  }
  if (!(fVar7 <= (float10)param_2)) {
    bVar2 = GEN_ISNAN(param_3);
    bVar6 = bVar2 || param_3 == 0.0;
    uVar4 = (uint)CONCAT11(bVar6 << 6 | bVar2 << 2 | 2U | !(0.0 <= param_3),(char)uVar3);
    if ((bVar2 != bVar6) || (!((float10)param_3 < (float10)*((ushort *)GEN_TOP((iVar1 + 2)))))) {
      *((float *)GEN_TOP((param_1 + 0x48))) = param_2;
      *((float *)GEN_TOP((param_1 + 0x4c))) = param_3;
      *((undefined1 *)GEN_TOP((param_1 + 0x28))) = 1;
      return uVar4;
    }
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x28))) = 0;
  return uVar4;
}

/* ref: FUN_00bd1fe0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd1fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (*((int *)GEN_TOP((REFG(int, 0x1375b00) + 0x28))) == 0) {
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd20b0;
    iVar5 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar5 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar5 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar5 != 0) goto LAB_00bd2097;
    }
    else {
LAB_00bd2097: ;
      uVar1 = *((undefined4 *)GEN_TOP((iVar5 + 0x20)));
      *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
      F_00b595f0(uVar1);
    }
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
LAB_00bd20b0: ;
    piVar4 = ((int *)GEN_TOP(F_00bbaf90(pvVar2 GEN_EDX_ARG)));
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x98))))(piVar4 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      return 0;
    }
    return 1;
  }
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd2032;
  iVar5 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar5 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar5 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar5 != 0) goto LAB_00bd2015;
  }
  else {
LAB_00bd2015: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar5 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00bd2032: ;
  pvVar2 = ((undefined *)GEN_TOP(F_00bbaf50(pvVar2 GEN_EDX_ARG)));
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    if ((*((uint *)GEN_TOP(((int)pvVar2 + 0x11c))) & 0x102) != 0) {
      return 1;
    }
    uVar3 = F_00bd3ff0(this GEN_EDX_ARG);
    if (((uVar3 == 0) && (piVar4 = ((int *)GEN_TOP(F_00a5f290(pvVar2 GEN_EDX_ARG))), piVar4 != ((int *)GEN_TOP(0x0)))) &&
       (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x98))))(piVar4 GEN_EDX_ARG), (char)uVar3 == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf23 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_00bd20e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd20e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  uint uVar2;
  float10 extraout_ST0;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  if (((char)uVar2 == '\0') && (*(int *)(this + 4) != 0)) {
    fVar1 = *(float *)(this + 0x44);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
    if ((double)(float)(extraout_ST0 - (float10)fVar1) <= 0.0) {
      return 0.0;
    }
    return GEN_X87((double)(float)(extraout_ST0 - (float10)fVar1));
  }
  return 0.0;
}

/* ref: FUN_00bd2130 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd2130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd2130u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x38))) = ((float)GEN_TOF(((float10)param_2 - (float10)*((float *)GEN_TOP((in_ecx + 0x34))))));
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf45 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00bd2140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  float10 extraout_ST0;
  
  piVar2 = *(int * PTR32 *)(this + 0x70);
  if (piVar2 != ((int *)GEN_TOP(0x0))) goto LAB_00bd2172;
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 != 0) goto LAB_00bd2169;
  }
  else {
LAB_00bd2169: ;
    *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
  }
  piVar2 = *(int * PTR32 *)(this + 0x70);
LAB_00bd2172: ;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2);
  return GEN_X87(((float)GEN_TOF((extraout_ST0 + (float10)*(float *)(this + 0x34)))));
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf46 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd2190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x24))) != 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x24))) + 8)));
  }
  return 0;
}

/* ref: FUN_00bd21a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd21a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd21a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  uVar3 = 0;
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 1;
    *((float *)GEN_TOP(((int)this + 0x34))) =
         ((float)GEN_TOF(((float10)*((ushort *)GEN_TOP((iVar1 + 2))) + (float10)*((float *)GEN_TOP(((int)this + 0x3c))))));
    uVar3 = (uint)*((ushort *)GEN_TOP((iVar1 + 4)));
    *((float *)GEN_TOP(((int)this + 0x38))) = (float)uVar3;
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf49 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd2200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  
  if (this[0x10] != (undefined1)0x0) goto LAB_00bd225a;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  if ((char)uVar1 == '\0') goto LAB_00bd225a;
  if (*(int *)(this + 0x70) == 0) {
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar2 = *(int *)(this + 0x6c);
      if (iVar2 == 0) goto LAB_00bd223b;
    }
    *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP((iVar2 + 4)));
  }
LAB_00bd223b: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
  }
LAB_00bd225a: ;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf51 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd2270(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd2270u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  code * pcVar1;
  
  if ((char)param_1[3] != '\0') {
    pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x70)));
    param_1[0x10] = (int)gen_fl2bits((float)((float10)param_2 + ((float10)GEN_TOD(gen_bits2f(param_1[0x10])))))
    ;
    param_1[0x11] = (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x11]))) + (float10)param_2))
    ;
    (*pcVar1)(param_1,(undefined4)gen_fl2bits(param_2));
  }
  return;
}

/* ref: FUN_00bd22a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd22a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbd22a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    F_00c22060(iVar1 GEN_EDX_FWD,param_2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x74))))(param_1 GEN_EDX_ARG,iVar1);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x78))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
  param_1[0x14] = (int)gen_fl2bits(param_2);
  return uVar2;
}

/* ref: FUN_00bd22f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd22f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd22f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)*((char *)GEN_TOP((in_ecx + 0x29)));
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 1: ;
  case 2: ;
  case 6: ;
    *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = 4;
    return uVar1;
  case 3: ;
    *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = 3;
    return uVar1;
  case 4: ;
  case 5: ;
    *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = 6;
    return uVar1;
  case 7: ;
    *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = 7;
  }
  return uVar1;
}

/* ref: FUN_00bd2340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd2340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 != 0) && (uVar1 = *((uint *)GEN_TOP(((int)this + 0x60))), uVar1 != 0)) {
    if (uVar2 <= uVar1) {
      *((uint *)GEN_TOP(((int)this + 0x60))) = uVar1 - uVar2;
      *param_1 = 0;
      return uVar2;
    }
    uVar2 = uVar2 - uVar1;
    *param_1 = uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf39 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd2380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xec))))(this GEN_EDX_FWD,4);
  return uVar1;
}

/* ref: FUN_00bd2390 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00bd2390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  float fVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x70)));
  if (iVar1 != 0) goto LAB_00bd23c9;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar1 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar1 != 0) goto LAB_00bd23b6;
  }
  else {
LAB_00bd23b6: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x70)));
  if (iVar1 == 0) {
    return (float)(float10)0;
  }
LAB_00bd23c9: ;
  if (*((char *)GEN_TOP((iVar1 + 0x30))) == '\0') {
    if (*((char *)GEN_TOP((iVar1 + 0x80))) == '\0') {
      fVar2 = *((float *)GEN_TOP((iVar1 + 0x58)));
    }
    else {
      fVar2 = *((float *)GEN_TOP((iVar1 + 0x6c)));
    }
    return GEN_X87(((float)GEN_TOF(((float10)fVar2 - (float10)*((float *)GEN_TOP(((int)this + 0x34)))))));
  }
  if (*((char *)GEN_TOP(((int)this + 0xd))) == '\0') {
    return REFG(float, 0x1090708);
  }
  return *((float *)GEN_TOP(((int)this + 0x44)));
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd2410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbd2410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xec))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00bd2420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd2420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x74)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) goto LAB_00bd2466;
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar1 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar1 != 0) goto LAB_00bd244c;
    }
    else {
LAB_00bd244c: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    }
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) goto LAB_00bd2459;
  }
  else {
LAB_00bd2459: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 100))))(piVar3 GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x74))) = uVar2;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x74)));
LAB_00bd2466: ;
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x94))))(piVar3 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bd2480 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd2480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x74)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) goto LAB_00bd24c6;
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar1 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar1 != 0) goto LAB_00bd24ac;
    }
    else {
LAB_00bd24ac: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    }
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) goto LAB_00bd24b9;
  }
  else {
LAB_00bd24b9: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 100))))(piVar3 GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x74))) = uVar2;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x74)));
LAB_00bd24c6: ;
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x98))))(piVar3 GEN_EDX_ARG);
  return (byte)uVar2;
}

/* ref: FUN_00bd24f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd24f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbd24f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if (*((int *)GEN_TOP((in_ecx + 0x68))) == param_2) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x68))) = 0;
    *((float *)GEN_TOP((in_ecx + 0x34))) = ((float)GEN_TOF(((float10)param_3 + (float10)*((float *)GEN_TOP((in_ecx + 0x34))))));
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf62 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd2520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbd2520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (*param_2 == in_ecx) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = in_ecx;
  return 1;
}

/* ref: FUN_00bd2540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd2540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x20)));
  if ((*((char *)GEN_TOP((uVar1 + 0x16))) == '\0') && (param_1 != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,1);
  }
  return uVar1;
}

/* ref: FUN_00bd2560 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd2560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c21b10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
    if ((*((char *)GEN_TOP(((int)puVar1 + 0x16))) == '\0') && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd2590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[8] == (undefined1)0x0) {
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd25c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd25c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if ((this[8] != (undefined1)0x0) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD), (char)uVar2 != '\0')) {
    uVar2 = F_0054d920(this GEN_EDX_ARG);
    if ((uVar2 != 0) && (bVar1 = F_00bcf340(uVar2 GEN_EDX_ARG), bVar1 == 0)) {
      return 0;
    }
    F_00bd41b0(this GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd2600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x10] == (undefined1)0x0) {
    return 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_FWD);
  this[0x11] = (undefined1)0x1;
  this[0x15] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd2640(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int iVar1;
  
  *((undefined4 *)GEN_TOP((param_1 + 10))) = 0x1000000;
  if (param_2 != '\0') {
    *((undefined1 *)GEN_TOP((param_1 + 0xe))) = 1;
    *((undefined1 *)GEN_TOP((param_1 + 0x12))) = 0;
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x12))) = 1;
    }
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x70)));
  if (iVar1 == 0) {
    iVar1 = *((int *)GEN_TOP((param_1 + 0x6c)));
    if (iVar1 == 0) {
      if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
        *((undefined4 *)GEN_TOP((param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      }
      iVar1 = *((int *)GEN_TOP((param_1 + 0x6c)));
      if (iVar1 != 0) goto LAB_00bd2687;
    }
    else {
LAB_00bd2687: ;
      *((undefined4 *)GEN_TOP((param_1 + 0x70))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    }
    iVar1 = *((int *)GEN_TOP((param_1 + 0x70)));
    if (iVar1 == 0) goto LAB_00bd26b2;
  }
  if ((*((char *)GEN_TOP((iVar1 + 0x80))) == '\0') &&
     ((*((int *)GEN_TOP((iVar1 + 0x74))) == 0 || (1 < *((uint *)GEN_TOP((iVar1 + 0x78))))))) {
    return 0;
  }
LAB_00bd26b2: ;
  *((undefined4 *)GEN_TOP((param_1 + 0xd))) = 0x1010101;
  *((undefined2 *)GEN_TOP((param_1 + 0x12))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x14))) = 0;
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x14))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd26e0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(undefined1 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xbd26e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined1 * param_8 = (undefined1 *)(uintptr_t)gen_a7;)
  float fVar1;
  float fVar2;
  float10 extraout_ST0;
  
  fVar2 = gen_bits2f(F_00bd1f30(param_1 GEN_EDX_FWD,param_2,param_3));
  if ((char)(((int *)GEN_TOP((uint)(param_1))))[10] != '\0') {
    if ((((int *)GEN_TOP((uint)(param_1))))[0xb] == 9) {
      *param_8 = 1;
    }
    fVar1 = gen_bits2f((((int *)GEN_TOP((uint)(param_1))))[0xd]);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(((int *)GEN_TOP((uint)(param_1)))) + 0xa4))))((((int *)GEN_TOP((uint)(param_1))))); fVar2 = extraout_ST0;
    if ((float10)*param_7 < (float10)(float)(extraout_ST0 + (float10)fVar1)) {
      *param_7 = (float)(extraout_ST0 + (float10)fVar1);
    }
  }
  return (uint)gen_fl2bits(fVar2);
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf22 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_00bd2740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  float10 extraout_ST0;
  float fVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  if (((char)uVar1 == '\0') && (*(int *)(this + 4) != 0)) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
    fVar2 = F_00bd2390(this GEN_EDX_ARG);
    if ((double)(float)((float10)(double)extraout_ST0 - (float10)fVar2) <= 0.0) {
      return 0.0;
    }
    return GEN_X87((double)(float)((float10)(double)extraout_ST0 - (float10)fVar2));
  }
  return 0.0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf52 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd27a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd27a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  char cVar1;
  int iVar2;
  undefined2 extraout_var = 0;
  uint3 uVar3;
  bool bVar4;
  bool bVar5;
  float10 extraout_ST0;
  double dVar6;
  float fVar7;
  
  if ((char)param_1[4] != '\0') {
    return;
  }
  if (param_1[0x1c] != 0) goto LAB_00bd27e6;
  iVar2 = param_1[0x1b];
  if (iVar2 == 0) {
    if (param_1[1] != 0) {
      param_1[0x1b] = *((int *)GEN_TOP((param_1[1] + 4)));
    }
    iVar2 = param_1[0x1b];
    if (iVar2 != 0) goto LAB_00bd27d5;
  }
  else {
LAB_00bd27d5: ;
    param_1[0x1c] = *((int *)GEN_TOP((iVar2 + 4)));
  }
  if (param_1[0x1c] == 0) {
    return;
  }
LAB_00bd27e6: ;
  fVar7 = F_00bd2390(param_1 GEN_EDX_FWD);
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x29)));
  if ((cVar1 == '\x06') || (cVar1 == '\a')) {
    if ((0.0 <= fVar7) && (*((char *)GEN_TOP(((int)param_1 + 0xe))) == '\0')) {
      bVar4 = GEN_ISNAN(param_2);
      bVar5 = bVar4 || param_2 == 0.0;
      uVar3 = (uint3)(CONCAT22(extraout_var, CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(0.0 <= param_2),cVar1)) >> 8);
      if (bVar4 == bVar5) {
        F_00bd22a0(((undefined4)(uint)(param_1)) GEN_EDX_ARG,fVar7,CONCAT31(uVar3,1));
        return;
      }
      F_00bd22a0(((undefined4)(uint)(param_1)) GEN_EDX_ARG,fVar7,(uint)uVar3 << 8);
    }
  }
  else if (((!GEN_ISNAN(fVar7) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar7 < *(float *)&REFG(undefined, 0x1088114))) && (dVar6 = ((code *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(), (float10)fVar7 < (float10)dVar6)) {
    bVar4 = GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar5 = bVar4 || param_2 == *(float *)&REFG(undefined, 0x1088114);
    uVar3 = CONCAT21((short)((ulonglong)gen_d2bits(dVar6) >> 0x10), bVar5 << 6 | bVar4 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= param_2));
    if (bVar4 != bVar5) {
      F_00bd22a0(param_1 GEN_EDX_ARG,fVar7,(uint)uVar3 << 8);
      return;
    }
    F_00bd22a0(param_1 GEN_EDX_ARG,fVar7,CONCAT31(uVar3,1));
    return;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf53 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd28c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd28c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  float fVar1;
  int iVar2;
  float10 extraout_ST0;
  
  if (this[0x10] == (undefined1)0x0) {
    fVar1 = *(float *)(this + 0x44);
    if ((this[0x29] == (undefined1)0x6) || (this[0x29] == (undefined1)0x7)) {
      if (this[0xe] == (undefined1)0x0) {
        iVar2 = *(int *)(this + 0x20);
        if (iVar2 != 0) {
          F_00c22060(iVar2 GEN_EDX_FWD,fVar1);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_ARG,iVar2);
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar1),param_1);
        *(float *)(this + 0x50) = fVar1;
      }
    }
    else {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
      if ((float10)fVar1 < extraout_ST0) {
        F_00bd22a0(this GEN_EDX_ARG,fVar1,param_1);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00bd2970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd2970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  double dVar7;
  float fVar8;
  undefined4 uVar9;
  
  fVar8 = F_00bd2390(this GEN_EDX_FWD);
  uVar1 = (uint)*((char *)GEN_TOP(((int)this + 0x29)));
  uVar2 = uVar1;
  if (uVar1 < 8) {
    uVar2 = (uint)(&REFG(byte, 0xbd2a08))[(int)(uVar1)];
    switch((unsigned int)(uintptr_t)(uVar1)) {
    default: ;
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(); dVar7 = extraout_ST0;
      uVar2 = (uint)(ulonglong)gen_d2bits(dVar7);
      if (extraout_ST0 <= (float10)fVar8) {
        uVar9 = 1;
        extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
        uVar2 = F_00bd22a0(this GEN_EDX_ARG,(float)extraout_ST0_00,uVar9);
        return uVar2;
      }
    case 5: ;
    case 6: ;
    case 7: ;
      fVar5 = (float10)fVar8;
      fVar6 = (float10)*((float *)GEN_TOP(((int)this + 0x50)));
      bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6);
      bVar4 = bVar3 || fVar5 == fVar6;
      uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                       CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar6 <= fVar5),(char)uVar2));
      if (bVar3 == bVar4) {
        uVar2 = F_00bd22a0(this GEN_EDX_ARG,fVar8,1);
        return uVar2;
      }
    case 3: ;
    case 4: ;
    }
  }
  return uVar2;
}

/* ref: FUN_00bd2a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd2a10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbd2a10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  float fVar1;
  char cVar2;
  code * pcVar3;
  uint in_EAX = 0;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar8;
  
  iVar6 = *((int *)GEN_TOP(((int)this + 0x70)));
  if (iVar6 == 0) {
    in_EAX = *((uint *)GEN_TOP(((int)this + 0x6c)));
    if (in_EAX == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      in_EAX = *((uint *)GEN_TOP(((int)this + 0x6c)));
      if (in_EAX != 0) goto LAB_00bd2a3b;
    }
    else {
LAB_00bd2a3b: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP((in_EAX + 4)));
    }
    iVar6 = *((int *)GEN_TOP(((int)this + 0x70)));
  }
  cVar2 = *((char *)GEN_TOP(((int)this + 0x29)));
  if (iVar6 == 0) {
    return in_EAX;
  }
  uVar4 = (uint)cVar2;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
  case 1: ;
  case 2: ;
    (*(float *)&gen_args[0]) = gen_bits2f(F_00bc1fd0(iVar6 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x34)))),(*(float *)&gen_args[0])));
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xa4)));
    extraout_ST0 = (*pcVar3)(this);
    bVar7 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
    if (bVar7 == (bVar7 || extraout_ST0 == (float10)0)) {
      fVar1 = *((float *)GEN_TOP(((int)this + 0x34)));
      fVar8 = 0.0;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
      uVar4 = F_00bc1fd0(iVar6 GEN_EDX_ARG,(float)(extraout_ST0_00 + (float10)fVar1),fVar8);
    }
    else {
      uVar4 = 0;
    }
    F_00bd2340(this GEN_EDX_ARG,&(*(float *)&gen_args[0]));
    if ((*(float *)&gen_args[0]) == gen_bits2f(uVar4)) {
      return (uint)gen_fl2bits((*(float *)&gen_args[0]));
    }
    if (uVar4 < (uint)gen_fl2bits((*(float *)&gen_args[0]))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 4;
      return (uint)gen_fl2bits((*(float *)&gen_args[0]));
    }
    if (*((char *)GEN_TOP(((int)this + 0xc))) == '\0') {
      return (uint)gen_fl2bits((*(float *)&gen_args[0]));
    }
    F_00bd2970((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,6);
    if (((cVar2 == '\x01') || (cVar2 == '\x02')) && ((char)uVar4 != '\x01')) {
      return uVar4;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,1);
    return uVar4;
  case 3: ;
    break;
  case 4: ;
  case 5: ;
    break;
  case 6: ;
  case 7: ;
    break;
  default: ;
    goto switchD_00bd2a5b_default;
  }
  uVar5 = F_00bc1fd0(iVar6 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x34)))),(*(float *)&gen_args[0]));
  uVar4 = 0;
  if (uVar5 != 0) {
    uVar4 = F_00bd22f0(this GEN_EDX_ARG);
  }
switchD_00bd2a5b_default: ;
  return uVar4;
}

/* ref: FUN_00bd2b80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd2b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbd2b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  if (*((int *)GEN_TOP(((int)this + 0x30))) == 0) {
    if (param_1 < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 2)))) {
      return 0;
    }
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)this + 0x29))))) {
    case 0: ;
    case 1: ;
    case 2: ;
    case 6: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 4;
      return 1;
    case 3: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 3;
      return 1;
    case 4: ;
    case 5: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 6;
      return 1;
    case 7: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 7;
    }
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf59 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd2c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined1 BVar1;
  byte bVar2;
  uint uVar3;
  byte local_5;
  
  BVar1 = this[0x29];
  local_5 = 0;
  if (((param_1 == 9) && (*(int *)(this + 0x2c) == 6)) && (bVar2 = F_00be54a0(this GEN_EDX_FWD), bVar2 != 0))
  {
    return 0;
  }
  if (this[0xc] != (undefined1)0x0) {
    if (param_1 != 2) {
      F_00bd2970(this GEN_EDX_ARG);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,param_1);
    local_5 = (byte)uVar3;
  }
  if (((param_1 != 9) && (param_1 != 6)) || ((BVar1 != (undefined1)0x6 && (BVar1 != (undefined1)0x7))))
  {
    if (((param_1 == 3) || (param_1 == 4)) || ((param_1 == 5 || (param_1 == 9)))) {
      *(undefined4 *)(this + 10) = 0x1000000;
      *(undefined2 *)(this + 0xe) = 0x101;
      this[0x10] = (undefined1)0x1;
      *(undefined2 *)(this + 0x12) = 0;
      this[0x14] = (undefined1)0x0;
      if (*(int *)(this + 4) == 0) {
        return local_5;
      }
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
      return local_5;
    }
    if ((BVar1 != (undefined1)0x1) && (BVar1 != (undefined1)0x2)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,1);
      return local_5;
    }
  }
  this[0x14] = (undefined1)0x1;
  *(undefined2 *)(this + 0x12) = 0x101;
  *(undefined2 *)(this + 10) = 0x100;
  return local_5;
}

/* ref: FUN_00bd2d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd2d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x12))) = 0;
  if (param_1 == 0) {
    uVar2 = F_00406b90(0x54,0,0);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00c219a0(uVar2 GEN_EDX_ARG);
    }
  }
  else {
    uVar2 = F_00c219a0(param_1 GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP((uVar2 + 0x16))) = 1;
  }
  *((undefined * PTR32 *)GEN_TOP((uVar2 + 4))) = this;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
  if ((puVar1 != ((undefined4 *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)puVar1 + 0x16))) == '\0')) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
  }
  *((uint *)GEN_TOP(((int)this + 0x20))) = uVar2;
  return uVar2;
}

/* ref: FUN_00bd2d80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd2d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x16))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1106874));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x28))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x78))) == 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar2 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar2 == 0) {
        return (uint)this;
      }
    }
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  return (uint)this;
}

/* ref: FUN_00bd2e60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd2e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1106874));
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x78))) != 0) {
    uVar2 = F_00b59c20(REFG(void * PTR32, 0x14c4e78) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x78))));
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00c21b10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
    if ((*((char *)GEN_TOP(((int)puVar1 + 0x16))) == '\0') && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf2 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd2eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (this[0xe] == (undefined1)0x0) {
    if (this[8] == (undefined1)0x0) {
      return 0;
    }
    if (this[0xd] == (undefined1)0x0) {
      if (this[0xb] == (undefined1)0x0) {
        return 0;
      }
    }
    else {
      if ((this[0x29] != (undefined1)0x6) && (this[0x29] != (undefined1)0x7)) {
        return 0;
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      F_00bd2970(this GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,1);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf12 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd2f00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xbd2f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = param_3;
  *((undefined1 *)GEN_TOP((param_1 + 0x29))) = (undefined1)param_4;
  *((undefined1 *)GEN_TOP((param_1 + 0x2a))) = param_5;
  *((int *)GEN_TOP((param_1 + 0x24))) = param_2;
  if (param_6 == '\0') {
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) & 0xfffb;
  }
  else {
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) | 4;
  }
  if (param_7 == '\0') {
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) & 0xfff7;
  }
  else {
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) | 8;
  }
  *((float *)GEN_TOP((param_1 + 0x3c))) = param_8;
  if (param_2 != 0) {
    *((undefined4 *)GEN_TOP((param_1 + 10))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xe))) = 0;
    *((undefined2 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x12))) = 0;
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) & 0xfffe;
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) & 0xfffd;
    *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 1;
    *((undefined4 *)GEN_TOP((param_1 + 0x5c))) = 1;
    *((float *)GEN_TOP((param_1 + 0x34))) = ((float)GEN_TOF(((float10)*((ushort *)GEN_TOP((param_2 + 2))) + (float10)param_8)));
    *((float *)GEN_TOP((param_1 + 0x38))) = (float)*((ushort *)GEN_TOP((param_2 + 4)));
    *((undefined4 *)GEN_TOP((param_1 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x30))) = 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf16 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd2fb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbd2fb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  undefined4 uVar2;
  
  *((int *)GEN_TOP((param_1 + 0x24))) = param_2;
  if (param_2 != 0) {
    *((float *)GEN_TOP((param_1 + 0x3c))) = param_3;
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) & 0xfffe;
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) & 0xfffd;
    iVar1 = *((int *)GEN_TOP((param_1 + 0x24)));
    if (iVar1 != 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 1;
      *((undefined4 *)GEN_TOP((param_1 + 0x5c))) = 1;
      *((float *)GEN_TOP((param_1 + 0x34))) =
           ((float)GEN_TOF(((float10)*((ushort *)GEN_TOP((iVar1 + 2))) + (float10)*((float *)GEN_TOP((param_1 + 0x3c))))));
      *((float *)GEN_TOP((param_1 + 0x38))) = (float)*((ushort *)GEN_TOP((iVar1 + 4)));
      uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
      *((undefined4 *)GEN_TOP((param_1 + 0x60))) = 0;
      *((undefined4 *)GEN_TOP((param_1 + 0x50))) = uVar2;
      *((undefined4 *)GEN_TOP((param_1 + 0x30))) = 0;
    }
    *((undefined4 *)GEN_TOP((param_1 + 10))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xe))) = 0;
    *((undefined2 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x12))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x44))) = 0;
  }
  return 0;
}

/* ref: FUN_00bd3040 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd3040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (*((uint *)GEN_TOP(((int)this + 100))) != 0xffffffff) {
    return *((uint *)GEN_TOP(((int)this + 100)));
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) goto LAB_00bd307e;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar1 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar1 != 0) goto LAB_00bd306d;
  }
  else {
LAB_00bd306d: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00bd307e: ;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x6c))))(piVar3 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  if ((uVar2 != 0) && (uVar2 = F_00be38d0(uVar2 GEN_EDX_ARG), uVar2 != 0)) {
    *((undefined4 *)GEN_TOP(((int)this + 100))) = *((undefined4 *)GEN_TOP((uVar2 + 0xc)));
    *((ushort *)GEN_TOP(((int)this + 0x7c))) = *((ushort *)GEN_TOP(((int)this + 0x7c))) | 2;
  }
  return *((uint *)GEN_TOP(((int)this + 100)));
}

/* ref: FUN_00bd30b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd30b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd30b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00bd2480(param_1 GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    if (param_2 != '\0') {
      uVar2 = F_00bd3f80(param_1 GEN_EDX_ARG);
      if (uVar2 != 0) {
        *((undefined1 *)GEN_TOP((uVar2 + 0xe6))) = 1;
      }
    }
    *((ushort *)GEN_TOP(((int)param_1 + 0x7c))) = *((ushort *)GEN_TOP(((int)param_1 + 0x7c))) | 0x20;
  }
  return uVar2;
}

/* ref: FUN_00bd30e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd30e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd30e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  double dVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x70)));
  if (iVar2 != 0) goto LAB_00bd3117;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar2 != 0) goto LAB_00bd310e;
  }
  else {
LAB_00bd310e: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP((iVar2 + 4)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x70)));
LAB_00bd3117: ;
  *((ushort *)GEN_TOP(((int)this + 0x7c))) = *((ushort *)GEN_TOP(((int)this + 0x7c))) & 0xfffe;
  uVar3 = 0xfffd;
  *((ushort *)GEN_TOP(((int)this + 0x7c))) = *((ushort *)GEN_TOP(((int)this + 0x7c))) & 0xfffd;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0xffffffff;
  if (iVar2 != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x2c))) == 6) {
      uVar3 = F_00bd3040(this GEN_EDX_FWD);
      if ((uVar3 & 1) == 0) {
        if ((*((uint *)GEN_TOP(((int)this + 0x90))) >> 4 & 1) != 0) {
          *((ushort *)GEN_TOP(((int)this + 0x7c))) = *((ushort *)GEN_TOP(((int)this + 0x7c))) | 1;
          return uVar3;
        }
      }
      else {
        fVar1 = *((float *)GEN_TOP(((int)this + 0x3c)));
        bVar4 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
        bVar5 = bVar4 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
        uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                         CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1)
                                  ,(char)uVar3));
        if (bVar4 != bVar5) {
          *((ushort *)GEN_TOP(((int)this + 0x7c))) = *((ushort *)GEN_TOP(((int)this + 0x7c))) | 1;
          return uVar3;
        }
      }
    }
    else if ((*((byte *)GEN_TOP(((int)this + 0x7c))) >> 2 & 1) != 0) {
      fVar1 = *((float *)GEN_TOP(((int)this + 0x3c)));
      bVar4 = GEN_ISNAN(fVar1);
      bVar5 = bVar4 || fVar1 == 0.0;
      uVar3 = (uint)CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar1),0xfd);
      if (bVar4 != bVar5) {
        fVar1 = *((float *)GEN_TOP(((int)this + 0x34)));
        bVar4 = GEN_ISNAN(fVar1);
        bVar5 = bVar4 || fVar1 == 0.0;
        uVar3 = (uint)CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar1),0xfd);
        if (bVar4 != bVar5) {
          fVar1 = *((float *)GEN_TOP((iVar2 + 0x6c)));
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this); dVar7 = extraout_ST0;
          uVar3 = (uint)(ulonglong)gen_d2bits(dVar7);
          if (!((float10)fVar1 <= extraout_ST0)) {
            fVar1 = *((float *)GEN_TOP((iVar2 + 0x68)));
            extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this); dVar7 = extraout_ST0_00;
            fVar6 = (float10)fVar1;
            bVar4 = GEN_ISNAN(extraout_ST0_00) || GEN_ISNAN(fVar6);
            bVar5 = bVar4 || extraout_ST0_00 == fVar6;
            uVar3 = CONCAT22((short)((ulonglong)gen_d2bits(dVar7) >> 0x10),
                             CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= extraout_ST0_00),
                                      (char)(ulonglong)gen_d2bits(dVar7)));
            if (bVar4 == bVar5) {
              return uVar3;
            }
          }
          *((ushort *)GEN_TOP(((int)this + 0x7c))) = *((ushort *)GEN_TOP(((int)this + 0x7c))) | 1;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf48 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd3200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd3200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  code * pcVar2;
  undefined4 uVar3;
  uint in_EAX = 0;
  
  if (((char)param_1 == '\0') || (((byte)this[0x7c] & 1) == 0)) {
    iVar1 = *(int *)(this + 0x24);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x58) = 1;
      *(undefined4 *)(this + 0x5c) = 1;
      *(float *)(this + 0x34) =
           ((float)GEN_TOF(((float10)*((ushort *)GEN_TOP((iVar1 + 2))) + (float10)*(float *)(this + 0x3c))));
      *(float *)(this + 0x38) = (float)*((ushort *)GEN_TOP((iVar1 + 4)));
      uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
      *(undefined4 *)(this + 0x60) = 0;
      *(undefined4 *)(this + 0x50) = uVar3;
      *(undefined4 *)(this + 0x30) = 0;
    }
    *(undefined4 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xe) = 0;
    this[0x10] = (undefined1)0x0;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x6c)));
    *(undefined4 *)(this + 0x44) = 0;
    in_EAX = (*pcVar2)(this);
  }
  return in_EAX;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd3280(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd3280u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1[4]);
  if ((char)param_1[4] == '\0') {
    if ((char)param_1[3] != '\0') {
      param_1[0x10] =
           (int)gen_fl2bits((float)((float10)param_2 + ((float10)GEN_TOD(gen_bits2f(param_1[0x10])))));
    }
    if ((*(byte *)(param_1 + 0x1f) & 1) == 0) {
      uVar1 = F_00bd2a10(param_1 GEN_EDX_FWD,gen_bits2f((unsigned int)(0)));
    }
    if ((char)param_1[3] != '\0') {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x70))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  return uVar1;
}

/* ref: FUN_00bd32d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd32d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd32d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  char cVar1;
  int iVar2;
  code * pcVar3;
  uint uVar4;
  float10 extraout_ST0;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  if (((*((byte *)GEN_TOP(((int)this + 0x7c))) & 1) == 0) &&
     ((cVar1 = *((char *)GEN_TOP(((int)this + 0x29))), cVar1 == '\0' || (cVar1 == '\x02')))) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x24)));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
    (*(ushort *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x4)));
    (*(int *)(gen_frame + 0x0)) = (int)(longlong)TRUNC(extraout_ST0);
    uVar4 = (*(int *)(gen_frame + 0x0)) + (uint)*((ushort *)GEN_TOP((iVar2 + 2)));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    if (uVar4 <= param_1) {
      pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x2c)));
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 6;
      uVar4 = (*pcVar3)(this,0x1e,&(*(undefined4 *)(gen_frame + 0xc)));
      if (cVar1 == '\0') {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_FWD,1);
      }
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf54 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd3380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pBVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  
  if (*(int *)(this + 0x30) == 0) {
    return 1;
  }
  bVar2 = F_00bd2480(this GEN_EDX_FWD);
  if ((bVar2 != 0) && (uVar3 = F_00b5c7e0(*(undefined4 *)(this + 0x2c)), uVar3 == 1)) {
    return 1;
  }
  if (*(int *)(this + 0x2c) == 6) {
    this_00 = ((undefined *)GEN_TOP(F_00a0b580(this GEN_EDX_ARG)));
    uVar3 = F_0054d950(this GEN_EDX_ARG);
    uVar3 = F_00bcfbe0(uVar3 GEN_EDX_ARG);
    uVar4 = F_00be5a60(this GEN_EDX_ARG);
    uVar5 = F_00bd3040(this GEN_EDX_ARG);
    bVar2 = F_00bc4640(this_00 GEN_EDX_ARG,uVar5,uVar4,uVar3);
    if (bVar2 == 0) {
      pBVar1 = this + 0x54;
      if ((!GEN_ISNAN(*(float *)pBVar1) && (!(0.0 < *(float *)pBVar1) && *(float *)pBVar1 != 0.0)) &&
         (uVar3 = F_0054d920(this GEN_EDX_ARG), uVar3 != 0)) {
        fVar6 = F_00531220(uVar3 GEN_EDX_ARG);
        *(float *)(this + 0x54) = (float)fVar6;
      }
      bVar2 = F_00bd3f20(this GEN_EDX_ARG);
      return bVar2 != 0;
    }
    if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(this + 0x54)) {
      uVar3 = F_0054d920(this GEN_EDX_ARG);
      fVar6 = F_00531220(uVar3 GEN_EDX_ARG);
      *(float *)(this + 0x44) =
           ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar6 - (float10)*(float *)(this + 0x54)))) +
                  (float10)*(float *)(this + 0x44))));
    }
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffdf;
  if (*(int *)(this + 0x30) == 2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))(this GEN_EDX_ARG,1);
    if (((byte)this[0x7c] >> 5 & 1) != 0) {
      return 0;
    }
    *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
    if (this[0xe] == (undefined1)0x0) {
      *(undefined4 *)(this + 10) = 0x1010000;
    }
    if (this[0x29] != (undefined1)0x4) goto switchD_00bd34c1_default;
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))(this GEN_EDX_ARG,2);
    if (((byte)this[0x7c] >> 5 & 1) != 0) {
      if (*(int *)(this + 0x30) != 7) {
        return 0;
      }
      if (this[0xd] != (undefined1)0x0) {
        return 0;
      }
      F_00bd1e60(this GEN_EDX_ARG);
      return 0;
    }
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x30))) {
    case 4: ;
    case 7: ;
      F_00bd1e60(this GEN_EDX_ARG);
      *(undefined4 *)(this + 0x30) = 0;
      return 1;
    case 5: ;
      *(undefined4 *)(this + 0xc) = 0;
      this[0x10] = (undefined1)0x0;
      *(undefined2 *)(this + 0x12) = 0;
      this[0x14] = (undefined1)0x0;
      break;
    case 6: ;
      break;
    default: ;
      goto switchD_00bd34c1_default;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,1);
switchD_00bd34c1_default: ;
  *(undefined4 *)(this + 0x30) = 0;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf38 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd3510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (this[0xe] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = F_00bd2480(this GEN_EDX_FWD);
  if (bVar1 == 0) {
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x20;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf57 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd3530(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd3530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  float10 fVar2;
  
  if (param_1[0xc] != 0) {
    return;
  }
  if (param_1[0x1a] != 0) {
    return;
  }
  if ((param_2 == 6) && ((*(byte *)(param_1 + 0x1f) & 1) != 0)) {
    return;
  }
  iVar1 = param_1[0x1c];
  if (iVar1 != 0) goto LAB_00bd3586;
  iVar1 = param_1[0x1b];
  if (iVar1 == 0) {
    if (param_1[1] != 0) {
      param_1[0x1b] = *((int *)GEN_TOP((param_1[1] + 4)));
    }
    iVar1 = param_1[0x1b];
    if (iVar1 != 0) goto LAB_00bd357d;
  }
  else {
LAB_00bd357d: ;
    param_1[0x1c] = *((int *)GEN_TOP((iVar1 + 4)));
  }
  iVar1 = param_1[0x1c];
LAB_00bd3586: ;
  if (*((char *)GEN_TOP((iVar1 + 0x30))) == '\0') {
    if (*((char *)GEN_TOP((iVar1 + 0x80))) == '\0') {
      param_2 = *((uint *)GEN_TOP((iVar1 + 0x58)));
    }
    else {
      param_2 = *((uint *)GEN_TOP((iVar1 + 0x6c)));
    }
  }
  else {
    fVar2 = (float10)*((int *)GEN_TOP((iVar1 + 0x34)));
    if (*((int *)GEN_TOP((iVar1 + 0x34))) < 0) {
      fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    param_2 = (uint)gen_fl2bits((float)fVar2);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_1[0xd]))) <= ((float10)GEN_TOD(gen_bits2f(param_2)))) {
    if ((char)param_1[10] == '\0') {
      *((undefined4 *)GEN_TOP(((int)param_1 + 10))) = 0x1000000;
      F_00bd41b0(param_1 GEN_EDX_FWD);
      return;
    }
    if ((param_1[0xb] != 0) && (param_1[0xb] != 7)) {
      F_00bd22f0(param_1 GEN_EDX_ARG);
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x84))))(param_1 GEN_EDX_ARG,1);
    param_1[0x18] = param_1[0x18] + 1;
    *((undefined4 *)GEN_TOP(((int)param_1 + 10))) = 0x1010000;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf58 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd3620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd3620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  if (*(int *)(this + 0x30) != 0) {
    return 1;
  }
  if (*(int *)(this + 0x68) != 0) {
    return 0;
  }
  if ((param_1 == 6) && (((byte)this[0x7c] & 1) != 0)) {
    return 0;
  }
  iVar1 = *(int *)(this + 0x70);
  if (iVar1 != 0) goto LAB_00bd3669;
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 != 0) goto LAB_00bd3660;
  }
  else {
LAB_00bd3660: ;
    *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
  }
  iVar1 = *(int *)(this + 0x70);
LAB_00bd3669: ;
  if ((uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 2))) <= *((uint *)GEN_TOP((iVar1 + 0x34)))) {
    if (this[0x28] != (undefined1)0x0) {
      if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x2c) != 7)) {
        F_00bd22f0(this GEN_EDX_FWD);
        return 1;
      }
      *(undefined4 *)(this + 0x30) = 2;
      return 1;
    }
    *(undefined4 *)(this + 10) = 0x1000000;
    F_00bd41b0(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00bd36b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd36b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbd36b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 extraout_ST0_00;
  
  if (((*(byte *)(param_1 + 0x1f) & 1) == 0) || ((*(byte *)(param_1 + 0x1f) >> 1 & 1) == 0)) {
    iVar4 = *param_1;
    piVar2 = param_1;
  }
  else {
    piVar2 = ((int *)GEN_TOP(param_1[0x1c]));
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
      iVar4 = param_1[0x1b];
      if (iVar4 == 0) {
        if (param_1[1] != 0) {
          param_1[0x1b] = *((int *)GEN_TOP((param_1[1] + 4)));
        }
        iVar4 = param_1[0x1b];
        if (iVar4 != 0) goto LAB_00bd36e8;
      }
      else {
LAB_00bd36e8: ;
        param_1[0x1c] = *((int *)GEN_TOP((iVar4 + 4)));
      }
      piVar2 = ((int *)GEN_TOP(param_1[0x1c]));
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x6c))))(piVar2 GEN_EDX_FWD)));
    iVar4 = *piVar2;
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar4 + 0x5c))))(piVar2);
  fVar1 = (float)extraout_ST0;
  if (((param_1[0xb] == 6) &&
      (((uVar3 = F_00bd3040(param_1 GEN_EDX_ARG), (uVar3 & 0x200) != 0 &&
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
         ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114)))) ||
       (uVar3 = F_00bd3040(param_1 GEN_EDX_ARG), (uVar3 & 0x400) != 0)))) ||
     (!((float10)fVar1 <= (float10)*((float *)GEN_TOP(param_2))))) {
    return 0;
  }
  *((float *)GEN_TOP(param_2)) = fVar1;
  iVar4 = param_1[0x1c];
  if (iVar4 != 0) goto LAB_00bd378a;
  iVar4 = param_1[0x1b];
  if (iVar4 == 0) {
    if (param_1[1] != 0) {
      param_1[0x1b] = *((int *)GEN_TOP((param_1[1] + 4)));
    }
    iVar4 = param_1[0x1b];
    if (iVar4 != 0) goto LAB_00bd3781;
  }
  else {
LAB_00bd3781: ;
    param_1[0x1c] = *((int *)GEN_TOP((iVar4 + 4)));
  }
  iVar4 = param_1[0x1c];
LAB_00bd378a: ;
  if (*((char *)GEN_TOP((iVar4 + 0x30))) == '\0') {
    if (*((char *)GEN_TOP((iVar4 + 0x80))) == '\0') {
      param_2 = *((uint *)GEN_TOP((iVar4 + 0x58)));
    }
    else {
      param_2 = *((uint *)GEN_TOP((iVar4 + 0x6c)));
    }
  }
  else {
    fVar5 = (float10)*((int *)GEN_TOP((iVar4 + 0x34)));
    if (*((int *)GEN_TOP((iVar4 + 0x34))) < 0) {
      fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    param_2 = (uint)gen_fl2bits((float)fVar5);
  }
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_1 + 0xac))))(param_1);
  *param_3 = (float)(extraout_ST0_00 - ((float10)GEN_TOD(gen_bits2f(param_2))));
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf47 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd37f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd37f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  if ((this[0xc] != (undefined1)0x0) || (this[0xd] != (undefined1)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_FWD,2);
    *(undefined4 *)(this + 10) = 0;
  }
  F_00bd30e0(this GEN_EDX_ARG);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  uVar2 = *(uint *)(this + 0x24);
  if (uVar2 != 0) {
    *(undefined4 *)(this + 0x58) = 1;
    *(undefined4 *)(this + 0x5c) = 1;
    *(float *)(this + 0x34) =
         ((float)GEN_TOF(((float10)*((ushort *)GEN_TOP((uVar2 + 2))) + (float10)*(float *)(this + 0x3c))));
    *(float *)(this + 0x38) = (float)*((ushort *)GEN_TOP((uVar2 + 4)));
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x50) = uVar1;
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(undefined4 *)(this + 10) = 0;
  *(undefined2 *)(this + 0xe) = 0;
  this[0x10] = (undefined1)0x0;
  *(undefined2 *)(this + 0x12) = 0;
  this[0x14] = (undefined1)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x54) = uVar1;
  if (*(int *)(this + 0x20) != 0) {
    F_00c219f0();
  }
  if (*(int *)(this + 0x24) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf11 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd38a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd38a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  uint uVar5;
  undefined3 extraout_var_04 = 0;
  undefined4 uVar6;
  int * piVar7;
  code * pcVar8;
  int iVar9;
  float10 fVar10;
  float10 extraout_ST0;
  byte local_5;
  
  uVar5 = (*(uint *)&gen_args[1]);
  uVar4 = (*(uint *)&gen_args[0]) - 1;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    piVar7 = ((int *)GEN_TOP(F_0054d920(param_1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xa0))))(piVar7 GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x34))))(param_1 GEN_EDX_ARG);
    return uVar4;
  case 1: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xbc))))(param_1 GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 2: ;
    if (*((char *)GEN_TOP(((int)param_1 + 0x11))) == '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x60))))(param_1 GEN_EDX_ARG);
    uVar4 = F_00b61970(param_1 GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 3: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
    if ((char)uVar4 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xec))))(param_1 GEN_EDX_ARG,0xc);
      F_00bd41b0(param_1 GEN_EDX_ARG);
      return CONCAT31(extraout_var,1);
    }
    break;
  case 4: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
    if ((char)uVar4 != '\0') {
      F_00bd41b0(param_1 GEN_EDX_ARG);
      return CONCAT31(extraout_var_00,1);
    }
    break;
  case 5: ;
  case 6: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 7: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))(param_1 GEN_EDX_ARG);
    return uVar4;
  case 8: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 100))))(param_1 GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 9: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xbc))))(param_1 GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 10: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc0))))(param_1 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((*(uint *)&gen_args[1]))));
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0xb: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x7c))))(param_1 GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0xc: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x80))))(param_1 GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0xd: ;
  case 0x11: ;
  case 0x14: ;
  case 0x19: ;
    break;
  case 0xe: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0xf: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 200))))(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))));
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x10: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd0))))(param_1 GEN_EDX_ARG,param_1[0x10]);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x12: ;
    if (*((char *)GEN_TOP(((int)param_1 + 0xe))) == '\0') {
      bVar3 = F_00bd3f20(param_1 GEN_EDX_ARG);
      uVar4 = CONCAT31(extraout_var_03,bVar3);
      if (bVar3 != 0) {
        iVar2 = param_1[0xb];
        iVar9 = 0;
        if (iVar2 == 6) {
          uVar4 = F_00be5a60(param_1 GEN_EDX_ARG);
          if (uVar4 != 0) {
            iVar9 = 1;
          }
LAB_00bd3c26: ;
          if ((param_1[0xb] == 0x1d) && (uVar4 = param_1[9], *((char *)GEN_TOP((uVar4 + 0x14))) != '\0'))
          break;
        }
        else {
          if (iVar2 == 0x1d) goto LAB_00bd3c26;
          if (iVar2 - 0x1e != 0) {
            return CONCAT31((int3)((uint)(iVar2 - 0x1e) >> 8),1);
          }
        }
        uVar5 = F_00a0b580(param_1 GEN_EDX_ARG);
        if (param_1[0xb] == 0x1e) {
          uVar5 = F_00a0b580(param_1 GEN_EDX_ARG);
        }
        bVar3 = F_00bc3d90(uVar5 GEN_EDX_ARG,iVar9,0);
        uVar4 = CONCAT31(extraout_var_04,bVar3);
        if ((bVar3 != 0) && (uVar4 = 0, (*((uint *)GEN_TOP((uVar5 + 0x30 + iVar9 * 0x30))) >> 4 & 1) == 0)) {
          if (*((char *)GEN_TOP(((int)param_1 + 0xd))) == '\0') {
            piVar7 = ((int *)GEN_TOP(F_0054d920(param_1 GEN_EDX_ARG)));
            extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x30))))(piVar7);
            (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0xd]))) +
                                               (float10)(float)extraout_ST0));
            uVar6 = F_00bc3f20(uVar5 GEN_EDX_ARG,iVar9,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[1]))));
            return CONCAT31((int3)((uint)uVar6 >> 8),1);
          }
          if (iVar9 != 1) {
            iVar2 = *((int *)GEN_TOP((uVar5 + 0x48 + iVar9 * 0x30)));
            fVar10 = (float10)iVar2;
            if (iVar2 < 0) {
              fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
            }
            iVar2 = param_1[0xb];
            (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)fVar10);
            (*(uint *)&gen_args[1]) = 0;
            if ((iVar2 == 0x1d) || (iVar2 == 0x1e)) {
              local_5 = 0;
            }
            else {
              local_5 = F_00bd36b0(param_1 GEN_EDX_ARG,(uint)&(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[1]));
              if (local_5 != 0) {
                uVar6 = F_00bc3e90(uVar5 GEN_EDX_ARG,iVar9,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[0]))),GEN_ARGF(gen_bits2f((*(uint *)&gen_args[1]))));
                return CONCAT31((int3)((uint)uVar6 >> 8),local_5);
              }
            }
            uVar4 = F_00bc3f00(uVar5 GEN_EDX_ARG,iVar9);
            return CONCAT31((int3)(uVar4 >> 8),local_5);
          }
        }
      }
    }
    break;
  case 0x13: ;
    if ((param_1[0xb] == 6) && (uVar4 = F_00be5a60(param_1 GEN_EDX_ARG), uVar4 == 0)) {
      return 0;
    }
    break;
  case 0x15: ;
    if (*((char *)GEN_TOP(((int)param_1 + 0xd))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*(uint *)&gen_args[1])));
      uVar6 = *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 4)));
      (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),cVar1);
      bVar3 = F_00bd2b80(param_1 GEN_EDX_ARG,uVar6,(uint)(cVar1 == '\0'),(*(uint *)&gen_args[1]));
      return CONCAT31(extraout_var_01,bVar3 == 0);
    }
    if ((char)param_1[3] != '\0') {
      uVar4 = F_00bd32d0(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 4))));
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    break;
  case 0x16: ;
  case 0x17: ;
    if (*((char *)GEN_TOP(((int)param_1 + 0xd))) == '\0') {
      uVar6 = *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 4)));
      (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP((*(uint *)&gen_args[1]))));
      bVar3 = F_00bd2b80(param_1 GEN_EDX_ARG,uVar6,1,(*(uint *)&gen_args[1]));
      return CONCAT31(extraout_var_02,bVar3 == 0);
    }
    if ((char)param_1[3] != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xcc))))(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))));
      uVar4 = F_00bd32d0(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar5 + 4))));
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    break;
  case 0x18: ;
    pcVar8 = *((gen_code32 *)GEN_TOP((*param_1 + 0xcc)));
    goto LAB_00bd3d75;
  case 0x1a: ;
    if (*((char *)GEN_TOP(((int)param_1 + 0xd))) != '\0') {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd4))))(param_1 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((*(uint *)&gen_args[1]))));
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    break;
  case 0x1b: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xdc))))(param_1 GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x1c: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe8))))(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 4))));
    if ((char)uVar4 != '\0') {
      return uVar4 & 0xffffff00;
    }
    break;
  case 0x1d: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xf0))))(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 4))));
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x1e: ;
  case 0x1f: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x8c))))
                      (param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 4))),(uint)*((byte *)GEN_TOP((*(uint *)&gen_args[1]))));
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x20: ;
    pcVar8 = *((gen_code32 *)GEN_TOP((*param_1 + 0x90)));
    goto LAB_00bd3d75;
  case 0x21: ;
    pcVar8 = *((gen_code32 *)GEN_TOP((*param_1 + 0x94)));
LAB_00bd3d75: ;
    uVar4 = (*pcVar8)(param_1,*((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))));
    break;
  default: ;
    goto switchD_00bd38ba_default;
  }
switchD_00bd38ba_default: ;
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: FUN_00bd3ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd3ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd3ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x30))) = param_2;
  return param_2;
}

/* ref: FUN_00bd3ed0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd3ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd3ed0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x40))) = ((float)GEN_TOF(((float10)param_2 + (float10)*((float *)GEN_TOP((in_ecx + 0x40))))));
  return;
}

/* ref: FUN_00bd3ef0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd3ef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd3ef0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x44))) = ((float)GEN_TOF(((float10)param_2 + (float10)*((float *)GEN_TOP((in_ecx + 0x44))))));
  return;
}

/* ref: FUN_00bd3f20 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd3f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x74)));
  if (iVar1 != 0) goto LAB_00bd3f6a;
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar1 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar1 != 0) goto LAB_00bd3f50;
    }
    else {
LAB_00bd3f50: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    }
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) goto LAB_00bd3f5d;
  }
  else {
LAB_00bd3f5d: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 100))))(piVar3 GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x74))) = uVar2;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x74)));
LAB_00bd3f6a: ;
  if (iVar1 != 0) {
    return *((int *)GEN_TOP((iVar1 + 0xdc))) != 0;
  }
  return 0;
}

/* ref: FUN_00bd3f80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd3f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x74)));
  if (iVar1 != 0) goto LAB_00bd3fca;
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar1 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar1 != 0) goto LAB_00bd3fb0;
    }
    else {
LAB_00bd3fb0: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    }
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) goto LAB_00bd3fbd;
  }
  else {
LAB_00bd3fbd: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 100))))(piVar3 GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x74))) = uVar2;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x74)));
LAB_00bd3fca: ;
  if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 0xdc))) != 0)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xdc))) + 4)));
  }
  return 0;
}

/* ref: FUN_00bd3ff0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd3ff0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP((in_ecx + 0x78)));
  if (iVar2 != 0) goto LAB_00bd402e;
  iVar2 = *((int *)GEN_TOP((in_ecx + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP((in_ecx + 4))) != 0) {
      *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP((in_ecx + 0x6c)));
    if (iVar2 != 0) goto LAB_00bd4019;
  }
  else {
LAB_00bd4019: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *((int *)GEN_TOP((in_ecx + 0x78)));
LAB_00bd402e: ;
  if ((iVar2 != 0) && (*((char *)GEN_TOP((iVar2 + 0x12))) == '\0')) {
    return *((uint *)GEN_TOP((iVar2 + 4)));
  }
  return 0;
}

/* ref: FUN_00bd4050 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd4050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd408a;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar2 != 0) goto LAB_00bd4075;
  }
  else {
LAB_00bd4075: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
LAB_00bd408a: ;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_00bbaf50(this_00 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00bd40a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd40a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd40a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd40da;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar2 != 0) goto LAB_00bd40c5;
  }
  else {
LAB_00bd40c5: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
LAB_00bd40da: ;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_00bbaf90(this_00 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00bd4130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd4130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x48 + param_2 * 0x30)));
}

/* ref: FUN_00bd4150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd4150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + (param_2 * 3 + 3) * 0x10))) >> 4 & 1;
}

/* ref: FUN_00bd41b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd41b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd41b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0xd))) = 0x1010101;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd4280(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x1106874));
  if (param_1[0x1e] != 0) {
    F_00b59c20(REFG(void * PTR32, 0x14c4e78) GEN_EDX_FWD,param_1[0x1e]);
  }
  if (((undefined *)GEN_TOP(param_1[8])) != ((undefined *)GEN_TOP(0x0))) {
    F_00c21b10(((undefined *)GEN_TOP(param_1[8])) GEN_EDX_ARG);
    puVar1 = ((undefined4 *)GEN_TOP(param_1[8]));
    if ((*((char *)GEN_TOP(((int)puVar1 + 0x16))) == '\0') && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    param_1[8] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd42f0 */
GEN_OWN GEN_FRAME float10 F_00bd42f0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd42f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd4310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd4310(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbd4310u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined * this;
  undefined4 uVar6;
  
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x6c)));
  iVar1 = *((int *)GEN_TOP((param_1 + 0x24)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    uVar4 = 0;
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *((uint *)GEN_TOP((param_1 + 0x6c))) = uVar4;
    }
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x6c)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      return uVar4;
    }
  }
  F_00beb760(this GEN_EDX_FWD);
  uVar4 = F_00beb670(this GEN_EDX_ARG);
  if (uVar4 != 0) {
    iVar2 = *((int *)GEN_TOP((iVar1 + 0x10)));
    iVar5 = 0;
    uVar6 = 0;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else if (iVar2 == 1) {
      iVar5 = 1;
    }
    else if (iVar2 == 2) {
      iVar5 = 2;
    }
    switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((iVar1 + 0xc))))) {
    case 0: ;
      uVar6 = 1;
      break;
    case 1: ;
      uVar6 = 0;
      break;
    case 2: ;
      uVar6 = 2;
      break;
    case 3: ;
      uVar6 = 3;
    }
    iVar1 = iVar5 * 0x7a0 + 0x1e10 + uVar4;
    if (param_2 != '\0') {
      bVar3 = F_006a5bf0(iVar1 GEN_EDX_ARG,uVar6,(float)(float10)0);
      return CONCAT31(extraout_var,bVar3);
    }
    F_006a5c40(iVar1 GEN_EDX_ARG,param_3);
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd43e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd43e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bd4310(this GEN_EDX_FWD,1,(float)(float10)0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd43f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd43f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bd4310(this GEN_EDX_FWD,0,(float)(float10)1);
  return 1;
}

/* ref: FUN_00bd4410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd4410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar2;
  float local_8;
  
  local_8 = 0.0;
  fVar2 = F_00bd2390(this GEN_EDX_FWD);
  if (0.0 <= (double)fVar2) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
    if ((float10)fVar2 < extraout_ST0) {
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
      local_8 = (float)((float10)fVar2 / extraout_ST0_00);
    }
    else {
      local_8 = REFG(float, 0x1087f04);
    }
  }
  uVar1 = F_00bd4310(this GEN_EDX_ARG,(undefined1)param_1,local_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd44a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd44a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bd4410(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Lua::LuaInvoker::UserDataInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd44d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd44d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1106a98));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd4500 */
GEN_OWN GEN_FRAME float10 F_00bd4500(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd4500u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd4530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd4530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined * this_00;
  uint in_ecx;
  undefined3 extraout_var = 0;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x78)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd456b;
  iVar4 = *((int *)GEN_TOP((iVar1 + 0x6c)));
  if (iVar4 == 0) {
    if (*((int *)GEN_TOP((iVar1 + 4))) != 0) {
      *((undefined4 *)GEN_TOP((iVar1 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) + 4)));
    }
    iVar4 = *((int *)GEN_TOP((iVar1 + 0x6c)));
    if (iVar4 != 0) goto LAB_00bd4556;
  }
  else {
LAB_00bd4556: ;
    uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 0x20)));
    *((undefined4 *)GEN_TOP((iVar1 + 0x78))) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x78)));
LAB_00bd456b: ;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    in_ecx = F_00bbaf90(this_00 GEN_EDX_ARG);
    if (in_ecx != 0) {
      bVar3 = F_00a9f620(in_ecx GEN_EDX_ARG);
      return CONCAT31(extraout_var,bVar3);
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::VariableClip::vf33 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd4590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x24);
  iVar2 = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x1106aa4));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  if (0 < *((int *)GEN_TOP((iVar1 + 0x10)))) {
    do {
      F_00b5f7d0(REFG(void * PTR32, 0x14c4ea0) GEN_EDX_FWD,*((int *)GEN_TOP((iVar1 + 0x14))) + iVar2 * 8 + iVar1,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      F_00b5f440(REFG(void * PTR32, 0x14c4ea0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xc))) + iVar2 * 4 + iVar1))),(*(undefined4 *)(gen_frame + 0x8)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP((iVar1 + 0x10))));
  }
  return;
}

/* ref: FUN_00bd4610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd4610(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1106a98));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd4640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd4640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd4660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd4660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 0x14))) + param_1 * 8 + (int)this;
}

/* ref: Client::System::Scheduler::Clip::SetPosClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd4690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined * this_00;
  int * piVar6;
  float10 extraout_ST0;
  float10 fVar7;
  
  iVar5 = *(int *)(this + 0x78);
  if (iVar5 == 0) {
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar5 = *(int *)(this + 0x6c);
      if (iVar5 != 0) goto LAB_00bd46cf;
    }
    else {
LAB_00bd46cf: ;
      uVar2 = *((undefined4 *)GEN_TOP((iVar5 + 0x20)));
      *(undefined4 *)(this + 0x78) = uVar2;
      F_00b595f0(uVar2);
    }
    iVar5 = *(int *)(this + 0x78);
    if (iVar5 != 0) goto LAB_00bd46e8;
    piVar6 = ((int *)GEN_TOP(0x0));
  }
  else {
LAB_00bd46e8: ;
    if (*((char *)GEN_TOP((iVar5 + 0x12))) == '\0') {
      piVar6 = *((int * PTR32 *)GEN_TOP((iVar5 + 4)));
    }
    else {
      piVar6 = ((int *)GEN_TOP(0x0));
    }
  }
  uVar3 = *(uint *)(this + 0x2c);
  if (uVar3 != 0x10) {
    if (uVar3 != 0x1b) {
      return uVar3;
    }
    iVar5 = *(int *)(this + 0x24);
    fVar1 = *((float *)GEN_TOP((iVar5 + 0xc)));
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x38)) = fVar1;
    if (((*((byte *)GEN_TOP((iVar5 + 6))) & 1) != 0) &&
       (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x3c))))(piVar6 GEN_EDX_ARG), uVar3 != 0)) {
      (*(float *)(gen_frame + 0x4c)) = *((float *)GEN_TOP((uVar3 + 0x294)));
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x80))))(piVar6);
      fVar1 = ((float)GEN_TOF(((float10)1 / (extraout_ST0 * (float10)(*(float *)(gen_frame + 0x4c))))));
      (*(float *)(gen_frame + 0x4c)) = fVar1;
      fVar7 = (float10)fVar1;
      (*(float *)(gen_frame + 0x30)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x34)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x38)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x38)));
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x18))))(piVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
    return uVar3;
  }
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),*(int *)(this + 0x24) + 0xc);
  puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x1c))))(piVar6 GEN_EDX_ARG)));
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar4;
  (*(undefined4 *)(gen_frame + 0x24)) = puVar4[1];
  (*(undefined4 *)(gen_frame + 0x28)) = puVar4[2];
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x20))))(piVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd4810;
  iVar5 = *(int *)(this + 0x6c);
  if (iVar5 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 != 0) goto LAB_00bd47f7;
  }
  else {
LAB_00bd47f7: ;
    uVar2 = *((undefined4 *)GEN_TOP((iVar5 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00bd4810: ;
  uVar3 = F_00bc4070(this_00 GEN_EDX_ARG,0xffffffff);
  return uVar3;
}

/* ref: FUN_00bd4840 */
GEN_OWN GEN_FRAME float10 F_00bd4840(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd4840u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf18 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd4860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x2c) == 0x4b) {
    *(undefined4 *)(this + 0x88) = *((undefined4 *)GEN_TOP((REFG(int, 0x1371280) + 0x2c)));
    *(undefined4 *)(this + 0x8c) = *((undefined4 *)GEN_TOP((REFG(int, 0x1371280) + 0x30)));
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf24 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd4890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x2c))) == 0x4b) {
    *((undefined4 *)GEN_TOP((REFG(int, 0x1371280) + 0x2c))) = *((undefined4 *)GEN_TOP((in_ecx + 0x88)));
    *((undefined4 *)GEN_TOP((REFG(int, 0x1371280) + 0x30))) = *((undefined4 *)GEN_TOP((in_ecx + 0x8c)));
  }
  return;
}

/* ref: FUN_00bd48c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd48c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd48c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 uVar1;
  uint in_EAX = 0;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * this;
  
  if (*((int *)GEN_TOP((param_1 + 0x2c))) != 0x68) {
    return in_EAX;
  }
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x78)));
  if (this != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd4907;
  iVar2 = *((int *)GEN_TOP((param_1 + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP((param_1 + 0x6c)));
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd48ee;
  }
  else {
LAB_00bd48ee: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *((undefined4 *)GEN_TOP((param_1 + 0x78))) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x78)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    return uVar3;
  }
LAB_00bd4907: ;
  uVar4 = F_00bbaf90(this GEN_EDX_ARG);
  uVar3 = 0;
  if ((uVar4 != 0) && (uVar3 = *((uint *)GEN_TOP((uVar4 + 0xec))), uVar3 != 0)) {
    *((byte *)GEN_TOP((uVar3 + 100))) = (param_2 != '\0') * '\x02' | *((byte *)GEN_TOP((uVar3 + 100))) & 0xfd;
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd4940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)(this + 0x2c);
  uVar2 = iVar1 - 0x11;
  if (uVar2 < 0x58) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xbd49bc) + iVar1 + 3)));
    switch((unsigned int)(uintptr_t)(iVar1)) {
    case 0x11: ;
      piVar3 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_FWD)));
      uVar2 = 0;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x54))))(piVar3 GEN_EDX_ARG,1);
        return uVar2;
      }
      break;
    case 0x3a: ;
    case 0x3b: ;
      uVar2 = F_00bd3f80(this GEN_EDX_ARG);
      *((ushort *)GEN_TOP((uVar2 + 0x70))) = *((ushort *)GEN_TOP((uVar2 + 0x70))) & 0xfffe;
      uVar2 = F_00bd3f80(this GEN_EDX_ARG);
      *((undefined1 *)GEN_TOP((uVar2 + 0xe4))) = 0;
      return uVar2;
    case 0x4b: ;
      *((undefined4 *)GEN_TOP((REFG(int, 0x1371280) + 0x2c))) = *(undefined4 *)(this + 0x88);
      *((undefined4 *)GEN_TOP((REFG(int, 0x1371280) + 0x30))) = *(undefined4 *)(this + 0x8c);
      return uVar2;
    case 0x68: ;
      uVar2 = F_00bd48c0(this GEN_EDX_ARG,1);
    }
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf33 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bd4a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0xfc, 4, 4);
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined1 SVar4;
  int iVar5;
  uint uVar6;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int * piVar7;
  bool bVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xf4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8));
  iVar5 = *(int *)(this + 0x78);
  if (iVar5 == 0) {
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar5 = *(int *)(this + 0x6c);
      if (iVar5 != 0) goto LAB_00bd4a69;
    }
    else {
LAB_00bd4a69: ;
      uVar1 = *((undefined4 *)GEN_TOP((iVar5 + 0x20)));
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar5 = *(int *)(this + 0x78);
    if (iVar5 == 0) {
      piVar7 = ((int *)GEN_TOP(0x0));
      goto LAB_00bd4a97;
    }
  }
  if (*((char *)GEN_TOP((iVar5 + 0x12))) == '\0') {
    piVar7 = *((int * PTR32 *)GEN_TOP((iVar5 + 4)));
  }
  else {
    piVar7 = ((int *)GEN_TOP(0x0));
  }
LAB_00bd4a97: ;
  uVar6 = *(int *)(this + 0x2c) - 0x11;
  switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
  case 0x11: ;
    iVar5 = *(int *)(this + 0x24);
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x54))))(piVar7 GEN_EDX_ARG,(uint)(*((char *)GEN_TOP((iVar5 + 0xc))) != '\0'));
    iVar2 = piVar7[0x14];
    if ((iVar2 != 0) && (*((char *)GEN_TOP((iVar5 + 0xd))) != '\0')) {
      piVar7 = *((int * PTR32 *)GEN_TOP((iVar2 + 4)));
      if (piVar7 != ((int *)GEN_TOP(0x0))) {
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x54))))(piVar7 GEN_EDX_ARG,(uint)(*((char *)GEN_TOP((iVar5 + 0xc))) != '\0'));
      }
      piVar7 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
      if (piVar7 != ((int *)GEN_TOP(0x0))) {
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x54))))(piVar7 GEN_EDX_ARG,(uint)(*((char *)GEN_TOP((iVar5 + 0xc))) != '\0'));
        return uVar6;
      }
    }
    break;
  case 0x1c: ;
    bVar8 = *((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == '\0';
    if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) == '\0') {
      this_00 = ((undefined *)GEN_TOP(F_00bd3f80(this GEN_EDX_ARG)));
      uVar6 = 0;
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        ((undefined4 *)(gen_frame + 0x4))[0] = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        bVar3 = F_00b60730(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)));
        uVar6 = CONCAT31(extraout_var_00,bVar3);
        if (bVar3 != 0) {
          do {
            piVar7 = ((int *)GEN_TOP(F_00beb650((*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
            if ((piVar7 != ((int *)GEN_TOP(0x0))) &&
               (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x4c))))(piVar7 GEN_EDX_ARG), uVar6 != 0)) {
              F_00a9fa40(uVar6 GEN_EDX_ARG,bVar8);
            }
            bVar3 = F_00b60730(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)));
          } while (bVar3 != 0);
          return CONCAT31(extraout_var_01,bVar3);
        }
      }
    }
    else {
      in_ecx = F_00bd40a0(this GEN_EDX_ARG);
      uVar6 = 0;
      if (in_ecx != 0) {
        bVar3 = F_00a9fa40(in_ecx GEN_EDX_ARG,bVar8);
        return CONCAT31(extraout_var,bVar3);
      }
    }
    break;
  case 0x3a: ;
    uVar6 = F_00bd3f80(this GEN_EDX_ARG);
    *((ushort *)GEN_TOP((uVar6 + 0x70))) = *((ushort *)GEN_TOP((uVar6 + 0x70))) | 1;
    iVar5 = *(int *)(this + 0x24);
    uVar6 = F_00bd3f80(this GEN_EDX_ARG);
    *((undefined2 *)GEN_TOP((uVar6 + 0x54))) = *((undefined2 *)GEN_TOP((iVar5 + 0xc)));
    uVar6 = F_00bd3f80(this GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP((uVar6 + 0xe4))) = 1;
    return uVar6;
  case 0x3b: ;
    uVar6 = F_00bd3f80(this GEN_EDX_ARG);
    *((ushort *)GEN_TOP((uVar6 + 0x70))) = *((ushort *)GEN_TOP((uVar6 + 0x70))) & 0xfffe;
    uVar6 = F_00bd3f80(this GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP((uVar6 + 0xe4))) = 0;
    return uVar6;
  case 0x4b: ;
    iVar5 = *(int *)(this + 0x24);
    if (*((char *)GEN_TOP((iVar5 + 0xc))) != '\0') {
      uVar6 = REFG(undefined4, 0x1371280);
      *((undefined4 *)GEN_TOP((REFG(undefined4, 0x1371280) + 0x2c))) = *(undefined4 *)(this + 0x88);
      *((undefined4 *)GEN_TOP((REFG(undefined4, 0x1371280) + 0x30))) = *(undefined4 *)(this + 0x8c);
      return uVar6;
    }
    *((undefined4 *)GEN_TOP((REFG(undefined4, 0x1371280) + 0x2c))) = *((undefined4 *)GEN_TOP((iVar5 + 0x10)));
    uVar6 = REFG(undefined4, 0x1371280);
    *((undefined4 *)GEN_TOP((REFG(undefined4, 0x1371280) + 0x30))) = *((undefined4 *)GEN_TOP((iVar5 + 0x14)));
    return uVar6;
  case 0x5a: ;
    uVar6 = F_00a0b580(this GEN_EDX_ARG);
    return uVar6;
  case 0x68: ;
    iVar5 = *(int *)(this + 0x24);
    uVar6 = F_00bd40a0(this GEN_EDX_ARG);
    if ((uVar6 == 0) || (*((int *)GEN_TOP((uVar6 + 0xec))) == 0)) {
      SVar4 = (undefined1)0x1;
    }
    else {
      SVar4 = (undefined1)(*((byte *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0xec))) + 100))) >> 1 & 1);
    }
    this[0x90] = SVar4;
    uVar6 = F_00bd48c0(this GEN_EDX_ARG,*((char *)GEN_TOP((iVar5 + 0xc))) == '\0');
  }
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf34 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd4dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((((param_1 != 2) && (*(int *)(this + 0x2c) == 0x68)) && (this[0xd] != (undefined1)0x0)) &&
     (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) == '\0')) {
    F_00bd48c0(this GEN_EDX_FWD,this[0x90]);
  }
  return 1;
}

/* ref: FUN_00bd4e00 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00bd4e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x18))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00bd4e10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd4e10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 != '\0') * '\x02' | *((byte *)GEN_TOP((param_1 + 100))) & 0xfd;
  *((byte *)GEN_TOP((param_1 + 100))) = bVar1;
  return bVar1;
}

/* ref: FUN_00bd4e30 */
GEN_OWN GEN_FRAME float10 F_00bd4e30(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd4e30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd4e50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x88))) = 0;
  return;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bd4e60(void)
{
  GEN_ENTER(0xbd4e60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd4e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd4e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined4 uVar5;
  undefined1 uVar6;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar6 = 0;
      uVar5 = 4;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
      F_007602f0(uVar4 GEN_EDX_ARG,uVar5,uVar6);
    }
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  if (this[0x88] != (undefined1)0x0) {
    bVar2 = F_00b5c680(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG);
    if (bVar2 == 0) {
      uVar4 = F_00bd30b0(this GEN_EDX_ARG,0);
      return uVar4;
    }
    this[0x88] = (undefined1)0x0;
    return CONCAT31(extraout_var,bVar2);
  }
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar6 = 1;
    uVar5 = 4;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
    F_007602f0(uVar4 GEN_EDX_ARG,uVar5,uVar6);
  }
  iVar1 = *(int *)(this + 0x24);
  uVar4 = F_00bd3f80(this GEN_EDX_ARG);
  if (uVar4 != 0) {
    bVar2 = F_00bd2480(this GEN_EDX_ARG);
    if (bVar2 != 0) {
      *((int *)GEN_TOP((uVar4 + 0x34))) = iVar1 + 0xc;
      return CONCAT31(extraout_var_00,bVar2);
    }
    *((int *)GEN_TOP((uVar4 + 0x30))) = iVar1 + 0xc;
  }
  F_00b5c8c0(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG,iVar1 + 0xc,0);
  bVar2 = F_00b5c680(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG);
  uVar4 = CONCAT31(extraout_var_01,bVar2);
  if (bVar2 == 0) {
    uVar4 = F_00bd30b0(this GEN_EDX_ARG,0);
    this[0x88] = (undefined1)0x1;
  }
  return uVar4;
}

/* ref: FUN_00bd4f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd4f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x34))) = param_2;
  return param_2;
}

/* ref: FUN_00bd4f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd4f80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x30))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Clip::LocalVFXTriggerClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd4fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  uVar3 = *(uint *)(this + 0x2c);
  if (uVar3 != 0x21) {
    if (uVar3 != 0x58) {
      return uVar3;
    }
    pvVar2 = *(undefined * PTR32 *)(this + 0x6c);
    uVar3 = 0x58;
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      uVar3 = 0;
      if (*(int *)(this + 4) != 0) {
        uVar3 = *((uint *)GEN_TOP((*(int *)(this + 4) + 4)));
        *(uint *)(this + 0x6c) = uVar3;
      }
      pvVar2 = *(undefined * PTR32 *)(this + 0x6c);
    }
    iVar1 = *(int *)(this + 0x24);
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return uVar3;
    }
    pvVar2 = ((undefined *)GEN_TOP(F_00beb6b0(pvVar2 GEN_EDX_FWD)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar3 = F_006891c0(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0xc))));
    return uVar3;
  }
  pvVar2 = *(undefined * PTR32 *)(this + 0x74);
  iVar1 = *(int *)(this + 0x24);
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd5055;
  piVar5 = *(int * PTR32 *)(this + 0x70);
  if (piVar5 == ((int *)GEN_TOP(0x0))) {
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar4 = *(int *)(this + 0x6c);
      if (iVar4 != 0) goto LAB_00bd5037;
    }
    else {
LAB_00bd5037: ;
      *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP((iVar4 + 4)));
    }
    piVar5 = *(int * PTR32 *)(this + 0x70);
    if (piVar5 != ((int *)GEN_TOP(0x0))) goto LAB_00bd5044;
  }
  else {
LAB_00bd5044: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 100))))(piVar5 GEN_EDX_ARG);
    *(uint *)(this + 0x74) = uVar3;
  }
  pvVar2 = *(undefined * PTR32 *)(this + 0x74);
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00bd5055: ;
  F_00bc2aa0(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0x10))));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,1);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::GlobalVFXTriggerClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd5090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x24);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
    if (*(int *)(this + 4) != 0) {
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 4) + 4)));
      *(uint *)(this + 0x6c) = uVar2;
    }
    this_00 = *(undefined * PTR32 *)(this + 0x6c);
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      return uVar2;
    }
  }
  uVar2 = F_00beb760(this_00 GEN_EDX_FWD);
  F_00b5af00(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,uVar2,*((undefined4 *)GEN_TOP((iVar1 + 0x10))),*((int *)GEN_TOP((iVar1 + 0xc))) + iVar1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,1);
  return uVar2;
}

/* ref: FUN_00bd50e0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00bd50e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd50e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx - 0xc0 + param_2 * 4)));
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf29 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd5160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float * pfVar5;
  float * pfVar6;
  undefined * this_00;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  iVar4 = REFG(int, 0x1371290);
  if (*(int *)(this + 0x2c) != 0x16) {
    if (*(int *)(this + 0x2c) != 0x32) {
      return 0;
    }
    if (*((char *)GEN_TOP((REFG(int, 0x1371290) + 0x310))) != '\x01') {
      return 0;
    }
    if (((undefined4 *)GEN_TOP((REFG(int, 0x1371290) + 0x28c))) == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    *((undefined4 *)GEN_TOP((REFG(int, 0x1371290) + 0x28c))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
    *((undefined4 *)GEN_TOP((iVar4 + 0x290))) = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
    return 0;
  }
  iVar3 = *(int *)(this + 0x24);
  if (*((char *)GEN_TOP((iVar3 + 0x11))) == '\x02') {
    return 0;
  }
  if (*((char *)GEN_TOP((REFG(int, 0x1371290) + 0x30f))) != -0x80) {
    return 0;
  }
  pfVar8 = ((float *)GEN_TOP((REFG(int, 0x1371290) + 0x274)));
  if (pfVar8 == ((float *)GEN_TOP(0x0))) {
    return 0;
  }
  ((float *)(gen_frame + 0x1c))[2] = *((float *)GEN_TOP((param_1 + 0x20)));
  ((float *)(gen_frame + 0x1c))[3] = gen_bits2f(REFG(float, 0x1106bc4));
  ((float *)(gen_frame + 0x1c))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[4], REFG(float, 0x1106bc0));
  pfVar7 = ((float *)(gen_frame + 0x1c)) + 2;
  if (!((double)*((float *)GEN_TOP((param_1 + 0x20))) < *(double *)&REFG(undefined, 0x109cad0))) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 3;
  }
  if (!(*(double *)&REFG(undefined, 0x1106bb8) < (double)*pfVar7)) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 4;
  }
  fVar12 = *pfVar7;
  ((float *)(gen_frame + 0x1c))[3] = *((float *)GEN_TOP((param_1 + 0x24)));
  ((float *)(gen_frame + 0x1c))[2] = fVar12;
  ((float *)(gen_frame + 0x1c))[4] = gen_bits2f(REFG(float, 0x1106bc4));
  ((float *)(gen_frame + 0x1c))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[1], REFG(float, 0x1106bc0));
  pfVar7 = ((float *)(gen_frame + 0x1c)) + 3;
  if (!((double)*((float *)GEN_TOP((param_1 + 0x24))) < *(double *)&REFG(undefined, 0x109cad0))) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 4;
  }
  if (!(*(double *)&REFG(undefined, 0x1106bb8) < (double)*pfVar7)) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  fVar1 = *pfVar7;
  fVar2 = *((float *)GEN_TOP((param_1 + 0x28)));
  ((float *)(gen_frame + 0x1c))[3] = fVar2;
  ((float *)(gen_frame + 0x1c))[4] = fVar1;
  ((float *)(gen_frame + 0x1c))[1] = gen_bits2f(REFG(float, 0x1106bc4));
  ((float *)(gen_frame + 0x1c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[0], REFG(float, 0x1106bc0));
  pfVar7 = ((float *)(gen_frame + 0x1c)) + 3;
  if (!((double)fVar2 < *(double *)&REFG(undefined, 0x109cad0))) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  if (!(*(double *)&REFG(undefined, 0x1106bb8) < (double)*pfVar7)) {
    pfVar7 = ((float *)(gen_frame + 0x1c));
  }
  fVar9 = (float10)fVar12;
  ((float *)(gen_frame + 0x1c))[3] = *pfVar7;
  pfVar5 = ((float *)(gen_frame + 0x1c)) + 2;
  if (!((float10)fVar1 < fVar9)) {
    pfVar5 = ((float *)(gen_frame + 0x1c)) + 4;
  }
  pfVar6 = ((float *)(gen_frame + 0x1c)) + 4;
  ((float *)(gen_frame + 0x1c))[4] = *pfVar5;
  fVar10 = (float10)*pfVar5;
  if (!((float10)*pfVar7 < fVar10)) {
    pfVar6 = ((float *)(gen_frame + 0x1c)) + 3;
  }
  ((float *)(gen_frame + 0x1c))[3] = *pfVar6;
  if (*((char *)GEN_TOP((iVar3 + 0x10))) == '\0') {
    fVar12 = *((float *)GEN_TOP((param_1 + 0x30)));
    ((float *)(gen_frame + 0x1c))[2] = fVar12;
    ((float *)(gen_frame + 0x1c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[0], REFG(float, 0x1094724));
    ((float *)(gen_frame + 0x1c))[1] = 0.0;
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 2;
    if (!((double)fVar12 < *(double *)&REFG(undefined, 0x10912a8))) {
      pfVar7 = ((float *)(gen_frame + 0x1c));
    }
    if (!(0.0 < *pfVar7)) {
      pfVar7 = ((float *)(gen_frame + 0x1c)) + 1;
    }
    fVar12 = *pfVar7;
    ((float *)(gen_frame + 0x1c))[0] = fVar12;
    fVar11 = (float10)fVar12;
    *pfVar8 = (float)(fVar11 + fVar9);
    fVar10 = GEN_X87(fVar10 + fVar11);
  }
  else {
    iVar3 = *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x34 + *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x30))) * 4)));
    if (iVar3 == 0) goto LAB_00bd5389;
    this_00 = ((undefined *)GEN_TOP(F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),iVar3 + 0x60,*((int *)GEN_TOP((iVar3 + 0xc0))) + 0x90)));
    fVar12 = F_004bd280(this_00 GEN_EDX_ARG);
    ((float *)(gen_frame + 0x1c))[0] = fVar12;
    fVar11 = (float10)fVar12;
    *pfVar8 = (float)(fVar11 + (float10)((float *)(gen_frame + 0x1c))[2]);
    fVar10 = GEN_X87(fVar11 + (float10)((float *)(gen_frame + 0x1c))[4]);
  }
  *((float *)GEN_TOP((iVar4 + 0x278))) = (float)fVar10;
  *((float *)GEN_TOP((iVar4 + 0x27c))) = (float)(fVar11 + (float10)((float *)(gen_frame + 0x1c))[3]);
LAB_00bd5389: ;
  fVar1 = REFG(float, 0x1087f04);
  fVar12 = *((float *)GEN_TOP((param_1 + 0x3c)));
  ((float *)(gen_frame + 0x1c))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[1], REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x1c))[2] = 0.0;
  ((float *)(gen_frame + 0x1c))[0] = fVar12;
  pfVar8 = ((float *)(gen_frame + 0x1c));
  if (!(fVar12 < REFG(float, 0x1087f04))) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  if (!(0.0 < *pfVar8)) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 2;
  }
  *((float *)GEN_TOP((iVar4 + 0x280))) = *pfVar8;
  fVar12 = *((float *)GEN_TOP((param_1 + 0x40)));
  ((float *)(gen_frame + 0x1c))[2] = 0.0;
  ((float *)(gen_frame + 0x1c))[0] = fVar12;
  pfVar8 = ((float *)(gen_frame + 0x1c));
  if (!(fVar12 < fVar1)) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  if (!(0.0 < *pfVar8)) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 2;
  }
  *((float *)GEN_TOP((iVar4 + 0x284))) = *pfVar8;
  return 0;
}

/* ref: FUN_00bd5400 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd5400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd5400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x2c))) == 0x16) {
    this = ((undefined *)GEN_TOP(F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_FWD,7,1,0x80)));
  }
  else if (*((int *)GEN_TOP(((int)this + 0x2c))) == 0x32) {
    uVar1 = F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_ARG,8,*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0x10))) != '\0'
                         ,1);
    return uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00bd5450 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd5450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd5450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x2c)));
  if (uVar2 == 0x16) {
    if ((*((char *)GEN_TOP((REFG(int, 0x1371290) + 0x30f))) == -0x80) && (REFG(int, 0x1371290) + 0x274 != 0)) {
      F_004a4530(REFG(int, 0x1371290) + 0x274 GEN_EDX_FWD);
    }
    uVar2 = F_004adca0(iVar1 + 0x25c GEN_EDX_ARG,7,0,0x80);
  }
  else if ((uVar2 == 0x32) && (uVar2 = *((uint *)GEN_TOP(((int)this + 0x24))), *((char *)GEN_TOP((uVar2 + 0x11))) == '\0')
          ) {
    uVar2 = F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_ARG,8,0,1);
    return uVar2;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd54b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd54b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd5450(this GEN_EDX_FWD);
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd54d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd54d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    if (*(int *)(this + 0x2c) != 0x16) {
      uVar1 = F_00bd5400(this GEN_EDX_FWD);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar1;
    }
    uVar1 = F_00bd5400(this GEN_EDX_ARG);
    if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0x11))) == '\x02') {
      uVar1 = F_00bd5450(this GEN_EDX_ARG);
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd5510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    if ((*(int *)(this + 0x2c) != 0x16) || (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0x11))) == '\0')) {
      F_00bd5450(this GEN_EDX_FWD);
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
    return 1;
  }
  return 0;
}

/* ref: FUN_00bd5550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd5550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd5550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004adca0(this GEN_EDX_FWD,8,(undefined1)param_1,(undefined1)param_2);
  return uVar1;
}

/* ref: FUN_00bd5570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd5570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (*((char *)GEN_TOP((in_ecx + 0xb4))) == param_2) {
    return in_ecx + 0x30;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bd55a0(void)
{
  GEN_ENTER(0xbd55a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd55b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd55b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd55c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd55c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf13 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd55d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd55d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(this + 0x78);
  if (iVar2 != 0) goto LAB_00bd560a;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd55f5;
  }
  else {
LAB_00bd55f5: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *(int *)(this + 0x78);
LAB_00bd560a: ;
  uVar3 = F_00bccde0(iVar2 GEN_EDX_ARG,*(uint *)(this + 0x24),0,0,*(undefined4 *)(this + 0x2c));
  *(uint *)(this + 0x88) = uVar3;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd5630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  undefined * pvVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  
  pvVar2 = *(undefined * PTR32 *)(this + 0x78);
  this_00 = pvVar2;
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      pvVar2 = ((undefined *)GEN_TOP(0x0));
      if (iVar3 != 0) goto LAB_00bd565a;
    }
    else {
LAB_00bd565a: ;
      uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
      *(undefined4 *)(this + 0x78) = uVar1;
      pvVar2 = ((undefined *)GEN_TOP(F_00b595f0(uVar1)));
    }
    this_00 = *(undefined * PTR32 *)(this + 0x78);
  }
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return (uint)pvVar2;
  }
  iVar3 = *(int *)(this + 0x74);
  if (iVar3 != 0) goto LAB_00bd56b6;
  piVar5 = *(int * PTR32 *)(this + 0x70);
  if (piVar5 == ((int *)GEN_TOP(0x0))) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 != 0) goto LAB_00bd569c;
    }
    else {
LAB_00bd569c: ;
      *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP((iVar3 + 4)));
    }
    piVar5 = *(int * PTR32 *)(this + 0x70);
    if (piVar5 != ((int *)GEN_TOP(0x0))) goto LAB_00bd56a9;
  }
  else {
LAB_00bd56a9: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 100))))(piVar5 GEN_EDX_ARG);
    *(uint *)(this + 0x74) = uVar4;
  }
  iVar3 = *(int *)(this + 0x74);
LAB_00bd56b6: ;
  uVar4 = F_00bc4ce0(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x88),*(undefined4 *)(this + 0x24),this,iVar3,
                       *(undefined4 *)(this + 0x2c));
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd56e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd56e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd5721;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5708;
  }
  else {
LAB_00bd5708: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return uVar3;
  }
LAB_00bd5721: ;
  uVar3 = F_00bc4e60(this_00 GEN_EDX_ARG,param_2,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: FUN_00bd5740 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd5740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd5740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd577e;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5765;
  }
  else {
LAB_00bd5765: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return uVar3;
  }
LAB_00bd577e: ;
  uVar3 = F_00bc4e00(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x88))),this,
                       *((undefined4 *)GEN_TOP(((int)this + 0x2c))));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd57a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd57a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd57de;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd57c5;
  }
  else {
LAB_00bd57c5: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return uVar3;
  }
LAB_00bd57de: ;
  uVar3 = F_00bc4e00(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd5800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd5800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd583e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5825;
  }
  else {
LAB_00bd5825: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return uVar3;
  }
LAB_00bd583e: ;
  uVar3 = F_00bc4e00(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd5860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd589e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd5885;
  }
  else {
LAB_00bd5885: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 1;
  }
LAB_00bd589e: ;
  F_00bc4e00(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return 1;
}

/* ref: FUN_00bd58c0 */
GEN_OWN GEN_FRAME float10 F_00bd58c0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd58c0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Clip::NonSerialClip::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd58e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd58e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((*(int *)(this + 0x2c) == 0x75) && (REFG(void * PTR32, 0x13759f4) != ((undefined *)GEN_TOP(0x0)))) {
    F_00690270(REFG(void * PTR32, 0x13759f4) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::NonSerialClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd5900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar8;
  undefined3 extraout_var_01 = 0;
  uint uVar9;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x6c);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    this_00 = *(undefined * PTR32 *)(this + 0x6c);
  }
  F_00beb760(this_00 GEN_EDX_FWD);
  piVar6 = ((int *)GEN_TOP(F_00beb670(this_00 GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar6;
  if ((piVar6 != ((int *)GEN_TOP(0x0))) || (uVar7 = 0, *(int *)(this + 0x2c) == 0x75)) {
    uVar7 = *(int *)(this + 0x2c) - 0x21;
    switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
    case 0x21: ;
      bVar5 = F_00bd1fe0(this GEN_EDX_ARG);
      uVar7 = CONCAT31(extraout_var,bVar5);
      if (bVar5 == 0) {
        bVar5 = F_00bd2480(this GEN_EDX_ARG);
        uVar7 = CONCAT31(extraout_var_00,bVar5);
        if (bVar5 == 0) {
          uVar7 = F_00c22ac0((*(int * PTR32 *)(gen_frame + 0x4c)),*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc))),
                               *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0x10))));
          return uVar7;
        }
      }
      break;
    case 0x37: ;
      uVar8 = F_00beb790(this_00 GEN_EDX_ARG);
      uVar9 = 0;
      (*(uint *)(gen_frame + 0x48)) = uVar8;
      uVar7 = 0;
      if (uVar8 != 0) {
        do {
          uVar8 = F_00bec250(this_00 GEN_EDX_ARG,uVar9);
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = F_00a62370(uVar8,(*(int * PTR32 *)(gen_frame + 0x4c)));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (*(uint *)(gen_frame + 0x48)));
        return uVar7;
      }
      break;
    case 0x49: ;
      bVar5 = F_00bd1fe0(this GEN_EDX_ARG);
      uVar7 = CONCAT31(extraout_var_01,bVar5);
      if (bVar5 == 0) {
        iVar3 = *(int *)(this + 0x24);
        if (*((int *)GEN_TOP((iVar3 + 0x24))) != 0) {
          iVar4 = *((int *)GEN_TOP((iVar3 + 0x20)));
          (*(float *)(gen_frame + 0x30)) = *((float *)GEN_TOP((iVar4 + iVar3)));
          (*(float *)(gen_frame + 0x34)) = *((float *)GEN_TOP((iVar4 + 4 + iVar3)));
          (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP((iVar4 + 8 + iVar3)));
        }
        if (*((int *)GEN_TOP((iVar3 + 0x1c))) != 0) {
          iVar4 = *((int *)GEN_TOP((iVar3 + 0x18)));
          uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 8 + iVar3)));
          uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 4 + iVar3)));
          (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP((iVar4 + iVar3)));
          (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
          (*(undefined4 *)(gen_frame + 0x28)) = uVar1;
          F_00a1e0d0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)));
        }
        if (*((int *)GEN_TOP((iVar3 + 0x14))) != 0) {
          (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP((iVar3 + *((int *)GEN_TOP((iVar3 + 0x10))))));
        }
        uVar7 = F_00a62390((*(int * PTR32 *)(gen_frame + 0x4c)),*((undefined4 *)GEN_TOP((iVar3 + 0xc))),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),
                             (*(float *)(gen_frame + 0x10)));
        return uVar7;
      }
      break;
    case 0x6a: ;
      if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) < '\x01') {
        uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x28))))(0xe,0);
        return uVar7;
      }
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x24))))(0xe,0);
      return uVar7;
    case 0x72: ;
      uVar8 = F_0054d950(this GEN_EDX_ARG);
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = F_00aa2500((*(int * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar8 + 200))));
        return uVar7;
      }
      break;
    case 0x75: ;
      if (REFG(void * PTR32, 0x13759f4) != ((undefined *)GEN_TOP(0x0))) {
        if (*((short *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == 1) {
          uVar7 = F_006aac30(REFG(void * PTR32, 0x13759f4) GEN_EDX_ARG);
          return uVar7;
        }
        uVar7 = F_00690270(REFG(void * PTR32, 0x13759f4) GEN_EDX_ARG);
      }
    }
  }
  return uVar7;
}

/* ref: FUN_00bd5bb0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00bd5bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd5bd0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00bd5bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd5bf0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00bd5bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd5c10 */
GEN_OWN GEN_FRAME float10 F_00bd5c10(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd5c10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd5c30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bd5c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0xfc, 4, 4);
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  int * piVar6;
  code * pcVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xf4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8));
  pvVar5 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x74)));
  if (pvVar5 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd5c92;
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
  if (piVar6 == ((int *)GEN_TOP(0x0))) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar2 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar2 != 0) goto LAB_00bd5c78;
    }
    else {
LAB_00bd5c78: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP((iVar2 + 4)));
    }
    piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (piVar6 != ((int *)GEN_TOP(0x0))) goto LAB_00bd5c85;
  }
  else {
LAB_00bd5c85: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 100))))(piVar6 GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x74))) = uVar3;
  }
  pvVar5 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x74)));
LAB_00bd5c92: ;
  ((undefined4 *)(gen_frame + 0x4))[0] = 0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  bVar1 = F_00bc2920(pvVar5 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)));
  do {
    if (bVar1 == 0) {
      uVar4 = F_00bd3f80(this GEN_EDX_ARG);
      uVar3 = 0;
      if (uVar4 != 0) {
        pvVar5 = ((undefined *)GEN_TOP(F_00bd3f80(this GEN_EDX_ARG)));
        piVar6 = ((int *)GEN_TOP(F_00b607f0(pvVar5 GEN_EDX_ARG,param_1)));
        (*(int * PTR32 *)(gen_frame + 0x0)) = piVar6;
        uVar3 = 0;
        if (piVar6 != ((int *)GEN_TOP(0x0))) {
          if (*((int *)GEN_TOP(((int)this + 0x2c))) == 0x28) {
LAB_00bd5d4d: ;
            pcVar7 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x98)));
          }
          else {
            if (*((int *)GEN_TOP(((int)this + 0x2c))) != 0x2a) {
              return (uint)piVar6;
            }
            pcVar7 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x9c)));
          }
override_prt_bd5d55_776d44d0: ;
          uVar3 = (*pcVar7)((*(int * PTR32 *)(gen_frame + 0x0)));
        }
      }
      return uVar3;
    }
    pcVar7 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0xb8)));
    uVar3 = (*pcVar7)((*(int * PTR32 *)(gen_frame + 0x0)));
    if (uVar3 == param_1) {
      if (*((int *)GEN_TOP(((int)this + 0x2c))) == 0x28) goto LAB_00bd5d4d;
      if (*((int *)GEN_TOP(((int)this + 0x2c))) == 0x2a) {
        pcVar7 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x9c)));
        goto override_prt_bd5d55_776d44d0;
      }
    }
    bVar1 = F_00bc2920(pvVar5 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x4)));
  } while( true );
}

/* ref: Client::System::Scheduler::Clip::SystemClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd5db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd5db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x137129c);
  uVar2 = *(uint *)(this + 0x2c);
  if (uVar2 == 0x50) {
    uVar2 = F_00bd3f80(this GEN_EDX_FWD);
    if (*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x38))) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00beb190(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x38))) GEN_EDX_ARG);
      return uVar2;
    }
  }
  else if (uVar2 == 0x60) {
    uVar1 = F_00bd3f80(this GEN_EDX_ARG);
    uVar2 = 0;
    if (uVar1 != 0) {
      *((undefined4 *)GEN_TOP((uVar1 + 0xf8))) = 0xffffffff;
      return uVar1;
    }
  }
  else if (uVar2 == 0x6d) {
    *((undefined4 *)GEN_TOP((REFG(undefined4, 0x137129c) + 0xec))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((REFG(undefined4, 0x137129c) + 0xec))), REFG(float, 0x1087f04));
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SystemClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd5e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  int iVar8;
  float fVar2;
  float fVar3;
  
  uVar6 = REFG(undefined4, 0x137129c);
  iVar4 = *(int *)(this + 0x2c);
  uVar5 = iVar4 - 0x28;
  if (uVar5 < 0x46) {
    uVar5 = (uint)*((byte *)GEN_TOP((iVar4 + 0xbd5fb0)));
    switch((unsigned int)(uintptr_t)(iVar4)) {
    case 0x28: ;
      iVar4 = *(int *)(this + 0x24);
      iVar8 = *((int *)GEN_TOP((iVar4 + 0x10)));
      if (iVar8 != 0) {
        do {
          iVar8 = iVar8 - 1;
          uVar5 = F_00bd5c30(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0xc))) + iVar8 * 4 + iVar4))));
        } while (iVar8 != 0);
        return uVar5;
      }
      break;
    case 0x2a: ;
      iVar4 = *(int *)(this + 0x24);
      iVar8 = *((int *)GEN_TOP((iVar4 + 0x10)));
      if (iVar8 != 0) {
        do {
          iVar8 = iVar8 - 1;
          uVar5 = F_00bd5c30(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0xc))) + iVar8 * 4 + iVar4))));
        } while (iVar8 != 0);
        return uVar5;
      }
      break;
    case 0x50: ;
      uVar5 = F_00bd3f80(this GEN_EDX_ARG);
      this_00 = *((undefined * PTR32 *)GEN_TOP((uVar5 + 0x38)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        iVar4 = *(int *)(this + 0x24);
        uVar5 = (uint)*((byte *)GEN_TOP((iVar4 + 0xc)));
        if (uVar5 == 0) {
          iVar8 = *((int *)GEN_TOP(((int)this_00 + 0xd0)));
          *((undefined4 *)GEN_TOP((iVar8 + 0xac))) = *((undefined4 *)GEN_TOP((iVar4 + 0x10)));
          *((undefined4 *)GEN_TOP((iVar8 + 0xb0))) = *((undefined4 *)GEN_TOP((iVar4 + 0x14)));
          return 0;
        }
        if (uVar5 == 1) {
          uVar5 = F_00beb190(this_00 GEN_EDX_ARG);
          return uVar5;
        }
        uVar5 = uVar5 - 2;
        if (uVar5 == 0) {
          if (*((char *)GEN_TOP((iVar4 + 0xd))) == '\0') {
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0xd0))) + 0xac))) =
                 *((undefined4 *)GEN_TOP(((int)this_00 + 300)));
          }
          else if (*((char *)GEN_TOP((iVar4 + 0xd))) == '\x02') {
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0xd0))) + 0xac))) = *((undefined4 *)GEN_TOP((iVar4 + 0x10)));
          }
          if (*((byte *)GEN_TOP((iVar4 + 0xe))) == 0) {
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0xd0))) + 0xb0))) =
                 *((undefined4 *)GEN_TOP(((int)this_00 + 0x130)));
            return 0;
          }
          uVar5 = *((byte *)GEN_TOP((iVar4 + 0xe))) - 2;
          if (uVar5 == 0) {
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0xd0))) + 0xb0))) = *((undefined4 *)GEN_TOP((iVar4 + 0x14)));
            return 0;
          }
        }
      }
      break;
    case 0x60: ;
      uVar6 = F_00bd3f80(this GEN_EDX_ARG);
      uVar5 = 0;
      if (uVar6 != 0) {
        *((undefined4 *)GEN_TOP((uVar6 + 0xf8))) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
        F_004ff5f0(REFG(undefined4, 0x1375aec) GEN_EDX_ARG);
        return uVar6;
      }
      break;
    case 0x6d: ;
      pfVar7 = ((float *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
      fVar1 = *pfVar7;
      fVar2 = *pfVar7;
      fVar3 = *pfVar7;
      (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1094880);
      (*(float *)(gen_frame + 0x0)) = 0.0;
      if ((GEN_ISNAN(REFG(float, 0x1094880)) || GEN_ISNAN(fVar1)) || (REFG(float, 0x1094880) < fVar3 || REFG(uint, 0x1094880) == fVar2)) {
        pfVar7 = &(*(float *)(gen_frame + 0x4));
      }
      if (!(0.0 < *pfVar7)) {
        pfVar7 = &(*(float *)(gen_frame + 0x0));
      }
      *((float *)GEN_TOP((REFG(undefined4, 0x137129c) + 0xec))) = *pfVar7;
      uVar5 = uVar6;
    }
  }
  return uVar5;
}

/* ref: FUN_00bd6040 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd6040(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd6040u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0xec))) = param_2;
  return;
}

/* ref: FUN_00bd6060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd6060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd6080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd6080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf34 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd60c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd60c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  if (param_1 != 2) {
    piVar1 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_FWD)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    if (*(int *)(this + 0x2c) == 0x2d) {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xac))))(piVar1 GEN_EDX_ARG)));
      F_005e98e0(this_00 GEN_EDX_ARG,500);
    }
    else if (*(int *)(this + 0x2c) == 0x2e) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xac))))(piVar1 GEN_EDX_ARG);
      F_005d7a50(uVar2 GEN_EDX_ARG,(float)(float10)0);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00bd6130 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bd6130(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  uVar3 = *param_1;
  bVar1 = *param_2;
  if (bVar1 == 0) {
    *param_1 = uVar3;
    return in_EAX;
  }
  bVar2 = param_2[1];
  if (bVar2 != 0) {
    if (param_2[2] != 0) {
      uVar3 = (uint)CONCAT21(CONCAT11(param_2[2],bVar2),bVar1) << 8 | uVar3 >> 0x18;
      *param_1 = uVar3;
      return uVar3;
    }
    if (bVar2 != 0) {
      uVar3 = (uint)CONCAT11(bVar2,bVar1) << 0x10 | uVar3 >> 0x10;
      *param_1 = uVar3;
      return uVar3;
    }
  }
  uVar3 = (uint)bVar1 << 0x18 | uVar3 >> 8;
  *param_1 = uVar3;
  return uVar3;
}

/* ref: FUN_00bd61c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd61c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xbd61c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  uint uVar1;
  byte bVar2;
  
  *param_1 = 0;
  *param_5 = 0;
  *param_2 = 0;
  if (param_3 == ((int *)GEN_TOP(0x0))) {
    return (uint)param_5;
  }
  if (param_3[0x1b] == 7) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0xb4))))(param_3 GEN_EDX_FWD);
    *param_1 = uVar1;
    if (uVar1 == 0) {
      return 0;
    }
    bVar2 = *((byte *)GEN_TOP((uVar1 + 0x28))) >> 4;
  }
  else {
    uVar1 = param_3[0x1b] - 8;
    if (uVar1 != 0) {
      return uVar1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0xb4))))(param_3 GEN_EDX_ARG);
    *param_1 = uVar1;
    if (uVar1 == 0) {
      return 0;
    }
    bVar2 = (*((byte *)GEN_TOP((uVar1 + 0x28))) >> 4) + 1;
  }
  uVar1 = F_005d9bb0(uVar1 GEN_EDX_ARG,bVar2,param_4);
  *param_2 = uVar1;
  uVar1 = 0;
  if (param_6 != 0) {
    uVar1 = F_00bd6130(param_2,param_6);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd6250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffbf;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffbf;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd6270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffbf;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffbf;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd6290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  char * pcVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined * pvVar8;
  undefined3 uVar13;
  int * piVar9;
  undefined * pvVar10;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  uint uVar11;
  uint uVar12;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  byte bVar14;
  char * pcVar15;
  
  uVar11 = *(uint *)(this + 0x78);
  if (uVar11 == 0) {
    iVar7 = *(int *)(this + 0x6c);
    if (iVar7 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar7 = *(int *)(this + 0x6c);
      if (iVar7 != 0) goto LAB_00bd62bb;
    }
    else {
LAB_00bd62bb: ;
      uVar3 = *((undefined4 *)GEN_TOP((iVar7 + 0x20)));
      *(undefined4 *)(this + 0x78) = uVar3;
      F_00b595f0(uVar3);
    }
    uVar11 = *(uint *)(this + 0x78);
    if (uVar11 == 0) {
      return 0;
    }
  }
  if (*((char *)GEN_TOP((uVar11 + 0x12))) != '\0') {
    return uVar11;
  }
  piVar9 = *((int * PTR32 *)GEN_TOP((uVar11 + 4)));
  if (piVar9 == ((int *)GEN_TOP(0x0))) {
    return uVar11;
  }
  pvVar8 = ((undefined *)GEN_TOP((*(int *)(this + 0x2c) - 0x2b)));
  uVar13 = (undefined3)((uint)((int)(uintptr_t)pvVar8) >> 8);
  switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
  case 0x2b: ;
    iVar7 = *(int *)(this + 0x24);
    piVar9 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xac))))(piVar9 GEN_EDX_ARG)));
    uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x90))))(piVar9 GEN_EDX_ARG,(uint)(*((char *)GEN_TOP((iVar7 + 0xc))) != '\0'));
    return uVar11;
  case 0x2c: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xac))))(piVar9 GEN_EDX_ARG)));
    if (*((char *)GEN_TOP(((int)pvVar8 + 0x11))) == '\a') {
      fVar2 = *((float *)GEN_TOP((iVar7 + 0xc)));
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = gen_x87_cw;
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT22(gen_x87_cw,(undefined2)(*(undefined4 *)(gen_frame + 0xc)));
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP((gen_x87_cw | 0xc00)));
      pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = SUB42(((undefined *)GEN_TOP((gen_x87_cw | 0xc00))),0);
      gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)));
      (*(longlong *)(gen_frame + 0x0)) = (longlong)TRUNC((float10)fVar2);
      lVar4 = (*(longlong *)(gen_frame + 0x0));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x0)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
      uVar3 = (undefined4)(*(longlong *)(gen_frame + 0x0));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      (*(longlong *)(gen_frame + 0x0)) = lVar4;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar10;
      uVar11 = F_005e98e0(pvVar8 GEN_EDX_ARG,uVar3);
      return uVar11;
    }
    break;
  case 0x2d: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xac))))(piVar9 GEN_EDX_ARG)));
    if (*((char *)GEN_TOP(((int)pvVar8 + 0x11))) == '\a') {
      fVar2 = *((float *)GEN_TOP((iVar7 + 0xc)));
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = gen_x87_cw;
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT22(gen_x87_cw,(undefined2)(*(undefined4 *)(gen_frame + 0xc)));
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP((gen_x87_cw | 0xc00)));
      pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = SUB42(((undefined *)GEN_TOP((gen_x87_cw | 0xc00))),0);
      gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)));
      (*(longlong *)(gen_frame + 0x0)) = (longlong)TRUNC((float10)fVar2);
      lVar4 = (*(longlong *)(gen_frame + 0x0));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x0)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
      uVar3 = (undefined4)(*(longlong *)(gen_frame + 0x0));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      (*(longlong *)(gen_frame + 0x0)) = lVar4;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar10;
      uVar11 = F_005f4000(pvVar8 GEN_EDX_ARG,uVar3);
      return uVar11;
    }
    break;
  case 0x2e: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xac))))(piVar9 GEN_EDX_ARG)));
    if (*((char *)GEN_TOP(((int)pvVar8 + 0x11))) == '\x04') {
      uVar11 = F_005d79f0(pvVar8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar7 + 0xc)))),*((char *)GEN_TOP((iVar7 + 0x10))) != '\0');
      return uVar11;
    }
    break;
  case 0x2f: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xac))))(piVar9 GEN_EDX_ARG)));
    if (*((char *)GEN_TOP(((int)pvVar8 + 0x11))) == '\x04') {
      uVar11 = F_005d7a80(pvVar8 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar7 + 0xc))));
      return uVar11;
    }
    break;
  case 0x30: ;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
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
  case 0x67: ;
  case 0x68: ;
  case 0x69: ;
  case 0x6a: ;
  case 0x6b: ;
  case 0x6c: ;
  case 0x6d: ;
  case 0x6e: ;
  case 0x6f: ;
  case 0x70: ;
    break;
  case 0x44: ;
    bVar6 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    pvVar8 = ((undefined *)GEN_TOP(CONCAT31(uVar13,bVar6)));
    if ((bVar6 != 0) && (((byte)this[0x7c] >> 6 & 1) == 0)) {
      piVar9 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_ARG)));
      pvVar8 = ((undefined *)GEN_TOP(0x0));
      if (piVar9 != ((int *)GEN_TOP(0x0))) {
        if (piVar9[0x1b] == 7) {
          pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xb4))))(piVar9 GEN_EDX_ARG)));
          pvVar8 = ((undefined *)GEN_TOP(0x0));
          if (pvVar10 != ((undefined *)GEN_TOP(0x0))) {
            bVar14 = *((byte *)GEN_TOP(((int)pvVar10 + 0x28))) >> 4;
            (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = bVar14;
            (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3),bVar14)));
LAB_00bd649c: ;
            uVar11 = F_005d9bb0(pvVar10 GEN_EDX_ARG,(char)(*(undefined * PTR32 *)(gen_frame + 0x8)),(uint)bVar6);
            pvVar8 = ((undefined *)GEN_TOP(F_005e3880(pvVar10 GEN_EDX_ARG,uVar11)));
            if ((char)pvVar8 != '\0') {
              F_00bd30b0(this GEN_EDX_ARG,0);
              *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
              pvVar8 = ((undefined *)GEN_TOP(F_0054d920(this GEN_EDX_ARG)));
              *((uint *)GEN_TOP(((int)pvVar8 + 0x2c))) = *((uint *)GEN_TOP(((int)pvVar8 + 0x2c))) | 8;
            }
          }
        }
        else {
          pvVar8 = ((undefined *)GEN_TOP((piVar9[0x1b] - 8)));
          if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
            pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xb4))))(piVar9 GEN_EDX_ARG)));
            pvVar8 = ((undefined *)GEN_TOP(0x0));
            if (pvVar10 != ((undefined *)GEN_TOP(0x0))) {
              cVar5 = (*((byte *)GEN_TOP(((int)pvVar10 + 0x28))) >> 4) + 1;
              (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = cVar5;
              (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3),cVar5)));
              goto LAB_00bd649c;
            }
          }
        }
      }
    }
    break;
  case 0x45: ;
    bVar6 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    pvVar8 = ((undefined *)GEN_TOP(CONCAT31(uVar13,bVar6)));
    if (bVar6 != 0) {
      piVar9 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_ARG)));
      pvVar8 = ((undefined *)GEN_TOP(0x0));
      if (piVar9 != ((int *)GEN_TOP(0x0))) {
        if (piVar9[0x1b] == 7) {
          pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xb4))))(piVar9 GEN_EDX_ARG)));
          pvVar8 = ((undefined *)GEN_TOP(0x0));
          if (pvVar10 != ((undefined *)GEN_TOP(0x0))) {
            bVar14 = *((byte *)GEN_TOP(((int)pvVar10 + 0x28))) >> 4;
            (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = bVar14;
            (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3),bVar14)));
            uVar11 = F_005d9bb0(pvVar10 GEN_EDX_ARG,bVar14,(uint)bVar6);
            bVar6 = F_005e37c0(pvVar10 GEN_EDX_ARG,uVar11);
            return CONCAT31(extraout_var_00,bVar6);
          }
        }
        else {
          pvVar8 = ((undefined *)GEN_TOP((piVar9[0x1b] - 8)));
          if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
            pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xb4))))(piVar9 GEN_EDX_ARG)));
            pvVar8 = ((undefined *)GEN_TOP(0x0));
            if (pvVar10 != ((undefined *)GEN_TOP(0x0))) {
              cVar5 = (*((byte *)GEN_TOP(((int)pvVar10 + 0x28))) >> 4) + 1;
              (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = cVar5;
              (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3),cVar5)));
              uVar11 = F_005d9bb0(pvVar10 GEN_EDX_ARG,cVar5,(uint)bVar6);
              bVar6 = F_005e37c0(pvVar10 GEN_EDX_ARG,uVar11);
              return CONCAT31(extraout_var,bVar6);
            }
          }
        }
      }
    }
    break;
  case 0x46: ;
    pvVar8 = *(undefined * PTR32 *)(this + 0x24);
    if (*((byte *)GEN_TOP(((int)pvVar8 + 0xc))) != 0) {
      pcVar1 = ((char *)GEN_TOP(((int)pvVar8 + 0xd)));
      uVar12 = (uint)*((byte *)GEN_TOP(((int)pvVar8 + 0xc)));
      iVar7 = (int)&(*(longlong *)(gen_frame + 0x0)) + 4;
      pcVar15 = pcVar1;
      uVar11 = F_00bd3ff0(this GEN_EDX_ARG);
      pvVar8 = ((undefined *)GEN_TOP(F_00bd61c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0xc)),uVar11,uVar12,iVar7,pcVar15)));
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != ((undefined *)GEN_TOP(0x0))) {
        if (*pcVar1 != '\0') {
          pvVar8 = ((undefined *)GEN_TOP(F_005d6000((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG)));
          bVar6 = F_005ef790(pvVar8 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14))),(*(undefined4 *)(gen_frame + 0xc)),0xffffffff);
          return CONCAT31(extraout_var_01,bVar6);
        }
        bVar6 = F_005e3670((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),0xffffffff,0);
        return CONCAT31(extraout_var_02,bVar6);
      }
    }
    break;
  case 0x71: ;
    pvVar8 = *(undefined * PTR32 *)(this + 0x24);
    if (*((byte *)GEN_TOP(((int)pvVar8 + 0xc))) != 0) {
      pcVar1 = ((char *)GEN_TOP(((int)pvVar8 + 0xd)));
      uVar11 = (uint)*((byte *)GEN_TOP(((int)pvVar8 + 0xc)));
      iVar7 = (int)&(*(longlong *)(gen_frame + 0x0)) + 4;
      pcVar15 = pcVar1;
      uVar12 = F_00bd3ff0(this GEN_EDX_ARG);
      pvVar8 = ((undefined *)GEN_TOP(F_00bd61c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0xc)),uVar12,uVar11,iVar7,pcVar15)));
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != ((undefined *)GEN_TOP(0x0))) {
        if (*pcVar1 != '\0') {
          pvVar8 = ((undefined *)GEN_TOP(F_005d6000((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG)));
          bVar6 = F_005ef7d0(pvVar8 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14))),(*(undefined4 *)(gen_frame + 0xc)));
          return CONCAT31(extraout_var_03,bVar6);
        }
        bVar6 = F_005e3700((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)));
        return CONCAT31(extraout_var_04,bVar6);
      }
    }
    break;
  default: ;
    goto switchD_00bd6304_default;
  }
switchD_00bd6304_default: ;
  return (uint)pvVar8;
}

/* ref: FUN_00bd6700 */
GEN_OWN GEN_FRAME float10 F_00bd6700(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd6700u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd6720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd6720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x88)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f284c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_FWD,500);
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  }
  uVar2 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd6760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbd6760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bd6770(void)
{
  GEN_ENTER(0xbd6770u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf8 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd6780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x88);
  this[0x8c] = (undefined1)0x0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x50))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG,500);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG,500);
    *(undefined4 *)(this + 0x88) = 0;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd67d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd67d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (((*(int *)(this + 0x2c) == 0x29) || (*(int *)(this + 0x2c) == 0x33)) &&
     (piVar1 = *(int * PTR32 *)(this + 0x88), piVar1 != ((int *)GEN_TOP(0x0)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_FWD);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x14))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG),
       (char)uVar2 == '\0')) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG,500);
      *(undefined4 *)(this + 0x88) = 0;
      return 1;
    }
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf35 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bd6830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd6830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if ((param_1 != 2) && (*(int *)(this + 0x88) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x58))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_FWD,param_2,5);
  }
  return;
}

/* ref: FUN_00bd6860 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd6860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  undefined * this_00;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
  if (iVar4 == 0) {
    piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      iVar4 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar4 == 0) {
        if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
        }
        iVar4 = *((int *)GEN_TOP(((int)this + 0x6c)));
        if (iVar4 != 0) goto LAB_00bd688d;
      }
      else {
LAB_00bd688d: ;
        *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP((iVar4 + 4)));
      }
      piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) goto LAB_00bd689a;
    }
    else {
LAB_00bd689a: ;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 100))))(piVar5 GEN_EDX_FWD);
      *((uint *)GEN_TOP(((int)this + 0x74))) = uVar3;
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
    if (iVar4 != 0) goto LAB_00bd68ab;
  }
  else {
LAB_00bd68ab: ;
    bVar2 = F_00bbad00(((undefined *)GEN_TOP((iVar4 + 0x124))) GEN_EDX_ARG);
    if (bVar2 != 0) {
      uVar3 = F_00bbaf90(((undefined *)GEN_TOP((iVar4 + 0x124))) GEN_EDX_ARG);
      return uVar3;
    }
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd6900;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar4 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar4 != 0) goto LAB_00bd68e7;
  }
  else {
LAB_00bd68e7: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00bd6900: ;
  uVar3 = F_00bbaf90(this_00 GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00bd6910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd6910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x88)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_FWD);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x88))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_ARG),
       (char)uVar2 == '\0')) {
      return uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x88))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_ARG,param_1);
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x88))) + 0x78))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_ARG,500);
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  }
  return in_EAX;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd6970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  float10 fVar3;
  byte bVar4;
  uint uVar5;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar4 = F_00bd1fe0(this GEN_EDX_FWD);
  if (((bVar4 == 0) && (*(int *)(this + 0x2c) == 0x33)) && (this[0x8c] == (undefined1)0x0)) {
    if (*(int *)(this + 0x88) == 0) {
      iVar1 = *(int *)(this + 0x24);
      fVar3 = (float10)0;
      uVar5 = F_004e96c0(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_ARG,*((int *)GEN_TOP((iVar1 + 0xc))) + iVar1,
                           (float)(float10)1,0,(float)fVar3,(float)fVar3,(float)fVar3,
                           (float)(float10)1,0,*((undefined4 *)GEN_TOP((iVar1 + 0x10))),0);
      if (uVar5 != 0) {
        *(uint *)(this + 0x88) = uVar5;
      }
    }
    piVar2 = *(int * PTR32 *)(this + 0x88);
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
      if ((char)uVar5 == '\0') {
        this[0x8c] = (undefined1)0x1;
        bVar4 = F_00bd2590((undefined *)this GEN_EDX_ARG);
        return bVar4;
      }
      uVar5 = F_0054d950(this GEN_EDX_ARG);
      if ((uVar5 != 0) && ((*((uint *)GEN_TOP((uVar5 + 0x2c))) >> 4 & 1) != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG,500);
        *(undefined4 *)(this + 0x88) = 0;
        F_00b61910(this GEN_EDX_ARG);
        return 1;
      }
      return 0;
    }
  }
  bVar4 = F_00bd2590((undefined *)this GEN_EDX_ARG);
  return bVar4;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf34 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd6a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  if (((param_1 == 9) || (param_1 == 5)) || (param_1 == 3)) {
    if (*(int *)(this + 0x2c) == 0x29) {
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0x12))) & 1;
    }
    else {
      if (*(int *)(this + 0x2c) != 0x33) {
        return 1;
      }
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0x14))) & 2;
    }
    if (bVar1 != 0) {
      F_00bd6910(this GEN_EDX_FWD,0x1e);
    }
  }
  return 1;
}

/* ref: FUN_00bd6ab0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd6ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 0x2c))) == 0x29) {
    this_00 = ((undefined *)GEN_TOP(F_00bd6860(this GEN_EDX_FWD)));
  }
  else {
    if (*((int *)GEN_TOP(((int)this + 0x2c))) != 0x33) {
      return 1;
    }
    if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0x14))) & 1) == 0) {
      return 0;
    }
    piVar1 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_ARG)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG)));
      *param_1 = *puVar2;
      param_1[1] = puVar2[1];
      param_1[2] = puVar2[2];
      return 1;
    }
    this_00 = ((undefined *)GEN_TOP(F_00bd4050(this GEN_EDX_ARG)));
  }
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    F_004e78b0(param_1,param_1 + 1,param_1 + 2);
    return 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  return 1;
}

/* ref: FUN_00bd6b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd6b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x88)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_FWD);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x88))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_ARG),
       (char)uVar2 == '\0')) {
      return uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x88))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_ARG,param_1);
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x88))) + 0x78))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_ARG,500);
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bd6bc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd6bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x20, 0);
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00bd6ab0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x88))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd6c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar6;
  uint uVar7;
  undefined3 extraout_var_01 = 0;
  undefined * this_00;
  
  bVar5 = F_00bd1fe0(this GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
  if (bVar5 == 0) {
    bVar5 = F_00bd6ab0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    (*(byte *)(gen_frame + 0x1f)) = bVar5;
    this_00 = *(undefined * PTR32 *)(this + 0x2c);
    if (this_00 == ((undefined *)GEN_TOP(0x29))) {
      bVar5 = F_00bd2480(this GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_01,bVar5)));
      if (bVar5 == 0) {
        this_00 = ((undefined *)GEN_TOP(F_00bd6860(this GEN_EDX_ARG)));
        if ((*(int *)(this + 0x88) == 0) && (this_00 != ((undefined *)GEN_TOP(0x0)))) {
          iVar3 = *(int *)(this + 0x24);
          uVar7 = F_00aa2e00(this_00 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar3 + 0xe))),(uint)*((ushort *)GEN_TOP((iVar3 + 0xc)))
                               ,0,0,(uint)*((ushort *)GEN_TOP((iVar3 + 0x10))));
          *(uint *)(this + 0x88) = uVar7;
          this_00 = ((undefined *)GEN_TOP(0x0));
          if (uVar7 != 0) {
            this_00 = ((undefined *)GEN_TOP(F_00bd6bc0(this GEN_EDX_ARG)));
          }
        }
      }
    }
    else if (this_00 == ((undefined *)GEN_TOP(0x33))) {
      bVar5 = F_00bd2480(this GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_00,bVar5)));
      if (bVar5 == 0) {
        piVar1 = *(int * PTR32 *)(this + 0x88);
        uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
        iVar3 = *(int *)(this + 0x24);
        (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,500);
          fVar4 = (float10)1;
          iVar6 = *((int *)GEN_TOP((iVar3 + 0xc))) + iVar3;
          if ((*(byte *)(gen_frame + 0x1f)) != 0) {
            uVar7 = F_004e95a0((*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,iVar6,(float)fVar4,0,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)),
                                 (float)fVar4,0,*((undefined4 *)GEN_TOP((iVar3 + 0x10))),0);
            *(uint *)(this + 0x88) = uVar7;
            return uVar7;
          }
          uVar7 = F_004e9a80((*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,iVar6,(float)fVar4,*((undefined4 *)GEN_TOP((iVar3 + 0x10))),0,0);
          *(uint *)(this + 0x88) = uVar7;
          return uVar7;
        }
        fVar4 = (float10)1;
        iVar6 = *((int *)GEN_TOP((iVar3 + 0xc))) + iVar3;
        if ((*(byte *)(gen_frame + 0x1f)) == 0) {
          uVar7 = F_004e9a80(uVar2 GEN_EDX_ARG,iVar6,(float)fVar4,*((undefined4 *)GEN_TOP((iVar3 + 0x10))),0,0);
        }
        else {
          uVar7 = F_004e95a0(uVar2 GEN_EDX_ARG,iVar6,(float)fVar4,0,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)),(float)fVar4,0,
                               *((undefined4 *)GEN_TOP((iVar3 + 0x10))),0);
        }
        this_00 = ((undefined *)GEN_TOP(0x0));
        if (uVar7 != 0) {
          *(uint *)(this + 0x88) = uVar7;
          return uVar7;
        }
      }
    }
  }
  return (uint)this_00;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd6de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd6de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x20, 0);
  byte bVar1;
  
  if (*(int *)(this + 0x88) != 0) {
    bVar1 = F_00bd6ab0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x44))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_00bd6e50 */
GEN_OWN GEN_FRAME float10 F_00bd6e50(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd6e50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Clip::SoundClip::vf25 */
GEN_OWN GEN_NOFRAME unsigned int F_00bd6e70(void)
{
  GEN_ENTER(0xbd6e70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::SoundClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd6e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar4 = *(int *)(this + 0x2c) - 0x3c;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    bVar3 = F_00bd2480(this GEN_EDX_FWD);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 == 0) {
      iVar2 = *(int *)(this + 0x24);
      uVar4 = *((uint *)GEN_TOP((iVar2 + 0x14)));
      if (*((int *)GEN_TOP((iVar2 + 0xc))) == 1) {
        uVar4 = F_00ab4c70();
      }
      uVar5 = F_00bd3f80(this GEN_EDX_ARG);
      *((uint *)GEN_TOP((uVar5 + 0x100))) = uVar4;
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x10)));
      uVar5 = F_00bd3f80(this GEN_EDX_ARG);
      *((bool *)GEN_TOP((uVar5 + 0x104))) = cVar1 != '\0';
      if (*((char *)GEN_TOP((iVar2 + 0x11))) == '\x01') {
        F_00ab4b90(100);
        F_00ab6dc0();
      }
      uVar4 = F_00ab6d50(uVar4,1,*((undefined4 *)GEN_TOP((iVar2 + 0x18))),*((undefined4 *)GEN_TOP((iVar2 + 0x18))),0,0);
      return uVar4;
    }
    break;
  case 1: ;
    iVar2 = *(int *)(this + 0x24);
    uVar4 = F_004e79c0(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_ARG,(int)*((short *)GEN_TOP((iVar2 + 0xc))),GEN_ARGF(*((float *)GEN_TOP((iVar2 + 0x10)))),(int)*((short *)GEN_TOP((iVar2 + 0xe))));
    return uVar4;
  case 2: ;
    bVar3 = F_00bd2480(this GEN_EDX_ARG);
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 == 0) {
      iVar2 = *(int *)(this + 0x24);
      iVar7 = 0;
      if (0 < *((int *)GEN_TOP((iVar2 + 0x10)))) {
        do {
          uVar8 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0xc))) + iVar7 * 4 + iVar2)));
          pvVar6 = ((undefined *)GEN_TOP(F_00bd3f80(this GEN_EDX_ARG)));
          pvVar6 = ((undefined *)GEN_TOP(F_00b607f0(pvVar6 GEN_EDX_ARG,uVar8)));
          uVar4 = 0;
          if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
            uVar4 = *((uint *)GEN_TOP(((int)pvVar6 + 0x2c)));
            if (uVar4 == 0x33) {
              uVar4 = *((uint *)GEN_TOP((iVar2 + 0x14)));
              if (uVar4 == 0) {
                uVar4 = F_00bd6b60(pvVar6 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 0x18))));
              }
              else if (uVar4 == 1) {
                uVar4 = F_00bd6910(pvVar6 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 0x18))));
              }
            }
            else if (uVar4 == 0x3c) {
              uVar4 = F_00ab6dc0();
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *((int *)GEN_TOP((iVar2 + 0x10))));
        return uVar4;
      }
    }
    break;
  case 3: ;
    iVar2 = *(int *)(this + 0x24);
    uVar4 = F_00bd40a0(this GEN_EDX_ARG);
    if (uVar4 != 0) {
      *((bool *)GEN_TOP((uVar4 + 0x2ea7))) = *((char *)GEN_TOP((iVar2 + 0xc))) != '\0';
    }
  }
  return uVar4;
}

/* ref: FUN_00bd7000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd7000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x100))) = param_2;
  return param_2;
}

/* ref: FUN_00bd7010 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bd7010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x104))) = param_2;
  return param_2;
}

/* ref: FUN_00bd7020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd7020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd7040 */
GEN_OWN GEN_FRAME float10 F_00bd7040(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd7040u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Clip::CutVFXTriggerClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd7060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x24);
  this_00 = ((undefined *)GEN_TOP(F_00bd3f80(this GEN_EDX_FWD)));
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP((iVar1 + 0x10)))) {
    do {
      this_01 = ((undefined *)GEN_TOP(F_00b607f0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xc))) + iVar3 * 4 + iVar1))))));
      if ((this_01 != ((undefined *)GEN_TOP(0x0))) &&
         ((*((int *)GEN_TOP(((int)this_01 + 0x2c))) == 9 || (*((int *)GEN_TOP(((int)this_01 + 0x2c))) == 0x27)))) {
        F_00be2510(this_01 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0x14))));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP((iVar1 + 0x10))));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,1);
  return uVar2;
}

/* ref: FUN_00bd70d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd70d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd70d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4 + (int)this)));
}

