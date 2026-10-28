#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00b7ac20 */
GEN_FRAME uint GEN_THISCALL F_00b7ac20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  ushort * puVar3;
  
  uVar2 = 0;
  puVar3 = (ushort *)((int)this + 4);
  do {
    if (*puVar3 != 0) {
      uVar1 = F_00ab1ff0((uint)*puVar3);
      if ((uVar1 != 0) && (*(byte *)(uVar1 + 0xc) == (ushort)param_1)) {
        return uVar2;
      }
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 6;
    if (0x1d < (int)uVar2) {
      return 0xffffffff;
    }
  } while( true );
}

/* ref: FUN_00b7ac70 */
GEN_FRAME uint GEN_THISCALL F_00b7ac70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7ac70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)((int)this + param_1 * 0xc);
  if (*(short *)((int)pvVar1 + 4) == (short)param_2) {
    *(undefined2 *)((int)pvVar1 + 6) = (undefined2)param_3;
  }
  return (uint)pvVar1;
}

/* ref: FUN_00b7aca0 */
GEN_FRAME uint GEN_THISCALL F_00b7aca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)*(ushort *)(uVar1 + 10);
    if (*(ushort *)(uVar1 + 10) == 0) {
      uVar2 = (*(char *)(uVar1 + 0xf) == '\x02') + 0x25b;
    }
    uVar2 = F_00a7d4b0(uVar2,*(undefined4 *)this,*(undefined4 *)this,0,0,param_1,0,0,0,
                         REFG(float, 0x10916ec));
  }
  return uVar2;
}

/* ref: FUN_00b7ad00 */
GEN_FRAME uint GEN_THISCALL F_00b7ad00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00ab4370((uint)*(byte *)(uVar1 + 0x10),*(undefined4 *)this,*(undefined4 *)this,0,0);
  }
  return uVar2;
}

/* ref: FUN_00b7ad30 */
GEN_FRAME uint GEN_THISCALL F_00b7ad30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7ad30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a7d4b0(0x226,*(undefined4 *)this,*(undefined4 *)this,0,0,param_1,param_2,0,0,
                         REFG(float, 0x10916ec));
  }
  return uVar2;
}

/* ref: FUN_00b7ad80 */
GEN_FRAME uint GEN_THISCALL F_00b7ad80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ad80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar2 = F_006b8c00();
  bVar1 = F_006c5260(uVar2 GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar3 = F_00ab1ff0(param_1);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_00ab4370(((*(char *)(uVar3 + 0xf) != '\x02') - 1 & 0xffffffdf) + 0x49,
                           *(undefined4 *)this,*(undefined4 *)this,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00b7add0 */
GEN_NOFRAME unsigned int F_00b7add0(void)
{
  GEN_ENTER(0xb7add0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00b7ade0 */
GEN_FRAME uint GEN_STDCALL F_00b7ade0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7ade0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = param_3 - 3;
  if (uVar2 < 0x1e) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xb7aecc) + param_3 + 1)));
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 3: ;
      F_00a77000(param_1,param_1,0,0,0,0,param_4,0,0,0);
      uVar2 = F_00ab4370(0x45,param_1,param_1,0,0);
      return uVar2;
    case 4: ;
      uVar2 = F_00a7b5b0(param_1,param_1,0x207,0,0,param_4,0,0,0);
      return uVar2;
    case 0xe: ;
      uVar2 = F_00a7b5b0(param_1,param_1,0x212,0,0,param_4,0,0,0);
      return uVar2;
    case 0x20: ;
      F_00ab4370(0x2e,param_1,param_1,0,0);
      bVar1 = F_00a9f620(param_1 GEN_EDX_ARG);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0xc,1);
        uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0xd,1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b7aef0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7aef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7aef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  short * psVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar2 = (short *)((int)this + 4);
  do {
    sVar1 = *psVar2;
    if (sVar1 != 0) {
      if (sVar1 == 0xad) {
        return 1;
      }
      if (sVar1 == 0xae) {
        return 2;
      }
      if (sVar1 == 0xaf) {
        return 3;
      }
      if (sVar1 == 0xb0) {
        return 0xffffffff;
      }
      if (sVar1 == 0xb1) {
        return 0xfffffffe;
      }
      if (sVar1 == 0xb2) {
        return 0xfffffffd;
      }
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 6;
    if (0x1d < iVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b7af70 */
GEN_FRAME uint GEN_THISCALL F_00b7af70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7af70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  uVar1 = F_00b7aa60(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b7afa0 */
GEN_FRAME uint GEN_THISCALL F_00b7afa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7afa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if ((0x1d < param_2) ||
     (uVar1 = (uint)*(ushort *)(in_ecx + 4 + param_2 * 0xc), uVar2 = 0, uVar1 == 0)) {
    return uVar2 & 0xffffff00;
  }
  if (((uVar1 < 0xfc) || (0x103 < uVar1)) && (1 < uVar1 - 0x105)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b7aff0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7aff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7aff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 in_ecx;
  float10 fVar4;
  undefined4 uVar5;
  float fVar6;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  
  pfVar8 = (float *)((int)this + 8);
  (*(int *)(gen_frame + 0x58)) = 0x1e;
  do {
    fVar6 = gen_bits2f((uint)*(ushort *)(pfVar8 - 1));
    if (*(ushort *)(pfVar8 - 1) != 0) {
      fVar6 = gen_bits2f(F_00ab1ff0((undefined4)gen_fl2bits(fVar6)));
      fVar3 = REFG(undefined4, 0x137104c);
      (*(float *)(gen_frame + 0x50)) = fVar6;
      if (fVar6 != 0.0) {
        if (*(short *)(pfVar8 - 1) == 0x128) {
          fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x170) -
                         (float10)*(float *)((int)gen_fl2bits(REFG(undefined4, 0x137104c)) + 0x1198))));
          (*(float *)(gen_frame + 0x5c)) = fVar2;
          *(float *)((int)this + 0x170) = fVar2;
          fVar6 = fVar3;
          if ((float10)fVar2 <= (float10)0) {
            fVar6 = F_00a4b7d0();
            uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f529c)));
            in_ecx = *(undefined4 *)this;
            (*(float *)(gen_frame + 0x10)) = gen_bits2f(REFG(float, 0x10f529c));
            (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f529c)));
            (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f529c)));
            *(float *)((int)this + 0x170) =
                 ((float)GEN_TOF((((float10)fVar6 + (float10)fVar6) + (float10)*(double *)&REFG(undefined, 0x10944e0))));
            (*(undefined4 *)(gen_frame + 0x1c)) = uVar5;
            (*(undefined4 *)(gen_frame + 0x20)) = uVar5;
            (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
            (*(undefined4 *)(gen_frame + 0x24)) = 0;
            (*(undefined4 *)(gen_frame + 0x28)) = 0;
            (*(undefined4 *)(gen_frame + 0x2c)) = 0;
            (*(undefined4 *)(gen_frame + 0x30)) = 0;
            (*(undefined4 *)(gen_frame + 0x34)) = 0;
            (*(undefined1 *)(gen_frame + 0x38)) = 0;
            (*(undefined4 *)(gen_frame + 0x3c)) = 0;
            fVar9 = F_00a9fad0(in_ecx GEN_EDX_ARG);
            (*(float *)(gen_frame + 0x10)) = (float)fVar9;
            fVar6 = F_00a4b7d0();
            fVar6 = (float)((float10)fVar6 * (float10)*(double *)&REFG(undefined, 0x10f59a0) -
                           (float10)*(double *)&REFG(undefined, 0x10f5998));
            (*(float *)(gen_frame + 0x5c)) = fVar6;
            fVar9 = ((float10)GEN_TOD(fsin((float10)fVar6)));
            fVar3 = (float)fVar9;
            (*(float *)(gen_frame + 0x54)) = fVar3;
            (*(float *)(gen_frame + 0x40)) = fVar3;
            fVar9 = ((float10)GEN_TOD(fcos((float10)fVar6)));
            fVar6 = (float)fVar9;
            (*(float *)(gen_frame + 0x54)) = fVar6;
            (*(float *)(gen_frame + 0x48)) = fVar6;
            fVar9 = (float10)*(double *)&REFG(undefined, 0x1094560);
            (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar3 * fVar9);
            (*(float *)(gen_frame + 0x44)) = (float)((float10)0 * fVar9);
            (*(float *)(gen_frame + 0x48)) = (float)(fVar9 * (float10)fVar6);
            pfVar7 = (float *)F_00a5feb0(*(undefined * PTR32 *)this GEN_EDX_ARG);
            fVar10 = (float10)(*(float *)(gen_frame + 0x40));
            (*(float *)(gen_frame + 0x40)) = (float)(fVar10 + (float10)*pfVar7);
            fVar9 = (float10)(*(float *)(gen_frame + 0x44));
            (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar7[1] + fVar9);
            fVar4 = (float10)(*(float *)(gen_frame + 0x48));
            (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar7[2] + fVar4);
            fVar6 = gen_bits2f(F_00a9f7c0(*(undefined4 *)this GEN_EDX_ARG,(float)(fVar10 + (float10)*pfVar7),
                                            (float)((float10)pfVar7[1] + fVar9),
                                            (float)((float10)pfVar7[2] + fVar4),(*(float *)(gen_frame + 0x5c)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))
            ;
          }
        }
        if (*(char *)((int)gen_fl2bits((*(float *)(gen_frame + 0x50))) + 0x14) == '\0') {
          fVar3 = ((float)GEN_TOF(((float10)*pfVar8 -
                         (float10)*(float *)((int)gen_fl2bits(REFG(undefined4, 0x137104c)) + 0x1198))));
          (*(float *)(gen_frame + 0x50)) = fVar3;
          *pfVar8 = fVar3;
          if ((float10)fVar3 <= (float10)0) {
            *pfVar8 = 0.0;
          }
        }
      }
    }
    pfVar8 = pfVar8 + 3;
    iVar1 = (*(int *)(gen_frame + 0x58)) - 1;
    (*(int *)(gen_frame + 0x58)) = iVar1;
  } while (iVar1 != 0);
  return (uint)gen_fl2bits(fVar6);
}

/* ref: FUN_00b7b1c0 */
GEN_FRAME uint GEN_THISCALL F_00b7b1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7b1c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (param_2 < 0x1e) {
    iVar1 = in_ecx + param_2 * 0xc;
    uVar2 = (uint)*(ushort *)(iVar1 + 4);
    if ((uVar2 != 0) && (((0xfb < uVar2 && (uVar2 < 0x104)) || (uVar2 - 0x105 < 2)))) {
      return (uint)*(ushort *)(iVar1 + 6);
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00b7b200 */
GEN_FRAME uint GEN_THISCALL F_00b7b200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7b200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * puVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)this;
  if (uVar3 != 0) {
    switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
    case 1: ;
      uVar3 = F_00b5b2d0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,(uint)*(ushort *)(uVar3 + 0x88),1);
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 1;
      *(byte *)(*(int *)this + 0x2dd2) = *(byte *)(*(int *)this + 0x2dd2) | 0x20;
      return uVar3;
    case 3: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 2;
      return uVar3;
    case 0xd: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 4;
      return uVar3;
    case 0xe: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 8;
      return uVar3;
    case 0x2f: ;
      piVar2 = (int *)(uVar3 + 0xec);
      uVar3 = 0;
      if (*piVar2 != 0) {
        puVar1 = (ushort *)(*piVar2 + 0x70);
        *puVar1 = *puVar1 | 8;
        *(ushort *)(*(int *)this + 0x1730) = *(ushort *)(*(int *)this + 0x1730) | 8;
        uVar3 = *(uint *)this;
        puVar1 = (ushort *)(uVar3 + 0x1ed0);
        *puVar1 = *puVar1 | 8;
        *(ushort *)(*(int *)this + 0x2670) = *(ushort *)(*(int *)this + 0x2670) | 8;
        return uVar3;
      }
      break;
    case 0x43: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x10;
      return uVar3;
    case 0x5d: ;
    case 0x5e: ;
    case 0x5f: ;
    case 0x60: ;
    case 0x61: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x40;
      break;
    case 0x6f: ;
    case 0x70: ;
    case 0x71: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x20;
      return uVar3;
    case 0xad: ;
    case 0xae: ;
    case 0xaf: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x80;
      return uVar3;
    case 0xb0: ;
    case 0xb1: ;
    case 0xb2: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x100;
      return uVar3;
    case 0xb5: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x200;
      return 0x200;
    }
  }
  return uVar3;
}

/* ref: FUN_00b7b400 */
GEN_FRAME uint GEN_THISCALL F_00b7b400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7b400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  byte * pbVar2;
  byte bVar3;
  uint in_EAX = 0;
  uint uVar4;
  undefined3 extraout_var = 0;
  int * piVar5;
  undefined * pvVar6;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  undefined3 extraout_var_07 = 0;
  undefined3 extraout_var_08 = 0;
  undefined3 extraout_var_09 = 0;
  undefined3 extraout_var_10 = 0;
  undefined3 extraout_var_11 = 0;
  undefined3 extraout_var_12 = 0;
  undefined3 extraout_var_13 = 0;
  undefined3 extraout_var_14 = 0;
  undefined3 extraout_var_15 = 0;
  undefined4 uVar7;
  
  pvVar6 = *(undefined * PTR32 *)this;
  if (pvVar6 != (undefined *)0x0) {
    uVar4 = param_1 & 0xffff;
    in_EAX = uVar4;
    if (uVar4 < 0x129) {
      if (uVar4 == 0x128) {
        in_EAX = F_00a9fa00(pvVar6 GEN_EDX_FWD);
      }
      else {
        in_EAX = uVar4 - 1;
        if (in_EAX < 0xf3) {
          in_EAX = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xb7b740) + uVar4 + 3)));
          switch((unsigned int)(uintptr_t)(uVar4)) {
          case 1: ;
            F_00b5b2d0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)*(ushort *)((int)pvVar6 + 0x88),0);
            uVar4 = *(uint *)this;
            pbVar2 = (byte *)(uVar4 + 0x2dd2);
            *pbVar2 = *pbVar2 & 0xdf;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfffe;
            return uVar4;
          case 3: ;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfffd;
            return in_EAX;
          case 0xd: ;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfffb;
            return 0xfffb;
          case 0xe: ;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfff7;
            return in_EAX;
          case 0x2f: ;
            in_EAX = 0;
            if (*(int *)((int)pvVar6 + 0xec) != 0) {
              puVar1 = ((ushort *)GEN_TOP((*(int *)((int)pvVar6 + 0xec) + 0x70)));
              *puVar1 = *puVar1 & 0xfff7;
              *(ushort *)(*(int *)this + 0x1730) = *(ushort *)(*(int *)this + 0x1730) & 0xfff7;
              uVar4 = *(uint *)this;
              puVar1 = (ushort *)(uVar4 + 0x1ed0);
              *puVar1 = *puVar1 & 0xfff7;
              *(ushort *)(*(int *)this + 0x2670) = *(ushort *)(*(int *)this + 0x2670) & 0xfff7;
              return uVar4;
            }
            break;
          case 0x43: ;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xffef;
            return in_EAX;
          case 0x5d: ;
          case 0x5e: ;
          case 0x5f: ;
          case 0x60: ;
          case 0x61: ;
            bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x5d);
            in_EAX = CONCAT31(extraout_var_11,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x5e);
              in_EAX = CONCAT31(extraout_var_12,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x5f);
                in_EAX = CONCAT31(extraout_var_13,bVar3);
                if (bVar3 == 0) {
                  bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x60);
                  in_EAX = CONCAT31(extraout_var_14,bVar3);
                  if (bVar3 == 0) {
                    bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x61);
                    in_EAX = CONCAT31(extraout_var_15,bVar3);
                    if (bVar3 == 0) {
                      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xffbf;
                      return in_EAX;
                    }
                  }
                }
              }
            }
            break;
          case 0x6f: ;
          case 0x70: ;
          case 0x71: ;
            bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x6f);
            in_EAX = CONCAT31(extraout_var_08,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x70);
              in_EAX = CONCAT31(extraout_var_09,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this GEN_EDX_ARG,0x71);
                in_EAX = CONCAT31(extraout_var_10,bVar3);
                if (bVar3 == 0) {
                  *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xffdf;
                  return 0xffdf;
                }
              }
            }
            break;
          case 0xad: ;
          case 0xae: ;
          case 0xaf: ;
            bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xad);
            in_EAX = CONCAT31(extraout_var_02,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xae);
              in_EAX = CONCAT31(extraout_var_03,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xaf);
                in_EAX = CONCAT31(extraout_var_04,bVar3);
                if (bVar3 == 0) {
                  *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xff7f;
                  return in_EAX;
                }
              }
            }
            break;
          case 0xb0: ;
          case 0xb1: ;
          case 0xb2: ;
            bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xb0);
            in_EAX = CONCAT31(extraout_var_05,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xb1);
              in_EAX = CONCAT31(extraout_var_06,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this GEN_EDX_ARG,0xb2);
                in_EAX = CONCAT31(extraout_var_07,bVar3);
                if (bVar3 == 0) {
                  *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfeff;
                  return in_EAX;
                }
              }
            }
            break;
          case 0xb5: ;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfdff;
            return 0xfdff;
          case 0xdd: ;
            bVar3 = F_00a9f620(pvVar6 GEN_EDX_ARG);
            in_EAX = CONCAT31(extraout_var_00,bVar3);
            if (bVar3 != 0) {
              piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
              in_EAX = 0;
              if (piVar5 != (int *)0x0) {
                uVar7 = 0x1f;
                uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5 GEN_EDX_ARG);
                pvVar6 = (undefined *)F_00763050(uVar4 GEN_EDX_ARG,uVar7);
                in_EAX = 0;
                if (pvVar6 != (undefined *)0x0) {
                  uVar4 = F_00773e40(pvVar6 GEN_EDX_ARG,2);
                  return uVar4;
                }
              }
            }
            break;
          case 0xde: ;
            bVar3 = F_00a9f620(pvVar6 GEN_EDX_ARG);
            in_EAX = CONCAT31(extraout_var_01,bVar3);
            if (bVar3 != 0) {
              piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
              in_EAX = 0;
              if (piVar5 != (int *)0x0) {
                uVar7 = 0x1f;
                uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5 GEN_EDX_ARG);
                pvVar6 = (undefined *)F_00763050(uVar4 GEN_EDX_ARG,uVar7);
                in_EAX = 0;
                if (pvVar6 != (undefined *)0x0) {
                  uVar4 = F_00773e40(pvVar6 GEN_EDX_ARG,1);
                  return uVar4;
                }
              }
            }
            break;
          case 0xe9: ;
          case 0xea: ;
          case 0xf2: ;
          case 0xf3: ;
            bVar3 = F_00a9f620(pvVar6 GEN_EDX_ARG);
            in_EAX = CONCAT31(extraout_var,bVar3);
            if (bVar3 != 0) {
              piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
              in_EAX = 0;
              if (piVar5 != (int *)0x0) {
                uVar7 = 0x1f;
                uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5 GEN_EDX_ARG);
                pvVar6 = (undefined *)F_00763050(uVar4 GEN_EDX_ARG,uVar7);
                in_EAX = 0;
                if (pvVar6 != (undefined *)0x0) {
                  uVar4 = F_00773e40(pvVar6 GEN_EDX_ARG,0);
                  return uVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00b7b840 */
GEN_FRAME uint GEN_THISCALL F_00b7b840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb7b840u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2;
  if (param_2 < 0x1e) {
    uVar2 = (uint)*(ushort *)((int)param_1 + param_2 * 0xc + 4);
    *(undefined2 *)((int)param_1 + param_2 * 0xc + 6) = (undefined2)param_5;
    *(short *)((int)param_1 + param_2 * 0xc + 4) = (short)param_3;
    *(float *)((int)param_1 + param_2 * 0xc + 8) = param_4;
    *(undefined4 *)((int)param_1 + param_2 * 0xc + 0xc) = param_6;
    uVar1 = param_3 & 0xffff;
    if (uVar2 != uVar1) {
      F_00b7b400(param_1 GEN_EDX_FWD,uVar2);
      uVar1 = F_00b7b200(param_1 GEN_EDX_ARG,param_3);
    }
  }
  return uVar1;
}

/* ref: FUN_00b7b8a0 */
GEN_FRAME uint GEN_THISCALL F_00b7b8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7b8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 0x1e) {
    uVar1 = *(ushort *)((int)this + param_1 * 0xc + 4);
    *(undefined2 *)((int)this + param_1 * 0xc + 4) = 0;
    *(undefined4 *)((int)this + param_1 * 0xc + 8) = 0;
    *(undefined2 *)((int)this + param_1 * 0xc + 6) = 0;
    *(undefined4 *)((int)this + param_1 * 0xc + 0xc) = 0xe0000000;
    uVar2 = F_00b7b400(this GEN_EDX_FWD,(uint)uVar1);
  }
  return uVar2;
}

/* ref: FUN_00b7b8e0 */
GEN_FRAME uint GEN_THISCALL F_00b7b8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7b8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort * puVar7;
  int iVar8;
  ushort * puVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar6 = 0;
  puVar7 = (ushort *)((int)this + 4);
  do {
    ((ushort *)(gen_frame + 0xc))[(int)(iVar6)] = *puVar7;
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 6;
  } while (iVar6 < 0x1e);
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar7 = (ushort *)((int)this + 4);
  puVar9 = (ushort *)(param_1 + 2);
  do {
    uVar2 = *puVar9;
    uVar5 = *(undefined4 *)(puVar9 + 3);
    uVar1 = *(undefined4 *)(puVar9 + 1);
    uVar3 = puVar9[-1];
    if ((*(uint *)(gen_frame + 0x4)) < 0x1e) {
      uVar4 = *puVar7;
      *puVar7 = uVar3;
      *(undefined4 *)(puVar7 + 2) = uVar1;
      puVar7[1] = uVar2;
      *(undefined4 *)(puVar7 + 4) = uVar5;
      if ((uint)uVar4 != (uint)uVar3) {
        F_00b7b400(this GEN_EDX_FWD,(uint)uVar4);
        F_00b7b200(this GEN_EDX_ARG,(uint)uVar3);
      }
    }
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    puVar9 = puVar9 + 6;
    puVar7 = puVar7 + 6;
  } while ((int)(*(uint *)(gen_frame + 0x4)) < 0x1e);
  iVar6 = 0;
  do {
    uVar2 = ((ushort *)(gen_frame + 0xc))[(int)(iVar6)];
    iVar8 = 0;
    puVar7 = (ushort *)(param_1 + 0x18);
    do {
      if (uVar2 == puVar7[-0xc]) break;
      if (uVar2 == puVar7[-6]) {
        iVar8 = iVar8 + 1;
        break;
      }
      if (uVar2 == *puVar7) {
        iVar8 = iVar8 + 2;
        break;
      }
      if (uVar2 == puVar7[6]) {
        iVar8 = iVar8 + 3;
        break;
      }
      if (uVar2 == puVar7[0xc]) {
        iVar8 = iVar8 + 4;
        break;
      }
      if (uVar2 == puVar7[0x12]) {
        iVar8 = iVar8 + 5;
        break;
      }
      iVar8 = iVar8 + 6;
      puVar7 = puVar7 + 0x24;
    } while (iVar8 < 0x1e);
    if (iVar8 == 0x1e) {
      puVar7 = (ushort *)F_00b7b400(this GEN_EDX_ARG,(uint)((ushort *)(gen_frame + 0xc))[(int)(iVar6)]);
    }
    iVar6 = iVar6 + 1;
    if (0x1d < iVar6) {
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return (uint)puVar7;
    }
  } while( true );
}

/* ref: FUN_00b7ba00 */
GEN_FRAME uint GEN_THISCALL F_00b7ba00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ba00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort * puVar7;
  int iVar8;
  ushort * puVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar6 = 0;
  puVar7 = (ushort *)((int)this + 4);
  do {
    ((ushort *)(gen_frame + 0xc))[(int)(iVar6)] = *puVar7;
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 6;
  } while (iVar6 < 0x1e);
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar7 = (ushort *)((int)this + 4);
  puVar9 = (ushort *)(param_1 + 2);
  do {
    uVar2 = *puVar9;
    uVar5 = *(undefined4 *)(puVar9 + 3);
    uVar1 = *(undefined4 *)(puVar9 + 1);
    uVar3 = puVar9[-1];
    if ((*(uint *)(gen_frame + 0x4)) < 0x1e) {
      uVar4 = *puVar7;
      *puVar7 = uVar3;
      *(undefined4 *)(puVar7 + 2) = uVar1;
      puVar7[1] = uVar2;
      *(undefined4 *)(puVar7 + 4) = uVar5;
      if ((uint)uVar4 != (uint)uVar3) {
        F_00b7b400(this GEN_EDX_FWD,(uint)uVar4);
        F_00b7b200(this GEN_EDX_ARG,(uint)uVar3);
      }
    }
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    puVar9 = puVar9 + 6;
    puVar7 = puVar7 + 6;
  } while ((int)(*(uint *)(gen_frame + 0x4)) < 0x1e);
  iVar6 = 0;
  do {
    uVar2 = ((ushort *)(gen_frame + 0xc))[(int)(iVar6)];
    iVar8 = 0;
    puVar7 = (ushort *)(param_1 + 0x18);
    do {
      if (uVar2 == puVar7[-0xc]) break;
      if (uVar2 == puVar7[-6]) {
        iVar8 = iVar8 + 1;
        break;
      }
      if (uVar2 == *puVar7) {
        iVar8 = iVar8 + 2;
        break;
      }
      if (uVar2 == puVar7[6]) {
        iVar8 = iVar8 + 3;
        break;
      }
      if (uVar2 == puVar7[0xc]) {
        iVar8 = iVar8 + 4;
        break;
      }
      if (uVar2 == puVar7[0x12]) {
        iVar8 = iVar8 + 5;
        break;
      }
      iVar8 = iVar8 + 6;
      puVar7 = puVar7 + 0x24;
    } while (iVar8 < 0x1e);
    if (iVar8 == 0x1e) {
      puVar7 = (ushort *)F_00b7b400(this GEN_EDX_ARG,(uint)((ushort *)(gen_frame + 0xc))[(int)(iVar6)]);
    }
    iVar6 = iVar6 + 1;
    if (0x1d < iVar6) {
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return (uint)puVar7;
    }
  } while( true );
}

/* ref: FUN_00b7bb20 */
GEN_FRAME uint GEN_THISCALL F_00b7bb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb7bb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  uint in_EAX = 0;
  uint uVar2;
  ushort * puVar3;
  
  if (param_1 != 0) {
    if ((char)param_3 != '\0') {
      uVar2 = F_00ab1ff0(param_1);
      if (uVar2 != 0) {
        F_00a7d4b0(0x226,*(undefined4 *)this,*(undefined4 *)this,0,0,param_1,param_2,0,0,
                     REFG(float, 0x10916ec));
      }
    }
    if ((char)param_4 != '\0') {
      F_00b7ad80(this GEN_EDX_ARG,param_1);
    }
    in_EAX = 0;
    puVar3 = (ushort *)((int)this + 4);
    while (*puVar3 != param_1) {
      in_EAX = in_EAX + 1;
      puVar3 = puVar3 + 6;
      if (0x1d < (int)in_EAX) {
        return in_EAX;
      }
    }
    if (in_EAX < 0x1e) {
      uVar1 = *(ushort *)((int)this + in_EAX * 0xc + 4);
      *(undefined2 *)((int)this + in_EAX * 0xc + 4) = 0;
      *(undefined4 *)((int)this + in_EAX * 0xc + 8) = 0;
      *(undefined2 *)((int)this + in_EAX * 0xc + 6) = 0;
      *(undefined4 *)((int)this + in_EAX * 0xc + 0xc) = 0xe0000000;
      in_EAX = F_00b7b400(this GEN_EDX_ARG,(uint)uVar1);
    }
  }
  return in_EAX;
}

/* ref: FUN_00b7bbd0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7bbd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7bbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ushort * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (ushort *)((int)this + 4);
  do {
    uVar1 = (uint)*puVar2;
    if ((*puVar2 != 0) && (uVar3 < 0x1e)) {
      puVar2[0] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0xe000;
      uVar1 = F_00b7b400(this GEN_EDX_FWD,uVar1);
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 6;
  } while ((int)uVar3 < 0x1e);
  return uVar1;
}

/* ref: FUN_00b7bc20 */
GEN_FRAME byte F_00b7bc20(unsigned int gen_a0)
{
  GEN_ENTER(0xb7bc20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  ushort * puVar4;
  
  piVar2 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) == (int *)0x0) {
    return 0;
  }
  uVar3 = F_00ab1ff0(param_1);
  if (((uVar3 != 0) && (*(char *)(uVar3 + 0xf) == '\x01')) && (*(char *)(uVar3 + 0x16) != '\x01')) {
    F_00a51200(7,param_1,0,0,0);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xd4))(piVar2 GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xd4))(piVar2 GEN_EDX_ARG)));
    if (param_1 != 0) {
      uVar3 = 0;
      puVar4 = (ushort *)((int)this + 4);
      while (*puVar4 != param_1) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 6;
        if (0x1d < (int)uVar3) {
          return 1;
        }
      }
      if (uVar3 < 0x1e) {
        uVar1 = *(ushort *)((int)this + uVar3 * 0xc + 4);
        *(undefined2 *)((int)this + uVar3 * 0xc + 4) = 0;
        *(undefined2 *)((int)this + uVar3 * 0xc + 6) = 0;
        *(undefined4 *)((int)this + uVar3 * 0xc + 8) = 0;
        *(undefined4 *)((int)this + uVar3 * 0xc + 0xc) = 0xe0000000;
        F_00b7b400(this GEN_EDX_ARG,(uint)uVar1);
      }
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b7bce0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7bce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7bce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * puVar1;
  int iVar2;
  undefined2 * puVar3;
  int local_8;
  
  *(undefined2 *)((int)this + 0x16c) = 0;
  puVar3 = (undefined2 *)((int)this + 4);
  local_8 = 0x1e;
  do {
    iVar2 = *(int *)this;
    if (iVar2 != 0) {
      switch((unsigned int)(uintptr_t)(*puVar3)) {
      case 1: ;
        F_00b5b2d0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,(uint)*(ushort *)(iVar2 + 0x88),1);
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 1;
        *(byte *)(*(int *)this + 0x2dd2) = *(byte *)(*(int *)this + 0x2dd2) | 0x20;
        break;
      case 3: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 2;
        break;
      case 0xd: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 4;
        break;
      case 0xe: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 8;
        break;
      case 0x2f: ;
        if (*(int *)(iVar2 + 0xec) != 0) {
          puVar1 = ((ushort *)GEN_TOP((*(int *)(iVar2 + 0xec) + 0x70)));
          *puVar1 = *puVar1 | 8;
          *(ushort *)(*(int *)this + 0x1730) = *(ushort *)(*(int *)this + 0x1730) | 8;
          *(ushort *)(*(int *)this + 0x1ed0) = *(ushort *)(*(int *)this + 0x1ed0) | 8;
          *(ushort *)(*(int *)this + 0x2670) = *(ushort *)(*(int *)this + 0x2670) | 8;
        }
        break;
      case 0x43: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x10;
        break;
      case 0x5d: ;
      case 0x5e: ;
      case 0x5f: ;
      case 0x60: ;
      case 0x61: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x40;
        break;
      case 0x6f: ;
      case 0x70: ;
      case 0x71: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x20;
        break;
      case 0xad: ;
      case 0xae: ;
      case 0xaf: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x80;
        break;
      case 0xb0: ;
      case 0xb1: ;
      case 0xb2: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x100;
        break;
      case 0xb5: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x200;
      }
    }
    puVar3 = puVar3 + 6;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_00b7bee0 */
GEN_FRAME byte GEN_THISCALL F_00b7bee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7bee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 5 ^ *(byte *)(in_ecx + 0x2dd2)) & 0x20;
  *(byte *)(in_ecx + 0x2dd2) = *(byte *)(in_ecx + 0x2dd2) ^ bVar1;
  return bVar1;
}

/* ref: Client::Game::WeatherManager::WeatherInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7bf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7bf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10f60e4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7bf40 */
GEN_FRAME float10 F_00b7bf40(float gen_a0)
{
  GEN_ENTER(0xb7bf40u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00b7bf80 */
GEN_FRAME byte GEN_THISCALL F_00b7bf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7bf80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 *)(in_ecx + 8) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f59a8)));
  *(byte *)(in_ecx + 4) = (byte)param_2;
  *(byte *)(in_ecx + 5) = (byte)param_2;
  *(undefined4 *)(in_ecx + 0xc) = uVar1;
  return (byte)param_2;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf3 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7bfb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb7bfb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  if ((char)param_2 != '\0') {
    *(char *)(in_ecx + 4) = (char)param_2;
    if (*(char *)(in_ecx + 5) == '\0') {
      *(char *)(in_ecx + 5) = (char)param_2;
    }
    fVar1 = (float10)REFG(double, 0x1088108);
    *(float *)(in_ecx + 0xc) = param_3;
    *(float *)(in_ecx + 8) = (float)((float10)param_3 * fVar1);
  }
  return 0;
}

/* ref: FUN_00b7c040 */
GEN_NOFRAME uint GEN_THISCALL F_00b7c040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f59a8)));
  *(undefined2 *)((int)this + 0x30) = 0x202;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)this = (int)this + 0xc;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(int *)((int)this + 4) = (int)this + 0x1c;
  *(uint *)((int)this + 8) = (int)this + 0x2cU;
  *(undefined4 *)((int)this + 0x3c) = 3;
  return (int)this + 0x2cU;
}

/* ref: FUN_00b7c0a0 */
GEN_FRAME uint GEN_THISCALL F_00b7c0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0xc))))((int)this + 0x2c,param_1,REFG(float, 0x10f59a8));
  return uVar1;
}

/* ref: FUN_00b7c0c0 */
GEN_NOFRAME byte GEN_THISCALL F_00b7c0c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2c) + 8))))((int)this + 0x2c);
  return (byte)uVar1;
}

/* ref: FUN_00b7c0d0 */
GEN_FRAME uint GEN_THISCALL F_00b7c0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb7c0d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + param_2 * 4);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,param_3,(undefined4)gen_fl2bits(param_4));
  return uVar2;
}

/* ref: FUN_00b7c0f0 */
GEN_FRAME uint GEN_THISCALL F_00b7c0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + param_2 * 4);
  *(undefined2 *)(uVar1 + 4) = 0;
  *(undefined4 *)(uVar1 + 8) = 0;
  return uVar1;
}

/* ref: FUN_00b7c110 */
GEN_FRAME uint GEN_THISCALL F_00b7c110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb7c110u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = **(int * PTR32 *)(param_1 + param_2 * 4);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x2c) + 0x18))))
                    (param_1 + 0x2c GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xc))(*(undefined4 *)(param_1 + param_2 * 4),uVar2 & 0xff);
  return uVar2;
}

/* ref: FUN_00b7c150 */
GEN_FRAME uint GEN_THISCALL F_00b7c150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb7c150u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = **(int * PTR32 *)(param_1 + param_2 * 4);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x2c) + 0x10))))
                    (param_1 + 0x2c GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xc))(*(undefined4 *)(param_1 + param_2 * 4),uVar2 & 0xff);
  return uVar2;
}

/* ref: FUN_00b7c190 */
GEN_NOFRAME byte GEN_THISCALL F_00b7c190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *(byte *)((int)this + 0x3c);
  if (bVar2 == 3) {
    bVar2 = 2;
  }
  piVar1 = *(int * PTR32 *)((int)this + (uint)bVar2 * 4);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_FWD);
  return (byte)uVar3;
}

/* ref: FUN_00b7c1b0 */
GEN_NOFRAME byte GEN_THISCALL F_00b7c1b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *(byte *)((int)this + 0x3c);
  if (bVar2 == 3) {
    bVar2 = 2;
  }
  piVar1 = *(int * PTR32 *)((int)this + (uint)bVar2 * 4);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD);
  return (byte)uVar3;
}

/* ref: FUN_00b7c1d0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7c1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 3;
  uVar3 = 0;
  do {
    if ((int)uVar4 < 3) {
      return uVar4;
    }
    piVar1 = *(int * PTR32 *)((int)this + uVar3 * 4);
    if ((piVar1 != (int *)0x0) && (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD), (char)uVar2 != '\0'))
    {
      uVar4 = uVar3;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return uVar4;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf5 */
GEN_FRAME byte GEN_THISCALL F_00b7c210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = REFG(undefined4, 0x137104c);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 8) - (float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198))));
  *(float *)(in_ecx + 8) = fVar1;
  if ((float10)fVar1 <= (float10)0) {
    bVar2 = *(byte *)(in_ecx + 4);
    uVar3 = (uint)bVar2;
    *(undefined4 *)(in_ecx + 8) = 0;
    if (*(byte *)(in_ecx + 5) != bVar2) {
      *(byte *)(in_ecx + 5) = bVar2;
    }
  }
  return (byte)uVar3;
}

/* ref: FUN_00b7c250 */
GEN_FRAME uint GEN_THISCALL F_00b7c250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7c250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f59a8)));
  *(undefined1 *)((int)this + 0x30) = (undefined1)param_1;
  *(undefined1 *)((int)this + 0x31) = (undefined1)param_1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)((int)this + 8) = (int)this + 0x2c;
  *(int *)this = (int)this + 0xc;
  *(int *)((int)this + 4) = (int)this + 0x1c;
  *(undefined4 *)((int)this + 0x3c) = 3;
  *(undefined1 *)((int)this + 0x40) = 0;
  iVar2 = REFG(int, 0x137104c);
  uVar3 = F_00ab1c90(param_2 & 0xffff);
  uVar4 = 0;
  if ((uVar3 != 0) && (uVar4 = *(uint *)(uVar3 + 0x18), uVar4 < 0x960)) {
    uVar4 = F_00b7c780((undefined *)(iVar2 + 0x1210) GEN_EDX_ARG,uVar4);
    return uVar4;
  }
  *(undefined1 *)(iVar2 + 0x1231) = 0;
  *(undefined4 *)(iVar2 + 0x1228) = 0;
  *(undefined4 *)(iVar2 + 0x122c) = 0;
  return uVar4;
}

/* ref: FUN_00b7c2f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7c2f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float10 extraout_ST0;
  float local_8;
  
  uVar5 = 0;
  do {
    piVar1 = *(int * PTR32 *)((int)this + uVar5 * 4);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_FWD);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  uVar5 = 3;
  uVar6 = 0;
  do {
    if ((int)uVar5 < 3) goto LAB_00b7c344;
    piVar1 = *(int * PTR32 *)((int)this + uVar6 * 4);
    if (piVar1 != (int *)0x0) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      if ((char)uVar4 != '\0') {
        uVar5 = uVar6;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  if ((int)uVar5 < 3) {
LAB_00b7c344: ;
    piVar1 = *(int * PTR32 *)((int)this + uVar5 * 4);
    if (piVar1 != (int *)0x0) {
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
      local_8 = (float)extraout_ST0;
      if (*(uint *)((int)this + 0x3c) != uVar5) {
        local_8 = 0.0;
      }
      *(uint *)((int)this + 0x3c) = uVar5;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG);
      iVar2 = REFG(int, 0x1371290);
      cVar3 = (char)uVar5;
      if ((cVar3 != *(char *)((int)this + 0x40)) ||
         ((GEN_ISNAN(local_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
          ((GEN_ISNAN(local_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || local_8 == *(float *)&REFG(undefined, 0x1088114)))) {
        *(char *)(REFG(int, 0x1371290) + 0x23) = cVar3;
        *(float *)(iVar2 + 0x24) = local_8;
        *(char *)((int)this + 0x40) = cVar3;
      }
    }
  }
  return;
}

/* ref: FUN_00b7c3b0 */
GEN_FRAME uint F_00b7c3b0(void)
{
  GEN_ENTER(0xb7c3b0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  int iVar2;
  double dVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 extraout_EDX = 0;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uStackY_58;
  
  iVar6 = REFG(int, 0x137104c);
  uVar11 = F_00b7c610((undefined *)(REFG(int, 0x137104c) + 0x1210) GEN_EDX_ARG);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  (*(ulonglong *)(gen_frame + 0xc)) = uVar11;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined2 *)(gen_frame + 0x24)) = 0;
  uVar7 = F_00428080(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  uStackY_58 = CONCAT44(extraout_EDX,uVar7);
  uVar7 = (uint)((uStackY_58 / 0xe10) % 0x18);
  uVar11 = (*((code *)GEN_TOP(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0][1])))(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),0);
  uVar12 = (*((code *)GEN_TOP(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0][1])))(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),0);
  iVar2 = (int)(uVar12 % 0x3c);
  (*(float *)(gen_frame + 0x38)) = gen_bits2f(iVar2);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x30)) + 4)) = (float)iVar2;
  (*(double *)(gen_frame + 0x30)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((float)iVar2),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x30)) + 0))));
  iVar5 = ((int)((uVar11 / 0x3c) % 0x3c) + uVar7 * 0x3c) * 0x3c;
  (*(float *)(gen_frame + 0x38)) = gen_bits2f(iVar5);
  fVar1 = (float)((float10)iVar5 + (float10)iVar2);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  *(float *)(REFG(int, 0x1371290) + 0xc) = fVar1;
  uVar11 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)(iVar6 + 0x1210) + 4))))(iVar6 + 0x1210,0);
  uVar8 = (uint)((uVar11 / 0x15180) % (ulonglong)REFG(undefined4, 0x10e90e8));
  if (0xb < uVar7) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 % REFG(undefined4, 0x10e90e8);
  (*(float *)(gen_frame + 0x38)) = gen_bits2f(uVar8);
  fVar9 = (float10)(int)uVar8;
  if ((int)uVar8 < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x38)) = gen_bits2f(REFG(undefined4, 0x10e90e8));
  fVar10 = (float10)(int)REFG(undefined4, 0x10e90e8);
  if ((int)REFG(undefined4, 0x10e90e8) < 0) {
    fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x38)) = (float)(fVar9 / fVar10);
  fVar1 = ((float)GEN_TOF(((float10)1 - (float10)(float)(fVar9 / fVar10))));
  (*(float *)(gen_frame + 0x38)) = fVar1;
  (*(double *)(gen_frame + 0x30)) = (double)fVar1;
  dVar4 = (GEN_X87MATH(((double)fVar1),0xd));
  uVar7 = REFG(undefined4, 0x137128c);
  (*(float *)(gen_frame + 0x38)) = (float)dVar4;
  *(float *)(REFG(undefined4, 0x137128c) + 0x1620) = (float)((float10)fVar1 - (float10)(float)dVar4);
  return uVar7;
}

/* ref: FUN_00b7c570 */
GEN_FRAME uint GEN_THISCALL F_00b7c570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb7c570u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  param_1[2] = param_2;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  param_1[3] = param_3;
  param_1[4] = (undefined4)gen_fl2bits(param_4);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  return (uint)param_1;
}

/* ref: FUN_00b7c5b0 */
GEN_FRAME uint GEN_THISCALL F_00b7c5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7c5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 * 0x3c + param_2;
  iVar2 = ((((((int)param_1 >> 0x1f) << 4 | param_1 >> 0x1c) - ((int)param_1 >> 0x1f)) -
           (uint)(param_1 * 0x10 < param_1)) * 4 | param_1 * 0xf >> 0x1e) + ((int)param_2 >> 0x1f) +
          (uint)CARRY4(param_1 * 0x3c,param_2);
  *(undefined1 *)((int)this + 0x21) = 1;
  *(uint *)((int)this + 0x18) = uVar1 * 0x3c;
  *(uint *)((int)this + 0x1c) =
       (((iVar2 * 0x10 | uVar1 >> 0x1c) - iVar2) - (uint)(uVar1 * 0x10 < uVar1)) * 4 |
       uVar1 * 0xf >> 0x1e;
  return uVar1 * 0x3c;
}

/* ref: FUN_00b7c610 */
GEN_FRAME ulonglong GEN_THISCALL F_00b7c610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * puVar1;
  bool bVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  uVar4 = ((gen_lcode *)*(gen_code32 *)(*(int *)this + 4))(this,0);
  puVar1 = (ulonglong *)((int)this + 0x38);
  fVar3 = -(float10)(longlong)(((ulonglong)*(uint *)((int)this + 0x3c) & 0x80000000) << 0x20) +
          (float10)(*puVar1 & 0x7fffffffffffffff);
  bVar2 = GEN_ISNAN(fVar3) || GEN_ISNAN((float10)0);
  if (bVar2 != (bVar2 || fVar3 == (float10)0)) {
    return uVar4;
  }
  if (*(char *)((int)this + 0x40) != '\0') {
    return *puVar1;
  }
  return uVar4 + *puVar1;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf1 */
GEN_NOFRAME byte F_00b7c6c0(void)
{
  GEN_ENTER(0xb7c6c0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_00b7c6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 5);
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_00b7c6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c6e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4);
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf6 */
GEN_NOFRAME byte GEN_THISCALL F_00b7c6f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 5);
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf7 */
GEN_NOFRAME float10 GEN_THISCALL F_00b7c700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0xc);
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7c710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10f60e4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7c740 */
GEN_FRAME uint GEN_STDCALL F_00b7c740(float gen_a0)
{
  GEN_ENTER(0xb7c740u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  double dVar2;
  uint uVar3;
  
  dVar2 = (GEN_X87MATH(((double)(float)((float10)1 - (float10)param_1)),0xd));
  uVar3 = REFG(undefined4, 0x137128c);
  *(float *)(REFG(undefined4, 0x137128c) + 0x1620) =
       ((float)GEN_TOF(((float10)(float)((float10)1 - (float10)param_1) - (float10)(float)dVar2)));
  return uVar3;
}

/* ref: FUN_00b7c780 */
GEN_FRAME uint GEN_THISCALL F_00b7c780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c780u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * PTR32 * ppvVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21))) = 1;
  if ((*(uint *)&gen_args[1]) < 0x961) {
    uVar2 = (*(uint *)&gen_args[1]) / 100;
    uVar4 = (*(uint *)&gen_args[1]) % 100;
    (*(uint *)&gen_args[1]) = uVar4;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x3b;
    ppvVar3 = (undefined * PTR32 *)&(*(uint *)&gen_args[1]);
    if (0x3a < uVar4) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    pvVar1 = *ppvVar3;
    pvVar5 = (undefined *)(uVar2 * 0x3c + (int)pvVar1);
    iVar6 = (uint)(uVar2 * 0x10 < uVar2) * -4 + ((int)((int)(uintptr_t)pvVar1) >> 0x1f) +
            (uint)CARRY4(uVar2 * 0x3c,(uint)pvVar1);
    in_EAX = (int)((int)(uintptr_t)pvVar5) * 0x3c;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21))) = 1;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = in_EAX;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) =
         (((iVar6 * 0x10 | (uint)((int)(uintptr_t)pvVar5) >> 0x1c) - iVar6) -
         (uint)((undefined *)((int)((int)(uintptr_t)pvVar5) * 0x10) < pvVar5)) * 4 | (uint)((int)((int)(uintptr_t)pvVar5) * 0xf) >> 0x1e;
  }
  return in_EAX;
}

/* ref: Client::Game::WeatherManager::Weather::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_00b7c830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 5) != '\0';
}

/* ref: Client::Game::WeatherManager::Weather::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7c840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10f60e4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00b7c890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x14);
}

/* ref: FUN_00b7c8a0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7c8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7c8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f6150));
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406ad0(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  uVar1 = F_00b65520(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00b7c8d0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7c8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7c8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = param_2;
  F_00b66510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f6150));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  if (*(*(int * PTR32 *)(gen_frame + 0x2c)) == 0x41) {
    bVar9 = (char)(*(int * PTR32 *)(gen_frame + 0x2c))[0x10] != '\0';
  }
  else {
    bVar9 = false;
  }
  *(bool *)((int)this + 0x16) = bVar9;
  iVar8 = (*(int * PTR32 *)(gen_frame + 0x2c))[0xd];
  *(short *)((int)this + 0x14) = (short)iVar8;
  if ((short)iVar8 != 0) {
    fVar4 = (float10)0;
    fVar1 = param_1[9];
    (*(float *)(gen_frame + 0x60)) = (float)fVar4;
    ((float *)(gen_frame + 0x30))[0] = param_1[8];
    (*(float *)(gen_frame + 0x64)) = (float)fVar4;
    (*(float *)(gen_frame + 0x68)) = (float)fVar4;
    ((float *)(gen_frame + 0x30))[1] = 0.0;
    ((float *)(gen_frame + 0x30))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(float *)(gen_frame + 0x44)) = fVar1;
    (*(float *)(gen_frame + 0x58)) = param_1[10];
    F_004efe70(((float *)(gen_frame + 0x30)) GEN_EDX_ARG,(uint)(param_1 + 4));
    (*(float *)(gen_frame + 0x60)) = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x60)));
    (*(float *)(gen_frame + 0x64)) = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x64)));
    (*(float *)(gen_frame + 0x68)) = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x68)));
    uVar5 = F_00406bb0((uint)*(ushort *)((int)this + 0x14) * 0x10,0,0);
    *(uint *)((int)this + 0x10) = uVar5;
    (*(int *)(gen_frame + 0x28)) = 0;
    if (*(short *)((int)this + 0x14) != 0) {
      iVar8 = 0;
      do {
        puVar6 = (undefined4 *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (*(int * PTR32 *)(gen_frame + 0x2c))[0xc] + iVar8);
        (*(undefined4 *)(gen_frame + 0x10)) = *puVar6;
        (*(undefined4 *)(gen_frame + 0x14)) = puVar6[1];
        (*(undefined4 *)(gen_frame + 0x18)) = puVar6[2];
        puVar6 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),((float *)(gen_frame + 0x30)));
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        iVar7 = *(int *)((int)this + 0x10);
        *(undefined4 *)(iVar7 + iVar8) = *puVar6;
        *(undefined4 *)(iVar7 + 4 + iVar8) = uVar2;
        *(undefined4 *)(iVar7 + 8 + iVar8) = uVar3;
        *((undefined2 *)GEN_TOP((iVar8 + 0xc + *(int *)((int)this + 0x10)))) =
             *(undefined2 *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (*(int * PTR32 *)(gen_frame + 0x2c))[0xc] + iVar8 + 0xc);
        *((undefined1 *)GEN_TOP((iVar8 + 0xe + *(int *)((int)this + 0x10)))) =
             *(undefined1 *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (*(int * PTR32 *)(gen_frame + 0x2c))[0xc] + iVar8 + 0xe);
        iVar7 = (*(int *)(gen_frame + 0x28)) + 1;
        iVar8 = iVar8 + 0x10;
        (*(int *)(gen_frame + 0x28)) = iVar7;
      } while (iVar7 < (int)(uint)*(ushort *)((int)this + 0x14));
    }
  }
  if (*(ushort *)((int)this + 0x14) < 3) {
    *(undefined2 *)((int)this + 0xc) = 0;
  }
  else {
    *(undefined2 *)((int)this + 0xc) = 2;
    F_00b66cc0(this GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x14),*(undefined4 *)((int)this + 0x10),
                 (uint)(*(char *)((int)this + 0x16) != '\0'));
  }
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf6 */
GEN_FRAME ushort GEN_THISCALL F_00b7cae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0xc + param_2 * 0x10)));
}

/* ref: FUN_00b7cb00 */
GEN_FRAME uint GEN_THISCALL F_00b7cb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x30) + param_1 * 0x10 + (int)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf1 */
GEN_FRAME uint GEN_THISCALL F_00b7cb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7cb20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x10) + param_3 * 0x10;
  *param_2 = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x10) + param_3 * 0x10)));
  param_2[1] = *(undefined4 *)(iVar1 + 4);
  param_2[2] = *(undefined4 *)(iVar1 + 8);
  return (uint)param_2;
}

/* ref: FUN_00b7cb50 */
GEN_FRAME uint GEN_THISCALL F_00b7cb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7cb50u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_2 * 0x10 + *(int *)(in_ecx + 0x10))));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7cbf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f6150));
  if (*(int *)(this + 0x10) != 0) {
    F_00406ad0(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  F_00b65520(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf43 */
GEN_NOFRAME uint GEN_THISCALL F_00b7cc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7cc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf42 */
GEN_NOFRAME uint GEN_THISCALL F_00b7cc50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7cc50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: FUN_00b7cc60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b7cc60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7cc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x88);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    if (puVar3[4] != 0) {
      F_00b5bab0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar3[4]);
    }
    puVar4 = (undefined4 *)puVar3[4];
    if (puVar4 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
      puVar3[4] = 0;
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  return;
}

/* ref: FUN_00b7cce0 */
GEN_FRAME uint GEN_THISCALL F_00b7cce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  this_00 = (undefined *)F_00406b90(0x90,0,0);
  if (this_00 == (undefined *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)F_00becaf0(this_00 GEN_EDX_ARG,param_1);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2 GEN_EDX_ARG,8);
  piVar2[0x21] = *(int *)((int)this + 0x80);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,0x136);
  *puVar3 = *(undefined4 *)((int)this + 0x88);
  puVar3[1] = *(undefined4 *)((int)this + 0x88);
  puVar3[2] = *(undefined4 *)((int)this + 0x88);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    puVar3[3] = uVar1;
    puVar3[4] = piVar2;
  }
  uVar4 = F_00b7db30((undefined *)((int)this + 0x84) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  return uVar4;
}

/* ref: FUN_00b7cd90 */
GEN_FRAME uint GEN_THISCALL F_00b7cd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_00bf0d90(this GEN_EDX_FWD,param_1 + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x10f617c));
  *(int *)((int)this + 0x80) = param_1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  uVar1 = F_004296a0(0x18,0,0x136);
  *(uint *)((int)this + 0x88) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 4))) = *(int *)((int)this + 0x88);
  *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 8))) = *(int *)((int)this + 0x88);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00b7ce00 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7ce00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7ce00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x10f617c));
  if (*(int *)((int)this + 0x80) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + 0x3c))) = 0;
  }
  F_00b7cc60(this GEN_EDX_FWD);
  F_00b7dc30((undefined *)((int)this + 0x84) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x88),
               *(undefined4 * PTR32 *)((int)this + 0x88));
  F_00429760(*(undefined4 *)((int)this + 0x88),0x18,0x136);
  F_00bf0db0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00b7ce60 */
GEN_FRAME uint GEN_THISCALL F_00b7ce60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ce60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00bf0d90(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x10f617c));
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  uVar1 = F_004296a0(0x18,0,0x136);
  *(uint *)((int)this + 0x88) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 4))) = *(int *)((int)this + 0x88);
  *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 8))) = *(int *)((int)this + 0x88);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00b7cef0 */
GEN_FRAME byte GEN_THISCALL F_00b7cef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b7cf20 */
GEN_FRAME uint F_00b7cf20(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cf20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7cf30 */
GEN_FRAME uint F_00b7cf30(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cf30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00b7cf60 */
GEN_FRAME uint GEN_STDCALL F_00b7cf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cf60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00b7cfb0 */
GEN_FRAME uint F_00b7cfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cfb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00b7cfc0 */
GEN_FRAME uint F_00b7cfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cfc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00b7cfd0 */
GEN_FRAME uint F_00b7cfd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cfd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00b7cfe0 */
GEN_FRAME uint F_00b7cfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cfe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00b7cff0 */
GEN_FRAME uint F_00b7cff0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cff0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00b7d010 */
GEN_FRAME uint GEN_STDCALL F_00b7d010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x136);
  return uVar1;
}

/* ref: FUN_00b7d040 */
GEN_FRAME uint GEN_THISCALL F_00b7d040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b7d060 */
GEN_FRAME uint F_00b7d060(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00b7d090 */
GEN_FRAME uint F_00b7d090(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d0a0 */
GEN_FRAME uint F_00b7d0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d0a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d0d0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7d0d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7d0d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00b7d140 */
GEN_FRAME uint F_00b7d140(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d150 */
GEN_FRAME uint GEN_THISCALL F_00b7d150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d170 */
GEN_FRAME uint F_00b7d170(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d180 */
GEN_FRAME uint F_00b7d180(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d1c0 */
GEN_FRAME uint F_00b7d1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d1c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d1d0 */
GEN_FRAME uint GEN_THISCALL F_00b7d1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d1f0 */
GEN_FRAME uint GEN_THISCALL F_00b7d1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00b7d210 */
GEN_FRAME byte GEN_THISCALL F_00b7d210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b7d240 */
GEN_FRAME uint F_00b7d240(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00b7d280 */
GEN_FRAME uint GEN_THISCALL F_00b7d280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b7d290 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b7d290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7d290u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00b7d300 */
GEN_FRAME uint GEN_THISCALL F_00b7d300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d300u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b7d360 */
GEN_FRAME uint GEN_THISCALL F_00b7d360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d360u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b7d3c0 */
GEN_FRAME uint GEN_THISCALL F_00b7d3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d3f0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7d3f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7d3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b7d0d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b7d410 */
GEN_FRAME uint GEN_THISCALL F_00b7d410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d430 */
GEN_FRAME uint GEN_THISCALL F_00b7d430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d450 */
GEN_FRAME uint GEN_THISCALL F_00b7d450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00b7d4b0 */
GEN_FRAME uint GEN_THISCALL F_00b7d4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b7d4c0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7d4c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7d4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b7d290(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b7d510 */
GEN_FRAME uint GEN_THISCALL F_00b7d510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d510u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00b7d290(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00b7d62a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00b7cff0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00b7d060(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00b7d62a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00b7d300((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00b7d360((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00b7d300((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00b7d6e8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00b7d360((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00b7d6e8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00b7d300((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00b7d360((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0x136);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00b7d770 */
GEN_FRAME uint GEN_THISCALL F_00b7d770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00b7d290(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00b7d790 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7d790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00b7d790(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0x136);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_00b7d7d0 */
GEN_FRAME uint GEN_THISCALL F_00b7d7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb7d7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x18,0x136);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00b7d9cd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00b7d9cd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00b7da00 */
GEN_FRAME uint GEN_THISCALL F_00b7da00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7da00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7da20 */
GEN_NOFRAME uint GEN_THISCALL F_00b7da20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7da20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b7d0d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b7da30 */
GEN_FRAME unsigned int GEN_STDCALL F_00b7da30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7da30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b7da50 */
GEN_FRAME uint GEN_THISCALL F_00b7da50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7da50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b7da70 */
GEN_FRAME uint GEN_THISCALL F_00b7da70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7da70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b7da80 */
GEN_NOFRAME uint GEN_THISCALL F_00b7da80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7da80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b7d290(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b7dad0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7dad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00b7d790(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,0x136);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00b7db30 */
GEN_FRAME uint GEN_THISCALL F_00b7db30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7db30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00b7d0d0(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,0x136);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b7dc10 */
GEN_FRAME unsigned int F_00b7dc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7dc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b7dc30 */
GEN_FRAME uint GEN_THISCALL F_00b7dc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7dc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00b7dad0(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00b7d510(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00b7dcd0 */
GEN_FRAME uint GEN_THISCALL F_00b7dcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7dcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x136);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00b7dd20 */
GEN_FRAME uint GEN_THISCALL F_00b7dd20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00b7dc30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00b7dd40 */
GEN_FRAME uint GEN_THISCALL F_00b7dd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7dd40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x136);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00b7db30(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00b7dda0 */
GEN_FRAME uint GEN_THISCALL F_00b7dda0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b7dc30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00b7dde0 */
GEN_FRAME uint GEN_THISCALL F_00b7dde0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b7dc30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00b7dea0 */
GEN_FRAME uint GEN_THISCALL F_00b7dea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b7dc30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x136);
  return (uint)uVar1;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf13 */
GEN_NOFRAME uint F_00b7dee0(void)
{
  GEN_ENTER(0xb7dee0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf12 */
GEN_NOFRAME uint F_00b7def0(void)
{
  GEN_ENTER(0xb7def0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf45 */
GEN_NOFRAME uint GEN_THISCALL F_00b7df00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7df00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_00b7df10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7df10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7df20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7df20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b7ce00(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7df50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b7df50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7df50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x7f90);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x7f90) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x7f8c);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x7f8c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x7f88);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x7f88) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x7f84);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x7f84) = 0;
  }
  piVar2 = (int *)((int)this + 0x2fd4);
  iVar3 = 0x13ec;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return;
}

/* ref: FUN_00b7dfe0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7dfe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7dfe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x7fa0) != 0) {
    F_0050c620(*(int *)((int)this + 0x7fa0),0,0);
    *(undefined4 *)((int)this + 0x7fa0) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x7f9c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x7f9c),0,0);
    *(undefined4 *)((int)this + 0x7f9c) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b7e070 */
GEN_FRAME byte GEN_THISCALL F_00b7e070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7e070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,5,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x73686364;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/OcclusionVS.shcd",0,0,0);
  *(uint *)((int)this + 0x7f9c) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/OcclusionPS.shcd",0,0,0);
  *(uint *)((int)this + 0x7fa0) = uVar1;
  return uVar1 != 0;
}

/* ref: FUN_00b7e0f0 */
GEN_FRAME byte GEN_THISCALL F_00b7e0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7e0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (byte)(*((uint *)GEN_TOP((*(int *)((int)this + 0x7fc0) + (uint)((ushort)param_1 >> 5) * 4))) >>
               ((byte)(ushort)param_1 & 0x1f)) & 1;
}

/* ref: FUN_00b7e120 */
GEN_FRAME uint GEN_THISCALL F_00b7e120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7e120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar2;
  
  uVar3 = (ulonglong)(byte)((char)*(undefined4 *)((int)this + 0x8014) * '\n');
  lVar2 = ((ulonglong)((uVar3 < 0x40) ? ((0x3ffL << uVar3)) : 0));
  uVar1 = (uint)lVar2;
  uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[1] = ~uVar4 & param_1[1] | uVar4;
  *param_1 = ~uVar1 & *param_1 | uVar1;
  return uVar1;
}

/* ref: FUN_00b7e160 */
GEN_NOFRAME uint GEN_THISCALL F_00b7e160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7e160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62a8));
  *(undefined4 *)((int)this + 0x7f84) = 0;
  *(undefined4 *)((int)this + 0x7f88) = 0;
  *(undefined4 *)((int)this + 0x7f8c) = 0;
  *(undefined4 *)((int)this + 0x7f90) = 0;
  *(undefined4 *)((int)this + 0x7f94) = 0xffffffff;
  *(undefined4 *)((int)this + 0x7f98) = 0xffffffff;
  *(undefined4 *)((int)this + 0x7f9c) = 0;
  *(undefined4 *)((int)this + 0x7fa0) = 0;
  *(undefined4 *)((int)this + 0x7fb8) = 0;
  *(undefined4 *)((int)this + 0x7fbc) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,0x80,4)));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  *(undefined4 * PTR32 *)((int)this + 0x7fc0) = puVar1;
  *(undefined4 *)((int)this + 0x7fc4) = 0x3fc;
  *(undefined4 *)((int)this + 0x8010) = 0xffffffff;
  *(undefined2 *)((int)this + 0x8018) = 0x101;
  *(undefined1 *)((int)this + 0x801a) = 1;
  F_00c48350((undefined *)((int)this + 0x2fd4),0,0x4fb0);
  return (uint)this;
}

/* ref: FUN_00b7e270 */
GEN_FRAME byte GEN_THISCALL F_00b7e270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7e270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * puVar6;
  
  uVar5 = 0;
  F_004d58e0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,0,0,0x23,0);
  (*(uint *)(gen_frame + 0x8)) = 0;
  puVar6 = (uint *)((int)this + 0x2fd4);
  do {
    uVar3 = F_004dcde0(2,4);
    *puVar6 = uVar3;
    if (uVar3 == 0) break;
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar5 < 0x13ec);
  *(uint *)((int)this + 0x7fbc) = (*(uint *)(gen_frame + 0x8)) / 5;
  uVar5 = F_004dcc90(0x60,4,4);
  *(uint *)((int)this + 0x7f84) = uVar5;
  if (uVar5 != 0) {
    uVar5 = F_004dccf0(0x48,1,4,4);
    *(uint *)((int)this + 0x7f88) = uVar5;
    if (uVar5 != 0) {
      uVar5 = F_004dcd60(0x30,2,4);
      *(uint *)((int)this + 0x7f8c) = uVar5;
      if (uVar5 != 0) {
        uVar5 = F_004deb40(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),1);
        *(uint *)((int)this + 0x7f90) = uVar5;
        if (uVar5 != 0) {
          uVar5 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))) GEN_EDX_ARG,"g_CameraParameter");
          *(uint *)((int)this + 0x7f94) = uVar5;
          uVar5 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))) GEN_EDX_ARG,"g_WorldMatrix");
          *(uint *)((int)this + 0x7f98) = uVar5;
          puVar4 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)this + 0x7f84) GEN_EDX_ARG,0,0,2);
          uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
          uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = GEN_FLT_TO(*puVar4, REFG(float, 0x1090708));
            puVar4[1] = uVar2;
            puVar4[2] = uVar2;
            puVar4[3] = uVar1;
            puVar4[4] = uVar2;
            puVar4[5] = uVar2;
            puVar4[6] = uVar1;
            puVar4[7] = uVar1;
            puVar4[8] = uVar2;
            puVar4[9] = uVar2;
            puVar4[10] = uVar1;
            puVar4[0xb] = uVar2;
            puVar4[0xc] = uVar2;
            puVar4[0xd] = uVar2;
            puVar4[0xe] = uVar1;
            puVar4[0xf] = uVar1;
            puVar4[0x10] = uVar2;
            puVar4[0x11] = uVar1;
            puVar4[0x12] = uVar1;
            puVar4[0x13] = uVar1;
            puVar4[0x15] = uVar2;
            puVar4[0x14] = uVar1;
            puVar4[0x16] = uVar1;
            puVar4[0x17] = uVar1;
            F_004d6970(*(undefined * PTR32 *)((int)this + 0x7f84) GEN_EDX_ARG);
          }
          puVar4 = (undefined4 *)F_004d6a30(*(undefined * PTR32 *)((int)this + 0x7f88) GEN_EDX_ARG,0,0,2);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0x20000;
            puVar4[1] = 1;
            puVar4[2] = 0x20003;
            puVar4[3] = 0x60001;
            puVar4[4] = 0x10005;
            puVar4[5] = 0x60002;
            puVar4[6] = 0x70005;
            puVar4[7] = 0x50004;
            puVar4[8] = 0x70006;
            puVar4[9] = 0x30004;
            puVar4[10] = 0x40000;
            puVar4[0xb] = 0x30007;
            puVar4[0xc] = 0x40001;
            puVar4[0xd] = 0x10000;
            puVar4[0xe] = 0x40005;
            puVar4[0xf] = 0x60003;
            puVar4[0x10] = 0x30002;
            puVar4[0x11] = 0x60007;
            F_004d6ae0(*(undefined * PTR32 *)((int)this + 0x7f88) GEN_EDX_ARG);
          }
          *(undefined4 *)((int)this + 0x7fa4) = 0;
          *(undefined4 *)((int)this + 0x7fa8) = 0;
          *(undefined4 *)((int)this + 0x7fac) = 0;
          *(undefined4 *)((int)this + 0x7fb0) = 0;
          *(undefined4 *)((int)this + 0x7fb4) = 0;
          F_00c48350((undefined *)((int)this + 0x7fd0),0,0x40);
          *(undefined4 *)((int)this + 0x8014) = 0;
          return 1;
        }
      }
    }
  }
  F_00b7df50(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b7e5a0 */
GEN_FRAME uint GEN_THISCALL F_00b7e5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7e5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * puVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  uVar2 = *(ushort *)((int)param_1 + 6);
  if (((uVar2 & 0x7000) == 0) && ((uVar2 & 0xfc) == 0)) {
    uVar3 = *(undefined4 *)((int)this + 0x8014);
    *(ushort *)((int)param_1 + 6) = uVar2 & 0xff3f | 0x3c;
    uVar6 = (ulonglong)(byte)((char)uVar3 * '\n');
    lVar4 = ((ulonglong)((uVar6 < 0x40) ? ((0x3ffL << uVar6)) : 0));
    uVar8 = (uint)lVar4;
    uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
    param_1[1] = ~uVar7 & param_1[1] | uVar7;
    *param_1 = ~uVar8 & *param_1 | uVar8;
    return uVar8;
  }
  puVar1 = (uint *)((int)this + 0x7fb8);
  uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar7 = 0x3ff;
  if (uVar8 < *(uint *)((int)this + 0x7fbc)) {
    *(undefined4 *)((int)this + uVar8 * 8 + 4) = param_2;
    *(undefined4 *)((int)this + uVar8 * 8 + 8) = param_3;
    *(undefined4 *)((int)this + uVar8 * 4 + 0x1fe4) = 0;
    uVar7 = uVar8 & 0xffff;
  }
  bVar9 = (char)*(undefined4 *)((int)this + 0x8014) * '\n';
  lVar4 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? (((ulonglong)(uVar7 & 0x3ff) << (ulonglong)bVar9)) : 0));
  lVar5 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? ((0x3ffL << (ulonglong)bVar9)) : 0));
  *param_1 = (uint)lVar4 | ~(uint)lVar5 & *param_1;
  uVar8 = (uint)((ulonglong)lVar4 >> 0x20) | ~(uint)((ulonglong)lVar5 >> 0x20) & param_1[1];
  param_1[1] = uVar8;
  return uVar8;
}

/* ref: FUN_00b7e680 */
GEN_FRAME uint GEN_THISCALL F_00b7e680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7e680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  uVar2 = *(ushort *)((int)param_1 + 6);
  if (((uVar2 & 0x7000) == 0) && ((uVar2 & 0xfc) == 0)) {
    uVar3 = *(undefined4 *)((int)this + 0x8014);
    *(ushort *)((int)param_1 + 6) = uVar2 & 0xff3f | 0x3c;
    uVar6 = (ulonglong)(byte)((char)uVar3 * '\n');
    lVar4 = ((ulonglong)((uVar6 < 0x40) ? ((0x3ffL << uVar6)) : 0));
    uVar8 = (uint)lVar4;
    uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
    param_1[1] = ~uVar7 & param_1[1] | uVar7;
    *param_1 = ~uVar8 & *param_1 | uVar8;
    return uVar8;
  }
  puVar1 = (uint *)((int)this + 0x7fb8);
  uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar7 = 0x3ff;
  if (uVar8 < *(uint *)((int)this + 0x7fbc)) {
    *(undefined4 *)((int)this + uVar8 * 4 + 0x1fe4) = param_2;
    uVar7 = uVar8 & 0xffff;
  }
  bVar9 = (char)*(undefined4 *)((int)this + 0x8014) * '\n';
  lVar4 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? (((ulonglong)(uVar7 & 0x3ff) << (ulonglong)bVar9)) : 0));
  lVar5 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? ((0x3ffL << (ulonglong)bVar9)) : 0));
  *param_1 = (uint)lVar4 | ~(uint)lVar5 & *param_1;
  uVar8 = (uint)((ulonglong)lVar4 >> 0x20) | ~(uint)((ulonglong)lVar5 >> 0x20) & param_1[1];
  param_1[1] = uVar8;
  return uVar8;
}

/* ref: FUN_00b7e750 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b7e750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7e750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float * pfVar13;
  float * pfVar14;
  float10 fVar15;
  float10 fVar16;
  
  fVar15 = (float10)REFG(float, 0x10920a4);
  uVar12 = (*(int *)((int)this + 0x8014) + 1U) % 5;
  (*(char *)(gen_frame + 0x2f)) = '\x01';
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = 3;
  (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(3,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0x18))));
  *(uint *)((int)this + 0x8014) = uVar12;
  iVar7 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(float * PTR32 *)(gen_frame + 0x24)) = (float *)(iVar7 + 0x10);
  (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((int)this + 0x7fd0);
  do {
    uVar9 = 0;
    pfVar13 = (*(float * PTR32 *)(gen_frame + 0x24));
    pfVar14 = (*(float * PTR32 *)(gen_frame + 0x28));
    do {
      if ((!GEN_ISNAN((float10)((float)GEN_TOF(ABS((float10)(float)((float10)*pfVar13 - (float10)*pfVar14))))) &&
          !GEN_ISNAN(fVar15)) &&
          !((float10)((float)GEN_TOF(ABS((float10)(float)((float10)*pfVar13 - (float10)*pfVar14)))) <= fVar15))
      {
        (*(char *)(gen_frame + 0x2f)) = '\0';
        break;
      }
      uVar9 = uVar9 + 1;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar14 + 1;
    } while (uVar9 < 3);
    (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) + 4;
    (*(float * PTR32 *)(gen_frame + 0x24)) = (*(float * PTR32 *)(gen_frame + 0x24)) + 4;
    iVar10 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) - 1;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = iVar10;
    (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(iVar10,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0x18))));
    if (iVar10 == 0) {
      if ((*(char *)(gen_frame + 0x2f)) != '\0') {
        fVar2 = *(float *)((int)this + 0x8000);
        fVar3 = *(float *)(iVar7 + 0x40);
        fVar4 = *(float *)((int)this + 0x8004);
        fVar5 = *(float *)(iVar7 + 0x44);
        fVar6 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x8008) - (float10)*(float *)(iVar7 + 0x48))))
        ;
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = fVar6;
        (*(ulonglong *)(gen_frame + 0x18)) = (ulonglong)(uint)gen_fl2bits(fVar6);
        fVar15 = (float10)(float)((float10)fVar4 - (float10)fVar5);
        fVar16 = (float10)(float)((float10)fVar2 - (float10)fVar3);
        if (*(double *)&REFG(undefined, 0x1090710) <
            (double)((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 + (fVar16 * fVar16 + fVar15 * fVar15)))))
        {
          (*(char *)(gen_frame + 0x2f)) = '\0';
        }
      }
      pfVar13 = (float *)(iVar7 + 0x10);
      pfVar14 = (float *)((int)this + 0x7fd0);
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
        *pfVar14 = *pfVar13;
        pfVar13 = pfVar13 + 1;
        pfVar14 = pfVar14 + 1;
      }
      uVar11 = 0;
      *(uint *)((int)this + 0x8010) =
           ~(1 << (sbyte)uVar12) & *(uint *)((int)this + 0x8010) |
           (uint)((*(char *)(gen_frame + 0x2f)) != '\0') << (sbyte)uVar12;
      uVar9 = *(int *)((int)this + 0x7fc4) + 0x1fU >> 5;
      if (uVar9 != 0) {
        do {
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x7fc0) + uVar11 * 4))) = 0;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      if (*(int *)((int)this + 0x8010) == -1) {
        iVar7 = *(int *)((int)this + 0x7fbc);
        uVar9 = *(uint *)((int)this + uVar12 * 4 + 0x7fa4);
        (*(uint *)(gen_frame + 0xc)) = 0;
        if (uVar9 == 0) {
          *(undefined4 *)((int)this + 0x7fb8) = 0;
          return 0;
        }
        do {
          iVar10 = *(int *)((int)this + (*(uint *)(gen_frame + 0xc)) * 4 + iVar7 * uVar12 * 4 + 0x2fd4);
          if ((*(int *)(iVar10 + 0x1c) != 0) &&
             (uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar10 + 0x1c) + 0x1c))))
                                 (*(int * PTR32 *)(iVar10 + 0x1c) GEN_EDX_ARG,&(*(ulonglong *)(gen_frame + 0x18)),4,0), uVar11 == 0)) {
            if (*(int *)(iVar10 + 0x18) == 3) {
              (*(ulonglong *)(gen_frame + 0x18)) = ((*(ulonglong *)(gen_frame + 0x18)) * 1000) / CONCAT44(REFG(undefined4, 0x1375a34),REFG(undefined4, 0x1375a30));
            }
            puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x7fc0) + ((*(uint *)(gen_frame + 0xc)) >> 5) * 4)));
            bVar8 = (byte)(*(uint *)(gen_frame + 0xc)) & 0x1f;
            *puVar1 = (uint)((uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0x18))) < 5) << bVar8 |
                      ~(1 << bVar8) & *puVar1;
          }
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        } while ((*(uint *)(gen_frame + 0xc)) < uVar9);
      }
      *(undefined4 *)((int)this + 0x7fb8) = 0;
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b7e9b0 */
GEN_NOFRAME byte GEN_THISCALL F_00b7e9b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7e9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)((int)this + 0x7f9c) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x7f9c) + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 == 2) {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x7f9c) + 0x8c)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      if ((iVar1 < 8) && (*(int *)((int)this + 0x7fa0) != 0)) {
        piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x7fa0) + 0x88)));
        iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
        if (iVar1 == 2) {
          piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x7fa0) + 0x8c)));
          iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
          return iVar1 < 8;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00b7ea20 */
GEN_NOFRAME uint GEN_THISCALL F_00b7ea20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7ea20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined * pvVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined * pvVar14;
  byte bVar15;
  undefined3 extraout_var = 0;
  float * pfVar16;
  undefined4 * puVar17;
  uint uVar18;
  uint * puVar19;
  int iVar20;
  float * pfVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100);
  (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this;
  bVar15 = F_00b7e9b0(this GEN_EDX_FWD);
  uVar18 = CONCAT31(extraout_var,bVar15);
  if (bVar15 != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
    *(undefined4 *)((int)pvVar10 + 8) = 0xf617ffff;
    (*(undefined * PTR32 *)(gen_frame + 0x94)) = pvVar10;
    if (*(int *)(REFG(int, 0x137127c) + 0x66f4) != 0) {
      *((undefined4 *)GEN_TOP(((int)pvVar10 + *(int *)((int)this + 0x7f94) * 4 + 0xa8))) =
           *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x120)));
    }
    uVar13 = REFG(undefined4, 0x1302370);
    uVar12 = REFG(undefined4, 0x1302360);
    uVar18 = REFG(undefined4, 0x1302350);
    (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x1302370) & 0xfffffffb;
    uVar11 = *(undefined4 *)((int)this + 0x7f84);
    *(uint *)((int)pvVar10 + 0x6c) = *(uint *)((int)pvVar10 + 0x6c) & 0x800000ff;
    *(undefined1 *)((int)pvVar10 + 0x6c) = 0xc;
    *(uint *)((int)pvVar10 + 0x6c) = *(uint *)((int)pvVar10 + 0x6c) & 0x7fffffff;
    *(undefined4 *)((int)pvVar10 + 0x68) = uVar11;
    *(undefined4 *)((int)pvVar10 + 0x48) = *(undefined4 *)((int)this + 0x7f88);
    *(undefined4 *)((int)pvVar10 + 0x40) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x7f9c) + 0x98)));
    *(undefined4 *)((int)pvVar10 + 0x60) = 0;
    *(undefined4 *)((int)pvVar10 + 0x44) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x7fa0) + 0x9c)));
    *(undefined4 *)((int)pvVar10 + 0x60) = 0;
    *(undefined4 *)((int)pvVar10 + 0x4c) = *(undefined4 *)((int)this + 0x7f90);
    *(uint *)((int)pvVar10 + 0x38) = uVar18 & 0x7fffff;
    *(uint *)((int)pvVar10 + 0x50) = uVar12 & 0x1d;
    uVar18 = REFG(undefined4, 0x1302368);
    *(uint *)((int)pvVar10 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
    *(uint *)((int)pvVar10 + 0x58) = uVar18 & 0xfe000000;
    *(uint *)((int)pvVar10 + 0x3c) = uVar13 & 0x7ffffffb;
    puVar19 = (uint *)((int)this + 0x7fbc);
    puVar17 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x8014) * *(uint *)((int)this + 0x7fbc) * 4 + 0x2fd4
              )));
    if (*(uint *)((int)this + 0x7fb8) < *(uint *)((int)this + 0x7fbc)) {
      puVar19 = (uint *)((int)this + 0x7fb8);
    }
    (*(uint *)(gen_frame + 0xa8)) = *puVar19;
    (*(uint *)(gen_frame + 0xa0)) = 0;
    if (*puVar19 != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)((int)this + 0x1fe4);
      (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = puVar17;
      (*(int *)(gen_frame + 0x90)) = ((int)this + 0x1fe4) - (int)puVar17;
      do {
        fVar24 = (float10)REFG(double, 0x1088108);
        fVar23 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        fVar22 = (float10)0;
        if (*(int *)((*(int *)(gen_frame + 0x90)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0xac))) == 0) {
          pfVar16 = *(float * PTR32 *)((*(uint *)(gen_frame + 0xa0)) * 8 + 8 + (int)this);
          pfVar21 = *(float * PTR32 *)((*(uint *)(gen_frame + 0xa0)) * 8 + 4 + (int)this);
          (*(float *)(gen_frame + 0x60)) = (float)((float10)*pfVar16 + fVar23);
          fVar1 = pfVar16[1];
          (*(float *)(gen_frame + 0x64)) = (float)((float10)fVar1 + fVar23);
          fVar2 = pfVar16[2];
          (*(undefined4 *)(gen_frame + 0xb4)) = 0;
          (*(undefined4 *)(gen_frame + 0xb8)) = 0;
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(float *)(gen_frame + 0x68)) = (float)(fVar23 + (float10)fVar2);
          (*(undefined4 *)(gen_frame + 0xc8)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(float *)(gen_frame + 0xb0)) = (float)((float10)*pfVar16 + fVar23);
          (*(undefined4 *)(gen_frame + 0xd4)) = 0;
          (*(float *)(gen_frame + 0xc4)) = (float)((float10)fVar1 + fVar23);
          (*(float *)(gen_frame + 0xd8)) = (float)(fVar23 + (float10)fVar2);
          (*(float *)(gen_frame + 0xe0)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe4)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe8)) = (float)fVar22;
          F_004efe70(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x1302cf0);
          (*(float *)(gen_frame + 0xe0)) = (float)((float10)(*(float *)(gen_frame + 0xe0)) + (float10)*pfVar21);
          (*(float *)(gen_frame + 0xe4)) = (float)((float10)pfVar21[1] + (float10)(*(float *)(gen_frame + 0xe4)));
          fVar22 = (float10)pfVar21[2] + (float10)(*(float *)(gen_frame + 0xe8));
        }
        else {
          pfVar16 = (float *)*(*(undefined4 * PTR32 *)(gen_frame + 0xa4));
          (*(float *)(gen_frame + 0x50)) = (float)((float10)pfVar16[4] - (float10)*pfVar16);
          (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar16[5] - (float10)pfVar16[1]);
          (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar16[6] - (float10)pfVar16[2]);
          fVar1 = ((float)GEN_TOF(((float10)(float)((float10)pfVar16[4] - (float10)*pfVar16) * fVar24)));
          (*(float *)(gen_frame + 0x40)) = fVar1;
          fVar2 = ((float)GEN_TOF(((float10)(float)((float10)pfVar16[5] - (float10)pfVar16[1]) * fVar24)));
          (*(float *)(gen_frame + 0x44)) = fVar2;
          fVar3 = ((float)GEN_TOF(((float10)(float)((float10)pfVar16[6] - (float10)pfVar16[2]) * fVar24)));
          (*(float *)(gen_frame + 0x48)) = fVar3;
          fVar1 = (float)((float10)fVar1 + fVar23);
          (*(float *)(gen_frame + 0x80)) = fVar1;
          fVar2 = (float)((float10)fVar2 + fVar23);
          (*(float *)(gen_frame + 0x84)) = fVar2;
          fVar3 = (float)((float10)fVar3 + fVar23);
          (*(float *)(gen_frame + 0x88)) = fVar3;
          fVar4 = pfVar16[4];
          fVar5 = *pfVar16;
          (*(float *)(gen_frame + 0x30)) = (float)((float10)fVar4 + (float10)fVar5);
          fVar6 = pfVar16[5];
          fVar7 = pfVar16[1];
          (*(float *)(gen_frame + 0x34)) = (float)((float10)fVar6 + (float10)fVar7);
          fVar8 = pfVar16[6];
          fVar9 = pfVar16[2];
          (*(float *)(gen_frame + 0xb0)) = fVar1;
          (*(undefined4 *)(gen_frame + 0xb4)) = 0;
          (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar8 + (float10)fVar9);
          (*(undefined4 *)(gen_frame + 0xb8)) = 0;
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(undefined4 *)(gen_frame + 0xc8)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(undefined4 *)(gen_frame + 0xd4)) = 0;
          (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((float10)(float)((float10)fVar4 + (float10)fVar5) * fVar24)));
          (*(float *)(gen_frame + 0xc4)) = fVar2;
          (*(float *)(gen_frame + 0xd8)) = fVar3;
          (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((float10)(float)((float10)fVar6 + (float10)fVar7) * fVar24)));
          (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((float10)(float)((float10)fVar8 + (float10)fVar9) * fVar24)));
          (*(float *)(gen_frame + 0xe0)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe4)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe8)) = (float)fVar22;
          F_004efe70(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,0x1302cf0);
          (*(float *)(gen_frame + 0xe0)) = (float)((float10)(*(float *)(gen_frame + 0xe0)) + (float10)(*(float *)(gen_frame + 0x70)));
          (*(float *)(gen_frame + 0xe4)) = (float)((float10)(*(float *)(gen_frame + 0xe4)) + (float10)(*(float *)(gen_frame + 0x74)));
          fVar22 = (float10)(*(float *)(gen_frame + 0xe8)) + (float10)(*(float *)(gen_frame + 0x78));
        }
        (*(float *)(gen_frame + 0xe8)) = (float)fVar22;
        pfVar16 = (float *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x7f8c) GEN_EDX_ARG,0,0,2);
        pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0x9c));
        pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x94));
        if (pfVar16 == (float *)0x0) break;
        ((float *)(gen_frame + 0x0))[0] = (*(float *)(gen_frame + 0xb0));
        ((float *)(gen_frame + 0x0))[1] = gen_bits2f((*(undefined4 *)(gen_frame + 0xc0)));
        ((float *)(gen_frame + 0x0))[2] = gen_bits2f((*(undefined4 *)(gen_frame + 0xd0)));
        ((float *)(gen_frame + 0x0))[3] = (*(float *)(gen_frame + 0xe0));
        (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0xb4));
        (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0xc4));
        (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0xd4));
        (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xe4));
        (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)(gen_frame + 0xb8));
        (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0xc8));
        (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0xd8));
        (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0xe8));
        pfVar21 = ((float *)(gen_frame + 0x0));
        for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 - 1) {
          *pfVar16 = *pfVar21;
          pfVar21 = pfVar21 + 1;
          pfVar16 = pfVar16 + 1;
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x9c)) + 0x7f8c) + 0x24))) = 0;
        (*(undefined4 *)(gen_frame + 0x98)) = *(*(undefined4 * PTR32 *)(gen_frame + 0xac));
        puVar17 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,0xc);
        if (puVar17 != (undefined4 *)0x0) {
          *puVar17 = 0xc;
          puVar17[1] = (*(undefined4 *)(gen_frame + 0x98));
          puVar17[2] = 2;
          F_004d4810(pvVar10 GEN_EDX_ARG,puVar17);
        }
        *((undefined4 *)GEN_TOP(((int)pvVar10 + *(int *)((int)pvVar14 + 0x7f98) * 4 + 0xa8))) =
             *(undefined4 *)((int)pvVar14 + 0x7f8c);
        puVar17 = (undefined4 *)F_004d4760(pvVar10 GEN_EDX_ARG,0x54);
        if (puVar17 != (undefined4 *)0x0) {
          *puVar17 = 5;
          puVar17[1] = 5;
          puVar17[2] = 0;
          puVar17[3] = 0;
          puVar17[4] = 8;
          puVar17[5] = 0;
          puVar17[6] = 0x24;
          bVar15 = F_004dc830(pvVar10 GEN_EDX_ARG,puVar17 + 7);
          if (bVar15 != 0) {
            F_004d4810(pvVar10 GEN_EDX_ARG,puVar17);
          }
        }
        uVar11 = *(*(undefined4 * PTR32 *)(gen_frame + 0xac));
        puVar17 = (undefined4 *)F_004d4760(pvVar10 GEN_EDX_ARG,0xc);
        if (puVar17 != (undefined4 *)0x0) {
          *puVar17 = 0xc;
          puVar17[1] = uVar11;
          puVar17[2] = 1;
          F_004d4810(pvVar10 GEN_EDX_ARG,puVar17);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) + 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = (*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 1;
        uVar18 = (*(uint *)(gen_frame + 0xa0)) + 1;
        (*(uint *)(gen_frame + 0xa0)) = uVar18;
        this = (*(undefined * PTR32 *)(gen_frame + 0x9c));
      } while (uVar18 < (*(uint *)(gen_frame + 0xa8)));
    }
    uVar18 = *(uint *)((int)this + 0x8014);
    *(uint *)((int)this + uVar18 * 4 + 0x7fa4) = (*(uint *)(gen_frame + 0xa8));
  }
  F_00c47745((*(uint *)(gen_frame + 0xfc)) ^ (uint)(uint)(gen_frame + 0x100) GEN_EDX_ARG);
  return uVar18;
}

/* ref: FUN_00b7efa0 */
GEN_FRAME uint GEN_THISCALL F_00b7efa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7efa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return *((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4))) >> ((byte)param_1 & 0x1f) & 1;
}

/* ref: FUN_00b7efc0 */
GEN_FRAME uint GEN_THISCALL F_00b7efc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7efc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = (char)param_1 * '\n';
  lVar1 = ((ulonglong)(((ulonglong)bVar4 < 0x40) ? ((0x3ffL << (ulonglong)bVar4)) : 0));
  lVar2 = ((ulonglong)(((ulonglong)bVar4 < 0x40) ? (((ulonglong)(param_2 & 0x3ff) << (ulonglong)bVar4)) : 0));
  uVar3 = ~(uint)((ulonglong)lVar1 >> 0x20) & *(uint *)((int)this + 4) |
          (uint)((ulonglong)lVar2 >> 0x20);
  *(uint *)this = ~(uint)lVar1 & *(uint *)this | (uint)lVar2;
  *(uint *)((int)this + 4) = uVar3;
  return uVar3;
}

/* ref: FUN_00b7f010 */
GEN_FRAME uint GEN_THISCALL F_00b7f010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar3;
  longlong lVar2;
  
  *(ushort *)((int)this + 6) = *(ushort *)((int)this + 6) & 0xff3f | 0x3c;
  lVar2 = ((ulonglong)(((ulonglong)(byte)((char)param_1 * '\n') < 0x40) ? ((0x3ffL << (ulonglong)(byte)((char)param_1 * '\n'))) : 0));
  uVar1 = (uint)lVar2;
  uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
  *(uint *)((int)this + 4) = ~uVar3 & *(uint *)((int)this + 4) | uVar3;
  *(uint *)this = ~uVar1 & *(uint *)this | uVar1;
  return uVar1;
}

/* ref: Singleton_VOcclusionCullingManager_Culling_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7f080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62a0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7f0b0 */
GEN_FRAME uint GEN_THISCALL F_00b7f0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7f0b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_2 != 0) {
    uVar2 = param_2 + 0x1fU >> 5;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,uVar2 * 4,4)));
    piVar3 = piVar1;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar3 = -(uint)((char)param_1 != '\0');
        piVar3 = piVar3 + 1;
      }
    }
    *(int *)((int)this + 4) = param_2;
    *(int * PTR32 *)this = piVar1;
    return (uint)this;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return (uint)this;
}

/* ref: FUN_00b7f130 */
GEN_NOFRAME uint GEN_THISCALL F_00b7f130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62a8));
  uVar1 = 0;
  if (*(int *)((int)this + 0x7fc0) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*(int *)((int)this + 0x7fc0));
    *(undefined4 *)((int)this + 0x7fc0) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62a0));
  return uVar1;
}

/* ref: Client::Graphics::Culling::OcclusionCullingManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7f170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62a8));
  if (*(int *)(this + 0x7fc0) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*(int *)(this + 0x7fc0));
    *(undefined4 *)(this + 0x7fc0) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62a0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7f230 */
GEN_FRAME byte GEN_THISCALL F_00b7f230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00b7f280 */
GEN_FRAME uint F_00b7f280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7f280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b7f2e0 */
GEN_NOFRAME uint GEN_STDCALL F_00b7f2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7f2e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar2 = *(ushort *)(param_1 + 0xff0);
  uVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = uVar5 & 0xffff;
      uVar3 = uVar4 * 2;
      fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + uVar4 * 0x10) - (float10)*param_2)));
      fVar7 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 4 + uVar4 * 0x10) - (float10)param_2[1]
                              )));
      fVar8 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 8 + uVar4 * 0x10) - (float10)param_2[2]
                              )));
      fVar1 = ((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6))));
      if ((float10)fVar1 < (float10)*(float *)&REFG(undefined, 0x14c58b0)) {
        uVar3 = F_00b14350(param_3 GEN_EDX_ARG,(uint)*(ushort *)(param_1 + 0xf00 + uVar4 * 2),fVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar3;
}

/* ref: FUN_00b7f390 */
GEN_NOFRAME uint GEN_THISCALL F_00b7f390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f390u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f62d0));
  in_ecx[0x18] = (*(undefined * PTR32 (*)[1])REFP(0x10f62c8));
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x2f] = 0;
  in_ecx[0x30] = 0;
  in_ecx[0x31] = 0;
  *(undefined2 *)(in_ecx + 0x37) = 0;
  in_ecx[0xc] = in_ecx[0xc] & 0xfffffffc;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[0x33] = GEN_FLT_TO(in_ecx[0x33], REFG(float, 0x1087f04));
  in_ecx[0x34] = uVar1;
  in_ecx[0x35] = uVar1;
  in_ecx[0x36] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00b7f420 */
GEN_FRAME byte GEN_THISCALL F_00b7f420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (0x7f < *(byte *)((int)this + 0xdd)) {
    return 0;
  }
  *((short *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0xdd) * 2 + 0xde))) =
       (short)(param_1 - *(int *)(REFG(int, 0x1370c1c) + 8) >> 4);
  *(char *)((int)this + 0xdd) = *(char *)((int)this + 0xdd) + '\x01';
  return 1;
}

/* ref: FUN_00b7f460 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7f460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  short * psVar3;
  
  uVar2 = (uint)*(byte *)((int)this + 0xdd);
  if ((uVar2 != 0) && (uVar1 = 0, uVar2 != 0)) {
    psVar3 = (short *)((int)this + 0xde);
    while (*psVar3 != (short)(param_1 - *(int *)(REFG(int, 0x1370c1c) + 8) >> 4)) {
      uVar1 = uVar1 + 1;
      psVar3 = psVar3 + 1;
      if (uVar2 <= uVar1) {
        return 0;
      }
    }
    if (uVar1 != 0xffffffff) {
      if (uVar1 != uVar2 - 1) {
        *(undefined2 *)((int)this + uVar1 * 2 + 0xde) =
             *((undefined2 *)GEN_TOP(((int)this + (uVar2 - 1) * 2 + 0xde)));
      }
      *(char *)((int)this + 0xdd) = *(char *)((int)this + 0xdd) - 1;
    }
  }
  return 0;
}

/* ref: FUN_00b7f4d0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7f4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_1c;
  ushort * local_14;
  
  iVar2 = REFG(int, 0x1370c1c);
  local_1c = (uint)*(byte *)((int)this + 0xdd);
  uVar4 = 0;
  if (local_1c != 0) {
    local_14 = (ushort *)((int)this + 0xde);
    do {
      uVar1 = *local_14;
      pfVar3 = (float *)F_00b81f10(((undefined *)GEN_TOP(((uint)uVar1 * 0x10 + *(int *)(iVar2 + 8)))) GEN_EDX_FWD);
      fVar5 = (float10)((float)GEN_TOF(((float10)*pfVar3 - (float10)*(float *)((int)this + 0x50))));
      fVar6 = (float10)((float)GEN_TOF(((float10)pfVar3[1] - (float10)*(float *)((int)this + 0x54))));
      fVar7 = (float10)((float)GEN_TOF(((float10)pfVar3[2] - (float10)*(float *)((int)this + 0x58))));
      uVar4 = F_00b14350(iVar2 GEN_EDX_ARG,(uint)uVar1,
                           ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5)))));
      local_14 = local_14 + 1;
      local_1c = local_1c - 1;
    } while (local_1c != 0);
  }
  return uVar4;
}

/* ref: FUN_00b7f580 */
GEN_NOFRAME uint GEN_THISCALL F_00b7f580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7f580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)((int)this + 0x30);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x14);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1370c1c);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x18);
  if ((bVar1 & 2) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x20);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x24);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x28);
  }
  bVar1 = F_00b16570(param_2 GEN_EDX_FWD,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
    uVar2 = param_1[1] - *param_1 >> 2;
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    if (uVar2 != 0) {
      do {
        F_00b7f2e0(*(undefined4 *)(*param_1 + (*(uint *)(gen_frame + 0x1c)) * 4),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)));
        uVar2 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar2;
      } while (uVar2 < (*(uint *)(gen_frame + 0x14)));
    }
    (*(uint *)(gen_frame + 0x1c)) = 0;
    uVar2 = param_1[5] - param_1[4] >> 2;
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    if (uVar2 != 0) {
      do {
        F_00b7f2e0(*(undefined4 *)(param_1[4] + (*(uint *)(gen_frame + 0x1c)) * 4),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)));
        uVar2 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar2;
      } while (uVar2 < (*(uint *)(gen_frame + 0x14)));
    }
    (*(uint *)(gen_frame + 0x1c)) = 0;
    uVar3 = param_1[9] - param_1[8] >> 2;
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        F_00b7f2e0(*(undefined4 *)(param_1[8] + (*(uint *)(gen_frame + 0x1c)) * 4),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)));
        uVar2 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar2;
      } while (uVar2 < (*(uint *)(gen_frame + 0x14)));
    }
  }
  return uVar2;
}

/* ref: FUN_00b7f6c0 */
GEN_FRAME uint GEN_THISCALL F_00b7f6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b7f580(this GEN_EDX_FWD,*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00b7f6e0 */
GEN_NOFRAME byte GEN_THISCALL F_00b7f6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = F_00b7fc40((undefined *)((int)this + 0x60) GEN_EDX_FWD,*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
  if (bVar4 == 0) {
    return 0;
  }
  puVar1 = (uint *)((int)this + 0x6c);
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (*(uint *)((int)this + 0x68) <= uVar3) {
    *(undefined4 *)((int)this + 200) = 0;
    return 0;
  }
  iVar2 = *(int *)((int)this + 100) + uVar3 * 0x14;
  *(int *)((int)this + 200) = iVar2;
  return iVar2 != 0;
}

/* ref: FUN_00b7f740 */
GEN_NOFRAME uint GEN_THISCALL F_00b7f740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b7fda0((undefined *)((int)this + 0x60) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b7f750 */
GEN_FRAME uint GEN_THISCALL F_00b7f750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pvVar5 = REFG(void * PTR32, 0x1370c1c);
  (*(uint *)(gen_frame + 0x11008)) = 0xb7f75d;
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(uint *)(gen_frame + 0x11008)) = uVar6;
  if ((*(byte *)((int)this + 0x30) & 1) != 0) {
    uVar7 = F_00b136e0(REFG(void * PTR32, 0x1370c1c) GEN_EDX_FWD,((int *)(gen_frame + 0x10008)));
    uVar6 = 0;
    if (uVar7 != 0) {
      if ((*(byte *)((int)this + 0x30) & 2) == 0) {
        *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x10);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x14);
        uVar3 = *(undefined4 *)((int)this + 0x18);
      }
      else {
        *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x20);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x24);
        uVar3 = *(undefined4 *)((int)this + 0x28);
      }
      *(undefined4 *)((int)this + 0x58) = uVar3;
      iVar4 = *(int *)((int)this + 200);
      uVar6 = 0;
      if (uVar7 != 0) {
        do {
          if (7 < *(uint *)(iVar4 + 8)) {
            if (*(uint * PTR32 *)(iVar4 + 0x10) != (uint *)0x0) {
              **(uint * PTR32 *)(iVar4 + 0x10) = *(uint *)(iVar4 + 8);
            }
            uVar8 = F_00b7ffe0(*(undefined * PTR32 *)(iVar4 + 0xc) GEN_EDX_ARG);
            *(uint *)(iVar4 + 0x10) = uVar8;
            *(uint *)(iVar4 + 4) = uVar8 + 0x10;
            *(undefined4 *)(iVar4 + 8) = 0;
          }
          piVar1 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) + *(int *)(iVar4 + 8) * 8)));
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
          *piVar1 = *((int *)GEN_TOP((*(int *)((int)pvVar5 + 0x3930) + 4))) + ((int *)(gen_frame + 0x10008))[(int)(uVar6)] * 0x48;
          piVar2 = ((int *)(gen_frame + 0x10008)) + uVar6;
          uVar6 = uVar6 + 1;
          piVar1[1] = *piVar2 * 0x20 + *((int *)GEN_TOP((*(int *)((int)pvVar5 + 0x3930) + 0xc)));
        } while (uVar6 < uVar7);
      }
      F_00b7fe50((undefined *)((int)this + 0x60) GEN_EDX_ARG,this,((code *)REFP(0xb7f6c0)),1);
      uVar6 = F_00b7f4d0(this GEN_EDX_ARG);
      *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffffd;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00b7f880 */
GEN_FRAME uint GEN_THISCALL F_00b7f880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) + param_2 * 0x48;
}

/* ref: FUN_00b7f8a0 */
GEN_FRAME uint GEN_THISCALL F_00b7f8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f8a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *(int *)(in_ecx + 0xc);
}

/* ref: FUN_00b7f8b0 */
GEN_FRAME uint GEN_THISCALL F_00b7f8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f8b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *((int *)GEN_TOP((*(int *)(in_ecx + 0x3930) + 0xc)));
}

/* ref: FUN_00b7f8d0 */
GEN_FRAME uint GEN_THISCALL F_00b7f8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((int *)GEN_TOP((*(int *)((int)this + 0x3930) + 4))) + param_1 * 0x48;
}

/* ref: FUN_00b7f920 */
GEN_FRAME uint GEN_THISCALL F_00b7f920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb7f920u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0xcc + param_2 * 4) = (float)((float10)param_3 * (float10)param_3);
  return param_2;
}

/* ref: FUN_00b7f940 */
GEN_FRAME uint GEN_THISCALL F_00b7f940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb7f940u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0xd4 + param_2 * 4) = (float)((float10)param_3 * (float10)param_3);
  return param_2;
}

/* ref: Singleton_VStreamingManager_Streaming_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7f980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62b8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7f9e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7f9e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7f9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00b7fab0 */
GEN_FRAME uint GEN_THISCALL F_00b7fab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7fab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb7f280));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b7fad0 */
GEN_FRAME uint F_00b7fad0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Streaming::StreamingManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7faf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7faf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x60) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62c8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62b8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7fb20 */
GEN_FRAME uint F_00b7fb20(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fb20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b7fb40 */
GEN_FRAME uint F_00b7fb40(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fb40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b7fb60 */
GEN_FRAME uint F_00b7fb60(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fb60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b7fb80 */
GEN_FRAME uint F_00b7fb80(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fb80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b7fbe0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b7fbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7fbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b7f9e0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00b7fbf0 */
GEN_FRAME uint F_00b7fbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fbf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: JobSystem_VStreamingManager_Streaming_Graphics_Client_UStreamingJob::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7fc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7fc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62c8));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00b7fc40 */
GEN_FRAME byte GEN_THISCALL F_00b7fc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7fc40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62c0));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xb7f280));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xb7fbe0));
    uVar5 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b7fda0 */
GEN_FRAME uint GEN_THISCALL F_00b7fda0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7fda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b7fe50 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7fe50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7fe50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10));
    F_00b7f9e0(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
    *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if ((char)param_3 != '\0') {
    piVar5 = (int *)((int)this + 0x1c);
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: JobQueue_JobSystem_VStreamingManager_Streaming_Graphics_Client::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b7ff20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this - 4);
    uVar1 = (int)this - 4;
    puVar3 = (undefined4 *)((int)this + iVar2 * 0x14);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62c0));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62c0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00b7ff90 */
GEN_FRAME uint GEN_THISCALL F_00b7ff90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ff90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,0xa00,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile long *)(puVar2), (long)(uVar5));
  return uVar4;
}

/* ref: FUN_00b7ffe0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7ffe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7ffe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x50 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,0xa00,0x10);
    _InterlockedExchange((volatile long *)(((uint *)((int)this + uVar6 * 4 + 0x1c))), (long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x50 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00b80050 */
GEN_NOFRAME uint GEN_THISCALL F_00b80050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb80050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00b7ffe0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD);
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return *(int *)((int)this + 4) + iVar1 * 8;
}

/* ref: FUN_00b800a0 */
GEN_FRAME byte GEN_THISCALL F_00b800a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb800a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b800e0 */
GEN_NOFRAME uint GEN_THISCALL F_00b800e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb800e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f6310));
  in_ecx[1] = (*(undefined * PTR32 (*)[1])REFP(0x10f62f8));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = (*(undefined * PTR32 (*)[1])REFP(0x10f6300));
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x32] = 0;
  in_ecx[0x33] = 0;
  in_ecx[0x34] = 0;
  in_ecx[0x35] = (*(undefined * PTR32 (*)[1])REFP(0x10f6308));
  in_ecx[0x36] = 0;
  in_ecx[0x37] = 0;
  in_ecx[0x38] = 0;
  in_ecx[0x39] = 0;
  in_ecx[0x3a] = 0;
  in_ecx[0x3b] = 0;
  in_ecx[0x4c] = 0;
  in_ecx[0x4d] = 0;
  in_ecx[0x4e] = 0;
  *(undefined2 *)(in_ecx + 0x4f) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_00b80190 */
GEN_FRAME uint GEN_STDCALL F_00b80190(unsigned int gen_a0)
{
  GEN_ENTER(0xb80190u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_1;
  iVar2 = piVar1[10];
  uVar3 = F_00a065a0();
  if (((char)uVar3 == '\0') || (*(char *)(iVar2 + 0xa8) < '\x01')) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00b801c0 */
GEN_FRAME uint GEN_STDCALL F_00b801c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb801c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  int iVar1;
  uint uVar2;
  
  this = (undefined *)*param_1;
  iVar1 = *(int *)((int)this + 0x98);
  uVar2 = F_00a065a0();
  if (((char)uVar2 == '\0') || (*(char *)(iVar1 + 0xa8) < '\x01')) {
    uVar2 = F_00b83820(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00b801f0 */
GEN_NOFRAME byte GEN_THISCALL F_00b801f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb801f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (uint *)((int)this + 0x10);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (uVar2 < *(uint *)((int)this + 0xc)) {
    iVar4 = *(int *)((int)this + 8) + uVar2 * 0x14;
  }
  else {
    iVar4 = 0;
  }
  iVar3 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *(int *)(iVar3 + 0x1c8) = iVar4;
  if (iVar4 != 0) {
    puVar1 = (uint *)((int)this + 0x78);
    uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
    if (uVar2 < *(uint *)((int)this + 0x74)) {
      iVar4 = *(int *)((int)this + 0x70) + uVar2 * 0x14;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(iVar3 + 0x1cc) = iVar4;
    if (iVar4 != 0) {
      puVar1 = (uint *)((int)this + 0xe0);
      uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
      if (*(uint *)((int)this + 0xdc) <= uVar2) {
        *(undefined4 *)(iVar3 + 0x1d0) = 0;
        return 0;
      }
      iVar4 = *(int *)((int)this + 0xd8) + uVar2 * 0x14;
      *(int *)(iVar3 + 0x1d0) = iVar4;
      return iVar4 != 0;
    }
  }
  return 0;
}

/* ref: FUN_00b802a0 */
GEN_FRAME uint GEN_THISCALL F_00b802a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb802a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  this_00 = (undefined *)*param_1;
  if (*(char *)((int)this + 0x13d) == '\0') {
    *(float *)((int)this_00 + 0x60) = GEN_FLT_TO(*(float *)((int)this_00 + 0x60), REFG(float, 0x1104960));
    F_00a05fd0(this_00 GEN_EDX_FWD,REFG(float, 0x1104960));
  }
  iVar1 = *(int *)((int)this_00 + 0x14);
  uVar2 = F_00a065a0();
  if (((char)uVar2 == '\0') || (*(char *)(iVar1 + 0xa8) < '\x01')) {
    if (*(char *)((int)this_00 + 0xc5) != '\0') {
      uVar2 = F_00bbc320(this_00 GEN_EDX_ARG,param_1[1]);
      return uVar2;
    }
    uVar2 = F_00bbcb10(this_00 GEN_EDX_ARG,param_1[1]);
  }
  return uVar2;
}

/* ref: FUN_00b80320 */
GEN_NOFRAME byte GEN_THISCALL F_00b80320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb80320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00b80fd0((undefined *)((int)this + 4) GEN_EDX_FWD,*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
  if (bVar1 != 0) {
    bVar1 = F_00b81340((undefined *)((int)this + 0x6c) GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
    if (bVar1 != 0) {
      bVar1 = F_00b816b0((undefined *)((int)this + 0xd4) GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
      if (bVar1 != 0) {
        bVar1 = F_00b801f0(this GEN_EDX_ARG);
        return bVar1 != 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b80380 */
GEN_NOFRAME uint GEN_THISCALL F_00b80380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb80380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00b81130((undefined *)((int)this + 4) GEN_EDX_FWD);
  F_00b814a0((undefined *)((int)this + 0x6c) GEN_EDX_ARG);
  uVar1 = F_00b81810((undefined *)((int)this + 0xd4) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00b803a0 */
GEN_NOFRAME byte GEN_THISCALL F_00b803a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb803a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(char *)((int)this + 0x13c) == '\0') {
    F_00b812b0((undefined *)((int)this + 4) GEN_EDX_FWD);
    F_00b81620((undefined *)((int)this + 0x6c) GEN_EDX_ARG);
    F_00b81990((undefined *)((int)this + 0xd4) GEN_EDX_ARG);
    *(byte *)((int)this + 0x13d) = *(byte *)((int)this + 0x13c);
    return *(byte *)((int)this + 0x13c);
  }
  F_00b811e0((undefined *)((int)this + 4) GEN_EDX_ARG,this,((code *)REFP(0xb80190)),1);
  F_00b81550((undefined *)((int)this + 0x6c) GEN_EDX_ARG,this,((code *)REFP(0xb802a0)),1);
  bVar1 = F_00b818c0((undefined *)((int)this + 0xd4) GEN_EDX_ARG,this,((code *)REFP(0xb801c0)),1);
  *(undefined1 *)((int)this + 0x13d) = *(undefined1 *)((int)this + 0x13c);
  return bVar1;
}

/* ref: FUN_00b80420 */
GEN_FRAME uint GEN_STDCALL F_00b80420(unsigned int gen_a0)
{
  GEN_ENTER(0xb80420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1c8)));
  if (7 < *(uint *)(iVar1 + 8)) {
    if (*(uint * PTR32 *)(iVar1 + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)(iVar1 + 0x10) = *(uint *)(iVar1 + 8);
    }
    uVar3 = F_00b81c60(*(undefined * PTR32 *)(iVar1 + 0xc) GEN_EDX_ARG);
    *(uint *)(iVar1 + 0x10) = uVar3;
    *(uint *)(iVar1 + 4) = uVar3 + 0x10;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar2 = *(int *)(iVar1 + 8);
  uVar3 = iVar2 + 1;
  *(uint *)(iVar1 + 8) = uVar3;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + iVar2 * 4))) = param_1;
  return uVar3;
}

/* ref: FUN_00b80480 */
GEN_FRAME uint GEN_STDCALL F_00b80480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb80480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1cc)));
  if (7 < *(uint *)(iVar2 + 8)) {
    if (*(uint * PTR32 *)(iVar2 + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)(iVar2 + 0x10) = *(uint *)(iVar2 + 8);
    }
    uVar3 = F_00b81cd0(*(undefined * PTR32 *)(iVar2 + 0xc) GEN_EDX_ARG);
    *(uint *)(iVar2 + 0x10) = uVar3;
    *(uint *)(iVar2 + 4) = uVar3 + 0x10;
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 8)));
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return param_2;
}

/* ref: FUN_00b804e0 */
GEN_FRAME uint GEN_STDCALL F_00b804e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb804e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1d0)));
  if (7 < *(uint *)(iVar1 + 8)) {
    if (*(uint * PTR32 *)(iVar1 + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)(iVar1 + 0x10) = *(uint *)(iVar1 + 8);
    }
    uVar3 = F_00b81d40(*(undefined * PTR32 *)(iVar1 + 0xc) GEN_EDX_ARG);
    *(uint *)(iVar1 + 0x10) = uVar3;
    *(uint *)(iVar1 + 4) = uVar3 + 0x10;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar2 = *(int *)(iVar1 + 8);
  uVar3 = iVar2 + 1;
  *(uint *)(iVar1 + 8) = uVar3;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + iVar2 * 4))) = param_1;
  return uVar3;
}

/* ref: FUN_00b80630 */
GEN_FRAME byte GEN_THISCALL F_00b80630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb80630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00b806a0 */
GEN_FRAME byte GEN_THISCALL F_00b806a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb806a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00b80710 */
GEN_FRAME byte GEN_THISCALL F_00b80710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb80710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00b80760 */
GEN_FRAME uint F_00b80760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb80760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b80780 */
GEN_FRAME uint F_00b80780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb80780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b807a0 */
GEN_FRAME uint F_00b807a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb807a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: Singleton_VBonePhysicsUpdater_Physics_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b80850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb80850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62d8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b808e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b808e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb808e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
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
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00b809b0 */
GEN_FRAME uint GEN_THISCALL F_00b809b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb809b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb80760));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b809d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b809d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb809d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00b80aa0 */
GEN_FRAME uint GEN_THISCALL F_00b80aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb80aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb80780));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b80ac0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b80ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb80ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
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
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00b80b90 */
GEN_FRAME uint GEN_THISCALL F_00b80b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb80b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb807a0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: Client::Graphics::Physics::BonePhysicsUpdater::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b80bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb80bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0xd4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f6308));
  *(undefined * PTR32 * PTR32 *)(this + 0x6c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f6300));
  *(undefined * PTR32 * PTR32 *)(this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62d8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b80c10 */
GEN_FRAME uint F_00b80c10(unsigned int gen_a0)
{
  GEN_ENTER(0xb80c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c30 */
GEN_FRAME uint F_00b80c30(unsigned int gen_a0)
{
  GEN_ENTER(0xb80c30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c50 */
GEN_FRAME uint F_00b80c50(unsigned int gen_a0)
{
  GEN_ENTER(0xb80c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c70 */
GEN_FRAME uint F_00b80c70(unsigned int gen_a0)
{
  GEN_ENTER(0xb80c70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c90 */
GEN_FRAME uint F_00b80c90(unsigned int gen_a0)
{
  GEN_ENTER(0xb80c90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80cb0 */
GEN_FRAME uint F_00b80cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb80cb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80cd0 */
GEN_FRAME uint F_00b80cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb80cd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b80cf0 */
GEN_FRAME uint F_00b80cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb80cf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80d10 */
GEN_FRAME uint F_00b80d10(unsigned int gen_a0)
{
  GEN_ENTER(0xb80d10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b80d30 */
GEN_FRAME uint F_00b80d30(unsigned int gen_a0)
{
  GEN_ENTER(0xb80d30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80d50 */
GEN_FRAME uint F_00b80d50(unsigned int gen_a0)
{
  GEN_ENTER(0xb80d50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b80d70 */
GEN_FRAME uint F_00b80d70(unsigned int gen_a0)
{
  GEN_ENTER(0xb80d70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80d90 */
GEN_FRAME uint F_00b80d90(unsigned int gen_a0)
{
  GEN_ENTER(0xb80d90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80db0 */
GEN_FRAME uint F_00b80db0(unsigned int gen_a0)
{
  GEN_ENTER(0xb80db0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80dd0 */
GEN_FRAME uint F_00b80dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb80dd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80e30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b80e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb80e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b808e0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00b80e80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b80e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb80e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b809d0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00b80ed0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b80ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb80ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b80ac0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00b80ee0 */
GEN_FRAME uint F_00b80ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xb80ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b80f00 */
GEN_FRAME uint F_00b80f00(unsigned int gen_a0)
{
  GEN_ENTER(0xb80f00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b80f20 */
GEN_FRAME uint F_00b80f20(unsigned int gen_a0)
{
  GEN_ENTER(0xb80f20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client_UCollisionObjectJob::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b80f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb80f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62f8));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client_UBoneSimulatorJob::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b80f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb80f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f6300));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client_UTransformUpdaterJob::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b80fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb80fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f6308));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00b80fd0 */
GEN_FRAME byte GEN_THISCALL F_00b80fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb80fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62e0));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xb80760));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xb80e30));
    uVar5 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b81130 */
GEN_FRAME uint GEN_THISCALL F_00b81130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b811e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b811e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb811e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10));
    F_00b808e0(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
    *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if ((char)param_3 != '\0') {
    piVar5 = (int *)((int)this + 0x1c);
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: FUN_00b812b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b812b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb812b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
        *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = (int *)((int)this + 0x1c);
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x5c) = 0;
  return 0;
}

/* ref: FUN_00b81340 */
GEN_FRAME byte GEN_THISCALL F_00b81340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81340u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62e8));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xb80780));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xb80e80));
    uVar5 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b814a0 */
GEN_FRAME uint GEN_THISCALL F_00b814a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb814a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b81550 */
GEN_FRAME unsigned int GEN_THISCALL F_00b81550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb81550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10));
    F_00b809d0(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
    *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if ((char)param_3 != '\0') {
    piVar5 = (int *)((int)this + 0x1c);
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: FUN_00b81620 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b81620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
        *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = (int *)((int)this + 0x1c);
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x5c) = 0;
  return 0;
}

/* ref: FUN_00b816b0 */
GEN_FRAME byte GEN_THISCALL F_00b816b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb816b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62f0));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xb807a0));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xb80ed0));
    uVar5 = F_004a0c60(this_00 GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b81810 */
GEN_FRAME uint GEN_THISCALL F_00b81810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 - 1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b818c0 */
GEN_FRAME byte GEN_THISCALL F_00b818c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb818c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  iVar5 = *(int *)((int)this + 8);
  if (iVar5 != 0) {
    iVar4 = 0;
    iVar6 = iVar5;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar4)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar4)));
      }
      iVar4 = iVar4 + 0x14;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(uint *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar3 = param_2;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10));
    F_00b80ac0(this GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  }
  iVar6 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar5 != 0; iVar5 = iVar5 - 1) {
    uVar3 = *(uint *)((int)this + 4);
    *(undefined4 *)(uVar3 + 8 + iVar6) = 8;
    *(undefined4 *)(uVar3 + 0x10 + iVar6) = 0;
    iVar6 = iVar6 + 0x14;
  }
  bVar2 = (byte)uVar3;
  if ((char)param_3 != '\0') {
    piVar7 = (int *)((int)this + 0x1c);
    iVar5 = 0x10;
    do {
      bVar2 = 0;
      if (*piVar7 != 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,*piVar7);
        bVar2 = (byte)uVar3;
        *piVar7 = 0;
      }
      piVar7 = piVar7 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return bVar2;
}

/* ref: FUN_00b81990 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b81990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
        *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  piVar5 = (int *)((int)this + 0x1c);
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x5c) = 0;
  return 0;
}

/* ref: JobQueue_JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b81a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this - 4);
    uVar1 = (int)this - 4;
    puVar3 = (undefined4 *)((int)this + iVar2 * 0x14);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62e0));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62e0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: JobQueue_JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client::vf0_00b81a90 */
GEN_FRAME uint GEN_THISCALL F_00b81a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this - 4);
    uVar1 = (int)this - 4;
    puVar3 = (undefined4 *)((int)this + iVar2 * 0x14);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62e8));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62e8));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: JobQueue_JobSystem_VBonePhysicsUpdater_Physics_Graphics_Client::vf0_00b81b00 */
GEN_FRAME uint GEN_THISCALL F_00b81b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this - 4);
    uVar1 = (int)this - 4;
    puVar3 = (undefined4 *)((int)this + iVar2 * 0x14);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      puVar3 = puVar3 - 5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62f0));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62f0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00b81b70 */
GEN_FRAME uint GEN_THISCALL F_00b81b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,0x600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile long *)(puVar2), (long)(uVar5));
  return uVar4;
}

/* ref: FUN_00b81bc0 */
GEN_FRAME uint GEN_THISCALL F_00b81bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,0xa00,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile long *)(puVar2), (long)(uVar5));
  return uVar4;
}

/* ref: FUN_00b81c10 */
GEN_FRAME uint GEN_THISCALL F_00b81c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,0x600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  uVar4 = _InterlockedExchange((volatile long *)(puVar2), (long)(uVar5));
  return uVar4;
}

/* ref: FUN_00b81c60 */
GEN_NOFRAME uint GEN_THISCALL F_00b81c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x30 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,0x600,0x10);
    _InterlockedExchange((volatile long *)(((uint *)((int)this + uVar6 * 4 + 0x1c))), (long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x30 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00b81cd0 */
GEN_NOFRAME uint GEN_THISCALL F_00b81cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x50 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,0xa00,0x10);
    _InterlockedExchange((volatile long *)(((uint *)((int)this + uVar6 * 4 + 0x1c))), (long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x50 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00b81d40 */
GEN_NOFRAME uint GEN_THISCALL F_00b81d40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x30 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_FWD,0x600,0x10);
    _InterlockedExchange((volatile long *)(((uint *)((int)this + uVar6 * 4 + 0x1c))), (long)(uVar5));
  }
  return (uVar3 & 0x1f) * 0x30 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00b81db0 */
GEN_NOFRAME uint GEN_THISCALL F_00b81db0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00b81c60(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD);
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return *(int *)((int)this + 4) + iVar1 * 4;
}

/* ref: FUN_00b81df0 */
GEN_NOFRAME uint GEN_THISCALL F_00b81df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00b81cd0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD);
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return *(int *)((int)this + 4) + iVar1 * 8;
}

/* ref: FUN_00b81e30 */
GEN_NOFRAME uint GEN_THISCALL F_00b81e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00b81d40(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD);
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return *(int *)((int)this + 4) + iVar1 * 4;
}

/* ref: FUN_00b81e70 */
GEN_NOFRAME unsigned int F_00b81e70(void)
{
  GEN_ENTER(0xb81e70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00b81e80 */
GEN_NOFRAME uint GEN_THISCALL F_00b81e80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81e80u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  *(undefined1 *)(in_ecx + 1) = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  *in_ecx = 0xffff;
  *(undefined1 *)((int)in_ecx + 3) = 0xff;
  *(undefined4 *)(in_ecx + 4) = 0xffffffff;
  *(undefined4 *)(in_ecx + 6) = 0x3ffff;
  return 0xffff;
}

/* ref: FUN_00b81eb0 */
GEN_NOFRAME uint GEN_THISCALL F_00b81eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81eb0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0xc) = 0x3ffff;
  return in_ecx;
}

/* ref: FUN_00b81ed0 */
GEN_FRAME uint GEN_THISCALL F_00b81ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b141b0(REFG(void * PTR32, 0x1370c1c) GEN_EDX_FWD,this,param_1);
  return uVar1;
}

/* ref: FUN_00b81ef0 */
GEN_FRAME uint GEN_THISCALL F_00b81ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b14280(REFG(void * PTR32, 0x1370c1c) GEN_EDX_FWD,this,param_1);
  return uVar1;
}

/* ref: FUN_00b81f10 */
GEN_NOFRAME uint GEN_THISCALL F_00b81f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((uint)*(ushort *)((int)(uintptr_t)this) * 0x100 + 8 + (uint)*(byte *)((int)this + 3)) * 0x10 +
         *(int *)(REFG(int, 0x1370c1c) + 0x3930);
}

/* ref: FUN_00b81f30 */
GEN_FRAME uint GEN_THISCALL F_00b81f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb81f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b81fb0(((undefined *)GEN_TOP(((uint)*(ushort *)((int)(uintptr_t)this) * 0x1000 + 0x80 + *(int *)(REFG(int, 0x1370c1c) + 0x3930)))) GEN_EDX_FWD,
               param_1,(uint)*(byte *)((int)this + 3));
  return param_1;
}

/* ref: FUN_00b81f70 */
GEN_NOFRAME ushort GEN_THISCALL F_00b81f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb81f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  
  uVar1 = F_00bcb330(*(undefined * PTR32 *)(REFG(int, 0x1370c1c) + 0x3930) GEN_EDX_FWD,this);
  return uVar1;
}

/* ref: FUN_00b81fb0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b81fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb81fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar3 = (uint)(ushort)param_2;
  iVar4 = uVar3 + 0x78;
  fVar5 = (float10)*(float *)((int)this + uVar3 * 0x10);
  fVar6 = (float10)*(float *)((int)this + iVar4 * 0x10);
  fVar7 = (float10)*(float *)((int)this + uVar3 * 0x10 + 4);
  fVar8 = (float10)*(float *)((int)this + iVar4 * 0x10 + 4);
  fVar1 = *(float *)((int)this + uVar3 * 0x10 + 8);
  fVar2 = *(float *)((int)this + iVar4 * 0x10 + 8);
  *param_1 = (float)(fVar5 - fVar6);
  fVar9 = (float10)fVar1;
  param_1[1] = (float)(fVar7 - fVar8);
  fVar10 = (float10)fVar2;
  param_1[2] = (float)(fVar9 - fVar10);
  param_1[4] = (float)(fVar6 + fVar5);
  param_1[5] = (float)(fVar8 + fVar7);
  param_1[6] = (float)(fVar10 + fVar9);
  return 0;
}

/* ref: FUN_00b82080 */
GEN_FRAME uint GEN_THISCALL F_00b82080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb82080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  F_00b81fb0((undefined *)(param_2 * 0x1000 + 0x80 + (int)this) GEN_EDX_FWD,param_1,param_3 & 0xff);
  return param_1;
}

/* ref: FUN_00b820b0 */
GEN_FRAME uint GEN_THISCALL F_00b820b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb820b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  F_00b81fb0(((undefined *)GEN_TOP((*(int *)((int)this + 0x3930) + 0x80 + param_2 * 0x1000))) GEN_EDX_FWD,param_1,
               param_3 & 0xff);
  return param_1;
}

/* ref: FUN_00b820e0 */
GEN_NOFRAME uint GEN_THISCALL F_00b820e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb820e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0xffffffff;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_00b82100 */
GEN_FRAME uint GEN_THISCALL F_00b82100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb82100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return (uint)this;
}

/* ref: FUN_00b82120 */
GEN_FRAME byte GEN_THISCALL F_00b82120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) &&
     (*(int *)((int)this + 8) == param_1[2])) {
    return *(int *)((int)this + 0xc) == param_1[3];
  }
  return 0;
}

/* ref: FUN_00b82190 */
GEN_FRAME uint GEN_STDCALL F_00b82190(unsigned int gen_a0)
{
  GEN_ENTER(0xb82190u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_009f7cb0((undefined *)*param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a2434));
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *param_1 = 0;
  }
  return uVar2;
}

/* ref: FUN_00b821d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b821d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb821d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      F_009f9140(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar1))) GEN_EDX_FWD);
      iVar1 = iVar1 + 0x94;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00b82200 */
GEN_FRAME uint GEN_THISCALL F_00b82200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82200u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)(in_ecx + 4);
  uVar2 = 0;
  if (local_8 != 0) {
    iVar3 = 0;
    do {
      uVar1 = F_009f1410(*(int *)(in_ecx + 8) + iVar3 GEN_EDX_FWD);
      uVar2 = uVar2 + uVar1;
      iVar3 = iVar3 + 0x94;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return uVar2;
}

/* ref: FUN_00b82240 */
GEN_FRAME uint GEN_THISCALL F_00b82240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if (((*(int *)((int)this + 8) != 0) && (uVar1 != 0)) && (uVar4 = 0, uVar1 != 0)) {
    iVar3 = 0;
    do {
      uVar2 = F_009f0ab0(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar3))) GEN_EDX_FWD,param_1);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x94;
    } while (uVar4 < uVar1);
  }
  return 0;
}

/* ref: FUN_00b82290 */
GEN_FRAME uint GEN_THISCALL F_00b82290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_1 - 1;
  if ((uVar1 == 0) && (uVar2 = 0, *(int *)((int)this + 4) != 0)) {
    iVar3 = 0;
    do {
      F_009f9490(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar3))) GEN_EDX_FWD);
      F_009f1450(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar3))) GEN_EDX_ARG,param_2);
      uVar1 = F_009f7700(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar3))) GEN_EDX_ARG);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x94;
    } while (uVar2 < *(uint *)((int)this + 4));
  }
  return uVar1;
}

/* ref: FUN_00b822f0 */
GEN_FRAME uint GEN_THISCALL F_00b822f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb822f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1 - 1;
  if ((uVar1 == 0) && (uVar3 = 0, *(int *)((int)this + 4) != 0)) {
    iVar2 = 0;
    do {
      uVar1 = F_009f0a70(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2))) GEN_EDX_FWD);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x94;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
  return uVar1;
}

/* ref: FUN_00b82330 */
GEN_FRAME uint GEN_THISCALL F_00b82330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *param_1 - 1;
  if (uVar1 == 0) {
    uVar1 = F_009f1490(((undefined *)GEN_TOP((param_1[2] * 0x94 + *(int *)((int)this + 8)))) GEN_EDX_FWD,param_2);
  }
  return uVar1;
}

/* ref: FUN_00b82360 */
GEN_FRAME uint GEN_THISCALL F_00b82360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_1 - 1;
  if (uVar1 == 0) {
    uVar1 = F_009f0a90(((undefined *)GEN_TOP((param_1[2] * 0x94 + *(int *)((int)this + 8)))) GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_00b82390 */
GEN_FRAME uint GEN_THISCALL F_00b82390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb82390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(int *)((int)this + 8) != 0) {
    F_009f1420(((undefined *)GEN_TOP((param_2 * 0x94 + *(int *)((int)this + 8)))) GEN_EDX_FWD,param_1,param_3);
    return (uint)param_1;
  }
  *param_1 = REFG(undefined4, 0x1302e54);
  param_1[1] = REFG(undefined4, 0x1302e58);
  param_1[2] = REFG(undefined4, 0x1302e5c);
  param_1[3] = REFG(undefined4, 0x1302e60);
  return (uint)param_1;
}

/* ref: FUN_00b823f0 */
GEN_FRAME float GEN_THISCALL F_00b823f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb823f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    fVar1 = F_009f0a50(((undefined *)GEN_TOP((param_1 * 0x94 + *(int *)((int)this + 8)))) GEN_EDX_FWD,param_2);
    return fVar1;
  }
  return (float)(float10)1;
}

/* ref: FUN_00b82420 */
GEN_NOFRAME uint GEN_THISCALL F_00b82420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82420u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b82430 */
GEN_FRAME uint GEN_THISCALL F_00b82430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint * this_00;
  
  *(uint *)((int)this + 4) = param_1;
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0x94 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x94)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar2) | uVar2 + 4,0,0);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
    puVar1 = puVar1 + 1;
    this_00 = puVar1;
    uVar2 = param_1;
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      F_009f9010(this_00 GEN_EDX_ARG);
      this_00 = this_00 + 0x25;
    }
    *(uint *)this = *(uint *)this | 2;
    *(uint * PTR32 *)((int)this + 8) = puVar1;
    return (uint)puVar1;
  }
  *(uint *)this = *(uint *)this | 2;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b824b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b824b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb824b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,3);
      *(uint *)this = *(uint *)this & 0xfffffffd;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 4) = 0;
      return;
    }
    F_00406b30(puVar1 - 1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *(undefined4 *)((int)this + 4) = 0;
  return;
}

/* ref: FUN_00b82500 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b82500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD,5);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return;
}

/* ref: FUN_00b82530 */
GEN_NOFRAME uint GEN_THISCALL F_00b82530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82530u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx >> 1 & 1;
}

/* ref: FUN_00b82540 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b82540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
    }
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *(undefined4 *)((int)this + 4) = 0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,5);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return;
}

/* ref: FUN_00b825a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b825a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb825a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD,5);
    *(uint *)this = *(uint *)this | 1;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0xc) = param_1;
    return;
  }
  *(uint *)this = *(uint *)this | 1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return;
}

/* ref: FUN_00b825e0 */
GEN_FRAME uint GEN_THISCALL F_00b825e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb825e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,0x20,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_009f92d0(pvVar1 GEN_EDX_ARG);
    }
    *param_1 = uVar2;
  }
  pvVar1 = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60);
  uVar2 = F_00500af0(pvVar1 GEN_EDX_ARG,param_2);
  uVar2 = F_00500ae0(pvVar1 GEN_EDX_ARG,uVar2 & 0xffff);
  uVar2 = *(uint *)(uVar2 + 8) >> 4;
  if ((uVar2 & 1) == 0) {
    if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
      uVar2 = F_0063a2f0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,param_2,param_3,param_1);
      return uVar2;
    }
  }
  else {
    uVar4 = 0;
    if (*(int *)((int)this + 4) != 0) {
      iVar5 = 0;
      do {
        uVar3 = F_009f7970(*(int *)((int)this + 8) + iVar5 GEN_EDX_ARG,param_2,param_3);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = F_009f7d80((undefined *)*param_1 GEN_EDX_ARG,uVar3);
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x94;
      } while (uVar4 < *(uint *)((int)this + 4));
    }
  }
  return uVar2;
}

/* ref: FUN_00b826a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b826a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb826a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
    }
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *(undefined4 *)((int)this + 4) = 0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,5);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return;
}

/* ref: FUN_00b82700 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b82700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb82700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
    }
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffd;
  *(undefined4 *)((int)this + 4) = 0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,5);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return;
}

/* ref: Client::Graphics::Animation::MaterialAnimationModule::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b82760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pMVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) == 0) {
    F_009f9cd0(this GEN_EDX_FWD);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    pMVar1 = this - 4;
    iVar2 = *(int *)pMVar1;
    this_00 = this + iVar2 * 0x94;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this_00 = this_00 - 0x94;
      F_009f9cd0(this_00 GEN_EDX_ARG);
    }
    this = pMVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(pMVar1);
      return (uint)pMVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00b827f0 */
GEN_FRAME uint GEN_THISCALL F_00b827f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb827f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82800 */
GEN_FRAME uint GEN_THISCALL F_00b82800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82800u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82820 */
GEN_FRAME uint GEN_THISCALL F_00b82820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82820u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82830 */
GEN_FRAME uint GEN_THISCALL F_00b82830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82830u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82850 */
GEN_FRAME uint GEN_THISCALL F_00b82850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82850u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_00b82860 */
GEN_FRAME uint GEN_THISCALL F_00b82860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82860u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82870 */
GEN_FRAME uint GEN_THISCALL F_00b82870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82870u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b82890 */
GEN_FRAME uint GEN_THISCALL F_00b82890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82890u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b828f0 */
GEN_FRAME uint GEN_THISCALL F_00b828f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb828f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b82950 */
GEN_FRAME uint GEN_THISCALL F_00b82950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82950u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b829a0 */
GEN_FRAME uint GEN_THISCALL F_00b829a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb829a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b829f0 */
GEN_FRAME uint GEN_THISCALL F_00b829f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb829f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b82a70 */
GEN_FRAME uint GEN_STDCALL F_00b82a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd5);
  return (uint)uVar1;
}

/* ref: FUN_00b82ad0 */
GEN_FRAME uint GEN_STDCALL F_00b82ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd5);
  return (uint)uVar1;
}

/* ref: FUN_00b82b40 */
GEN_FRAME uint GEN_STDCALL F_00b82b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 2,0xd9);
  return (uint)uVar1;
}

/* ref: FUN_00b82ba0 */
GEN_FRAME uint GEN_STDCALL F_00b82ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd9);
  return (uint)uVar1;
}

/* ref: FUN_00b82c10 */
GEN_FRAME uint GEN_STDCALL F_00b82c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd9);
  return (uint)uVar1;
}

/* ref: FUN_00b82c40 */
GEN_FRAME uint GEN_STDCALL F_00b82c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82c40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd5);
  return uVar1;
}

/* ref: FUN_00b82c80 */
GEN_FRAME uint GEN_STDCALL F_00b82c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82c80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd5);
  return uVar1;
}

/* ref: FUN_00b82cc0 */
GEN_FRAME uint GEN_STDCALL F_00b82cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82cc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 2,param_2,0xd9);
  return uVar1;
}

/* ref: FUN_00b82cf0 */
GEN_FRAME uint GEN_STDCALL F_00b82cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82cf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd9);
  return uVar1;
}

/* ref: FUN_00b82d30 */
GEN_FRAME uint GEN_STDCALL F_00b82d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb82d30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd9);
  return uVar1;
}

/* ref: FUN_00b82d70 */
GEN_FRAME uint F_00b82d70(unsigned int gen_a0)
{
  GEN_ENTER(0xb82d70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82d80 */
GEN_FRAME uint F_00b82d80(unsigned int gen_a0)
{
  GEN_ENTER(0xb82d80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82d90 */
GEN_FRAME uint F_00b82d90(unsigned int gen_a0)
{
  GEN_ENTER(0xb82d90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82da0 */
GEN_FRAME uint F_00b82da0(unsigned int gen_a0)
{
  GEN_ENTER(0xb82da0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82dd0 */
GEN_FRAME unsigned int F_00b82dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82dd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b82df0 */
GEN_FRAME unsigned int F_00b82df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82df0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00b82e10 */
GEN_FRAME uint F_00b82e10(unsigned int gen_a0)
{
  GEN_ENTER(0xb82e10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82e20 */
GEN_FRAME uint F_00b82e20(unsigned int gen_a0)
{
  GEN_ENTER(0xb82e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82e30 */
GEN_FRAME uint F_00b82e30(unsigned int gen_a0)
{
  GEN_ENTER(0xb82e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82e40 */
GEN_FRAME uint F_00b82e40(unsigned int gen_a0)
{
  GEN_ENTER(0xb82e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82e50 */
GEN_FRAME uint F_00b82e50(unsigned int gen_a0)
{
  GEN_ENTER(0xb82e50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82e60 */
GEN_FRAME byte F_00b82e60(void)
{
  GEN_ENTER(0xb82e60u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b82e70 */
GEN_FRAME uint F_00b82e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82e70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b82ea0 */
GEN_FRAME byte F_00b82ea0(void)
{
  GEN_ENTER(0xb82ea0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b82eb0 */
GEN_FRAME uint F_00b82eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb82eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b82f10 */
GEN_FRAME byte F_00b82f10(void)
{
  GEN_ENTER(0xb82f10u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b82f40 */
GEN_FRAME uint GEN_THISCALL F_00b82f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82f40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b82f60 */
GEN_FRAME uint GEN_THISCALL F_00b82f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb82f60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b82fe0 */
GEN_FRAME uint F_00b82fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb82fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b82ff0 */
GEN_FRAME uint F_00b82ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xb82ff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b83020 */
GEN_FRAME uint GEN_THISCALL F_00b83020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0x28) + (uint)(ushort)param_2 * 0x24;
}

/* ref: FUN_00b83040 */
GEN_FRAME uint GEN_THISCALL F_00b83040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(ushort)param_2 * 0x54 + *(int *)(in_ecx + 0x2c);
}

/* ref: FUN_00b83150 */
GEN_FRAME uint GEN_THISCALL F_00b83150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0x28) + (uint)(byte)param_2 * 0x24;
}

/* ref: FUN_00b83170 */
GEN_FRAME uint GEN_THISCALL F_00b83170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0x2c) + (uint)(byte)param_2 * 0x24;
}

/* ref: FUN_00b83190 */
GEN_FRAME uint GEN_THISCALL F_00b83190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x30 + *(int *)(in_ecx + 0x30);
}

/* ref: FUN_00b831b0 */
GEN_FRAME uint GEN_THISCALL F_00b831b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb831b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x20 + *(int *)(in_ecx + 0x34);
}

/* ref: FUN_00b831d0 */
GEN_FRAME uint GEN_THISCALL F_00b831d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb831d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x34 + *(int *)(in_ecx + 0x38);
}

/* ref: FUN_00b831f0 */
GEN_FRAME uint GEN_THISCALL F_00b831f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb831f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x30 + *(int *)(in_ecx + 0x3c);
}

/* ref: FUN_00b83210 */
GEN_FRAME uint GEN_THISCALL F_00b83210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x10 + *(int *)(in_ecx + 0x40);
}

/* ref: FUN_00b83230 */
GEN_FRAME uint GEN_THISCALL F_00b83230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0x44) + (uint)(byte)param_2 * 0x24;
}

/* ref: FUN_00b83300 */
GEN_FRAME uint GEN_THISCALL F_00b83300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 4) + (uint)(byte)param_2 * 0x48;
}

/* ref: FUN_00b83370 */
GEN_FRAME uint GEN_THISCALL F_00b83370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x7c + *(int *)(in_ecx + 8);
}

/* ref: FUN_00b83390 */
GEN_FRAME uint GEN_THISCALL F_00b83390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x74 + *(int *)(in_ecx + 0xc);
}

/* ref: FUN_00b833b0 */
GEN_FRAME uint GEN_THISCALL F_00b833b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb833b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x5c + *(int *)(in_ecx + 0x10);
}

/* ref: FUN_00b833d0 */
GEN_FRAME uint GEN_THISCALL F_00b833d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb833d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0xa8 + *(int *)(in_ecx + 0x14);
}

/* ref: FUN_00b833f0 */
GEN_FRAME uint GEN_THISCALL F_00b833f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb833f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x50 + *(int *)(in_ecx + 0x18);
}

/* ref: FUN_00b83490 */
GEN_FRAME byte GEN_THISCALL F_00b83490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xba) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b834a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b834a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb834a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xac) = param_2;
  return;
}

/* ref: FUN_00b834c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b834c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb834c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb0) = param_2;
  return;
}

/* ref: FUN_00b834e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b834e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb834e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa0) = param_2;
  return;
}

/* ref: FUN_00b83500 */
GEN_FRAME unsigned int GEN_THISCALL F_00b83500(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb83500u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa4) = (float)((float10)1 - (float10)param_2);
  return;
}

/* ref: FUN_00b83520 */
GEN_FRAME unsigned int GEN_THISCALL F_00b83520(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb83520u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa8) = param_2;
  return;
}

/* ref: FUN_00b83540 */
GEN_FRAME uint GEN_THISCALL F_00b83540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb83540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_2)));
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    puVar1 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x80 + *(int *)((int)this + 0x1c))));
    *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b83580 */
GEN_FRAME uint GEN_THISCALL F_00b83580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb83580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_2)));
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    puVar1 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x80 + *(int *)((int)this + 0x1c))));
    *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  }
  return (uint)puVar1;
}

/* ref: FUN_00b835c0 */
GEN_FRAME uint GEN_THISCALL F_00b835c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb835c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_2)));
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    puVar1 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x84 + *(int *)((int)this + 0x1c))));
    *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_00b83600 */
GEN_FRAME uint GEN_THISCALL F_00b83600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb83600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_2)));
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    puVar1 = ((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x84 + *(int *)((int)this + 0x1c))));
    *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  }
  return (uint)puVar1;
}

/* ref: FUN_00b83640 */
GEN_FRAME uint GEN_THISCALL F_00b83640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00b83650 */
GEN_FRAME uint GEN_THISCALL F_00b83650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00b83670 */
GEN_FRAME ushort GEN_THISCALL F_00b83670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x6c) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b83680 */
GEN_FRAME ushort GEN_THISCALL F_00b83680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x6e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b83720 */
GEN_FRAME uint GEN_THISCALL F_00b83720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83720u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b83740 */
GEN_FRAME uint GEN_THISCALL F_00b83740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83740u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00b83750 */
GEN_FRAME byte GEN_THISCALL F_00b83750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 uVar2;
  
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(int * PTR32 *)((int)this + 0x98) = param_1;
  *(undefined4 *)((int)this + 0x10) = uVar2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar2;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = uVar2;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = uVar2;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = uVar2;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  return 1;
}

/* ref: FUN_00b83820 */
GEN_FRAME uint GEN_THISCALL F_00b83820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb83820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int local_c;
  
  piVar2 = (int *)((int)this + 0x9c);
  local_c = 5;
  do {
    uVar4 = piVar2[1] - *piVar2 >> 2;
    if (uVar4 != 0) {
      iVar1 = *piVar2;
      uVar3 = 0;
      do {
        this_00 = *(undefined * PTR32 *)(iVar1 + uVar3 * 4);
        if (*(char *)((int)this_00 + 0xc4) != '\0') {
          F_00bbcca0(this_00 GEN_EDX_FWD);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    piVar2 = piVar2 + 4;
    local_c = local_c - 1;
  } while (local_c != 0);
  return (uint)piVar2;
}

/* ref: FUN_00b83880 */
GEN_FRAME uint GEN_THISCALL F_00b83880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  int * piVar4;
  byte * pbVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint local_8;
  
  piVar4 = (int *)((int)this + 0xec);
  local_8 = 0;
  do {
    uVar7 = piVar4[1] - *piVar4 >> 2;
    if (uVar7 != 0) {
      uVar6 = 0;
      do {
        pbVar2 = ((byte *)GEN_TOP((*(int *)(*piVar4 + uVar6 * 4) + 8)));
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00b838e0: ;
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00b838e5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00b838e0;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00b838e5: ;
        if (iVar3 == 0) {
          return *(uint *)(*piVar4 + uVar6 * 4);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    local_8 = local_8 + 1;
    piVar4 = piVar4 + 4;
    if (4 < local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b83920 */
GEN_FRAME uint GEN_THISCALL F_00b83920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb83920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (4 < param_2) {
    return 0;
  }
  uVar7 = *(int *)((int)this + param_2 * 0x10 + 0xf0) - *(int *)((int)this + param_2 * 0x10 + 0xec)
          >> 2;
  if (uVar7 != 0) {
    iVar2 = *(int *)((int)this + param_2 * 0x10 + 0xec);
    uVar6 = 0;
    do {
      pbVar3 = ((byte *)GEN_TOP((*(int *)(iVar2 + uVar6 * 4) + 8)));
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00b83980: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00b83985;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00b83980;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00b83985: ;
      if (iVar4 == 0) {
        return *(uint *)(iVar2 + uVar6 * 4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  return 0;
}

/* ref: FUN_00b839b0 */
GEN_FRAME uint GEN_THISCALL F_00b839b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb839b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_1 < 5) {
    if (param_2 < (uint)(*(int *)((int)this + param_1 * 0x10 + 0xa0) -
                         *(int *)((int)this + param_1 * 0x10 + 0x9c) >> 2)) {
      return *((uint *)GEN_TOP((*(int *)((int)this + param_1 * 0x10 + 0x9c) + param_2 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_00b839f0 */
GEN_FRAME uint GEN_THISCALL F_00b839f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb839f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (4 < param_1) {
    return 0;
  }
  piVar1 = (int *)((int)this + param_1 * 0x10 + 0x9c);
  uVar3 = piVar1[1] - *piVar1 >> 2;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(uint *)(*piVar1 + uVar4 * 4);
      if (param_2 == *(int *)(uVar2 + 0x10)) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: FUN_00b83a40 */
GEN_FRAME uint GEN_THISCALL F_00b83a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  
  if (4 < param_2) {
    return 0;
  }
  piVar1 = (int *)(in_ecx + 0x9c + param_2 * 0x10);
  return piVar1[1] - *piVar1 >> 2;
}

/* ref: FUN_00b83a70 */
GEN_FRAME uint GEN_THISCALL F_00b83a70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb83a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int local_14;
  int local_c;
  
  bVar2 = false;
  piVar4 = (int *)((int)this + 0x9c);
  local_c = 5;
  uVar3 = REFG(undefined4, 0x1487c64);
  do {
    uVar6 = piVar4[1] - *piVar4 >> 2;
    if (uVar6 != 0) {
      iVar1 = *piVar4;
      uVar5 = 0;
      do {
        uVar3 = *(uint *)(iVar1 + uVar5 * 4);
        if (*(char *)(uVar3 + 0xc4) != '\0') {
          uVar3 = F_00b80480(uVar3,this);
          bVar2 = true;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    piVar4 = piVar4 + 4;
    local_c = local_c - 1;
  } while (local_c != 0);
  if (bVar2) {
    piVar4 = (int *)((int)this + 0xec);
    local_14 = 5;
    do {
      uVar3 = piVar4[1] - *piVar4 >> 2;
      if (uVar3 != 0) {
        iVar1 = *piVar4;
        uVar6 = 0;
        do {
          F_00b80420(*(undefined4 *)(iVar1 + uVar6 * 4));
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      piVar4 = piVar4 + 4;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
    uVar3 = F_00b804e0(this);
  }
  return uVar3;
}

/* ref: FUN_00b83b40 */
GEN_FRAME unsigned int GEN_THISCALL F_00b83b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb83b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * pbVar1;
  int * piVar2;
  uint * puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ushort * puVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint local_40;
  int local_34;
  int local_30;
  int local_2c;
  uint local_24;
  uint local_1c;
  uint local_10;
  byte local_9;
  byte local_8;
  
  if (param_1 < 5) {
    local_24 = 0;
    do {
      if ((local_24 != param_1) && (iVar7 = *(int *)((int)this + local_24 * 4 + 0x13c), iVar7 != 0))
      {
        piVar2 = (int *)((int)this + local_24 * 0x10 + 0x9c);
        iVar8 = *piVar2;
        uVar13 = piVar2[1] - iVar8 >> 2;
        if (uVar13 != 0) {
          local_10 = 0;
          do {
            pbVar1 = ((byte *)GEN_TOP((*(int *)(iVar7 + 0xb4) + (local_10 & 0xff) * 0x48)));
            bVar18 = pbVar1[1];
            bVar4 = *pbVar1;
            bVar5 = pbVar1[2];
            bVar6 = pbVar1[3];
            local_8 = 0;
            if (bVar4 != 0) {
              bVar12 = 0;
              local_34 = 0;
              do {
                iVar9 = *(int *)(pbVar1 + 0x28);
                uVar14 = F_00b83920(this GEN_EDX_FWD,iVar9 + local_34,param_1);
                if (uVar14 != 0) {
                  uVar14 = F_00bbef80(*(undefined * PTR32 *)(iVar8 + local_10 * 4) GEN_EDX_ARG,uVar14,
                                        *(undefined4 *)(iVar9 + local_34 + 0x20),(uint)local_8,1,0);
                  uVar15 = 1 << (bVar12 & 0x1f);
                  local_9 = 0;
                  bVar17 = (byte)uVar14;
                  if (bVar5 != 0) {
                    local_2c = 0;
                    do {
                      iVar9 = *(int *)(pbVar1 + 0x30);
                      iVar22 = *(int *)(iVar8 + local_10 * 4);
                      uVar14 = (uint)local_9;
                      if (uVar14 < (uint)(*(int *)(iVar22 + 0x78) - *(int *)(iVar22 + 0x74) >> 2)) {
                        uVar19 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar22 + 0x74) + uVar14 * 4))) + 0xb8)));
                      }
                      else {
                        uVar19 = 0;
                      }
                      local_1c = 0;
                      if (uVar19 != 0) {
                        do {
                          uVar20 = local_1c & 0xffff;
                          iVar22 = uVar20 * 0x54 + *(int *)(iVar9 + local_2c + 0x2c);
                          if ((*(uint *)(iVar22 + 0x4c) & uVar15) == 0) {
                            iVar10 = *(int *)(iVar8 + local_10 * 4);
                            if ((uVar14 < (uint)(*(int *)(iVar10 + 0x78) - *(int *)(iVar10 + 0x74)
                                                >> 2)) &&
                               (iVar10 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x74) + uVar14 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar10 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((uVar20 * 0xa0 + 0x80 + *(int *)(iVar10 + 0x1c))));
                              *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                            }
                          }
                          else {
                            iVar10 = *(int *)(iVar8 + local_10 * 4);
                            if ((uVar14 < (uint)(*(int *)(iVar10 + 0x78) - *(int *)(iVar10 + 0x74)
                                                >> 2)) &&
                               (iVar10 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x74) + uVar14 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar10 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((uVar20 * 0xa0 + 0x80 + *(int *)(iVar10 + 0x1c))));
                              *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                            }
                          }
                          if ((*(uint *)(iVar22 + 0x50) & uVar15) == 0) {
                            iVar22 = *(int *)(iVar8 + local_10 * 4);
                            if ((uVar14 < (uint)(*(int *)(iVar22 + 0x78) - *(int *)(iVar22 + 0x74)
                                                >> 2)) &&
                               (iVar22 = *((int *)GEN_TOP((*(int *)(iVar22 + 0x74) + uVar14 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar22 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((uVar20 * 0xa0 + 0x84 + *(int *)(iVar22 + 0x1c))));
                              *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                            }
                          }
                          else {
                            iVar22 = *(int *)(iVar8 + local_10 * 4);
                            if ((uVar14 < (uint)(*(int *)(iVar22 + 0x78) - *(int *)(iVar22 + 0x74)
                                                >> 2)) &&
                               (iVar22 = *((int *)GEN_TOP((*(int *)(iVar22 + 0x74) + uVar14 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar22 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((uVar20 * 0xa0 + 0x84 + *(int *)(iVar22 + 0x1c))));
                              *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                            }
                          }
                          local_1c = local_1c + 1;
                        } while (local_1c < uVar19);
                      }
                      local_2c = local_2c + 0x30;
                      local_9 = local_9 + 1;
                    } while (local_9 < bVar5);
                  }
                  uVar14 = 0;
                  local_9 = 0;
                  if (bVar6 != 0) {
                    local_2c = 0;
                    do {
                      iVar9 = *(int *)(pbVar1 + 0x34);
                      iVar22 = *(int *)(iVar8 + local_10 * 4);
                      if ((*(uint *)(iVar9 + local_2c + 0x18) & uVar15) == 0) {
                        if (uVar14 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >> 5))
                        {
                          puVar3 = ((uint *)GEN_TOP((uVar14 * 0x20 + 8 + *(int *)(iVar22 + 0xb4))));
                          *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                        }
                      }
                      else if (uVar14 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >>
                                              5)) {
                        puVar3 = ((uint *)GEN_TOP((uVar14 * 0x20 + 8 + *(int *)(iVar22 + 0xb4))));
                        *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                      }
                      iVar22 = *(int *)(iVar8 + local_10 * 4);
                      if ((*(uint *)(iVar9 + local_2c + 0x1c) & uVar15) == 0) {
                        if (uVar14 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >> 5))
                        {
                          puVar3 = ((uint *)GEN_TOP((uVar14 * 0x20 + 0xc + *(int *)(iVar22 + 0xb4))));
                          *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                        }
                      }
                      else if (uVar14 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >>
                                              5)) {
                        puVar3 = ((uint *)GEN_TOP((uVar14 * 0x20 + 0xc + *(int *)(iVar22 + 0xb4))));
                        *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                      }
                      local_2c = local_2c + 0x20;
                      local_9 = local_9 + 1;
                      uVar14 = (uint)local_9;
                    } while (local_9 < bVar6);
                  }
                }
                bVar12 = bVar12 + 1;
                local_34 = local_34 + 0x24;
                local_8 = local_8 + 1;
              } while (local_8 < bVar4);
            }
            local_8 = 0;
            if (bVar18 != 0) {
              cVar11 = '\0';
              local_2c = 0;
              do {
                iVar9 = *(int *)(pbVar1 + 0x2c);
                uVar14 = F_00b83920(this GEN_EDX_ARG,iVar9 + local_2c,param_1);
                if (uVar14 != 0) {
                  uVar14 = F_00bbf070(*(undefined * PTR32 *)(iVar8 + local_10 * 4) GEN_EDX_ARG,uVar14,
                                        *(undefined4 *)(iVar9 + local_2c + 0x20),
                                        (uint)(ushort)((ushort)local_8 + (ushort)bVar4),1,0);
                  uVar15 = 1 << (bVar4 + cVar11 & 0x1f);
                  bVar12 = 0;
                  if (bVar6 != 0) {
                    local_34 = 0;
                    do {
                      iVar9 = *(int *)(pbVar1 + 0x34);
                      iVar22 = *(int *)(iVar8 + local_10 * 4);
                      uVar19 = (uint)bVar12;
                      bVar17 = (byte)uVar14;
                      if ((*(uint *)(iVar9 + local_34 + 0x18) & uVar15) == 0) {
                        if (uVar19 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >> 5))
                        {
                          puVar3 = ((uint *)GEN_TOP((uVar19 * 0x20 + 8 + *(int *)(iVar22 + 0xb4))));
                          *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                        }
                      }
                      else if (uVar19 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >>
                                              5)) {
                        puVar3 = ((uint *)GEN_TOP((uVar19 * 0x20 + 8 + *(int *)(iVar22 + 0xb4))));
                        *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                      }
                      iVar22 = *(int *)(iVar8 + local_10 * 4);
                      if ((*(uint *)(iVar9 + local_34 + 0x1c) & uVar15) == 0) {
                        if (uVar19 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >> 5))
                        {
                          puVar3 = ((uint *)GEN_TOP((uVar19 * 0x20 + 0xc + *(int *)(iVar22 + 0xb4))));
                          *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
                        }
                      }
                      else if (uVar19 < (uint)(*(int *)(iVar22 + 0xb8) - *(int *)(iVar22 + 0xb4) >>
                                              5)) {
                        puVar3 = ((uint *)GEN_TOP((uVar19 * 0x20 + 0xc + *(int *)(iVar22 + 0xb4))));
                        *puVar3 = *puVar3 | 1 << (bVar17 & 0x1f);
                      }
                      local_34 = local_34 + 0x20;
                      bVar12 = bVar12 + 1;
                    } while (bVar12 < bVar6);
                  }
                }
                cVar11 = cVar11 + '\x01';
                local_2c = local_2c + 0x24;
                local_8 = local_8 + 1;
              } while (local_8 < bVar18);
            }
            local_8 = 0;
            if (bVar5 != 0) {
              local_2c = 0;
              do {
                puVar16 = ((ushort *)GEN_TOP((*(int *)(pbVar1 + 0x30) + local_2c)));
                local_40 = (uint)*puVar16;
                if (*puVar16 != 0) {
                  cVar11 = '\0';
                  local_30 = 0;
                  do {
                    iVar9 = *(int *)(puVar16 + 0x14);
                    uVar14 = F_00b83920(this GEN_EDX_ARG,iVar9 + local_30,param_1);
                    if (uVar14 != 0) {
                      uVar19 = (uint)local_8;
                      uVar14 = F_00bbcd30(*(undefined * PTR32 *)(iVar8 + local_10 * 4) GEN_EDX_ARG,uVar14,
                                            *(undefined4 *)(iVar9 + local_30 + 0x20),uVar19,
                                            (uint)(ushort)((ushort)bVar4 + (ushort)local_8),1,0);
                      uVar15 = 1 << (bVar4 + cVar11 & 0x1f);
                      iVar9 = *(int *)(iVar8 + local_10 * 4);
                      if (uVar19 < (uint)(*(int *)(iVar9 + 0x78) - *(int *)(iVar9 + 0x74) >> 2)) {
                        uVar20 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 0x74) + uVar19 * 4))) + 0xb8)));
                      }
                      else {
                        uVar20 = 0;
                      }
                      local_1c = 0;
                      if (uVar20 != 0) {
                        do {
                          uVar21 = local_1c & 0xffff;
                          iVar22 = uVar21 * 0x54 + *(int *)(puVar16 + 0x16);
                          iVar9 = *(int *)(iVar8 + local_10 * 4);
                          bVar18 = (byte)uVar14;
                          if ((*(uint *)(iVar22 + 0x4c) & uVar15) == 0) {
                            if ((uVar19 < (uint)(*(int *)(iVar9 + 0x78) - *(int *)(iVar9 + 0x74) >>
                                                2)) &&
                               (iVar9 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x74) + uVar19 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar9 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((*(int *)(iVar9 + 0x1c) + 0x80 + uVar21 * 0xa0)));
                              *puVar3 = *puVar3 & ~(1 << (bVar18 & 0x1f));
                            }
                          }
                          else if ((uVar19 < (uint)(*(int *)(iVar9 + 0x78) - *(int *)(iVar9 + 0x74)
                                                   >> 2)) &&
                                  (iVar9 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x74) + uVar19 * 4))),
                                  (ushort)local_1c < *(ushort *)(iVar9 + 0xb8))) {
                            puVar3 = ((uint *)GEN_TOP((*(int *)(iVar9 + 0x1c) + 0x80 + uVar21 * 0xa0)));
                            *puVar3 = *puVar3 | 1 << (bVar18 & 0x1f);
                          }
                          iVar9 = *(int *)(iVar8 + local_10 * 4);
                          if ((*(uint *)(iVar22 + 0x50) & uVar15) == 0) {
                            if ((uVar19 < (uint)(*(int *)(iVar9 + 0x78) - *(int *)(iVar9 + 0x74) >>
                                                2)) &&
                               (iVar9 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x74) + uVar19 * 4))),
                               (ushort)local_1c < *(ushort *)(iVar9 + 0xb8))) {
                              puVar3 = ((uint *)GEN_TOP((*(int *)(iVar9 + 0x1c) + 0x84 + uVar21 * 0xa0)));
                              *puVar3 = *puVar3 & ~(1 << (bVar18 & 0x1f));
                            }
                          }
                          else if ((uVar19 < (uint)(*(int *)(iVar9 + 0x78) - *(int *)(iVar9 + 0x74)
                                                   >> 2)) &&
                                  (iVar9 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x74) + uVar19 * 4))),
                                  (ushort)local_1c < *(ushort *)(iVar9 + 0xb8))) {
                            puVar3 = ((uint *)GEN_TOP((*(int *)(iVar9 + 0x1c) + 0x84 + uVar21 * 0xa0)));
                            *puVar3 = *puVar3 | 1 << (bVar18 & 0x1f);
                          }
                          local_1c = local_1c + 1;
                        } while (local_1c < uVar20);
                      }
                    }
                    local_30 = local_30 + 0x24;
                    cVar11 = cVar11 + '\x01';
                    local_40 = local_40 - 1;
                  } while (local_40 != 0);
                }
                local_2c = local_2c + 0x30;
                local_8 = local_8 + 1;
              } while (local_8 < bVar5);
            }
            local_10 = local_10 + 1;
          } while (local_10 < uVar13);
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < 5);
  }
  return;
}

/* ref: FUN_00b84310 */
GEN_NOFRAME uint GEN_THISCALL F_00b84310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb84310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float10 fVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  float * pfVar6;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0x30)) = (float)fVar2;
  (*(float *)(gen_frame + 0x34)) = (float)fVar2;
  fVar1 = param_1[9];
  (*(float *)(gen_frame + 0x38)) = (float)fVar2;
  ((float *)(gen_frame + 0x0))[0] = param_1[8];
  ((float *)(gen_frame + 0x0))[1] = 0.0;
  ((float *)(gen_frame + 0x0))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(float *)(gen_frame + 0x14)) = fVar1;
  (*(float *)(gen_frame + 0x28)) = param_1[10];
  F_004efe70(((float *)(gen_frame + 0x0)) GEN_EDX_FWD,(uint)(param_1 + 4));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x34)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x38)));
  pfVar5 = ((float *)(gen_frame + 0x0));
  pfVar6 = (float *)((int)this + 0x10);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  uVar3 = F_004f45d0((int)this + 0x50,(float *)((int)this + 0x10));
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00b843f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b843f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb843f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  uVar4 = 0;
  piVar2 = (int *)((int)this + 0xa0);
  do {
    piVar1 = (int *)*piVar2;
    piVar3 = (int *)piVar2[-1];
    if (piVar3 != piVar1) {
      do {
        if ((int *)*piVar3 == param_1) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar1);
      if (piVar3 != piVar1) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
        ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1);
        piVar2 = (int *)((int)this + uVar4 * 0x10 + 0x9c);
        *piVar3 = *((int *)GEN_TOP((*(int *)((int)this + uVar4 * 0x10 + 0x9c) - 4 +
                          (*(int *)((int)this + uVar4 * 0x10 + 0xa0) -
                           *(int *)((int)this + uVar4 * 0x10 + 0x9c) >> 2) * 4)));
        if (*piVar2 == piVar2[1]) {
          return;
        }
        piVar2[1] = piVar2[1] - 4;
        return;
      }
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 4;
    if (4 < uVar4) {
      return;
    }
  } while( true );
}

/* ref: FUN_00b844a0 */
GEN_FRAME uint GEN_THISCALL F_00b844a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb844a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int local_c;
  
  if (param_1 == (int *)0x0) {
    return (uint)this;
  }
  piVar3 = (int *)((int)this + 0x9c);
  local_c = 5;
  do {
    uVar6 = piVar3[1] - *piVar3 >> 2;
    if (uVar6 != 0) {
      iVar1 = *piVar3;
      uVar4 = 0;
      do {
        F_00bbe500(*(undefined * PTR32 *)(iVar1 + uVar4 * 4) GEN_EDX_FWD,param_1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar6);
    }
    piVar3 = piVar3 + 4;
    local_c = local_c - 1;
  } while (local_c != 0);
  uVar6 = 0;
  piVar3 = (int *)((int)this + 0xf0);
  do {
    piVar2 = (int *)*piVar3;
    piVar5 = (int *)piVar3[-1];
    if (piVar5 != piVar2) {
      do {
        if ((int *)*piVar5 == param_1) break;
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar2);
      if (piVar5 != piVar2) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1);
        piVar3 = (int *)((int)this + uVar6 * 0x10 + 0xec);
        *piVar5 = *((int *)GEN_TOP((*(int *)((int)this + uVar6 * 0x10 + 0xec) - 4 +
                          (*(int *)((int)this + uVar6 * 0x10 + 0xf0) -
                           *(int *)((int)this + uVar6 * 0x10 + 0xec) >> 2) * 4)));
        if (*piVar3 == piVar3[1]) {
          return (uint)piVar3;
        }
        piVar3[1] = piVar3[1] - 4;
        return (uint)piVar3;
      }
    }
    uVar6 = uVar6 + 1;
    piVar3 = piVar3 + 4;
    if (4 < uVar6) {
      return (uint)piVar2;
    }
  } while( true );
}

/* ref: FUN_00b845a0 */
GEN_FRAME uint GEN_THISCALL F_00b845a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb845a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f6318));
  iVar3 = 4;
  puVar4 = (undefined4 *)((int)this + 0x13c);
  do {
    iVar1 = puVar4[-4];
    if (iVar1 != 0) {
      F_00429760(iVar1,(puVar4[-2] - iVar1 >> 2) * 4,0xd5);
    }
    iVar3 = iVar3 - 1;
    puVar4[-4] = 0;
    puVar4[-3] = 0;
    puVar4[-2] = 0;
    puVar4 = puVar4 - 4;
  } while (-1 < iVar3);
  iVar3 = 4;
  puVar4 = (undefined4 *)((int)this + 0xec);
  do {
    iVar1 = puVar4[-4];
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar5 = F_00429760(iVar1,(puVar4[-2] - iVar1 >> 2) * 4,0xd5);
      uVar2 = (uint)uVar5;
    }
    iVar3 = iVar3 - 1;
    puVar4[-4] = 0;
    puVar4[-3] = 0;
    puVar4[-2] = 0;
    puVar4 = puVar4 - 4;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_00b84640 */
GEN_FRAME uint GEN_THISCALL F_00b84640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb84640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  
  piVar4 = param_1;
  if (param_1 < &REFG(undefined, 0x5)) {
    piVar1 = (int *)((int)this + (int)((int)(uintptr_t)param_1) * 0x10 + 0x9c);
    uVar5 = piVar1[1] - *piVar1 >> 2;
    piVar4 = piVar1;
    if (uVar5 != 0) {
      iVar2 = *piVar1;
      uVar6 = 0;
      do {
        piVar4 = *(int * PTR32 *)(iVar2 + uVar6 * 4);
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_FWD)));
        puVar3 = *(undefined4 * PTR32 *)(iVar2 + uVar6 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1)));
          *(undefined4 *)(iVar2 + uVar6 * 4) = 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      iVar2 = *piVar1;
      if (iVar2 != piVar1[1]) {
        piVar4 = (int *)F_00c46e20(iVar2,piVar1[1],0);
        piVar1[1] = iVar2;
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00b846d0 */
GEN_FRAME uint GEN_THISCALL F_00b846d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb846d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int local_8;
  
  piVar6 = (int *)((int)this + 0xa0);
  local_8 = 5;
  do {
    uVar4 = *piVar6 - piVar6[-1] >> 2;
    uVar5 = 0;
    if (uVar4 != 0) {
      iVar1 = piVar6[-1];
      uVar7 = 0;
      do {
        piVar2 = *(int * PTR32 *)(iVar1 + uVar7 * 4);
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_FWD);
        puVar3 = *(undefined4 * PTR32 *)(iVar1 + uVar7 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          uVar5 = ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
          *(undefined4 *)(iVar1 + uVar7 * 4) = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
      iVar1 = piVar6[-1];
      if (iVar1 != *piVar6) {
        uVar5 = F_00c46e20(iVar1,*piVar6,0);
        *piVar6 = iVar1;
      }
    }
    piVar6 = piVar6 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return uVar5;
}

/* ref: FUN_00b84760 */
GEN_FRAME uint GEN_THISCALL F_00b84760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb84760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  int local_14;
  int local_c;
  
  piVar4 = (int *)((int)this + 0xf0);
  local_14 = 5;
  do {
    uVar3 = *piVar4 - piVar4[-1] >> 2;
    if (uVar3 != 0) {
      piVar5 = (int *)((int)this + 0x9c);
      local_c = 5;
      do {
        uVar7 = piVar5[1] - *piVar5 >> 2;
        if (uVar7 != 0) {
          iVar1 = *piVar5;
          uVar6 = 0;
          do {
            F_00bbeae0(*(undefined * PTR32 *)(iVar1 + uVar6 * 4) GEN_EDX_FWD);
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar7);
        }
        piVar5 = piVar5 + 4;
        local_c = local_c - 1;
      } while (local_c != 0);
      iVar1 = piVar4[-1];
      uVar6 = 0;
      uVar7 = uVar3;
      if (uVar3 != 0) {
        do {
          piVar5 = *(int * PTR32 *)(iVar1 + uVar6 * 4);
          uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5 GEN_EDX_ARG);
          puVar2 = *(undefined4 * PTR32 *)(iVar1 + uVar6 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            uVar7 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
            *(undefined4 *)(iVar1 + uVar6 * 4) = 0;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      uVar3 = uVar7;
      iVar1 = piVar4[-1];
      if (iVar1 != *piVar4) {
        uVar3 = F_00c46e20(iVar1,*piVar4,0);
        *piVar4 = iVar1;
      }
    }
    piVar4 = piVar4 + 4;
    local_14 = local_14 - 1;
  } while (local_14 != 0);
  return uVar3;
}

/* ref: FUN_00b84860 */
GEN_NOFRAME uint GEN_THISCALL F_00b84860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb84860u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f6318));
  in_ecx[0x26] = 0;
  in_ecx[0x24] = GEN_FLT_TO(in_ecx[0x24], REFG(float, 0x1087f04));
  in_ecx[0x27] = 0;
  in_ecx[0x28] = 0;
  in_ecx[0x29] = 0;
  in_ecx[0x2b] = 0;
  in_ecx[0x2c] = 0;
  in_ecx[0x2d] = 0;
  in_ecx[0x2f] = 0;
  in_ecx[0x30] = 0;
  in_ecx[0x31] = 0;
  in_ecx[0x33] = 0;
  in_ecx[0x34] = 0;
  in_ecx[0x35] = 0;
  in_ecx[0x37] = 0;
  in_ecx[0x38] = 0;
  in_ecx[0x39] = 0;
  in_ecx[0x3b] = 0;
  in_ecx[0x3c] = 0;
  in_ecx[0x3d] = 0;
  in_ecx[0x3f] = 0;
  in_ecx[0x40] = 0;
  in_ecx[0x41] = 0;
  in_ecx[0x43] = 0;
  in_ecx[0x44] = 0;
  in_ecx[0x45] = 0;
  in_ecx[0x47] = 0;
  in_ecx[0x48] = 0;
  in_ecx[0x49] = 0;
  in_ecx[0x4b] = 0;
  in_ecx[0x4c] = 0;
  in_ecx[0x4d] = 0;
  in_ecx[0x4f] = 0;
  in_ecx[0x50] = 0;
  in_ecx[0x51] = 0;
  in_ecx[0x52] = 0;
  in_ecx[0x53] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b84960 */
GEN_NOFRAME uint GEN_THISCALL F_00b84960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb84960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  F_00b846d0(this GEN_EDX_FWD);
  F_00b84760(this GEN_EDX_ARG);
  piVar3 = (int *)((int)this + 0x13c);
  iVar2 = 5;
  do {
    uVar1 = 0;
    if (*piVar3 != 0) {
      uVar1 = F_0050c620(*piVar3,0,0);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x98);
  if (piVar3 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b849c0 */
GEN_FRAME uint GEN_THISCALL F_00b849c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb849c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) < 5) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                                (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0xd0,0x10)));
    if (this_00 != (undefined *)0x0) {
      (*(uint *)&gen_args[1]) = F_00bbec00(this_00 GEN_EDX_ARG);
      if ((*(uint *)&gen_args[1]) != 0) {
        F_00b87640(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar1 * 0x10 + 0x9c))) GEN_EDX_ARG,&(*(uint *)&gen_args[1]));
      }
      return (*(uint *)&gen_args[1]);
    }
  }
  return 0;
}

/* ref: FUN_00b84a20 */
GEN_FRAME uint GEN_THISCALL F_00b84a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb84a20u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar1 = (*(uint *)&gen_args[2]);
  uVar2 = 0;
  if ((*(uint *)&gen_args[2]) < 5) {
    switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[1]))) {
    case 0: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x110,0x10);
      if (uVar2 == 0) {
        return 0;
      }
      uVar2 = F_00bf6750(uVar2 GEN_EDX_ARG);
      break;
    case 1: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x150,0x10);
      if (uVar2 == 0) {
        return 0;
      }
      uVar2 = F_00bf5250(uVar2 GEN_EDX_ARG);
      break;
    case 2: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x100,0x10);
      if (uVar2 == 0) {
        return 0;
      }
      uVar2 = F_00bf36f0(uVar2 GEN_EDX_ARG);
      break;
    case 3: ;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x110,0x10)));
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
      uVar2 = F_00bf3780(this_00 GEN_EDX_ARG);
      break;
    case 4: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0xc0,0x10);
      if (uVar2 == 0) {
        return 0;
      }
      uVar2 = F_00bf1640(uVar2 GEN_EDX_ARG);
      break;
    default: ;
      goto switchD_00b84a41_default;
    }
    if (uVar2 != 0) {
      (*(uint *)&gen_args[2]) = uVar2;
      F_00b876b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar1 * 0x10 + 0xec))) GEN_EDX_ARG,&(*(uint *)&gen_args[2]));
      uVar2 = (*(uint *)&gen_args[2]);
    }
  }
switchD_00b84a41_default: ;
  return uVar2;
}

/* ref: FUN_00b84b40 */
GEN_FRAME uint GEN_THISCALL F_00b84b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb84b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined1 * puVar6;
  int * piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int * piVar11;
  uint local_14;
  undefined1 * local_10;
  int * local_c;
  
  puVar6 = param_1;
  if (param_1 < &REFG(undefined, 0x5)) {
    iVar5 = (int)((int)(uintptr_t)param_1) * 0x10;
    puVar6 = (undefined1 *)(iVar5 + (int)this);
    uVar8 = *(int *)(iVar5 + 0xf0 + (int)this) - *(int *)(iVar5 + 0xec + (int)this) >> 2;
    if (uVar8 != 0) {
      local_c = *(int * PTR32 *)(puVar6 + 0xec);
      uVar10 = *(int *)(puVar6 + 0xa0) - *(int *)(puVar6 + 0x9c) >> 2;
      if (uVar10 != 0) {
        iVar5 = *(int *)(puVar6 + 0x9c);
        uVar9 = 0;
        do {
          F_00bbeae0(*(undefined * PTR32 *)(iVar5 + uVar9 * 4) GEN_EDX_FWD);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar10);
      }
      local_14 = 0;
      if (uVar8 != 0) {
        do {
          bVar3 = true;
          local_10 = (undefined1 *)0x0;
          piVar11 = (int *)((int)this + 0xf0);
          do {
            if (&REFG(undefined, 0x4) < local_10) {
              if (bVar3) {
                ((GEN_TCODE *)*(gen_code32 *)(*(int *)*local_c + 0x10))((int *)*local_c GEN_EDX_ARG);
                puVar2 = (undefined4 *)*local_c;
                if (puVar2 != (undefined4 *)0x0) {
                  ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
                  *local_c = 0;
                }
              }
              break;
            }
            if ((local_10 != param_1) &&
               (uVar10 = piVar11[-0x14] - piVar11[-0x15] >> 2, uVar10 != 0)) {
              iVar5 = piVar11[-0x15];
              uVar9 = 0;
              do {
                bVar4 = F_00bbd8e0(*(undefined * PTR32 *)(iVar5 + uVar9 * 4) GEN_EDX_ARG,*local_c);
                if (bVar4 != 0) {
                  piVar7 = (int *)*piVar11;
                  if ((local_c < piVar7) && (piVar1 = (int *)piVar11[-1], piVar1 <= local_c)) {
                    if (piVar7 == (int *)piVar11[1]) {
                      iVar5 = (int)piVar7 - (int)((int)(uintptr_t)piVar1) >> 2;
                      if (iVar5 == -1) {
LAB_00b84d7e: ;
                    
                        F_00c4579a("vector<T> too long");
                      }
                      uVar9 = iVar5 + 1;
                      uVar10 = piVar11[1] - (int)((int)(uintptr_t)piVar1) >> 2;
                      if (uVar10 < uVar9) {
                        if (-(uVar10 >> 1) - 1 < uVar10) {
                          uVar10 = 0;
                        }
                        else {
                          uVar10 = uVar10 + (uVar10 >> 1);
                        }
                        if (uVar10 < uVar9) {
                          uVar10 = uVar9;
                        }
                        F_00b87160(piVar11 - 1 GEN_EDX_ARG,uVar10);
                      }
                    }
                    piVar7 = (int *)*piVar11;
                    if (piVar7 != (int *)0x0) {
                      iVar5 = *((int *)GEN_TOP((piVar11[-1] + ((int)local_c - (int)((int)(uintptr_t)piVar1) >> 2) * 4)));
LAB_00b84ce6: ;
                      *piVar7 = iVar5;
                    }
                  }
                  else {
                    if (piVar7 == (int *)piVar11[1]) {
                      iVar5 = (int)piVar7 - piVar11[-1] >> 2;
                      if (iVar5 == -1) goto LAB_00b84d7e;
                      uVar9 = iVar5 + 1;
                      uVar10 = piVar11[1] - piVar11[-1] >> 2;
                      if (uVar10 < uVar9) {
                        if (-(uVar10 >> 1) - 1 < uVar10) {
                          uVar10 = 0;
                        }
                        else {
                          uVar10 = uVar10 + (uVar10 >> 1);
                        }
                        if (uVar10 < uVar9) {
                          uVar10 = uVar9;
                        }
                        F_00b87160(piVar11 - 1 GEN_EDX_ARG,uVar10);
                      }
                    }
                    piVar7 = (int *)*piVar11;
                    if (piVar7 != (int *)0x0) {
                      iVar5 = *local_c;
                      goto LAB_00b84ce6;
                    }
                  }
                  *piVar11 = *piVar11 + 4;
                  bVar3 = false;
                  break;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar10);
            }
            local_10 = local_10 + 1;
            piVar11 = piVar11 + 4;
          } while (bVar3);
          local_c = local_c + 1;
          local_14 = local_14 + 1;
        } while (local_14 < uVar8);
      }
      iVar5 = *(int *)(puVar6 + 0xec);
      if (iVar5 != *(int *)(puVar6 + 0xf0)) {
        F_00c46e20(iVar5,*(int *)(puVar6 + 0xf0),0);
        *(int *)(puVar6 + 0xf0) = iVar5;
      }
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_00b84d90 */
GEN_FRAME uint GEN_THISCALL F_00b84d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb84d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint in_EAX = 0;
  
  if (param_1 < 5) {
    F_00b84640(this GEN_EDX_FWD,param_1);
    F_00b84b40(this GEN_EDX_ARG,param_1);
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x13c);
    in_EAX = 0;
    if (iVar1 != 0) {
      in_EAX = F_0050c620(iVar1,0,0);
      *(undefined4 *)((int)this + param_1 * 4 + 0x13c) = 0;
    }
  }
  return in_EAX;
}

/* ref: FUN_00b84de0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b84de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb84de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined * pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  uint * PTR32 * ppuVar7;
  byte * pbVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined * pvVar12;
  undefined * PTR32 * ppvVar13;
  undefined * PTR32 * ppvVar14;
  uint * puVar15;
  undefined * PTR32 * ppvVar16;
  ushort * puVar17;
  byte * pbVar18;
  int iVar19;
  uint uVar20;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  iVar19 = *(int *)((int)this + (*(uint *)&gen_a2) * 4 + 0x13c);
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = this;
  (*(int *)(gen_frame + 0x70)) = param_1;
  (*(uint *)(gen_frame + 0x6c)) = (*(uint *)&gen_a2);
  if (iVar19 != param_1) {
    if ((iVar19 != 0) && ((*(uint *)&gen_a2) < 5)) {
      F_00b84640(this GEN_EDX_FWD,(*(uint *)&gen_a2));
      F_00b84b40(this GEN_EDX_ARG,(*(uint *)&gen_a2));
      iVar19 = *(int *)((int)this + (*(uint *)&gen_a2) * 4 + 0x13c);
      if (iVar19 != 0) {
        F_0050c620(iVar19,0,0);
        *(undefined4 *)((int)this + (*(uint *)&gen_a2) * 4 + 0x13c) = 0;
      }
    }
    *(int *)((int)this + (*(uint *)&gen_a2) * 4 + 0x13c) = (*(int *)(gen_frame + 0x70));
    F_00513f60((*(int *)(gen_frame + 0x70)),0,0);
    bVar9 = *(byte *)((*(int *)(gen_frame + 0x70)) + 0xb8);
    pvVar12 = *(undefined * PTR32 *)((int)this + 0x98);
    (*(undefined * PTR32 *)(gen_frame + 0x60)) = pvVar12;
    (*(byte *)(gen_frame + 0x5d)) = bVar9;
    if (bVar9 != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x7c)) = (byte *)0x0;
      ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)(uint)bVar9;
      do {
        pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x7c)) + *(int *)((*(int *)(gen_frame + 0x70)) + 0xc0);
        uVar10 = F_00623160(pvVar12 GEN_EDX_ARG,pbVar18 + 0x20);
        ((undefined * PTR32 *)(gen_frame + 0x74))[0] = (undefined *)(uVar10 & 0xffff);
        uVar10 = F_00623160(pvVar12 GEN_EDX_ARG,pbVar18 + 0x40);
        (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)(uVar10 & 0xffff);
        if (((short)((undefined * PTR32 *)(gen_frame + 0x74))[0] != -1) && ((short)uVar10 != -1)) {
          if ((*(uint *)(gen_frame + 0x6c)) < 5) {
            uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x110,0x10);
            if (uVar10 == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = F_00bf6750(uVar10 GEN_EDX_ARG);
              (*(uint *)(gen_frame + 0x80)) = uVar10;
              if (uVar10 != 0) {
                F_00b876b0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0xec) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x80)));
                uVar10 = (*(uint *)(gen_frame + 0x80));
              }
            }
          }
          else {
            uVar10 = 0;
          }
          fVar4 = *(float *)(pbVar18 + 0x78);
          (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(pbVar18 + 0x60);
          (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(pbVar18 + 100);
          (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(pbVar18 + 0x68);
          (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(pbVar18 + 0x6c);
          (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(pbVar18 + 0x70);
          (*(float *)(gen_frame + 0x48)) = *(float *)(pbVar18 + 0x74);
          F_00bf68b0(uVar10 GEN_EDX_ARG,pvVar12,pbVar18,((undefined * PTR32 *)(gen_frame + 0x74))[0],(*(uint * PTR32 *)(gen_frame + 0x88)),&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)),fVar4);
        }
        (*(byte * PTR32 *)(gen_frame + 0x7c)) = (*(byte * PTR32 *)(gen_frame + 0x7c)) + 0x7c;
        pvVar1 = (undefined *)((int)((undefined * PTR32 *)(gen_frame + 0x74))[1] - 1);
        ((undefined * PTR32 *)(gen_frame + 0x74))[1] = pvVar1;
      } while (pvVar1 != (undefined *)0x0);
    }
    bVar9 = *(byte *)((*(int *)(gen_frame + 0x70)) + 0xb9);
    (*(byte *)(gen_frame + 0x5f)) = bVar9;
    if (bVar9 != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x7c)) = (byte *)0x0;
      ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)(uint)bVar9;
      do {
        pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x7c)) + *(int *)((*(int *)(gen_frame + 0x70)) + 0xc4);
        uVar10 = F_00623160(pvVar12 GEN_EDX_ARG,pbVar18 + 0x20);
        (*(uint *)(gen_frame + 0x80)) = uVar10 & 0xffff;
        if ((short)uVar10 != -1) {
          if ((*(uint *)(gen_frame + 0x6c)) < 5) {
            uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x150,0x10);
            if (uVar10 == 0) {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)0x0;
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
            }
            else {
              puVar15 = (uint *)F_00bf5250(uVar10 GEN_EDX_ARG);
              (*(uint * PTR32 *)(gen_frame + 0x88)) = puVar15;
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              if (puVar15 != (uint *)0x0) {
                puVar15 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0xec);
                ppuVar7 = (uint * PTR32 *)puVar15[1];
                if ((&(*(uint * PTR32 *)(gen_frame + 0x88)) < ppuVar7) && ((uint * PTR32 *)*puVar15 <= &(*(uint * PTR32 *)(gen_frame + 0x88)))) {
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)((int)&(*(uint * PTR32 *)(gen_frame + 0x88)) - (int)*puVar15 >> 2);
                  if (ppuVar7 == (uint * PTR32 *)puVar15[2]) {
                    F_00b87480(puVar15 GEN_EDX_ARG,1);
                  }
                  if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar15[1] = *(undefined4 *)(*puVar15 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) * 4);
                  }
                }
                else {
                  if (ppuVar7 == (uint * PTR32 *)puVar15[2]) {
                    F_00b87480(puVar15 GEN_EDX_ARG,1);
                  }
                  if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar15[1] = (*(uint * PTR32 *)(gen_frame + 0x88));
                  }
                }
                puVar15[1] = puVar15[1] + 4;
                puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
                pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              }
            }
          }
          else {
            puVar15 = (uint *)0x0;
          }
          fVar4 = *(float *)(pbVar18 + 0x70);
          (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)(pbVar18 + 0x40);
          (*(undefined4 *)(gen_frame + 0x94)) = *(undefined4 *)(pbVar18 + 0x44);
          (*(undefined4 *)(gen_frame + 0x98)) = *(undefined4 *)(pbVar18 + 0x48);
          (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(pbVar18 + 0x4c);
          (*(undefined4 *)(gen_frame + 0xa4)) = *(undefined4 *)(pbVar18 + 0x50);
          (*(undefined4 *)(gen_frame + 0xa8)) = *(undefined4 *)(pbVar18 + 0x54);
          (*(undefined4 *)(gen_frame + 0xb0)) = *(undefined4 *)(pbVar18 + 0x58);
          (*(undefined4 *)(gen_frame + 0xb4)) = *(undefined4 *)(pbVar18 + 0x5c);
          (*(undefined4 *)(gen_frame + 0xb8)) = *(undefined4 *)(pbVar18 + 0x60);
          (*(undefined4 *)(gen_frame + 0xc0)) = *(undefined4 *)(pbVar18 + 100);
          (*(undefined4 *)(gen_frame + 0xc4)) = *(undefined4 *)(pbVar18 + 0x68);
          (*(undefined4 *)(gen_frame + 0xc8)) = *(undefined4 *)(pbVar18 + 0x6c);
          F_00bf51e0(puVar15 GEN_EDX_ARG,pvVar12,pbVar18,(*(uint *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0x90)),fVar4);
        }
        (*(byte * PTR32 *)(gen_frame + 0x7c)) = (*(byte * PTR32 *)(gen_frame + 0x7c)) + 0x74;
        pvVar1 = (undefined *)((int)((undefined * PTR32 *)(gen_frame + 0x74))[1] - 1);
        ((undefined * PTR32 *)(gen_frame + 0x74))[1] = pvVar1;
      } while (pvVar1 != (undefined *)0x0);
    }
    (*(byte *)(gen_frame + 0x64)) = *(byte *)((*(int *)(gen_frame + 0x70)) + 0xba);
    (*(byte *)(gen_frame + 0x8f)) = 0;
    pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
    if (*(byte *)((*(int *)(gen_frame + 0x70)) + 0xba) != 0) {
      do {
        iVar19 = (uint)(*(byte *)(gen_frame + 0x8f)) * 0x5c + *(int *)((*(int *)(gen_frame + 0x70)) + 200);
        uVar10 = F_00623160(pvVar12 GEN_EDX_ARG,iVar19 + 0x20);
        (*(uint *)(gen_frame + 0x80)) = uVar10 & 0xffff;
        if ((short)uVar10 != -1) {
          if ((*(uint *)(gen_frame + 0x6c)) < 5) {
            uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x100,0x10);
            if (uVar10 == 0) {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)0x0;
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
            }
            else {
              puVar15 = (uint *)F_00bf36f0(uVar10 GEN_EDX_ARG);
              (*(uint * PTR32 *)(gen_frame + 0x88)) = puVar15;
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              if (puVar15 != (uint *)0x0) {
                puVar15 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0xec);
                ppuVar7 = (uint * PTR32 *)puVar15[1];
                if ((&(*(uint * PTR32 *)(gen_frame + 0x88)) < ppuVar7) && ((uint * PTR32 *)*puVar15 <= &(*(uint * PTR32 *)(gen_frame + 0x88)))) {
                  ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)((int)&(*(uint * PTR32 *)(gen_frame + 0x88)) - (int)*puVar15 >> 2);
                  if (ppuVar7 == (uint * PTR32 *)puVar15[2]) {
                    iVar11 = (int)((int)ppuVar7 - *puVar15) >> 2;
                    if (iVar11 == -1) goto LAB_00b853e3;
                    ppvVar14 = (undefined * PTR32 *)(iVar11 + 1);
                    ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)((int)puVar15[2] - *puVar15) >> 2)));
                    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar14;
                    if (ppvVar16 < ppvVar14) {
                      if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar16) >> 1) - 1))) < ppvVar16) {
                        ppvVar16 = (undefined * PTR32 *)0x0;
                      }
                      else {
                        ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar16 + ((uint)((int)(uintptr_t)ppvVar16) >> 1))));
                      }
                      if (ppvVar16 < ppvVar14) {
                        ppvVar16 = ppvVar14;
                      }
                      F_00b87160(puVar15 GEN_EDX_ARG,ppvVar16);
                    }
                  }
                  if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar15[1] = *(undefined4 *)(*puVar15 + (int)((undefined * PTR32 *)(gen_frame + 0x74))[1] * 4);
                  }
                }
                else {
                  if (ppuVar7 == (uint * PTR32 *)puVar15[2]) {
                    iVar11 = (int)((int)ppuVar7 - *puVar15) >> 2;
                    if (iVar11 == -1) goto LAB_00b853e3;
                    ppvVar14 = (undefined * PTR32 *)(iVar11 + 1);
                    ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)((int)puVar15[2] - *puVar15) >> 2)));
                    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar14;
                    if (ppvVar16 < ppvVar14) {
                      if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar16) >> 1) - 1))) < ppvVar16) {
                        ppvVar16 = (undefined * PTR32 *)0x0;
                      }
                      else {
                        ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar16 + ((uint)((int)(uintptr_t)ppvVar16) >> 1))));
                      }
                      if (ppvVar16 < ppvVar14) {
                        ppvVar16 = ppvVar14;
                      }
                      F_00b87160(puVar15 GEN_EDX_ARG,ppvVar16);
                    }
                  }
                  if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar15[1] = (*(uint * PTR32 *)(gen_frame + 0x88));
                  }
                }
                puVar15[1] = puVar15[1] + 4;
                puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
                pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              }
            }
          }
          else {
            puVar15 = (uint *)0x0;
          }
          fVar4 = *(float *)(iVar19 + 0x58);
          (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar19 + 0x40);
          (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar19 + 0x44);
          (*(float *)(gen_frame + 0x48)) = *(float *)(iVar19 + 0x48);
          (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar19 + 0x4c);
          (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar19 + 0x50);
          (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar19 + 0x54);
          F_00bf3840(puVar15 GEN_EDX_ARG,pvVar12,iVar19,(*(uint *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x30)),fVar4);
        }
        bVar9 = (*(byte *)(gen_frame + 0x8f)) + 1;
        (*(byte *)(gen_frame + 0x8f)) = bVar9;
      } while (bVar9 < (*(byte *)(gen_frame + 0x64)));
    }
    (*(byte *)(gen_frame + 0x67)) = *(byte *)((*(int *)(gen_frame + 0x70)) + 0xbb);
    (*(byte *)(gen_frame + 0x8f)) = 0;
    pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
    if (*(byte *)((*(int *)(gen_frame + 0x70)) + 0xbb) != 0) {
      do {
        iVar19 = (uint)(*(byte *)(gen_frame + 0x8f)) * 0xa8 + *(int *)((*(int *)(gen_frame + 0x70)) + 0xcc);
        uVar10 = F_00623160(pvVar12 GEN_EDX_ARG,iVar19 + 0x20);
        (*(byte * PTR32 *)(gen_frame + 0x7c)) = (byte *)(uVar10 & 0xffff);
        uVar10 = F_00623160(pvVar12 GEN_EDX_ARG,iVar19 + 0x40);
        (*(uint *)(gen_frame + 0x80)) = uVar10 & 0xffff;
        uVar10 = F_00623160(pvVar12 GEN_EDX_ARG,iVar19 + 0x60);
        ((undefined * PTR32 *)(gen_frame + 0x74))[0] = (undefined *)(uVar10 & 0xffff);
        if ((((short)(*(byte * PTR32 *)(gen_frame + 0x7c)) != -1) && ((short)(*(uint *)(gen_frame + 0x80)) != -1)) && ((short)uVar10 != -1)) {
          if ((*(uint *)(gen_frame + 0x6c)) < 5) {
            pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x110,0x10)));
            if (pvVar12 == (undefined *)0x0) {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)0x0;
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
            }
            else {
              puVar15 = (uint *)F_00bf3780(pvVar12 GEN_EDX_ARG);
              (*(uint * PTR32 *)(gen_frame + 0x88)) = puVar15;
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              if (puVar15 != (uint *)0x0) {
                puVar15 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0xec);
                ppuVar7 = (uint * PTR32 *)puVar15[1];
                if ((&(*(uint * PTR32 *)(gen_frame + 0x88)) < ppuVar7) && ((uint * PTR32 *)*puVar15 <= &(*(uint * PTR32 *)(gen_frame + 0x88)))) {
                  ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)((int)&(*(uint * PTR32 *)(gen_frame + 0x88)) - (int)*puVar15 >> 2);
                  if (ppuVar7 == (uint * PTR32 *)puVar15[2]) {
                    iVar11 = (int)((int)ppuVar7 - *puVar15) >> 2;
                    if (iVar11 == -1) goto LAB_00b853e3;
                    ppvVar14 = (undefined * PTR32 *)(iVar11 + 1);
                    ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)((int)puVar15[2] - *puVar15) >> 2)));
                    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar14;
                    if (ppvVar16 < ppvVar14) {
                      if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar16) >> 1) - 1))) < ppvVar16) {
                        ppvVar16 = (undefined * PTR32 *)0x0;
                      }
                      else {
                        ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar16 + ((uint)((int)(uintptr_t)ppvVar16) >> 1))));
                      }
                      if (ppvVar16 < ppvVar14) {
                        ppvVar16 = ppvVar14;
                      }
                      F_00b87160(puVar15 GEN_EDX_ARG,ppvVar16);
                    }
                  }
                  if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar15[1] = *(undefined4 *)(*puVar15 + (int)((undefined * PTR32 *)(gen_frame + 0x74))[1] * 4);
                  }
                }
                else {
                  if (ppuVar7 == (uint * PTR32 *)puVar15[2]) {
                    iVar11 = (int)((int)ppuVar7 - *puVar15) >> 2;
                    if (iVar11 == -1) goto LAB_00b853e3;
                    ppvVar14 = (undefined * PTR32 *)(iVar11 + 1);
                    ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)((int)puVar15[2] - *puVar15) >> 2)));
                    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar14;
                    if (ppvVar16 < ppvVar14) {
                      if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar16) >> 1) - 1))) < ppvVar16) {
                        ppvVar16 = (undefined * PTR32 *)0x0;
                      }
                      else {
                        ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar16 + ((uint)((int)(uintptr_t)ppvVar16) >> 1))));
                      }
                      if (ppvVar16 < ppvVar14) {
                        ppvVar16 = ppvVar14;
                      }
                      F_00b87160(puVar15 GEN_EDX_ARG,ppvVar16);
                    }
                  }
                  if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar15[1] = (*(uint * PTR32 *)(gen_frame + 0x88));
                  }
                }
                puVar15[1] = puVar15[1] + 4;
                puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
                pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              }
            }
          }
          else {
            puVar15 = (uint *)0x0;
          }
          fVar4 = *(float *)(iVar19 + 0xa4);
          (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(iVar19 + 0x80);
          (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar19 + 0x84);
          (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(iVar19 + 0x88);
          (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar19 + 0x8c);
          (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar19 + 0x90);
          (*(float *)(gen_frame + 0x48)) = *(float *)(iVar19 + 0x94);
          (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar19 + 0x98);
          (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar19 + 0x9c);
          (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar19 + 0xa0);
          F_00bf38d0(puVar15 GEN_EDX_ARG,pvVar12,iVar19,(*(byte * PTR32 *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x80)),((undefined * PTR32 *)(gen_frame + 0x74))[0],&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x40)),
                       &(*(undefined4 *)(gen_frame + 0x30)),fVar4);
        }
        bVar9 = (*(byte *)(gen_frame + 0x8f)) + 1;
        (*(byte *)(gen_frame + 0x8f)) = bVar9;
      } while (bVar9 < (*(byte *)(gen_frame + 0x67)));
    }
    (*(byte *)(gen_frame + 0x66)) = *(byte *)((*(int *)(gen_frame + 0x70)) + 0xbc);
    (*(byte *)(gen_frame + 0x8f)) = 0;
    pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
    if (*(byte *)((*(int *)(gen_frame + 0x70)) + 0xbc) != 0) {
      do {
        pbVar18 = ((byte *)GEN_TOP(((uint)(*(byte *)(gen_frame + 0x8f)) * 0x50 + *(int *)((*(int *)(gen_frame + 0x70)) + 0xd0))));
        (*(byte * PTR32 *)(gen_frame + 0x7c)) = pbVar18;
        uVar10 = F_00623160(pvVar12 GEN_EDX_ARG,pbVar18 + 0x20);
        ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)(uVar10 & 0xffff);
        if ((short)uVar10 != -1) {
          if ((*(uint *)(gen_frame + 0x6c)) < 5) {
            uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0xc0,0x10);
            if (uVar10 == 0) {
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)0x0;
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
            }
            else {
              puVar15 = (uint *)F_00bf1640(uVar10 GEN_EDX_ARG);
              (*(uint * PTR32 *)(gen_frame + 0x88)) = puVar15;
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
              pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              if (puVar15 != (uint *)0x0) {
                puVar15 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0xec);
                ppuVar7 = (uint * PTR32 *)puVar15[1];
                if ((&(*(uint * PTR32 *)(gen_frame + 0x88)) < ppuVar7) && ((uint * PTR32 *)*puVar15 <= &(*(uint * PTR32 *)(gen_frame + 0x88)))) {
                  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)((int)&(*(uint * PTR32 *)(gen_frame + 0x88)) - (int)*puVar15 >> 2);
                  if (ppuVar7 == (uint * PTR32 *)puVar15[2]) {
                    iVar19 = (int)((int)ppuVar7 - *puVar15) >> 2;
                    if (iVar19 == -1) goto LAB_00b853e3;
                    uVar20 = iVar19 + 1;
                    uVar10 = (int)((int)puVar15[2] - *puVar15) >> 2;
                    pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x7c));
                    if (uVar10 < uVar20) {
                      if (-(uVar10 >> 1) - 1 < uVar10) {
                        uVar10 = 0;
                      }
                      else {
                        uVar10 = uVar10 + (uVar10 >> 1);
                      }
                      if (uVar10 < uVar20) {
                        uVar10 = uVar20;
                      }
                      F_00b87160(puVar15 GEN_EDX_ARG,uVar10);
                      pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x7c));
                    }
                  }
                  if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar15[1] = *(undefined4 *)(*puVar15 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84))) * 4);
                  }
                }
                else {
                  if (ppuVar7 == (uint * PTR32 *)puVar15[2]) {
                    iVar19 = (int)((int)ppuVar7 - *puVar15) >> 2;
                    if (iVar19 == -1) goto LAB_00b853e3;
                    uVar20 = iVar19 + 1;
                    uVar10 = (int)((int)puVar15[2] - *puVar15) >> 2;
                    if (uVar10 < uVar20) {
                      if (-(uVar10 >> 1) - 1 < uVar10) {
                        uVar10 = 0;
                      }
                      else {
                        uVar10 = uVar10 + (uVar10 >> 1);
                      }
                      if (uVar10 < uVar20) {
                        uVar10 = uVar20;
                      }
                      F_00b87160(puVar15 GEN_EDX_ARG,uVar10);
                      pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x7c));
                    }
                  }
                  if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
                    *(undefined4 *)puVar15[1] = (*(uint * PTR32 *)(gen_frame + 0x88));
                  }
                }
                puVar15[1] = puVar15[1] + 4;
                puVar15 = (*(uint * PTR32 *)(gen_frame + 0x88));
                pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x60));
              }
            }
          }
          else {
            puVar15 = (uint *)0x0;
          }
          fVar4 = *(float *)(pbVar18 + 0x4c);
          (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(pbVar18 + 0x40);
          (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(pbVar18 + 0x44);
          (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(pbVar18 + 0x48);
          F_00bf1710(puVar15 GEN_EDX_ARG,pvVar12,pbVar18,((undefined * PTR32 *)(gen_frame + 0x74))[1],&(*(undefined4 *)(gen_frame + 0x20)),fVar4);
        }
        bVar9 = (*(byte *)(gen_frame + 0x8f)) + 1;
        (*(byte *)(gen_frame + 0x8f)) = bVar9;
      } while (bVar9 < (*(byte *)(gen_frame + 0x66)));
    }
    (*(byte *)(gen_frame + 0x5e)) = *(byte *)((*(int *)(gen_frame + 0x70)) + 0xb0);
    (*(byte *)(gen_frame + 0x65)) = 0;
    if (*(byte *)((*(int *)(gen_frame + 0x70)) + 0xb0) != 0) {
      do {
        pbVar18 = ((byte *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x70)) + 0xb4) + (uint)(*(byte *)(gen_frame + 0x65)) * 0x48)));
        (*(byte * PTR32 *)(gen_frame + 0x7c)) = pbVar18;
        (*(byte *)(gen_frame + 0x5c)) = pbVar18[2];
        if (((*(uint *)(gen_frame + 0x6c)) < 5) &&
           (pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0xd0,0x10))),
           pvVar12 != (undefined *)0x0)) {
          pvVar12 = (undefined *)F_00bbec00(pvVar12 GEN_EDX_ARG);
          ((undefined * PTR32 *)(gen_frame + 0x74))[0] = pvVar12;
          if (pvVar12 != (undefined *)0x0) {
            puVar15 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x6c)) * 0x10 + 0x9c);
            ppvVar16 = (undefined * PTR32 *)puVar15[1];
            (*(uint * PTR32 *)(gen_frame + 0x88)) = puVar15;
            if (((undefined * PTR32 *)(gen_frame + 0x74)) < ppvVar16) {
              ppvVar14 = (undefined * PTR32 *)*puVar15;
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar14;
              if (((undefined * PTR32 *)(gen_frame + 0x74)) < ppvVar14) goto LAB_00b858ab;
              ((undefined * PTR32 *)(gen_frame + 0x74))[1] = (undefined *)((int)((undefined * PTR32 *)(gen_frame + 0x74)) - (int)((int)(uintptr_t)ppvVar14) >> 2);
              if (ppvVar16 == (undefined * PTR32 *)puVar15[2]) {
                iVar19 = (int)ppvVar16 - (int)((int)(uintptr_t)ppvVar14) >> 2;
                if (iVar19 == -1) goto LAB_00b853e3;
                ppvVar13 = (undefined * PTR32 *)(iVar19 + 1);
                ppvVar16 = (undefined * PTR32 *)((int)puVar15[2] - (int)((int)(uintptr_t)ppvVar14) >> 2);
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar13;
                if (ppvVar16 < ppvVar13) {
                  if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar16) >> 1) - 1))) < ppvVar16) {
                    ppvVar16 = (undefined * PTR32 *)0x0;
                  }
                  else {
                    ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar16 + ((uint)((int)(uintptr_t)ppvVar16) >> 1))));
                  }
                  if (ppvVar16 < ppvVar13) {
                    ppvVar16 = ppvVar13;
                  }
                  F_00b870b0(puVar15 GEN_EDX_ARG,ppvVar16);
                }
              }
              if ((undefined4 *)(*(uint * PTR32 *)(gen_frame + 0x88))[1] != (undefined4 *)0x0) {
                *(undefined4 *)(*(uint * PTR32 *)(gen_frame + 0x88))[1] = *(undefined4 *)(*(*(uint * PTR32 *)(gen_frame + 0x88)) + (int)((undefined * PTR32 *)(gen_frame + 0x74))[1] * 4);
              }
              (*(uint * PTR32 *)(gen_frame + 0x88))[1] = (*(uint * PTR32 *)(gen_frame + 0x88))[1] + 4;
            }
            else {
LAB_00b858ab: ;
              if (ppvVar16 == (undefined * PTR32 *)puVar15[2]) {
                iVar19 = (int)((int)ppvVar16 - *puVar15) >> 2;
                if (iVar19 == -1) {
LAB_00b853e3: ;
                    
                  F_00c4579a("vector<T> too long");
                }
                ppvVar14 = (undefined * PTR32 *)(iVar19 + 1);
                ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)((int)puVar15[2] - *puVar15) >> 2)));
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar14;
                if (ppvVar16 < ppvVar14) {
                  if (((undefined * PTR32 *)GEN_TOP((-((uint)((int)(uintptr_t)ppvVar16) >> 1) - 1))) < ppvVar16) {
                    ppvVar16 = (undefined * PTR32 *)0x0;
                  }
                  else {
                    ppvVar16 = ((undefined * PTR32 *)GEN_TOP(((int)ppvVar16 + ((uint)((int)(uintptr_t)ppvVar16) >> 1))));
                  }
                  if (ppvVar16 < ppvVar14) {
                    ppvVar16 = ppvVar14;
                  }
                  F_00b870b0(puVar15 GEN_EDX_ARG,ppvVar16);
                }
              }
              if ((undefined4 *)(*(uint * PTR32 *)(gen_frame + 0x88))[1] != (undefined4 *)0x0) {
                *(undefined4 *)(*(uint * PTR32 *)(gen_frame + 0x88))[1] = pvVar12;
              }
              (*(uint * PTR32 *)(gen_frame + 0x88))[1] = (*(uint * PTR32 *)(gen_frame + 0x88))[1] + 4;
            }
            F_00bbd9a0(pvVar12 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x60)));
            *(uint *)((int)pvVar12 + 0x10) = (uint)pbVar18[0x25];
            uVar2 = *(undefined4 *)(pbVar18 + 0xc);
            uVar3 = *(undefined4 *)(pbVar18 + 0x10);
            *(undefined4 *)((int)pvVar12 + 0x30) = *(undefined4 *)(pbVar18 + 8);
            *(undefined4 *)((int)pvVar12 + 0x34) = uVar2;
            *(undefined4 *)((int)pvVar12 + 0x38) = uVar3;
            (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(pbVar18 + 0x14);
            (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(pbVar18 + 0x18);
            (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(pbVar18 + 0x1c);
            F_00a05ee0(pvVar12 GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
            *(undefined2 *)((int)pvVar12 + 0x6c) = *(undefined2 *)(pbVar18 + 0x20);
            *(undefined2 *)((int)pvVar12 + 0x6e) = *(undefined2 *)(pbVar18 + 0x22);
            *(byte *)((int)pvVar12 + 0xc4) = pbVar18[0x24] & 1;
            *(byte *)((int)pvVar12 + 0xc6) = pbVar18[0x24] >> 1 & 1;
            *(byte *)((int)pvVar12 + 200) = pbVar18[0x24] >> 2 & 1;
            *(byte *)((int)pvVar12 + 199) = pbVar18[0x24] >> 3 & 1;
            *(byte *)((int)pvVar12 + 0xc9) = pbVar18[0x24] >> 4 & 1;
            (*(byte *)(gen_frame + 0x8f)) = *pbVar18;
            if ((*(byte *)(gen_frame + 0x5c)) != 0) {
              (*(uint *)(gen_frame + 0x80)) = 0;
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(uint)(*(byte *)(gen_frame + 0x5c));
              do {
                puVar17 = ((ushort *)GEN_TOP((*(int *)(pbVar18 + 0x30) + (*(uint *)(gen_frame + 0x80)))));
                pvVar12 = (undefined *)F_00b87870((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,((undefined * PTR32 *)(gen_frame + 0x74))[0],puVar17);
                ((undefined * PTR32 *)(gen_frame + 0x74))[1] = pvVar12;
                if (pvVar12 != (undefined *)0x0) {
                  *(undefined4 *)((int)pvVar12 + 0xac) = *(undefined4 *)(puVar17 + 2);
                  *(undefined4 *)((int)pvVar12 + 0xb0) = *(undefined4 *)(puVar17 + 4);
                  *(undefined4 *)((int)pvVar12 + 0xa0) = *(undefined4 *)(puVar17 + 6);
                  *(float *)((int)pvVar12 + 0xa4) =
                       ((float)GEN_TOF(((float10)1 - (float10)*(float *)(puVar17 + 8))));
                  *(undefined4 *)((int)pvVar12 + 0xa8) = *(undefined4 *)(puVar17 + 10);
                  *(char *)((int)pvVar12 + 0xba) = (char)puVar17[0x12];
                  (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)(*puVar17 - 1);
                  while (-1 < (int)(*(uint * PTR32 *)(gen_frame + 0x88))) {
                    uVar20 = (uint)(*(uint * PTR32 *)(gen_frame + 0x88)) & 0xffff;
                    iVar19 = *(int *)(puVar17 + 0x14) + uVar20 * 0x24;
                    (*(int *)(gen_frame + 0x1c)) = iVar19;
                    uVar10 = F_00b83880((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,iVar19);
                    if (uVar10 == 0) {
                      F_00bf97a0(((undefined * PTR32 *)(gen_frame + 0x74))[1] GEN_EDX_ARG,uVar20 + (*(byte *)(gen_frame + 0x8f)));
                    }
                    else {
                      F_00bff3f0(((undefined * PTR32 *)(gen_frame + 0x74))[1] GEN_EDX_ARG,uVar10,*(undefined4 *)((*(int *)(gen_frame + 0x1c)) + 0x20),0,
                                   uVar20 + (*(byte *)(gen_frame + 0x8f)),0,0);
                    }
                    (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x88)) - 1);
                    pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x7c));
                  }
                }
                (*(uint *)(gen_frame + 0x80)) = (*(uint *)(gen_frame + 0x80)) + 0x30;
                ppvVar16 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) - 1);
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar16;
              } while (ppvVar16 != (undefined * PTR32 *)0x0);
            }
            if (pbVar18[3] != 0) {
              iVar19 = 0;
              uVar10 = (uint)pbVar18[3];
              do {
                iVar11 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x7c)) + 0x34);
                uVar2 = *(undefined4 *)(iVar11 + 0xc + iVar19);
                puVar17 = (ushort *)(iVar11 + iVar19);
                fVar4 = ((float)GEN_TOF(((float10)1 - (float10)*(float *)(iVar11 + 0x10 + iVar19))));
                (*(float *)(gen_frame + 0x48)) = fVar4;
                (*(undefined4 *)(gen_frame + 0x44)) = uVar2;
                (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(puVar17 + 10);
                F_00bbed50(((undefined * PTR32 *)(gen_frame + 0x74))[0] GEN_EDX_ARG,(uint)*puVar17,(uint)puVar17[1],(uint)puVar17[2],
                             (uint)puVar17[3],*(float *)(puVar17 + 4),uVar2,
                             (undefined4)gen_fl2bits(fVar4),*(undefined4 *)(puVar17 + 10),
                             *(undefined4 *)(iVar11 + 0x18 + iVar19),
                             *(undefined4 *)(iVar11 + 0x1c + iVar19));
                iVar19 = iVar19 + 0x20;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((*(byte * PTR32 *)(gen_frame + 0x7c))[1] - 1);
            if (-1 < (int)(*(uint * PTR32 *)(gen_frame + 0x88))) {
              uVar10 = (uint)(*(byte *)(gen_frame + 0x8f));
              do {
                iVar19 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x7c)) + 0x2c) + ((uint)(*(uint * PTR32 *)(gen_frame + 0x88)) & 0xff) * 0x24;
                uVar20 = F_00b83880((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,iVar19);
                if (uVar20 == 0) {
                  F_00bbcf80(((undefined * PTR32 *)(gen_frame + 0x74))[0] GEN_EDX_ARG,uVar10 + (int)(*(uint * PTR32 *)(gen_frame + 0x88)));
                }
                else {
                  F_00bbf070(((undefined * PTR32 *)(gen_frame + 0x74))[0] GEN_EDX_ARG,uVar20,*(undefined4 *)(iVar19 + 0x20),
                               uVar10 + (int)(*(uint * PTR32 *)(gen_frame + 0x88)),0,0);
                }
                (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x88)) - 1);
              } while (-1 < (int)(*(uint * PTR32 *)(gen_frame + 0x88)));
            }
            pbVar8 = (*(byte * PTR32 *)(gen_frame + 0x7c));
            (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((*(byte *)(gen_frame + 0x8f)) - 1);
            pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x7c));
            while ((*(byte * PTR32 *)(gen_frame + 0x7c)) = pbVar18, -1 < (int)(*(uint * PTR32 *)(gen_frame + 0x88))) {
              iVar19 = *(int *)(pbVar8 + 0x28) + ((uint)(*(uint * PTR32 *)(gen_frame + 0x88)) & 0xff) * 0x24;
              uVar10 = F_00b83880((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,iVar19);
              if (uVar10 == 0) {
                F_00bbde90(((undefined * PTR32 *)(gen_frame + 0x74))[0] GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x88)));
              }
              else {
                F_00bbef80(((undefined * PTR32 *)(gen_frame + 0x74))[0] GEN_EDX_ARG,uVar10,*(undefined4 *)(iVar19 + 0x20),(*(uint * PTR32 *)(gen_frame + 0x88)),0,0);
              }
              (*(uint * PTR32 *)(gen_frame + 0x88)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x88)) - 1);
              pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x7c));
            }
            bVar9 = pbVar18[5];
            if (bVar9 != 0) {
              (*(uint *)(gen_frame + 0x80)) = 0;
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(uint)bVar9;
              do {
                iVar19 = *(int *)(pbVar18 + 0x3c) + (*(uint *)(gen_frame + 0x80));
                uVar10 = F_00623160((*(undefined * PTR32 *)(gen_frame + 0x60)) GEN_EDX_ARG,iVar19);
                if ((short)uVar10 != -1) {
                  uVar5 = *(ushort *)(iVar19 + 0x2e);
                  uVar6 = *(ushort *)(iVar19 + 0x2c);
                  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar19 + 0x20);
                  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar19 + 0x24);
                  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar19 + 0x28);
                  F_00bbf2a0(((undefined * PTR32 *)(gen_frame + 0x74))[0] GEN_EDX_ARG,uVar10 & 0xffff,&(*(undefined4 *)(gen_frame + 0x30)),(uint)uVar6,(uint)uVar5);
                }
                (*(uint *)(gen_frame + 0x80)) = (*(uint *)(gen_frame + 0x80)) + 0x30;
                ppvVar16 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) - 1);
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar16;
              } while (ppvVar16 != (undefined * PTR32 *)0x0);
            }
            bVar9 = pbVar18[4];
            if (bVar9 != 0) {
              (*(uint *)(gen_frame + 0x80)) = 0;
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(uint)bVar9;
              do {
                iVar19 = *(int *)(pbVar18 + 0x38) + (*(uint *)(gen_frame + 0x80));
                uVar10 = F_00623160((*(undefined * PTR32 *)(gen_frame + 0x60)) GEN_EDX_ARG,iVar19);
                if ((short)uVar10 != -1) {
                  uVar5 = *(ushort *)(iVar19 + 0x2e);
                  fVar4 = *(float *)(iVar19 + 0x30);
                  uVar6 = *(ushort *)(iVar19 + 0x2c);
                  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar19 + 0x20);
                  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar19 + 0x24);
                  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar19 + 0x28);
                  F_00bbf1f0(((undefined * PTR32 *)(gen_frame + 0x74))[0] GEN_EDX_ARG,uVar10 & 0xffff,&(*(undefined4 *)(gen_frame + 0x0)),(uint)uVar6,(uint)uVar5,fVar4);
                }
                (*(uint *)(gen_frame + 0x80)) = (*(uint *)(gen_frame + 0x80)) + 0x34;
                ppvVar16 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) - 1);
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar16;
              } while (ppvVar16 != (undefined * PTR32 *)0x0);
            }
            if (pbVar18[6] != 0) {
              iVar19 = 0;
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(uint)pbVar18[6];
              do {
                iVar11 = *(int *)(pbVar18 + 0x40);
                puVar17 = (ushort *)(iVar11 + iVar19);
                F_00bbf360(((undefined * PTR32 *)(gen_frame + 0x74))[0] GEN_EDX_ARG,(uint)*puVar17,(uint)puVar17[1],
                             (uint)*(ushort *)(iVar11 + 4 + iVar19),
                             (uint)*(ushort *)(iVar11 + 6 + iVar19),*(float *)(puVar17 + 4),
                             *(float *)(iVar11 + 0xc + iVar19));
                iVar19 = iVar19 + 0x10;
                ppvVar16 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) - 1);
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar16;
              } while (ppvVar16 != (undefined * PTR32 *)0x0);
            }
            bVar9 = pbVar18[7];
            if (bVar9 != 0) {
              (*(uint *)(gen_frame + 0x80)) = 0;
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = (undefined * PTR32 *)(uint)bVar9;
              do {
                iVar19 = *(int *)(pbVar18 + 0x44) + (*(uint *)(gen_frame + 0x80));
                uVar10 = F_00b83880((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,iVar19);
                if (uVar10 != 0) {
                  F_00bbcd90(((undefined * PTR32 *)(gen_frame + 0x74))[0] GEN_EDX_ARG,uVar10,(uint)*(ushort *)(iVar19 + 0x20),
                               (uint)*(ushort *)(iVar19 + 0x22));
                }
                (*(uint *)(gen_frame + 0x80)) = (*(uint *)(gen_frame + 0x80)) + 0x24;
                ppvVar16 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) - 1);
                (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppvVar16;
              } while (ppvVar16 != (undefined * PTR32 *)0x0);
            }
          }
        }
        bVar9 = (*(byte *)(gen_frame + 0x65)) + 1;
        (*(byte *)(gen_frame + 0x65)) = bVar9;
      } while (bVar9 < (*(byte *)(gen_frame + 0x5e)));
    }
    if (((((*(byte *)(gen_frame + 0x5d)) != 0) || ((*(byte *)(gen_frame + 0x66)) != 0)) || ((*(byte *)(gen_frame + 0x5f)) != 0)) ||
       (((*(byte *)(gen_frame + 0x64)) != 0 || ((*(byte *)(gen_frame + 0x67)) != 0)))) {
      F_00b83b40((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x6c)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00b85e50 */
GEN_FRAME byte GEN_THISCALL F_00b85e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb85e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b85ee0 */
GEN_FRAME uint GEN_THISCALL F_00b85ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb85ee0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b85f20 */
GEN_FRAME uint GEN_THISCALL F_00b85f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb85f20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b85f50 */
GEN_FRAME uint GEN_THISCALL F_00b85f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb85f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b85f70 */
GEN_FRAME uint GEN_THISCALL F_00b85f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb85f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1;
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

/* ref: FUN_00b85fb0 */
GEN_FRAME uint GEN_THISCALL F_00b85fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb85fb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b85ff0 */
GEN_FRAME uint GEN_THISCALL F_00b85ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb85ff0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b86040 */
GEN_FRAME uint F_00b86040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb86040u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

